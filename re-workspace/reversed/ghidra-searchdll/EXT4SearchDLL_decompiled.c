
undefined8 FUN_180001020(void)

{
  return 1;
}




undefined8 EUCreateEXT4Searcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* 0x1030  2  EUCreateEXT4Searcher */
  puVar1 = (undefined8 *)operator_new(0x100);
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xe;
  puVar1[0xd] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *puVar1 = CEXT4CompleteSearch::vftable;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1b] = 1;
  pvVar2 = operator_new(0x101000);
  puVar1[0x1c] = pvVar2;
  *param_1 = puVar1;
  return 0;
}




undefined8 EUCreateEXT4QuickSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* 0x10e0  1  EUCreateEXT4QuickSearcher */
  puVar1 = (undefined8 *)operator_new(0xa0);
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xe;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = CEXT4QuickSearch::vftable;
  pvVar2 = operator_new(0x100000);
  puVar1[0x12] = pvVar2;
  *param_1 = puVar1;
  return 0;
}




void FUN_180001170(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_180001180(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_180001190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_1800011a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1800011b0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800011bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    return;
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_1800011e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_18001c010 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_60 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_a0 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar2)(puVar2,local_98);
  }
  if ((local_60 != local_98) && (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != plVar1)) {
    *(longlong **)(param_1 + 0x68) = local_60;
    local_60 = plVar3;
    goto LAB_1800012f3;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_1800012b6;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_1800012b6:
  FUN_180001680((longlong)local_98,plVar1);
  FUN_180001680((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_1800012f3:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))
              (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180001350(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}




undefined1 FUN_180001380(void)

{
  return 0;
}




void FUN_180001390(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




undefined8 * FUN_1800013a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001420(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = CEXT4QuickSearch::vftable;
  if ((void *)param_1[0x12] != (void *)0x0) {
    FUN_180013b3c((void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x13] = 0;
  }
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_1800014e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}




longlong FUN_1800014f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong in_stack_ffffffffffffffc8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x98);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  puVar2 = (undefined8 *)operator_new(0x60);
  plVar3 = FUN_1800020e0(puVar2,param_2);
  *(longlong **)(param_1 + 0x98) = plVar3;
  if ((plVar3 != (longlong *)0x0) && (param_3 != 0)) {
    iVar1 = (**(code **)(*plVar3 + 0x30))
                      (plVar3,*(undefined8 *)(param_1 + 0x90),0x400,0x400,
                       in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    if (iVar1 < 1) {
      return -1;
    }
    uVar4 = FUN_180004710(*(int **)(param_1 + 0x90));
    if ((char)uVar4 == '\0') {
      return -2;
    }
    puVar2 = (undefined8 *)operator_new(0xe00);
    puVar2 = FUN_1800035b0(puVar2,*(undefined8 *)(param_1 + 0x88),param_3,
                           *(undefined8 *)(param_1 + 0x98),0);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = *(undefined8 *)(param_1 + 0x70);
      lVar5 = FUN_180003de0((longlong)puVar2,1);
      if ((*(char *)((longlong)puVar2 + 0x511) != '\0') &&
         ((longlong *)puVar2[5] != (longlong *)0x0)) {
        *(undefined4 *)(puVar2 + 0xa3) = 4;
        puVar2[0xa5] = puVar2[0xa4];
        (**(code **)(*(longlong *)puVar2[5] + 8))();
      }
      (**(code **)*puVar2)(puVar2,1);
      return (longlong)(int)lVar5;
    }
  }
  return 0;
}




void FUN_180001680(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
        return;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
      param_2[7] = 0;
    }
  }
  return;
}




undefined8 FUN_1800016f0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_180001700(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_180001710(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_18001c010 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_60 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_a0 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar2)(puVar2,local_98);
  }
  if ((local_60 != local_98) && (plVar3 = *(longlong **)(param_1 + 0xb0), plVar3 != plVar1)) {
    *(longlong **)(param_1 + 0xb0) = local_60;
    local_60 = plVar3;
    goto LAB_180001823;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_1800017e6;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_1800017e6:
  FUN_180001680((longlong)local_98,plVar1);
  FUN_180001680((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_180001823:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))
              (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




undefined8 * FUN_180001880(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0xf);
    param_1[0x16] = 0;
  }
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined8 FUN_180001910(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}




void FUN_180001920(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  return;
}




void FUN_180001930(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return;
}




undefined8 * FUN_180001940(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *param_1 = CEXT4CompleteSearch::vftable;
  if ((void *)param_1[0x1c] != (void *)0x0) {
    FUN_180013b3c((void *)param_1[0x1c]);
    param_1[0x1c] = 0;
  }
  plVar4 = (longlong *)param_1[0x1d];
  if (plVar4 != (longlong *)param_1[0x1e]) {
    do {
      puVar1 = (undefined8 *)*plVar4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (longlong *)param_1[0x1e]);
  }
  param_1[0x1e] = param_1[0x1d];
  pvVar2 = (void *)param_1[0x1d];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    if ((0xfff < (param_1[0x1f] - (longlong)pvVar2 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar3);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  *param_1 = ICompleteFileSystemSearchController::vftable;
  plVar4 = (longlong *)param_1[0x16];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_1 + 0xf);
    param_1[0x16] = 0;
  }
  plVar4 = (longlong *)param_1[0xd];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_180001a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar1 = (undefined8 *)operator_new(0x60);
  puVar1 = FUN_1800020e0(puVar1,param_2);
  *(undefined8 **)(param_1 + 0xb8) = puVar1;
  return;
}




longlong FUN_180001b00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *local_res8;
  ulonglong in_stack_ffffffffffffffb8;
  
  lVar7 = 0;
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xb8), plVar1 != (longlong *)0x0)) {
    if ((undefined **)*plVar1 == CEXT4CatchBufferDeviceProxy::vftable) {
      iVar3 = 0;
      if ((longlong *)plVar1[5] != (longlong *)0x0) {
        iVar3 = (**(code **)(*(longlong *)plVar1[5] + 0x28))();
      }
    }
    else {
      iVar3 = (*(code *)((undefined **)*plVar1)[5])();
    }
    if (0 < param_3) {
      do {
        if ((*(longlong **)(param_1 + 0xd0) == (longlong *)0x0) ||
           (iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))(), iVar4 == 0)) break;
        lVar8 = (lVar7 + param_2) * (longlong)iVar3;
        in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffffffffff00;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))
                          (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xe0),lVar8,
                           (longlong)iVar3,in_stack_ffffffffffffffb8);
        if (iVar4 < 1) {
          return 0;
        }
        uVar5 = FUN_180004710(*(int **)(param_1 + 0xe0));
        if (((char)uVar5 != '\0') && (uVar5 = lVar8 - 0x400, -1 < (longlong)uVar5)) {
          puVar6 = (undefined8 *)operator_new(0xe00);
          puVar6 = FUN_1800035b0(puVar6,*(undefined8 *)(param_1 + 200),
                                 *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xb8),
                                 uVar5);
          if (puVar6 == (undefined8 *)0x0) break;
          puVar6[4] = *(undefined8 *)(param_1 + 0xc0);
          local_res8 = puVar6;
          lVar8 = FUN_180003de0((longlong)puVar6,0);
          if ((int)lVar8 < 1) {
            (**(code **)*puVar6)(puVar6,1);
            in_stack_ffffffffffffffb8 = uVar5;
          }
          else {
            puVar2 = *(undefined8 **)(param_1 + 0xf0);
            if (*(undefined8 **)(param_1 + 0xf8) == puVar2) {
              FUN_180001cf0((longlong *)(param_1 + 0xe8),puVar2,&local_res8);
              in_stack_ffffffffffffffb8 = uVar5;
            }
            else {
              *puVar2 = puVar6;
              *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 8;
              in_stack_ffffffffffffffb8 = uVar5;
            }
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_3);
    }
    lVar7 = 1;
  }
  return lVar7;
}




void FUN_180001cc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  return;
}




undefined8 FUN_180001cd0(void)

{
  return 0;
}




undefined8 FUN_180001ce0(void)

{
  return 7;
}




longlong FUN_180001cf0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *_Dst;
  longlong lVar10;
  size_t _Size;
  undefined1 local_res8 [8];
  
  lVar6 = *param_1;
  lVar10 = (longlong)param_2 - lVar6 >> 3;
  lVar3 = param_1[1] - lVar6 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
    FUN_180001ea0();
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar7 = param_1[2] - lVar6 >> 3;
  uVar1 = lVar3 + 1;
  uVar4 = uVar1;
  if ((uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) && (uVar4 = (uVar7 >> 1) + uVar7, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  uVar7 = uVar4 * 8;
  if (uVar4 < 0x2000000000000000) {
    uVar4 = uVar7;
    if (0xfff < uVar7) goto LAB_180001d93;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_180001d93:
    uVar8 = uVar4 + 0x27;
    if (uVar8 <= uVar4) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar8);
    if (pvVar5 == (void *)0x0) goto LAB_180001e90;
    _Dst = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar5;
  }
  *(undefined8 *)((longlong)_Dst + lVar10 * 8) = *param_3;
  pvVar5 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  FUN_180001ec0(local_res8);
  if (param_2 == pvVar5) {
    _Size = (longlong)pvVar5 - (longlong)pvVar9;
    pvVar5 = _Dst;
    param_2 = pvVar9;
  }
  else {
    memmove(_Dst,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    pvVar5 = (void *)((longlong)_Dst + (lVar10 + 1) * 8);
    FUN_180001ec0(local_res8);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar5,param_2,_Size);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    pvVar9 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9)))) {
LAB_180001e90:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar9);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 8);
  param_1[2] = (longlong)(uVar7 + (longlong)_Dst);
  return *param_1 + lVar10 * 8;
}




void FUN_180001ea0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined1 * FUN_180001ec0(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void FUN_180001ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  return;
}




void FUN_180001f10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180001f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}




longlong FUN_180001f30(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)((undefined **)*param_1)[3];
    if ((undefined **)*param_1 != CEXT4CatchBufferDeviceProxy::vftable) {
                    /* WARNING: Could not recover jumptable at 0x000180001f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE);
      return lVar1;
    }
    lVar1 = 0;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*(longlong *)param_1[5] + 0x18))();
      return lVar1;
    }
  }
  return lVar1;
}




undefined8 FUN_180001f70(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack0000000000000028;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 != 0) {
    uStack0000000000000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x000180001fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 8))
                      (param_1,param_2,param_3 / (longlong)iVar1,param_4 / (longlong)iVar1);
    return uVar2;
  }
  return 0;
}




longlong * FUN_180001fb0(undefined8 param_1,longlong *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_180002a10(param_2,&PTR_180016af0,0);
  return param_2;
}




undefined8 FUN_180001ff0(void)

{
  return 0xc;
}




undefined1 FUN_180002000(void)

{
  return 1;
}




undefined8 FUN_180002010(void)

{
  return 0xffffffff;
}




undefined8 * FUN_180002020(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002080(undefined8 *param_1,uint param_2)

{
  *param_1 = EXT4CatchBufferObj::vftable;
  VirtualFree((LPVOID)param_1[3],0,0x8000);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800020e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0xe;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = CEXT4CatchBufferDeviceProxy::vftable;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = FUN_180002f30();
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 0xb) = 8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x1000;
  return param_1;
}




undefined8 * FUN_180002160(undefined8 *param_1,uint param_2)

{
  FUN_1800021a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_1800021a0(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  void *pvVar10;
  longlong *plVar11;
  
  *param_1 = CEXT4CatchBufferDeviceProxy::vftable;
  plVar8 = *(longlong **)param_1[9];
  if (plVar8 != (longlong *)param_1[9]) {
    do {
      puVar2 = (undefined8 *)plVar8[5];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar3 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar11 = plVar3;
        plVar6 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar11 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar7 = (longlong *)plVar8[1];
        plVar6 = plVar8;
        while ((plVar11 = plVar7, cVar1 == '\0' && (plVar6 == (longlong *)plVar11[2]))) {
          cVar1 = *(char *)(plVar11[1] + 0x19);
          plVar7 = (longlong *)plVar11[1];
          plVar6 = plVar11;
        }
      }
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        plVar3 = (longlong *)*plVar3;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
        while (cVar1 == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar6 = (longlong *)plVar8[1];
        plVar3 = plVar8;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar6 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
      plVar8 = FUN_180002bb0(param_1 + 9,plVar8);
      FUN_180013b3c(plVar8);
      plVar8 = plVar11;
    } while (plVar11 != (longlong *)param_1[9]);
  }
  param_1[7] = param_1[6];
  lVar4 = param_1[9];
  plVar8 = *(longlong **)(lVar4 + 8);
  lVar9 = lVar4;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    do {
      FUN_180002f60(param_1 + 9,(longlong *)plVar8[2]);
      plVar3 = (longlong *)*plVar8;
      FUN_180013b3c(plVar8);
      plVar8 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar9 = param_1[9];
  }
  *(longlong *)(lVar9 + 8) = lVar4;
  *(longlong *)param_1[9] = lVar4;
  *(longlong *)(param_1[9] + 0x10) = lVar4;
  param_1[10] = 0;
  FUN_180013b3c((void *)param_1[9]);
  pvVar5 = (void *)param_1[6];
  if (pvVar5 != (void *)0x0) {
    pvVar10 = pvVar5;
    if ((0xfff < (param_1[8] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar10 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar10);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = IStorageDevice::vftable;
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    param_1[4] = 0;
  }
  return;
}




undefined8 FUN_1800023b0(longlong param_1,void *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  LPVOID pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  size_t sVar17;
  ulonglong in_stack_ffffffffffffff98;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  iVar3 = 0;
  plVar7 = *(longlong **)(param_1 + 0x28);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  if ((undefined **)*plVar7 == CEXT4CatchBufferDeviceProxy::vftable) {
    if ((longlong *)plVar7[5] != (longlong *)0x0) {
      iVar3 = (**(code **)(*(longlong *)plVar7[5] + 0x28))();
    }
  }
  else {
    iVar3 = (*(code *)((undefined **)*plVar7)[5])();
  }
  if (iVar3 == 0) {
    iVar3 = 0x200;
  }
  lVar10 = (longlong)(int)(0x1400000 / (longlong)iVar3);
  if (param_4 <= lVar10) {
    puVar5 = (undefined8 *)(param_3 / lVar10);
    local_50 = param_3 % lVar10;
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    cVar1 = *(char *)((longlong)puVar8[1] + 0x19);
    puVar16 = puVar8;
    puVar15 = (undefined8 *)puVar8[1];
    while (cVar1 == '\0') {
      if ((longlong)puVar15[4] < (longlong)puVar5) {
        puVar11 = (undefined8 *)puVar15[2];
        puVar15 = puVar16;
      }
      else {
        puVar11 = (undefined8 *)*puVar15;
      }
      puVar16 = puVar15;
      puVar15 = puVar11;
      cVar1 = *(char *)((longlong)puVar11 + 0x19);
    }
    if ((puVar16 == puVar8) || ((longlong)puVar5 < (longlong)puVar16[4])) {
      puVar16 = puVar8;
    }
    local_58 = puVar5;
    if ((puVar16 != puVar8) && (lVar2 = puVar16[5], lVar2 != 0)) {
      lVar12 = iVar3 * local_50;
      sVar17 = iVar3 * param_4;
      uVar4 = 0;
      if ((*(longlong *)(lVar2 + 0x18) != 0) &&
         ((longlong)(sVar17 + lVar12) <= *(longlong *)(lVar2 + 0x10) + 0x200)) {
        memcpy(param_2,(void *)(lVar12 + *(longlong *)(lVar2 + 0x18)),sVar17);
        uVar4 = 1;
      }
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
    }
    plVar7 = *(longlong **)(param_1 + 0x30);
    if (0x1d < (ulonglong)(*(longlong *)(param_1 + 0x38) - (longlong)plVar7 >> 3)) {
      lVar2 = *plVar7;
      memmove(plVar7,plVar7 + 1,*(longlong *)(param_1 + 0x38) - (longlong)(plVar7 + 1));
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -8;
      plVar7 = *(longlong **)(param_1 + 0x48);
      cVar1 = *(char *)(plVar7[1] + 0x19);
      plVar14 = plVar7;
      plVar13 = (longlong *)plVar7[1];
      while (cVar1 == '\0') {
        if (plVar13[4] < lVar2) {
          plVar6 = (longlong *)plVar13[2];
          plVar13 = plVar14;
        }
        else {
          plVar6 = (longlong *)*plVar13;
        }
        plVar14 = plVar13;
        plVar13 = plVar6;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
      }
      if ((plVar14 == plVar7) || (lVar2 < plVar14[4])) {
        plVar14 = plVar7;
      }
      if (plVar14 != plVar7) {
        puVar8 = (undefined8 *)plVar14[5];
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        if (*(char *)(plVar14[2] + 0x19) == '\0') {
          plVar7 = *(longlong **)plVar14[2];
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
          while (cVar1 == '\0') {
            plVar7 = (longlong *)*plVar7;
            cVar1 = *(char *)((longlong)plVar7 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar14[1] + 0x19);
          plVar13 = (longlong *)plVar14[1];
          plVar7 = plVar14;
          while ((plVar6 = plVar13, cVar1 == '\0' && (plVar7 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x19);
            plVar13 = (longlong *)plVar6[1];
            plVar7 = plVar6;
          }
        }
        plVar7 = FUN_180002bb0((longlong *)(param_1 + 0x48),plVar14);
        FUN_180013b3c(plVar7);
      }
    }
    puVar8 = (undefined8 *)operator_new(0x20);
    *puVar8 = EXT4CatchBufferObj::vftable;
    puVar8[1] = (longlong)puVar5 * lVar10;
    puVar8[2] = 0x1400000;
    local_48 = puVar8;
    pvVar9 = VirtualAlloc((LPVOID)0x0,0x1400200,0x1000,4);
    puVar8[3] = pvVar9;
    uVar4 = puVar8[1];
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
              (*(longlong **)(param_1 + 0x28),pvVar9,uVar4,lVar10,
               in_stack_ffffffffffffff98 & 0xffffffffffffff00);
    local_48 = puVar5;
    local_40 = puVar8;
    plVar7 = (longlong *)FUN_1800030a0((undefined8 *)(param_1 + 0x48),&local_48);
    FUN_1800030d0((longlong *)(param_1 + 0x48),&local_48,uVar4,plVar7 + 4,plVar7);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if (*(longlong **)(param_1 + 0x40) == plVar7) {
      FUN_180001cf0((longlong *)(param_1 + 0x30),plVar7,&local_58);
    }
    else {
      *plVar7 = (longlong)puVar5;
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 8;
    }
    uVar4 = 0;
    lVar10 = iVar3 * local_50;
    sVar17 = iVar3 * param_4;
    if ((puVar8[3] != 0) && ((longlong)(sVar17 + lVar10) <= puVar8[2] + 0x200)) {
      memcpy(param_2,(void *)(lVar10 + puVar8[3]),sVar17);
      uVar4 = 1;
    }
    if ((char)uVar4 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
                (*(longlong **)(param_1 + 0x28),param_2,param_3,param_4,0);
    }
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000245a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
                    (*(longlong **)(param_1 + 0x28),param_2,param_3,param_4);
  return uVar4;
}




undefined8 FUN_180002750(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000275c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_180002770(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000277c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    return uVar1;
  }
  return 0;
}




undefined8
FUN_180002790(longlong param_1,void *param_2,longlong param_3,longlong param_4,undefined1 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
    lVar4 = (longlong)iVar2;
    if (lVar4 == 0) {
      lVar4 = 0x200;
    }
    if ((param_3 % lVar4 == 0) &&
       (auVar1._8_8_ = 0, auVar1._0_8_ = SUB168(SEXT816(0x1400000),8),
       param_4 <= SUB168((auVar1 << 0x40 | ZEXT816(0x1400000)) / SEXT816(lVar4),0))) {
      uVar3 = FUN_1800023b0(param_1,param_2,param_3 / lVar4,(param_4 + -1 + lVar4) / lVar4);
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                        (*(longlong **)(param_1 + 0x28),param_2,param_3,param_4,param_5);
    }
  }
  return uVar3;
}




void FUN_180002850(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
    return;
  }
  return;
}




void FUN_180002870(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000287c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))();
    return;
  }
  return;
}




void FUN_180002890(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    return;
  }
  return;
}




ulonglong FUN_1800028b0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800028bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_1800028d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800028dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1800028f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800028fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xc0))();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_180002910(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000291c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 200))();
    return uVar1;
  }
  return 0;
}




void FUN_180002930(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000293c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))();
    return;
  }
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
               (longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_1800029b0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




longlong * FUN_180002a10(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Dst;
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7fffffffffffffff < param_3) {
      FUN_180003080();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_3 | 0xf;
    uVar8 = 0x7fffffffffffffff;
    if (((uVar5 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar8 = uVar5, uVar5 < uVar6)) {
      uVar8 = uVar6;
    }
    uVar5 = uVar8 + 1;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar6 = uVar8 + 0x28;
      if (uVar6 <= uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar6);
      if (pvVar3 == (void *)0x0) goto LAB_180002b53;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = param_3;
    param_1[3] = uVar8;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      pvVar7 = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (pvVar7 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_180002b53:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar7);
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
  void *pvVar1;
  
  pvVar1 = param_2;
  if ((0xfff < (ulonglong)(param_3 * 8)) &&
     (pvVar1 = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_180013b3c(pvVar1);
  return;
}




longlong * FUN_180002bb0(longlong *param_1,longlong *param_2)

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
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar3 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar7;
              }
              else {
                puVar3[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar5 = (longlong *)plVar6[2];
            plVar6[1] = (longlong)plVar7;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                FUN_180002fc0(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180003020(param_1,(longlong)plVar6);
              break;
            }
LAB_180002eb2:
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
            plVar5 = (longlong *)*plVar6;
            plVar6[1] = lVar2;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_180002eb2;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180003020(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180002fc0(param_1,plVar6);
            break;
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




void FUN_180002f30(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180002f60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180002f60(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180002fc0(longlong *param_1,longlong *param_2)

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




void FUN_180003020(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_180003080(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800030a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180003230(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  return;
}




undefined8 *
FUN_1800030d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar7 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar6 = (longlong *)plVar2[1];
    do {
      plVar7 = plVar6;
      bVar3 = *param_4 < plVar7[4];
      if (*param_4 < plVar7[4]) {
        plVar6 = (longlong *)*plVar7;
      }
      else {
        plVar6 = (longlong *)plVar7[2];
      }
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  plVar6 = plVar7;
  if (bVar3) {
    if (plVar7 == (longlong *)*plVar2) {
      puVar5 = FUN_180003270(param_1,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar6 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar2 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 == (longlong *)*plVar4))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
        }
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar4;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  if (plVar6[4] < *param_4) {
    puVar5 = FUN_180003270(param_1,&local_res8,bVar3,plVar7,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_180013b3c(param_5);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180003230(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180003260(undefined8 param_1,void *param_2)

{
  FUN_180013b3c(param_2);
  return;
}




undefined8 *
FUN_180003270(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    FUN_180003260(0x555555555555554,param_6);
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
      goto LAB_1800032f9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_1800032f9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_1800032f9:
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
        goto LAB_1800034e5;
      }
LAB_180003417:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180003417;
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
LAB_1800034e5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined * FUN_180003520(void)

{
  return &DAT_18001cab8;
}




/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180003520();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 FUN_180003590(longlong param_1)

{
  if (param_1 != 0) {
    return CONCAT44(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 4));
  }
  return 0;
}




undefined8 *
FUN_1800035b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = Ext4Volume::vftable;
  param_1[1] = param_4;
  iVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x200;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x1000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 100) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  uVar3 = FUN_18000a6f0();
  param_1[0x95] = uVar3;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  uVar3 = FUN_18000a6c0();
  param_1[0x97] = uVar3;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  uVar3 = FUN_18000a690();
  param_1[0x99] = uVar3;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x9b] = uVar3;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  uVar3 = FUN_18000a690();
  param_1[0x9d] = uVar3;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x9f] = uVar3;
  param_1[0xa1] = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0x101;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x1a7] = uVar3;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  uVar3 = FUN_18000a5a0();
  param_1[0x1af] = uVar3;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  uVar3 = FUN_18000a4b0();
  param_1[0x1b1] = uVar3;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x1b3] = uVar3;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x1b9] = uVar3;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x1bb] = uVar3;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  uVar3 = FUN_180002f30();
  param_1[0x1bd] = uVar3;
  *(undefined4 *)(param_1 + 0x1bf) = 1;
  memset(param_1 + 0xf,0,0x420);
  memset(param_1 + 0xa3,0,0x820);
  param_1[6] = param_5;
  param_1[5] = param_3;
  param_1[2] = param_2;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    if ((undefined **)*plVar1 == CEXT4CatchBufferDeviceProxy::vftable) {
      if ((longlong *)plVar1[5] != (longlong *)0x0) {
        iVar2 = (**(code **)(*(longlong *)plVar1[5] + 0x28))();
      }
    }
    else {
      iVar2 = (*(code *)((undefined **)*plVar1)[5])();
    }
    if (iVar2 == 0) {
      iVar2 = 0x200;
    }
    *(int *)((longlong)param_1 + 0x3c) = iVar2;
  }
  return param_1;
}




undefined8 * FUN_180003880(undefined8 *param_1,uint param_2)

{
  FUN_180003a90(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_1800038c0(longlong *param_1)

{
  FUN_180009450(param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_1800038e0(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_18000a210(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003910(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_18000a020(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003940(longlong *param_1)

{
  FUN_180009130(param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003960(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009e30(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003990(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180002f60(param_1,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003a30(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009c80(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003a60(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009ad0(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




void FUN_180003a90(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 local_res8;
  
  *param_1 = Ext4Volume::vftable;
  FUN_180004b80((longlong)param_1);
  FUN_180009130(param_1 + 0x9f);
  FUN_180009130(param_1 + 0x1bd);
  FUN_180013b3c((void *)param_1[0x1bd]);
  FUN_180009130(param_1 + 0x1bb);
  FUN_180013b3c((void *)param_1[0x1bb]);
  FUN_180009130(param_1 + 0x1b9);
  FUN_180013b3c((void *)param_1[0x1b9]);
  pvVar6 = (void *)param_1[0x1b5];
  if (pvVar6 != (void *)0x0) {
    pvVar5 = pvVar6;
    if ((0xfff < (ulonglong)((param_1[0x1b7] - (longlong)pvVar6 >> 3) * 8)) &&
       (pvVar5 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar5);
    param_1[0x1b5] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b7] = 0;
  }
  plVar1 = param_1 + 0x1b3;
  lVar2 = *plVar1;
  lVar4 = lVar2;
  plVar7 = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_180002f60(plVar1,(longlong *)plVar7[2]);
      plVar3 = (longlong *)*plVar7;
      FUN_180013b3c(plVar7);
      plVar7 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0x1b4] = 0;
  FUN_180013b3c((void *)*plVar1);
  FUN_180009ad0(param_1 + 0x1b1,&local_res8,*(longlong **)param_1[0x1b1],(longlong *)param_1[0x1b1])
  ;
  FUN_180013b3c((void *)param_1[0x1b1]);
  FUN_180009c80(param_1 + 0x1af,&local_res8,*(longlong **)param_1[0x1af],(longlong *)param_1[0x1af])
  ;
  pvVar6 = (void *)param_1[0x1af];
  FUN_180013b3c(pvVar6);
  pvVar5 = (void *)param_1[0x1ac];
  if (pvVar5 != (void *)0x0) {
    deallocate(pvVar6,pvVar5,param_1[0x1ae] - (longlong)pvVar5 >> 3);
    param_1[0x1ac] = 0;
    param_1[0x1ad] = 0;
    param_1[0x1ae] = 0;
  }
  pvVar5 = (void *)param_1[0x1a9];
  if (pvVar5 != (void *)0x0) {
    deallocate(pvVar6,pvVar5,param_1[0x1ab] - (longlong)pvVar5 >> 3);
    param_1[0x1a9] = 0;
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 0;
  }
  FUN_180003990(param_1 + 0x1a7);
  FUN_180009130(param_1 + 0x9f);
  FUN_180013b3c((void *)param_1[0x9f]);
  FUN_180009e30(param_1 + 0x9d,&local_res8,*(longlong **)param_1[0x9d],(longlong *)param_1[0x9d]);
  FUN_180013b3c((void *)param_1[0x9d]);
  FUN_180009130(param_1 + 0x9b);
  FUN_180013b3c((void *)param_1[0x9b]);
  FUN_18000a020(param_1 + 0x99,&local_res8,*(longlong **)param_1[0x99],(longlong *)param_1[0x99]);
  FUN_180013b3c((void *)param_1[0x99]);
  FUN_1800038e0(param_1 + 0x97);
  FUN_1800038c0(param_1 + 0x95);
  return;
}




longlong FUN_180003de0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  LPVOID pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  void *local_18;
  
  *(undefined1 *)(param_1 + 0x511) = param_2;
  if ((*(longlong *)(param_1 + 8) == 0) || (iVar7 = FUN_1800047c0(param_1), iVar7 < 0)) {
    lVar10 = 0xffffffff;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x20);
    lVar10 = 0;
    if ((plVar3 != (longlong *)0x0) && (*plVar3 == 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
      ppuVar4 = (undefined **)**(longlong **)(param_1 + 8);
      if (ppuVar4 == CEXT4CatchBufferDeviceProxy::vftable) {
        plVar5 = (longlong *)(*(longlong **)(param_1 + 8))[5];
        lVar8 = lVar10;
        if (plVar5 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar5 + 0x18))();
        }
      }
      else {
        lVar8 = (*(code *)ppuVar4[3])();
      }
      FUN_180011e20(plVar3,lVar8 / (longlong)*(int *)(param_1 + 0x40),uVar2);
    }
    uVar12 = 0x1000;
    pvVar9 = VirtualAlloc((LPVOID)0x0,0xa00000,0x1000,4);
    *(LPVOID *)(param_1 + 0x48) = pvVar9;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_30 = param_1;
    local_28 = (longlong *)FUN_180002f30();
    local_18 = (void *)thunk_FUN_180013b78(0x100200);
    FUN_18000e5b0(&local_30,*(int *)(param_1 + 0x6c),uVar12);
    pcVar13 = (char *)(param_1 + 0x88);
    uVar12 = 0;
    FUN_1800068b0(param_1,(longlong *******)0x2,(void *)0x0,pcVar13);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x6c);
    FUN_18000e890(&local_30,*(uint *)(param_1 + 0x6c),uVar12);
    FUN_180004b80(param_1);
    FUN_1800041e0(param_1,uVar11,uVar12,pcVar13);
    if (local_18 != (void *)0x0) {
      FUN_180013b3c(local_18);
      local_18 = (void *)0x0;
    }
    plVar5 = local_28;
    cVar1 = *(char *)(local_28[1] + 0x19);
    plVar3 = (longlong *)local_28[1];
    while (cVar1 == '\0') {
      FUN_180002f60(&local_28,(longlong *)plVar3[2]);
      plVar6 = (longlong *)*plVar3;
      FUN_180013b3c(plVar3);
      plVar3 = plVar6;
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
    }
    local_28[1] = (longlong)plVar5;
    *local_28 = (longlong)plVar5;
    local_28[2] = (longlong)plVar5;
    local_20 = 0;
    FUN_180013b3c(local_28);
  }
  return lVar10;
}




ulonglong FUN_180003fb0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  
  puVar6 = *(ulonglong **)(param_1 + 0xd98);
  puVar12 = (ulonglong *)puVar6[1];
  cVar1 = *(char *)((longlong)puVar12 + 0x19);
  puVar7 = puVar12;
  puVar9 = puVar6;
  if (cVar1 == '\0') {
    do {
      if ((longlong)puVar7[4] < param_2) {
        puVar4 = (ulonglong *)puVar7[2];
      }
      else {
        puVar4 = (ulonglong *)*puVar7;
        puVar9 = puVar7;
      }
      puVar7 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    if ((puVar9 != puVar6) && ((longlong)puVar9[4] <= param_2)) goto LAB_180003ff7;
  }
  puVar9 = puVar6;
LAB_180003ff7:
  puVar7 = puVar6;
  puVar4 = puVar12;
  if (puVar9 == puVar6) {
    return (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  while (cVar1 == '\0') {
    if ((longlong)puVar4[4] < param_2) {
      puVar8 = (ulonglong *)puVar4[2];
      puVar4 = puVar6;
    }
    else {
      if ((*(char *)((longlong)puVar7 + 0x19) != '\0') && (param_2 < (longlong)puVar4[4])) {
        puVar7 = puVar4;
      }
      puVar8 = (ulonglong *)*puVar4;
    }
    puVar6 = puVar4;
    puVar4 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    puVar12 = (ulonglong *)*puVar7;
  }
  cVar1 = *(char *)((longlong)puVar12 + 0x19);
  while (cVar1 == '\0') {
    if (param_2 < (longlong)puVar12[4]) {
      puVar4 = (ulonglong *)*puVar12;
      puVar7 = puVar12;
    }
    else {
      puVar4 = (ulonglong *)puVar12[2];
    }
    puVar12 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x19);
  }
  iVar11 = 0;
  iVar10 = 0;
  while (puVar6 != puVar7) {
    puVar12 = (ulonglong *)puVar6[2];
    iVar10 = iVar10 + 1;
    if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar12 + 0x19);
      puVar6 = puVar12;
      puVar12 = (ulonglong *)*puVar12;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar12 + 0x19);
        puVar6 = puVar12;
        puVar12 = (ulonglong *)*puVar12;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
      puVar4 = (ulonglong *)puVar6[1];
      puVar12 = puVar6;
      while ((puVar6 = puVar4, cVar1 == '\0' && (puVar12 == (ulonglong *)puVar6[2]))) {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar4 = (ulonglong *)puVar6[1];
        puVar12 = puVar6;
      }
    }
  }
  if (iVar10 < 1) {
    return (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  do {
    plVar2 = (longlong *)puVar9[5];
    if (plVar2 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar2 + 8))(plVar2);
      if (((int)uVar5 != 0) || ((*(byte *)((longlong)plVar2 + 0x72) & 4) != 0)) {
LAB_1800041b3:
        return CONCAT71((int7)(uVar5 >> 8),1);
      }
      plVar2 = (longlong *)plVar2[6];
      if (plVar2 != (longlong *)0x0) {
        if ((undefined **)*plVar2 == CEXT4FileProperties::vftable) {
          uVar5 = (ulonglong)*(ushort *)((longlong)plVar2 + 0x39);
        }
        else {
          uVar5 = (*(code *)((undefined **)*plVar2)[7])();
        }
        bVar3 = (byte)uVar5 >> 4;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar3) & 0xffffffffffffff01;
        if ((bVar3 & 1) != 0) goto LAB_1800041b3;
      }
    }
    puVar6 = (ulonglong *)puVar9[2];
    iVar11 = iVar11 + 1;
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar6 + 0x19);
      puVar9 = puVar6;
      puVar12 = (ulonglong *)*puVar6;
      while (cVar1 == '\0') {
        puVar6 = (ulonglong *)*puVar12;
        puVar9 = puVar12;
        puVar12 = puVar6;
        cVar1 = *(char *)((longlong)puVar6 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar7 = (ulonglong *)puVar9[1];
      puVar12 = puVar9;
      while ((puVar6 = puVar7, puVar9 = puVar6, cVar1 == '\0' && (puVar12 == (ulonglong *)puVar6[2])
             )) {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar7 = (ulonglong *)puVar6[1];
        puVar12 = puVar6;
      }
    }
    if (iVar10 <= iVar11) {
      return (ulonglong)puVar6 & 0xffffffffffffff00;
    }
  } while( true );
}




void FUN_1800041e0(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  char local_128 [272];
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_18001c010 ^ (ulonglong)auStack_158;
  FUN_1800084a0(param_1);
  lVar6 = 0x104;
  memset(local_128,0,0x104);
  plVar5 = (longlong *)**(longlong **)(param_1 + 0xdc8);
  if (plVar5 != *(longlong **)(param_1 + 0xdc8)) {
    do {
      plVar2 = (longlong *)plVar5[4];
      lVar7 = plVar5[5];
      uVar4 = FUN_180003fb0(param_1,(longlong)plVar2);
      if ((char)uVar4 == '\0') {
        memset(local_128,0,0x104);
        snprintf(local_128,0x104,"iNode%I64d",plVar2);
        param_4 = local_128;
        FUN_1800089b0(param_1,plVar2,lVar7,param_4);
        lVar6 = lVar7;
      }
      plVar2 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar2 = plVar5;
        }
      }
    } while (plVar5 != *(longlong **)(param_1 + 0xdc8));
  }
  FUN_180009130((longlong *)(param_1 + 0xdd8));
  *(undefined8 *)(param_1 + 0xdb0) = *(undefined8 *)(param_1 + 0xda8);
  plVar5 = (longlong *)(param_1 + 0x4b8);
  lVar7 = *plVar5;
  FUN_180009800(plVar5,*(longlong **)(lVar7 + 8));
  *(longlong *)(*plVar5 + 8) = lVar7;
  *(longlong *)*plVar5 = lVar7;
  *(longlong *)(*plVar5 + 0x10) = lVar7;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  FUN_180009450((longlong *)(param_1 + 0x4a8));
  plVar5 = (longlong *)(param_1 + 0x4c8);
  lVar7 = *plVar5;
  FUN_180009710(plVar5,*(longlong **)(lVar7 + 8),lVar6,param_4);
  *(longlong *)(*plVar5 + 8) = lVar7;
  *(longlong *)*plVar5 = lVar7;
  *(longlong *)(*plVar5 + 0x10) = lVar7;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  FUN_180009130((longlong *)(param_1 + 0x4d8));
  plVar5 = (longlong *)(param_1 + 0x4e8);
  lVar7 = *plVar5;
  FUN_180009620(plVar5,*(longlong **)(lVar7 + 8),lVar6,param_4);
  *(longlong *)(*plVar5 + 8) = lVar7;
  *(longlong *)*plVar5 = lVar7;
  *(longlong *)(*plVar5 + 0x10) = lVar7;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




void FUN_1800043f0(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  void **ppvVar3;
  longlong *******ppppppplVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  void **ppvVar8;
  void **ppvVar9;
  longlong *plVar10;
  longlong *plVar11;
  void **ppvVar12;
  longlong *plVar13;
  void *pvVar14;
  void *pvVar15;
  void *local_res10;
  void **local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  local_40 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_2 + 6) == '\x01') {
    cVar1 = (char)param_2[2];
  }
  else {
    if (*(char *)((longlong)param_2 + 6) != '\x02') {
      return;
    }
    if ((char)param_2[2] != '.') {
      return;
    }
    cVar1 = *(char *)((longlong)param_2 + 9);
  }
  if (cVar1 != '.') {
    return;
  }
  if (param_2 + 3 == (uint *)0x0) {
    return;
  }
  if (*(char *)((longlong)param_2 + 0x12) == '\x01') {
    cVar1 = (char)param_2[5];
  }
  else {
    if (*(char *)((longlong)param_2 + 0x12) != '\x02') {
      return;
    }
    if ((char)param_2[5] != '.') {
      return;
    }
    cVar1 = *(char *)((longlong)param_2 + 0x15);
  }
  if (cVar1 != '.') {
    return;
  }
  uVar2 = *param_2;
  pvVar14 = (void *)(ulonglong)uVar2;
  pvVar15 = (void *)(ulonglong)param_2[3];
  uVar6 = FUN_180006560(param_1,(longlong)pvVar14,param_3,param_4,'\x01');
  if ((char)uVar6 != '\0') {
    return;
  }
  local_res10 = pvVar14;
  if ((pvVar14 == (void *)0x2) ||
     (uVar7 = FUN_180003fb0(param_1,(ulonglong)uVar2), (char)uVar7 != '\0')) goto LAB_18000455d;
  FUN_180003fb0(param_1,(longlong)pvVar15);
  ppvVar3 = *(void ***)(param_1 + 0xdc8);
  ppvVar8 = (void **)ppvVar3[1];
  ppvVar12 = ppvVar3;
  if (*(char *)((longlong)ppvVar8 + 0x19) == '\0') {
    do {
      if ((longlong)ppvVar8[4] < (longlong)local_res10) {
        ppvVar9 = (void **)ppvVar8[2];
      }
      else {
        ppvVar9 = (void **)*ppvVar8;
        ppvVar12 = ppvVar8;
      }
      ppvVar8 = ppvVar9;
    } while (*(char *)((longlong)ppvVar9 + 0x19) == '\0');
    if ((ppvVar12 == ppvVar3) || ((longlong)local_res10 < (longlong)ppvVar12[4]))
    goto LAB_180004519;
  }
  else {
LAB_180004519:
    local_48 = &local_res10;
    plVar10 = (longlong *)FUN_18000c070((undefined8 *)(param_1 + 0xdc8),ppvVar3,&local_48);
    FUN_18000c0a0((longlong *)(param_1 + 0xdc8),&local_48,(longlong *)ppvVar12,plVar10 + 4,plVar10);
    ppvVar12 = local_48;
  }
  ppvVar12[5] = pvVar15;
LAB_18000455d:
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  local_38 = (longlong *)FUN_18000a3c0();
  FUN_1800113a0("************************************GotJournalDir:  id=%I64d,parentId:%I64d,sector:%I64d********************\n"
                ,pvVar14,pvVar15,
                (*(int *)(param_1 + 0x58) * param_4) / (longlong)*(int *)(param_1 + 0x3c));
  FUN_180006fc0(param_1,pvVar14,pvVar15,param_2,(longlong *)&local_38,(longlong *)&local_38,param_3)
  ;
  plVar10 = (longlong *)*local_38;
  while (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
          (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar5 != 0)) &&
         (plVar10 != local_38))) {
    ppppppplVar4 = (longlong *******)plVar10[4];
    plVar13 = plVar10 + 5;
    plVar11 = plVar13;
    if (0xf < (ulonglong)plVar10[8]) {
      plVar11 = (longlong *)*plVar13;
    }
    FUN_1800113a0("*****TraverseJournalDir:  fileName:%s ,id=%I64d,parentId:%I64d\n",plVar11,
                  ppppppplVar4,pvVar14);
    if (0xf < (ulonglong)plVar10[8]) {
      plVar13 = (longlong *)*plVar13;
    }
    FUN_1800068b0(param_1,ppppppplVar4,pvVar14,(char *)plVar13);
    plVar13 = (longlong *)plVar10[2];
    if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar13 + 0x19);
      plVar10 = plVar13;
      plVar13 = (longlong *)*plVar13;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar13 + 0x19);
        plVar10 = plVar13;
        plVar13 = (longlong *)*plVar13;
      }
    }
    else {
      cVar1 = *(char *)(plVar10[1] + 0x19);
      plVar11 = (longlong *)plVar10[1];
      plVar13 = plVar10;
      while ((plVar10 = plVar11, cVar1 == '\0' && (plVar13 == (longlong *)plVar10[2]))) {
        cVar1 = *(char *)(plVar10[1] + 0x19);
        plVar11 = (longlong *)plVar10[1];
        plVar13 = plVar10;
      }
    }
  }
  FUN_180009920((longlong *)&local_38,&local_res10,(longlong *)*local_38,local_38);
  FUN_180013b3c(local_38);
  return;
}




void FUN_1800046e0(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009920(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  FUN_180013b3c((void *)*param_1);
  return;
}




ulonglong FUN_180004710(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = 0xef53;
  if (((short)param_1[0xe] == -0x10ad) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    uVar1 = param_1[1];
    if ((uVar1 != 0) && (((*param_1 != 0 && (param_1[8] != 0)) && (param_1[10] != 0)))) {
      uVar3 = param_1[5];
      uVar2 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        if (param_1[6] == 0) goto LAB_18000474d;
      }
      else if ((uVar3 == 1) && (param_1[6] != 0)) goto LAB_18000474d;
      uVar3 = 0x400 << ((byte)param_1[6] & 0x1f);
      if (0 < (int)uVar3) {
        lVar4 = CONCAT44(param_1[0x54],uVar1);
        uVar2 = (ulonglong)uVar1;
        if (((param_1[0x13] == 0) || ((short)param_1[0x16] != 0)) &&
           ((lVar4 != 0 && -1 < param_1[0x54] &&
            (((uVar2 = lVar4 / (longlong)(ulonglong)(uint)param_1[8], 0 < (longlong)uVar2 &&
              (0 < (int)(~uVar3 & (int)uVar2 * 0x40 + uVar3))) && ((longlong)uVar2 <= lVar4)))))) {
          return CONCAT71((int7)(uVar2 >> 8),1);
        }
      }
    }
  }
LAB_18000474d:
  return uVar2 & 0xffffffffffffff00;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800047c0(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  HANDLE hFindFile;
  uint uVar17;
  int *piVar18;
  __uint64 _Var19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStack_1298 [32];
  undefined1 local_1278;
  _WIN32_FIND_DATAW local_1268;
  int local_1018;
  ulonglong uStack_1014;
  int iStack_1004;
  int iStack_1000;
  ulonglong local_ff8;
  int iStack_ff0;
  short sStack_fe0;
  int iStack_fcc;
  short sStack_fc0;
  byte local_fb8;
  uint local_ec8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800047da;
  local_18 = DAT_18001c010 ^ (ulonglong)auStack_1298;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    memset(&local_1018,0,0x1000);
    local_1278 = 0;
    iVar13 = (**(code **)(*plVar2 + 0x30))
                       (plVar2,&local_1018,*(longlong *)(param_1 + 0x30) + 0x400,0x200);
    if (((((0 < iVar13) && (sStack_fe0 == -0x10ad)) && ((local_fb8 & 1) == 0)) &&
        (((int)uStack_1014 != 0 && (local_1018 != 0)))) &&
       (((int)local_ff8 != 0 && (iStack_ff0 != 0)))) {
      if (iStack_1004 == 0) {
        if (iStack_1000 == 0) goto LAB_180004b41;
      }
      else if ((iStack_1004 == 1) && (iStack_1000 != 0)) goto LAB_180004b41;
      uVar21 = 0x400 << ((byte)iStack_1000 & 0x1f);
      if (((0 < (int)uVar21) &&
          (((uVar20 = (ulonglong)local_ec8 << 0x20 | uStack_1014 & 0xffffffff, iStack_fcc == 0 ||
            (sStack_fc0 != 0)) && (0 < (longlong)uVar20)))) &&
         (((lVar14 = (longlong)uVar20 / (longlong)(local_ff8 & 0xffffffff), 0 < lVar14 &&
           (0 < (int)(~uVar21 & (int)lVar14 * 0x40 + uVar21))) && (lVar14 <= (longlong)uVar20)))) {
        lVar14 = 8;
        piVar18 = &local_1018;
        uVar21 = 0x80;
        puVar15 = (undefined8 *)(param_1 + 0x98);
        do {
          uVar16 = *(undefined8 *)(piVar18 + 2);
          uVar10 = *(undefined8 *)(piVar18 + 4);
          uVar11 = *(undefined8 *)(piVar18 + 6);
          *puVar15 = *(undefined8 *)piVar18;
          puVar15[1] = uVar16;
          uVar16 = *(undefined8 *)(piVar18 + 8);
          uVar12 = *(undefined8 *)(piVar18 + 10);
          puVar15[2] = uVar10;
          puVar15[3] = uVar11;
          uVar10 = *(undefined8 *)(piVar18 + 0xc);
          uVar11 = *(undefined8 *)(piVar18 + 0xe);
          puVar15[4] = uVar16;
          puVar15[5] = uVar12;
          uVar16 = *(undefined8 *)(piVar18 + 0x10);
          uVar12 = *(undefined8 *)(piVar18 + 0x12);
          puVar15[6] = uVar10;
          puVar15[7] = uVar11;
          uVar10 = *(undefined8 *)(piVar18 + 0x14);
          uVar11 = *(undefined8 *)(piVar18 + 0x16);
          puVar15[8] = uVar16;
          puVar15[9] = uVar12;
          iVar13 = piVar18[0x18];
          iVar3 = piVar18[0x19];
          iVar4 = piVar18[0x1a];
          iVar5 = piVar18[0x1b];
          puVar15[10] = uVar10;
          puVar15[0xb] = uVar11;
          iVar6 = piVar18[0x1c];
          iVar7 = piVar18[0x1d];
          iVar8 = piVar18[0x1e];
          iVar9 = piVar18[0x1f];
          piVar18 = piVar18 + 0x20;
          *(int *)(puVar15 + 0xc) = iVar13;
          *(int *)((longlong)puVar15 + 100) = iVar3;
          *(int *)(puVar15 + 0xd) = iVar4;
          *(int *)((longlong)puVar15 + 0x6c) = iVar5;
          *(int *)(puVar15 + 0xe) = iVar6;
          *(int *)((longlong)puVar15 + 0x74) = iVar7;
          *(int *)(puVar15 + 0xf) = iVar8;
          *(int *)((longlong)puVar15 + 0x7c) = iVar9;
          lVar14 = lVar14 + -1;
          puVar15 = puVar15 + 0x10;
        } while (lVar14 != 0);
        if ((*(byte *)(param_1 + 0xf4) & 4) != 0) {
          *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x178);
        }
        if ((*(byte *)(param_1 + 0xf8) & 0x10) != 0) {
          uVar17 = (uint)*(ushort *)(param_1 + 0x196);
          if (*(ushort *)(param_1 + 0x196) == 0) {
            uVar17 = 1;
          }
          *(uint *)(param_1 + 0xdf8) = uVar17;
        }
        strncpy((char *)(param_1 + 0x88),(char *)(param_1 + 0x110),0xf);
        iVar13 = 0x400 << ((byte)*(undefined4 *)(param_1 + 0xb0) & 0x1f);
        *(int *)(param_1 + 0x58) = iVar13;
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x108);
        lVar14 = thunk_FUN_180013b78((longlong)(iVar13 * 2));
        *(longlong *)(param_1 + 0x50) = lVar14;
        if ((lVar14 != 0) && (0 < *(int *)(param_1 + 0x58))) {
          lVar14 = CONCAT44(*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x9c));
          *(longlong *)(param_1 + 0x70) = lVar14;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                    (*(longlong **)(param_1 + 8),*(int *)(param_1 + 0x58) * lVar14);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xc0);
          if (*(int *)(param_1 + 0xe4) != 0) {
            uVar21 = (uint)*(ushort *)(param_1 + 0xf0);
          }
          *(uint *)(param_1 + 100) = uVar21;
          uVar1 = *(ushort *)(param_1 + 0x196);
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0xb8);
          iVar13 = (int)(*(longlong *)(param_1 + 0x70) /
                        (longlong)(ulonglong)*(uint *)(param_1 + 0xb8));
          *(int *)(param_1 + 0x68) = iVar13;
          if (uVar1 < 0x20) {
            uVar21 = 0x20;
          }
          else {
            uVar21 = (uint)uVar1;
            if (0x40 < uVar1) {
              uVar21 = 0x40;
            }
          }
          uVar17 = *(uint *)(param_1 + 0x58);
          _Var19 = (__uint64)(int)(((iVar13 * uVar21 + -1 + uVar17) / uVar17) * uVar17);
          uVar16 = thunk_FUN_180013b78(_Var19);
          if (uVar21 == 0x20) {
            *(undefined8 *)(param_1 + 0x498) = uVar16;
          }
          else {
            *(undefined8 *)(param_1 + 0x4a0) = uVar16;
          }
          plVar2 = *(longlong **)(param_1 + 8);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x58) / *(int *)(param_1 + 0x3c);
          *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x70);
          if (plVar2 != (longlong *)0x0) {
            local_1278 = 0;
            (**(code **)(*plVar2 + 0x30))
                      (plVar2,uVar16,
                       (longlong)*(int *)(param_1 + 0x58) + *(longlong *)(param_1 + 0x30),_Var19);
          }
          memset(&local_1268,0,0x250);
          hFindFile = FindFirstFileW(L"c:\\log\\writeExt4Data.txt",&local_1268);
          if (hFindFile != (HANDLE)0xffffffffffffffff) {
            FindClose(hFindFile);
            DAT_18001cac0 = 1;
          }
        }
      }
    }
  }
LAB_180004b41:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1298);
  return;
}




void FUN_180004b80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(void **)(param_1 + 0x4a0) != (void *)0x0) {
    FUN_180013b3c(*(void **)(param_1 + 0x4a0));
    *(undefined8 *)(param_1 + 0x4a0) = 0;
  }
  if (*(void **)(param_1 + 0x498) != (void *)0x0) {
    FUN_180013b3c(*(void **)(param_1 + 0x498));
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  FUN_180013b3c(*(void **)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
  VirtualFree(*(LPVOID *)(param_1 + 0x48),0,0x8000);
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar1 = (longlong *)(param_1 + 0xde8);
  plVar5 = *(longlong **)*plVar1;
  if (plVar5 != (longlong *)*plVar1) {
    do {
      if ((void *)plVar5[5] != (void *)0x0) {
        FUN_180013b3c((void *)plVar5[5]);
      }
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar3 + 0x19);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar2 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar2 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar2 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    } while (plVar5 != (longlong *)*plVar1);
  }
  FUN_180009130(plVar1);
  return;
}




ulonglong FUN_180004c70(longlong param_1,uint param_2,ulonglong *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong in_stack_ffffffffffffffb8;
  uint local_38 [2];
  undefined8 *local_30;
  
  if (((*(int *)(param_1 + 0x2e4) != 0) || (*(int *)(param_1 + 0x2e8) != 0)) ||
     ((*(byte *)(param_1 + 0xf8) & 0x10) == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x4a0);
  uVar8 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0xdf8);
  uVar9 = (uint)uVar8;
  uVar11 = param_2 - uVar9;
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar3 = uVar1 >> (puVar10 != (undefined8 *)0x0) + 5;
  puVar7 = (undefined8 *)(ulonglong)uVar3;
  if (uVar3 <= uVar9) {
    return (ulonglong)(uint3)(uVar3 >> 8) << 8;
  }
  if (uVar11 == 0) {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x498);
      goto LAB_180004ddc;
    }
LAB_180004de1:
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
      iVar2 = 5;
    }
    else {
      iVar2 = 6;
    }
    uVar1 = *(uint *)((uVar8 << iVar2) + 8 + (longlong)puVar10);
    *param_3 = (ulonglong)uVar1;
    uVar8 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0xde8);
    uVar12 = (ulonglong)uVar11;
    puVar4 = puVar10;
    puVar5 = (undefined8 *)puVar10[1];
    if (*(char *)((longlong)puVar10[1] + 0x19) == '\0') {
      do {
        puVar7 = puVar5;
        if ((longlong)puVar7[4] < (longlong)uVar12) {
          puVar5 = (undefined8 *)puVar7[2];
          puVar7 = puVar4;
        }
        else {
          puVar5 = (undefined8 *)*puVar7;
        }
        puVar4 = puVar7;
      } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
      if ((puVar7 == puVar10) || ((longlong)uVar12 < (longlong)puVar7[4])) goto LAB_180004d43;
    }
    else {
LAB_180004d43:
      puVar7 = puVar10;
    }
    if (puVar7 == puVar10) {
      puVar5 = puVar7;
      if ((uVar1 != 0) &&
         (puVar13 = param_3, puVar5 = (undefined8 *)operator_new((longlong)(int)(uVar1 + 0x100)),
         puVar5 != (undefined8 *)0x0)) {
        plVar6 = *(longlong **)(param_1 + 8);
        if (plVar6 != (longlong *)0x0) {
          puVar13 = (ulonglong *)
                    ((ulonglong)*(uint *)(param_1 + 0x60) * (longlong)*(int *)(param_1 + 0x58) *
                     uVar12 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar6 + 0x30))
                    (plVar6,puVar5,puVar13,(longlong)(int)uVar1,
                     in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
        }
        local_38[0] = uVar11;
        local_30 = puVar5;
        plVar6 = (longlong *)FUN_18000ae30((undefined8 *)(param_1 + 0xde8),local_38);
        puVar7 = FUN_1800030d0((longlong *)(param_1 + 0xde8),(undefined8 *)local_38,puVar13,
                               plVar6 + 4,plVar6);
        puVar10 = puVar5;
        goto LAB_180004ddc;
      }
    }
    else {
      puVar10 = (undefined8 *)puVar7[5];
LAB_180004ddc:
      puVar5 = puVar7;
      if (puVar10 != (undefined8 *)0x0) goto LAB_180004de1;
    }
    uVar8 = (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  return uVar8;
}




ulonglong FUN_180004e40(longlong param_1,uint param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong in_stack_ffffffffffffffb8;
  uint local_38 [2];
  undefined8 *local_30;
  
  if (((*(int *)(param_1 + 0x2e4) != 0) || (*(int *)(param_1 + 0x2e8) != 0)) ||
     ((*(byte *)(param_1 + 0xf8) & 0x10) == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x4a0);
  uVar8 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0xdf8);
  uVar9 = (uint)uVar8;
  uVar11 = param_2 - uVar9;
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = uVar1 >> (puVar10 != (undefined8 *)0x0) + 5;
  puVar7 = (undefined8 *)(ulonglong)uVar2;
  if (uVar2 <= uVar9) {
    return (ulonglong)(uint3)(uVar2 >> 8) << 8;
  }
  if (uVar11 == 0) {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x498);
      goto LAB_180004fb7;
    }
LAB_180004fbc:
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
      iVar3 = 5;
    }
    else {
      iVar3 = 6;
    }
    iVar3 = (int)((param_3 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 0x58)) +
            *(int *)((uVar8 << iVar3) + 8 + (longlong)puVar10);
    *param_4 = iVar3;
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0xde8);
    uVar12 = (ulonglong)uVar11;
    puVar4 = puVar10;
    puVar5 = (undefined8 *)puVar10[1];
    if (*(char *)((longlong)puVar10[1] + 0x19) == '\0') {
      do {
        puVar7 = puVar5;
        if ((longlong)puVar7[4] < (longlong)uVar12) {
          puVar5 = (undefined8 *)puVar7[2];
          puVar7 = puVar4;
        }
        else {
          puVar5 = (undefined8 *)*puVar7;
        }
        puVar4 = puVar7;
      } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
      if ((puVar7 == puVar10) || ((longlong)uVar12 < (longlong)puVar7[4])) goto LAB_180004f16;
    }
    else {
LAB_180004f16:
      puVar7 = puVar10;
    }
    if (puVar7 == puVar10) {
      puVar5 = puVar7;
      if ((uVar1 != 0) &&
         (uVar13 = param_3, puVar5 = (undefined8 *)operator_new((longlong)(int)(uVar1 + 0x100)),
         puVar5 != (undefined8 *)0x0)) {
        plVar6 = *(longlong **)(param_1 + 8);
        if (plVar6 != (longlong *)0x0) {
          uVar13 = (ulonglong)*(uint *)(param_1 + 0x60) * (longlong)*(int *)(param_1 + 0x58) *
                   uVar12 + *(longlong *)(param_1 + 0x30);
          (**(code **)(*plVar6 + 0x30))
                    (plVar6,puVar5,uVar13,(longlong)(int)uVar1,
                     in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
        }
        local_38[0] = uVar11;
        local_30 = puVar5;
        plVar6 = (longlong *)FUN_18000ae30((undefined8 *)(param_1 + 0xde8),local_38);
        puVar7 = FUN_1800030d0((longlong *)(param_1 + 0xde8),(undefined8 *)local_38,uVar13,
                               plVar6 + 4,plVar6);
        param_3 = param_3 & 0xffffffff;
        puVar10 = puVar5;
        goto LAB_180004fb7;
      }
    }
    else {
      puVar10 = (undefined8 *)puVar7[5];
LAB_180004fb7:
      puVar5 = puVar7;
      if (puVar10 != (undefined8 *)0x0) goto LAB_180004fbc;
    }
    uVar8 = (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  return uVar8;
}




longlong FUN_180005020(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_res10 [2];
  
  if ((param_2 != 0) &&
     ((*(longlong *)(param_1 + 0x4a0) != 0 || (*(longlong *)(param_1 + 0x498) != 0)))) {
    uVar3 = (param_2 + -1) / (longlong)(ulonglong)*(uint *)(param_1 + 0x5c);
    uVar2 = (uint)uVar3;
    if (uVar2 <= *(uint *)(param_1 + 0x68)) {
      uVar6 = *(int *)(param_1 + 100) *
              (int)((param_2 + -1) % (longlong)(ulonglong)*(uint *)(param_1 + 0x5c));
      local_res10[0] = 0;
      uVar1 = *(uint *)(param_1 + 0x58);
      uVar4 = FUN_180004e40(param_1,uVar2,(ulonglong)uVar6,(int *)local_res10);
      uVar2 = local_res10[0];
      if ((char)uVar4 == '\0') {
        uVar3 = uVar3 & 0xffffffff;
        uVar2 = uVar6 / *(uint *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x4a0) == 0) {
          uVar2 = uVar2 + *(int *)(uVar3 * 0x20 + 8 + *(longlong *)(param_1 + 0x498));
        }
        else {
          uVar2 = uVar2 + *(int *)(uVar3 * 0x40 + 8 + *(longlong *)(param_1 + 0x4a0));
        }
      }
      uVar5 = FUN_180005120(param_1,(ulonglong)uVar2,*(undefined8 *)(param_1 + 0x50));
      if (0 < (int)uVar5) {
        return (ulonglong)uVar6 % (ulonglong)uVar1 + *(longlong *)(param_1 + 0x50);
      }
    }
  }
  return 0;
}




undefined8 FUN_180005120(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1800062d0(param_1,param_2,param_3);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*plVar1 + 0x30))
                    (plVar1,param_3,
                     *(int *)(param_1 + 0x58) * param_2 + *(longlong *)(param_1 + 0x30),
                     (longlong)*(int *)(param_1 + 0x58),0);
  return uVar2;
}




undefined4 FUN_180005190(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  __uint64 _Var4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (param_3 < 0xc) {
    return *(undefined4 *)(param_2 + 0x28 + param_3 * 4);
  }
  uVar12 = (ulonglong)(longlong)*(int *)(param_1 + 0x58) >> 2;
  iVar11 = (int)uVar12;
  uVar12 = uVar12 & 0xffffffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar12;
  _Var4 = SUB168(ZEXT816(4) * auVar1,0);
  uVar8 = iVar11 + 0xc;
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    _Var4 = 0xffffffffffffffff;
  }
  pvVar5 = (void *)thunk_FUN_180013b78(_Var4);
  if (param_3 < (longlong)(ulonglong)uVar8) {
    FUN_180005120(param_1,(ulonglong)*(uint *)(param_2 + 0x58),pvVar5);
    uVar9 = *(undefined4 *)((longlong)pvVar5 + param_3 * 4 + -0x30);
  }
  else {
    uVar10 = (ulonglong)(uVar8 + iVar11 * iVar11);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar12;
    _Var4 = SUB168(ZEXT816(4) * auVar2,0);
    if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar6 = (void *)thunk_FUN_180013b78(_Var4);
    if (param_3 < (longlong)uVar10) {
      FUN_180005120(param_1,(ulonglong)*(uint *)(param_2 + 0x5c),pvVar6);
      lVar13 = param_3 - (ulonglong)uVar8;
      FUN_180005120(param_1,(ulonglong)*(uint *)((longlong)pvVar6 + (lVar13 / (longlong)uVar12) * 4)
                    ,pvVar5);
      uVar9 = *(undefined4 *)((longlong)pvVar5 + (lVar13 % (longlong)uVar12) * 4);
    }
    else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      _Var4 = SUB168(ZEXT816(4) * auVar3,0);
      if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
        _Var4 = 0xffffffffffffffff;
      }
      pvVar7 = (void *)thunk_FUN_180013b78(_Var4);
      FUN_180005120(param_1,(ulonglong)*(uint *)(param_2 + 0x60),pvVar7);
      lVar13 = param_3 - uVar10;
      FUN_180005120(param_1,(ulonglong)
                            *(uint *)((longlong)pvVar7 +
                                     (lVar13 / (longlong)(ulonglong)(uint)(iVar11 * iVar11)) * 4),
                    pvVar6);
      FUN_180005120(param_1,(ulonglong)*(uint *)((longlong)pvVar6 + (lVar13 / (longlong)uVar12) * 4)
                    ,pvVar5);
      uVar9 = *(undefined4 *)((longlong)pvVar5 + (lVar13 % (longlong)uVar12) * 4);
      FUN_180013b3c(pvVar7);
    }
    FUN_180013b3c(pvVar6);
  }
  FUN_180013b3c(pvVar5);
  return uVar9;
}




longlong FUN_180005340(longlong param_1,short *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  
  if (*param_2 == -0xcf6) {
    iVar6 = 0;
    do {
      puVar5 = (uint *)(param_2 + 6);
      if (param_2[3] == 0) {
        for (; ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
                (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar3 != 0)) &&
               (iVar6 < (int)(uint)(ushort)param_2[1])); iVar6 = iVar6 + 1) {
          uVar1 = *puVar5;
          if (((longlong)(ulonglong)uVar1 <= param_3) &&
             (param_3 < (longlong)(ulonglong)((ushort)puVar5[1] + uVar1))) {
            lVar4 = ((ulonglong)CONCAT24(*(short *)((longlong)puVar5 + 6),puVar5[2]) -
                    (ulonglong)uVar1) + param_3;
            if (param_4 != '\0') {
              FUN_180013b3c(param_2);
              return lVar4;
            }
            return lVar4;
          }
          puVar5 = puVar5 + 3;
        }
LAB_18000545d:
        if (param_4 == '\0') {
          return 0;
        }
        FUN_180013b3c(param_2);
        return 0;
      }
      iVar3 = 0;
      while( true ) {
        if (((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
            (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar2 == 0)) ||
           ((int)(uint)(ushort)param_2[1] <= iVar3)) goto LAB_18000545d;
        if ((iVar3 == (ushort)param_2[1] - 1) || (param_3 < (longlong)(ulonglong)puVar5[3])) break;
        puVar5 = puVar5 + 3;
        iVar3 = iVar3 + 1;
      }
      param_2 = (short *)operator_new((longlong)*(int *)(param_1 + 0x58));
      FUN_180005120(param_1,(ulonglong)*(uint6 *)(puVar5 + 1),param_2);
      param_4 = '\x01';
    } while (*param_2 == -0xcf6);
  }
  return 0;
}




void FUN_180005490(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_18001c010 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_2 + 0x20) & 0x80000) == 0) {
    uVar6 = 0;
    local_58 = 0;
    lVar9 = 0;
    uVar7 = uVar6;
    while( true ) {
      uStack_50 = uVar6;
      if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) break;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
      if ((iVar2 == 0) || (param_4 <= lVar9)) break;
      lVar4 = lVar9 / (longlong)*(int *)(param_1 + 0x58);
      if ((*(uint *)(param_2 + 0x20) & 0x80000) == 0) {
        uVar3 = FUN_180005190(param_1,param_2,lVar4);
        lVar4 = CONCAT44(extraout_var,uVar3);
      }
      else {
        lVar4 = FUN_180005340(param_1,(short *)(param_2 + 0x28),lVar4,'\0');
      }
      if (lVar4 < 1) break;
      iVar2 = *(int *)(param_1 + 0x58);
      uVar5 = (ulonglong)iVar2;
      uVar8 = lVar4 * uVar5;
      if (uVar7 == 0) {
        local_58 = uVar5 * uVar8;
        uVar6 = uVar6 ^ (uVar5 ^ uVar6) & 0x7fffffffffffffff;
        lVar9 = lVar9 + iVar2;
        uVar7 = local_58;
      }
      else {
        lVar4 = (longlong)(uVar6 * 2) >> 1;
        if (lVar4 + uVar7 == uVar8) {
          uVar5 = lVar4 + uVar5;
          uStack_50 = uVar6;
          uVar8 = uVar7;
        }
        else {
          puVar1 = (ulonglong *)param_3[1];
          if ((ulonglong *)param_3[2] == puVar1) {
            FUN_18000a920(param_3,puVar1,&local_58);
          }
          else {
            *puVar1 = local_58;
            puVar1[1] = uStack_50;
            param_3[1] = param_3[1] + 0x10;
            uStack_50 = uVar6;
          }
          iVar2 = *(int *)(param_1 + 0x58);
          uVar5 = (ulonglong)iVar2;
          local_58 = uVar8;
        }
        uVar6 = uStack_50 ^ (uVar5 ^ uStack_50) & 0x7fffffffffffffff;
        lVar9 = lVar9 + iVar2;
        uVar7 = uVar8;
      }
    }
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      puVar1 = (ulonglong *)param_3[1];
      if ((ulonglong *)param_3[2] == puVar1) {
        FUN_18000a920(param_3,puVar1,&local_58);
      }
      else {
        *puVar1 = local_58;
        puVar1[1] = uStack_50;
        param_3[1] = param_3[1] + 0x10;
      }
    }
  }
  else {
    FUN_180005670(param_1,(short *)(param_2 + 0x28),'\0',param_3);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_78);
  return;
}




void FUN_180005670(longlong param_1,short *param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_18001c010 ^ (ulonglong)auStack_78;
  if (*param_2 == -0xcf6) {
    psVar5 = param_2 + 6;
    iVar6 = 0;
    if (param_2[3] == 0) {
      psVar5 = param_2 + 10;
      while (((uVar2 = uStack_50, *(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
              (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar3 != 0)) &&
             (iVar6 < (int)(uint)(ushort)param_2[1]))) {
        local_58 = (ulonglong)CONCAT24(psVar5[-1],*(undefined4 *)psVar5) *
                   (longlong)*(int *)(param_1 + 0x58);
        plVar1 = (longlong *)param_4[1];
        uStack_50 = uVar2 ^ ((longlong)(int)((uint)(ushort)psVar5[-2] * *(int *)(param_1 + 0x58)) ^
                            uVar2) & 0x7fffffffffffffff;
        if ((longlong *)param_4[2] == plVar1) {
          FUN_18000a920(param_4,plVar1,&local_58);
          iVar6 = iVar6 + 1;
          psVar5 = psVar5 + 6;
        }
        else {
          iVar6 = iVar6 + 1;
          *plVar1 = local_58;
          plVar1[1] = uStack_50;
          param_4[1] = param_4[1] + 0x10;
          psVar5 = psVar5 + 6;
        }
      }
    }
    else {
      for (; (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
               (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar3 != 0)) &&
              (iVar6 < (int)(uint)(ushort)param_2[1])) && (psVar5 != (short *)0x0));
          psVar5 = psVar5 + 6) {
        psVar4 = (short *)operator_new((longlong)*(int *)(param_1 + 0x58));
        FUN_180005120(param_1,(ulonglong)*(uint6 *)(psVar5 + 2),psVar4);
        FUN_180005670(param_1,psVar4,'\x01',param_4);
        iVar6 = iVar6 + 1;
      }
    }
    if (param_3 != '\0') {
      FUN_180013b3c(param_2);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_78);
  return;
}




void FUN_180005820(longlong param_1,void *param_2,void *param_3,uint *param_4,int param_5,
                  char param_6,longlong *param_7,int *param_8)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  longlong *plVar8;
  void *pvVar9;
  int iVar10;
  size_t sVar11;
  size_t sVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStackY_278 [32];
  undefined8 local_200 [2];
  undefined8 local_1f0 [2];
  void *local_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1c8;
  ulonglong local_1c0;
  uint local_1b8 [2];
  void *local_1b0;
  void *local_1a8 [2];
  ulonglong local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  ulonglong uStack_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_18001c010 ^ (ulonglong)auStackY_278;
  bVar16 = *(char *)((longlong)param_4 + 7) == '\x02';
  iVar10 = 0;
  memset(local_148,0,0x100);
  strncpy(local_148,(char *)(param_4 + 2),(ulonglong)*(byte *)((longlong)param_4 + 6));
  local_158 = 0;
  uStack_150 = 0xf;
  local_168 = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar11 = sVar12 + 1;
    lVar5 = sVar12 + 1;
    sVar12 = sVar11;
  } while (local_148[lVar5] != '\0');
  FUN_180002a10((longlong *)&local_168,local_148,sVar11);
  puVar15 = param_4;
  bVar4 = bVar16;
  while( true ) {
    do {
      while( true ) {
        puVar14 = puVar15;
        if (((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
            (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar6 == 0)) ||
           ((uint *)((longlong)param_5 + (longlong)param_4) <= puVar14)) goto LAB_180005d07;
        puVar15 = puVar14 + 1;
        uVar2 = *puVar14;
        if (uVar2 == 0) goto LAB_180005d07;
        iVar10 = iVar10 + 1;
        if (!bVar4) break;
        bVar4 = false;
        bVar16 = false;
        puVar15 = (uint *)((longlong)puVar14 +
                          ((ulonglong)*(byte *)((longlong)puVar14 + 6) + 3 & 0xfffffffffffffffc) + 8
                          );
      }
      bVar1 = *(byte *)((longlong)puVar14 + 7);
    } while ((((bVar1 != 5) && ((bVar1 == 0 || (7 < bVar1)))) && (bVar1 != 5)) ||
            (((((ushort)*puVar15 & 3) != 0 ||
              ((ushort)*puVar15 < (*(byte *)((longlong)puVar14 + 6) + 0xb & 0xfffc))) ||
             (*(uint *)(param_1 + 0x98) < uVar2))));
    psVar7 = (short *)FUN_180005020(param_1,(ulonglong)uVar2);
    if (psVar7 == (short *)0x0) break;
    memset(local_148,0,0x100);
    strncpy(local_148,(char *)(puVar14 + 2),(ulonglong)*(byte *)((longlong)puVar14 + 6));
    puVar15 = (uint *)((longlong)puVar14 +
                      ((ulonglong)*(byte *)((longlong)puVar14 + 6) + 0xb & 0xfffffffffffffffc));
    local_1c8 = 0;
    local_1c0 = 0xf;
    local_1d8 = 0;
    sVar12 = 0xffffffffffffffff;
    do {
      sVar11 = sVar12 + 1;
      lVar5 = sVar12 + 1;
      sVar12 = sVar11;
    } while (local_148[lVar5] != '\0');
    local_1e0 = param_2;
    FUN_180002a10((longlong *)&local_1d8,local_148,sVar11);
    bVar1 = *(byte *)((longlong)puVar14 + 7);
    bVar4 = bVar16;
    if (((bVar1 == 2) && (param_2 != (void *)(ulonglong)*puVar14)) &&
       (param_3 != (void *)(ulonglong)*puVar14)) {
      local_178 = 0;
      local_170 = 0xf;
      local_188 = 0;
      uVar13 = (ulonglong)*(byte *)((longlong)puVar14 + 6);
      FUN_180002a10((longlong *)&local_188,puVar14 + 2,uVar13);
      local_1b8[0] = *puVar14;
      FUN_180009540(&local_1b0,(undefined8 *)&local_188);
      plVar8 = (longlong *)FUN_18000ae60(param_7,local_1b8);
      FUN_18000aeb0(param_7,local_200,uVar13,plVar8 + 4,plVar8);
      if (0xf < local_198) {
        pvVar9 = local_1b0;
        if ((0xfff < local_198 + 1) &&
           (pvVar9 = *(void **)((longlong)local_1b0 + -8),
           0x1f < (ulonglong)((longlong)local_1b0 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_180013b3c(pvVar9);
      }
      local_1b8[0] = *puVar14;
      local_1b0 = local_1e0;
      FUN_180009540(local_1a8,(undefined8 *)&local_1d8);
      plVar8 = (longlong *)FUN_18000b010((undefined8 *)(param_1 + 0xd88),local_1b8);
      FUN_18000b070((longlong *)(param_1 + 0xd88),local_1f0,uVar13,plVar8 + 4,plVar8);
      if (0xf < local_190) {
        pvVar9 = local_1a8[0];
        if ((0xfff < local_190 + 1) &&
           (pvVar9 = *(void **)((longlong)local_1a8[0] + -8),
           0x1f < (ulonglong)((longlong)local_1a8[0] + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_180013b3c(pvVar9);
      }
      FUN_1800113a0("--SubDirFDT:%s,id=%I64d,type:%d,parentId:%I64d\n",local_148,(ulonglong)*puVar14
                    ,(ulonglong)*(byte *)((longlong)puVar14 + 7));
      if (0xf < local_170) {
        pvVar3 = (void *)CONCAT71(uStack_187,local_188);
        pvVar9 = pvVar3;
        if ((0xfff < local_170 + 1) &&
           (pvVar9 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_180013b3c(pvVar9);
      }
      if (0xf < local_1c0) {
        pvVar3 = (void *)CONCAT71(uStack_1d7,local_1d8);
        pvVar9 = pvVar3;
        if ((0xfff < local_1c0 + 1) &&
           (pvVar9 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_180013b3c(pvVar9);
      }
    }
    else {
      if (1 < iVar10) {
        FUN_1800113a0("--SubFDT:%s,id=%I64d,type:%d,parentId:%I64d\n",local_148,(ulonglong)*puVar14,
                      (ulonglong)bVar1);
      }
      FUN_1800085f0(param_1,psVar7,(longlong *******)(ulonglong)*puVar14,(longlong)param_2,local_148
                    ,bVar1 == 2,param_8,param_6);
      if (0xf < local_1c0) {
        pvVar3 = (void *)CONCAT71(uStack_1d7,local_1d8);
        pvVar9 = pvVar3;
        if ((0xfff < local_1c0 + 1) &&
           (pvVar9 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_180013b3c(pvVar9);
      }
    }
  }
LAB_180005d07:
  if (0xf < uStack_150) {
    pvVar3 = (void *)CONCAT71(uStack_167,local_168);
    pvVar9 = pvVar3;
    if ((0xfff < uStack_150 + 1) &&
       (pvVar9 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar9);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_278);
  return;
}




void FUN_180005d70(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    pvVar1 = *(void **)(param_1 + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x20) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}




void FUN_180005de0(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x28)) {
    pvVar1 = *(void **)(param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x28) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}




void FUN_180005e50(longlong param_1,longlong param_2,ushort *param_3,longlong *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  undefined1 auStackY_188 [32];
  uint *local_150;
  longlong local_148;
  ulonglong local_140;
  ulonglong *local_138;
  ushort *local_130;
  undefined4 local_128;
  ushort *local_120;
  ushort *local_118;
  undefined8 local_110 [2];
  undefined8 local_100 [2];
  undefined8 local_f0 [3];
  uint local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_18001c010 ^ (ulonglong)auStackY_188;
  local_148 = param_2;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 6) == '\x01') {
      cVar1 = *(char *)(param_2 + 8);
    }
    else {
      if ((*(char *)(param_2 + 6) != '\x02') || (*(char *)(param_2 + 8) != '.')) goto LAB_180005f00;
      cVar1 = *(char *)(param_2 + 9);
    }
    if ((cVar1 == '.') && (param_2 != -0xc)) {
      if (*(char *)(param_2 + 0x12) == '\x01') {
        cVar1 = *(char *)(param_2 + 0x14);
      }
      else {
        if ((*(char *)(param_2 + 0x12) != '\x02') || (*(char *)(param_2 + 0x14) != '.'))
        goto LAB_180005f00;
        cVar1 = *(char *)(param_2 + 0x15);
      }
      if (cVar1 == '.') {
        local_128 = 1;
        local_130 = param_3;
        plVar5 = (longlong *)FUN_18000b1d0(param_4,&local_130);
        FUN_1800030d0(param_4,&local_130,param_3,plVar5 + 4,plVar5);
        goto LAB_1800062b2;
      }
    }
  }
LAB_180005f00:
  iVar10 = 0;
  while (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
          (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar4 != 0)) &&
         (iVar10 < *(int *)(param_1 + 0x58)))) {
    puVar11 = (ushort *)(iVar10 + param_2);
    if (((*(int *)(puVar11 + 2) == 0) || ((*(uint *)(puVar11 + 0x10) & 0x80000) == 0)) ||
       ((param_2 = local_148, puVar11[0x14] != 0xf30a || (puVar11[0x15] == 0)))) {
LAB_180006289:
      iVar10 = iVar10 + *(int *)(param_1 + 100);
    }
    else {
      local_d4 = *(undefined8 *)puVar11;
      uStack_cc = *(undefined8 *)(puVar11 + 4);
      local_150 = (uint *)(puVar11 + 4);
      local_c4 = *(undefined8 *)(puVar11 + 8);
      uStack_bc = *(undefined8 *)(puVar11 + 0xc);
      local_d8 = *local_150;
      local_b4 = *(undefined8 *)(puVar11 + 0x10);
      uStack_ac = *(undefined8 *)(puVar11 + 0x14);
      local_a4 = *(undefined8 *)(puVar11 + 0x18);
      uStack_9c = *(undefined8 *)(puVar11 + 0x1c);
      local_94 = *(undefined8 *)(puVar11 + 0x20);
      uStack_8c = *(undefined8 *)(puVar11 + 0x24);
      local_84 = *(undefined8 *)(puVar11 + 0x28);
      uStack_7c = *(undefined8 *)(puVar11 + 0x2c);
      local_74 = *(undefined8 *)(puVar11 + 0x30);
      uStack_6c = *(undefined8 *)(puVar11 + 0x34);
      local_64 = *(undefined8 *)(puVar11 + 0x38);
      uStack_5c = *(undefined8 *)(puVar11 + 0x3c);
      plVar5 = (longlong *)FUN_18000be20((undefined8 *)(param_1 + 0x4a8),&local_d8);
      FUN_18000be90((longlong *)(param_1 + 0x4a8),local_110,param_3,
                    (uint *)((longlong)plVar5 + 0x1c),plVar5);
      if ((*puVar11 & 0xf000) == 0x4000) {
        if ((*(uint *)(puVar11 + 0x10) & 0x80000) == 0) {
          local_140 = (ulonglong)*(uint *)(puVar11 + 0x14);
        }
        else {
          param_3 = (ushort *)0x0;
          local_140 = FUN_180005340(param_1,(short *)(puVar11 + 0x14),0,'\0');
        }
        puVar11 = *(ushort **)(param_1 + 0x4b8);
        puVar7 = *(ushort **)(puVar11 + 4);
        puVar9 = puVar11;
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          do {
            if (*(longlong *)(puVar7 + 0x10) < (longlong)local_140) {
              puVar8 = *(ushort **)(puVar7 + 8);
            }
            else {
              puVar8 = *(ushort **)puVar7;
              puVar9 = puVar7;
            }
            puVar7 = puVar8;
          } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
          if ((puVar9 == puVar11) ||
             (puVar7 = puVar9, (longlong)local_140 < *(longlong *)(puVar9 + 0x10)))
          goto LAB_1800061a3;
        }
        else {
LAB_1800061a3:
          local_138 = &local_140;
          plVar5 = (longlong *)FUN_18000cb10((undefined8 *)(param_1 + 0x4b8),puVar11,&local_138);
          FUN_18000cb50((longlong *)(param_1 + 0x4b8),&local_118,(longlong *)puVar9,plVar5 + 4,
                        plVar5);
          puVar7 = local_118;
          param_3 = puVar9;
        }
        *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(puVar7 + 0x14);
        *(ulonglong *)(param_1 + 0x508) = local_140;
        puVar11 = *(ushort **)(param_1 + 0x4e8);
        puVar7 = *(ushort **)(puVar11 + 4);
        puVar9 = puVar11;
        if (*(char *)((longlong)*(ushort **)(puVar11 + 4) + 0x19) == '\0') {
          do {
            if (*(longlong *)(puVar7 + 0x10) < (longlong)local_140) {
              puVar8 = *(ushort **)(puVar7 + 8);
            }
            else {
              puVar8 = *(ushort **)puVar7;
              puVar9 = puVar7;
            }
            puVar7 = puVar8;
          } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
          if ((puVar9 == puVar11) ||
             (puVar7 = puVar9, (longlong)local_140 < *(longlong *)(puVar9 + 0x10)))
          goto LAB_18000622b;
        }
        else {
LAB_18000622b:
          local_138 = &local_140;
          plVar5 = (longlong *)FUN_18000c300((undefined8 *)(param_1 + 0x4e8),puVar11,&local_138);
          FUN_18000c360((longlong *)(param_1 + 0x4e8),&local_130,(longlong *)puVar9,plVar5 + 4,
                        plVar5);
          puVar7 = local_130;
          param_3 = puVar9;
        }
        FUN_18000ace0((longlong *)(puVar7 + 0x14),local_f0,param_3,local_150);
        param_2 = local_148;
        goto LAB_180006289;
      }
      plVar5 = FUN_1800093c0((longlong *)(param_1 + 0x4b8),(longlong *)(param_1 + 0x508));
      puVar2 = (undefined8 *)plVar5[1];
      if ((undefined8 *)plVar5[2] == puVar2) {
        FUN_18000a720(plVar5,puVar2,(undefined8 *)puVar11);
      }
      else {
        uVar3 = *(undefined8 *)(puVar11 + 4);
        *puVar2 = *(undefined8 *)puVar11;
        puVar2[1] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0xc);
        puVar2[2] = *(undefined8 *)(puVar11 + 8);
        puVar2[3] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x14);
        puVar2[4] = *(undefined8 *)(puVar11 + 0x10);
        puVar2[5] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x1c);
        puVar2[6] = *(undefined8 *)(puVar11 + 0x18);
        puVar2[7] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x24);
        puVar2[8] = *(undefined8 *)(puVar11 + 0x20);
        puVar2[9] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x2c);
        puVar2[10] = *(undefined8 *)(puVar11 + 0x28);
        puVar2[0xb] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x34);
        puVar2[0xc] = *(undefined8 *)(puVar11 + 0x30);
        puVar2[0xd] = uVar3;
        uVar3 = *(undefined8 *)(puVar11 + 0x3c);
        puVar2[0xe] = *(undefined8 *)(puVar11 + 0x38);
        puVar2[0xf] = uVar3;
        plVar5[1] = plVar5[1] + 0x80;
        puVar11 = param_3;
      }
      puVar7 = *(ushort **)(param_1 + 0x4c8);
      puVar9 = puVar7;
      if (*(char *)((longlong)*(ushort **)(puVar7 + 4) + 0x19) == '\0') {
        puVar8 = *(ushort **)(puVar7 + 4);
        do {
          if (*(uint *)(puVar8 + 0x10) < *local_150) {
            puVar6 = *(ushort **)(puVar8 + 8);
          }
          else {
            puVar6 = *(ushort **)puVar8;
            puVar9 = puVar8;
          }
          puVar8 = puVar6;
        } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
        if ((puVar9 == puVar7) ||
           (puVar8 = puVar9, param_3 = puVar11, *local_150 < *(uint *)(puVar9 + 0x10)))
        goto LAB_1800060d8;
      }
      else {
LAB_1800060d8:
        plVar5 = (longlong *)FUN_18000c850((undefined8 *)(param_1 + 0x4c8),puVar7,&local_150);
        FUN_18000c8b0((longlong *)(param_1 + 0x4c8),&local_120,(longlong *)puVar9,
                      (uint *)(plVar5 + 4),plVar5);
        puVar8 = local_120;
        param_3 = puVar9;
      }
      FUN_18000ab90((longlong *)(puVar8 + 0x14),local_100,param_3,(longlong *)(param_1 + 0x508));
      iVar10 = iVar10 + *(int *)(param_1 + 100);
      param_2 = local_148;
    }
  }
LAB_1800062b2:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_188);
  return;
}




void FUN_1800062d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  longlong local_res10;
  longlong local_28;
  undefined4 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x528);
  *(undefined4 *)(param_1 + 0x518) = 2;
  puVar2 = *(undefined8 **)(param_1 + 0xd38);
  puVar5 = (undefined8 *)puVar2[1];
  puVar9 = puVar2;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    do {
      if ((longlong)puVar5[4] < param_2) {
        puVar6 = (undefined8 *)puVar5[2];
      }
      else {
        puVar6 = (undefined8 *)*puVar5;
        puVar9 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    if ((puVar9 != puVar2) && ((longlong)puVar9[4] <= param_2)) goto LAB_180006338;
  }
  puVar9 = puVar2;
LAB_180006338:
  local_res10 = param_2;
  if (puVar9 == puVar2) {
    local_20 = 1;
    local_28 = param_2;
    plVar7 = (longlong *)FUN_18000b1d0((undefined8 *)(param_1 + 0xd38),&local_28);
    FUN_1800030d0((longlong *)(param_1 + 0xd38),&local_28,param_3,plVar7 + 4,plVar7);
    lVar11 = *(longlong *)(param_1 + 0x520);
    if ((lVar11 != 0) && (*(ulonglong *)(param_1 + 0xd40) < 100)) {
      dVar13 = (double)lVar11;
      if (lVar11 < 0) {
        dVar13 = dVar13 + 1.8446744073709552e+19;
      }
      if (0.5 <= (double)param_2 / dVar13) {
        return;
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x528);
    lVar12 = 0;
    if ((lVar11 != 0) && (lVar11 < param_2 / 2)) {
      plVar7 = (longlong *)(param_1 + 0xd60);
      plVar3 = *(longlong **)(param_1 + 0xd68);
      plVar8 = (longlong *)*plVar7;
      lVar10 = lVar12;
      if ((ulonglong)((longlong)plVar3 - (longlong)plVar8 >> 3) < 200) {
        if (*(longlong **)(param_1 + 0xd70) != plVar3) {
          *plVar3 = param_2;
          *(longlong *)(param_1 + 0xd68) = *(longlong *)(param_1 + 0xd68) + 8;
          return;
        }
        FUN_180001cf0(plVar7,plVar3,&local_res10);
        return;
      }
      for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
        lVar4 = *plVar8;
        lVar10 = lVar10 + lVar4;
      }
      lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar10),8) + lVar10;
      lVar10 = (lVar10 >> 7) - (lVar10 >> 0x3f);
      if (lVar11 < lVar10) {
        *(longlong *)(param_1 + 0x528) = lVar10;
      }
      *(longlong *)(param_1 + 0xd68) = *plVar7;
    }
    plVar7 = (longlong *)(param_1 + 0xd48);
    *(undefined8 *)(param_1 + 0xd68) = *(undefined8 *)(param_1 + 0xd60);
    plVar3 = *(longlong **)(param_1 + 0xd50);
    plVar8 = (longlong *)*plVar7;
    if ((ulonglong)((longlong)plVar3 - (longlong)plVar8 >> 3) < 200) {
      if (*(longlong **)(param_1 + 0xd58) == plVar3) {
        FUN_180001cf0(plVar7,plVar3,&local_res10);
      }
      else {
        *plVar3 = param_2;
        *(longlong *)(param_1 + 0xd50) = *(longlong *)(param_1 + 0xd50) + 8;
      }
    }
    else {
      for (; plVar8 != plVar3; plVar8 = plVar8 + 1) {
        lVar12 = lVar12 + *plVar8;
      }
      lVar12 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar12),8) + lVar12;
      lVar11 = (lVar12 >> 7) - (lVar12 >> 0x3f);
      if (*(longlong *)(param_1 + 0x528) < lVar11) {
        *(longlong *)(param_1 + 0x528) = lVar11;
      }
      *(longlong *)(param_1 + 0xd50) = *plVar7;
    }
    if (*(ulonglong *)(param_1 + 0x520) < *(ulonglong *)(param_1 + 0x528)) {
      *(ulonglong *)(param_1 + 0x528) = *(ulonglong *)(param_1 + 0x520) - 1;
    }
  }
  if (((*(char *)(param_1 + 0x511) != '\0') &&
      (plVar7 = *(longlong **)(param_1 + 0x28), plVar7 != (longlong *)0x0)) &&
     (lVar1 != *(longlong *)(param_1 + 0x528))) {
    (**(code **)(*plVar7 + 8))(plVar7,param_1 + 0x518);
  }
  return;
}




ulonglong FUN_180006560(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       char param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined7 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 0xd78);
  puVar7 = (undefined8 *)puVar3[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x19);
  puVar2 = puVar3;
  puVar8 = puVar7;
  if (cVar1 == '\0') {
    do {
      puVar5 = puVar8;
      if ((longlong)puVar5[4] < param_2) {
        puVar8 = (undefined8 *)puVar5[2];
        puVar5 = puVar2;
      }
      else {
        puVar8 = (undefined8 *)*puVar5;
      }
      puVar2 = puVar5;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar5 != puVar3) && ((longlong)puVar5[4] <= param_2)) goto LAB_1800065b7;
  }
  puVar5 = puVar3;
LAB_1800065b7:
  puVar8 = puVar3;
  puVar2 = puVar7;
  if (puVar5 != puVar3) {
    while (cVar1 == '\0') {
      if ((longlong)puVar2[4] < param_2) {
        puVar6 = (undefined8 *)puVar2[2];
        puVar2 = puVar3;
      }
      else {
        if ((*(char *)((longlong)puVar8 + 0x19) != '\0') && (param_2 < (longlong)puVar2[4])) {
          puVar8 = puVar2;
        }
        puVar6 = (undefined8 *)*puVar2;
      }
      puVar3 = puVar2;
      puVar2 = puVar6;
      cVar1 = *(char *)((longlong)puVar6 + 0x19);
    }
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      puVar7 = (undefined8 *)*puVar8;
    }
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
    while (cVar1 == '\0') {
      if (param_2 < (longlong)puVar7[4]) {
        puVar2 = (undefined8 *)*puVar7;
        puVar8 = puVar7;
      }
      else {
        puVar2 = (undefined8 *)puVar7[2];
      }
      puVar7 = puVar2;
      cVar1 = *(char *)((longlong)puVar2 + 0x19);
    }
    lVar9 = 0;
    if (puVar3 != puVar8) {
      do {
        puVar7 = (undefined8 *)puVar3[2];
        lVar9 = lVar9 + 1;
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x19);
          puVar3 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar7 + 0x19);
            puVar3 = puVar7;
            puVar7 = (undefined8 *)*puVar7;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar2 = (undefined8 *)puVar3[1];
          puVar7 = puVar3;
          while ((puVar3 = puVar2, cVar1 == '\0' && (puVar7 == (undefined8 *)puVar3[2]))) {
            cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
            puVar2 = (undefined8 *)puVar3[1];
            puVar7 = puVar3;
          }
        }
      } while (puVar3 != puVar8);
      if (0 < lVar9) {
        uVar4 = (undefined7)((ulonglong)puVar3 >> 8);
        if (param_5 != '\0') {
          return CONCAT71(uVar4,puVar5[5] == param_4);
        }
        return CONCAT71(uVar4,1);
      }
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800066c0(longlong param_1,longlong *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  size_t sVar5;
  char local_res20 [8];
  longlong local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  if (param_4 != (char *)0x0) {
    local_res20[0] = *param_4;
    iVar1 = _stricmp(local_res20,"@");
    if ((((iVar1 != 0) && (*(undefined1 *)(param_1 + 0xdc0) = 1, *(longlong *)(param_1 + 0x10) != 0)
         ) && (param_2 != (longlong *)0x2)) && (lVar2 = FUN_18000ef40(), lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x48) = param_3;
      *(longlong **)(lVar2 + 0x50) = param_2;
      local_48[0] = lVar2;
      plVar3 = (longlong *)operator_new(0x78);
      sVar5 = 0xffffffffffffffff;
      *(undefined4 *)(plVar3 + 1) = 0;
      *(undefined1 *)(plVar3 + 2) = 0;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)CEXT4FileProperties::vftable;
      *(undefined8 *)((longlong)plVar3 + 0x21) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x29) = 0xf;
      *(undefined1 *)((longlong)plVar3 + 0x11) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x31) = 0;
      *(undefined2 *)((longlong)plVar3 + 0x39) = 0;
      *(undefined2 *)((longlong)plVar3 + 0x53) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x5d) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x3b) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x43) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x4b) = 0;
      *(undefined8 *)((longlong)plVar3 + 0x55) = 0;
      plVar3[0xd] = 0;
      do {
        sVar5 = sVar5 + 1;
      } while (param_4[sVar5] != '\0');
      local_38 = plVar3;
      FUN_180002a10((longlong *)((longlong)plVar3 + 0x11),param_4,sVar5);
      *(ushort *)((longlong)plVar3 + 0x39) = *(ushort *)((longlong)plVar3 + 0x39) | 0x10;
      *(undefined8 *)((longlong)plVar3 + 0x31) = 0;
      *(undefined1 *)((longlong)plVar3 + 0x53) = 1;
      *(int *)(plVar3 + 0xe) = (int)param_2;
      *(longlong **)(lVar2 + 0x30) = plVar3;
      local_48[1] = 0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                        (*(longlong **)(param_1 + 0x10),lVar2,7,local_48 + 1);
      plVar3 = param_2;
      FUN_1800113a0("################################## fileName:%s ,id=%I64d,parent:%I64d,inserted:%d############################\n"
                    ,param_4,param_2,param_3);
      local_30 = lVar2;
      if (iVar1 == 0) {
        plVar4 = *(longlong **)(param_1 + 0xdb0);
        if (*(longlong **)(param_1 + 0xdb8) == plVar4) {
          plVar3 = local_48;
          FUN_180001cf0((longlong *)(param_1 + 0xda8),plVar4,plVar3);
          local_30 = local_48[0];
        }
        else {
          *plVar4 = lVar2;
          *(longlong *)(param_1 + 0xdb0) = *(longlong *)(param_1 + 0xdb0) + 8;
        }
      }
      local_38 = param_2;
      plVar4 = (longlong *)FUN_1800030a0((undefined8 *)(param_1 + 0xd98),&local_38);
      FUN_18000bff0((longlong *)(param_1 + 0xd98),&local_38,plVar3,plVar4 + 4,plVar4);
    }
  }
  return;
}




void FUN_1800068b0(longlong param_1,longlong *******param_2,void *param_3,char *param_4)

{
  void *pvVar1;
  bool bVar2;
  longlong *******ppppppplVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  short *psVar9;
  ulonglong uVar10;
  uint *lpAddress;
  longlong lVar11;
  longlong lVar12;
  undefined4 extraout_var;
  longlong *plVar13;
  void *pvVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  size_t sVar18;
  ulonglong uVar19;
  undefined1 auStackY_158 [32];
  ulonglong local_110;
  void *local_108;
  char *local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *******local_d8 [2];
  undefined8 local_c8;
  ulonglong local_c0;
  void *local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong uStack_98;
  longlong *******local_90;
  ulonglong local_88;
  void *local_80;
  void *local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_c8 = 0xfffffffffffffffe;
  local_58 = DAT_18001c010 ^ (ulonglong)auStackY_158;
  sVar18 = 0xffffffffffffffff;
  local_108 = param_3;
  local_100 = param_4;
  local_d8[0] = param_2;
  uVar8 = FUN_180006560(param_1,(longlong)param_2,param_3,0,'\0');
  if ((char)uVar8 == '\0') {
    psVar9 = (short *)FUN_180005020(param_1,(longlong)param_2);
    uVar19 = 0;
    uVar8 = uVar19;
    if ((param_2 != (longlong *******)0x0) &&
       ((*(longlong *)(param_1 + 0x4a0) != 0 || (uVar8 = 0, *(longlong *)(param_1 + 0x498) != 0))))
    {
      lVar16 = (longlong)param_2 + -1;
      uVar10 = lVar16 / (longlong)(ulonglong)*(uint *)(param_1 + 0x5c);
      uVar8 = uVar19;
      param_2 = local_d8[0];
      if ((uint)uVar10 <= *(uint *)(param_1 + 0x68)) {
        uVar15 = *(int *)(param_1 + 100) *
                 (int)(lVar16 % (longlong)(ulonglong)*(uint *)(param_1 + 0x5c));
        local_110 = local_110 & 0xffffffff00000000;
        uVar8 = FUN_180004e40(param_1,(uint)uVar10,(ulonglong)uVar15,(int *)&local_110);
        param_4 = local_100;
        param_2 = local_d8[0];
        if ((char)uVar8 == '\0') {
          uVar15 = uVar15 / *(uint *)(param_1 + 0x58);
          if (*(longlong *)(param_1 + 0x4a0) == 0) {
            uVar8 = (ulonglong)
                    (uVar15 + *(int *)((uVar10 & 0xffffffff) * 0x20 + 8 +
                                      *(longlong *)(param_1 + 0x498)));
          }
          else {
            uVar8 = (ulonglong)
                    (uVar15 + *(int *)((uVar10 & 0xffffffff) * 0x40 + 8 +
                                      *(longlong *)(param_1 + 0x4a0)));
          }
        }
        else {
          uVar8 = local_110 & 0xffffffff;
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x4a0) != 0) || (*(longlong *)(param_1 + 0x498) != 0)) &&
       (uVar15 = (uint)((longlong)(uVar8 - (longlong)*(int *)(param_1 + 0xac)) /
                       (longlong)*(int *)(param_1 + 0xb8)), uVar15 < *(uint *)(param_1 + 0x68))) {
      local_110 = 0;
      FUN_180004c70(param_1,uVar15,&local_110);
    }
    if (psVar9 == (short *)0x0) {
      FUN_1800066c0(param_1,(longlong *)param_2,param_3,param_4);
    }
    else {
      local_110 = CONCAT44(local_110._4_4_,0xffffffff);
      FUN_1800085f0(param_1,psVar9,param_2,(longlong)param_3,param_4,'\x01',(int *)&local_110,'\0');
      uVar8 = CONCAT44(*(undefined4 *)(psVar9 + 0x36),*(undefined4 *)(psVar9 + 2));
      if ((longlong)uVar8 < 0x1400001) {
        if (uVar8 == 0) {
          if (*(int *)(psVar9 + 10) == 0) goto LAB_180006f23;
          psVar9 = FUN_180008b80(param_1,psVar9);
          if (psVar9 != (short *)0x0) {
            uVar19 = CONCAT44(*(undefined4 *)(psVar9 + 0x36),*(undefined4 *)(psVar9 + 2));
          }
          uVar8 = uVar19;
          if (uVar19 == 0) goto LAB_180006f23;
        }
        lpAddress = *(uint **)(param_1 + 0x48);
        bVar2 = false;
        if (0xa00000 < (longlong)uVar8) {
          bVar2 = true;
          lVar16 = (longlong)*(int *)(param_1 + 0x58) + uVar8;
          lpAddress = (uint *)VirtualAlloc((LPVOID)0x0,
                                           lVar16 - lVar16 % (longlong)*(int *)(param_1 + 0x58),
                                           0x1000,4);
          if (lpAddress == (uint *)0x0) goto LAB_180006f23;
        }
        for (lVar16 = 0;
            ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
             (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar6 != 0)) &&
            (lVar16 < (longlong)uVar8)); lVar16 = lVar16 + lVar11) {
          lVar11 = lVar16 / (longlong)*(int *)(param_1 + 0x58);
          if ((*(uint *)(psVar9 + 0x10) & 0x80000) == 0) {
            uVar7 = FUN_180005190(param_1,(longlong)psVar9,lVar11);
            lVar12 = CONCAT44(extraout_var,uVar7);
          }
          else {
            lVar12 = FUN_180005340(param_1,psVar9 + 0x14,lVar11,'\0');
          }
          if (lVar12 == 0) goto LAB_180006f23;
          FUN_1800062d0(param_1,lVar12,lVar11);
          plVar13 = *(longlong **)(param_1 + 8);
          if (((plVar13 == (longlong *)0x0) ||
              (iVar6 = (**(code **)(*plVar13 + 0x30))
                                 (plVar13,lVar16 + (longlong)lpAddress,
                                  *(int *)(param_1 + 0x58) * lVar12 + *(longlong *)(param_1 + 0x30))
              , iVar6 < 1)) ||
             ((lVar11 = (longlong)*(int *)(param_1 + 0x58), lVar16 < lVar11 &&
              (cVar5 = FUN_1800090d0(plVar13,(longlong)lpAddress), cVar5 == '\0'))))
          goto LAB_180006f23;
        }
        if ((*(uint *)(psVar9 + 0x10) & 0x80000) == 0) {
          local_c0 = (ulonglong)*(uint *)(psVar9 + 0x14);
        }
        else {
          local_c0 = FUN_180005340(param_1,psVar9 + 0x14,0,'\0');
        }
        local_b8 = local_108;
        local_a0 = 0;
        uStack_98 = 0xf;
        local_b0 = 0;
        do {
          sVar18 = sVar18 + 1;
        } while (local_100[sVar18] != '\0');
        FUN_180002a10((longlong *)&local_b0,local_100,sVar18);
        ppppppplVar3 = local_d8[0];
        local_90 = local_d8[0];
        local_88 = local_c0;
        local_80 = local_b8;
        FUN_180009540(local_78,(undefined8 *)&local_b0);
        plVar13 = (longlong *)FUN_18000bf10((undefined8 *)(param_1 + 0xd78),&local_90);
        FUN_18000bf70((longlong *)(param_1 + 0xd78),local_d8,sVar18,plVar13 + 4,plVar13);
        if (0xf < local_60) {
          pvVar14 = local_78[0];
          if ((0xfff < local_60 + 1) &&
             (pvVar14 = *(void **)((longlong)local_78[0] + -8),
             0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar14);
        }
        FUN_1800113a0("*****TraverseDir:  fileName:%s ,id=%I64d,parentId:%I64d,block:%I64d,sector:%I64d\n"
                      ,local_100,ppppppplVar3,local_108);
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        local_e8 = (longlong *)FUN_18000a3c0();
        local_f8 = (longlong *)0x0;
        uStack_f0 = 0;
        local_f8 = (longlong *)FUN_18000a3c0();
        FUN_180006fc0(param_1,ppppppplVar3,local_108,lpAddress,(longlong *)&local_e8,
                      (longlong *)&local_f8,uVar8);
        if (bVar2) {
          VirtualFree(lpAddress,0,0x8000);
        }
        plVar13 = (longlong *)*local_e8;
        while (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
                (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar6 != 0)) &&
               (plVar13 != local_e8))) {
          plVar17 = plVar13 + 5;
          if (0xf < (ulonglong)plVar13[8]) {
            plVar17 = (longlong *)*plVar17;
          }
          FUN_1800068b0(param_1,(longlong *******)plVar13[4],ppppppplVar3,(char *)plVar17);
          plVar17 = (longlong *)plVar13[2];
          if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
            cVar5 = *(char *)(*plVar17 + 0x19);
            plVar13 = plVar17;
            plVar17 = (longlong *)*plVar17;
            while (cVar5 == '\0') {
              cVar5 = *(char *)(*plVar17 + 0x19);
              plVar13 = plVar17;
              plVar17 = (longlong *)*plVar17;
            }
          }
          else {
            cVar5 = *(char *)(plVar13[1] + 0x19);
            plVar4 = (longlong *)plVar13[1];
            plVar17 = plVar13;
            while ((plVar13 = plVar4, cVar5 == '\0' && (plVar17 == (longlong *)plVar13[2]))) {
              cVar5 = *(char *)(plVar13[1] + 0x19);
              plVar4 = (longlong *)plVar13[1];
              plVar17 = plVar13;
            }
          }
        }
        plVar13 = (longlong *)*local_f8;
        while (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
                (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(), iVar6 != 0)) &&
               (plVar13 != local_f8))) {
          plVar17 = plVar13 + 5;
          if (0xf < (ulonglong)plVar13[8]) {
            plVar17 = (longlong *)*plVar17;
          }
          FUN_1800068b0(param_1,(longlong *******)plVar13[4],ppppppplVar3,(char *)plVar17);
          plVar17 = (longlong *)plVar13[2];
          if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
            cVar5 = *(char *)(*plVar17 + 0x19);
            plVar13 = plVar17;
            plVar17 = (longlong *)*plVar17;
            while (cVar5 == '\0') {
              cVar5 = *(char *)(*plVar17 + 0x19);
              plVar13 = plVar17;
              plVar17 = (longlong *)*plVar17;
            }
          }
          else {
            cVar5 = *(char *)(plVar13[1] + 0x19);
            plVar4 = (longlong *)plVar13[1];
            plVar17 = plVar13;
            while ((plVar13 = plVar4, cVar5 == '\0' && (plVar17 == (longlong *)plVar13[2]))) {
              cVar5 = *(char *)(plVar13[1] + 0x19);
              plVar4 = (longlong *)plVar13[1];
              plVar17 = plVar13;
            }
          }
        }
        FUN_180009920((longlong *)&local_f8,&local_108,(longlong *)*local_f8,local_f8);
        FUN_180013b3c(local_f8);
        FUN_180009920((longlong *)&local_e8,&local_108,(longlong *)*local_e8,local_e8);
        FUN_180013b3c(local_e8);
        if (0xf < uStack_98) {
          pvVar1 = (void *)CONCAT71(uStack_af,local_b0);
          pvVar14 = pvVar1;
          if ((0xfff < uStack_98 + 1) &&
             (pvVar14 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar14);
        }
      }
    }
  }
LAB_180006f23:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_158);
  return;
}




void FUN_180006f50(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_180006fc0(longlong param_1,void *param_2,void *param_3,uint *param_4,longlong *param_5,
                  longlong *param_6,longlong param_7)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 ******ppppppuVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 ******ppppppuVar11;
  longlong *plVar12;
  undefined8 *******pppppppuVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  size_t _Size;
  bool bVar20;
  undefined1 auStackY_178 [32];
  int local_138;
  int local_134;
  longlong local_130;
  void *local_128;
  longlong local_120;
  uint *local_118;
  void *local_110;
  longlong *local_108;
  uint *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8 [2];
  undefined8 ******local_c8 [2];
  ulonglong local_b8;
  ulonglong local_b0;
  void *local_a8;
  undefined8 *****local_a0;
  undefined8 *****pppppuStack_98;
  ulonglong local_90;
  ulonglong local_88;
  uint local_80 [2];
  void *local_78;
  void *local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_f0 = 0xfffffffffffffffe;
  local_50 = DAT_18001c010 ^ (ulonglong)auStackY_178;
  local_f8 = param_5;
  local_108 = param_6;
  local_120 = 0;
  local_134 = -1;
  local_138 = 0;
  local_130 = param_1;
  local_128 = param_3;
  local_110 = param_2;
  local_100 = param_4;
  for (; (((plVar12 = local_f8, puVar6 = local_100,
           *(longlong **)(local_130 + 0x28) != (longlong *)0x0 &&
           (iVar8 = (**(code **)(**(longlong **)(local_130 + 0x28) + 0x10))(), iVar8 != 0)) &&
          (param_4 != (uint *)0x0)) &&
         (((short)param_4[1] != 0 &&
          (local_118 = (uint *)((longlong)puVar6 + param_7), param_4 < local_118))));
      param_4 = (uint *)((longlong)param_4 + (ulonglong)(ushort)param_4[1])) {
    cVar2 = *(char *)((longlong)param_4 + 7);
    bVar3 = *(byte *)((longlong)param_4 + 6);
    uVar16 = (uint)bVar3;
    if (bVar3 == 0) {
LAB_180007332:
      if (cVar2 != '\x02') goto LAB_180007338;
    }
    else {
      if (cVar2 == '\x02') {
        if (((char)param_4[2] != '.') || ((bVar3 != 1 && (*(char *)((longlong)param_4 + 9) != '.')))
           ) {
          uVar16 = (uint)bVar3;
          if (((void *)(ulonglong)*param_4 != param_2) && ((void *)(ulonglong)*param_4 != param_3))
          {
            local_b8 = 0;
            local_b0 = 0xf;
            local_c8[0] = (undefined8 ******)((ulonglong)local_c8[0] & 0xffffffffffffff00);
            _Size = (size_t)bVar3;
            FUN_180002a10((longlong *)local_c8,param_4 + 2,_Size);
            local_80[0] = *param_4;
            FUN_180009540(&local_78,local_c8);
            plVar9 = (longlong *)FUN_18000ae60(plVar12,local_80);
            FUN_18000aeb0(plVar12,local_e8,_Size,plVar9 + 4,plVar9);
            if (0xf < local_60) {
              pvVar15 = local_78;
              if ((0xfff < local_60 + 1) &&
                 (pvVar15 = *(void **)((longlong)local_78 + -8),
                 0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_180013b3c(pvVar15);
            }
            uVar18 = local_b0;
            uVar19 = local_b8;
            ppppppuVar7 = local_c8[0];
            local_a8 = param_3;
            ppppppuVar11 = (undefined8 ******)0x0;
            local_90 = 0;
            local_88 = 0;
            pppppppuVar13 = local_c8;
            if (0xf < local_b0) {
              pppppppuVar13 = (undefined8 *******)local_c8[0];
            }
            if (local_b8 < 0x10) {
              local_a0 = *pppppppuVar13;
              pppppuStack_98 = pppppppuVar13[1];
              local_88 = 0xf;
            }
            else {
              uVar17 = local_b8 | 0xf;
              if (0x7fffffffffffffff < uVar17) {
                uVar17 = 0x7fffffffffffffff;
              }
              uVar1 = uVar17 + 1;
              if (uVar1 < 0x1000) {
                if (uVar1 != 0) {
                  ppppppuVar11 = (undefined8 ******)operator_new(uVar1);
                }
              }
              else {
                uVar14 = uVar17 + 0x28;
                if (uVar14 <= uVar1) {
                  uVar14 = 0xffffffffffffffff;
                }
                pppppuVar10 = (undefined8 *****)operator_new(uVar14);
                if (pppppuVar10 == (undefined8 *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                ppppppuVar11 = (undefined8 ******)
                               ((longlong)pppppuVar10 + 0x27U & 0xffffffffffffffe0);
                ppppppuVar11[-1] = pppppuVar10;
              }
              _Size = uVar19 + 1;
              local_a0 = ppppppuVar11;
              memcpy(ppppppuVar11,pppppppuVar13,_Size);
              local_88 = uVar17;
            }
            lVar5 = local_130;
            local_90 = uVar19;
            local_80[0] = *param_4;
            local_78 = local_128;
            FUN_180009540(local_70,&local_a0);
            plVar12 = (longlong *)FUN_18000b010((undefined8 *)(lVar5 + 0xd88),local_80);
            FUN_18000b070((longlong *)(lVar5 + 0xd88),local_d8,_Size,plVar12 + 4,plVar12);
            if (0xf < local_58) {
              pvVar15 = local_70[0];
              if ((0xfff < local_58 + 1) &&
                 (pvVar15 = *(void **)((longlong)local_70[0] + -8),
                 0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_180013b3c(pvVar15);
            }
            if (0xf < local_88) {
              ppppppuVar11 = (undefined8 ******)local_a0;
              if ((0xfff < local_88 + 1) &&
                 (ppppppuVar11 = (undefined8 ******)local_a0[-1],
                 0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppppuVar11)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_180013b3c(ppppppuVar11);
            }
            if (0xf < uVar18) {
              pppppppuVar13 = (undefined8 *******)ppppppuVar7;
              if ((0xfff < uVar18 + 1) &&
                 (pppppppuVar13 = (undefined8 *******)ppppppuVar7[-1],
                 0x1f < (ulonglong)((longlong)ppppppuVar7 + (-8 - (longlong)pppppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_180013b3c(pppppppuVar13);
            }
            uVar16 = (uint)*(byte *)((longlong)param_4 + 6);
          }
        }
        goto LAB_180007332;
      }
LAB_180007338:
      if ((char)uVar16 != '\0') {
        local_138 = local_138 + 1;
        local_134 = local_138;
      }
    }
    uVar4 = (ushort)param_4[1];
    bVar20 = param_4 + (ulonglong)uVar4 * 0x42 < local_118;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8[0] = (undefined8 ******)((ulonglong)local_c8[0] & 0xffffffffffffff00);
    uVar19 = (ulonglong)uVar16;
    if (uVar19 < 0x10) {
      local_b8 = uVar19;
      memmove(local_c8,param_4 + 2,(ulonglong)uVar16);
      *(undefined1 *)((longlong)local_c8 + uVar19) = 0;
    }
    else {
      uVar18 = uVar19 | 0xf;
      if (uVar18 < 0x16) {
        uVar18 = 0x16;
      }
      pppppppuVar13 = (undefined8 *******)operator_new(uVar18 + 1);
      local_b8 = uVar19;
      local_b0 = uVar18;
      memcpy(pppppppuVar13,param_4 + 2,uVar19);
      *(undefined1 *)((longlong)pppppppuVar13 + uVar19) = 0;
      local_c8[0] = pppppppuVar13;
    }
    param_2 = local_110;
    pppppppuVar13 = local_c8;
    if (0xf < local_b0) {
      pppppppuVar13 = (undefined8 *******)local_c8[0];
    }
    FUN_1800113a0("--FDT:fileName:%s,id=%I64d,type:%d,parentId:%I64d\n",pppppppuVar13,
                  (ulonglong)*param_4,(ulonglong)*(byte *)((longlong)param_4 + 7));
    if (0xf < local_b0) {
      pppppppuVar13 = (undefined8 *******)local_c8[0];
      if ((0xfff < local_b0 + 1) &&
         (pppppppuVar13 = (undefined8 *******)local_c8[0][-1],
         0x1f < (ulonglong)((longlong)local_c8[0] + (-8 - (longlong)pppppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pppppppuVar13);
    }
    param_3 = local_128;
    FUN_180005820(local_130,param_2,local_128,param_4,(uint)uVar4,
                  (uVar16 + 0xb & 0xfffffffc) < (uint)uVar4 && bVar20,local_108,&local_134);
    local_120 = local_120 + (ulonglong)(ushort)param_4[1];
    if (param_7 < local_120) break;
  }
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_178);
  return;
}




ulonglong FUN_180007510(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = CONCAT44(*(int *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 4)) +
          (ulonglong)(*(int *)(param_2 + 0x6c) >> 0x1f & 0x1ff);
  return CONCAT71((int7)(lVar1 >> 0x11),*(uint *)(param_2 + 0x1c) < (uint)(lVar1 >> 9));
}




void FUN_180007540(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  DWORD local_98 [2];
  _FILETIME local_90;
  _FILETIME local_88;
  SYSTEMTIME local_80;
  tm local_70;
  ulonglong local_48;
  
  local_48 = DAT_18001c010 ^ (ulonglong)auStack_b8;
  lVar3 = param_3;
  FUN_180003590(param_2);
  if ((*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) &&
     (ppuVar1 = (undefined **)**(longlong **)(lVar3 + 0x30), ppuVar1 != CEXT4FileProperties::vftable
     )) {
    (*(code *)ppuVar1[3])();
  }
  local_98[0] = *(DWORD *)(param_2 + 0xc);
  _gmtime32_s(&local_70,(__time32_t *)local_98);
  local_80.wMonth = (short)local_70.tm_mon + 1;
  local_80.wYear = (short)local_70.tm_year + 0x76c;
  local_80.wDayOfWeek = 0;
  local_80.wDay = (WORD)local_70.tm_mday;
  local_80.wMinute = (WORD)local_70.tm_min;
  local_80.wHour = (WORD)local_70.tm_hour;
  local_80.wSecond = (undefined2)local_70.tm_sec;
  local_80.wMilliseconds = 0;
  SystemTimeToFileTime(&local_80,&local_90);
  local_98[0] = *(undefined4 *)(param_2 + 0x10);
  _gmtime32_s(&local_70,(__time32_t *)local_98);
  local_80.wMonth = (short)local_70.tm_mon + 1;
  local_80.wYear = (short)local_70.tm_year + 0x76c;
  local_80.wDayOfWeek = 0;
  local_80.wDay = (WORD)local_70.tm_mday;
  local_80.wMinute = (WORD)local_70.tm_min;
  local_80.wHour = (WORD)local_70.tm_hour;
  local_80.wSecond = (undefined2)local_70.tm_sec;
  local_80.wMilliseconds = 0;
  SystemTimeToFileTime(&local_80,&local_88);
  plVar2 = *(longlong **)(param_3 + 0x30);
  local_98[0] = 0;
  local_98[1] = 0;
  if (plVar2 == (longlong *)0x0) {
    local_98[0] = 0;
    local_98[1] = 0;
    plVar2 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_98);
    plVar2 = *(longlong **)(param_3 + 0x30);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  if (plVar2 == (longlong *)0x0) {
    local_98[0] = 0;
    local_98[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x58))(plVar2,local_98);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180007720(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
                  ,char param_6,char param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  size_t sVar18;
  int iVar19;
  undefined1 auStackY_d8 [32];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_18001c010 ^ (ulonglong)auStackY_d8;
  local_80 = param_3;
  local_78 = param_1;
  if ((param_2 == 0) || (param_5 == (char *)0x0)) goto LAB_180007a38;
  puVar1 = *(undefined8 **)(param_1 + 0xd98);
  puVar15 = (undefined8 *)puVar1[1];
  cVar4 = *(char *)((longlong)puVar15 + 0x19);
  puVar11 = puVar15;
  puVar16 = puVar1;
  if (cVar4 == '\0') {
    do {
      if ((longlong)puVar11[4] < param_3) {
        puVar7 = (undefined8 *)puVar11[2];
      }
      else {
        puVar7 = (undefined8 *)*puVar11;
        puVar16 = puVar11;
      }
      puVar11 = puVar7;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    if ((puVar16 == puVar1) || (param_3 < (longlong)puVar16[4])) goto LAB_1800077cb;
  }
  else {
LAB_1800077cb:
    puVar16 = puVar1;
  }
  puVar11 = puVar1;
  puVar7 = puVar15;
  if (puVar16 != puVar1) {
    while (cVar4 == '\0') {
      if ((longlong)puVar7[4] < param_3) {
        puVar12 = (undefined8 *)puVar7[2];
        puVar7 = puVar1;
      }
      else {
        if ((*(char *)((longlong)puVar11 + 0x19) != '\0') && (param_3 < (longlong)puVar7[4])) {
          puVar11 = puVar7;
        }
        puVar12 = (undefined8 *)*puVar7;
      }
      puVar1 = puVar7;
      puVar7 = puVar12;
      cVar4 = *(char *)((longlong)puVar12 + 0x19);
    }
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      puVar15 = (undefined8 *)*puVar11;
    }
    cVar4 = *(char *)((longlong)puVar15 + 0x19);
    while (cVar4 == '\0') {
      if (param_3 < (longlong)puVar15[4]) {
        puVar7 = (undefined8 *)*puVar15;
        puVar11 = puVar15;
      }
      else {
        puVar7 = (undefined8 *)puVar15[2];
      }
      puVar15 = puVar7;
      cVar4 = *(char *)((longlong)puVar7 + 0x19);
    }
    iVar19 = 0;
    while (puVar1 != puVar11) {
      iVar19 = iVar19 + 1;
      puVar15 = (undefined8 *)puVar1[2];
      if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
        cVar4 = *(char *)((longlong)*puVar15 + 0x19);
        puVar1 = puVar15;
        puVar15 = (undefined8 *)*puVar15;
        while (cVar4 == '\0') {
          cVar4 = *(char *)((longlong)*puVar15 + 0x19);
          puVar1 = puVar15;
          puVar15 = (undefined8 *)*puVar15;
        }
      }
      else {
        cVar4 = *(char *)((longlong)puVar1[1] + 0x19);
        puVar7 = (undefined8 *)puVar1[1];
        puVar15 = puVar1;
        while ((puVar1 = puVar7, cVar4 == '\0' && (puVar15 == (undefined8 *)puVar1[2]))) {
          cVar4 = *(char *)((longlong)puVar1[1] + 0x19);
          puVar7 = (undefined8 *)puVar1[1];
          puVar15 = puVar1;
        }
      }
    }
    iVar17 = 0;
    if (0 < iVar19) {
      do {
        plVar10 = (longlong *)puVar16[5];
        local_70 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          ppuVar8 = FUN_18000f790((longlong)plVar10);
          local_50 = 0;
          local_48 = 0xf;
          local_60[0]._0_1_ = 0;
          sVar18 = 0xffffffffffffffff;
          do {
            sVar18 = sVar18 + 1;
          } while (*(char *)((longlong)ppuVar8 + sVar18) != '\0');
          FUN_180002a10(local_60,ppuVar8,sVar18);
          lVar2 = plVar10[9];
          if (param_6 == '\0') {
LAB_18000795b:
            plVar13 = local_60;
            if (0xf < local_48) {
              plVar13 = (longlong *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
            }
            iVar6 = _stricmp((char *)plVar13,param_5);
            if (iVar6 != 0) {
LAB_1800079a1:
              if (0xf < local_48) {
                pvVar3 = (void *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
                pvVar14 = pvVar3;
                if ((0xfff < local_48 + 1) &&
                   (pvVar14 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_180013b3c(pvVar14);
              }
              goto LAB_1800079e1;
            }
            if (lVar2 == param_4) {
              if (local_48 < 0x10) break;
              pvVar3 = (void *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
              pvVar14 = pvVar3;
              if ((0xfff < local_48 + 1) &&
                 (pvVar14 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)
                        ((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            else {
              if ((param_6 != '\0') ||
                 (cVar4 = FUN_180007540(plVar13,param_2,(longlong)plVar10), cVar4 == '\0'))
              goto LAB_1800079a1;
              if (local_48 < 0x10) break;
              pvVar3 = (void *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
              pvVar14 = pvVar3;
              if ((0xfff < local_48 + 1) &&
                 (pvVar14 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)
                        ((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
          }
          else {
            iVar6 = (**(code **)(*plVar10 + 8))(plVar10);
            if ((iVar6 == 0) && ((*(byte *)((longlong)plVar10 + 0x72) & 4) == 0)) {
              plVar13 = (longlong *)plVar10[6];
              if (plVar13 != (longlong *)0x0) {
                if ((undefined **)*plVar13 == CEXT4FileProperties::vftable) {
                  bVar5 = (byte)*(undefined2 *)((longlong)plVar13 + 0x39);
                }
                else {
                  bVar5 = (*(code *)((undefined **)*plVar13)[7])();
                }
                if ((bVar5 >> 4 & 1) != 0) goto LAB_180007a67;
              }
              goto LAB_18000795b;
            }
LAB_180007a67:
            lVar2 = local_78;
            plVar13 = *(longlong **)(local_78 + 0xdb0);
            if (*(longlong **)(local_78 + 0xdb8) == plVar13) {
              FUN_180001cf0((longlong *)(local_78 + 0xda8),plVar13,&local_70);
            }
            else {
              *plVar13 = (longlong)plVar10;
              *(longlong *)(local_78 + 0xdb0) = *(longlong *)(local_78 + 0xdb0) + 8;
            }
            lVar9 = FUN_1800080f0(lVar2,param_2,local_80,param_4,param_5,param_6,param_7);
            plVar10 = FUN_1800091c0((longlong *)(lVar2 + 0xdd8),&local_80);
            *plVar10 = lVar9;
            puVar16[5] = lVar9;
            if (local_48 < 0x10) break;
            pvVar3 = (void *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
            pvVar14 = pvVar3;
            if ((0xfff < local_48 + 1) &&
               (pvVar14 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_180013b3c(pvVar14);
          break;
        }
LAB_1800079e1:
        iVar17 = iVar17 + 1;
        puVar1 = (undefined8 *)puVar16[2];
        if (*(char *)((longlong)puVar1 + 0x19) == '\0') {
          cVar4 = *(char *)((longlong)*puVar1 + 0x19);
          puVar16 = puVar1;
          puVar1 = (undefined8 *)*puVar1;
          while (cVar4 == '\0') {
            cVar4 = *(char *)((longlong)*puVar1 + 0x19);
            puVar16 = puVar1;
            puVar1 = (undefined8 *)*puVar1;
          }
        }
        else {
          cVar4 = *(char *)((longlong)puVar16[1] + 0x19);
          puVar15 = (undefined8 *)puVar16[1];
          puVar1 = puVar16;
          while ((puVar16 = puVar15, cVar4 == '\0' && (puVar1 == (undefined8 *)puVar16[2]))) {
            cVar4 = *(char *)((longlong)puVar16[1] + 0x19);
            puVar15 = (undefined8 *)puVar16[1];
            puVar1 = puVar16;
          }
        }
      } while (iVar17 < iVar19);
    }
  }
LAB_180007a38:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_d8);
  return;
}




longlong FUN_180007bd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint local_res10 [4];
  longlong local_res20;
  uint local_58 [2];
  uint *local_50;
  longlong *local_48;
  longlong local_40;
  
  iVar2 = *param_5;
  if (iVar2 == -1) {
    return param_2;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x4d0) == 0) {
    return param_2;
  }
  if ((*(short *)(param_2 + 0x28) == -0xcf6) || (param_3 == 2)) {
    *param_5 = iVar2 + -1;
    return param_2;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x4d8);
  puVar14 = (undefined8 *)puVar19[1];
  uVar18 = (uint)param_4;
  puVar13 = puVar14;
  puVar3 = puVar19;
  if (*(char *)((longlong)puVar14 + 0x19) == '\0') {
    do {
      if (*(uint *)(puVar13 + 4) < uVar18) {
        puVar5 = (undefined8 *)puVar13[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar13;
        puVar3 = puVar13;
      }
      puVar13 = puVar5;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
    if ((puVar3 != puVar19) && (puVar13 = puVar19, *(uint *)(puVar3 + 4) <= uVar18)) {
      do {
        puVar3 = puVar14;
        if (*(uint *)(puVar3 + 4) < uVar18) {
          puVar14 = (undefined8 *)puVar3[2];
          puVar3 = puVar13;
        }
        else {
          puVar14 = (undefined8 *)*puVar3;
        }
        puVar13 = puVar3;
      } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
      if ((puVar3 == puVar19) || (uVar18 < *(uint *)(puVar3 + 4))) {
        puVar3 = puVar19;
      }
      if (puVar3 == puVar19) {
        return param_2;
      }
      plVar16 = (longlong *)puVar3[5];
      goto joined_r0x000180007cc6;
    }
  }
  local_res10[0] = uVar18;
  local_res20 = param_4;
  puVar4 = FUN_180009330((longlong *)(param_1 + 0x4d8),local_res10);
  puVar3 = (undefined8 *)0x0;
  puVar4[0] = 0;
  puVar4[1] = 0;
  puVar19 = *(undefined8 **)(param_1 + 0xd78);
  puVar13 = (undefined8 *)puVar19[1];
  puVar14 = puVar19;
  if (*(char *)((longlong)puVar19[1] + 0x19) == '\0') {
    do {
      if ((longlong)puVar13[4] < param_4) {
        puVar5 = (undefined8 *)puVar13[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar13;
        puVar14 = puVar13;
      }
      puVar13 = puVar5;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
    if ((puVar14 == puVar19) || (param_4 < (longlong)puVar14[4])) goto LAB_180007d2a;
  }
  else {
LAB_180007d2a:
    puVar14 = puVar19;
  }
  if (puVar14 == puVar19) {
    return param_2;
  }
  lVar6 = FUN_180009250((longlong *)(param_1 + 0xd78),&local_res20);
  local_res10[0] = 0;
  puVar19 = puVar3;
  local_40 = lVar6;
  if (0 < lVar6) {
    do {
      uVar17 = (uint)puVar3;
      puVar13 = *(undefined8 **)(param_1 + 0x4e8);
      puVar3 = (undefined8 *)puVar13[1];
      puVar5 = puVar13;
      if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
        do {
          if ((longlong)puVar3[4] < (longlong)puVar14[5]) {
            puVar7 = (undefined8 *)puVar3[2];
          }
          else {
            puVar7 = (undefined8 *)*puVar3;
            puVar5 = puVar3;
          }
          puVar3 = puVar7;
        } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
        if ((puVar5 == puVar13) || ((longlong)puVar14[5] < (longlong)puVar5[4])) goto LAB_180007dab;
      }
      else {
LAB_180007dab:
        puVar5 = puVar13;
      }
      if (puVar5 != puVar13) {
        plVar16 = *(longlong **)puVar5[5];
        if (plVar16 != (longlong *)puVar5[5]) {
          do {
            puVar13 = *(undefined8 **)(param_1 + 0x4c8);
            puVar7 = puVar13;
            puVar3 = (undefined8 *)puVar13[1];
            if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
              do {
                puVar8 = puVar3;
                if (*(uint *)(puVar8 + 4) < *(uint *)((longlong)plVar16 + 0x1c)) {
                  puVar3 = (undefined8 *)puVar8[2];
                  puVar8 = puVar7;
                }
                else {
                  puVar3 = (undefined8 *)*puVar8;
                }
                puVar7 = puVar8;
              } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
              if ((puVar8 == puVar13) ||
                 (*(uint *)((longlong)plVar16 + 0x1c) < *(uint *)(puVar8 + 4))) goto LAB_180007e08;
            }
            else {
LAB_180007e08:
              puVar8 = puVar13;
            }
            if (puVar8 != puVar13) {
              plVar12 = (longlong *)puVar8[5];
              plVar9 = (longlong *)*plVar12;
              if (plVar9 != plVar12) {
                puVar13 = *(undefined8 **)(param_1 + 0x4b8);
                while( true ) {
                  cVar1 = *(char *)((longlong)puVar13[1] + 0x19);
                  puVar3 = puVar13;
                  puVar7 = (undefined8 *)puVar13[1];
                  while (cVar1 == '\0') {
                    if ((longlong)puVar7[4] < plVar9[4]) {
                      puVar8 = (undefined8 *)puVar7[2];
                      puVar7 = puVar3;
                    }
                    else {
                      puVar8 = (undefined8 *)*puVar7;
                    }
                    puVar3 = puVar7;
                    puVar7 = puVar8;
                    cVar1 = *(char *)((longlong)puVar8 + 0x19);
                  }
                  if ((puVar3 == puVar13) || (plVar9[4] < (longlong)puVar3[4])) {
                    puVar3 = puVar13;
                  }
                  if (puVar3 != puVar13) break;
                  plVar10 = (longlong *)plVar9[2];
                  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                    cVar1 = *(char *)(*plVar10 + 0x19);
                    plVar9 = plVar10;
                    plVar10 = (longlong *)*plVar10;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)(*plVar10 + 0x19);
                      plVar9 = plVar10;
                      plVar10 = (longlong *)*plVar10;
                    }
                  }
                  else {
                    cVar1 = *(char *)(plVar9[1] + 0x19);
                    plVar15 = (longlong *)plVar9[1];
                    plVar10 = plVar9;
                    while ((plVar9 = plVar15, cVar1 == '\0' && (plVar10 == (longlong *)plVar9[2])))
                    {
                      cVar1 = *(char *)(plVar9[1] + 0x19);
                      plVar15 = (longlong *)plVar9[1];
                      plVar10 = plVar9;
                    }
                  }
                  if (plVar9 == plVar12) goto LAB_180007f51;
                }
                puVar19 = puVar3 + 5;
                plVar9 = *(longlong **)(param_1 + 0x4d8);
                plVar10 = (longlong *)plVar9[1];
                plVar15 = plVar9;
                if (*(char *)(plVar9[1] + 0x19) != '\0') goto LAB_180007f09;
                do {
                  if (*(uint *)(plVar10 + 4) < uVar18) {
                    plVar11 = (longlong *)plVar10[2];
                  }
                  else {
                    plVar11 = (longlong *)*plVar10;
                    plVar15 = plVar10;
                  }
                  plVar10 = plVar11;
                } while (*(char *)((longlong)plVar11 + 0x19) == '\0');
                if ((plVar15 == plVar9) || (uVar18 < *(uint *)(plVar15 + 4))) {
LAB_180007f09:
                  local_50 = local_58;
                  local_58[0] = uVar18;
                  plVar12 = (longlong *)
                            FUN_18000c5c0((undefined8 *)(param_1 + 0x4d8),plVar12,&local_50);
                  FUN_18000c5f0((longlong *)(param_1 + 0x4d8),&local_48,plVar15,
                                (uint *)(plVar12 + 4),plVar12);
                  plVar15 = local_48;
                }
                plVar15[5] = (longlong)puVar19;
              }
LAB_180007f51:
              if (puVar19 != (undefined8 *)0x0) goto LAB_180008045;
            }
            plVar12 = (longlong *)plVar16[2];
            if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar12 + 0x19);
              plVar16 = plVar12;
              plVar12 = (longlong *)*plVar12;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar12 + 0x19);
                plVar16 = plVar12;
                plVar12 = (longlong *)*plVar12;
              }
            }
            else {
              cVar1 = *(char *)(plVar16[1] + 0x19);
              plVar9 = (longlong *)plVar16[1];
              plVar12 = plVar16;
              while ((plVar16 = plVar9, cVar1 == '\0' && (plVar12 == (longlong *)plVar16[2]))) {
                cVar1 = *(char *)(plVar16[1] + 0x19);
                plVar9 = (longlong *)plVar16[1];
                plVar12 = plVar16;
              }
            }
            lVar6 = local_40;
            uVar17 = local_res10[0];
          } while (plVar16 != (longlong *)puVar5[5]);
        }
        if (puVar19 != (undefined8 *)0x0) break;
      }
      puVar13 = (undefined8 *)puVar14[2];
      local_res10[0] = uVar17 + 1;
      puVar3 = (undefined8 *)(ulonglong)local_res10[0];
      if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar13 + 0x19);
        puVar14 = puVar13;
        puVar13 = (undefined8 *)*puVar13;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar13 + 0x19);
          puVar14 = puVar13;
          puVar13 = (undefined8 *)*puVar13;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar5 = (undefined8 *)puVar14[1];
        puVar13 = puVar14;
        while ((puVar14 = puVar5, cVar1 == '\0' && (puVar13 == (undefined8 *)puVar14[2]))) {
          cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar5 = (undefined8 *)puVar14[1];
          puVar13 = puVar14;
        }
      }
    } while ((int)local_res10[0] < lVar6);
  }
LAB_180008045:
  iVar2 = *param_5;
  if (iVar2 == -1) {
    return param_2;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x4d8);
  puVar13 = puVar19;
  puVar14 = (undefined8 *)puVar19[1];
  if (*(char *)((longlong)puVar19[1] + 0x19) == '\0') {
    do {
      puVar3 = puVar14;
      if (*(uint *)(puVar3 + 4) < uVar18) {
        puVar14 = (undefined8 *)puVar3[2];
        puVar3 = puVar13;
      }
      else {
        puVar14 = (undefined8 *)*puVar3;
      }
      puVar13 = puVar3;
    } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
    if ((puVar3 == puVar19) || (uVar18 < *(uint *)(puVar3 + 4))) goto LAB_180008089;
  }
  else {
LAB_180008089:
    puVar3 = puVar19;
  }
  if (puVar3 == puVar19) {
    return param_2;
  }
  plVar16 = (longlong *)puVar3[5];
joined_r0x000180007cc6:
  if (plVar16 != (longlong *)0x0) {
    if ((ulonglong)(longlong)(iVar2 + -1) < (ulonglong)(plVar16[1] - *plVar16 >> 7)) {
      param_2 = (longlong)(iVar2 + -1) * 0x80 + *plVar16;
    }
  }
  return param_2;
}




void FUN_1800080f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
                  ,char param_6,char param_7)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  size_t sVar13;
  char cVar14;
  longlong local_res18;
  undefined1 auStackY_c8 [32];
  longlong local_98;
  char *local_90;
  _FILETIME local_88;
  _FILETIME local_80;
  undefined8 local_78;
  SYSTEMTIME local_70;
  tm local_60;
  ulonglong local_38;
  
  local_38 = DAT_18001c010 ^ (ulonglong)auStackY_c8;
  cVar14 = '\0';
  local_90 = param_5;
  local_res18 = param_3;
  local_98 = param_4;
  if (param_2 == 0) goto LAB_180008278;
  local_78 = FUN_180003590(param_2);
  if (param_3 == 2) {
    puVar6 = *(undefined8 **)(param_1 + 0x4f8);
    cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
    puVar9 = puVar6;
    puVar8 = (undefined8 *)puVar6[1];
    while (cVar1 == cVar14) {
      if ((longlong)puVar8[4] < 2) {
        puVar2 = (undefined8 *)puVar8[2];
        puVar8 = puVar9;
      }
      else {
        puVar2 = (undefined8 *)*puVar8;
      }
      puVar9 = puVar8;
      puVar8 = puVar2;
      cVar1 = *(char *)((longlong)puVar2 + 0x19);
    }
    if ((puVar9 == puVar6) || (2 < (longlong)puVar9[4])) {
      puVar9 = puVar6;
    }
    if (puVar9 != puVar6) goto LAB_180008278;
    local_70._0_8_ = operator_new(0x290);
    plVar3 = FUN_18000f820((undefined8 *)local_70._0_8_);
    if (plVar3 == (longlong *)0x0) goto LAB_180008278;
    (**(code **)(*plVar3 + 0x40))(plVar3,9);
    (**(code **)(*plVar3 + 0x38))
              (plVar3,*(longlong *)(param_1 + 0x30) / (longlong)*(int *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x38));
    plVar5 = *(longlong **)(param_1 + 0x4f8);
    cVar14 = *(char *)(plVar5[1] + 0x19);
    plVar12 = plVar5;
    plVar11 = (longlong *)plVar5[1];
    while (cVar14 == '\0') {
      if (plVar11[4] < local_res18) {
        plVar4 = (longlong *)plVar11[2];
        plVar11 = plVar12;
      }
      else {
        plVar4 = (longlong *)*plVar11;
      }
      plVar12 = plVar11;
      plVar11 = plVar4;
      cVar14 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((plVar12 == plVar5) || (local_res18 < plVar12[4])) {
      local_70._0_8_ = &local_res18;
      plVar5 = (longlong *)
               FUN_18000c070((undefined8 *)(param_1 + 0x4f8),plVar5,(undefined8 *)&local_70);
      FUN_18000c0a0((longlong *)(param_1 + 0x4f8),(undefined8 *)&local_70,plVar12,plVar5 + 4,plVar5)
      ;
      plVar12 = (longlong *)local_70._0_8_;
    }
    plVar12[5] = local_98;
    param_4 = local_98;
  }
  else {
    if (((param_6 == cVar14) && (param_7 == cVar14)) && (*(char *)(param_1 + 0x510) == cVar14))
    goto LAB_180008278;
    plVar3 = (longlong *)FUN_18000ef40();
  }
  if (plVar3 != (longlong *)0x0) {
    plVar3[9] = param_4;
    plVar3[10] = local_res18;
    puVar6 = (undefined8 *)operator_new(0x78);
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = CEXT4FileProperties::vftable;
    *(undefined8 *)((longlong)puVar6 + 0x21) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x29) = 0xf;
    *(undefined1 *)((longlong)puVar6 + 0x11) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x39) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x53) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5d) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x43) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x55) = 0;
    puVar6[0xd] = 0;
    local_70._0_8_ = puVar6;
    local_98._0_4_ = *(undefined4 *)(param_2 + 0xc);
    _gmtime32_s(&local_60,(__time32_t *)&local_98);
    local_70.wMonth = (short)local_60.tm_mon + 1;
    local_70.wYear = (short)local_60.tm_year + 0x76c;
    local_70.wDayOfWeek = 0;
    local_70.wDay = (WORD)local_60.tm_mday;
    local_70.wMinute = (WORD)local_60.tm_min;
    local_70.wHour = (WORD)local_60.tm_hour;
    local_70.wSecond = (undefined2)local_60.tm_sec;
    local_70.wMilliseconds = 0;
    SystemTimeToFileTime(&local_70,&local_80);
    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(param_2 + 0x10));
    _gmtime32_s(&local_60,(__time32_t *)&local_98);
    local_70.wMonth = (short)local_60.tm_mon + 1;
    local_70.wYear = (short)local_60.tm_year + 0x76c;
    local_70.wDayOfWeek = 0;
    local_70.wDay = (WORD)local_60.tm_mday;
    local_70.wMinute = (WORD)local_60.tm_min;
    local_70.wHour = (WORD)local_60.tm_hour;
    local_70.wSecond = (undefined2)local_60.tm_sec;
    local_70.wMilliseconds = 0;
    SystemTimeToFileTime(&local_70,&local_88);
    pcVar10 = "Unknown";
    if (local_90 != (char *)0x0) {
      pcVar10 = local_90;
    }
    sVar13 = 0xffffffffffffffff;
    do {
      sVar13 = sVar13 + 1;
    } while (pcVar10[sVar13] != '\0');
    plVar5 = (longlong *)((longlong)puVar6 + 0x11);
    FUN_180002a10(plVar5,pcVar10,sVar13);
    *(_FILETIME *)((longlong)puVar6 + 0x43) = local_88;
    *(_FILETIME *)((longlong)puVar6 + 0x3b) = local_80;
    *(undefined8 *)((longlong)puVar6 + 0x31) = local_78;
    if (param_7 != '\0') {
      *(undefined1 *)((longlong)puVar6 + 0x53) = 1;
    }
    if (param_6 == '\0') {
      uVar7 = FUN_180007510(plVar5,param_2);
      if ((char)uVar7 != '\0') {
        *(ushort *)((longlong)puVar6 + 0x39) = *(ushort *)((longlong)puVar6 + 0x39) | 0x200;
      }
      FUN_180008d50(param_1,(longlong)puVar6,param_2);
      *(undefined4 *)(puVar6 + 0xe) = (undefined4)local_res18;
      plVar3[6] = (longlong)puVar6;
    }
    else {
      *(ushort *)((longlong)puVar6 + 0x39) = *(ushort *)((longlong)puVar6 + 0x39) | 0x10;
      *(undefined4 *)(puVar6 + 0xe) = (undefined4)local_res18;
      plVar3[6] = (longlong)puVar6;
    }
  }
LAB_180008278:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_1800084a0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined8 local_res8;
  longlong local_res10;
  
  puVar2 = *(undefined8 **)(param_1 + 0xdd8);
  puVar3 = (undefined8 *)*puVar2;
  while (puVar3 != puVar2) {
    lVar8 = puVar3[5];
    local_res8 = 0;
    if (lVar8 != 0) {
      local_res10 = lVar8;
      iVar10 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                         (*(longlong **)(param_1 + 0x10),lVar8,7,&local_res8);
      uVar4 = *(undefined8 *)(lVar8 + 0x48);
      uVar5 = *(undefined8 *)(lVar8 + 0x50);
      ppuVar11 = FUN_18000f790(lVar8);
      FUN_1800113a0("################################## folderName:%s ,id=%I64d,parent:%I64d,inserted:%d############################\n"
                    ,ppuVar11,uVar5,uVar4);
      if (iVar10 == 0) {
        plVar6 = *(longlong **)(param_1 + 0xdb0);
        if (*(longlong **)(param_1 + 0xdb8) == plVar6) {
          FUN_180001cf0((longlong *)(param_1 + 0xda8),plVar6,&local_res10);
        }
        else {
          *plVar6 = lVar8;
          *(longlong *)(param_1 + 0xdb0) = *(longlong *)(param_1 + 0xdb0) + 8;
        }
      }
    }
    puVar7 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar7 + 0x19);
      puVar3 = puVar7;
      puVar7 = (undefined8 *)*puVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar7 + 0x19);
        puVar3 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar9 = (undefined8 *)puVar3[1];
      puVar7 = puVar3;
      while ((puVar3 = puVar9, cVar1 == '\0' && (puVar7 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar9 = (undefined8 *)puVar3[1];
        puVar7 = puVar3;
      }
    }
  }
  return;
}




void FUN_1800085f0(longlong param_1,short *param_2,longlong *******param_3,longlong param_4,
                  char *param_5,char param_6,int *param_7,char param_8)

{
  longlong *********ppppppppplVar1;
  undefined8 *puVar2;
  longlong ***********ppppppppppplVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  short *psVar8;
  longlong **********pppppppppplVar9;
  longlong ***********ppppppppppplVar10;
  longlong ***********ppppppppppplVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong ***********ppppppppppplVar16;
  undefined **ppuVar17;
  bool bVar18;
  longlong ***********local_res10;
  longlong ***********local_res18 [2];
  longlong **********local_48;
  longlong ***********local_40;
  longlong **********local_38;
  undefined8 local_30;
  
  if (param_2 == (short *)0x0) {
    return;
  }
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  local_res18[0] = (longlong ***********)param_3;
  psVar8 = (short *)FUN_180007bd0(param_1,(longlong)param_2,(longlong)param_3,param_4,param_7);
  ppppppppppplVar3 = local_res18[0];
  if ((psVar8[0x14] != -0xcf6) && (local_res18[0] != (longlong ***********)0x2)) {
    return;
  }
  lVar15 = 0;
  if (psVar8 != (short *)0x0) {
    lVar15 = CONCAT44(*(undefined4 *)(psVar8 + 0x36),*(undefined4 *)(psVar8 + 2));
  }
  if (param_8 == '\0') {
    bVar18 = *(int *)(psVar8 + 10) != 0;
    if ((*(int *)(psVar8 + 10) == 0) && (lVar15 == 0)) {
      bVar18 = psVar8[0x15] == 0;
    }
  }
  else {
    bVar18 = true;
  }
  if (psVar8 != param_2) {
    bVar18 = true;
  }
  if (lVar15 == 0) {
    psVar8 = FUN_180008b80(param_1,psVar8);
  }
  FUN_1800113a0("--Got:fileName:%s,id=%I64d,parentId:%I64d,filesize:%I64d,atime:%I64d,uid:%I64d,gid:%I64d\n"
                ,param_5,ppppppppppplVar3,param_4);
  cVar5 = FUN_180007720(param_1,(longlong)psVar8,(longlong)local_res18[0],param_4,param_5,param_6,
                        bVar18);
  if (cVar5 != '\0') {
    return;
  }
  ppuVar17 = (undefined **)local_res18[0];
  pppppppppplVar9 =
       (longlong **********)
       FUN_1800080f0(param_1,(longlong)psVar8,(longlong)local_res18[0],param_4,param_5,param_6,
                     bVar18);
  local_48 = pppppppppplVar9;
  if (local_res18[0] == (longlong ***********)0x2) {
    ppuVar17 = (undefined **)0x0;
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                      (*(longlong **)(param_1 + 0x10),pppppppppplVar9,0,0);
  }
  else {
    local_40 = (longlong ***********)0x0;
    iVar7 = (*(code *)(*pppppppppplVar9)[1])(pppppppppplVar9);
    if ((iVar7 != 0) || ((*(byte *)((longlong)pppppppppplVar9 + 0x72) & 4) != 0)) {
LAB_180008859:
      plVar14 = (longlong *)(param_1 + 0xdd8);
      ppppppppppplVar3 = (longlong ***********)*plVar14;
      ppppppppppplVar10 = (longlong ***********)ppppppppppplVar3[1];
      ppppppppppplVar16 = ppppppppppplVar3;
      if (*(char *)((longlong)ppppppppppplVar10 + 0x19) == '\0') {
        do {
          if ((longlong)ppppppppppplVar10[4] < (longlong)local_res18[0]) {
            ppppppppppplVar11 = (longlong ***********)ppppppppppplVar10[2];
          }
          else {
            ppppppppppplVar11 = (longlong ***********)*ppppppppppplVar10;
            ppppppppppplVar16 = ppppppppppplVar10;
          }
          ppppppppppplVar10 = ppppppppppplVar11;
        } while (*(char *)((longlong)ppppppppppplVar11 + 0x19) == '\0');
        if ((ppppppppppplVar16 == ppppppppppplVar3) ||
           (ppppppppppplVar10 = ppppppppppplVar16,
           (longlong)local_res18[0] < (longlong)ppppppppppplVar16[4])) goto LAB_18000889b;
      }
      else {
LAB_18000889b:
        local_res10 = (longlong ***********)local_res18;
        plVar12 = (longlong *)FUN_18000c070(plVar14,ppppppppppplVar3,&local_res10);
        FUN_18000c0a0(plVar14,&local_res10,(longlong *)ppppppppppplVar16,plVar12 + 4,plVar12);
        ppppppppppplVar10 = local_res10;
        ppuVar17 = (undefined **)ppppppppppplVar16;
      }
      ppppppppppplVar10[5] = pppppppppplVar9;
      if (0xf < *(ulonglong *)(param_1 + 0xde0)) {
        FUN_1800084a0(param_1);
        lVar15 = *plVar14;
        lVar13 = lVar15;
        plVar12 = *(longlong **)(lVar15 + 8);
        if (*(char *)((longlong)*(longlong **)(lVar15 + 8) + 0x19) == '\0') {
          do {
            FUN_180002f60(plVar14,(longlong *)plVar12[2]);
            plVar4 = (longlong *)*plVar12;
            FUN_180013b3c(plVar12);
            plVar12 = plVar4;
          } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
          lVar13 = *plVar14;
        }
        *(longlong *)(lVar13 + 8) = lVar15;
        *(longlong *)*plVar14 = lVar15;
        *(longlong *)(*plVar14 + 0x10) = lVar15;
        *(undefined8 *)(param_1 + 0xde0) = 0;
      }
      goto LAB_180008951;
    }
    ppppppppplVar1 = pppppppppplVar9[6];
    if (ppppppppplVar1 != (longlong *********)0x0) {
      ppuVar17 = CEXT4FileProperties::vftable;
      if (*ppppppppplVar1 == (longlong ********)CEXT4FileProperties::vftable) {
        bVar6 = (byte)*(undefined2 *)((longlong)ppppppppplVar1 + 0x39);
      }
      else {
        bVar6 = (*(code *)(*ppppppppplVar1)[7])();
      }
      if ((bVar6 >> 4 & 1) != 0) goto LAB_180008859;
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                      (*(longlong **)(param_1 + 0x10),pppppppppplVar9,7,&local_40);
    ppuVar17 = (undefined **)local_res18[0];
    FUN_1800113a0("################################## fileName:%s ,id=%I64d,parent:%I64d,inserted:%d############################\n"
                  ,param_5,local_res18[0],param_4);
  }
  if (iVar7 == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xdb0);
    if (*(undefined8 **)(param_1 + 0xdb8) == puVar2) {
      ppuVar17 = (undefined **)&local_48;
      FUN_180001cf0((longlong *)(param_1 + 0xda8),puVar2,ppuVar17);
      pppppppppplVar9 = local_48;
    }
    else {
      *puVar2 = pppppppppplVar9;
      *(longlong *)(param_1 + 0xdb0) = *(longlong *)(param_1 + 0xdb0) + 8;
    }
  }
LAB_180008951:
  local_40 = local_res18[0];
  local_38 = pppppppppplVar9;
  plVar14 = (longlong *)FUN_1800030a0((undefined8 *)(param_1 + 0xd98),&local_40);
  FUN_18000bff0((longlong *)(param_1 + 0xd98),&local_40,ppuVar17,plVar14 + 4,plVar14);
  return;
}




void FUN_1800089b0(longlong param_1,longlong *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  size_t sVar6;
  longlong local_res8;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  
  *(undefined1 *)(param_1 + 0xdc0) = 1;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (param_2 != (longlong *)0x2)) &&
     (lVar2 = FUN_18000ef40(), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x48) = param_3;
    *(longlong **)(lVar2 + 0x50) = param_2;
    local_res8 = lVar2;
    plVar3 = (longlong *)operator_new(0x78);
    *(undefined4 *)(plVar3 + 1) = 0;
    sVar6 = 0xffffffffffffffff;
    *(undefined1 *)(plVar3 + 2) = 0;
    pcVar5 = "Unknown";
    if (param_4 != (char *)0x0) {
      pcVar5 = param_4;
    }
    *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
    *plVar3 = (longlong)CEXT4FileProperties::vftable;
    *(undefined8 *)((longlong)plVar3 + 0x21) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x29) = 0xf;
    *(undefined1 *)((longlong)plVar3 + 0x11) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x31) = 0;
    *(undefined2 *)((longlong)plVar3 + 0x39) = 0;
    *(undefined2 *)((longlong)plVar3 + 0x53) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x5d) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x3b) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x43) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x4b) = 0;
    *(undefined8 *)((longlong)plVar3 + 0x55) = 0;
    plVar3[0xd] = 0;
    do {
      sVar6 = sVar6 + 1;
    } while (pcVar5[sVar6] != '\0');
    local_40 = plVar3;
    FUN_180002a10((longlong *)((longlong)plVar3 + 0x11),pcVar5,sVar6);
    *(ushort *)((longlong)plVar3 + 0x39) = *(ushort *)((longlong)plVar3 + 0x39) | 0x10;
    *(undefined8 *)((longlong)plVar3 + 0x31) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x53) = 1;
    *(int *)(plVar3 + 0xe) = (int)param_2;
    *(longlong **)(lVar2 + 0x30) = plVar3;
    local_48 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                      (*(longlong **)(param_1 + 0x10),lVar2,7,&local_48);
    plVar3 = param_2;
    FUN_1800113a0("################################## fileName:%s ,id=%I64d,parent:%I64d,inserted:%d############################\n"
                  ,param_4,param_2,param_3);
    local_38 = lVar2;
    if (iVar1 == 0) {
      plVar4 = *(longlong **)(param_1 + 0xdb0);
      if (*(longlong **)(param_1 + 0xdb8) == plVar4) {
        plVar3 = &local_res8;
        FUN_180001cf0((longlong *)(param_1 + 0xda8),plVar4,plVar3);
        local_38 = local_res8;
      }
      else {
        *plVar4 = lVar2;
        *(longlong *)(param_1 + 0xdb0) = *(longlong *)(param_1 + 0xdb0) + 8;
      }
    }
    local_40 = param_2;
    plVar4 = (longlong *)FUN_1800030a0((undefined8 *)(param_1 + 0xd98),&local_40);
    FUN_18000bff0((longlong *)(param_1 + 0xd98),&local_40,plVar3,plVar4 + 4,plVar4);
  }
  return;
}




short * FUN_180008b80(longlong param_1,short *param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_2 == (short *)0x0) {
    return (short *)0x0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x4a8);
  puVar6 = (undefined8 *)puVar5[1];
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    puVar4 = puVar5;
    puVar8 = puVar6;
    do {
      puVar7 = puVar8;
      if (*(uint *)((longlong)puVar7 + 0x1c) < *(uint *)(param_2 + 4)) {
        puVar8 = (undefined8 *)puVar7[2];
        puVar7 = puVar4;
      }
      else {
        puVar8 = (undefined8 *)*puVar7;
      }
      puVar4 = puVar7;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar7 != puVar5) && (*(uint *)((longlong)puVar7 + 0x1c) <= *(uint *)(param_2 + 4)))
    goto LAB_180008bd9;
  }
  puVar7 = puVar5;
LAB_180008bd9:
  if (puVar7 != puVar5) {
    puVar8 = puVar5;
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar4 = puVar5;
      do {
        puVar5 = puVar6;
        if (*(uint *)((longlong)puVar5 + 0x1c) < *(uint *)(param_2 + 4)) {
          puVar6 = (undefined8 *)puVar5[2];
          puVar5 = puVar4;
        }
        else {
          if ((*(char *)((longlong)puVar8 + 0x19) != '\0') &&
             (*(uint *)(param_2 + 4) < *(uint *)((longlong)puVar5 + 0x1c))) {
            puVar8 = puVar5;
          }
          puVar6 = (undefined8 *)*puVar5;
        }
        puVar4 = puVar5;
      } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    }
    puVar6 = puVar8;
    if (*(char *)((longlong)puVar8 + 0x19) != '\0') {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 8);
    }
    if (*(char *)((longlong)*puVar6 + 0x19) == '\0') {
      puVar6 = (undefined8 *)*puVar6;
      do {
        if (*(uint *)(param_2 + 4) < *(uint *)((longlong)puVar6 + 0x1c)) {
          puVar4 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
        }
        else {
          puVar4 = (undefined8 *)puVar6[2];
        }
        puVar6 = puVar4;
      } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    }
    lVar9 = 0;
    if (puVar5 != puVar8) {
      do {
        puVar6 = (undefined8 *)puVar5[2];
        lVar9 = lVar9 + 1;
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          cVar2 = *(char *)((longlong)*puVar6 + 0x19);
          puVar5 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((longlong)*puVar6 + 0x19);
            puVar5 = puVar6;
            puVar6 = (undefined8 *)*puVar6;
          }
        }
        else {
          cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar4 = (undefined8 *)puVar5[1];
          puVar6 = puVar5;
          while ((puVar5 = puVar4, cVar2 == '\0' && (puVar6 == (undefined8 *)puVar5[2]))) {
            cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
            puVar4 = (undefined8 *)puVar5[1];
            puVar6 = puVar5;
          }
        }
      } while (puVar5 != puVar8);
      if (lVar9 != 0) {
        sVar3 = *param_2;
        piVar1 = (int *)(param_2 + 0x32);
        do {
          if ((sVar3 == *(short *)(puVar7 + 4)) && (*piVar1 == *(int *)((longlong)puVar7 + 0x84))) {
            param_2 = (short *)(puVar7 + 4);
          }
          puVar5 = (undefined8 *)puVar7[2];
          if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
            cVar2 = *(char *)((longlong)*puVar5 + 0x19);
            puVar7 = puVar5;
            puVar5 = (undefined8 *)*puVar5;
            while (cVar2 == '\0') {
              cVar2 = *(char *)((longlong)*puVar5 + 0x19);
              puVar7 = puVar5;
              puVar5 = (undefined8 *)*puVar5;
            }
          }
          else {
            cVar2 = *(char *)((longlong)puVar7[1] + 0x19);
            puVar6 = (undefined8 *)puVar7[1];
            puVar5 = puVar7;
            while ((puVar7 = puVar6, cVar2 == '\0' && (puVar5 == (undefined8 *)puVar7[2]))) {
              cVar2 = *(char *)((longlong)puVar7[1] + 0x19);
              puVar6 = (undefined8 *)puVar7[1];
              puVar5 = puVar7;
            }
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
  }
  return param_2;
}




void FUN_180008d50(longlong param_1,longlong param_2,longlong param_3)

{
  undefined **ppuVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *local_res10 [2];
  longlong local_res20;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  
  if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
    local_48 = 0;
    uVar14 = *(ulonglong *)(param_2 + 0x31);
    FUN_180005490(param_1,param_3,(longlong *)&local_58,uVar14);
    plVar8 = (longlong *)FUN_180013b78(0x58);
    local_res10[0] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      FUN_180010ee0(plVar8);
      *plVar8 = (longlong)CExt4DataRunList::vftable;
      *(undefined1 *)(plVar8 + 9) = 0;
      plVar8[10] = 0x200;
      plVar12 = plVar8;
    }
    if (plVar12 == (longlong *)0x0) {
      if (local_58 == (longlong *)0x0) {
        return;
      }
      plVar12 = local_58;
      if ((0xfff < (local_48 - (longlong)local_58 & 0xfffffffffffffff0U)) &&
         (plVar12 = (longlong *)local_58[-1],
         0x1f < (ulonglong)((longlong)local_58 + (-8 - local_58[-1])))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      ppuVar1 = (undefined **)**(longlong **)(param_1 + 8);
      if (ppuVar1 == CEXT4CatchBufferDeviceProxy::vftable) {
        iVar6 = 0;
        plVar8 = (longlong *)(*(longlong **)(param_1 + 8))[5];
        if (plVar8 != (longlong *)0x0) {
          iVar6 = (**(code **)(*plVar8 + 0x28))();
        }
      }
      else {
        iVar6 = (*(code *)ppuVar1[5])();
      }
      plVar12[10] = (longlong)iVar6;
      plVar8 = local_58;
      if (local_58 != plStack_50) {
        do {
          *(bool *)(plVar12 + 9) = 0 < (longlong)(plVar8[1] & 0x8000000000000000U);
          lVar9 = plVar12[10];
          lVar2 = *plVar8;
          lVar3 = plVar8[1];
          local_res10[0] = (longlong *)operator_new(0x10);
          *local_res10[0] = lVar2 / lVar9;
          local_res10[0][1] = ((lVar3 * 2 >> 1) + -1 + lVar9) / lVar9;
          FUN_18000ec60((longlong)(plVar12 + 1),local_res10);
          if (((*(byte *)(param_2 + 0x53) & 1) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
            lVar9 = (*plVar8 / (longlong)*(int *)(param_1 + 0x3c)) /
                    (longlong)*(int *)(param_1 + 0x40);
            uVar10 = ((longlong)*(int *)(param_1 + 0x58) + -1 + (plVar8[1] * 2 >> 1)) /
                     (longlong)*(int *)(param_1 + 0x58);
            uVar13 = uVar10;
            FUN_1800113a0("---------------------fillbitmap :sector:%I64d,cnt:%I64d############################\n"
                          ,lVar9,uVar10,uVar14);
            uVar14 = uVar10 & 0xffffffff;
            FUN_180012040(*(longlong **)(param_1 + 0x20),lVar9,uVar13,uVar14);
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != plStack_50);
      }
      pvVar4 = *(void **)(param_2 + 0x5d);
      if (pvVar4 != (void *)0x0) {
        if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
          FUN_180013b3c(*(void **)((longlong)pvVar4 + 8));
        }
        FUN_180013b3c(pvVar4);
        *(undefined8 *)(param_2 + 0x5d) = 0;
      }
      if (*(code **)(*plVar12 + 0x40) == FUN_18000eb60) {
        uVar7 = (undefined4)plVar12[5];
      }
      else {
        uVar7 = (**(code **)(*plVar12 + 0x40))(plVar12);
      }
      *(undefined4 *)(param_2 + 8) = uVar7;
      local_res10[0] = (longlong *)0x0;
      local_res20 = 0;
      puVar11 = (undefined2 *)operator_new(0x10);
      *puVar11 = 0;
      *(undefined8 *)(puVar11 + 4) = 0;
      iVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
      if ((iVar6 == 1) || (iVar6 = (**(code **)(*plVar12 + 0x28))(plVar12), iVar6 == 0xe)) {
        uVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        *puVar11 = uVar5;
      }
      plVar8 = FUN_180012260((longlong)plVar12,(longlong *)local_res10,&local_res20);
      *(longlong **)(puVar11 + 4) = plVar8;
      if (plVar8 == (longlong *)0x0) {
        FUN_180013b3c(puVar11);
        puVar11 = (undefined2 *)0x0;
      }
      *(undefined2 **)(param_2 + 0x5d) = puVar11;
      *(longlong **)(param_2 + 0x55) = local_res10[0];
      (**(code **)*plVar12)(plVar12,1);
      if (local_58 == (longlong *)0x0) {
        return;
      }
      plVar12 = local_58;
      if ((0xfff < (local_48 - (longlong)local_58 & 0xfffffffffffffff0U)) &&
         (plVar12 = (longlong *)local_58[-1],
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_180013b3c(plVar12);
  }
  return;
}




undefined1 FUN_1800090d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 6) == '\x01') {
      cVar1 = *(char *)(param_2 + 8);
    }
    else {
      if (*(char *)(param_2 + 6) != '\x02') {
        return 0;
      }
      if (*(char *)(param_2 + 8) != '.') {
        return 0;
      }
      cVar1 = *(char *)(param_2 + 9);
    }
    if ((cVar1 == '.') && (param_2 != -0xc)) {
      if (*(char *)(param_2 + 0x12) == '\x01') {
        if (*(char *)(param_2 + 0x14) != '.') {
          return uVar2;
        }
      }
      else {
        if (*(char *)(param_2 + 0x12) != '\x02') {
          return 0;
        }
        if (*(char *)(param_2 + 0x14) != '.') {
          return 0;
        }
        if (*(char *)(param_2 + 0x15) != '.') {
          return 0;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}




void FUN_180009130(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180002f60(param_1,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




longlong * FUN_1800091c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_res8;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3;
  if (*(char *)(plVar3[1] + 0x19) == '\0') {
    plVar1 = (longlong *)plVar3[1];
    do {
      if (plVar1[4] < *param_2) {
        plVar2 = (longlong *)plVar1[2];
      }
      else {
        plVar2 = (longlong *)*plVar1;
        plVar4 = plVar1;
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    if ((plVar4 != plVar3) && (plVar4[4] <= *param_2)) {
      return plVar4 + 5;
    }
  }
  local_res8 = param_2;
  plVar3 = (longlong *)FUN_18000c070(param_1,param_2,&local_res8);
  FUN_18000c0a0(param_1,&local_res8,plVar4,plVar3 + 4,plVar3);
  return local_res8 + 5;
}




longlong FUN_180009250(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)puVar3[1];
  puVar7 = puVar3;
  if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    puVar2 = puVar3;
    puVar5 = puVar4;
    do {
      puVar3 = puVar5;
      if ((longlong)puVar3[4] < *param_2) {
        puVar5 = (undefined8 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        if ((*(char *)((longlong)puVar7 + 0x19) != '\0') && (*param_2 < (longlong)puVar3[4])) {
          puVar7 = puVar3;
        }
        puVar5 = (undefined8 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    puVar4 = (undefined8 *)*puVar7;
  }
  if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    do {
      if (*param_2 < (longlong)puVar4[4]) {
        puVar5 = (undefined8 *)*puVar4;
        puVar7 = puVar4;
      }
      else {
        puVar5 = (undefined8 *)puVar4[2];
      }
      puVar4 = puVar5;
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  lVar6 = 0;
  while (puVar3 != puVar7) {
    puVar4 = (undefined8 *)puVar3[2];
    lVar6 = lVar6 + 1;
    if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar4 + 0x19);
      puVar3 = puVar4;
      puVar4 = (undefined8 *)*puVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x19);
        puVar3 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar5 = (undefined8 *)puVar3[1];
      puVar4 = puVar3;
      while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar5 = (undefined8 *)puVar3[1];
        puVar4 = puVar3;
      }
    }
  }
  return lVar6;
}




uint * FUN_180009330(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *local_res8;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3;
  if (*(char *)(plVar3[1] + 0x19) == '\0') {
    plVar1 = (longlong *)plVar3[1];
    do {
      if (*(uint *)(plVar1 + 4) < *param_2) {
        plVar2 = (longlong *)plVar1[2];
      }
      else {
        plVar2 = (longlong *)*plVar1;
        plVar4 = plVar1;
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    if ((plVar4 != plVar3) && (*(uint *)(plVar4 + 4) <= *param_2)) {
      return (uint *)(plVar4 + 5);
    }
  }
  local_res8 = param_2;
  plVar3 = (longlong *)FUN_18000c5c0(param_1,param_2,&local_res8);
  FUN_18000c5f0(param_1,&local_res8,plVar4,(uint *)(plVar3 + 4),plVar3);
  return local_res8 + 10;
}




longlong * FUN_1800093c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_res8;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3;
  if (*(char *)(plVar3[1] + 0x19) == '\0') {
    plVar1 = (longlong *)plVar3[1];
    do {
      if (plVar1[4] < *param_2) {
        plVar2 = (longlong *)plVar1[2];
      }
      else {
        plVar2 = (longlong *)*plVar1;
        plVar4 = plVar1;
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    if ((plVar4 != plVar3) && (plVar4[4] <= *param_2)) {
      return plVar4 + 5;
    }
  }
  local_res8 = param_2;
  plVar3 = (longlong *)FUN_18000cb10(param_1,param_2,&local_res8);
  FUN_18000cb50(param_1,&local_res8,plVar4,plVar3 + 4,plVar3);
  return local_res8 + 5;
}




void FUN_180009450(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_1800098c0(param_1,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_1800094e0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_180009540(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar2 < 0x10) {
    uVar3 = param_2[1];
    uVar6 = 0xf;
    *param_1 = *param_2;
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
    memcpy(_Dst,param_2,uVar2 + 1);
  }
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  return param_1;
}




void FUN_180009620(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180009620(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    lVar3 = param_2[5];
    lVar5 = lVar3;
    plVar6 = *(longlong **)(lVar3 + 8);
    if (*(char *)((longlong)*(longlong **)(lVar3 + 8) + 0x19) == '\0') {
      do {
        FUN_18000aad0(param_2 + 5,(longlong *)plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        FUN_180013b3c(plVar6);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      lVar5 = param_2[5];
    }
    *(longlong *)(lVar5 + 8) = lVar3;
    *(longlong *)param_2[5] = lVar3;
    *(longlong *)(param_2[5] + 0x10) = lVar3;
    param_2[6] = 0;
    FUN_180013b3c((void *)param_2[5]);
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180009710(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180009710(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    lVar3 = param_2[5];
    lVar5 = lVar3;
    plVar6 = *(longlong **)(lVar3 + 8);
    if (*(char *)((longlong)*(longlong **)(lVar3 + 8) + 0x19) == '\0') {
      do {
        FUN_18000ab30(param_2 + 5,(longlong *)plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        FUN_180013b3c(plVar6);
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      lVar5 = param_2[5];
    }
    *(longlong *)(lVar5 + 8) = lVar3;
    *(longlong *)param_2[5] = lVar3;
    *(longlong *)(param_2[5] + 0x10) = lVar3;
    param_2[6] = 0;
    FUN_180013b3c((void *)param_2[5]);
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180009800(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_180009800(param_1,(longlong *)param_2[2]);
    pvVar2 = (void *)param_2[5];
    plVar3 = (longlong *)*param_2;
    if (pvVar2 != (void *)0x0) {
      pvVar4 = pvVar2;
      if ((0xfff < (param_2[7] - (longlong)pvVar2 & 0xffffffffffffff80U)) &&
         (pvVar4 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar4);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    FUN_180013b3c(param_2);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    param_2 = plVar3;
  } while( true );
}




void FUN_1800098c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800098c0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




undefined8 *
FUN_180009920(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_18000a3f0(param_1,(longlong *)plVar6[1]);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
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
        plVar6 = FUN_180002bb0(param_1,plVar6);
        if (0xf < (ulonglong)plVar6[8]) {
          pvVar3 = (void *)plVar6[5];
          pvVar7 = pvVar3;
          if ((0xfff < plVar6[8] + 1U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar7);
        }
        plVar6[7] = 0;
        plVar6[8] = 0xf;
        *(undefined1 *)(plVar6 + 5) = 0;
        FUN_180013b3c(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_180009ad0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_18000a4e0(param_1,(longlong *)plVar6[1]);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
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
        plVar6 = FUN_180002bb0(param_1,plVar6);
        if (0xf < (ulonglong)plVar6[9]) {
          pvVar3 = (void *)plVar6[6];
          pvVar7 = pvVar3;
          if ((0xfff < plVar6[9] + 1U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar7);
        }
        plVar6[8] = 0;
        plVar6[9] = 0xf;
        *(undefined1 *)(plVar6 + 6) = 0;
        FUN_180013b3c(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_180009c80(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_18000a5d0(param_1,(longlong *)plVar6[1]);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
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
        plVar6 = FUN_180002bb0(param_1,plVar6);
        if (0xf < (ulonglong)plVar6[10]) {
          pvVar3 = (void *)plVar6[7];
          pvVar7 = pvVar3;
          if ((0xfff < plVar6[10] + 1U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar7);
        }
        plVar6[9] = 0;
        plVar6[10] = 0xf;
        *(undefined1 *)(plVar6 + 7) = 0;
        FUN_180013b3c(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_180009e30(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar7) && (param_4 == plVar7)) {
    FUN_180009620(param_1,(longlong *)plVar7[1],param_3,param_4);
    *(longlong **)(*param_1 + 8) = plVar7;
    *(longlong **)*param_1 = plVar7;
    *(longlong **)(*param_1 + 0x10) = plVar7;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar7 = param_3;
    if (param_3 != param_4) {
      do {
        plVar5 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          param_3 = plVar5;
          plVar3 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar3 = param_3;
          }
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = (longlong *)*plVar5;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          while (cVar1 == '\0') {
            plVar5 = (longlong *)*plVar5;
            cVar1 = *(char *)((longlong)plVar5 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar3 = (longlong *)plVar7[1];
          plVar5 = plVar7;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar5 = plVar4;
          }
        }
        plVar5 = FUN_180002bb0(param_1,plVar7);
        lVar2 = plVar5[5];
        plVar7 = *(longlong **)(lVar2 + 8);
        lVar6 = lVar2;
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          do {
            FUN_18000aad0(plVar5 + 5,(longlong *)plVar7[2]);
            plVar3 = (longlong *)*plVar7;
            FUN_180013b3c(plVar7);
            plVar7 = plVar3;
          } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
          lVar6 = plVar5[5];
        }
        *(longlong *)(lVar6 + 8) = lVar2;
        *(longlong *)plVar5[5] = lVar2;
        *(longlong *)(plVar5[5] + 0x10) = lVar2;
        plVar5[6] = 0;
        FUN_180013b3c((void *)plVar5[5]);
        FUN_180013b3c(plVar5);
        plVar7 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_18000a020(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar7) && (param_4 == plVar7)) {
    FUN_180009710(param_1,(longlong *)plVar7[1],param_3,param_4);
    *(longlong **)(*param_1 + 8) = plVar7;
    *(longlong **)*param_1 = plVar7;
    *(longlong **)(*param_1 + 0x10) = plVar7;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar7 = param_3;
    if (param_3 != param_4) {
      do {
        plVar5 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          param_3 = plVar5;
          plVar3 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar3 = param_3;
          }
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = (longlong *)*plVar5;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          while (cVar1 == '\0') {
            plVar5 = (longlong *)*plVar5;
            cVar1 = *(char *)((longlong)plVar5 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar3 = (longlong *)plVar7[1];
          plVar5 = plVar7;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar5 = plVar4;
          }
        }
        plVar5 = FUN_180002bb0(param_1,plVar7);
        lVar2 = plVar5[5];
        plVar7 = *(longlong **)(lVar2 + 8);
        lVar6 = lVar2;
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          do {
            FUN_18000ab30(plVar5 + 5,(longlong *)plVar7[2]);
            plVar3 = (longlong *)*plVar7;
            FUN_180013b3c(plVar7);
            plVar7 = plVar3;
          } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
          lVar6 = plVar5[5];
        }
        *(longlong *)(lVar6 + 8) = lVar2;
        *(longlong *)plVar5[5] = lVar2;
        *(longlong *)(plVar5[5] + 0x10) = lVar2;
        plVar5[6] = 0;
        FUN_180013b3c((void *)plVar5[5]);
        FUN_180013b3c(plVar5);
        plVar7 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_18000a210(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_180009800(param_1,(longlong *)plVar6[1]);
    *(longlong **)(*param_1 + 8) = plVar6;
    *(longlong **)*param_1 = plVar6;
    *(longlong **)(*param_1 + 0x10) = plVar6;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
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
        plVar6 = FUN_180002bb0(param_1,plVar6);
        pvVar3 = (void *)plVar6[5];
        if (pvVar3 != (void *)0x0) {
          pvVar7 = pvVar3;
          if ((0xfff < (plVar6[7] - (longlong)pvVar3 & 0xffffffffffffff80U)) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_180013b3c(pvVar7);
          plVar6[5] = 0;
          plVar6[6] = 0;
          plVar6[7] = 0;
        }
        FUN_180013b3c(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




void FUN_18000a3c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000a3f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_18000a3f0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[8]) {
      pvVar3 = (void *)param_2[5];
      pvVar4 = pvVar3;
      if ((0xfff < param_2[8] + 1U) &&
         (pvVar4 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar4);
    }
    param_2[7] = 0;
    param_2[8] = 0xf;
    *(undefined1 *)(param_2 + 5) = 0;
    FUN_180013b3c(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




void FUN_18000a4b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000a4e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_18000a4e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[9]) {
      pvVar3 = (void *)param_2[6];
      pvVar4 = pvVar3;
      if ((0xfff < param_2[9] + 1U) &&
         (pvVar4 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar4);
    }
    param_2[8] = 0;
    param_2[9] = 0xf;
    *(undefined1 *)(param_2 + 6) = 0;
    FUN_180013b3c(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




void FUN_18000a5a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000a5d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_18000a5d0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[10]) {
      pvVar3 = (void *)param_2[7];
      pvVar4 = pvVar3;
      if ((0xfff < param_2[10] + 1U) &&
         (pvVar4 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar4);
    }
    param_2[9] = 0;
    param_2[10] = 0xf;
    *(undefined1 *)(param_2 + 7) = 0;
    FUN_180013b3c(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




void FUN_18000a690(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000a6c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000a6f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xa0);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




longlong FUN_18000a720(longlong *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  size_t _Size;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  
  lVar5 = *param_1;
  lVar9 = param_1[1] - lVar5 >> 7;
  if (lVar9 == 0x1ffffffffffffff) {
    FUN_180001ea0();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  uVar10 = lVar9 + 1;
  uVar6 = param_1[2] - lVar5 >> 7;
  uVar11 = uVar10;
  if ((uVar6 <= 0x1ffffffffffffff - (uVar6 >> 1)) &&
     (uVar11 = (uVar6 >> 1) + uVar6, uVar11 < uVar10)) {
    uVar11 = uVar10;
  }
  uVar6 = uVar11 * 0x80;
  if (uVar11 < 0x200000000000000) {
    uVar11 = uVar6;
    if (0xfff < uVar6) goto LAB_18000a7b9;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar11 = 0xffffffffffffffff;
LAB_18000a7b9:
    uVar7 = uVar11 + 0x27;
    if (uVar7 <= uVar11) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar7);
    if (pvVar4 == (void *)0x0) goto LAB_18000a90e;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  uVar3 = param_3[1];
  uVar11 = (longlong)param_2 - lVar5 & 0xffffffffffffff80;
  *(undefined8 *)(uVar11 + (longlong)_Dst) = *param_3;
  ((undefined8 *)(uVar11 + (longlong)_Dst))[1] = uVar3;
  uVar3 = param_3[3];
  puVar1 = (undefined8 *)(uVar11 + 0x10 + (longlong)_Dst);
  *puVar1 = param_3[2];
  puVar1[1] = uVar3;
  uVar3 = param_3[5];
  puVar1 = (undefined8 *)(uVar11 + 0x20 + (longlong)_Dst);
  *puVar1 = param_3[4];
  puVar1[1] = uVar3;
  uVar3 = param_3[7];
  puVar1 = (undefined8 *)(uVar11 + 0x30 + (longlong)_Dst);
  *puVar1 = param_3[6];
  puVar1[1] = uVar3;
  uVar3 = param_3[9];
  puVar1 = (undefined8 *)(uVar11 + 0x40 + (longlong)_Dst);
  *puVar1 = param_3[8];
  puVar1[1] = uVar3;
  uVar3 = param_3[0xb];
  puVar1 = (undefined8 *)(uVar11 + 0x50 + (longlong)_Dst);
  *puVar1 = param_3[10];
  puVar1[1] = uVar3;
  uVar3 = param_3[0xd];
  puVar1 = (undefined8 *)(uVar11 + 0x60 + (longlong)_Dst);
  *puVar1 = param_3[0xc];
  puVar1[1] = uVar3;
  uVar3 = param_3[0xf];
  puVar1 = (undefined8 *)(uVar11 + 0x70 + (longlong)_Dst);
  *puVar1 = param_3[0xe];
  puVar1[1] = uVar3;
  pvVar4 = (void *)param_1[1];
  pvVar8 = (void *)*param_1;
  FUN_180001ec0(local_res8);
  if (param_2 == pvVar4) {
    _Size = (longlong)pvVar4 - (longlong)pvVar8;
    pvVar4 = _Dst;
    param_2 = pvVar8;
  }
  else {
    memmove(_Dst,pvVar8,(longlong)param_2 - (longlong)pvVar8);
    lVar5 = uVar11 + 0x80;
    FUN_180001ec0(local_res8);
    pvVar4 = (void *)(lVar5 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar4,param_2,_Size);
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar8 = pvVar4;
    if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xffffffffffffff80U)) &&
       (pvVar8 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) {
LAB_18000a90e:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar8);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(uVar10 * 0x80 + (longlong)_Dst);
  param_1[2] = (longlong)(uVar6 + (longlong)_Dst);
  return *param_1 + uVar11;
}




longlong FUN_18000a920(longlong *param_1,void *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  size_t _Size;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_180001ea0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar9 = lVar8 + 1;
  uVar5 = param_1[2] - lVar4 >> 4;
  uVar10 = uVar9;
  if ((uVar5 <= 0xfffffffffffffff - (uVar5 >> 1)) && (uVar10 = (uVar5 >> 1) + uVar5, uVar10 < uVar9)
     ) {
    uVar10 = uVar9;
  }
  uVar5 = uVar10 * 0x10;
  if (uVar10 < 0x1000000000000000) {
    uVar10 = uVar5;
    if (0xfff < uVar5) goto LAB_18000a9b9;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
LAB_18000a9b9:
    uVar6 = uVar10 + 0x27;
    if (uVar6 <= uVar10) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar6);
    if (pvVar3 == (void *)0x0) goto LAB_18000aab7;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  uVar2 = param_3[1];
  uVar10 = (longlong)param_2 - lVar4 & 0xfffffffffffffff0;
  *(undefined8 *)(uVar10 + (longlong)_Dst) = *param_3;
  ((undefined8 *)(uVar10 + (longlong)_Dst))[1] = uVar2;
  pvVar3 = (void *)param_1[1];
  pvVar7 = (void *)*param_1;
  FUN_180001ec0(local_res8);
  if (param_2 == pvVar3) {
    _Size = (longlong)pvVar3 - (longlong)pvVar7;
    pvVar3 = _Dst;
    param_2 = pvVar7;
  }
  else {
    memmove(_Dst,pvVar7,(longlong)param_2 - (longlong)pvVar7);
    lVar4 = uVar10 + 0x10;
    FUN_180001ec0(local_res8);
    pvVar3 = (void *)(lVar4 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar3,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (param_1[2] - (longlong)pvVar3 & 0xfffffffffffffff0U)) &&
       (pvVar7 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_18000aab7:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar7);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(uVar9 * 0x10 + (longlong)_Dst);
  param_1[2] = (longlong)(uVar5 + (longlong)_Dst);
  return *param_1 + uVar10;
}




void FUN_18000aad0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18000aad0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_18000ab30(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18000ab30(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180013b3c(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




undefined8 *
FUN_18000ab90(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar7 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar6 = (longlong *)plVar2[1];
    do {
      plVar7 = plVar6;
      bVar3 = *param_4 < plVar7[4];
      if (*param_4 < plVar7[4]) {
        plVar6 = (longlong *)*plVar7;
      }
      else {
        plVar6 = (longlong *)plVar7[2];
      }
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  plVar6 = plVar7;
  if (bVar3) {
    if (plVar7 == (longlong *)*plVar2) {
      puVar5 = FUN_18000b200(param_1,&local_res8,'\x01',plVar7,param_4);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar6 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar2 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 == (longlong *)*plVar4))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
        }
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar4;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  if (plVar6[4] < *param_4) {
    puVar5 = FUN_18000b200(param_1,&local_res8,bVar3,plVar7,param_4);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 * FUN_18000ace0(longlong *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < *(uint *)((longlong)plVar6 + 0x1c);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_18000b4c0(param_1,&local_res8,'\x01',plVar6,param_4);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar6;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        plVar2 = (longlong *)plVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar2 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar3;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if (*(uint *)((longlong)plVar5 + 0x1c) < *param_4) {
    puVar4 = FUN_18000b4c0(param_1,&local_res8,bVar7,plVar6,param_4);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_18000ae30(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180003230(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(ulonglong *)(lVar1 + 0x20) = (ulonglong)*param_2;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 2);
  return;
}




void FUN_18000ae60(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18000b780(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(ulonglong *)(lVar2 + 0x20) = (ulonglong)*param_2;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}




undefined8 *
FUN_18000aeb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar8 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar7 = (longlong *)plVar2[1];
    do {
      plVar8 = plVar7;
      bVar3 = *param_4 < plVar8[4];
      if (*param_4 < plVar8[4]) {
        plVar7 = (longlong *)*plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[2];
      }
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar6 = param_1;
  plVar7 = plVar8;
  if (bVar3) {
    if (plVar8 == (longlong *)*plVar2) {
      puVar5 = FUN_18000b8c0(param_1,&local_res8,'\x01',plVar8,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar7 = (longlong *)*plVar8;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar2 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar7 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar2 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 = plVar7, plVar7 == (longlong *)*plVar4)))
        {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
          plVar7 = plVar4;
        }
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          plVar7 = plVar4;
        }
      }
    }
    else {
      plVar7 = (longlong *)plVar8[2];
    }
  }
  if (plVar7[4] < *param_4) {
    puVar5 = FUN_18000b8c0(param_1,&local_res8,bVar3,plVar8,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000b7b0(plVar6,param_5);
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_18000b010(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18000b820(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(ulonglong *)(lVar2 + 0x20) = (ulonglong)*param_2;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0xf;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  return;
}




undefined8 *
FUN_18000b070(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar8 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar7 = (longlong *)plVar2[1];
    do {
      plVar8 = plVar7;
      bVar3 = *param_4 < plVar8[4];
      if (*param_4 < plVar8[4]) {
        plVar7 = (longlong *)*plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[2];
      }
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar6 = param_1;
  plVar7 = plVar8;
  if (bVar3) {
    if (plVar8 == (longlong *)*plVar2) {
      puVar5 = FUN_18000bb70(param_1,&local_res8,'\x01',plVar8,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar7 = (longlong *)*plVar8;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar2 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar7 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar2 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 = plVar7, plVar7 == (longlong *)*plVar4)))
        {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
          plVar7 = plVar4;
        }
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          plVar7 = plVar4;
        }
      }
    }
    else {
      plVar7 = (longlong *)plVar8[2];
    }
  }
  if (plVar7[4] < *param_4) {
    puVar5 = FUN_18000bb70(param_1,&local_res8,bVar3,plVar8,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000b850(plVar6,param_5);
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_18000b1d0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180003230(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 1);
  return;
}




undefined8 *
FUN_18000b200(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_18000d3a0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar9 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar6 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      return param_2;
    }
    plVar10 = (longlong *)plVar9[1];
    plVar8 = plVar9 + 1;
    plVar11 = plVar10 + 1;
    lVar6 = *(longlong *)plVar10[1];
    if (plVar10 == (longlong *)lVar6) {
      lVar6 = ((longlong *)plVar10[1])[2];
      if (*(char *)(lVar6 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar10[2];
        if (plVar9 == plVar2) {
          plVar10[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar10;
          }
          plVar2[1] = *plVar11;
          if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar10;
            *plVar11 = (longlong)plVar2;
            plVar9 = plVar10;
            plVar10 = plVar2;
            plVar8 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar11;
            if (plVar10 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
            else {
              plVar9[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
          }
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar11 = (longlong *)*plVar8;
        *plVar8 = plVar11[2];
        if (*(char *)(plVar11[2] + 0x19) == '\0') {
          *(longlong **)(plVar11[2] + 8) = plVar8;
        }
        plVar11[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar11;
          plVar11[2] = (longlong)plVar8;
        }
        else {
          plVar10 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar10[2]) {
            plVar10[2] = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
          else {
            *plVar10 = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
        }
        goto LAB_18000b485;
      }
LAB_18000b3b7:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_18000b3b7;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar10;
        *plVar11 = (longlong)plVar2;
        plVar7 = plVar2;
        plVar9 = plVar10;
        plVar8 = plVar11;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar8 + 8);
      plVar11 = (longlong *)plVar8[2];
      plVar8[2] = *plVar11;
      if (*(char *)(*plVar11 + 0x19) == '\0') {
        *(longlong **)(*plVar11 + 8) = plVar8;
      }
      plVar11[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar11;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar11;
        }
        else {
          puVar4[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_18000b485:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000b4c0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x7fffffffffffffd < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_18000d3d0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar9 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar6 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      return param_2;
    }
    plVar10 = (longlong *)plVar9[1];
    plVar8 = plVar9 + 1;
    plVar11 = plVar10 + 1;
    lVar6 = *(longlong *)plVar10[1];
    if (plVar10 == (longlong *)lVar6) {
      lVar6 = ((longlong *)plVar10[1])[2];
      if (*(char *)(lVar6 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar10[2];
        if (plVar9 == plVar2) {
          plVar10[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar10;
          }
          plVar2[1] = *plVar11;
          if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar10;
            *plVar11 = (longlong)plVar2;
            plVar9 = plVar10;
            plVar10 = plVar2;
            plVar8 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar11;
            if (plVar10 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
            else {
              plVar9[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
          }
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar11 = (longlong *)*plVar8;
        *plVar8 = plVar11[2];
        if (*(char *)(plVar11[2] + 0x19) == '\0') {
          *(longlong **)(plVar11[2] + 8) = plVar8;
        }
        plVar11[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar11;
          plVar11[2] = (longlong)plVar8;
        }
        else {
          plVar10 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar10[2]) {
            plVar10[2] = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
          else {
            *plVar10 = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
        }
        goto LAB_18000b745;
      }
LAB_18000b677:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_18000b677;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar10;
        *plVar11 = (longlong)plVar2;
        plVar7 = plVar2;
        plVar9 = plVar10;
        plVar8 = plVar11;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar8 + 8);
      plVar11 = (longlong *)plVar8[2];
      plVar8[2] = *plVar11;
      if (*(char *)(*plVar11 + 0x19) == '\0') {
        *(longlong **)(*plVar11 + 8) = plVar8;
      }
      plVar11[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar11;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar11;
        }
        else {
          puVar4[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_18000b745:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




void FUN_18000b780(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000b7b0(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x40)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x28);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x40) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0;
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000b820(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000b850(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x48)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x30);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x48) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x30) = 0;
  FUN_180013b3c(param_2);
  return;
}




undefined8 *
FUN_18000b8c0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x38e38e38e38e38c < (ulonglong)param_1[1]) {
    FUN_18000b7b0(0x38e38e38e38e38d,param_6);
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
      goto LAB_18000b949;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000b949;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000b949:
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
        goto LAB_18000bb35;
      }
LAB_18000ba67:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000ba67;
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
LAB_18000bb35:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000bb70(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000b850(0x333333333333332,param_6);
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
      goto LAB_18000bbf9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000bbf9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000bbf9:
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
        goto LAB_18000bde5;
      }
LAB_18000bd17:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000bd17;
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
LAB_18000bde5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




void FUN_18000be20(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18000d0b0(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x1c) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_2 + 9);
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf);
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(lVar2 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x13);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(param_2 + 0x11);
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(lVar2 + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1b);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(lVar2 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(lVar2 + 0x98) = uVar1;
  return;
}




undefined8 *
FUN_18000be90(longlong *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar2 = (undefined8 *)*param_1;
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *param_4 < *(uint *)((longlong)puVar2 + 0x1c);
      if (bVar3) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_18000d0f0(param_1,&local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_18000bf10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18000cdb0(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_2[1];
  *(undefined8 *)(lVar2 + 0x30) = param_2[2];
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  uVar1 = param_2[4];
  *(undefined8 *)(lVar2 + 0x38) = param_2[3];
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  uVar1 = param_2[6];
  *(undefined8 *)(lVar2 + 0x48) = param_2[5];
  *(undefined8 *)(lVar2 + 0x50) = uVar1;
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 3) = 0;
  return;
}




undefined8 *
FUN_18000bf70(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar2 = (undefined8 *)*param_1;
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *param_4 < (longlong)puVar2[4];
      if (*param_4 < (longlong)puVar2[4]) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_18000d3f0(param_1,&local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




undefined8 *
FUN_18000bff0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar2 = (undefined8 *)*param_1;
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    puVar1 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = *param_4 < (longlong)puVar2[4];
      if (*param_4 < (longlong)puVar2[4]) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_180003270(param_1,&local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




void FUN_18000c070(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180003230(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_18000c0a0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180003270(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < param_3[4]) {
        FUN_180003270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if ((longlong)((undefined8 *)plVar2[2])[4] < *param_4) {
        FUN_180003270(param_1,param_2,'\0',(undefined8 *)plVar2[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      lVar3 = *param_4;
      if (lVar3 < param_3[4]) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if (plVar7[4] < lVar3) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_180003270(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180003270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if (param_3[4] < lVar3) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar2) || (lVar3 < plVar8[4])) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_180003270(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180003270(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_1800030d0(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




longlong FUN_18000c300(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18000ce60(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar2 = FUN_18000e490();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return lVar1;
}




undefined8 *
FUN_18000c360(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_18000d6a0(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < param_3[4]) {
        FUN_18000d6a0(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if ((longlong)((undefined8 *)plVar2[2])[4] < *param_4) {
        FUN_18000d6a0(param_1,param_2,'\0',(undefined8 *)plVar2[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      lVar3 = *param_4;
      if (lVar3 < param_3[4]) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if (plVar7[4] < lVar3) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_18000d6a0(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000d6a0(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if (param_3[4] < lVar3) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar2) || (lVar3 < plVar8[4])) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_18000d6a0(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000d6a0(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_18000d950(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




void FUN_18000c5c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180003230(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_18000c5f0(longlong *param_1,undefined8 *param_2,longlong *param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_180003270(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < *(uint *)(param_3 + 4)) {
        FUN_180003270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(uint *)((undefined8 *)plVar3[2] + 4) < *param_4) {
        FUN_180003270(param_1,param_2,'\0',(undefined8 *)plVar3[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      uVar2 = *param_4;
      if (uVar2 < *(uint *)(param_3 + 4)) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if (*(uint *)(plVar7 + 4) < uVar2) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_180003270(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180003270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if (*(uint *)(param_3 + 4) < uVar2) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar3) || (uVar2 < *(uint *)(plVar8 + 4))) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_180003270(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_180003270(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_18000dab0(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




longlong FUN_18000c850(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18000ce60(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar2 = FUN_18000e4c0();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return lVar1;
}




undefined8 *
FUN_18000c8b0(longlong *param_1,undefined8 *param_2,longlong *param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_18000dc10(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < *(uint *)(param_3 + 4)) {
        FUN_18000dc10(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(uint *)((undefined8 *)plVar3[2] + 4) < *param_4) {
        FUN_18000dc10(param_1,param_2,'\0',(undefined8 *)plVar3[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      uVar2 = *param_4;
      if (uVar2 < *(uint *)(param_3 + 4)) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if (*(uint *)(plVar7 + 4) < uVar2) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_18000dc10(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000dc10(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if (*(uint *)(param_3 + 4) < uVar2) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar3) || (uVar2 < *(uint *)(plVar8 + 4))) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_18000dc10(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000dc10(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_18000dec0(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




void FUN_18000cb10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_18000d010(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}




undefined8 *
FUN_18000cb50(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 local_20 [3];
  
  if (param_1[1] == 0) {
    FUN_18000e020(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffc8,param_5);
  }
  else {
    plVar2 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar2) {
      if (*param_4 < param_3[4]) {
        FUN_18000e020(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
        return param_2;
      }
    }
    else if (param_3 == plVar2) {
      if ((longlong)((undefined8 *)plVar2[2])[4] < *param_4) {
        FUN_18000e020(param_1,param_2,'\0',(undefined8 *)plVar2[2],in_stack_ffffffffffffffc8,param_5
                     );
        return param_2;
      }
    }
    else {
      lVar3 = *param_4;
      if (lVar3 < param_3[4]) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar7 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar7[2] + 0x19);
            plVar8 = (longlong *)plVar7[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar8[2] + 0x19);
              plVar7 = plVar8;
              plVar8 = (longlong *)plVar8[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar8 = (longlong *)param_3[1];
            plVar7 = param_3;
            while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)*plVar4))) {
              cVar1 = *(char *)(plVar4[1] + 0x19);
              plVar8 = (longlong *)plVar4[1];
              plVar7 = plVar4;
            }
            if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
              plVar7 = plVar4;
            }
          }
        }
        else {
          plVar7 = (longlong *)param_3[2];
        }
        if (plVar7[4] < lVar3) {
          if (*(char *)(plVar7[2] + 0x19) != '\0') {
            FUN_18000e020(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000e020(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
      if (param_3[4] < lVar3) {
        plVar7 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar8 = plVar7;
          plVar4 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar8 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar4 = plVar8;
          }
        }
        if ((plVar8 == plVar2) || (lVar3 < plVar8[4])) {
          if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
            FUN_18000e020(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffc8,param_5);
            return param_2;
          }
          FUN_18000e020(param_1,param_2,'\x01',plVar8,in_stack_ffffffffffffffc8,param_5);
          return param_2;
        }
      }
    }
    puVar6 = FUN_18000e2d0(param_1,local_20,param_3,param_4,param_5);
    *param_2 = *puVar6;
  }
  return param_2;
}




void FUN_18000cdb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000cde0(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x50)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x38);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x50) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000ce50(undefined8 param_1,void *param_2)

{
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000ce60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000ce90(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)((longlong)param_2 + 0x28);
  plVar4 = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    do {
      FUN_18000aad0((longlong)param_2 + 0x28,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *(longlong *)((longlong)param_2 + 0x28);
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  **(longlong **)((longlong)param_2 + 0x28) = lVar1;
  *(longlong *)(*(longlong *)((longlong)param_2 + 0x28) + 0x10) = lVar1;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  FUN_180013b3c(*(void **)((longlong)param_2 + 0x28));
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000cf50(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)((longlong)param_2 + 0x28);
  plVar4 = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    do {
      FUN_18000ab30((longlong)param_2 + 0x28,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *(longlong *)((longlong)param_2 + 0x28);
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  **(longlong **)((longlong)param_2 + 0x28) = lVar1;
  *(longlong *)(*(longlong *)((longlong)param_2 + 0x28) + 0x10) = lVar1;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  FUN_180013b3c(*(void **)((longlong)param_2 + 0x28));
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000d010(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000d040(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)((longlong)param_2 + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)((longlong)param_2 + 0x38) - (longlong)pvVar1 & 0xffffffffffffff80U))
       && (pvVar2 = *(void **)((longlong)pvVar1 + -8),
          0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
    *(undefined8 *)((longlong)param_2 + 0x28) = 0;
    *(undefined8 *)((longlong)param_2 + 0x30) = 0;
    *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  }
  FUN_180013b3c(param_2);
  return;
}




void FUN_18000d0b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xa0);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000d0e0(undefined8 param_1,void *param_2)

{
  FUN_180013b3c(param_2);
  return;
}




undefined8 *
FUN_18000d0f0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x199999999999997 < (ulonglong)param_1[1]) {
    FUN_18000d0e0(0x199999999999998,param_6);
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
      goto LAB_18000d179;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000d179;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000d179:
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
        goto LAB_18000d365;
      }
LAB_18000d297:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000d297;
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
LAB_18000d365:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




void FUN_18000d3a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000e460(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}




void FUN_18000d3d0(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000e430(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = *param_2;
  return;
}




undefined8 *
FUN_18000d3f0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x2e8ba2e8ba2e8b8 < (ulonglong)param_1[1]) {
    FUN_18000cde0(0x2e8ba2e8ba2e8b9,param_6);
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
      goto LAB_18000d479;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000d479;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000d479:
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
        goto LAB_18000d665;
      }
LAB_18000d597:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000d597;
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
LAB_18000d665:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000d6a0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    FUN_18000ce90(0x492492492492491,param_6);
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
      goto LAB_18000d729;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000d729;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000d729:
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
        goto LAB_18000d915;
      }
LAB_18000d847:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000d847;
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
LAB_18000d915:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000d950(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar8 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar7 = (longlong *)plVar2[1];
    do {
      plVar8 = plVar7;
      bVar3 = *param_4 < plVar8[4];
      if (*param_4 < plVar8[4]) {
        plVar7 = (longlong *)*plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[2];
      }
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar6 = param_1;
  plVar7 = plVar8;
  if (bVar3) {
    if (plVar8 == (longlong *)*plVar2) {
      puVar5 = FUN_18000d6a0(param_1,&local_res8,'\x01',plVar8,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar7 = (longlong *)*plVar8;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar2 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar7 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar2 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 = plVar7, plVar7 == (longlong *)*plVar4)))
        {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
          plVar7 = plVar4;
        }
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          plVar7 = plVar4;
        }
      }
    }
    else {
      plVar7 = (longlong *)plVar8[2];
    }
  }
  if (plVar7[4] < *param_4) {
    puVar5 = FUN_18000d6a0(param_1,&local_res8,bVar3,plVar8,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000ce90(plVar6,param_5);
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_18000dab0(longlong *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < *(uint *)(plVar6 + 4);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_180003270(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar5 = (longlong *)*plVar6;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        plVar2 = (longlong *)plVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar2 = (longlong *)plVar6[1];
        plVar5 = plVar6;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
        }
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar3;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if (*(uint *)(plVar5 + 4) < *param_4) {
    puVar4 = FUN_180003270(param_1,&local_res8,bVar7,plVar6,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_180013b3c(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_18000dc10(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    FUN_18000cf50(0x492492492492491,param_6);
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
      goto LAB_18000dc99;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000dc99;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000dc99:
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
        goto LAB_18000de85;
      }
LAB_18000ddb7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000ddb7;
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
LAB_18000de85:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000dec0(longlong *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar8 = true;
  plVar7 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar6 = (longlong *)plVar2[1];
    do {
      plVar7 = plVar6;
      bVar8 = *param_4 < *(uint *)(plVar7 + 4);
      if (bVar8) {
        plVar6 = (longlong *)*plVar7;
      }
      else {
        plVar6 = (longlong *)plVar7[2];
      }
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  plVar5 = param_1;
  plVar6 = plVar7;
  if (bVar8) {
    if (plVar7 == (longlong *)*plVar2) {
      puVar4 = FUN_18000dc10(param_1,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar6 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar2 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar5 = plVar6, plVar6 == (longlong *)*plVar3)))
        {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar5 = plVar3;
          plVar6 = plVar3;
        }
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar3;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  if (*(uint *)(plVar6 + 4) < *param_4) {
    puVar4 = FUN_18000dc10(param_1,&local_res8,bVar8,plVar7,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000cf50(plVar5,param_5);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_18000e020(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
    FUN_18000d040(0x3fffffffffffffe,param_6);
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
      goto LAB_18000e0a9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000e0a9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000e0a9:
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
        goto LAB_18000e295;
      }
LAB_18000e1c7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000e1c7;
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
LAB_18000e295:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000e2d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  
  plVar2 = (longlong *)*param_1;
  bVar3 = true;
  plVar8 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar7 = (longlong *)plVar2[1];
    do {
      plVar8 = plVar7;
      bVar3 = *param_4 < plVar8[4];
      if (*param_4 < plVar8[4]) {
        plVar7 = (longlong *)*plVar8;
      }
      else {
        plVar7 = (longlong *)plVar8[2];
      }
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar6 = param_1;
  plVar7 = plVar8;
  if (bVar3) {
    if (plVar8 == (longlong *)*plVar2) {
      puVar5 = FUN_18000e020(param_1,&local_res8,'\x01',plVar8,in_stack_ffffffffffffffd8,param_5);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar7 = (longlong *)*plVar8;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar2 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar7 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar2 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar4 = plVar2, cVar1 == '\0' && (plVar6 = plVar7, plVar7 == (longlong *)*plVar4)))
        {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar6 = plVar4;
          plVar7 = plVar4;
        }
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          plVar7 = plVar4;
        }
      }
    }
    else {
      plVar7 = (longlong *)plVar8[2];
    }
  }
  if (plVar7[4] < *param_4) {
    puVar5 = FUN_18000e020(param_1,&local_res8,bVar3,plVar8,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000d040(plVar6,param_5);
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_18000e430(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000e460(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000e490(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000e4c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000e4f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    FUN_180013b3c(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180002f60(param_1 + 8,(longlong *)plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FUN_180013b3c(plVar4);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *(longlong *)(param_1 + 8);
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  **(longlong **)(param_1 + 8) = lVar1;
  *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_180013b3c(*(void **)(param_1 + 8));
  return;
}




undefined8 FUN_18000e5b0(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort *puVar10;
  undefined4 extraout_var;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 1) {
    return 0xffffffff;
  }
  lVar8 = FUN_180005020(*param_1,(longlong)param_2);
  if (lVar8 == 0) {
    return 0xffffffff;
  }
  lVar14 = *param_1;
  uVar6 = *(undefined4 *)(lVar8 + 0x6c);
  uVar1 = *(undefined4 *)(lVar8 + 4);
  puVar3 = *(uint **)(lVar14 + 0x48);
  if ((*(uint *)(lVar8 + 0x20) & 0x80000) == 0) {
    uVar9 = (ulonglong)*(uint *)(lVar8 + 0x28);
  }
  else {
    param_3 = 0;
    uVar9 = FUN_180005340(lVar14,(short *)(lVar8 + 0x28),0,'\0');
  }
  if (uVar9 != 0) {
    FUN_1800062d0(lVar14,uVar9,param_3);
    plVar4 = *(longlong **)(lVar14 + 8);
    if (((plVar4 != (longlong *)0x0) &&
        (iVar5 = (**(code **)(*plVar4 + 0x30))
                           (plVar4,puVar3,
                            (longlong)*(int *)(lVar14 + 0x58) * uVar9 + *(longlong *)(lVar14 + 0x30)
                            ,(longlong)*(int *)(lVar14 + 0x58),0), 0 < iVar5)) &&
       (uVar13 = *puVar3,
       (((uVar13 >> 8 & 0xff | (uVar13 & 0xff) << 8) << 8 | uVar13 >> 0x10 & 0xff) << 8 |
       uVar13 >> 0x18) == 0xc03b3998)) {
      uVar13 = puVar3[1];
      uVar13 = ((uVar13 >> 8 & 0xff | (uVar13 & 0xff) << 8) << 8 | uVar13 >> 0x10 & 0xff) << 8 |
               uVar13 >> 0x18;
      if ((uVar13 == 3) || (uVar13 == 4)) {
        uVar13 = puVar3[3];
        uVar2 = puVar3[5];
        lVar14 = CONCAT44(uVar6,uVar1) + 0xfffff;
        uVar13 = ((uVar13 >> 8 & 0xff | (uVar13 & 0xff) << 8) << 8 | uVar13 >> 0x10 & 0xff) << 8 |
                 uVar13 >> 0x18;
        uVar9 = (longlong)
                (int)(((uVar2 >> 8 & 0xff | (uVar2 & 0xff) << 8) << 8 | uVar2 >> 0x10 & 0xff) << 8)
                | (ulonglong)(uVar2 >> 0x18);
        lVar14 = (longlong)((ulonglong)((uint)(lVar14 >> 0x3f) & 0xfffff) + lVar14) >> 0x14;
        if ((*(uint *)(lVar8 + 0x20) & 0x80000) == 0) {
          uVar6 = FUN_180005190(*param_1,lVar8,uVar9);
          puVar10 = (ushort *)CONCAT44(extraout_var,uVar6);
        }
        else {
          puVar10 = (ushort *)FUN_180005340(*param_1,(short *)(lVar8 + 0x28),uVar9,'\0');
        }
        iVar5 = 0;
        if (0 < lVar14) {
          do {
            plVar4 = *(longlong **)(*param_1 + 8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x30))
                        (plVar4,param_1[3],
                         (longlong)(int)uVar13 * (longlong)puVar10 + *(longlong *)(*param_1 + 0x30),
                         0x100000,0);
            }
            iVar11 = 0;
            iVar15 = (int)(0x100000 / (longlong)(int)uVar13);
            if (0 < iVar15) {
              iVar12 = 0;
              do {
                if ((*(longlong **)(*param_1 + 0x28) == (longlong *)0x0) ||
                   (iVar7 = (**(code **)(**(longlong **)(*param_1 + 0x28) + 0x10))(), iVar7 == 0))
                break;
                FUN_180005e50(*param_1,(longlong)iVar12 + param_1[3],puVar10,param_1 + 1);
                puVar10 = (ushort *)((longlong)puVar10 + 1);
                iVar11 = iVar11 + 1;
                iVar12 = iVar12 + uVar13;
              } while (iVar11 < iVar15);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < lVar14);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}




void FUN_18000e890(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  if ((0 < param_2) && (lVar8 = FUN_180005020(*param_1,(longlong)param_2), lVar8 != 0)) {
    lVar15 = *param_1;
    puVar2 = *(uint **)(lVar15 + 0x48);
    if ((*(uint *)(lVar8 + 0x20) & 0x80000) == 0) {
      uVar9 = (ulonglong)*(uint *)(lVar8 + 0x28);
    }
    else {
      param_3 = 0;
      uVar9 = FUN_180005340(lVar15,(short *)(lVar8 + 0x28),0,'\0');
    }
    if (uVar9 != 0) {
      FUN_1800062d0(lVar15,uVar9,param_3);
      plVar3 = *(longlong **)(lVar15 + 8);
      if (((plVar3 != (longlong *)0x0) &&
          (iVar6 = (**(code **)(*plVar3 + 0x30))
                             (plVar3,puVar2,
                              (longlong)*(int *)(lVar15 + 0x58) * uVar9 +
                              *(longlong *)(lVar15 + 0x30),(longlong)*(int *)(lVar15 + 0x58),0),
          0 < iVar6)) &&
         (uVar14 = *puVar2,
         (((uVar14 >> 8 & 0xff | (uVar14 & 0xff) << 8) << 8 | uVar14 >> 0x10 & 0xff) << 8 |
         uVar14 >> 0x18) == 0xc03b3998)) {
        uVar14 = puVar2[1];
        uVar14 = ((uVar14 >> 8 & 0xff | (uVar14 & 0xff) << 8) << 8 | uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18;
        if ((uVar14 == 3) || (uVar14 == 4)) {
          uVar14 = puVar2[3];
          uVar13 = puVar2[5];
          uVar1 = puVar2[4];
          uVar13 = ((uVar13 >> 8 & 0xff | (uVar13 & 0xff) << 8) << 8 | uVar13 >> 0x10 & 0xff) << 8 |
                   uVar13 >> 0x18;
          lVar15 = (longlong)(int)uVar13;
          if ((*(uint *)(lVar8 + 0x20) & 0x80000) == 0) {
            uVar7 = FUN_180005190(*param_1,lVar8,lVar15);
            lVar8 = CONCAT44(extraout_var,uVar7);
          }
          else {
            lVar8 = FUN_180005340(*param_1,(short *)(lVar8 + 0x28),lVar15,'\0');
          }
          while ((((int)uVar13 <
                   (int)(((uVar1 >> 8 & 0xff | (uVar1 & 0xff) << 8) << 8 | uVar1 >> 0x10 & 0xff) <<
                         8 | uVar1 >> 0x18) && (*(longlong **)(*param_1 + 0x28) != (longlong *)0x0))
                 && (iVar6 = (**(code **)(**(longlong **)(*param_1 + 0x28) + 0x10))(), iVar6 != 0)))
          {
            puVar4 = (undefined8 *)param_1[1];
            puVar10 = (undefined8 *)puVar4[1];
            puVar12 = puVar4;
            if (*(char *)((longlong)puVar4[1] + 0x19) == '\0') {
              do {
                if ((longlong)puVar10[4] < lVar8) {
                  puVar11 = (undefined8 *)puVar10[2];
                }
                else {
                  puVar11 = (undefined8 *)*puVar10;
                  puVar12 = puVar10;
                }
                puVar10 = puVar11;
              } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
              if ((puVar12 != puVar4) && ((longlong)puVar12[4] <= lVar8)) {
                lVar5 = *param_1;
                FUN_1800062d0(lVar5,lVar8,lVar15);
                plVar3 = *(longlong **)(lVar5 + 8);
                if (plVar3 != (longlong *)0x0) {
                  lVar15 = *(int *)(lVar5 + 0x58) * lVar8 + *(longlong *)(lVar5 + 0x30);
                  iVar6 = (**(code **)(*plVar3 + 0x30))
                                    (plVar3,puVar2,lVar15,(longlong)*(int *)(lVar5 + 0x58),0);
                  if (0 < iVar6) {
                    lVar15 = (longlong)
                             (int)(((uVar14 >> 8 & 0xff | (uVar14 & 0xff) << 8) << 8 |
                                   uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18);
                    FUN_1800043f0(*param_1,puVar2,lVar15,lVar8);
                  }
                }
              }
            }
            uVar13 = uVar13 + 1;
            lVar8 = lVar8 + 1;
          }
        }
      }
    }
  }
  return;
}




undefined4 FUN_18000eb60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined8 FUN_18000eb70(void)

{
  return 9;
}




undefined1 FUN_18000eb80(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}




undefined8 * FUN_18000eb90(undefined8 *param_1,uint param_2)

{
  *param_1 = CExt4DataRunList::vftable;
  FUN_180010fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_18000ebd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(bool *)(param_1 + 0x48) = 0 < (longlong)(param_2[1] & 0x8000000000000000U);
  lVar2 = *param_2;
  lVar3 = param_2[1];
  local_res8 = (longlong *)operator_new(0x10);
  *local_res8 = lVar2 / lVar1;
  local_res8[1] = (lVar1 + -1 + (lVar3 * 2 >> 1)) / lVar1;
  FUN_18000ec60(param_1 + 8,&local_res8);
  return;
}




void FUN_18000ec60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if ((((int)*(longlong *)(param_1 + 0x20) + (int)uVar3 & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 2U >> 1)) {
    FUN_18000ed20(param_1,param_2);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 2 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = *(longlong *)(param_1 + 0x20) + uVar3;
  lVar1 = (*(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 1) * 8;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + lVar1) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(lVar1 + *(longlong *)(param_1 + 8)) = pvVar2;
    lVar4 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 *)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar3 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}




void FUN_18000ed20(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t sVar5;
  void *pvVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Dst;
  ulonglong uVar10;
  undefined8 local_res10;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 1;
  if (uVar4 != 0) {
    uVar3 = uVar4;
  }
  for (; (uVar8 = uVar3 - uVar4, local_res10 = param_2, uVar8 == 0 || (uVar3 < 8));
      uVar3 = uVar3 * 2) {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_18000ef20();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar10 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_18000edb3;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_18000edb3:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_18000ef13;
    _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar2;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  sVar7 = uVar10 * 8;
  pvVar2 = (void *)(lVar9 + sVar7);
  FUN_180001ec0((undefined1 *)&local_res10);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + lVar9;
  memmove((void *)(sVar7 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  pvVar6 = (void *)(sVar5 + (longlong)(sVar7 + (longlong)_Dst));
  FUN_180001ec0((undefined1 *)&local_res10);
  if (uVar8 < uVar10) {
    sVar5 = uVar8 * 8;
    memmove(pvVar6,pvVar2,sVar5);
    lVar9 = *(longlong *)(param_1 + 8);
    pvVar2 = (void *)(sVar5 + lVar9);
    FUN_180001ec0((undefined1 *)&local_res10);
    sVar7 = (lVar9 - (longlong)pvVar2) + sVar7;
    memmove(_Dst,pvVar2,sVar7);
    pvVar2 = (void *)(sVar7 + (longlong)_Dst);
  }
  else {
    memmove(pvVar6,pvVar2,sVar7);
    memset((void *)(sVar7 + (longlong)pvVar6),0,(uVar8 - uVar10) * 8);
    pvVar2 = _Dst;
    sVar5 = sVar7;
  }
  memset(pvVar2,0,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    pvVar6 = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
LAB_18000ef13:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar6);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  return;
}




void FUN_18000ef20(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_18000ef40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x93);
  *puVar1 = CFileNode::vftable;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0xffff;
  *(undefined2 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x75) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x7d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x91) = 0;
  *(byte *)((longlong)puVar1 + 0x72) = *(byte *)((longlong)puVar1 + 0x72) & 0xf8;
  *(byte *)((longlong)puVar1 + 0x91) = *(byte *)((longlong)puVar1 + 0x91) & 0xfe;
  *(byte *)((longlong)puVar1 + 0x91) = *(byte *)((longlong)puVar1 + 0x91) | 2;
  *(byte *)((longlong)puVar1 + 0x72) = *(byte *)((longlong)puVar1 + 0x72) & 7;
  *(byte *)((longlong)puVar1 + 0x74) = *(byte *)((longlong)puVar1 + 0x74) & 0xf8;
  puVar1[0xb] = 0;
  puVar1[9] = 0xffffffffffffffff;
  puVar1[10] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar1 + 0x89) = 0;
  puVar1[4] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x73) = 0x20;
  return;
}




undefined8 * FUN_18000eff0(undefined8 *param_1,uint param_2)

{
  FUN_18000f030(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_18000f030(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = CFileNode::vftable;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x138))(plVar3,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    FUN_180013b3c((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




ulonglong FUN_18000f0b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  plVar5 = param_1;
  if (param_1 != (longlong *)0x0) {
    do {
      iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      if (iVar2 != 0) {
        if (((ulonglong)*(ushort *)(param_1 + 0xd) < (ulonglong)(plVar5[0x43] - plVar5[0x42] >> 3))
           && (plVar1 = *(longlong **)(plVar5[0x42] + (ulonglong)*(ushort *)(param_1 + 0xd) * 8),
              plVar1 != (longlong *)0x0)) {
          ppuVar3 = (undefined **)*plVar1;
          plVar5 = plVar1;
          if (ppuVar3 == CFileSystemNode::vftable) {
            return (ulonglong)*(uint *)((longlong)plVar1 + 0x1d4);
          }
        }
        else {
          ppuVar3 = (undefined **)*plVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x00018000f142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)ppuVar3[3])(plVar5);
        return uVar4;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0xe;
}




void FUN_18000f150(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      return;
    }
    iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if (iVar3 != 0) break;
    plVar1 = (longlong *)plVar1[1];
  }
  if (((ulonglong)*(ushort *)(param_1 + 0x68) < (ulonglong)(plVar1[0x43] - plVar1[0x42] >> 3)) &&
     (plVar2 = *(longlong **)(plVar1[0x42] + (ulonglong)*(ushort *)(param_1 + 0x68) * 8),
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}




undefined8 FUN_18000f1f0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  byte local_28;
  byte local_27;
  byte local_26 [2];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,8);
  local_res18[0] = *(byte *)(param_1 + 0x91) & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_res18,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 2) == 0) {
    puVar1 = local_res10;
  }
  local_res8[0] = 1;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,local_24,4);
  puVar1 = local_res8;
  if (-1 < *(char *)(param_1 + 0x72)) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6e,2);
  local_res20[0] = *(char *)(param_1 + 0x71);
  if (local_res20[0] == '\x02') {
    local_res20[0] = '\x05';
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_res20,1);
  local_28 = *(byte *)(param_1 + 0x72) >> 7;
  (**(code **)(*param_2 + 0x78))(param_2,&local_28,1);
  local_27 = *(byte *)(param_1 + 0x73) >> 1 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,&local_27,1);
  local_26[0] = *(byte *)(param_1 + 0x73) >> 2 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_26,1);
  return 1;
}




undefined8 FUN_18000f3a0(longlong param_1,longlong *param_2)

{
  byte local_res8 [8];
  char local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  undefined1 local_28 [4];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,8);
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xfe;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | local_res8[0] & 1;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | -(local_res8[0] != 0) & 2U;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = local_res8[0] != 0 | *(byte *)(param_1 + 0x72) & 0xfe;
  (**(code **)(*param_2 + 0x70))(param_2,local_24,4);
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = (local_res8[0] != 0) << 7 | *(byte *)(param_1 + 0x72) & 0x7f;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6e,2);
  (**(code **)(*param_2 + 0x70))(param_2,local_28,1);
  local_res10[0] = '\0';
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,1);
  local_res18[0] = 0;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0x7f | local_res10[0] << 7;
  *(undefined1 *)(param_1 + 0x71) = local_28[0];
  (**(code **)(*param_2 + 0x70))(param_2,local_res18,1);
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xfd;
  local_res20[0] = '\0';
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | (local_res18[0] & 1) * '\x02';
  (**(code **)(*param_2 + 0x70))(param_2,local_res20,1);
  *(byte *)(param_1 + 0x73) =
       *(byte *)(param_1 + 0x73) ^ (local_res20[0] << 2 ^ *(byte *)(param_1 + 0x73)) & 4;
  return 1;
}




undefined8 * FUN_18000f580(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x93);
  *puVar3 = CFileNode::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffff;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x75) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x7d) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x91) = 0;
  *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 0xf8;
  *(byte *)((longlong)puVar3 + 0x91) = *(byte *)((longlong)puVar3 + 0x91) & 0xfe;
  *(byte *)((longlong)puVar3 + 0x91) = *(byte *)((longlong)puVar3 + 0x91) | 2;
  *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) & 7;
  *(byte *)((longlong)puVar3 + 0x74) = *(byte *)((longlong)puVar3 + 0x74) & 0xf8;
  puVar3[9] = 0xffffffffffffffff;
  puVar3[10] = 0xffffffffffffffff;
  puVar3[0xb] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x89) = 0;
  puVar3[4] = 0;
  *(undefined1 *)((longlong)puVar3 + 0x73) = 0x20;
  puVar3[0xb] = *(undefined8 *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  puVar3[10] = *(undefined8 *)(param_1 + 0x50);
  puVar3[9] = *(undefined8 *)(param_1 + 0x48);
  *(byte *)((longlong)puVar3 + 0x72) =
       *(byte *)((longlong)puVar3 + 0x72) ^
       (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 4;
  *(undefined8 *)((longlong)puVar3 + 0x75) = *(undefined8 *)(param_1 + 0x75);
  *(undefined4 *)((longlong)puVar3 + 0x7d) = *(undefined4 *)(param_1 + 0x7d);
  *(undefined8 *)((longlong)puVar3 + 0x89) = *(undefined8 *)(param_1 + 0x89);
  *(undefined1 *)((longlong)puVar3 + 0x91) = *(undefined1 *)(param_1 + 0x91);
  bVar2 = (*(byte *)((longlong)puVar3 + 0x72) ^ *(byte *)(param_1 + 0x72)) & 1 ^
          *(byte *)((longlong)puVar3 + 0x72);
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 2 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 4 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 8 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x40 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
  *(byte *)((longlong)puVar3 + 0x72) = bVar2;
  *(undefined2 *)(puVar3 + 0xd) = *(undefined2 *)(param_1 + 0x68);
  *(undefined2 *)((longlong)puVar3 + 0x6c) = *(undefined2 *)(param_1 + 0x6c);
  *(byte *)((longlong)puVar3 + 0x72) =
       (bVar2 ^ *(byte *)(param_1 + 0x72)) & 0x7f ^ *(byte *)(param_1 + 0x72);
  *(byte *)((longlong)puVar3 + 0x73) =
       *(byte *)((longlong)puVar3 + 0x73) ^
       (*(byte *)(param_1 + 0x73) ^ *(byte *)((longlong)puVar3 + 0x73)) & 4;
  bVar2 = (*(char *)(param_1 + 0x73) * '\x02' ^ *(byte *)((longlong)puVar3 + 0x73)) & 2 ^
          *(byte *)((longlong)puVar3 + 0x73);
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x10 ^ bVar2;
  *(byte *)((longlong)puVar3 + 0x73) = bVar2;
  *(byte *)((longlong)puVar3 + 0x73) =
       (bVar2 ^ *(byte *)(param_1 + 0x73)) & 0x1f ^ *(byte *)(param_1 + 0x73);
  *(byte *)((longlong)puVar3 + 0x74) =
       *(byte *)((longlong)puVar3 + 0x74) ^
       (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)(param_1 + 0x74)) & 1;
  *(byte *)((longlong)puVar3 + 0x74) =
       *(byte *)((longlong)puVar3 + 0x74) ^
       (*(byte *)((longlong)puVar3 + 0x74) ^ *(byte *)(param_1 + 0x74)) & 4;
  return puVar3;
}




undefined ** FUN_18000f790(longlong param_1)

{
  longlong *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x40);
  if (*(undefined ***)(param_1 + 0x40) == (undefined **)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 == (longlong *)0x0) {
      ppuVar3 = &PTR_180016af0;
    }
    else {
      if ((undefined **)*plVar1 != CEXT4FileProperties::vftable) {
        ppuVar3 = (undefined **)(*(code *)((undefined **)*plVar1)[2])();
        ppuVar2 = &PTR_180016af0;
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar2 = ppuVar3;
        }
        return ppuVar2;
      }
      ppuVar3 = (undefined **)((longlong)plVar1 + 0x11);
      if (0xf < *(ulonglong *)((longlong)plVar1 + 0x29)) {
        ppuVar2 = &PTR_180016af0;
        if ((undefined **)*ppuVar3 != (undefined **)0x0) {
          ppuVar2 = (undefined **)*ppuVar3;
        }
        return ppuVar2;
      }
    }
    ppuVar2 = &PTR_180016af0;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar2 = ppuVar3;
    }
  }
  return ppuVar2;
}




undefined8 * FUN_18000f820(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x91) = 0;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 0xf8;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xfe;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 2;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) & 7;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xf8;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  *param_1 = CFileSystemNode::vftable;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x73) = 0x20;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xe;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x38;
  *(undefined8 *)((longlong)param_1 + 500) = 0x23;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  _Mtx_init_in_situ(param_1 + 0x45);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0x2a00;
  memset(param_1 + 0x13,0,0x130);
  return param_1;
}




undefined8 * FUN_18000f970(undefined8 *param_1,uint param_2)

{
  FUN_18000f9b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_18000f9b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  *param_1 = CFileSystemNode::vftable;
  uVar7 = 0;
  if ((void *)param_1[0x3b] != (void *)0x0) {
    FUN_180013b3c((void *)param_1[0x3b]);
    param_1[0x3b] = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  memset(param_1 + 0x13,0,0x130);
  plVar8 = (longlong *)param_1[0x42];
  uVar6 = (ulonglong)((longlong)param_1[0x43] + (7 - (longlong)plVar8)) >> 3;
  if ((longlong *)param_1[0x43] < plVar8) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      plVar3 = (longlong *)*plVar8;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  param_1[0x43] = param_1[0x42];
  _Mtx_destroy_in_situ(param_1 + 0x45);
  pvVar4 = (void *)param_1[0x42];
  if (pvVar4 != (void *)0x0) {
    pvVar5 = pvVar4;
    if ((0xfff < (param_1[0x44] - (longlong)pvVar4 & 0xfffffffffffffff8U)) &&
       (pvVar5 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar5);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  plVar8 = (longlong *)param_1[6];
  *param_1 = CFileNode::vftable;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x138))(plVar8,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    FUN_180013b3c((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




void FUN_18000fb60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return;
}




undefined8 FUN_18000fb70(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c8);
  *param_3 = *(undefined4 *)(param_1 + 0x1d0);
  return 1;
}




void FUN_18000fb90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}




undefined4 FUN_18000fba0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




undefined8 FUN_18000fbb0(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0xc0),0x108);
  return 1;
}




undefined8 FUN_18000fbe0(longlong param_1,void *param_2)

{
  memmove((void *)(param_1 + 0xc0),param_2,0x108);
  return 1;
}




undefined8 FUN_18000fc00(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0x98),0x28);
  return 1;
}




void FUN_18000fc30(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_18001c010 ^ (ulonglong)auStack_a8;
  bVar2 = 0;
  bVar6 = *(byte *)(param_2 + 0xe) & 3;
  if (bVar6 != 2) {
    bVar2 = 2;
  }
  if (param_3 == 0) {
    local_38 = 1;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = bVar2;
    FUN_180010880(param_2,(int *)&local_60);
    memmove(&local_88,&local_60,0x28);
    iVar3 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar3 != 0) {
      iVar3 = *(int *)((longlong)param_2 + 0x9c) - local_84;
      lVar4 = param_2[0x15] - local_78;
      iVar5 = *(int *)((longlong)param_2 + 0xb4) - local_6c;
      iVar7 = *(int *)((longlong)param_2 + 0xbc) - local_64;
      if (bVar6 != 2) {
        iVar3 = iVar3 + local_88;
        iVar5 = iVar5 + local_70;
        lVar4 = lVar4 + local_80;
        iVar7 = iVar7 + local_68;
      }
      *(int *)((longlong)param_2 + 0xbc) = iVar7;
      *(int *)((longlong)param_2 + 0xb4) = iVar5;
      param_2[0x15] = lVar4;
      *(int *)((longlong)param_2 + 0x9c) = iVar3;
    }
    for (plVar1 = (longlong *)param_2[1]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1])
    {
      lVar4 = plVar1[2];
      iVar3 = 0;
      iVar5 = 0;
      iVar7 = 0;
      if (lVar4 == 0) {
LAB_18000fdd6:
        *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfc;
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          bVar2 = *(byte *)(lVar4 + 0x70) & 3;
          if (bVar2 == 2) {
            iVar3 = iVar3 + 1;
          }
          else if (bVar2 == 1) {
            iVar5 = iVar5 + 1;
          }
          lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != 0);
        if ((iVar3 == 0) && (iVar5 == 0)) goto LAB_18000fdd6;
        if (iVar3 < iVar7) {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfd | 1;
        }
        else {
          *(byte *)(plVar1 + 0xe) = *(byte *)(plVar1 + 0xe) & 0xfe | 2;
        }
      }
      iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar3 != 0) {
        iVar3 = *(int *)((longlong)plVar1 + 0x9c) - local_84;
        lVar4 = plVar1[0x15] - local_78;
        iVar5 = *(int *)((longlong)plVar1 + 0xb4) - local_6c;
        iVar7 = *(int *)((longlong)plVar1 + 0xbc) - local_64;
        if (bVar6 != 2) {
          iVar3 = iVar3 + local_88;
          iVar5 = iVar5 + local_70;
          lVar4 = lVar4 + local_80;
          iVar7 = iVar7 + local_68;
        }
        *(int *)((longlong)plVar1 + 0xbc) = iVar7;
        *(int *)((longlong)plVar1 + 0xb4) = iVar5;
        plVar1[0x15] = lVar4;
        *(int *)((longlong)plVar1 + 0x9c) = iVar3;
      }
    }
  }
  else {
    *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xfc | bVar2;
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




undefined8 FUN_18000fea0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018000feb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3);
    return uVar2;
  }
  return 0;
}




void FUN_18000fec0(longlong param_1)

{
  undefined1 auStack_68 [32];
  int local_48 [11];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18001c010 ^ (ulonglong)auStack_68;
  local_48[10] = 0;
  local_1c = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  if (param_1 != 0) {
    FUN_180010880(param_1,local_48);
  }
  memmove((void *)(param_1 + 0x98),local_48,0x28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_18000ff40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_18001c010 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0;
    local_50 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff;
    local_40 = 0;
    local_30 = *(ulonglong *)(param_1 + 0xb8) & 0xffffffff;
    uStack_38 = *(ulonglong *)(param_1 + 0xb0) & 0xffffffff;
    FUN_18000f1f0(param_1,param_2);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x78))(param_2,&local_50,0x28);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x289,1);
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      (**(code **)(*param_2 + 0x78))
                (param_2,*(longlong *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
    }
    local_58[0] = (undefined4)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3)
    ;
    (**(code **)(*param_2 + 0x78))(param_2,local_58,4);
    puVar1 = *(undefined8 **)(param_1 + 0x218);
    puVar2 = *(undefined8 **)(param_1 + 0x210);
    if (puVar2 != puVar1) {
      uVar3 = (ulonglong)((longlong)puVar1 + (7 - (longlong)puVar2)) >> 3;
      if (puVar1 < puVar2) {
        uVar3 = uVar4;
      }
      if (uVar3 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x20))((longlong *)*puVar2,param_2);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar4 != uVar3);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}




undefined8 FUN_180010180(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  uint local_res10 [2];
  longlong *local_res18 [2];
  
  if (param_2 != (longlong *)0x0) {
    FUN_18000f3a0(param_1,param_2);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x98,0x28);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x289,1);
    uVar4 = 0;
    if (*(void **)(param_1 + 0x1d8) != (void *)0x0) {
      FUN_180013b3c(*(void **)(param_1 + 0x1d8));
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    if (*(int *)(param_1 + 0x1e0) != 0) {
      pvVar2 = operator_new((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
      *(void **)(param_1 + 0x1d8) = pvVar2;
      (**(code **)(*param_2 + 0x70))(param_2,pvVar2,*(undefined4 *)(param_1 + 0x1e0));
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x1e0) + *(longlong *)(param_1 + 0x1d8)) = 0;
    }
    local_res10[0] = 0;
    (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
    if (local_res10[0] != 0) {
      do {
        local_res18[0] = (longlong *)operator_new(0x290);
        plVar3 = FUN_18000f820(local_res18[0]);
        local_res18[0] = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
        puVar1 = *(undefined8 **)(param_1 + 0x218);
        if (*(undefined8 **)(param_1 + 0x220) == puVar1) {
          FUN_180001cf0((longlong *)(param_1 + 0x210),puVar1,local_res18);
        }
        else {
          *puVar1 = plVar3;
          *(longlong *)(param_1 + 0x218) = *(longlong *)(param_1 + 0x218) + 8;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_res10[0]);
    }
    return 1;
  }
  return 0;
}




undefined8 *
FUN_1800103e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  
  puVar6 = (undefined8 *)operator_new(0x290);
  puVar6 = FUN_18000f820(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
    plVar7 = FUN_180010600(param_1);
    puVar6[6] = plVar7;
    lVar11 = 2;
    puVar6[10] = *(undefined8 *)(param_1 + 0x50);
    puVar6[9] = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    puVar6[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar6[0x14] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    puVar6[0x15] = *(undefined8 *)(param_1 + 0xa8);
    puVar6[0x16] = uVar5;
    puVar6[0x17] = *(undefined8 *)(param_1 + 0xb8);
    puVar8 = (undefined8 *)(param_1 + 0xc0);
    puVar10 = puVar6 + 0x18;
    do {
      puVar1 = puVar10 + 0x10;
      uVar5 = puVar8[1];
      puVar2 = puVar8 + 0x10;
      *puVar10 = *puVar8;
      puVar10[1] = uVar5;
      uVar5 = puVar8[3];
      puVar10[2] = puVar8[2];
      puVar10[3] = uVar5;
      uVar5 = puVar8[5];
      puVar10[4] = puVar8[4];
      puVar10[5] = uVar5;
      uVar5 = puVar8[7];
      puVar10[6] = puVar8[6];
      puVar10[7] = uVar5;
      uVar5 = puVar8[9];
      puVar10[8] = puVar8[8];
      puVar10[9] = uVar5;
      uVar5 = puVar8[0xb];
      puVar10[10] = puVar8[10];
      puVar10[0xb] = uVar5;
      uVar5 = puVar8[0xd];
      puVar10[0xc] = puVar8[0xc];
      puVar10[0xd] = uVar5;
      uVar5 = puVar8[0xf];
      puVar10[0xe] = puVar8[0xe];
      puVar10[0xf] = uVar5;
      lVar11 = lVar11 + -1;
      puVar8 = puVar2;
      puVar10 = puVar1;
    } while (lVar11 != 0);
    *puVar1 = *puVar2;
    puVar6[0x39] = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined4 *)(puVar6 + 0x3a) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)((longlong)puVar6 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
    iVar4 = *(int *)(param_1 + 0x1e0);
    *(int *)(puVar6 + 0x3c) = iVar4;
    if (iVar4 != 0) {
      pcVar9 = (char *)operator_new((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
      puVar6[0x3b] = pcVar9;
      pcVar12 = *(char **)(param_1 + 0x1d8);
      do {
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar9 = cVar3;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
    }
    if (puVar6 + 0x42 != (ulonglong *)(param_1 + 0x210)) {
      FUN_180010d10(puVar6 + 0x42,*(void **)(param_1 + 0x210),*(longlong *)(param_1 + 0x218),param_4
                   );
    }
    *(undefined4 *)(puVar6 + 0x3f) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)((longlong)puVar6 + 500) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)(puVar6 + 0x3e) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)((longlong)puVar6 + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined4 *)(puVar6 + 0x3d) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)((longlong)puVar6 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
    puVar6[0x40] = *(undefined8 *)(param_1 + 0x200);
    puVar6[0x41] = *(undefined8 *)(param_1 + 0x208);
    puVar6[0x50] = param_1;
    *(undefined1 *)(puVar6 + 0x51) = *(undefined1 *)(param_1 + 0x288);
    *(byte *)((longlong)puVar6 + 0x72) =
         (*(byte *)(param_1 + 0x72) ^ *(byte *)((longlong)puVar6 + 0x72)) & 0x7f ^
         *(byte *)(param_1 + 0x72);
    *(undefined1 *)((longlong)puVar6 + 0x289) = *(undefined1 *)(param_1 + 0x289);
  }
  return puVar6;
}




longlong * FUN_180010600(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0xf8))(),
     plVar1 != (longlong *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0x1d4)) {
    case 0:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT12");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 1:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT16");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 2:
      (**(code **)(*plVar1 + 8))(plVar1,"FAT32");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 3:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016f98);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 4:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016fa0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016fa8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 6:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016fc0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 7:
      (**(code **)(*plVar1 + 8))(plVar1,"EXFAT");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 8:
      (**(code **)(*plVar1 + 8))(plVar1,"HFSPLUS");
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 9:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016fb0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 10:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_180016fb8);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}




/* WARNING: Removing unreachable block (ram,0x000180010b60) */
/* WARNING: Removing unreachable block (ram,0x000180010b66) */

void FUN_180010880(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong *local_50;
  void *pvStack_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  
  local_50 = (longlong *)0x0;
  pvStack_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_50 = (longlong *)operator_new(0x10);
  *local_50 = 0;
  local_50[1] = 0;
  *local_50 = (longlong)&local_50;
  if ((((int)local_30 + (int)local_38 & 1U) == 0) && (local_40 <= local_30 + 2U >> 1)) {
    FUN_18000ed20((longlong)&local_50,local_38);
  }
  local_38 = local_38 & local_40 * 2 - 1;
  uVar9 = local_38 + local_30;
  lVar7 = (local_40 - 1 & uVar9 >> 1) * 8;
  if (*(longlong *)((longlong)pvStack_48 + lVar7) == 0) {
    pvVar6 = operator_new(0x10);
    *(void **)((longlong)pvStack_48 + lVar7) = pvVar6;
  }
  *(undefined8 *)(*(longlong *)((longlong)pvStack_48 + lVar7) + (ulonglong)((uint)uVar9 & 1) * 8) =
       param_1;
  local_30 = local_30 + 1;
  while (local_30 != 0) {
    lVar7 = 0;
    if (local_50 != (longlong *)0x0) {
      lVar7 = *local_50;
    }
    plVar2 = *(longlong **)
              (*(longlong *)
                (*(longlong *)(lVar7 + 8) + (*(longlong *)(lVar7 + 0x10) - 1U & local_38 >> 1) * 8)
              + (ulonglong)((uint)local_38 & 1) * 8);
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = local_38 + 1;
    }
    plVar3 = (longlong *)plVar2[6];
    if (plVar3 != (longlong *)0x0) {
      bVar10 = *(byte *)(plVar2 + 0xe) & 3;
      if ((undefined **)*plVar3 == CEXT4FileProperties::vftable) {
        uVar4 = *(ushort *)((longlong)plVar3 + 0x39);
      }
      else {
        uVar4 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
      }
      if ((uVar4 & 0x10) == 0) {
        iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar5 == 0) {
          *param_2 = *param_2 + 1;
        }
        if ((undefined **)*plVar3 == CEXT4FileProperties::vftable) {
          lVar7 = *(longlong *)((longlong)plVar3 + 0x31);
        }
        else {
          lVar7 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar7;
        if (bVar10 == 2) {
          iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
          if (iVar5 == 0) {
            param_2[1] = param_2[1] + 1;
          }
          if ((undefined **)*plVar3 == CEXT4FileProperties::vftable) {
            lVar7 = *(longlong *)((longlong)plVar3 + 0x31);
          }
          else {
            lVar7 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
          }
          *(longlong *)(param_2 + 4) = *(longlong *)(param_2 + 4) + lVar7;
        }
        if (((uVar4 & 0x800) != 0) && (param_2[6] = param_2[6] + 1, bVar10 == 2)) {
          param_2[7] = param_2[7] + 1;
        }
        if (((uVar4 & 0x40) != 0) && (param_2[8] = param_2[8] + 1, bVar10 == 2)) {
          param_2[9] = param_2[9] + 1;
        }
      }
      if (param_2[10] != 0) {
        *(byte *)(plVar2 + 0xe) = *(byte *)(plVar2 + 0xe) & 0xfc | *(byte *)(param_2 + 0xb);
      }
    }
    for (lVar7 = plVar2[2]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18)) {
      if ((((char)local_38 + (char)local_30 & 1U) == 0) && (local_40 <= local_30 + 2U >> 1)) {
        FUN_18000ed20((longlong)&local_50,local_40);
      }
      local_38 = local_38 & local_40 * 2 - 1;
      uVar9 = local_38 + local_30;
      lVar1 = (local_40 - 1 & uVar9 >> 1) * 8;
      if (*(longlong *)(lVar1 + (longlong)pvStack_48) == 0) {
        pvVar6 = operator_new(0x10);
        *(void **)(lVar1 + (longlong)pvStack_48) = pvVar6;
      }
      *(longlong *)(*(longlong *)(lVar1 + (longlong)pvStack_48) + (ulonglong)((uint)uVar9 & 1) * 8)
           = lVar7;
      local_30 = local_30 + 1;
    }
  }
  local_30 = 0;
  pvVar6 = pvStack_48;
  uVar9 = local_40;
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    pvVar8 = *(void **)((longlong)pvVar6 + uVar9 * 8);
    if (pvVar8 != (void *)0x0) {
      FUN_180013b3c(pvVar8);
      pvVar6 = pvStack_48;
    }
  }
  if (pvVar6 != (void *)0x0) {
    pvVar8 = pvVar6;
    if ((0xfff < local_40 * 8) &&
       (pvVar8 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar8);
  }
  local_40 = 0;
  pvStack_48 = (void *)0x0;
  FUN_180013b3c(local_50);
  return;
}




void FUN_180010c40(undefined8 *param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  
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
      FUN_180013b3c(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] << 3)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar3);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_180013b3c((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_180010d10(ulonglong *param_1,void *param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined1 local_res20 [8];
  
  pvVar4 = (void *)*param_1;
  sVar7 = param_3 - (longlong)param_2;
  uVar2 = (longlong)(param_1[1] - (longlong)pvVar4) >> 3;
  uVar6 = (longlong)sVar7 >> 3;
  uVar5 = (longlong)(param_1[2] - (longlong)pvVar4) >> 3;
  local_res20[0] = param_4;
  if (uVar5 < uVar6) {
    if (0x1fffffffffffffff < uVar6) {
LAB_180010ed3:
      FUN_180001ea0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = uVar6;
    if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) &&
       (uVar2 = (uVar5 >> 1) + uVar5, uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    if (pvVar4 != (void *)0x0) {
      pvVar3 = pvVar4;
      if ((0xfff < uVar5 * 8) &&
         (pvVar3 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar3)))) goto LAB_180010e26;
      FUN_180013b3c(pvVar3);
    }
    pvVar4 = (void *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar2 != 0) {
      if (0x1fffffffffffffff < uVar2) goto LAB_180010ed3;
      uVar2 = uVar2 * 8;
      if (uVar2 < 0x1000) {
        if (uVar2 != 0) {
          pvVar4 = operator_new(uVar2);
        }
      }
      else {
        uVar5 = uVar2 + 0x27;
        if (uVar5 <= uVar2) {
          uVar5 = 0xffffffffffffffff;
        }
        pvVar3 = operator_new(uVar5);
        if (pvVar3 == (void *)0x0) {
LAB_180010e26:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        pvVar4 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar4 - 8) = pvVar3;
      }
      *param_1 = (ulonglong)pvVar4;
      param_1[1] = (ulonglong)pvVar4;
      param_1[2] = *param_1 + uVar2;
    }
    pvVar4 = (void *)*param_1;
    FUN_180001ec0(local_res20);
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)(sVar7 + (longlong)pvVar4);
  }
  else if (uVar2 < uVar6) {
    sVar7 = uVar2 * 8;
    memmove(pvVar4,param_2,sVar7);
    pvVar3 = (void *)(sVar7 + (longlong)param_2);
    pvVar4 = (void *)param_1[1];
    FUN_180001ec0(local_res20);
    memmove(pvVar4,pvVar3,param_3 - (longlong)pvVar3);
    pvVar4 = (void *)((param_3 - (longlong)pvVar3) + (longlong)pvVar4);
  }
  else {
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)((longlong)pvVar4 + uVar6 * 8);
  }
  param_1[1] = (ulonglong)pvVar4;
  return;
}




undefined8 * FUN_180010ee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 1;
  *param_1 = IDataRunList::vftable;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar1 = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)*puVar1 = puVar1;
  param_1[6] = 0;
  param_1[8] = param_1[4];
  param_1[7] = 0;
  param_1[6] = *puVar1;
  return param_1;
}




undefined8 * FUN_180010f60(undefined8 *param_1,uint param_2)

{
  FUN_180010fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_180010fa0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = IDataRunList::vftable;
  plVar1 = (longlong *)param_1[1];
  for (uVar3 = param_1[4]; uVar3 != param_1[5] + param_1[4]; uVar3 = uVar3 + 1) {
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    FUN_180013b3c(*(void **)(*(longlong *)
                              (*(longlong *)(lVar2 + 8) +
                              (uVar3 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8) +
                            (ulonglong)((uint)uVar3 & 1) * 8));
  }
  FUN_180011280((longlong)(param_1 + 1));
  plVar1 = (longlong *)param_1[1];
  if ((((longlong *)param_1[6] != plVar1) && (plVar1 != (longlong *)0x0)) &&
     ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    param_1[6] = *(undefined8 *)*plVar1;
  }
  param_1[8] = param_1[4];
  FUN_180011280((longlong)(param_1 + 1));
  FUN_180013b3c((void *)param_1[1]);
  param_1[1] = 0;
  return;
}




void FUN_180011080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,4);
  plVar3 = (longlong *)0x0;
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
     (puVar1 = (undefined8 *)**(longlong **)(param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    plVar3 = (longlong *)*puVar1;
  }
  for (; uVar4 != *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28); uVar4 = uVar4 + 1)
  {
    if (plVar3 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar3;
    }
    (**(code **)(*param_2 + 0x78))
              (param_2,*(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)(lVar2 + 8) +
                          (uVar4 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8) +
                        (ulonglong)((uint)uVar4 & 1) * 8),0x10);
  }
  return;
}




void FUN_180011140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar7 = 0;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,4);
  if (local_res10[0] != 0) {
    do {
      local_38 = 0;
      uStack_30 = 0;
      (**(code **)(*param_2 + 0x70))(param_2,&local_38,0x10);
      puVar2 = (undefined8 *)operator_new(0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      uVar5 = *(ulonglong *)(param_1 + 0x20);
      local_res18 = puVar2;
      if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar5 & 1U) == 0) &&
         (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
        FUN_18000ed20(param_1 + 8,uVar5);
        uVar5 = *(ulonglong *)(param_1 + 0x20);
      }
      uVar5 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar5;
      *(ulonglong *)(param_1 + 0x20) = uVar5;
      uVar5 = *(longlong *)(param_1 + 0x28) + uVar5;
      uVar6 = *(longlong *)(param_1 + 0x18) - 1U & uVar5 >> 1;
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar1 = uVar6 * 8;
      if (*(longlong *)(lVar4 + uVar6 * 8) == 0) {
        pvVar3 = operator_new(0x10);
        *(void **)(lVar1 + *(longlong *)(param_1 + 0x10)) = pvVar3;
        lVar4 = *(longlong *)(param_1 + 0x10);
      }
      uVar7 = uVar7 + 1;
      *(undefined8 **)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar5 & 1) * 8) = puVar2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    } while (uVar7 < local_res10[0]);
  }
  return;
}




void FUN_180011280(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(*(longlong *)(param_1 + 8) + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_180013b3c(pvVar1);
    }
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




int FUN_180011340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180003520();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800113a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ulonglong *puVar4;
  FILE *_File;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_2088 [32];
  undefined8 local_2068;
  undefined8 *local_2060;
  uint local_2058;
  _SYSTEMTIME local_2048;
  CHAR local_2038 [8192];
  ulonglong local_38;
  
  local_38 = DAT_18001c010 ^ (ulonglong)auStack_2088;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_18001cac0 != '\0') {
    local_2048.wYear = 0;
    local_2048.wMonth = 0;
    local_2048.wDayOfWeek = 0;
    local_2048.wDay = 0;
    local_2048.wHour = 0;
    local_2048.wMinute = 0;
    local_2048.wSecond = 0;
    local_2048.wMilliseconds = 0;
    GetLocalTime(&local_2048);
    memset(local_2038,0,0x2000);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_18001dad0) {
      _Init_thread_header(&DAT_18001dad0);
      if (DAT_18001dad0 == -1) {
        atexit(FUN_180015540);
        _Init_thread_footer(&DAT_18001dad0);
      }
    }
    if (DAT_18001c048 == 0) {
      if (DAT_18001cad0 == '\0') {
        GetModuleFileNameA((HMODULE)0x0,&DAT_18001cad0,0x1000);
        pcVar3 = strrchr(&DAT_18001cad0,0x5c);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      iVar1 = FUN_180011340(local_2038,"%s\\log\\ext4.log",&DAT_18001cad0,param_4);
      DeleteFileA(local_2038);
      FUN_180002a10((longlong *)&DAT_18001c038,local_2038,(longlong)iVar1);
    }
    local_2058 = (uint)local_2048.wMilliseconds;
    local_2060 = (undefined8 *)CONCAT44(local_2060._4_4_,(uint)local_2048.wSecond);
    local_2068 = CONCAT44(local_2068._4_4_,(uint)local_2048.wMinute);
    iVar1 = snprintf(local_2038,0x30,"%02d:%02d:%02d:%03d ",local_2048._8_8_ & 0xffff);
    puVar4 = (ulonglong *)FUN_180003520();
    local_2068 = 0;
    local_2060 = &local_res10;
    iVar2 = __stdio_common_vsprintf(*puVar4 | 2,local_2038 + iVar1,2000,param_1);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    OutputDebugStringA(local_2038);
    pcVar3 = (char *)&DAT_18001c038;
    if (0xf < DAT_18001c050) {
      pcVar3 = DAT_18001c038;
    }
    _File = fopen(pcVar3,"a");
    fwrite(local_2038,1,(longlong)(iVar1 + iVar2),_File);
    fclose(_File);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_2088);
  return;
}




undefined8 FUN_180011620(void)

{
  return 0xffffffffffffffff;
}




void FUN_180011630(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(code **)(*param_2 + 0x40) == FUN_18000eb60) {
    *(int *)(param_1 + 8) = (int)param_2[5];
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_180011680(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_180011690(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined8 * FUN_1800116a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_1800116d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x55) = param_2;
  return;
}




undefined8 FUN_1800116e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x55);
}




undefined8 * FUN_1800116f0(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 local_res8;
  
  *param_1 = CEXT4FileProperties::vftable;
  pvVar1 = *(void **)((longlong)param_1 + 0x5d);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
      FUN_180013b3c(*(void **)((longlong)pvVar1 + 8));
    }
    FUN_180013b3c(pvVar1);
    *(undefined8 *)((longlong)param_1 + 0x5d) = 0;
  }
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    FUN_18000a3f0(plVar2,*(longlong **)(lVar3 + 8));
    *(longlong *)(*plVar2 + 8) = lVar3;
    *(longlong *)*plVar2 = lVar3;
    *(longlong *)(*plVar2 + 0x10) = lVar3;
    plVar2[1] = 0;
    plVar2 = (longlong *)param_1[0xd];
    if (plVar2 != (longlong *)0x0) {
      FUN_180009920(plVar2,&local_res8,*(longlong **)*plVar2,(longlong *)*plVar2);
      FUN_180013b3c((void *)*plVar2);
      FUN_180013b3c(plVar2);
    }
    param_1[0xd] = 0;
  }
  if (0xf < *(ulonglong *)((longlong)param_1 + 0x29)) {
    pvVar1 = *(void **)((longlong)param_1 + 0x11);
    pvVar4 = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_1 + 0x29) + 1) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar4);
  }
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0xf;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void * FUN_180011840(void *param_1)

{
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FUN_180013b3c(*(void **)((longlong)param_1 + 8));
  }
  FUN_180013b3c(param_1);
  return param_1;
}




undefined4 FUN_180011870(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x21);
}




void FUN_180011880(longlong param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = 0xffffffffffffffff;
  pcVar1 = "Unknown";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  do {
    sVar2 = sVar2 + 1;
  } while (pcVar1[sVar2] != '\0');
  FUN_180002a10((longlong *)(param_1 + 0x11),pcVar1,sVar2);
  return;
}




longlong * FUN_1800118b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x11);
  if (0xf < *(ulonglong *)(param_1 + 0x29)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}




undefined8 FUN_1800118c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x31);
}




void FUN_1800118d0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x39) = param_2;
  return;
}




undefined2 FUN_1800118e0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x39);
}




undefined8 * FUN_1800118f0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x3b);
  return param_2;
}




undefined8 * FUN_180011900(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x43);
  return param_2;
}




undefined8 * FUN_180011910(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x4b);
  return param_2;
}




void FUN_180011920(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x53) = param_2;
  return;
}




undefined1 FUN_180011930(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x53);
}




ushort * FUN_180011940(longlong param_1)

{
  ushort *puVar1;
  
  if (*(ushort **)(param_1 + 0x5d) == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  puVar1 = FUN_1800125a0(*(ushort **)(param_1 + 0x5d));
  return puVar1;
}




undefined8 FUN_180011960(void)

{
  return 0xff;
}




bool FUN_180011970(longlong param_1)

{
  return *(char *)(param_1 + 0x54) != '\0';
}




bool FUN_180011980(longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x54);
  *(bool *)(param_1 + 0x54) = param_2 != 0;
  return cVar1 != '\0';
}




undefined8 FUN_1800119a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 local_res8 [4];
  int local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res8[0] = *(undefined2 *)(param_1 + 0x21);
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,2);
  plVar4 = (longlong *)(param_1 + 0x11);
  if (0xf < *(ulonglong *)(param_1 + 0x29)) {
    plVar4 = (longlong *)*plVar4;
  }
  (**(code **)(*param_2 + 0x78))(param_2,plVar4,local_res8[0]);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x31,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x39,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x3b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x43,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x4b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x53,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x55,8);
  if (*(longlong *)(param_1 + 0x5d) != 0) {
    local_res18[0] = 1;
    (**(code **)(*param_2 + 0x78))(param_2,local_res18);
    lVar1 = *(longlong *)(param_1 + 0x5d);
    local_res10[0] = 0;
    pcVar2 = *(char **)(lVar1 + 8);
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 != '\0') {
        lVar3 = 0;
        do {
          local_res10[0] =
               ((byte)pcVar2[lVar3] >> 4) + 1 + ((byte)pcVar2[lVar3] & 0xf) + local_res10[0];
          lVar3 = (longlong)local_res10[0];
        } while (pcVar2[lVar3] != '\0');
      }
      local_res10[0] = local_res10[0] + 1;
    }
    (**(code **)(*param_2 + 0x78))(param_2,local_res10,4);
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar1 + 8),local_res10[0]);
    (**(code **)(*param_2 + 0x78))(param_2,lVar1,2);
    return 1;
  }
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,local_res10,4);
  return 1;
}




void FUN_180011b40(longlong param_1,longlong *param_2,undefined8 param_3,undefined *param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  ushort local_58 [2];
  int local_54 [3];
  longlong local_48 [2];
  size_t local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_54[1] = -2;
  local_54[2] = -1;
  local_28 = DAT_18001c010 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x70))(param_2,local_58,2);
  if (local_58[0] != 0) {
    pvVar2 = operator_new((ulonglong)local_58[0]);
    param_4 = *(undefined **)(*param_2 + 0x70);
    (*(code *)param_4)(param_2,pvVar2,local_58[0]);
    local_38 = 0;
    uStack_30 = 0xf;
    local_48[0]._0_1_ = 0;
    if (pvVar2 != (void *)((ulonglong)local_58[0] + (longlong)pvVar2)) {
      FUN_180002a10(local_48,pvVar2,(ulonglong)local_58[0]);
    }
    if ((longlong *)(param_1 + 0x11) != local_48) {
      plVar4 = local_48;
      if (0xf < uStack_30) {
        plVar4 = (longlong *)CONCAT71(local_48[0]._1_7_,(undefined1)local_48[0]);
      }
      FUN_180002a10((longlong *)(param_1 + 0x11),plVar4,local_38);
    }
    FUN_180013b3c(pvVar2);
    if (0xf < uStack_30) {
      pvVar1 = (void *)CONCAT71(local_48[0]._1_7_,(undefined1)local_48[0]);
      pvVar2 = pvVar1;
      if ((0xfff < uStack_30 + 1) &&
         (pvVar2 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_180013b3c(pvVar2);
    }
  }
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x31,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x39,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x3b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x43,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x4b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x53,1);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x55,8);
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5d) = 0;
  local_54[0] = 0;
  uVar6 = 4;
  piVar5 = local_54;
  (**(code **)(*param_2 + 0x70))(param_2);
  if (local_54[0] == 0) {
    *(undefined8 *)(param_1 + 0x5d) = 0;
  }
  else {
    puVar3 = FUN_1800127a0(param_2,piVar5,uVar6,param_4);
    *(undefined2 **)(param_1 + 0x5d) = puVar3;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}




void FUN_180011d40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x78);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = CEXT4FileProperties::vftable;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29) = 0xf;
  *(undefined8 *)((longlong)puVar1 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x39) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x53) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5d) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3b) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x43) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4b) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x55) = 0;
  puVar1[0xd] = 0;
  return;
}




undefined8 FUN_180011db0(void)

{
  return 8;
}




void FUN_180011dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180003520();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}




undefined8 FUN_180011e20(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  BOOL BVar1;
  ulonglong uVar2;
  HANDLE pvVar3;
  LPVOID pvVar4;
  void *_Dst;
  LPCWSTR pszPath;
  LPCWSTR lpFileName;
  LARGE_INTEGER liDistanceToMove;
  DWORD local_res10 [2];
  DWORD DStackX_24;
  LARGE_INTEGER local_20;
  
  if ((longlong)param_2 < 1) {
    return 0;
  }
  FUN_1800120b0(param_1);
  param_1[2] = param_2;
  uVar2 = param_2 >> 3;
  if ((param_2 & 7) != 0) {
    uVar2 = uVar2 + 1;
  }
  param_1[1] = uVar2 + 0xfff & 0xfffffffffffff000;
  if (param_1[8] != 0) {
    lpFileName = (LPCWSTR)(param_1 + 6);
    pszPath = lpFileName;
    if (7 < (ulonglong)param_1[9]) {
      pszPath = *(LPCWSTR *)lpFileName;
    }
    BVar1 = PathFileExistsW(pszPath);
    if (BVar1 == 0) {
      if (7 < (ulonglong)param_1[9]) {
        lpFileName = *(LPCWSTR *)lpFileName;
      }
      pvVar3 = CreateFileW(lpFileName,0x10000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      param_1[4] = (longlong)pvVar3;
      if (pvVar3 == (HANDLE)0xffffffffffffffff) {
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      else {
        BVar1 = DeviceIoControl(pvVar3,0x900c4,(LPVOID)0x0,0,(LPVOID)0x0,0,local_res10,
                                (LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          *(undefined1 *)(param_1 + 0xb) = 0;
        }
        else {
          liDistanceToMove.QuadPart = param_1[1] + 8;
          SetFilePointerEx((HANDLE)param_1[4],liDistanceToMove,&local_20,0);
          SetEndOfFile((HANDLE)param_1[4]);
          DStackX_24 = liDistanceToMove.s.HighPart;
          pvVar3 = CreateFileMappingW((HANDLE)param_1[4],(LPSECURITY_ATTRIBUTES)0x0,4,DStackX_24,
                                      liDistanceToMove.s.LowPart,(LPCWSTR)0x0);
          param_1[5] = (longlong)pvVar3;
          if (pvVar3 == (HANDLE)0x0) {
            *(undefined1 *)(param_1 + 0xb) = 0;
          }
          else {
            pvVar4 = MapViewOfFile(pvVar3,0xf001f,0,0,0);
            *param_1 = (longlong)pvVar4;
            if (pvVar4 == (LPVOID)0x0) {
              return 0;
            }
          }
        }
      }
    }
  }
  if (*param_1 == 0) {
    if ((ulonglong)param_1[0xd] < (ulonglong)param_1[1]) {
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
    _Dst = operator_new(param_1[1] + 8);
    *param_1 = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,param_1[1] + 8);
    }
    if (*param_1 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
  }
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(param_1 + 3) = param_3;
  return 1;
}




undefined8 FUN_180012040(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1[10] + param_2;
  if ((uVar1 <= (ulonglong)param_1[2]) && (*param_1 != 0)) {
    lVar2 = 0;
    while( true ) {
      if ((longlong)(param_4 & 0xffffffff) <= lVar2) {
        return 1;
      }
      if ((ulonglong)param_1[2] < uVar1) break;
      *(byte *)(*param_1 + (uVar1 >> 3)) =
           *(byte *)(*param_1 + (uVar1 >> 3)) | '\x01' << ((byte)uVar1 & 7);
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 + 1;
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_1800120b0(undefined8 *param_1)

{
  LPCWSTR lpFileName;
  
  if ((param_1[8] == 0) || (*(char *)(param_1 + 0xb) == '\0')) {
    FUN_180013b3c((void *)*param_1);
  }
  else {
    if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)*param_1);
    }
    if ((HANDLE)param_1[5] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[5]);
    }
    param_1[5] = 0;
    if ((HANDLE)param_1[4] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[4]);
    }
    lpFileName = (LPCWSTR)(param_1 + 6);
    param_1[4] = 0;
    if (7 < (ulonglong)param_1[9]) {
      lpFileName = *(LPCWSTR *)lpFileName;
    }
    DeleteFileW(lpFileName);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  return 1;
}




void FUN_180012140(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_58 [11];
  
  local_58[8] = DAT_18001c010 ^ (ulonglong)local_58;
  if ((longlong)param_1 < 0) {
    uVar2 = 0;
    local_58[0] = 0xffffffffffffff80;
    local_58[1] = 0xffffffffffff8000;
    local_58[2] = 0xffffffffff800000;
    local_58[3] = 0xffffffff80000000;
    local_58[4] = 0xffffff8000000000;
    local_58[5] = 0xffff800000000000;
    local_58[6] = 0xff80000000000000;
    local_58[7] = 0x8000000000000000;
    while( true ) {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if ((longlong)*puVar1 <= (longlong)param_1) break;
      if (7 < (byte)uVar3) {
        __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
        return;
      }
    }
  }
  else {
    local_58[0] = 0x80;
    local_58[3] = 0x80000000;
    local_58[4] = 0x8000000000;
    local_58[5] = 0x800000000000;
    local_58[6] = 0x80000000000000;
    local_58[7] = 0x8000000000000000;
    uVar2 = 0;
    local_58[1] = 0x8000;
    local_58[2] = 0x800000;
    do {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if (param_1 < *puVar1) break;
    } while ((byte)uVar3 < 8);
  }
  local_58[7] = 0x8000000000000000;
  __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
  return;
}




longlong * FUN_180012260(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte local_res20 [8];
  longlong local_60;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  longlong *plVar14;
  
  plVar14 = (longlong *)0x0;
  plVar13 = (longlong *)0x0;
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  FUN_180012930((longlong *)&local_50,param_2);
  local_60 = 0;
  *param_3 = 0;
  *param_2 = 0;
  pbVar7 = local_50;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    plVar5 = plVar14;
    if ((undefined8 *)(param_1 + 8) != (undefined8 *)0x0) {
      plVar5 = *(longlong **)(param_1 + 8);
    }
    if (((*(longlong **)(param_1 + 0x30) != plVar5) && (plVar5 != (longlong *)0x0)) &&
       ((undefined8 *)*plVar5 != (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*plVar5;
    }
    *(ulonglong *)(param_1 + 0x40) = uVar9;
    lVar10 = *(longlong *)(param_1 + 0x28);
    lVar11 = *(longlong *)(param_1 + 0x20);
    plVar5 = plVar14;
    if (uVar9 != lVar10 + lVar11) {
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x30);
      }
      plVar5 = *(longlong **)
                (*(longlong *)(plVar5[1] + (plVar5[2] - 1U & uVar9 >> 1) * 8) +
                (ulonglong)((uint)uVar9 & 1) * 8);
    }
    if (plVar5 != (longlong *)0x0) {
      *param_2 = *plVar5;
      bVar2 = false;
      uVar9 = *(ulonglong *)(param_1 + 0x40);
      while (uVar9 != lVar10 + lVar11) {
        lVar10 = *plVar5;
        uVar12 = lVar10 - local_60;
        pbVar7 = local_48;
        bVar3 = FUN_180012140(uVar12);
        uVar9 = plVar5[1];
        bVar4 = FUN_180012140(uVar9);
        if (lVar10 == -1) {
          bVar2 = true;
        }
        bVar1 = 0;
        if (lVar10 != -1) {
          local_60 = lVar10;
          bVar1 = bVar3;
        }
        *param_3 = *param_3 + uVar9;
        local_res20[0] = bVar1 << 4 | bVar4 & 0xf;
        if (local_40 == pbVar7) {
          FUN_180012af0((longlong *)&local_50,pbVar7,local_res20);
        }
        else {
          *pbVar7 = local_res20[0];
          local_48 = pbVar7 + 1;
        }
        uVar6 = 0;
        if (bVar4 != 0) {
          do {
            local_res20[0] = (byte)((longlong)uVar9 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180012af0((longlong *)&local_50,local_48,local_res20);
            }
            else {
              *local_48 = local_res20[0];
              local_48 = local_48 + 1;
            }
            bVar3 = (char)uVar6 + 1;
            uVar6 = (uint)bVar3;
          } while (bVar3 < bVar4);
        }
        uVar6 = 0;
        if (bVar1 != 0) {
          do {
            local_res20[0] = (byte)((longlong)uVar12 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180012af0((longlong *)&local_50,local_48,local_res20);
            }
            else {
              *local_48 = local_res20[0];
              local_48 = local_48 + 1;
            }
            bVar3 = (char)uVar6 + 1;
            uVar6 = (uint)bVar3;
          } while (bVar3 < bVar1);
        }
        uVar9 = *(longlong *)(param_1 + 0x40) + 1;
        *(ulonglong *)(param_1 + 0x40) = uVar9;
        lVar10 = *(longlong *)(param_1 + 0x28);
        lVar11 = *(longlong *)(param_1 + 0x20);
        plVar5 = plVar14;
        if (uVar9 != lVar11 + lVar10) {
          plVar13 = plVar14;
          if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
            plVar13 = (longlong *)**(undefined8 **)(param_1 + 0x30);
          }
          plVar5 = *(longlong **)
                    (*(longlong *)(plVar13[1] + (uVar9 >> 1 & plVar13[2] - 1U) * 8) +
                    (ulonglong)((uint)uVar9 & 1) * 8);
        }
      }
      if (bVar2) {
        *param_3 = 0;
      }
      pbVar7 = local_50;
      plVar13 = plVar14;
      if (local_50 != local_48) {
        local_res20[0] = 0;
        if (local_40 == local_48) {
          FUN_180012af0((longlong *)&local_50,local_48,local_res20);
        }
        else {
          *local_48 = 0;
          local_48 = local_48 + 1;
        }
        pbVar7 = local_50;
        uVar9 = (longlong)local_48 - (longlong)local_50;
        plVar13 = (longlong *)operator_new(uVar9 & 0xffffffff);
        if (plVar13 != (longlong *)0x0) {
          memcpy(plVar13,pbVar7,uVar9 & 0xffffffff);
        }
      }
    }
  }
  if (pbVar7 != (byte *)0x0) {
    pbVar8 = pbVar7;
    if ((0xfff < (ulonglong)((longlong)local_40 - (longlong)pbVar7)) &&
       (pbVar8 = *(byte **)(pbVar7 + -8), (byte *)0x1f < pbVar7 + (-8 - (longlong)pbVar8))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pbVar8);
  }
  return plVar13;
}




ushort * FUN_1800125a0(ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar11;
  ushort *puVar12;
  longlong *plVar13;
  ushort *local_res8;
  longlong *local_30;
  longlong local_28;
  ushort *puVar10;
  
  pcVar3 = *(char **)(param_1 + 4);
  if (pcVar3 == (char *)0x0) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)0x0;
    uVar9 = 0;
    cVar1 = *pcVar3;
    puVar12 = param_1;
    puVar8 = puVar11;
    puVar10 = puVar11;
    while (cVar1 != '\0') {
      uVar9 = (int)puVar10 + (*(byte *)((longlong)puVar8 + (longlong)pcVar3) & 0xf) +
              (*(byte *)((longlong)puVar8 + (longlong)pcVar3) >> 4) + 1;
      puVar10 = (ushort *)(ulonglong)uVar9;
      puVar12 = (ushort *)(longlong)(int)uVar9;
      puVar8 = puVar12;
      cVar1 = *(char *)((longlong)puVar12 + (longlong)pcVar3);
    }
    if (*param_1 == 0) {
      puVar11 = (ushort *)operator_new(0x48);
      local_res8 = puVar11;
      FUN_180010ee0((undefined8 *)puVar11);
      *(undefined ***)puVar11 = CNoneResidentNTFSDataRunList::vftable;
      FUN_180012d50((longlong)puVar11,*(longlong *)(param_1 + 4),uVar9 + 1);
    }
    else {
      local_30 = (longlong *)0x0;
      local_28 = 0;
      local_30 = (longlong *)FUN_180012a60(puVar12,(undefined8 *)0x0,(undefined8 *)0x0);
      FUN_1800147a0(*(longlong *)(param_1 + 4),uVar9 + 1,(longlong)&local_30);
      if (local_28 != 0) {
        puVar4 = *(undefined8 **)(*local_30 + 0x10);
        puVar11 = (ushort *)operator_new(0x50);
        local_res8 = puVar11;
        FUN_180010ee0((undefined8 *)puVar11);
        *(undefined ***)puVar11 = CResidentNTFSDataRunList::vftable;
        puVar11[0x24] = 0;
        puVar11[0x25] = 0;
        uVar2 = *param_1;
        uVar5 = puVar4[2];
        uVar6 = *puVar4;
        local_res8 = (ushort *)operator_new(0x10);
        *(undefined8 *)local_res8 = uVar6;
        *(undefined8 *)(local_res8 + 4) = uVar5;
        FUN_18000ec60((longlong)(puVar11 + 4),&local_res8);
        *(uint *)(puVar11 + 0x24) = (uint)uVar2;
        FUN_180013b3c(puVar4);
        plVar13 = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (plVar13 != local_30) {
          do {
            plVar7 = (longlong *)*plVar13;
            FUN_180013b3c(plVar13);
            plVar13 = plVar7;
          } while (plVar7 != local_30);
        }
      }
      plVar13 = (longlong *)*local_30;
      *local_30 = (longlong)local_30;
      local_30[1] = (longlong)local_30;
      local_28 = 0;
      if (plVar13 != local_30) {
        do {
          plVar7 = (longlong *)*plVar13;
          FUN_180013b3c(plVar13);
          plVar13 = plVar7;
        } while (plVar7 != local_30);
      }
      FUN_180013b3c(local_30);
    }
  }
  return puVar11;
}




undefined2 *
FUN_1800127a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  void *pvVar2;
  int local_res8 [2];
  undefined2 *local_res10;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined2 *)0x0;
  }
  local_res10 = (undefined2 *)0x0;
  puVar1 = (undefined2 *)operator_new(0x10);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  local_res8[0] = 0;
  local_res10 = puVar1;
  (**(code **)(*param_1 + 0x70))(param_1,local_res8,4);
  pvVar2 = operator_new((longlong)local_res8[0]);
  *(void **)(puVar1 + 4) = pvVar2;
  (**(code **)(*param_1 + 0x70))(param_1,pvVar2,local_res8[0]);
  (**(code **)(*param_1 + 0x70))(param_1,puVar1,2);
  return puVar1;
}




void FUN_180012870(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_1800128d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (plVar3 != plVar2) {
    do {
      plVar1 = (longlong *)*plVar3;
      FUN_180013b3c(plVar3);
      plVar2 = (longlong *)*param_1;
      plVar3 = plVar1;
    } while (plVar1 != plVar2);
  }
  FUN_180013b3c(plVar2);
  return;
}




void FUN_180012930(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  void *_Src;
  undefined8 local_res10;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_res10 = param_2;
  _Dst = operator_new(0x80);
  _Src = (void *)*param_1;
  FUN_180001ec0((undefined1 *)&local_res10);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  FUN_1800129c0(param_1,(longlong)_Dst,lVar1 - lVar2,0x80);
  return;
}




longlong FUN_1800129a0(longlong param_1)

{
  return param_1 + 8;
}




undefined8 FUN_1800129b0(undefined8 param_1)

{
  return param_1;
}




void FUN_1800129c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}




undefined8 * FUN_180012a50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_180012a60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *pvVar1;
  
  pvVar1 = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x18)) &&
     (pvVar1 = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_180013b3c(pvVar1);
  return;
}




longlong FUN_180012af0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Dst;
  size_t _Size;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar4 = *param_1;
  lVar7 = (longlong)param_2 - lVar4;
  if (param_1[1] - lVar4 == 0x7fffffffffffffff) {
    FUN_180001ea0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar6 = (param_1[1] - lVar4) + 1;
  uVar2 = param_1[2] - lVar4;
  uVar5 = uVar6;
  if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) && (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < uVar6))
  {
    uVar5 = uVar6;
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
    uVar2 = uVar5 + 0x27;
    if (uVar2 <= uVar5) {
      uVar2 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar2);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  *(undefined1 *)((longlong)_Dst + lVar7) = *param_3;
  pvVar3 = (void *)param_1[1];
  _Src = (void *)*param_1;
  FUN_180001ec0(local_res8);
  if (param_2 == pvVar3) {
    _Size = (longlong)pvVar3 - (longlong)_Src;
    pvVar3 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    lVar4 = lVar7 + 1;
    FUN_180001ec0(local_res8);
    pvVar3 = (void *)(lVar4 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar3,param_2,_Size);
  FUN_1800129c0(param_1,(longlong)_Dst,uVar6,uVar5);
  return *param_1 + lVar7;
}




undefined8 FUN_180012c30(void)

{
  return 2;
}




undefined8 * FUN_180012c40(undefined8 *param_1,uint param_2)

{
  *param_1 = CResidentNTFSDataRunList::vftable;
  FUN_180010fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined4 FUN_180012c80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_180012c90(longlong param_1,longlong *param_2)

{
  FUN_180011080(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180012cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,4);
  return;
}




void FUN_180012cd0(longlong param_1,longlong *param_2)

{
  FUN_180011140(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180012cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,4);
  return;
}




undefined8 * FUN_180012d10(undefined8 *param_1,uint param_2)

{
  *param_1 = CNoneResidentNTFSDataRunList::vftable;
  FUN_180010fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




undefined8 FUN_180012d50(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *local_res20;
  longlong local_48 [2];
  
  uVar8 = 0;
  uVar14 = uVar8;
  while( true ) {
    iVar10 = (int)uVar8;
    if (param_3 <= iVar10) {
      return 1;
    }
    lVar12 = (longlong)iVar10;
    bVar1 = *(byte *)(lVar12 + param_2);
    if (bVar1 == 0) {
      return 1;
    }
    bVar9 = bVar1 >> 4;
    uVar5 = bVar1 & 0xf;
    local_48[0] = 0;
    local_res20 = (longlong *)0x0;
    uVar11 = iVar10 + 1 + bVar9 + uVar5;
    uVar8 = (ulonglong)uVar11;
    if (param_3 < (int)uVar11) {
      return 1;
    }
    if (8 < (ulonglong)uVar5) break;
    if (8 < bVar9) {
      return 1;
    }
    memcpy(local_48,(void *)(param_2 + 1 + lVar12),(ulonglong)uVar5);
    memcpy(&local_res20,(void *)((ulonglong)uVar5 + 1 + lVar12 + param_2),(ulonglong)bVar9);
    plVar13 = local_res20;
    switch((uint)bVar9) {
    case 1:
      plVar13 = (longlong *)(longlong)(char)local_res20;
      break;
    case 2:
      plVar13 = (longlong *)(longlong)(short)local_res20;
      break;
    case 3:
      if (0x800000 < (longlong)local_res20) {
        plVar13 = local_res20 + -0x200000;
      }
      break;
    case 4:
      plVar13 = (longlong *)(longlong)(int)local_res20;
      break;
    case 5:
      if (((ulonglong)local_res20 & 0x8000000000) != 0) {
        plVar13 = local_res20 + -0x2000000000;
      }
      break;
    case 6:
      if (((ulonglong)local_res20 & 0x800000000000) != 0) {
        plVar13 = local_res20 + -0x200000000000;
      }
      break;
    case 7:
      if (((ulonglong)local_res20 & 0x80000000000000) != 0) {
        plVar13 = local_res20 + -0x20000000000000;
      }
    }
    plVar2 = (longlong *)operator_new(0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    if (bVar1 >> 4 == 0) {
      *plVar2 = -1;
    }
    else {
      *plVar2 = (longlong)plVar13 + uVar14;
    }
    plVar2[1] = local_48[0];
    uVar6 = *(ulonglong *)(param_1 + 0x20);
    local_res20 = plVar2;
    if ((((int)*(longlong *)(param_1 + 0x28) + (int)uVar6 & 1U) == 0) &&
       (*(ulonglong *)(param_1 + 0x18) <= *(longlong *)(param_1 + 0x28) + 2U >> 1)) {
      FUN_18000ed20(param_1 + 8,uVar6);
      uVar6 = *(ulonglong *)(param_1 + 0x20);
    }
    uVar6 = *(longlong *)(param_1 + 0x18) * 2 - 1U & uVar6;
    *(ulonglong *)(param_1 + 0x20) = uVar6;
    uVar6 = *(longlong *)(param_1 + 0x28) + uVar6;
    uVar7 = *(longlong *)(param_1 + 0x18) - 1U & uVar6 >> 1;
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar12 = uVar7 * 8;
    if (*(longlong *)(lVar4 + uVar7 * 8) == 0) {
      pvVar3 = operator_new(0x10);
      *(void **)(lVar12 + *(longlong *)(param_1 + 0x10)) = pvVar3;
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    uVar14 = uVar14 + (longlong)plVar13;
    *(longlong **)(*(longlong *)(lVar12 + lVar4) + (ulonglong)((uint)uVar6 & 1) * 8) = plVar2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    if ((int)uVar11 < 0) {
      return 1;
    }
  }
  return 1;
}




void FUN_180013020(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_18000ec60(param_1 + 8,&local_res8);
  return;
}




void FUN_180013070(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_1800130b0(param_1,local_10);
  FUN_180013130(param_1,(undefined8 *)*puVar1,param_2);
  return;
}




undefined8 * FUN_1800130b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800129b0(param_1);
  FUN_1800130f0(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_1800130f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_180012a50(param_1,param_2);
  return param_1;
}




void FUN_180013130(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_2[1];
  uVar2 = FUN_180013280(param_3);
  lVar3 = FUN_180013290(param_1,param_2,plVar1,uVar2);
  FUN_1800131b0(param_1,1);
  param_2[1] = lVar3;
  *plVar1 = lVar3;
  return;
}




void FUN_1800131b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180013230(param_1);
  plVar2 = (longlong *)FUN_1800129a0(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_1800129a0(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180013230(undefined8 param_1)

{
  FUN_180013260(param_1);
  FUN_180013250();
  return;
}




undefined8 FUN_180013250(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_180013260(undefined8 param_1)

{
  FUN_180013280(param_1);
  return;
}




undefined8 FUN_180013280(undefined8 param_1)

{
  return param_1;
}




longlong FUN_180013290(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                      )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_180012a60(param_1,param_2,param_3);
  uVar2 = FUN_1800129b0(param_1);
  uVar3 = FUN_180013280(param_4);
  uVar4 = FUN_1800129b0(lVar1 + 0x10);
  construct<>(uVar2,uVar4,uVar3);
  return lVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char * __ptr64,char * __ptr64 const & __ptr64>(class std::allocator<char> &
   __ptr64,char * __ptr64 * __ptr64 const,char * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800016f0(8,param_2);
  puVar2 = (undefined8 *)FUN_180013280(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18001c010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
    if (DAT_18001c424 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18001c424 = DAT_18001c424 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18001c428 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180013dd8();
      FID_conflict__RTC_Initialize();
      DAT_18001c428 = 0;
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
    if (DAT_18001c428 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18001c428 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180013dc8();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180016310,&DAT_180016320);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800162f8,&DAT_180016308);
        DAT_18001c428 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180013e08();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18001c424 = DAT_18001c424 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180013664) */
/* WARNING: Removing unreachable block (ram,0x0001800135f3) */
/* WARNING: Removing unreachable block (ram,0x0001800136a7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18001c424 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180001020();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001020();
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
    FUN_18001414c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18001412c();
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
LAB_180013786:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18001c430 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18001c430;
        pvVar1 = DAT_18001c430;
      }
      DAT_18001c430 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180013786;
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
    uVar3 = FUN_180001020();
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
  
  uVar1 = FUN_180013910(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180002000();
  if (cVar1 != '\0') {
    cVar1 = FUN_180002000();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180002000();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180002000();
  FUN_180002000();
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
    _execute_onexit_table(&DAT_18001c440);
    return;
  }
  uVar2 = FUN_180001cd0();
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
  FUN_180002000();
  FUN_180002000();
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
    DAT_18001c438 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180002000();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180002000();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180002000();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180013910(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18001c439 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18001c010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18001c010;
      _DAT_18001c440 = in_RAX;
      uRam000000018001c448 = in_RAX;
      _DAT_18001c450 = in_RAX;
      _DAT_18001c458 = in_RAX;
      uRam000000018001c460 = in_RAX;
      _DAT_18001c468 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18001c440);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18001c458), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18001c439 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180013a76) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180013a5f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180013a5f:
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
    DAT_18001c430 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18001c438 == '\0') || (param_2 == '\0')) {
    FUN_180002000();
    FUN_180002000();
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
  
  bVar2 = (byte)DAT_18001c010 & 0x3f;
  if (((DAT_18001c010 ^ _DAT_18001c440) >> bVar2 | (DAT_18001c010 ^ _DAT_18001c440) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18001c440,_Func);
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




void FUN_180013b3c(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180014428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




undefined8 * FUN_180013b4c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_180013b78(__uint64 param_1)

{
  operator_new(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000180013bcd. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180013bfe;
  capture_previous_context((PCONTEXT)&DAT_18001c510);
  _DAT_18001c480 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18001c5a8 = puVar3 + 0x40;
  _DAT_18001c590 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18001c470 = 0xc0000409;
  _DAT_18001c474 = 1;
  _DAT_18001c488 = 1;
  DAT_18001c490 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18001c010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18001c008;
  *(undefined8 *)(puVar3 + -8) = 0x180013ca0;
  DAT_18001c608 = _DAT_18001c480;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800163a0);
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
  
  if (DAT_18001c010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18001c010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18001c010 == 0x2b992ddfa232) {
      DAT_18001c010 = 0x2b992ddfa233;
    }
  }
  DAT_18001c008 = ~DAT_18001c010;
  return;
}




void FUN_180013dc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180013dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18001c9e0);
  return;
}




void FUN_180013dd8(void)

{
  __std_type_info_destroy_list(&DAT_18001c9e0);
  return;
}




undefined * FUN_180013de4(void)

{
  return &DAT_18001c9f0;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180003520();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180013de4();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180013e08(void)

{
  return &DAT_18001dad8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180013e10(void)

{
  _DAT_18001c9f8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180013e4b;
  FUN_180013e10();
  *(undefined8 *)(puVar4 + -8) = 0x180013e5c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180013e66;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180013e80;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180013ec1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180013ef3;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180013f15;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180013f36;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180013f41;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180013f51;
    FUN_180013e10();
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
  
  for (puVar1 = &DAT_180018d60; puVar1 < &DAT_180018d60; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180018d70; puVar1 < &DAT_180018d70; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined8 * FUN_18001401c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18001403c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18001407c(undefined8 *param_1)

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




undefined8 * FUN_1800140e8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_180013b3c(param_1);
  }
  return param_1;
}




void FUN_18001412c(void)

{
  undefined8 local_28 [5];
  
  FUN_18001401c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001b050);
}




void FUN_18001414c(void)

{
  undefined8 local_28 [5];
  
  FUN_18001407c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001b0d8);
}




char * FUN_18001416c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x00018001424e) */
/* WARNING: Removing unreachable block (ram,0x0001800141cc) */
/* WARNING: Removing unreachable block (ram,0x0001800141a7) */
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
  
  DAT_18001c01c = 2;
  _DAT_18001c018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18001c020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001c9fc = DAT_18001c9fc | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18001c9fc = DAT_18001c9fc | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18001c018 = 2;
    DAT_18001c01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001c01c = 0xe;
      _DAT_18001c018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18001c018 = 5;
        DAT_18001c01c = 0x2e;
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
  return DAT_18001c034 != 0;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::CAtlBaseModule(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  memset(this + 0x28,0,0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x10) = 0x180000000;
  *(undefined8 *)(this + 8) = 0x180000000;
  *(undefined **)(this + 0x20) = &DAT_180016438;
  *(undefined4 *)this = 0x60;
  *(undefined4 *)(this + 0x18) = 0xe00;
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(this + 0x28),0,0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    DVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      DVar1 = DVar3;
    }
    if ((int)DVar1 < 0) {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
      }
      DAT_18001cab4 = 1;
    }
  }
  return this;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::~CAtlBaseModule(void) __ptr64
   
   Library: Visual Studio */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}




void FUN_1800145dc(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
  if (DAT_18001ca98 != (HANDLE)0x0) {
    CloseHandle(DAT_18001ca98);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001c030 = DAT_18001c030 + 1;
  *param_1 = DAT_18001c030;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001c030;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1800146b8:
                    /* WARNING: Could not recover jumptable at 0x0001800146c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001c030;
      goto LAB_1800146b8;
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
  
  if (DAT_18001ca98 != (HANDLE)0x0) {
    SetEvent(DAT_18001ca98);
                    /* WARNING: Could not recover jumptable at 0x000180014715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18001ca98);
    return;
  }
  bVar1 = (byte)DAT_18001c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180014c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001c010 ^ _DAT_18001caa8) >> bVar1 |
            (DAT_18001c010 ^ _DAT_18001caa8) << 0x40 - bVar1))(&DAT_18001ca90);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18001ca98 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
    WaitForSingleObjectEx(DAT_18001ca98,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018001478c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001ca68);
    return;
  }
  bVar1 = (byte)DAT_18001c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180014c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001c010 ^ _DAT_18001caa0) >> bVar1 |
            (DAT_18001c010 ^ _DAT_18001caa0) << 0x40 - bVar1))
            (&DAT_18001ca90,&DAT_18001ca68,param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001800148b6) */
/* WARNING: Removing unreachable block (ram,0x0001800149c0) */
/* WARNING: Removing unreachable block (ram,0x0001800149da) */
/* WARNING: Removing unreachable block (ram,0x000180014977) */
/* WARNING: Removing unreachable block (ram,0x000180014991) */
/* WARNING: Removing unreachable block (ram,0x0001800149be) */
/* WARNING: Removing unreachable block (ram,0x00018001492b) */
/* WARNING: Removing unreachable block (ram,0x000180014945) */
/* WARNING: Removing unreachable block (ram,0x000180014972) */
/* WARNING: Removing unreachable block (ram,0x00018001491c) */
/* WARNING: Removing unreachable block (ram,0x0001800148ee) */
/* WARNING: Removing unreachable block (ram,0x0001800148f9) */
/* WARNING: Removing unreachable block (ram,0x000180014917) */
/* WARNING: Removing unreachable block (ram,0x0001800148de) */
/* WARNING: Removing unreachable block (ram,0x0001800148ce) */
/* WARNING: Removing unreachable block (ram,0x000180014a37) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_1800147a0(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  local_18 = 0;
  for (local_38 = 0; (local_38 < param_2 && (*(char *)(param_1 + local_38) != '\0'));
      local_38 = (uint)bVar1 + local_38 + 1) {
    bVar1 = *(byte *)(param_1 + local_38) & 0xf;
    local_20 = 0;
    local_40 = 0;
    memcpy(&local_20,(void *)(param_1 + 1 + (longlong)local_38),(ulonglong)bVar1);
    memcpy(&local_40,(void *)(param_1 + local_38 + 1 + (ulonglong)bVar1),0);
    local_34 = 0xffffffff;
    local_30 = (undefined8 *)operator_new(0x18);
    *local_30 = 0xffffffffffffffff;
    local_30[1] = local_18;
    local_30[2] = local_20;
    local_10 = local_30;
    FUN_180013070(param_3,&local_30);
    local_28 = local_28 + local_40;
    local_18 = local_18 + local_20;
  }
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
  
                    /* WARNING: Could not recover jumptable at 0x000180014c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180014c70(undefined8 param_1,longlong param_2)

{
  FUN_180001350(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_180014c80(undefined8 param_1,longlong param_2)

{
  FUN_180001350((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180014c90(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180014cb0(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180014cd0(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_180014cf0(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180014d10(undefined8 param_1,longlong param_2)

{
  FUN_180001ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180014d20(undefined8 param_1,longlong param_2)

{
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
            ((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Catch_All_180014d30(undefined8 param_1,longlong param_2)

{
  FUN_180003260(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014d70(undefined8 param_1,longlong param_2)

{
  FUN_1800038e0((longlong *)(*(longlong *)(param_2 + 0x60) + 0x4b8));
  return;
}




void Unwind_180014d90(undefined8 param_1,longlong param_2)

{
  FUN_180003910((longlong *)(*(longlong *)(param_2 + 0x60) + 0x4c8));
  return;
}




void Unwind_180014db0(undefined8 param_1,longlong param_2)

{
  FUN_180003940((longlong *)(*(longlong *)(param_2 + 0x60) + 0x4d8));
  return;
}




void Unwind_180014dd0(undefined8 param_1,longlong param_2)

{
  FUN_180003960((longlong *)(*(longlong *)(param_2 + 0x60) + 0x4e8));
  return;
}




void Unwind_180014df0(undefined8 param_1,longlong param_2)

{
  FUN_180003940((longlong *)(*(longlong *)(param_2 + 0x60) + 0x4f8));
  return;
}




void Unwind_180014e10(undefined8 param_1,longlong param_2)

{
  FUN_180003990((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd38));
  return;
}




void Unwind_180014e30(undefined8 param_1,longlong param_2)

{
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
            ((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd48));
  return;
}




void Unwind_180014e50(undefined8 param_1,longlong param_2)

{
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
            ((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd60));
  return;
}




void Unwind_180014e70(undefined8 param_1,longlong param_2)

{
  FUN_180003a30((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd78));
  return;
}




void Unwind_180014e90(undefined8 param_1,longlong param_2)

{
  FUN_180003a60((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd88));
  return;
}




void Unwind_180014eb0(undefined8 param_1,longlong param_2)

{
  FUN_180003990((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd98));
  return;
}




void Unwind_180014ed0(undefined8 param_1,longlong param_2)

{
  FID_conflict__vector<struct_CHN*___ptr64,class_std::allocator<struct_CHN*___ptr64>_>
            ((longlong *)(*(longlong *)(param_2 + 0x60) + 0xda8));
  return;
}




void Unwind_180014ef0(undefined8 param_1,longlong param_2)

{
  FUN_180003940((longlong *)(*(longlong *)(param_2 + 0x60) + 0xdc8));
  return;
}




void Unwind_180014f10(undefined8 param_1,longlong param_2)

{
  FUN_180003940((longlong *)(*(longlong *)(param_2 + 0x60) + 0xdd8));
  return;
}




void Unwind_180014f30(undefined8 param_1,longlong param_2)

{
  FUN_180003940((longlong *)(*(longlong *)(param_2 + 0x60) + 0xde8));
  return;
}




void Unwind_180014f50(undefined8 param_1,longlong param_2)

{
  FUN_18000e4f0(param_2 + 0x28);
  return;
}




void Unwind_180014f60(undefined8 param_1,longlong param_2)

{
  FUN_1800046e0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180014f70(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0x110));
  return;
}




void Unwind_180014f80(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(param_2 + 0x98);
  return;
}




void Unwind_180014f90(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_180014fa0(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(param_2 + 0xc0);
  return;
}




void Unwind_180014fb0(undefined8 param_1,longlong param_2)

{
  FUN_180005de0(param_2 + 0xc0);
  return;
}




void Unwind_180014fc0(undefined8 param_1,longlong param_2)

{
  FUN_180005de0(param_2 + 0x98);
  return;
}




void Unwind_180014fd0(undefined8 param_1,longlong param_2)

{
  FUN_180006f50(param_2 + 200);
  return;
}




void Unwind_180014fe0(undefined8 param_1,longlong param_2)

{
  FUN_1800046e0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180014ff0(undefined8 param_1,longlong param_2)

{
  FUN_1800046e0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180015000(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_180015010(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(param_2 + 0xf8);
  return;
}




void Unwind_180015020(undefined8 param_1,longlong param_2)

{
  FUN_180005d70(param_2 + 0xd0);
  return;
}




void Unwind_180015030(undefined8 param_1,longlong param_2)

{
  FUN_180005de0(param_2 + 0xf8);
  return;
}




void Unwind_180015040(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_180015050(undefined8 param_1,longlong param_2)

{
  FUN_1800094e0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180015060(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x98));
  return;
}




void Catch_All_180015090(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800150b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800150d0(undefined8 param_1,longlong param_2)

{
  FUN_18000b7b0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800151a0(undefined8 param_1,longlong param_2)

{
  FUN_18000ce50(param_1,*(void **)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800151f0(undefined8 param_1,longlong param_2)

{
  FUN_180003260(param_1,*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180015220(undefined8 param_1,longlong param_2)

{
  FUN_18000ce50(param_1,*(void **)(param_2 + 0x58));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180015270(undefined8 param_1,longlong param_2)

{
  FUN_18000d040(param_1,*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800152a0(undefined8 param_1,longlong param_2)

{
  FUN_18000ce90(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180015330(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0x30));
  return;
}




undefined * Catch_180015340(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x70) = 0;
  return &DAT_18001201d;
}




undefined * Catch_All_180015366(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x70) = 0;
  return &DAT_18001201d;
}




undefined8
FUN_180015390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180011dc0("Exception occurred.GetErrorCode\n",param_2,param_3,param_4);
  return 1;
}




void Unwind_1800153c0(undefined8 param_1,longlong param_2)

{
  FUN_180012870((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1800153d0(undefined8 param_1,longlong param_2)

{
  FUN_1800128d0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800153e0(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180015400(undefined8 param_1,longlong param_2)

{
  FUN_180013b3c(*(void **)(param_2 + 0x60));
  return;
}




undefined1 * Catch_All_180015420(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x48) != (void *)0x0) {
    FUN_180011840(*(void **)(param_2 + 0x48));
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return &LAB_18001284a;
}




void Catch_All_180015460(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_180015498(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800154af(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800154cb(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




undefined * Catch_All_180015519(void)

{
  return &DAT_180013b8d;
}




void FUN_180015540(void)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < DAT_18001c050) {
    pvVar1 = (void *)CONCAT71(DAT_18001c038._1_7_,(undefined1)DAT_18001c038);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_18001c050 + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_180013b3c(pvVar2);
  }
  DAT_18001c048 = 0;
  DAT_18001c050 = 0xf;
  DAT_18001c038._0_1_ = 0;
  return;
}



