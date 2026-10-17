
undefined8 FUN_180001000(void)

{
  return 1;
}




void EUCreateBtrfsComplateSearcher(undefined8 *param_1)

{
                    /* 0x1010  1  EUCreateBtrfsComplateSearcher */
  *param_1 = 0;
  return;
}




void EUCreateBtrfsQuickSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x1020  2  EUCreateBtrfsQuickSearcher */
  puVar1 = (undefined8 *)operator_new(0xc30);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xe;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  *puVar1 = CBtrfsQuickSearch::vftable;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  FUN_180002f50(puVar1 + 0x13);
  puVar1[0x65] = 0;
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  FUN_1800013c0(puVar1 + 0x6d);
  memset(puVar1 + 0x82,0,0x820);
  puVar1[0x83] = 0x14;
  *param_1 = puVar1;
  return;
}




undefined8 FUN_180001110(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_180001120(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_180001130(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_180001140(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_180001150(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_180001160(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000116c. Too many branches */
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




void FUN_180001190(longlong param_1,longlong *param_2)

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
  local_18 = DAT_180021010 ^ (ulonglong)auStack_c8;
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
    goto LAB_1800012a3;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar3 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_180001266;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar3 = local_20;
    }
    local_20 = plVar3;
    local_60 = (longlong *)0x0;
  }
LAB_180001266:
  FUN_180002be0((longlong)local_98,plVar1);
  FUN_180002be0((longlong)plVar1,local_58);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))
              (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
  }
LAB_1800012a3:
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




void FUN_180001300(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}




undefined1 FUN_180001330(void)

{
  return 0;
}




void FUN_180001340(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




undefined8 * FUN_180001350(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 6);
    param_1[0xd] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800013c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = FUN_180002c90(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[0xf] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x62) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  param_1[0xe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}




void FUN_180001460(longlong param_1)

{
  FUN_180002b20((longlong *)(param_1 + 0x78));
  free(*(void **)(param_1 + 0x78));
  return;
}




undefined8 * FUN_180001490(undefined8 *param_1,uint param_2)

{
  FUN_1800014d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800014d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  void *pvVar5;
  
  *param_1 = CBtrfsQuickSearch::vftable;
  puVar1 = (undefined8 *)param_1[0x66];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x66] = 0;
  FUN_180002b20(param_1 + 0x7c);
  free((void *)param_1[0x7c]);
  pvVar5 = (void *)param_1[0x6a];
  if (pvVar5 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x6b];
    if (pvVar5 != pvVar3) {
      do {
        FUN_180002b20((longlong *)((longlong)pvVar5 + 0x78));
        free(*(void **)((longlong)pvVar5 + 0x78));
        pvVar5 = (void *)((longlong)pvVar5 + 0xa5);
      } while (pvVar5 != pvVar3);
      pvVar5 = (void *)param_1[0x6a];
    }
    lVar4 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(param_1[0x6c] - (longlong)pvVar5),8) +
            (param_1[0x6c] - (longlong)pvVar5);
    pvVar3 = pvVar5;
    if (0xfff < (ulonglong)(((lVar4 >> 7) - (lVar4 >> 0x3f)) * 0xa5)) {
      pvVar3 = *(void **)((longlong)pvVar5 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar3))) goto LAB_18000168e;
    }
    free(pvVar3);
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
  }
  pvVar5 = (void *)param_1[0x67];
  if (pvVar5 != (void *)0x0) {
    pvVar3 = pvVar5;
    if (0xfff < (param_1[0x69] - (longlong)pvVar5 & 0xfffffffffffffff8U)) {
      pvVar3 = *(void **)((longlong)pvVar5 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar3))) {
LAB_18000168e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(pvVar3);
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
  }
  FUN_180003230(param_1 + 0x13);
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 6);
    param_1[0xd] = 0;
  }
  return;
}




void FUN_1800016a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}




void FUN_1800016b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x330);
  puVar1 = (undefined8 *)param_2[1];
  if ((undefined8 *)param_2[2] != puVar1) {
    *puVar1 = local_res8[0];
    param_2[1] = param_2[1] + 8;
    return;
  }
  FUN_180002ce0(param_2,puVar1,local_res8);
  return;
}




int FUN_1800016f0(longlong param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  *(longlong **)(param_1 + 0x90) = param_2;
  *(ulonglong **)(param_1 + 0x328) = param_3;
  iVar15 = 0;
  plVar1 = (longlong *)(param_1 + 0x98);
  cVar4 = FUN_1800037b0(plVar1,param_2,param_3,param_4);
  if (cVar4 == '\0') {
    iVar15 = 0x360002;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar2 == 0) {
      iVar15 = 0x3d0002;
    }
    else {
      puVar10 = (undefined8 *)operator_new(0x90);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
      *puVar10 = CSearchedPartitionInfo::vftable;
      *(undefined4 *)(puVar10 + 1) = 0xe;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0xffffffffffffffff;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      *(uint *)(puVar10 + 0xb) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x5c) = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 1;
      puVar10[0xe] = 0;
      *(undefined4 *)(puVar10 + 0xf) = 1;
      *(undefined2 *)((longlong)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      if (((uVar5 & 0x1ff) != 0) || (uVar5 == 0)) {
        *(undefined4 *)(puVar10 + 0xb) = 0x200;
      }
      puVar10[0x11] = 0;
      *puVar10 = CSearchedBtrfsPartitionInfo::vftable;
      *(undefined8 **)(param_1 + 0x330) = puVar10;
      *(undefined4 *)(puVar10 + 1) = 0xb;
      *(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x10) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x330) + 0xc) = 1;
      uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x330) + 0x58) = uVar6;
      *(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x18) = 0;
      uVar12 = (**(code **)(*param_2 + 0x18))(param_2);
      *(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x60) = uVar12;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        uVar5 = *(uint *)(lVar2 + 0x90);
        uVar3 = *(ulonglong *)(lVar2 + 0x70);
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
        FUN_1800151e0(*(longlong **)(param_1 + 0x70),uVar3 / uVar5,*(uint *)(lVar2 + 0x90) / uVar7);
        *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x2e0) = 1;
      }
      param_3 = *(ulonglong **)(param_1 + 0xa0);
      if (param_3 != (ulonglong *)0x0) {
        puVar13 = (ulonglong *)((longlong)param_3 + 0xa4);
        param_3 = (ulonglong *)param_3[0xb];
        cVar4 = FUN_180004ed0(plVar1,3,(ulonglong)param_3,*puVar13,0);
        if ((cVar4 != '\0') && (cVar4 = FUN_180003dc0(plVar1), cVar4 != '\0')) {
          param_3 = *(ulonglong **)(*(longlong *)(param_1 + 0xa0) + 0x50);
          cVar4 = FUN_180004ed0(plVar1,1,(ulonglong)param_3,
                                *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x48) - 1,0);
          if (cVar4 != '\0') {
            cVar4 = FUN_1800040d0(plVar1);
            lVar11 = FUN_1800061f0(plVar1);
            if (lVar11 == 0) {
              param_3 = *(ulonglong **)(*(longlong *)(param_1 + 0xa0) + 0xb5b);
              FUN_180004ed0(plVar1,5,(ulonglong)param_3,
                            *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0xb63),0);
            }
            if (cVar4 != '\0') {
              cVar4 = FUN_1800051b0(plVar1,(undefined8 *)(param_1 + 0x368));
              if (cVar4 == '\0') {
                iVar15 = 0x590001;
              }
              else {
                FUN_180001b20(param_1,(void *)(lVar2 + 299),param_3,4);
                param_3 = *(ulonglong **)(param_1 + 0x3e0);
                puVar13 = (ulonglong *)*param_3;
                iVar9 = *(int *)(param_1 + 1000);
                iVar14 = iVar15;
                iVar16 = iVar15;
                if (puVar13 != param_3) {
                  do {
                    if ((*(longlong **)(param_1 + 0x328) != (longlong *)0x0) &&
                       (iVar8 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), iVar8 == 0
                       )) break;
                    FUN_180001cd0(param_1,puVar13 + 2);
                    if ((iVar14 % ((iVar9 + 9) / 10) == 0) &&
                       (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
                      iVar16 = iVar16 + 1;
                      *(longlong *)(param_1 + 0x420) = (longlong)iVar16;
                      *(undefined4 *)(param_1 + 0x410) = 2;
                      (**(code **)(**(longlong **)(param_1 + 0x328) + 8))();
                    }
                    puVar13 = (ulonglong *)*puVar13;
                    iVar14 = iVar14 + 1;
                  } while (puVar13 != *(ulonglong **)(param_1 + 0x3e0));
                }
                if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
                  iVar9 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))();
                  if (iVar9 == 0) goto LAB_180001a96;
                  if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
                    *(undefined8 *)(param_1 + 0x420) = 10;
                    *(undefined4 *)(param_1 + 0x410) = 2;
                    (**(code **)(**(longlong **)(param_1 + 0x328) + 8))();
                  }
                }
                FUN_1800071a0((longlong)plVar1);
                iVar15 = 0;
              }
              goto LAB_180001a96;
            }
          }
        }
      }
      iVar15 = 0x530002;
    }
  }
LAB_180001a96:
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_180001b20(param_1,(void *)(*(longlong *)(param_1 + 0xa0) + 299),param_3,0);
    uVar12 = FUN_180002120(param_1);
    if ((char)uVar12 != '\0') {
      iVar15 = 0;
    }
  }
  FUN_1800071a0((longlong)plVar1);
  if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x420) = (longlong)*(int *)(param_1 + 0x418);
    *(undefined4 *)(param_1 + 0x410) = 4;
    (**(code **)(**(longlong **)(param_1 + 0x328) + 8))();
  }
  return iVar15;
}




undefined8 FUN_180001b20(longlong param_1,void *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0x90) == 0) || (*(longlong *)(param_1 + 0x88) == 0)) {
    uVar5 = 0;
  }
  else {
    puVar1 = (undefined8 *)operator_new(0x290);
    plVar2 = FUN_18000e8b0(puVar1);
    if (plVar2 == (longlong *)0x0) {
      uVar5 = 1;
    }
    else {
      puVar1 = (undefined8 *)operator_new(0xb6);
      puVar1 = FUN_18000cbb0(puVar1);
      FUN_180005450((undefined8 *)((longlong)puVar1 + 0x11),(undefined8 *)(param_1 + 0x368));
      plVar2[6] = (longlong)puVar1;
      (**(code **)(*plVar2 + 0x38))(plVar2,0,1);
      if (param_2 != (void *)0x0) {
        lVar7 = -1;
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(char *)((longlong)param_2 + lVar3) != '\0');
        if (lVar3 != 0) {
          uVar4 = 0xffffffffffffffff;
          do {
            uVar4 = uVar4 + 1;
          } while (*(char *)((longlong)param_2 + uVar4) != '\0');
          if (uVar4 < 0x41) {
            if ((void *)plVar2[0x3b] != (void *)0x0) {
              free((void *)plVar2[0x3b]);
              plVar2[0x3b] = 0;
            }
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)((longlong)param_2 + lVar7) != '\0');
            uVar6 = (uint)lVar7;
            if (400 < uVar6) {
              uVar6 = 400;
            }
            *(uint *)(plVar2 + 0x3c) = uVar6;
            _Dst = operator_new((ulonglong)(uVar6 + 1));
            plVar2[0x3b] = (longlong)_Dst;
            memcpy(_Dst,param_2,(ulonglong)*(uint *)(plVar2 + 0x3c));
            *(undefined1 *)((ulonglong)*(uint *)(plVar2 + 0x3c) + plVar2[0x3b]) = 0;
          }
        }
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,0xb);
      *(int *)(plVar2 + 0x3e) = param_4;
      *(undefined4 *)(plVar2 + 0x3d) = 0;
      if (param_4 == 4) {
        lVar3 = (longlong)*(int *)(param_1 + 0x396);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x39a);
      }
      plVar2[10] = lVar3;
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                        (*(longlong **)(param_1 + 0x88),plVar2,0,0);
    }
  }
  return uVar5;
}




/* WARNING: Removing unreachable block (ram,0x000180001d90) */

ulonglong FUN_180001cd0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  undefined8 *_Memory;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong extraout_RAX_00;
  ulonglong uVar8;
  ulonglong extraout_RAX_01;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *local_res10;
  undefined8 local_res18 [2];
  longlong local_48;
  
  if ((param_2 != (ulonglong *)0x0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    local_res18[0] = 0;
    local_res10 = param_2;
    uVar13 = FUN_180001f90(param_1,(longlong)*(int *)((longlong)param_2 + 0x2e),
                           (longlong)*(int *)((longlong)param_2 + 0x2a),param_2,local_res18);
    in_RAX = extraout_RAX;
    if ((int)extraout_RAX != 0) {
      uVar8 = extraout_RAX;
      if (param_2[0x10] != 0) {
        _Memory = (undefined8 *)FUN_180002c50(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
        puVar1 = (undefined8 *)*_Memory;
        puVar2 = (undefined8 *)puVar1[1];
        uVar5 = FUN_180002eb0(param_1,puVar1,puVar2,&local_res10);
        lVar11 = 1;
        puVar1[1] = uVar5;
        *puVar2 = uVar5;
        do {
          if ((*(longlong **)(uVar13 + 0x328) != (longlong *)0x0) &&
             (iVar4 = (**(code **)(**(longlong **)(uVar13 + 0x328) + 0x10))(), iVar4 == 0)) break;
          plVar10 = (longlong *)*_Memory;
          puVar1 = (undefined8 *)plVar10[2];
          *(longlong *)plVar10[1] = *plVar10;
          *(longlong *)(*plVar10 + 8) = plVar10[1];
          lVar11 = lVar11 + -1;
          free(plVar10);
          if (*(short *)((longlong)puVar1 + 0x66) == 0x10) {
            if (*(longlong *)((longlong)puVar1 + 0x42) == 0) {
LAB_180001e49:
              plVar10 = *(longlong **)puVar1[0xf];
              local_48 = lVar11;
              if (plVar10 != (longlong *)puVar1[0xf]) {
                do {
                  if ((*(longlong **)(uVar13 + 0x328) != (longlong *)0x0) &&
                     (iVar4 = (**(code **)(**(longlong **)(uVar13 + 0x328) + 0x10))(), iVar4 == 0))
                  break;
                  puVar12 = (ulonglong *)(plVar10 + 2);
                  plVar9 = (longlong *)(uVar13 + 0x98);
                  local_res10 = puVar12;
                  if ((puVar1 != (undefined8 *)0x0) &&
                     (uVar5 = FUN_180006a00(plVar9,puVar1,puVar12), (char)uVar5 != '\0')) {
                    if (*(short *)((longlong)plVar10 + 0x76) == 0x10) {
                      puVar2 = (undefined8 *)*_Memory;
                      puVar3 = (undefined8 *)puVar2[1];
                      uVar5 = FUN_180002eb0(plVar9,puVar2,puVar3,&local_res10);
                      if (local_48 == 0xaaaaaaaaaaaaaa9) {
                        std::_Xlength_error("list<T> too long");
                        in_RAX = extraout_RAX_01;
                        goto LAB_180001f74;
                      }
                      lVar11 = local_48 + 1;
                      puVar2[1] = uVar5;
                      *puVar3 = uVar5;
                      puVar12 = local_res10;
                      local_48 = lVar11;
                    }
                    uVar13 = FUN_180001f90(uVar13,(longlong)*(int *)((longlong)puVar12 + 0x2e),
                                           (longlong)*(int *)((longlong)puVar1 + 0x2e),puVar12,
                                           local_res18);
                  }
                  plVar10 = (longlong *)*plVar10;
                } while (plVar10 != (longlong *)puVar1[0xf]);
              }
            }
            else {
              lVar6 = 0;
              do {
                lVar7 = lVar6 + 1;
                if (*(char *)(*(longlong *)((longlong)puVar1 + 0x42) + lVar6) != "@eaDir"[lVar6])
                goto LAB_180001e49;
                lVar6 = lVar7;
              } while (lVar7 != 7);
            }
          }
        } while (lVar11 != 0);
        puVar1 = (undefined8 *)*_Memory;
        *_Memory = _Memory;
        _Memory[1] = _Memory;
        while (puVar1 != _Memory) {
          puVar2 = (undefined8 *)*puVar1;
          free(puVar1);
          puVar1 = puVar2;
        }
        free(_Memory);
        uVar8 = extraout_RAX_00;
      }
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
  }
LAB_180001f74:
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180001f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong unaff_R15;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)operator_new(0xb6);
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
  *puVar3 = CBtrfsFileProerties::vftable;
  local_38 = puVar3;
  FUN_1800013c0((undefined8 *)((longlong)puVar3 + 0x11));
  FUN_180005450((undefined8 *)((longlong)puVar3 + 0x11),param_4);
  puVar4 = (undefined8 *)operator_new(0x93);
  *puVar4 = CFileNode::vftable;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[5] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0xffff;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0xffff;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x75) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x7d) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x81) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x91) = 0;
  puVar4[0xb] = 0;
  *(byte *)((longlong)puVar4 + 0x72) = *(byte *)((longlong)puVar4 + 0x72) & 0xf8;
  *(byte *)((longlong)puVar4 + 0x91) = *(byte *)((longlong)puVar4 + 0x91) & 0xfe;
  *(byte *)((longlong)puVar4 + 0x91) = *(byte *)((longlong)puVar4 + 0x91) | 2;
  *(undefined8 *)((longlong)puVar4 + 0x89) = 0;
  *(byte *)((longlong)puVar4 + 0x72) = *(byte *)((longlong)puVar4 + 0x72) & 7;
  puVar4[4] = 0;
  *(undefined1 *)((longlong)puVar4 + 0x73) = 0x20;
  *(byte *)((longlong)puVar4 + 0x74) = *(byte *)((longlong)puVar4 + 0x74) & 0xf8;
  puVar4[6] = puVar3;
  puVar4[10] = param_2;
  puVar4[9] = param_3;
  plVar1 = *(longlong **)(param_1 + 0x88);
  local_38 = puVar4;
  if ((plVar1 == (longlong *)0x0) ||
     (iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,puVar4,8,param_5), iVar2 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x340);
    if (*(undefined8 **)(param_1 + 0x348) == puVar3) {
      FUN_180002ce0((longlong *)(param_1 + 0x338),puVar3,&local_38);
    }
    else {
      *puVar3 = puVar4;
      *(longlong *)(param_1 + 0x340) = *(longlong *)(param_1 + 0x340) + 8;
    }
  }
  return unaff_R15;
}




ulonglong FUN_180002120(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *_Memory;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_RAX;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 local_res8;
  ulonglong local_res10;
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  longlong local_40;
  
  plVar10 = (longlong *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  uVar4 = FUN_1800061f0(plVar10);
  uVar5 = uVar4;
  if (uVar4 != 0) {
    plVar6 = plVar10;
    uVar5 = FUN_180006b90();
    *(undefined1 *)(param_1 + 0x169) = 1;
    lVar8 = *(longlong *)(param_1 + 0xa0);
    if (lVar8 != 0) {
      uVar5 = 0;
      local_60 = (longlong *)0x0;
      local_58 = 0;
      local_60 = (longlong *)FUN_180002c50(plVar6,(undefined8 *)0x0,(undefined8 *)0x0);
      FUN_180008410((longlong)plVar10,(longlong *)&local_60);
      _Memory = local_60;
      plVar6 = (longlong *)*local_60;
      for (plVar2 = plVar6; plVar2 != local_60; plVar2 = (longlong *)*plVar2) {
        uVar5 = uVar5 + **(longlong **)(plVar2[2] + 8);
      }
      iVar3 = *(int *)(lVar8 + 0x98);
      iVar7 = 0x4000;
      if (iVar3 != 0) {
        iVar7 = iVar3;
      }
      local_res10 = 0;
      local_res8 = CONCAT44(local_res8._4_4_,10);
      while ((plVar6 != _Memory &&
             (((*(longlong **)(param_1 + 0x328) == (longlong *)0x0 ||
               (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), iVar3 != 0)) &&
              (*(int *)(*(longlong *)(param_1 + 0x90) + 0x14) == 0))))) {
        if (*(longlong *)(plVar6[2] + 8) != 0) {
          FUN_180002740(param_1,plVar6[2],uVar4,&local_res10,(int *)&local_res8,
                        (int)((uVar5 / (ulonglong)(longlong)iVar7 + 9) / 10));
        }
        plVar6 = (longlong *)*plVar6;
      }
      local_50 = (undefined8 *)0x0;
      puStack_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1800085e0((longlong)plVar10,(longlong *)&local_50);
      puVar9 = local_50;
      if (local_50 != puStack_48) {
        do {
          if ((*(longlong **)(param_1 + 0x328) != (longlong *)0x0) &&
             (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), iVar3 == 0)) break;
          local_res8 = 0;
          FUN_180001f90(param_1,*(undefined8 *)((longlong)puVar9 + 0x32),
                        *(undefined8 *)((longlong)puVar9 + 0x11),puVar9,&local_res8);
          puVar9 = (undefined8 *)((longlong)puVar9 + 0xa5);
        } while (puVar9 != puStack_48);
      }
      puVar9 = puStack_48;
      if (local_50 != (undefined8 *)0x0) {
        if (local_50 != puStack_48) {
          plVar10 = local_50 + 0xf;
          do {
            FUN_180002b20(plVar10);
            FUN_180002ab0(plVar10);
            puVar1 = (undefined8 *)((longlong)plVar10 + 0x2d);
            plVar10 = (longlong *)((longlong)plVar10 + 0xa5);
          } while (puVar1 != puVar9);
        }
        lVar8 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(local_40 - (longlong)local_50),8) +
                (local_40 - (longlong)local_50);
        puVar9 = local_50;
        if ((0xfff < (ulonglong)(((lVar8 >> 7) - (lVar8 >> 0x3f)) * 0xa5)) &&
           (puVar9 = (undefined8 *)local_50[-1],
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)puVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(puVar9);
        local_50 = (undefined8 *)0x0;
        puStack_48 = (undefined8 *)0x0;
        local_40 = 0;
      }
      plVar10 = (longlong *)*_Memory;
      *_Memory = (longlong)_Memory;
      _Memory[1] = (longlong)_Memory;
      while (plVar10 != _Memory) {
        plVar6 = (longlong *)*plVar10;
        free(plVar10);
        plVar10 = plVar6;
      }
      free(_Memory);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}




ulonglong FUN_1800023f0(longlong param_1,longlong param_2,longlong *param_3,ulonglong *param_4,
                       int *param_5,int param_6,uint *param_7,longlong param_8)

{
  uint uVar1;
  longlong lVar2;
  void *_Memory;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  void *local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  uVar5 = FUN_180007260(param_1 + 0x98,param_2,1);
  if ((char)uVar5 != '\0') goto LAB_1800025e9;
  if ((ulonglong)(longlong)param_6 <= *param_4) {
    *param_4 = 0;
    *param_5 = *param_5 + 1;
    if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
      *(longlong *)(param_1 + 0x420) = (longlong)*param_5;
      *(undefined4 *)(param_1 + 0x410) = 2;
      (**(code **)(**(longlong **)(param_1 + 0x328) + 8))();
    }
  }
  *param_4 = *param_4 + 1;
  uVar1 = *param_7;
  if (param_8 != 0) {
    *(undefined8 *)(param_1 + 0x1ba) = 0x100;
    *(longlong *)(param_1 + 0x1aa) = param_8;
    if ((((*param_3 != 0) && (param_3[6] == (ulonglong)uVar1)) &&
        (*(char *)((longlong)param_3 + 100) == '\0')) && ((int)param_3[0xc] != 0)) {
      puVar14 = *(undefined8 **)(param_1 + 0xf8);
      puVar12 = puVar14;
      if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
        puVar6 = (undefined8 *)puVar14[1];
        do {
          if ((ulonglong)puVar6[4] < (ulonglong)param_3[0xb]) {
            puVar7 = (undefined8 *)puVar6[2];
          }
          else {
            puVar7 = (undefined8 *)*puVar6;
            puVar12 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
      }
      if ((puVar12 == puVar14) || ((ulonglong)param_3[0xb] < (ulonglong)puVar12[4])) {
        puVar12 = puVar14;
      }
      if (puVar12 == puVar14) {
        if (1000 < (ulonglong)param_3[0xb]) goto LAB_1800025dc;
        if (puVar12 != puVar14) goto LAB_180002529;
        lVar13 = param_3[10];
        lVar2 = param_3[0xb];
        plVar8 = (longlong *)operator_new(0x1e8);
        *plVar8 = lVar2;
        plVar8[2] = (ulonglong)uVar1;
        plVar8[4] = 0;
        plVar8[3] = lVar13;
        plVar8[0x3c] = 0;
        plVar8[1] = 0;
        local_78 = (void *)param_3[0xb];
        local_70 = plVar8;
        plVar9 = (longlong *)FUN_18000ab80((undefined8 *)(param_1 + 0xf8),&local_78);
        FUN_18000abb0((longlong *)(param_1 + 0xf8),&local_78,puVar14,(ulonglong *)(plVar9 + 4),
                      plVar9);
      }
      else {
LAB_180002529:
        plVar8 = (longlong *)puVar12[5];
      }
      local_78 = (void *)0x0;
      cVar3 = FUN_18000d700((ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x94),param_3,
                            plVar8,&local_78);
      _Memory = local_78;
      if (cVar3 != '\0') {
        if (**(longlong **)((longlong)local_78 + 0x90) !=
            (*(longlong **)((longlong)local_78 + 0x90))[1]) {
          local_68 = (undefined8 *)0x0;
          puStack_60 = (undefined8 *)0x0;
          local_58 = 0;
          FUN_180007340((longlong *)(param_1 + 0x98),(longlong)local_78,(longlong *)&local_68);
          puVar14 = local_68;
          if (local_68 != puStack_60) {
            do {
              if ((*(longlong **)(param_1 + 0x328) != (longlong *)0x0) &&
                 (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), iVar4 == 0))
              break;
              local_78 = (void *)0x0;
              FUN_180001f90(param_1,*(undefined8 *)((longlong)puVar14 + 0x32),
                            *(undefined8 *)((longlong)puVar14 + 0x11),puVar14,&local_78);
              puVar14 = (undefined8 *)((longlong)puVar14 + 0xa5);
            } while (puVar14 != puStack_60);
          }
          puVar10 = FUN_18000d230();
          FUN_18000d3c0((longlong)puVar10);
          free(_Memory);
          puVar14 = puStack_60;
          uVar11 = extraout_RAX;
          if (local_68 != (undefined8 *)0x0) {
            if (local_68 != puStack_60) {
              plVar8 = local_68 + 0xf;
              do {
                FUN_180002b20(plVar8);
                FUN_180002ab0(plVar8);
                puVar12 = (undefined8 *)((longlong)plVar8 + 0x2d);
                plVar8 = (longlong *)((longlong)plVar8 + 0xa5);
              } while (puVar12 != puVar14);
            }
            lVar13 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(local_58 - (longlong)local_68),8)
                     + (local_58 - (longlong)local_68);
            puVar14 = local_68;
            if ((0xfff < (ulonglong)(((lVar13 >> 7) - (lVar13 >> 0x3f)) * 0xa5)) &&
               (puVar14 = (undefined8 *)local_68[-1],
               0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)puVar14)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(puVar14);
            uVar11 = extraout_RAX_00;
          }
          return CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
        free(local_78);
      }
    }
  }
LAB_1800025dc:
  puVar10 = FUN_18000d230();
  uVar5 = FUN_18000d3c0((longlong)puVar10);
LAB_1800025e9:
  return uVar5 & 0xffffffffffffff00;
}




longlong FUN_180002740(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                      int *param_5,int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  void *_Dst;
  undefined8 extraout_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_res8;
  int *in_stack_ffffffffffffff78;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_58 = *(longlong *)(param_1 + 0xa0);
  if (local_58 == 0) {
    return local_58;
  }
  _Dst = operator_new(0x100000);
  iVar8 = 0x100000;
  local_60 = 0;
  local_res8 = 0x100000;
  uVar9 = **(ulonglong **)(param_2 + 8);
  local_48 = (*(ulonglong **)(param_2 + 8))[7];
  local_68 = *(longlong *)(param_2 + 0x18);
  local_50 = uVar9;
  if (uVar9 != 0) {
    do {
      uVar3 = local_48;
      uVar1 = local_60;
      if ((*(longlong **)(param_1 + 0x328) != (longlong *)0x0) &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), iVar4 == 0)) break;
      memset(_Dst,0,0x100000);
      if (uVar9 - uVar1 < 0x100000) {
        iVar8 = (int)uVar9 - (int)uVar1;
        local_res8 = iVar8;
      }
      uVar6 = (ulonglong)iVar8;
      in_stack_ffffffffffffff78 = (int *)((ulonglong)in_stack_ffffffffffffff78 & 0xffffffffffffff00)
      ;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))
                        (*(longlong **)(param_1 + 0x90),_Dst,uVar1 + uVar3,uVar6,
                         in_stack_ffffffffffffff78);
      lVar2 = local_58;
      if (iVar4 == 0) break;
      uVar5 = 0;
      uVar7 = uVar1;
      if (iVar8 != 0) {
        do {
          iVar8 = local_res8;
          if ((*(longlong **)(param_1 + 0x328) != (longlong *)0x0) &&
             (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))(), uVar7 = local_60,
             uVar9 = local_50, iVar4 == 0)) break;
          in_stack_ffffffffffffff78 = param_5;
          FUN_1800023f0(param_1,uVar5 + uVar1 + uVar3,(longlong *)(uVar5 + (longlong)_Dst),param_4,
                        param_5,param_6,(uint *)&local_68,param_3);
          local_68 = local_68 + (ulonglong)*(uint *)(lVar2 + 0x98);
          uVar5 = uVar5 + *(uint *)(lVar2 + 0x98);
          uVar7 = local_60;
          uVar9 = local_50;
        } while (uVar5 < uVar6);
      }
      local_60 = uVar7 + 0x100000;
    } while (local_60 < uVar9);
  }
  free(_Dst);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}




void FUN_180002950(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)*param_1;
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  return;
}




void FUN_1800029b0(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    if (pvVar2 != pvVar3) {
      plVar4 = (longlong *)((longlong)pvVar2 + 0x78);
      do {
        FUN_180002b20(plVar4);
        FUN_180002ab0(plVar4);
        pvVar2 = (void *)((longlong)pvVar2 + 0xa5);
        plVar4 = (longlong *)((longlong)plVar4 + 0xa5);
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    lVar1 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(param_1[2] - (longlong)pvVar2),8) +
            (param_1[2] - (longlong)pvVar2);
    pvVar3 = pvVar2;
    if ((0xfff < (ulonglong)(((lVar1 >> 7) - (lVar1 >> 0x3f)) * 0xa5)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_180002a90(undefined8 *param_1)

{
  FUN_180002b20(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180002ab0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002ad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != param_3) {
    plVar2 = (longlong *)(param_2 + 0x78);
    do {
      FUN_180002b20(plVar2);
      FUN_180002ab0(plVar2);
      lVar1 = (longlong)plVar2 + 0x2d;
      plVar2 = (longlong *)((longlong)plVar2 + 0xa5);
    } while (lVar1 != param_3);
  }
  return;
}




void FUN_180002b20(longlong *param_1)

{
  longlong *plVar1;
  longlong *_Memory;
  
  plVar1 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (_Memory != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*_Memory;
      FUN_180002a90(_Memory + 0x11);
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  return;
}




void FUN_180002b90(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0xa5)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




void FUN_180002be0(longlong param_1,longlong *param_2)

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




void FUN_180002c50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_180002c90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb8);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




void FUN_180002cd0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




longlong FUN_180002ce0(longlong *param_1,void *param_2,undefined8 *param_3)

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
    FUN_180002e90();
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
    if (0xfff < uVar7) goto LAB_180002d83;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar7);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_180002d83:
    uVar8 = uVar4 + 0x27;
    if (uVar8 <= uVar4) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar8);
    if (pvVar5 == (void *)0x0) goto LAB_180002e80;
    _Dst = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar5;
  }
  *(undefined8 *)((longlong)_Dst + lVar10 * 8) = *param_3;
  pvVar5 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  FUN_180002ed0(local_res8);
  if (param_2 == pvVar5) {
    _Size = (longlong)pvVar5 - (longlong)pvVar9;
    pvVar5 = _Dst;
    param_2 = pvVar9;
  }
  else {
    memmove(_Dst,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    pvVar5 = (void *)((longlong)_Dst + (lVar10 + 1) * 8);
    FUN_180002ed0(local_res8);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar5,param_2,_Size);
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    pvVar9 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9)))) {
LAB_180002e80:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 8);
  param_1[2] = (longlong)(uVar7 + (longlong)_Dst);
  return *param_1 + lVar10 * 8;
}




void FUN_180002e90(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180002eb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180002c50(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  return;
}




undefined1 * FUN_180002ed0(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}




undefined * FUN_180002ee0(void)

{
  return &DAT_1800219e8;
}




void FUN_180002ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_180002ee0();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}




undefined8 * FUN_180002f50(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = param_1;
  uVar1 = FUN_180009ad0(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[2] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_180002c50(puVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[4] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_180002c50(puVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[6] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = FUN_180002c50(puVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[8] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_180002c50(puVar2,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[10] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_180009aa0();
  param_1[0xc] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = FUN_180009aa0();
  param_1[0xe] = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = FUN_180009a70();
  param_1[0x10] = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = FUN_180009980();
  param_1[0x12] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_180009950();
  param_1[0x14] = uVar1;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  FUN_1800013c0(param_1 + 0x1e);
  FUN_1800013c0((undefined8 *)((longlong)param_1 + 0x195));
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x51] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  _Dst = operator_new(0x4000);
  param_1[0x4c] = _Dst;
  memset(_Dst,0,0x4000);
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4a] = 0xffffffffffffffff;
  return param_1;
}




void FUN_180003160(longlong *param_1)

{
  FUN_180008b00(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180003180(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180008ed0(param_1,*(longlong **)(lVar1 + 8));
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}




void FUN_1800031e0(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009320(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180003210(longlong *param_1)

{
  FUN_180008a70(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180003230(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  FUN_1800033d0(param_1);
  if ((HANDLE)param_1[0x4a] != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)param_1[0x4a]);
  }
  if ((void *)param_1[0x4c] != (void *)0x0) {
    free((void *)param_1[0x4c]);
  }
  param_1[0x4c] = 0;
  FUN_180002b20((longlong *)((longlong)param_1 + 0x20d));
  free(*(void **)((longlong)param_1 + 0x20d));
  FUN_180002b20(param_1 + 0x2d);
  free((void *)param_1[0x2d]);
  FUN_180008a70(param_1 + 0x14);
  free((void *)param_1[0x14]);
  FUN_180009320(param_1 + 0x12,&local_res8,*(longlong **)param_1[0x12],(longlong *)param_1[0x12]);
  free((void *)param_1[0x12]);
  plVar1 = param_1 + 0x10;
  lVar2 = *plVar1;
  FUN_180008ed0(plVar1,*(longlong **)(lVar2 + 8));
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  param_1[0x11] = 0;
  free((void *)*plVar1);
  FUN_180008b00(param_1 + 0xe);
  free((void *)param_1[0xe]);
  FUN_180008b00(param_1 + 0xc);
  free((void *)param_1[0xc]);
  FUN_180002950(param_1 + 10);
  FUN_180002950(param_1 + 8);
  FUN_180002950(param_1 + 6);
  FUN_180002950(param_1 + 4);
  FUN_180008ca0(param_1 + 2);
  return;
}




void FUN_1800033d0(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  void *_Memory;
  longlong *plVar8;
  
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  FUN_180008a70(param_1 + 0x14);
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  plVar7 = (longlong *)param_1[6];
  plVar8 = (longlong *)*plVar7;
  if (plVar8 != plVar7) {
    do {
      pvVar2 = (void *)plVar8[2];
      plVar7 = *(longlong **)((longlong)pvVar2 + 0x90);
      if (plVar7 != (longlong *)0x0) {
        plVar7[1] = *plVar7;
        *(undefined4 *)(plVar7 + 3) = 0;
        pvVar3 = (void *)*plVar7;
        if (pvVar3 != (void *)0x0) {
          _Memory = pvVar3;
          if ((0xfff < (plVar7[2] - (longlong)pvVar3 & 0xffffffffffffffc0U)) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = 0;
        }
        free(plVar7);
      }
      free(pvVar2);
      plVar7 = (longlong *)param_1[6];
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != plVar7);
    plVar8 = (longlong *)*plVar7;
  }
  *plVar7 = (longlong)plVar7;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  if (plVar8 != (longlong *)param_1[6]) {
    do {
      plVar7 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != (longlong *)param_1[6]);
  }
  puVar5 = (undefined8 *)FUN_18000d230();
  FUN_18000d2f0(puVar5);
  puVar6 = FUN_18000d230();
  FUN_18000d3c0((longlong)puVar6);
  if ((void *)param_1[0x51] != (void *)0x0) {
    free((void *)param_1[0x51]);
  }
  param_1[0x51] = 0;
  plVar7 = (longlong *)param_1[2];
  plVar8 = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(undefined8 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  if (plVar8 != (longlong *)param_1[2]) {
    do {
      plVar7 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != (longlong *)param_1[2]);
  }
  plVar7 = (longlong *)param_1[4];
  plVar8 = (longlong *)*plVar7;
  if (plVar8 != plVar7) {
    do {
      pvVar2 = (void *)plVar8[2];
      pvVar3 = *(void **)((longlong)pvVar2 + 8);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      free(pvVar2);
      plVar7 = (longlong *)param_1[4];
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != plVar7);
    plVar8 = (longlong *)*plVar7;
  }
  *plVar7 = (longlong)plVar7;
  *(undefined8 *)(param_1[4] + 8) = param_1[4];
  param_1[5] = 0;
  if (plVar8 != (longlong *)param_1[4]) {
    do {
      plVar7 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != (longlong *)param_1[4]);
  }
  plVar7 = (longlong *)param_1[10];
  plVar8 = (longlong *)*plVar7;
  if (plVar8 != plVar7) {
    do {
      pvVar2 = (void *)plVar8[2];
      pvVar3 = *(void **)((longlong)pvVar2 + 8);
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      free(pvVar2);
      plVar7 = (longlong *)param_1[10];
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != plVar7);
    plVar8 = (longlong *)*plVar7;
  }
  *plVar7 = (longlong)plVar7;
  *(undefined8 *)(param_1[10] + 8) = param_1[10];
  param_1[0xb] = 0;
  if (plVar8 != (longlong *)param_1[10]) {
    do {
      plVar7 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != (longlong *)param_1[10]);
  }
  plVar7 = *(longlong **)param_1[0xc];
  if (plVar7 != (longlong *)param_1[0xc]) {
    do {
      free((void *)plVar7[5]);
      plVar8 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar7 = plVar8;
        plVar8 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x19);
          plVar7 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar4 = (longlong *)plVar7[1];
        plVar8 = plVar7;
        while ((plVar7 = plVar4, cVar1 == '\0' && (plVar8 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar8 = plVar7;
        }
      }
    } while (plVar7 != (longlong *)param_1[0xc]);
  }
  FUN_180008b00(param_1 + 0xc);
  plVar7 = (longlong *)param_1[8];
  plVar8 = (longlong *)*plVar7;
  if (plVar8 != plVar7) {
    do {
      free((void *)plVar8[2]);
      plVar7 = (longlong *)param_1[8];
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != plVar7);
    plVar8 = (longlong *)*plVar7;
  }
  *plVar7 = (longlong)plVar7;
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  if (plVar8 != (longlong *)param_1[8]) {
    do {
      plVar7 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar7;
    } while (plVar7 != (longlong *)param_1[8]);
  }
  FUN_180008b00(param_1 + 0xe);
  return;
}




void FUN_1800037b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  HANDLE pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  LPCSTR ***ppppCVar11;
  longlong lVar12;
  char *_Memory;
  uint uVar13;
  LPCSTR _Dst;
  longlong *plVar14;
  undefined1 auStackY_c8 [32];
  longlong local_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ushort local_60;
  LPCSTR **local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180021010 ^ (ulonglong)auStackY_c8;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x80))(param_2,local_58);
    if (local_48 == 0) {
      FUN_180009030((longlong *)local_58,".\\BtrfsCache.txt",0x10);
    }
    else if (local_40 - local_48 < 0xf) {
      FUN_18000a1e0(local_58,0xf,param_3,param_4,0xf);
    }
    else {
      ppppCVar11 = local_58;
      if (0xf < local_40) {
        ppppCVar11 = (LPCSTR ***)local_58[0];
      }
      _Dst = (LPCSTR)((longlong)ppppCVar11 + local_48);
      local_48 = local_48 + 0xf;
      memmove(_Dst,"\\BtrfsCache.txt",0xf);
      _Dst[0xf] = '\0';
    }
    ppppCVar11 = local_58;
    if (0xf < local_40) {
      ppppCVar11 = (LPCSTR ***)local_58[0];
    }
    pvVar5 = CreateFileA((LPCSTR)ppppCVar11,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                         (HANDLE)0x0);
    param_1[0x4a] = pvVar5;
    *param_1 = param_2;
    pvVar6 = FUN_18000d540(param_2);
    param_1[1] = pvVar6;
    if (pvVar6 != (void *)0x0) {
      cVar3 = (**(code **)(*param_2 + 0x70))(param_2);
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1[1] + 0x70));
      }
      lVar1 = param_1[1];
      if (lVar1 != 0) {
        plVar14 = (longlong *)param_1[2];
        plVar9 = (longlong *)*plVar14;
        *plVar14 = (longlong)plVar14;
        *(undefined8 *)(param_1[2] + 8) = param_1[2];
        param_1[3] = 0;
        if (plVar9 != (longlong *)param_1[2]) {
          do {
            plVar14 = (longlong *)*plVar9;
            free(plVar9);
            plVar9 = plVar14;
          } while (plVar14 != (longlong *)param_1[2]);
        }
        uVar13 = *(uint *)(lVar1 + 0xa0);
        if (uVar13 != 0) {
          while (0x11 < uVar13) {
            uVar7 = (ulonglong)(*(int *)(lVar1 + 0xa0) - uVar13);
            plVar14 = (longlong *)(uVar7 + 0x32b + lVar1);
            plVar9 = plVar14 + 1;
            uVar13 = uVar13 - 0x11;
            if (((char)*plVar9 != -0x1c) || (uVar13 < 0x30)) break;
            lVar12 = lVar1 + 0x32b + (ulonglong)(*(int *)(lVar1 + 0xa0) - uVar13);
            uVar4 = *(short *)(lVar12 + 0x2c) * 0x20 + 0x30;
            if (uVar13 < uVar4) break;
            lStack_70 = CONCAT71(lStack_70._1_7_,*(undefined1 *)(uVar7 + 0x33b + lVar1));
            puVar10 = (undefined8 *)param_1[2];
            puVar2 = (undefined8 *)puVar10[1];
            local_80 = *plVar14;
            lStack_78 = *plVar9;
            lStack_68 = lVar12;
            local_60 = uVar4;
            uVar8 = FUN_18000dac0(lVar12,puVar10,puVar2,&local_80);
            if (param_1[3] == 0x492492492492491) {
              _Memory = "list<T> too long";
              std::_Xlength_error("list<T> too long");
              goto LAB_180003ae2;
            }
            param_1[3] = param_1[3] + 1;
            puVar10[1] = uVar8;
            *puVar2 = uVar8;
            uVar13 = uVar13 - uVar4;
            if (uVar13 == 0) break;
          }
        }
      }
      plVar14 = (longlong *)param_1[2];
      plVar9 = (longlong *)*plVar14;
      if (plVar9 != plVar14) {
        do {
          local_80 = plVar9[2];
          lStack_78 = plVar9[3];
          lStack_70 = plVar9[4];
          lStack_68 = plVar9[5];
          puVar10 = (undefined8 *)FUN_180006b90();
          plVar9 = (longlong *)*puVar10;
        } while (plVar9 != plVar14);
      }
    }
    if (0xf < local_40) {
      _Memory = (char *)local_58[0];
      if ((0xfff < local_40 + 1) &&
         (_Memory = (char *)local_58[0][-1],
         (LPCSTR)0x1f < (LPCSTR)((longlong)local_58[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
LAB_180003ae2:
      free(_Memory);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_c8);
  return;
}




undefined1 * FUN_180003b20(ulonglong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  void *_Dst;
  ulonglong extraout_RAX;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *local_res10;
  undefined8 local_38 [2];
  
  if ((param_2 == 0) || (*(ushort *)(param_2 + 0x30) < 0x30)) {
    return &stack0x00000000;
  }
  puVar4 = (undefined8 *)operator_new(0x28);
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_2 + 0x30);
  puVar4[3] = *(undefined8 *)(param_2 + 9);
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  local_res10 = puVar4;
  _Dst = operator_new((ulonglong)*(ushort *)(param_2 + 0x30));
  memset(_Dst,0,(ulonglong)*(ushort *)(param_2 + 0x30));
  puVar4[1] = _Dst;
  if (_Dst == (void *)0x0) {
    free(puVar4);
    _Dst = (void *)0x0;
LAB_180003bbe:
    free(_Dst);
    puVar7 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
  }
  else {
    uVar8 = (ulonglong)*(ushort *)(param_2 + 0x30);
    memcpy(_Dst,*(void **)(param_2 + 0x38),uVar8);
    if ((((*(ulonglong *)(puVar4[1] + 0x18) & 4) != 0) ||
        ((*(ulonglong *)(puVar4[1] + 0x18) & 2) != 0)) && (*(char *)(param_1 + 0xd1) == '\0')) {
      FUN_18000a590((longlong *)(param_1 + 0xa0),local_38,uVar8,(ulonglong *)&local_res10);
      puVar4 = local_res10;
    }
    uVar8 = param_1;
    FUN_180006b90();
    if (param_4 != '\0') {
      lVar5 = puVar4[1];
      uVar8 = *(ulonglong *)(lVar5 + 0x18);
      if (((uVar8 & 1) != 0) && (*(ulonglong *)(param_1 + 0xd8) < uVar8)) {
        *(ulonglong *)(param_1 + 0xd8) = uVar8;
        lVar5 = puVar4[1];
      }
      uVar8 = *(ulonglong *)(lVar5 + 0x18);
      if (((uVar8 & 4) != 0) && (*(ulonglong *)(param_1 + 0xe0) < uVar8)) {
        *(ulonglong *)(param_1 + 0xe0) = uVar8;
        lVar5 = puVar4[1];
      }
      uVar8 = *(ulonglong *)(lVar5 + 0x18);
      if (((uVar8 & 2) != 0) && (*(ulonglong *)(param_1 + 0xe8) < uVar8)) {
        *(ulonglong *)(param_1 + 0xe8) = uVar8;
        lVar5 = puVar4[1];
      }
      if ((*(byte *)(lVar5 + 0x18) & 0x40) != 0) {
        uVar1 = *(ushort *)(lVar5 + 0x2e);
        uVar8 = (ulonglong)uVar1;
        if ((uVar1 == 0) || (*(ushort *)(lVar5 + 0x2c) < uVar1)) {
          free(puVar4);
          goto LAB_180003bbe;
        }
      }
    }
    *(undefined2 *)(puVar4 + 4) = 0;
    puVar4 = (undefined8 *)*param_3;
    puVar2 = (undefined8 *)puVar4[1];
    uVar6 = FUN_180002eb0(uVar8,puVar4,puVar2,&local_res10);
    if (param_3[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      puVar7 = (undefined1 *)(*pcVar3)();
      return puVar7;
    }
    uVar8 = param_3[1] + 1;
    param_3[1] = uVar8;
    puVar4[1] = uVar6;
    *puVar2 = uVar6;
    if ((*(longlong *)(param_1 + 0x278) == 0) ||
       (uVar8 = local_res10[3], uVar8 < *(ulonglong *)(*(longlong *)(param_1 + 0x278) + 0x18))) {
      *(undefined8 **)(param_1 + 0x278) = local_res10;
    }
    if ((*(longlong *)(param_1 + 0x280) == 0) ||
       (uVar8 = local_res10[3], *(ulonglong *)(*(longlong *)(param_1 + 0x280) + 0x18) < uVar8)) {
      *(undefined8 **)(param_1 + 0x280) = local_res10;
    }
    puVar7 = (undefined1 *)CONCAT71((int7)(uVar8 >> 8),1);
  }
  return puVar7;
}




void FUN_180003dc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *_Dst;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  size_t _Size;
  int iVar9;
  undefined1 auStackY_88 [32];
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  void *local_38;
  ulonglong local_30;
  undefined1 local_28;
  undefined8 local_27;
  ulonglong local_18;
  
  local_18 = DAT_180021010 ^ (ulonglong)auStackY_88;
  if (param_1[1] != 0) {
    lVar1 = param_1[0x18];
    local_30 = 0;
    local_28 = 0;
    local_27 = 0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    if ((lVar1 != 0) &&
       (((*(longlong *)(lVar1 + 0x20) != 0 ||
         (uVar5 = FUN_1800042a0(param_1,(ulonglong *)(lVar1 + 0x10),lVar1,0,0), (char)uVar5 != '\0')
         ) && (uVar5 = FUN_1800047f0(param_1,*(ulonglong *)(lVar1 + 0x20),&local_58,&local_30),
              (char)uVar5 != '\0')))) {
LAB_180003e80:
      do {
        if ((*plStack_50 == 1) && ((char)plStack_50[1] == -0x28)) {
          if (0x62 < *(ushort *)(plStack_50 + 6)) {
            _Dst = operator_new(0x62);
            _Size = (size_t)*(ushort *)(plStack_50 + 6);
            if (0x61 < *(ushort *)(plStack_50 + 6)) {
              _Size = 0x62;
            }
            local_38 = _Dst;
            memcpy(_Dst,(void *)plStack_50[7],_Size);
            puVar2 = (undefined8 *)param_1[8];
            puVar3 = (undefined8 *)puVar2[1];
            uVar5 = FUN_180002eb0(_Dst,puVar2,puVar3,&local_38);
            if (param_1[9] == 0xaaaaaaaaaaaaaa9) {
              std::_Xlength_error("list<T> too long");
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            param_1[9] = param_1[9] + 1;
            puVar2[1] = uVar5;
            *puVar3 = uVar5;
          }
        }
        else if ((char)plStack_50[1] == -0x1c) {
          FUN_180003b20((ulonglong)param_1,(longlong)plStack_50,param_1 + 4,'\x01');
        }
        plVar6 = *(longlong **)(local_58 + 0x90);
        iVar9 = (int)plVar6[3] + 1;
        if ((ulonglong)(longlong)iVar9 < (ulonglong)(plVar6[1] - *plVar6 >> 6)) {
          *(int *)(plVar6 + 3) = iVar9;
          for (plVar6 = (longlong *)((longlong)iVar9 * 0x40 + *plVar6); plVar6 != (longlong *)0x0;
              plVar6 = (longlong *)((longlong)iVar9 * 0x40 + *plVar6)) {
            if (*(char *)((longlong)plVar6 + 0x11) == '\0') {
              local_48 = local_58;
              plStack_50 = plVar6;
              plStack_40 = plVar6;
              goto LAB_180003e80;
            }
            plVar6 = *(longlong **)(local_58 + 0x90);
            iVar9 = (int)plVar6[3] + 1;
            if ((ulonglong)(plVar6[1] - *plVar6 >> 6) <= (ulonglong)(longlong)iVar9) break;
            *(int *)(plVar6 + 3) = iVar9;
          }
        }
        if ((*(longlong *)(local_58 + 0x70) == 0) ||
           (uVar7 = FUN_180004b80(param_1,(longlong *)&local_58,(longlong *)&local_48,'\0'),
           (char)uVar7 == '\0')) goto LAB_180003ffb;
        local_58 = local_48;
        plStack_50 = plStack_40;
      } while( true );
    }
  }
LAB_1800040a8:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_88);
  return;
LAB_180003ffb:
  lVar1 = param_1[1];
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if (param_1[0x1b] == 0) {
    lVar8 = 1;
    if (1 < *(ulonglong *)(lVar1 + 0x88)) {
      lVar8 = 9;
    }
    param_1[0x1b] = lVar8;
  }
  uVar7 = param_1[0x1c];
  if (uVar7 == 0) {
    uVar7 = 0x24;
    if (1 < *(ulonglong *)(lVar1 + 0x88)) {
      uVar7 = 0x14;
    }
    param_1[0x1c] = uVar7;
  }
  if (param_1[0x1d] == 0) {
    lVar8 = 0x22;
    if (1 < *(ulonglong *)(lVar1 + 0x88)) {
      lVar8 = 0x12;
    }
    param_1[0x1d] = lVar8;
  }
  if ((*(byte *)(lVar1 + 0xbc) & 4) != 0) {
    param_1[0x1c] = uVar7 | 1;
    param_1[0x1b] = uVar7 | 1;
  }
  goto LAB_1800040a8;
}




void FUN_1800040d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStackY_78 [32];
  ulonglong local_48;
  ulonglong *puStack_40;
  ulonglong local_38;
  ulonglong *puStack_30;
  ulonglong local_28;
  undefined1 local_20;
  undefined8 local_1f;
  ulonglong local_10;
  
  local_10 = DAT_180021010 ^ (ulonglong)auStackY_78;
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_1f = 0;
    if (((*(longlong *)(lVar1 + 0x20) != 0) ||
        (uVar4 = FUN_1800042a0(param_1,(ulonglong *)(lVar1 + 0x10),lVar1,0,0), (char)uVar4 != '\0'))
       && (uVar4 = FUN_1800047f0(param_1,*(ulonglong *)(lVar1 + 0x20),&local_48,&local_28),
          (char)uVar4 != '\0')) {
      uVar6 = 0;
      puVar5 = puStack_40;
      do {
        if ((char)puVar5[1] == -0x7c) {
          if (0xb7 < (ushort)puVar5[6]) {
            cVar3 = FUN_180004ed0(param_1,*puVar5,*(ulonglong *)(puVar5[7] + 0xb0),
                                  *(ulonglong *)(puVar5[7] + 0xa0),(longlong)&local_48);
            if (cVar3 != '\0') goto LAB_1800041a3;
            break;
          }
        }
        else {
LAB_1800041a3:
          local_38 = 0;
          puStack_30 = (ulonglong *)0x0;
          plVar2 = *(longlong **)(local_48 + 0x90);
          iVar7 = (int)plVar2[3] + 1;
          if ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar2[1] - *plVar2 >> 6)) {
            *(int *)(plVar2 + 3) = iVar7;
            puVar5 = (ulonglong *)((longlong)iVar7 * 0x40 + *plVar2);
          }
          else {
            puVar5 = (ulonglong *)0x0;
          }
          while (puVar5 != (ulonglong *)0x0) {
            if (*(char *)((longlong)puVar5 + 0x11) == '\0') {
              if (puVar5 != (ulonglong *)0x0) {
                uVar6 = 1;
                local_38 = local_48;
                puStack_30 = puVar5;
                goto LAB_180004249;
              }
              break;
            }
            plVar2 = *(longlong **)(local_48 + 0x90);
            iVar7 = (int)plVar2[3] + 1;
            if ((ulonglong)(plVar2[1] - *plVar2 >> 6) <= (ulonglong)(longlong)iVar7) break;
            *(int *)(plVar2 + 3) = iVar7;
            puVar5 = (ulonglong *)((longlong)iVar7 * 0x40 + *plVar2);
          }
          if ((*(longlong *)(local_48 + 0x70) == 0) ||
             (uVar6 = FUN_180004b80(param_1,(longlong *)&local_48,(longlong *)&local_38,'\0'),
             (char)uVar6 == '\0')) break;
LAB_180004249:
          local_48 = local_38;
          puStack_40 = puStack_30;
          puVar5 = puStack_30;
        }
      } while ((char)uVar6 != '\0');
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_78);
  return;
}




ulonglong FUN_1800042a0(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong local_68;
  longlong local_60;
  char cStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  ulonglong *puStack_48;
  
  puVar6 = (undefined8 *)param_1[1];
  if ((puVar6 != (undefined8 *)0x0) && (param_2 != (ulonglong *)0x0)) {
    puVar9 = (undefined8 *)param_1[0x51];
    if ((undefined8 *)param_1[0x51] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)operator_new((ulonglong)(*(int *)((longlong)puVar6 + 0x94) + 10));
      param_1[0x51] = (longlong)puVar6;
      puVar9 = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_1800043fe;
    }
    memset(puVar9,0,(ulonglong)(*(int *)(param_1[1] + 0x94) + 10));
    puVar6 = (undefined8 *)param_1[1];
    lVar3 = param_1[0x51];
    uVar8 = *param_2;
    iVar1 = *(int *)((longlong)puVar6 + 0x94);
    if (lVar3 != 0) {
      if ((char)param_1[0x1a] == '\0') {
        lVar10 = 0;
        lVar5 = local_60;
        puVar13 = puStack_48;
        for (puVar6 = *(undefined8 **)param_1[2]; puStack_48 = puVar13,
            puVar6 != (undefined8 *)param_1[2]; puVar6 = (undefined8 *)*puVar6) {
          lVar5 = puVar6[2];
          puVar13 = (ulonglong *)puVar6[5];
          cStack_58 = (char)puVar6[3];
          uStack_57 = (undefined7)((ulonglong)puVar6[3] >> 8);
          uStack_50 = (undefined1)puVar6[4];
          uStack_4f = (undefined7)((ulonglong)puVar6[4] >> 8);
          if ((((lVar5 == 0x100) && (cStack_58 == -0x1c)) &&
              (uVar12 = CONCAT17(uStack_50,uStack_57), uVar12 <= uVar8)) &&
             ((uVar8 - uVar12 < *puVar13 && (*(short *)((longlong)puVar13 + 0x2c) != 0)))) {
            local_60 = 0x100;
            puStack_48 = puVar13;
            if (puVar13 != (ulonglong *)0x0) goto LAB_18000441d;
            break;
          }
        }
        local_60 = lVar5;
        puVar6 = (undefined8 *)FUN_180006b90();
      }
      else {
        for (puVar6 = *(undefined8 **)param_1[4]; puVar6 != (undefined8 *)param_1[4];
            puVar6 = (undefined8 *)*puVar6) {
          lVar10 = puVar6[2];
          uVar12 = *(ulonglong *)(lVar10 + 0x18);
          if ((uVar12 <= uVar8) &&
             (puVar13 = *(ulonglong **)(lVar10 + 8), uVar8 < *puVar13 + uVar12)) {
            if (puVar13 != (ulonglong *)0x0) goto LAB_18000441d;
            break;
          }
        }
      }
    }
  }
  goto LAB_1800043fe;
LAB_18000441d:
  uVar11 = puVar13[3];
  if ((uVar11 & 0x20) == 0) {
    if ((uVar11 & 8) == 0) {
      if ((uVar11 & 0x10) == 0) {
        if ((uVar11 & 0x40) == 0) {
          if ((char)uVar11 < '\0') {
            puVar9 = (undefined8 *)0x80;
          }
          else {
            puVar9 = (undefined8 *)0x100;
            if ((uVar11 & 0x100) == 0) {
              puVar6 = (undefined8 *)0x20;
              puVar9 = puVar6;
            }
          }
        }
        else {
          puVar9 = (undefined8 *)0x40;
        }
      }
      else {
        puVar9 = (undefined8 *)0x20;
      }
    }
    else {
      puVar9 = (undefined8 *)0x8;
    }
  }
  else {
    puVar9 = (undefined8 *)0x20;
  }
  if (((int)puVar9 == 0x20) &&
     (puVar6 = (undefined8 *)*param_1, *(int *)((longlong)puVar6 + 0x14) == 0)) {
    uVar11 = 0;
    if (lVar10 != 0) {
      uVar11 = (ulonglong)*(ushort *)(lVar10 + 0x20);
      if (*(ushort *)((longlong)puVar13 + 0x2c) != 0) {
        *(short *)(lVar10 + 0x20) =
             (short)((uVar11 + 1) % (ulonglong)*(ushort *)((longlong)puVar13 + 0x2c));
      }
    }
    lVar10 = (puVar13[uVar11 * 4 + 7] - uVar12) + uVar8;
    puVar6 = (undefined8 *)
             FUN_180007260((longlong)param_1,lVar10,
                           *(uint *)(param_1[1] + 0x94) / *(uint *)(param_1[1] + 0x90));
    if ((char)puVar6 == '\0') {
      uVar7 = (**(code **)(*(longlong *)*param_1 + 0x30))
                        ((longlong *)*param_1,lVar3,lVar10,(longlong)iVar1,0);
      if (((longlong *)param_1[0x48] != (longlong *)0x0) && ((char)param_1[0x49] != '\0')) {
        uVar2 = *(uint *)(param_1[1] + 0x90);
        uVar7 = FUN_180015400((longlong *)param_1[0x48],lVar10 / (longlong)(ulonglong)uVar2,
                              (ulonglong)uVar2,(ulonglong)(iVar1 + -1 + uVar2) / (ulonglong)uVar2);
      }
      if (param_2[2] == 0) {
        puVar6 = (undefined8 *)param_1[1];
        local_68 = 0;
        uVar8 = (ulonglong)*(uint *)((longlong)puVar6 + 0x94);
        if (((undefined8 *)param_1[0x51] == (undefined8 *)0x0) ||
           (puVar6 = (undefined8 *)
                     FUN_18000d700(uVar8,(undefined8 *)param_1[0x51],param_3,&local_68),
           (char)puVar6 == '\0')) goto LAB_1800043fe;
        puVar6 = (undefined8 *)param_1[6];
        puVar9 = (undefined8 *)puVar6[1];
        uVar7 = FUN_180002eb0(uVar8,puVar6,puVar9,&local_68);
        if (param_1[7] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        param_1[7] = param_1[7] + 1;
        puVar6[1] = uVar7;
        *puVar9 = uVar7;
        *(undefined8 *)(local_68 + 0x70) = param_4;
        *(undefined8 *)(local_68 + 0x80) = param_5;
        param_2[2] = local_68;
        uVar7 = param_5;
      }
      return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
  }
LAB_1800043fe:
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}




ulonglong FUN_1800045f0(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  byte bStack_20;
  undefined7 uStack_1f;
  
  if (param_3 == (undefined8 *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  uVar5 = param_2[2];
  uVar4 = *param_2;
  puVar9 = (ulonglong *)0x0;
  bStack_20 = (byte)param_2[1];
  uStack_1f = (undefined7)(param_2[1] >> 8);
  if (*plVar2 == plVar2[1]) {
    puVar6 = (ulonglong *)0x0;
  }
  else {
    *(undefined4 *)(plVar2 + 3) = 0;
    puVar6 = (ulonglong *)*plVar2;
  }
  uVar5 = CONCAT17((char)uVar5,uStack_1f);
  do {
    puVar7 = puVar6;
    if (uVar4 < *puVar6) {
      uVar8 = 0xffffffff;
    }
    else if (*puVar6 < uVar4) {
      uVar1 = 1;
LAB_1800046ae:
      uVar8 = uVar1;
      plVar2 = *(longlong **)(param_1 + 0x90);
      iVar10 = (int)plVar2[3] + 1;
      puVar9 = puVar6;
      if ((ulonglong)(longlong)iVar10 < (ulonglong)(plVar2[1] - *plVar2 >> 6)) {
        *(int *)(plVar2 + 3) = iVar10;
        puVar7 = (ulonglong *)((longlong)iVar10 * 0x40 + *plVar2);
      }
      else {
        puVar7 = (ulonglong *)0x0;
      }
    }
    else if (bStack_20 < (byte)puVar6[1]) {
      uVar8 = 0xffffffff;
    }
    else {
      if ((byte)puVar6[1] < bStack_20) {
        uVar1 = 1;
        goto LAB_1800046ae;
      }
      uVar3 = *(ulonglong *)((longlong)puVar6 + 9);
      if (uVar5 < uVar3) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar3 < uVar5);
        uVar1 = (uint)(uVar3 < uVar5);
        if (uVar3 < uVar5) goto LAB_1800046ae;
      }
    }
    puVar11 = puVar6;
    if (((*(char *)(param_1 + 100) == '\0') && (uVar8 == 0)) &&
       (*(char *)((longlong)puVar6 + 0x11) != '\0')) {
      plVar2 = *(longlong **)(param_1 + 0x90);
      iVar10 = (int)plVar2[3] + 1;
      puVar7 = (ulonglong *)(longlong)iVar10;
      if ((ulonglong *)(plVar2[1] - *plVar2 >> 6) <= puVar7) goto LAB_1800047ab;
      *(int *)(plVar2 + 3) = iVar10;
      puVar7 = (ulonglong *)((longlong)puVar7 * 0x40 + *plVar2);
      while( true ) {
        if (puVar7 == (ulonglong *)0x0) goto LAB_1800047ab;
        if (*(char *)((longlong)puVar7 + 0x11) == '\0') break;
        plVar2 = *(longlong **)(param_1 + 0x90);
        iVar10 = (int)plVar2[3] + 1;
        puVar7 = (ulonglong *)(longlong)iVar10;
        if ((ulonglong *)(plVar2[1] - *plVar2 >> 6) <= puVar7) goto LAB_1800047ab;
        *(int *)(plVar2 + 3) = iVar10;
        puVar7 = (ulonglong *)((longlong)puVar7 * 0x40 + *plVar2);
      }
      if ((((uVar4 < *puVar7) || (*puVar7 < uVar4)) ||
          ((bStack_20 < (byte)puVar7[1] ||
           (((byte)puVar7[1] < bStack_20 ||
            (uVar3 = *(ulonglong *)((longlong)puVar7 + 9), uVar5 < uVar3)))))) ||
         (uVar8 = (uint)(uVar3 < uVar5), puVar11 = puVar7, uVar3 < uVar5)) {
        uVar8 = 0;
        puVar11 = puVar6;
      }
    }
  } while ((puVar7 != (ulonglong *)0x0) && (puVar6 = puVar7, uVar8 == 1));
  if (uVar8 != 0xffffffff) {
LAB_1800047ab:
    if (puVar11 != (ulonglong *)0x0) goto LAB_1800047cb;
  }
  if (puVar9 != (ulonglong *)0x0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + 0x18);
    puVar7 = (ulonglong *)(ulonglong)uVar1;
    puVar11 = puVar9;
    if (0 < (int)uVar1) {
      puVar7 = (ulonglong *)(ulonglong)(uVar1 - 1);
      *(uint *)(*(longlong *)(param_1 + 0x90) + 0x18) = uVar1 - 1;
    }
  }
LAB_1800047cb:
  *param_3 = puVar11;
  return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
}




ulonglong FUN_1800047f0(longlong *param_1,ulonglong param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong local_res10;
  ulonglong local_28;
  ulonglong uStack_20;
  
  if (param_2 != 0) {
    local_res10 = 0;
    in_RAX = (*(ulonglong **)(param_2 + 0x90))[1];
    if ((**(ulonglong **)(param_2 + 0x90) != in_RAX) &&
       (in_RAX = FUN_1800045f0(param_2,param_4,&local_res10), uVar7 = local_res10, local_res10 != 0)
       ) {
      if (*(char *)(param_2 + 100) == '\0') {
        if (*(char *)(local_res10 + 0x11) == '\0') {
LAB_180004973:
          *param_3 = param_2;
          param_3[1] = uVar7;
LAB_18000497a:
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        uStack_20 = local_res10;
        local_28 = param_2;
        while (param_3 != (ulonglong *)0x0) {
          plVar1 = *(longlong **)(local_28 + 0x90);
          if ((int)plVar1[3] < 1) {
            uVar5 = 0;
          }
          else {
            iVar3 = (int)plVar1[3] + -1;
            *(int *)(plVar1 + 3) = iVar3;
            uVar5 = (longlong)iVar3 * 0x40 + *plVar1;
          }
          if (uVar5 == 0) {
            if ((*(longlong *)(local_28 + 0x70) == 0) ||
               (uVar5 = FUN_1800049c0(param_1,(longlong *)&local_28,(longlong *)param_3),
               (char)uVar5 == '\0')) break;
          }
          else {
            *param_3 = local_28;
            param_3[1] = uVar5;
          }
          in_RAX = param_3[1];
          if (*(char *)(in_RAX + 0x11) == '\0') goto LAB_18000497a;
          local_28 = *param_3;
          uStack_20 = param_3[1];
        }
        uStack_20 = uVar7;
        local_28 = param_2;
        while (in_RAX = FUN_180004de0(param_1,&local_28,param_3,'\x01'), (char)in_RAX != '\0') {
          in_RAX = param_3[1];
          if (*(char *)(in_RAX + 0x11) == '\0') goto LAB_18000497a;
          local_28 = *param_3;
          uStack_20 = param_3[1];
        }
      }
      else {
        do {
          if ((*(longlong *)(uVar7 + 0x28) == 0) ||
             (puVar2 = *(ulonglong **)(*(longlong *)(uVar7 + 0x28) + 0x90), in_RAX = puVar2[1],
             *puVar2 != in_RAX)) {
            if (*(char *)(param_2 + 100) == '\0') goto LAB_180004973;
            if ((*(longlong *)(uVar7 + 0x28) != 0) ||
               (in_RAX = FUN_1800042a0(param_1,(ulonglong *)(uVar7 + 0x18),
                                       *(undefined8 *)(param_2 + 0x78),param_2,uVar7),
               (char)in_RAX != '\0')) {
              uVar6 = FUN_1800047f0(param_1,*(ulonglong *)(uVar7 + 0x28),param_3,param_4);
              return uVar6;
            }
            break;
          }
          plVar1 = *(longlong **)(param_2 + 0x90);
          uVar4 = *(uint *)(plVar1 + 3);
          in_RAX = (ulonglong)uVar4;
          if ((int)uVar4 < 1) break;
          uVar4 = uVar4 - 1;
          in_RAX = (ulonglong)uVar4;
          *(uint *)(plVar1 + 3) = uVar4;
          uVar7 = (longlong)(int)uVar4 * 0x40 + *plVar1;
        } while (uVar7 != 0);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1800049c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = 0;
  for (lVar2 = *param_2; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x70)) {
    lVar10 = lVar9;
    if (*(longlong *)(lVar2 + 0x70) == 0) {
LAB_180004a3f:
      if ((lVar2 != 0) && (lVar10 != 0)) goto LAB_180004a50;
      break;
    }
    puVar3 = *(ulonglong **)(*(longlong *)(lVar2 + 0x70) + 0x90);
    in_RAX = puVar3[1];
    if (*puVar3 != in_RAX) {
      uVar6 = (int)((longlong)(in_RAX - *puVar3) >> 6) - 1;
      in_RAX = (ulonglong)uVar6;
      *(uint *)(puVar3 + 3) = uVar6;
      lVar10 = (longlong)(int)uVar6 * 0x40 + *puVar3;
      if (lVar10 != 0) goto LAB_180004a3f;
    }
  }
  goto LAB_180004a24;
joined_r0x000180004ace:
  if (cVar1 == '\0') goto LAB_180004b2a;
  plVar4 = *(longlong **)(lVar2 + 0x90);
  lVar10 = *plVar4;
  if (lVar10 == plVar4[1]) goto LAB_180004b2a;
  iVar7 = (int)(plVar4[1] - lVar10 >> 6) + -1;
  lVar10 = (longlong)iVar7 * 0x40 + lVar10;
  *(int *)(plVar4 + 3) = iVar7;
  if ((*(longlong *)(lVar10 + 0x28) == 0) &&
     (in_RAX = FUN_1800042a0(param_1,(ulonglong *)(lVar10 + 0x18),
                             *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0x78),lVar2,lVar10),
     (char)in_RAX == '\0')) goto LAB_180004a24;
  lVar2 = *(longlong *)(lVar10 + 0x28);
  cVar1 = *(char *)(lVar2 + 100);
  goto joined_r0x000180004ace;
LAB_180004b2a:
  in_RAX = (*(ulonglong **)(lVar2 + 0x90))[1];
  if (**(ulonglong **)(lVar2 + 0x90) != in_RAX) {
    *param_3 = lVar2;
    puVar3 = *(ulonglong **)(lVar2 + 0x90);
    uVar5 = *puVar3;
    uVar8 = puVar3[1];
    if (uVar5 != uVar8) {
      uVar6 = (int)((longlong)(uVar8 - uVar5) >> 6) - 1;
      uVar8 = (ulonglong)uVar6;
      lVar9 = (longlong)(int)uVar6 * 0x40 + uVar5;
      *(uint *)(puVar3 + 3) = uVar6;
    }
    param_3[1] = lVar9;
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
  goto LAB_180004a24;
  while( true ) {
    uVar6 = (uint)puVar3[3];
    in_RAX = (ulonglong)uVar6;
    if ((int)uVar6 < 1) break;
    uVar6 = uVar6 - 1;
    in_RAX = (ulonglong)uVar6;
    *(uint *)(puVar3 + 3) = uVar6;
    lVar10 = (longlong)(int)uVar6 * 0x40 + *puVar3;
    if (lVar10 == 0) break;
LAB_180004a50:
    in_RAX = *(ulonglong *)(lVar2 + 0x70);
    puVar3 = *(ulonglong **)(in_RAX + 0x90);
    if (*(longlong *)(lVar10 + 0x28) == lVar2) {
      iVar7 = (int)puVar3[3];
      if (0 < iVar7) {
        *(int *)(puVar3 + 3) = iVar7 + -1;
        in_RAX = *puVar3;
        lVar10 = (in_RAX - 0x40) + (longlong)iVar7 * 0x40;
        if ((lVar10 != 0) &&
           ((*(longlong *)(lVar10 + 0x28) != 0 ||
            (in_RAX = FUN_1800042a0(param_1,(ulonglong *)(lVar10 + 0x18),
                                    *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0x78),
                                    *(longlong *)(lVar2 + 0x70),lVar10), (char)in_RAX != '\0')))) {
          lVar2 = *(longlong *)(lVar10 + 0x28);
          cVar1 = *(char *)(lVar2 + 100);
          goto joined_r0x000180004ace;
        }
      }
      break;
    }
  }
LAB_180004a24:
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180004b80(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong local_18;
  longlong lStack_10;
  
  lVar5 = *param_2;
  do {
    if (*(longlong *)(lVar5 + 0x70) != 0) {
      puVar2 = *(ulonglong **)(*(longlong *)(lVar5 + 0x70) + 0x90);
      in_RAX = puVar2[1];
      if (*puVar2 != in_RAX) {
        *(undefined4 *)(puVar2 + 3) = 0;
        uVar4 = *puVar2;
        if (uVar4 != 0) {
          if (lVar5 != 0) goto LAB_180004c00;
          break;
        }
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x70);
  } while (lVar5 != 0);
  goto LAB_180004bde;
LAB_180004ca0:
  if (*(char *)(lVar5 + 100) == '\0') {
    *param_3 = lVar5;
    puVar2 = *(ulonglong **)(lVar5 + 0x90);
    if (*puVar2 == puVar2[1]) {
LAB_180004d27:
      in_RAX = param_3[1];
    }
    else {
      *(undefined4 *)(puVar2 + 3) = 0;
      in_RAX = *puVar2;
      if (in_RAX == 0) goto LAB_180004d27;
      param_3[1] = in_RAX;
    }
    if (in_RAX != 0) {
      if (param_4 != '\0') goto LAB_180004dcf;
      cVar1 = *(char *)(in_RAX + 0x11);
      goto joined_r0x000180004d41;
    }
    goto LAB_180004bde;
  }
  puVar2 = *(ulonglong **)(lVar5 + 0x90);
  in_RAX = puVar2[1];
  if (*puVar2 == in_RAX) goto LAB_180004bde;
  *(undefined4 *)(puVar2 + 3) = 0;
  uVar4 = *puVar2;
  if (((uVar4 == 0) ||
      ((*(longlong *)(uVar4 + 0x28) == 0 &&
       (in_RAX = FUN_1800042a0(param_1,(ulonglong *)(uVar4 + 0x18),
                               *(undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0x78),lVar5,uVar4),
       (char)in_RAX == '\0')))) || (lVar5 = *(longlong *)(uVar4 + 0x28), lVar5 == 0))
  goto LAB_180004bde;
  goto LAB_180004ca0;
joined_r0x000180004d41:
  if (cVar1 == '\0') {
LAB_180004dcf:
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  lVar5 = *param_3;
  plVar3 = *(longlong **)(lVar5 + 0x90);
  iVar7 = (int)plVar3[3] + 1;
  in_RAX = plVar3[1] - *plVar3 >> 6;
  lVar6 = 0;
  if ((ulonglong)(longlong)iVar7 < in_RAX) {
    *(int *)(plVar3 + 3) = iVar7;
    lVar5 = *param_3;
    lVar6 = (longlong)iVar7 * 0x40 + *plVar3;
  }
  if ((lVar6 == 0) &&
     ((*(longlong *)(lVar5 + 0x70) == 0 ||
      (in_RAX = FUN_180004b80(param_1,param_3,&local_18,'\x01'), lVar5 = local_18, lVar6 = lStack_10
      , (char)in_RAX == '\0')))) goto LAB_180004bde;
  lStack_10 = lVar6;
  local_18 = lVar5;
  *param_3 = local_18;
  param_3[1] = lStack_10;
  in_RAX = param_3[1];
  cVar1 = *(char *)(in_RAX + 0x11);
  goto joined_r0x000180004d41;
  while( true ) {
    iVar7 = (int)plVar3[3] + 1;
    in_RAX = plVar3[1] - *plVar3 >> 6;
    if (in_RAX <= (ulonglong)(longlong)iVar7) break;
    *(int *)(plVar3 + 3) = iVar7;
    uVar4 = (longlong)iVar7 * 0x40 + *plVar3;
    if (uVar4 == 0) break;
LAB_180004c00:
    plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + 0x90);
    if (*(longlong *)(uVar4 + 0x28) == lVar5) {
      uVar4 = (longlong)(int)plVar3[3] + 1;
      in_RAX = plVar3[1] - *plVar3 >> 6;
      if (uVar4 < in_RAX) {
        *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
        lVar6 = uVar4 * 0x40 + *plVar3;
        if ((lVar6 != 0) &&
           (((*(longlong *)(lVar6 + 0x28) != 0 ||
             (in_RAX = FUN_1800042a0(param_1,(ulonglong *)(lVar6 + 0x18),
                                     *(undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0x78),
                                     *(longlong *)(lVar5 + 0x70),lVar6), (char)in_RAX != '\0')) &&
            (lVar5 = *(longlong *)(lVar6 + 0x28), lVar5 != 0)))) goto LAB_180004ca0;
      }
      break;
    }
  }
LAB_180004bde:
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180004de0(longlong *param_1,ulonglong *param_2,ulonglong *param_3,char param_4)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_3 != (ulonglong *)0x0) {
    plVar1 = *(longlong **)(*param_2 + 0x90);
    iVar4 = (int)plVar1[3] + 1;
    uVar2 = 0;
    if ((ulonglong)(longlong)iVar4 < (ulonglong)(plVar1[1] - *plVar1 >> 6)) {
      *(int *)(plVar1 + 3) = iVar4;
      uVar3 = (longlong)iVar4 * 0x40 + *plVar1;
      if (uVar3 != 0) {
        uVar2 = uVar3;
      }
    }
    if (param_4 == '\0') {
      while (uVar2 != 0) {
        if (*(char *)(uVar2 + 0x11) == '\0') goto LAB_180004e9e;
        plVar1 = *(longlong **)(*param_2 + 0x90);
        iVar4 = (int)plVar1[3] + 1;
        if ((ulonglong)(plVar1[1] - *plVar1 >> 6) <= (ulonglong)(longlong)iVar4) break;
        *(int *)(plVar1 + 3) = iVar4;
        uVar2 = (longlong)iVar4 * 0x40 + *plVar1;
      }
    }
    else {
LAB_180004e9e:
      if (uVar2 != 0) {
        uVar3 = *param_2;
        param_3[1] = uVar2;
        *param_3 = uVar3;
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
    in_RAX = *param_2;
    if (*(longlong *)(in_RAX + 0x70) != 0) {
      uVar2 = FUN_180004b80(param_1,(longlong *)param_2,(longlong *)param_3,param_4);
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_180004ed0(longlong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  ushort uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong *_Size;
  undefined1 auStackY_c8 [32];
  ulonglong local_98;
  ulonglong *puStack_90;
  ulonglong local_88;
  ulonglong *puStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined8 local_67;
  ulonglong local_58;
  
  local_58 = DAT_180021010 ^ (ulonglong)auStackY_c8;
  local_78 = param_4;
  puVar3 = (ulonglong *)operator_new(0x1e8);
  *puVar3 = param_2;
  puVar3[2] = param_3;
  puVar3[4] = 0;
  puVar3[3] = param_4;
  puVar3[0x3c] = 0;
  puVar3[1] = 0;
  if (param_5 == 0) {
    puVar7 = puVar3 + 5;
    _Size = (ulonglong *)0x1b7;
  }
  else {
    _Size = (ulonglong *)0x1b7;
    uVar2 = *(ushort *)(*(longlong *)(param_5 + 8) + 0x30);
    if (uVar2 < 0x1b8) {
      _Size = (ulonglong *)(ulonglong)uVar2;
    }
    memcpy(puVar3 + 5,*(void **)(*(longlong *)(param_5 + 8) + 0x38),(size_t)_Size);
    uVar2 = *(ushort *)(*(longlong *)(param_5 + 8) + 0x30);
    if (0x1b6 < uVar2) goto LAB_180004f8f;
    _Size = (ulonglong *)(0x1b7 - (ulonglong)uVar2);
    puVar7 = (ulonglong *)((ulonglong)uVar2 + 0x28 + (longlong)puVar3);
  }
  memset(puVar7,0,(size_t)_Size);
LAB_180004f8f:
  uVar5 = *puVar3;
  if (((uVar5 - 1 & 0xfffffffffffffffb) == 0) ||
     ((0xff < uVar5 && ((uVar5 & 0xf000000000000000) == 0)))) {
    local_70 = 0xffffffffffffffff;
    local_68 = 0xff;
    local_67 = 0xffffffffffffffff;
    local_88 = 0;
    puStack_80 = (ulonglong *)0x0;
    if ((puVar3[4] != 0) ||
       (_Size = puVar3, uVar4 = FUN_1800042a0(param_1,puVar3 + 2,puVar3,0,0), (char)uVar4 != '\0'))
    {
      _Size = &local_88;
      uVar4 = FUN_1800047f0(param_1,puVar3[4],_Size,&local_70);
      if ((char)uVar4 != '\0') {
        if (((char)puStack_80[1] == '\x01') ||
           (((char)puStack_80[1] == -0x7c && (-1 < (longlong)*puStack_80)))) {
          uVar5 = *puStack_80;
        }
        else {
          local_98 = 0;
          puStack_90 = (ulonglong *)0x0;
          do {
            plVar6 = *(longlong **)(local_88 + 0x90);
            if ((int)plVar6[3] < 1) {
LAB_180005082:
              if (*(longlong *)(local_88 + 0x70) != 0) {
                _Size = &local_98;
                uVar5 = FUN_1800049c0(param_1,(longlong *)&local_88,(longlong *)_Size);
                if ((char)uVar5 != '\0') goto LAB_1800050a1;
              }
              _Size = (ulonglong *)*puVar3;
              puVar3[1] = 0x100;
              FUN_180006b90();
              goto LAB_1800050e4;
            }
            iVar1 = (int)plVar6[3] + -1;
            *(int *)(plVar6 + 3) = iVar1;
            puVar7 = (ulonglong *)((longlong)iVar1 * 0x40 + *plVar6);
            if (puVar7 == (ulonglong *)0x0) goto LAB_180005082;
            local_98 = local_88;
            puStack_90 = puVar7;
LAB_1800050a1:
            local_88 = local_98;
            puStack_80 = puStack_90;
          } while (((char)puStack_90[1] != '\x01') &&
                  (((char)puStack_90[1] != -0x7c || ((longlong)*puStack_90 < 0))));
          uVar5 = *puStack_90;
        }
        puVar3[1] = uVar5;
      }
    }
LAB_1800050e4:
    if ((*puVar3 == 1) && (puVar3[1] < 0x100)) {
      puVar3[1] = 0x100;
    }
  }
  local_98 = param_2;
  puStack_90 = puVar3;
  plVar6 = (longlong *)FUN_18000ab80(param_1 + 0xc,&local_98);
  FUN_18000abb0(param_1 + 0xc,&local_98,_Size,(ulonglong *)(plVar6 + 4),plVar6);
  FUN_180006b90();
  uVar5 = *puVar3;
  if (uVar5 == 1) {
    param_1[0x16] = (longlong)puVar3;
  }
  else if (uVar5 == 2) {
    param_1[0x17] = (longlong)puVar3;
  }
  else if (uVar5 == 3) {
    param_1[0x18] = (longlong)puVar3;
  }
  else if (uVar5 == 4) {
    param_1[0x19] = (longlong)puVar3;
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_1800051b0(longlong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 auStackY_88 [32];
  ushort local_58 [4];
  char *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  ulonglong local_38;
  char local_30;
  undefined8 local_2f;
  ulonglong local_20;
  
  local_20 = DAT_180021010 ^ (ulonglong)auStackY_88;
  plVar5 = (longlong *)FUN_1800061f0(param_1);
  if (plVar5 != (longlong *)0x0) {
    puVar1 = (ulonglong *)(param_1 + 0x1e);
    *(int *)((longlong)param_1 + 0x11e) = (int)param_1[0x4b];
    *(undefined8 *)((longlong)param_1 + 0x122) = 0x100;
    *(longlong **)((longlong)param_1 + 0x112) = plVar5;
    *(undefined4 *)((longlong)param_1 + 0x11a) = 0xffffffff;
    *(int *)(param_1 + 0x4b) = (int)param_1[0x4b] + 1;
    cVar3 = FUN_180006560(param_1,(longlong)puVar1,0x100);
    if (cVar3 != '\0') {
      local_38 = 0x100;
      uVar11 = 0;
      uVar9 = 0;
      local_48 = 0;
      local_40 = (ulonglong *)0x0;
      local_30 = '\x01';
      local_2f = 0xffffffffffffffff;
      if (((plVar5[4] != 0) ||
          (uVar6 = FUN_1800042a0(param_1,(ulonglong *)(plVar5 + 2),plVar5,0,0), (char)uVar6 != '\0')
          ) && (plVar7 = param_1, uVar6 = FUN_1800047f0(param_1,plVar5[4],&local_48,&local_38),
               (char)uVar6 != '\0')) {
        if ((*local_40 == local_38) && ((char)local_40[1] == local_30)) {
          if ((short)local_40[6] != 0) {
            FUN_180006ba0(plVar7,(longlong)puVar1,local_40[7]);
            uVar2 = local_40[1];
            *puVar1 = *local_40;
            param_1[0x1f] = uVar2;
            *(char *)(param_1 + 0x20) = (char)local_40[2];
          }
          local_50 = (char *)0x0;
          local_58[0] = 0;
          cVar3 = FUN_180005570(param_1,(longlong)plVar5,&local_50,local_58);
          if (((cVar3 == '\0') || (local_50 == (char *)0x0)) ||
             ((local_58[0] < 3 || ((*local_50 != '0' || (local_50[1] != 'x')))))) {
            uVar9 = 0x32;
            if (*plVar5 != 5) {
              uVar9 = 0x30;
            }
            uVar10 = uVar9 | 1;
            if ((*(byte *)(plVar5 + 0x1f) & 1) == 0) {
              uVar10 = uVar9;
            }
          }
          else {
            if (2 < (ulonglong)local_58[0]) {
              lVar8 = 2;
              do {
                cVar3 = local_50[lVar8];
                uVar11 = uVar11 << 4;
                if ((byte)(cVar3 - 0x30U) < 10) {
                  uVar4 = (int)cVar3 - 0x30;
LAB_18000536b:
                  uVar11 = uVar11 | uVar4;
                }
                else if (((byte)(cVar3 + 0x9fU) < 6) || ((byte)(cVar3 + 0xbfU) < 6)) {
                  uVar4 = (int)cVar3 - 0x57;
                  goto LAB_18000536b;
                }
                uVar9 = (ushort)uVar11;
                lVar8 = lVar8 + 1;
              } while (lVar8 < (longlong)(ulonglong)local_58[0]);
            }
            uVar10 = uVar9 & 0xfffe | 0x10;
            if ((*(byte *)(plVar5 + 0x1f) & 1) != 0) {
              uVar10 = uVar9 | 0x11;
            }
          }
          *(ushort *)((longlong)param_1 + 0x156) = uVar10;
          if (**(longlong **)((longlong)param_1 + 0x112) == 5) {
            *(ushort *)((longlong)param_1 + 0x156) = uVar10 & 0xfffd;
          }
          plVar5 = *(longlong **)param_1[0x2d];
          if (plVar5 != (longlong *)param_1[0x2d]) {
            do {
              if (puVar1 != (ulonglong *)0x0) {
                FUN_180006a00(param_1,puVar1,(ulonglong *)(plVar5 + 2));
              }
              plVar5 = (longlong *)*plVar5;
            } while (plVar5 != (longlong *)param_1[0x2d]);
          }
          FUN_180005450(param_2,puVar1);
        }
        else {
          FUN_180006b90();
        }
      }
    }
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_88);
  return;
}




undefined8 * FUN_180005450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0x11) = *(undefined8 *)((longlong)param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x19) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x22) = *(undefined8 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2a) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2e) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined8 *)((longlong)param_1 + 0x32) = *(undefined8 *)((longlong)param_2 + 0x32);
  *(undefined8 *)((longlong)param_1 + 0x3a) = *(undefined8 *)((longlong)param_2 + 0x3a);
  *(undefined8 *)((longlong)param_1 + 0x42) = *(undefined8 *)((longlong)param_2 + 0x42);
  *(undefined8 *)((longlong)param_1 + 0x4a) = *(undefined8 *)((longlong)param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x52) = *(undefined8 *)((longlong)param_2 + 0x52);
  *(undefined8 *)((longlong)param_1 + 0x5a) = *(undefined8 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
  *(undefined2 *)((longlong)param_1 + 0x66) = *(undefined2 *)((longlong)param_2 + 0x66);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  if (param_1 + 0xf != param_2 + 0xf) {
    puVar1 = (undefined8 *)param_2[0xf];
    FUN_18000a0c0(param_1 + 0xf,(undefined8 *)*puVar1,puVar1);
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  return param_1;
}




void FUN_180005570(longlong *param_1,longlong param_2,undefined8 *param_3,undefined2 *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStackY_88 [32];
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong local_48;
  byte local_40;
  ulonglong local_3f;
  ulonglong local_30;
  
  local_30 = DAT_180021010 ^ (ulonglong)auStackY_88;
  local_48 = 0x100;
  local_3f = 0x914f9939;
  local_40 = 0x18;
  local_58 = 0;
  local_50 = (ulonglong *)0x0;
  if (((*(longlong *)(param_2 + 0x20) != 0) ||
      (uVar3 = FUN_1800042a0(param_1,(ulonglong *)(param_2 + 0x10),param_2,0,0), (char)uVar3 != '\0'
      )) && (uVar3 = FUN_1800047f0(param_1,*(ulonglong *)(param_2 + 0x20),&local_58,&local_48),
            (char)uVar3 != '\0')) {
    uVar5 = *local_50;
    if ((((uVar5 < local_48) || (local_48 < uVar5)) ||
        ((bVar1 = (byte)local_50[1], bVar1 < local_40 ||
         ((local_40 < bVar1 || (uVar4 = *(ulonglong *)((longlong)local_50 + 9), uVar4 < local_3f))))
        )) || (local_3f < uVar4)) {
      FUN_180002ef0("could not find item (%I64x,%x,%I64x)\n",local_48,(ulonglong)local_40,local_3f);
    }
    else {
      uVar6 = (ulonglong)(ushort)local_50[6];
      if ((ushort)local_50[6] < 0x1f) {
        FUN_180002ef0("(%I64x,%x,%I64x) was %u bytes, expected at least %Iu\n",uVar5,
                      (ulonglong)bVar1,uVar4);
      }
      else {
        uVar5 = local_50[7];
        do {
          uVar4 = (ulonglong)*(ushort *)(uVar5 + 0x1b);
          uVar7 = (ulonglong)*(ushort *)(uVar5 + 0x19);
          if (uVar6 < uVar4 + 0x1e + uVar7) break;
          if ((((uVar4 == 0xe) && (*(longlong *)(uVar5 + 0x1e) == 0x534f442e72657375)) &&
              (*(int *)(uVar5 + 0x26) == 0x52545441)) && (*(short *)(uVar5 + 0x2a) == 0x4249)) {
            FUN_180002ef0("found xattr %s\n","user.DOSATTRIB",uVar6,uVar7);
            *param_4 = *(undefined2 *)(uVar5 + 0x19);
            if (*(ushort *)(uVar5 + 0x19) == 0) {
              *param_3 = 0;
            }
            else {
              _Dst = operator_new((ulonglong)*(ushort *)(uVar5 + 0x19));
              *param_3 = _Dst;
              memcpy(_Dst,(void *)((ulonglong)*(ushort *)(uVar5 + 0x1b) + 0x1e + uVar5),
                     (ulonglong)*(ushort *)(uVar5 + 0x19));
            }
            goto LAB_180005780;
          }
          uVar2 = *(ushort *)(uVar5 + 0x19) + 0x1e + *(ushort *)(uVar5 + 0x1b);
          if ((ushort)uVar6 <= uVar2) {
            FUN_180002ef0("xattr %s not found\n","user.DOSATTRIB",uVar6,uVar7);
            goto LAB_180005780;
          }
          uVar2 = (ushort)uVar6 - uVar2;
          uVar6 = (ulonglong)uVar2;
          uVar5 = uVar4 + 0x1e + uVar5 + uVar7;
        } while (0x1e < uVar2);
        FUN_180002ef0("DIR_ITEM is truncated\n",uVar4,uVar6,uVar7);
      }
    }
  }
LAB_180005780:
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_88);
  return;
}




void FUN_1800057a0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  short sVar8;
  ulonglong uVar9;
  longlong lVar10;
  __uint64 _Size;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_c6;
  undefined8 local_be;
  void *local_b6;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_54;
  ulonglong local_48;
  
  local_110 = 0xfffffffffffffffe;
  local_48 = DAT_180021010 ^ (ulonglong)auStack_138;
  uVar13 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 8) + 0x30);
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x38);
  uVar11 = (ulonglong)*(ushort *)(lVar10 + 0x1b);
  uVar9 = (ulonglong)*(ushort *)(lVar10 + 0x19);
  uVar6 = uVar11 + 0x1e + uVar9;
  local_118 = param_1;
  if (uVar6 <= uVar13) {
    do {
      if ((((*(longlong *)(*(longlong *)(param_2 + 8) + 9) == 0x20ccdf69) &&
           ((ushort)uVar11 == 0x11)) && (*(longlong *)(lVar10 + 0x1e) == 0x6f632e7366727462)) &&
         ((*(longlong *)(lVar10 + 0x26) == 0x6f6973736572706d && (*(char *)(lVar10 + 0x2e) == 'n')))
         ) {
        sVar8 = (short)uVar9;
        if (sVar8 != 0) {
          if (sVar8 == 3) {
            if ((*(short *)(lVar10 + 0x2f) == 0x7a6c) && (*(char *)(lVar10 + 0x31) == 'o')) {
              *(undefined4 *)(param_3 + 0x88) = 2;
            }
            else {
LAB_1800058ca:
              *(undefined4 *)(param_3 + 0x88) = 0;
            }
          }
          else {
            if (sVar8 != 4) goto LAB_1800058ca;
            if (*(int *)(lVar10 + 0x2f) == 0x62696c7a) {
              *(undefined4 *)(param_3 + 0x88) = 1;
            }
            else {
              if (*(int *)(lVar10 + 0x2f) != 0x6474737a) goto LAB_1800058ca;
              *(undefined4 *)(param_3 + 0x88) = 3;
            }
          }
        }
      }
      else if ((5 < (ushort)uVar11) &&
              ((*(int *)(lVar10 + 0x1e) == 0x72657375 && (*(char *)(lVar10 + 0x22) == '.')))) {
        local_80 = (void *)0x0;
        local_78 = 0;
        local_80 = (void *)FUN_180002c90(uVar6,(undefined8 *)0x0,(undefined8 *)0x0);
        local_d6 = 0;
        local_c6 = 0;
        local_b6 = (void *)0x0;
        uStack_92 = 0;
        local_be = 0;
        local_96 = 0;
        local_90 = 0;
        local_64 = 0;
        local_6c = 0;
        local_5c = 0;
        local_54 = 0;
        local_ce = 0;
        local_88 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        lVar5 = *(longlong *)(param_2 + 8);
        if ((lVar5 != 0) &&
           ((((puVar2 = *(undefined8 **)(lVar5 + 0x38), puVar2 != (undefined8 *)0x0 &&
              ((uint)*(ushort *)(lVar5 + 0x30) < *(uint *)(*(longlong *)(param_1 + 8) + 0x94))) &&
             (0x1e < *(ushort *)(lVar5 + 0x30))) && (*(short *)((longlong)puVar2 + 0x1b) != 0)))) {
          local_c6 = *puVar2;
          uStack_f0 = puVar2[1];
          local_e8 = (ulonglong)*(byte *)(puVar2 + 2);
          uStack_92 = 0x80;
          if (*(char *)((longlong)puVar2 + 0x1d) == '\x02') {
            uStack_92 = 0x10;
          }
        }
        uVar1 = *(ushort *)(lVar10 + 0x1b);
        _Size = (ulonglong)uVar1 - 4;
        _local_94 = CONCAT22(uStack_92,(short)_Size);
        local_f8 = local_c6;
        local_b6 = operator_new(_Size);
        memset(local_b6,0,_Size);
        pvVar7 = local_b6;
        memcpy(local_b6,(void *)(lVar10 + 0x23),(ulonglong)uVar1 - 5);
        puVar2 = *(undefined8 **)(param_3 + 0x78);
        plVar3 = (longlong *)puVar2[1];
        lVar5 = FUN_18000a820(pvVar7,puVar2,plVar3,&local_f8);
        if (*(longlong *)(param_3 + 0x80) == 0x1642c8590b21641) {
          std::_Xlength_error("list<T> too long");
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(longlong *)(param_3 + 0x80) = *(longlong *)(param_3 + 0x80) + 1;
        puVar2[1] = lVar5;
        *plVar3 = lVar5;
        FUN_180002b20((longlong *)&local_80);
        free(local_80);
        param_1 = local_118;
      }
      uVar12 = (int)uVar13 +
               ((-0x1e - (uint)*(ushort *)(lVar10 + 0x19)) - (uint)*(ushort *)(lVar10 + 0x1b));
      uVar13 = (ulonglong)uVar12;
      if (uVar12 < 0x1e) break;
      lVar10 = (ulonglong)*(ushort *)(lVar10 + 0x19) + 0x1e +
               lVar10 + (ulonglong)*(ushort *)(lVar10 + 0x1b);
      uVar11 = (ulonglong)*(ushort *)(lVar10 + 0x1b);
      uVar9 = (ulonglong)*(ushort *)(lVar10 + 0x19);
      uVar6 = uVar11 + 0x1e + uVar9;
    } while (uVar6 <= uVar12);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_138);
  return;
}




void FUN_180005af0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,longlong *param_6)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  void *pvVar11;
  undefined1 *_Dst;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  void *pvVar15;
  bool bVar16;
  size_t _Size;
  void **ppvVar17;
  ulonglong *puVar18;
  undefined1 auStackY_1d8 [32];
  bool local_1a8;
  ulonglong local_198;
  ulonglong *puStack_190;
  ulonglong local_188;
  void *local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  ulonglong local_168;
  ulonglong *puStack_160;
  longlong *local_158;
  longlong local_150;
  ulonglong local_148;
  ushort uStack_140;
  undefined2 uStack_13e;
  uint uStack_13c;
  undefined8 local_138;
  ulonglong uStack_130;
  ulonglong *local_128;
  undefined8 local_120;
  longlong *local_118;
  ulonglong local_110;
  char local_108;
  undefined8 local_107;
  undefined1 local_f8 [16];
  longlong local_e8;
  ulonglong local_58;
  
  local_120 = 0xfffffffffffffffe;
  local_58 = DAT_180021010 ^ (ulonglong)auStackY_1d8;
  local_158 = param_6;
  local_118 = param_6;
  local_188 = param_4;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (0xf < (ulonglong)param_6[3]) {
      pvVar15 = (void *)*param_6;
      pvVar11 = pvVar15;
      if ((0xfff < param_6[3] + 1U) &&
         (pvVar11 = *(void **)((longlong)pvVar15 + -8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar11);
    }
    param_6[2] = 0;
    param_6[3] = 0xf;
    *(undefined1 *)param_6 = 0;
    goto LAB_1800061bb;
  }
  FUN_18000e0c0(0xffffffff,(byte *)&local_188,8);
  local_110 = local_188;
  local_108 = '\x01';
  local_107 = 0xffffffffffffffff;
  local_198 = 0;
  puStack_190 = (ulonglong *)0x0;
  puVar13 = (ulonglong *)0x0;
  if (((*(longlong *)(param_2 + 0x20) == 0) &&
      (uVar8 = FUN_1800042a0(param_1,(ulonglong *)(param_2 + 0x10),param_2,0,0), (char)uVar8 == '\0'
      )) || (uVar8 = FUN_1800047f0(param_1,*(ulonglong *)(param_2 + 0x20),&local_198,&local_110),
            puVar14 = puStack_190, (char)uVar8 == '\0')) {
    if (0xf < (ulonglong)param_6[3]) {
      pvVar15 = (void *)*param_6;
      pvVar11 = pvVar15;
      if ((0xfff < param_6[3] + 1U) &&
         (pvVar11 = *(void **)((longlong)pvVar15 + -8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_180005bf8;
    }
  }
  else {
    if ((*puStack_190 == local_110) && ((char)puStack_190[1] == local_108)) {
      _Size = 0xa0;
      _Dst = local_f8;
      memset(_Dst,0,0xa0);
      if ((short)puVar14[6] != 0) {
        FUN_180006ba0(_Dst,param_3,puVar14[7]);
        puVar14 = puStack_190;
        if ((ushort)puStack_190[6] < 0xa1) {
          _Size = (size_t)(ushort)puStack_190[6];
        }
        memcpy(local_f8,(void *)puStack_190[7],_Size);
      }
      if ((puVar14[7] != 0) && (*(short *)(param_3 + 0x66) == 0)) {
        if ((*(uint *)(puVar14[7] + 0x34) & 0x4000) == 0) {
          *(undefined2 *)(param_3 + 0x66) = 0x80;
        }
        else {
          *(undefined2 *)(param_3 + 0x66) = 0x10;
        }
      }
      if ((local_e8 == 0) || (bVar5 = false, *(short *)(param_3 + 0x66) != 0x80)) {
        bVar5 = true;
      }
      local_1a8 = false;
      local_180 = (void *)0x0;
      local_178 = (ulonglong *)0x0;
      local_170 = (ulonglong *)0x0;
      local_168 = 0;
      puStack_160 = (ulonglong *)0x0;
      puVar14 = puVar13;
      puVar18 = puVar13;
      bVar16 = false;
LAB_180005cf7:
      do {
        plVar3 = *(longlong **)(local_198 + 0x90);
        iVar7 = (int)plVar3[3] + 1;
        puVar12 = puVar13;
        if ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar3[1] - *plVar3 >> 6)) {
          *(int *)(plVar3 + 3) = iVar7;
          puVar12 = (ulonglong *)((longlong)iVar7 * 0x40 + *plVar3);
        }
        while (puVar12 != (ulonglong *)0x0) {
          if (*(char *)((longlong)puVar12 + 0x11) == '\0') {
            uVar4 = local_198;
            if (puVar12 != (ulonglong *)0x0) goto LAB_180005d9f;
            break;
          }
          plVar3 = *(longlong **)(local_198 + 0x90);
          iVar7 = (int)plVar3[3] + 1;
          if ((ulonglong)(plVar3[1] - *plVar3 >> 6) <= (ulonglong)(longlong)iVar7) break;
          *(int *)(plVar3 + 3) = iVar7;
          puVar12 = (ulonglong *)((longlong)iVar7 * 0x40 + *plVar3);
        }
        if ((*(longlong *)(local_198 + 0x70) == 0) ||
           (uVar9 = FUN_180004b80(param_1,(longlong *)&local_198,(longlong *)&local_168,'\0'),
           uVar4 = local_168, puVar12 = puStack_160, (char)uVar9 == '\0')) goto LAB_180005efe;
LAB_180005d9f:
        puStack_160 = puVar12;
        local_168 = uVar4;
        uVar6 = uStack_13c;
        local_198 = local_168;
        puStack_190 = puStack_160;
        if ((local_188 < *puStack_160) ||
           (((bVar5 && (0x18 < (byte)puStack_160[1])) ||
            (bVar1 = (byte)puStack_160[1], 0x6c < bVar1)))) goto LAB_180005efe;
        if (bVar1 != 0x18) {
          if (bVar1 == 0x6c) {
            uVar4 = puStack_160[7];
            uVar2 = (ushort)puStack_160[6];
            bVar16 = local_1a8;
            if (0x15 < uVar2) {
              if ((byte)(*(char *)(uVar4 + 0x14) - 1U) < 2) {
                if (((uVar2 < 0x35) || (*(ulonglong *)(uVar4 + 0x15) == 0)) ||
                   (puVar12 = (ulonglong *)(uVar4 + 0x15), *(longlong *)(uVar4 + 0x1d) == 0))
                goto LAB_180005cf7;
              }
              else {
                puVar12 = puVar13;
                if (*(char *)(uVar4 + 0x14) != '\0') {
                  FUN_180006b90();
                  goto LAB_180005cf7;
                }
              }
              local_148 = *(ulonglong *)((longlong)puStack_160 + 9);
              uStack_13e = 0;
              uStack_13c = uStack_13c & 0xffffff00;
              local_138 = 0;
              uStack_140 = uVar2;
              uStack_130 = uVar4;
              local_128 = puVar12;
              if (puVar18 == puVar14) {
                FUN_180009bd0((longlong *)&local_180,puVar14,&local_148);
                local_1a8 = *(char *)(uVar4 + 0x14) == '\0';
                puVar14 = local_178;
                puVar18 = local_170;
                bVar16 = local_1a8;
              }
              else {
                *puVar14 = local_148;
                puVar14[1] = CONCAT44(uVar6,(uint)uVar2) & 0xffffff00ffffffff;
                puVar14[2] = 0;
                puVar14[3] = uVar4;
                puVar14[4] = (ulonglong)puVar12;
                local_178 = puVar14 + 5;
                local_1a8 = *(char *)(uVar4 + 0x14) == '\0';
                puVar14 = local_178;
                bVar16 = local_1a8;
              }
            }
          }
          goto LAB_180005cf7;
        }
        if (0x1d < (ushort)puStack_160[6]) {
          FUN_1800057a0((longlong)param_1,(longlong)&local_198,param_3);
        }
      } while( true );
    }
    if (0xf < (ulonglong)param_6[3]) {
      pvVar15 = (void *)*param_6;
      pvVar11 = pvVar15;
      if ((0xfff < param_6[3] + 1U) &&
         (pvVar11 = *(void **)((longlong)pvVar15 + -8),
         0x1f < (ulonglong)((longlong)pvVar15 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
LAB_180005bf8:
      free(pvVar11);
    }
  }
  param_6[2] = 0;
  param_6[3] = 0xf;
  *(undefined1 *)param_6 = 0;
  goto LAB_1800061bb;
LAB_180005efe:
  FUN_180006b90();
  plVar3 = local_158;
  if (*(short *)(param_3 + 0x66) == 0x10) {
    if (*(longlong *)(param_3 + 0x42) == 0) {
LAB_180006029:
      ppvVar17 = *(void ***)(param_3 + 0x32);
      FUN_180006560(param_1,param_3,(ulonglong)ppvVar17);
      goto LAB_180006052;
    }
    do {
      puVar14 = (ulonglong *)((longlong)puVar13 + 1);
      if (*(char *)(*(longlong *)(param_3 + 0x42) + (longlong)puVar13) != (char)puVar13[0x300030b0])
      goto LAB_180006029;
      puVar13 = puVar14;
    } while (puVar14 != (ulonglong *)0x7);
    if (local_180 != (void *)0x0) {
      pvVar15 = local_180;
      if ((0xfff < (ulonglong)((((longlong)puVar18 - (longlong)local_180) / 0x28) * 0x28)) &&
         (pvVar15 = *(void **)((longlong)local_180 + -8),
         0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar15);
    }
    if (0xf < (ulonglong)plVar3[3]) {
      pvVar11 = (void *)*plVar3;
      pvVar15 = pvVar11;
      if ((0xfff < plVar3[3] + 1U) &&
         (pvVar15 = *(void **)((longlong)pvVar11 + -8),
         0x1f < (ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_180006007;
    }
  }
  else {
    ppvVar17 = &local_180;
    FUN_180006de0(param_1,bVar16,(longlong *)ppvVar17,param_3);
    puVar18 = local_170;
LAB_180006052:
    if (*(longlong *)(param_3 + 0x42) != 0) {
      local_158 = *(longlong **)(param_3 + 0x32);
      local_150 = *(longlong *)(param_3 + 0x42);
      plVar10 = (longlong *)FUN_18000bab0(param_1 + 0x12,&local_158);
      FUN_18000bb30(param_1 + 0x12,&local_158,ppvVar17,(ulonglong *)(plVar10 + 4),plVar10);
    }
    if (local_180 != (void *)0x0) {
      pvVar15 = local_180;
      if ((0xfff < (ulonglong)((((longlong)puVar18 - (longlong)local_180) / 0x28) * 0x28)) &&
         (pvVar15 = *(void **)((longlong)local_180 + -8),
         0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar15);
    }
    if (0xf < (ulonglong)plVar3[3]) {
      pvVar11 = (void *)*plVar3;
      pvVar15 = pvVar11;
      if ((0xfff < plVar3[3] + 1U) &&
         (pvVar15 = *(void **)((longlong)pvVar11 + -8),
         0x1f < (ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
LAB_180006007:
      free(pvVar15);
    }
  }
  plVar3[2] = 0;
  plVar3[3] = 0xf;
  *(undefined1 *)plVar3 = 0;
LAB_1800061bb:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_1d8);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800061f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *_Size;
  char *pcVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined1 auStackY_68 [32];
  ulonglong local_38;
  ulonglong *local_30;
  ulonglong local_28;
  byte local_20;
  ulonglong local_1f;
  ulonglong local_10;
  
  local_10 = DAT_180021010 ^ (ulonglong)auStackY_68;
  lVar2 = param_1[1];
  if ((lVar2 == 0) || (param_1[0xd] == 0)) {
    __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
    return;
  }
  if ((*(byte *)(lVar2 + 0xbc) & 2) != 0) {
    local_28 = *(ulonglong *)(lVar2 + 0x80);
    lVar2 = param_1[0x16];
    local_20 = 0x54;
    local_1f = 0x8dbfc2d2;
    if ((lVar2 != 0) &&
       (((*(longlong *)(lVar2 + 0x20) != 0 ||
         (uVar6 = FUN_1800042a0(param_1,(ulonglong *)(lVar2 + 0x10),lVar2,0,0), (char)uVar6 != '\0')
         ) && (uVar6 = FUN_1800047f0(param_1,*(ulonglong *)(lVar2 + 0x20),&local_38,&local_28),
              (char)uVar6 != '\0')))) {
      uVar13 = *local_30;
      if ((uVar13 < local_28) || (uVar13 >= local_28 && uVar13 != local_28)) {
LAB_180006405:
        pcVar9 = "could not find (%I64x,%x,%I64x) in root tree\n";
        uVar13 = local_28;
        uVar15 = local_1f;
        bVar4 = local_20;
      }
      else {
        bVar4 = (byte)local_30[1];
        if ((bVar4 < local_20) || (local_20 < bVar4)) goto LAB_180006405;
        uVar15 = *(ulonglong *)((longlong)local_30 + 9);
        if ((uVar15 < local_1f) || (uVar15 >= local_1f && uVar15 != local_1f)) goto LAB_180006405;
        if ((ushort)local_30[6] < 0x1f) {
          FUN_180002ef0("(%I64x,%x,%I64x) was %u bytes, expected at least %Iu\n",uVar13,
                        (ulonglong)bVar4,uVar15);
          goto LAB_180006415;
        }
        puVar3 = (ulonglong *)local_30[7];
        _Size = (char *)(ulonglong)*(ushort *)((longlong)puVar3 + 0x1b);
        pcVar9 = _Size + 0x1e;
        if ((char *)(ulonglong)(ushort)local_30[6] < pcVar9) {
          FUN_180002ef0("(%I64x,%x,%I64x) was %u bytes, expected %Iu\n",uVar13,(ulonglong)bVar4,
                        uVar15);
          goto LAB_180006415;
        }
        pcVar12 = _Size;
        pcVar14 = (char *)(ulonglong)bVar4;
        if (*(ushort *)((longlong)puVar3 + 0x1b) != 7) {
LAB_1800063f7:
          FUN_180002ef0("root DIR_ITEM had same CRC32, but was not \"default\"\n",pcVar12,pcVar14,
                        pcVar9);
          goto LAB_180006415;
        }
        pcVar12 = "default";
        iVar5 = memcmp((void *)((longlong)puVar3 + 0x1e),"default",(size_t)_Size);
        pcVar14 = _Size;
        if (iVar5 != 0) goto LAB_1800063f7;
        if ((byte)puVar3[1] == 0x84) {
          puVar11 = (undefined8 *)param_1[0xc];
          if (*(char *)((longlong)puVar11[1] + 0x19) == '\0') {
            puVar7 = puVar11;
            puVar10 = (undefined8 *)puVar11[1];
            do {
              puVar8 = puVar10;
              if ((ulonglong)puVar8[4] < *puVar3) {
                puVar10 = (undefined8 *)puVar8[2];
                puVar8 = puVar7;
              }
              else {
                puVar10 = (undefined8 *)*puVar8;
              }
              puVar7 = puVar8;
            } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
            if ((puVar8 == puVar11) || (*puVar3 < (ulonglong)puVar8[4])) goto LAB_1800063d3;
          }
          else {
LAB_1800063d3:
            puVar8 = puVar11;
          }
          if (puVar8 == puVar11) {
            FUN_180002ef0("could not find root %I64x, using default instead\n",*puVar3,puVar11,
                          pcVar9);
          }
          else if (puVar8[5] != 0) goto LAB_180006457;
          goto LAB_180006415;
        }
        pcVar9 = "default root has key (%I64x,%x,%I64x), expected subvolume\n";
        uVar13 = *puVar3;
        uVar15 = *(ulonglong *)((longlong)puVar3 + 9);
        bVar4 = (byte)puVar3[1];
      }
      FUN_180002ef0(pcVar9,uVar13,(ulonglong)bVar4,uVar15);
    }
  }
LAB_180006415:
  puVar11 = *(undefined8 **)(param_1[0xc] + 8);
  cVar1 = *(char *)((longlong)puVar11 + 0x19);
  while (cVar1 == '\0') {
    if ((ulonglong)puVar11[4] < 5) {
      puVar11 = (undefined8 *)puVar11[2];
    }
    else {
      puVar11 = (undefined8 *)*puVar11;
    }
    cVar1 = *(char *)((longlong)puVar11 + 0x19);
  }
LAB_180006457:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




ulonglong FUN_180006490(longlong param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulonglong in_RAX;
  void *_Dst;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    in_RAX = *(ulonglong *)(param_1 + 8);
    if ((uint)*(ushort *)(param_2 + 0x30) < *(uint *)(in_RAX + 0x94)) {
      if (*(ushort *)(param_2 + 0x30) < 0x1f) {
        return in_RAX & 0xffffffffffffff00;
      }
      if (*(short *)((longlong)puVar1 + 0x1b) == 0) {
        return in_RAX & 0xffffffffffffff00;
      }
      uVar2 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar2;
      *(undefined1 *)(param_4 + 2) = *(undefined1 *)(puVar1 + 2);
      if (param_3 != '\0') {
        *(undefined2 *)((longlong)param_4 + 100) = *(undefined2 *)((longlong)puVar1 + 0x1b);
        _Dst = operator_new((ulonglong)*(ushort *)((longlong)puVar1 + 0x1b) + 1);
        *(void **)((longlong)param_4 + 0x42) = _Dst;
        memset(_Dst,0,(ulonglong)*(ushort *)((longlong)puVar1 + 0x1b) + 1);
        memcpy(*(void **)((longlong)param_4 + 0x42),(void *)((longlong)puVar1 + 0x1e),
               (ulonglong)*(ushort *)((longlong)puVar1 + 0x1b));
      }
      uVar3 = 0x80;
      if (*(char *)((longlong)puVar1 + 0x1d) == '\x02') {
        uVar3 = 0x10;
      }
      *(undefined2 *)((longlong)param_4 + 0x66) = uVar3;
      *(undefined8 *)((longlong)param_4 + 0x32) = *param_4;
      return CONCAT71((int7)((ulonglong)*param_4 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_180006560(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  undefined1 auStackY_178 [32];
  ulonglong local_148;
  ulonglong *puStack_140;
  ulonglong local_138;
  ulonglong *puStack_130;
  undefined8 local_128;
  ulonglong local_118;
  byte local_110;
  ulonglong local_10f;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_c6;
  undefined8 local_be;
  void *local_b6;
  undefined2 local_96;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_54;
  ulonglong local_48;
  
  local_128 = 0xfffffffffffffffe;
  local_48 = DAT_180021010 ^ (ulonglong)auStackY_178;
  if (param_2 != 0) {
    local_110 = 0x60;
    local_10f = 2;
    local_148 = 0;
    puStack_140 = (ulonglong *)0x0;
    lVar8 = *(longlong *)(param_2 + 0x22);
    local_118 = param_3;
    if ((lVar8 != 0) &&
       (((*(longlong *)(lVar8 + 0x20) != 0 ||
         (uVar6 = FUN_1800042a0(param_1,(ulonglong *)(lVar8 + 0x10),lVar8,0,0), (char)uVar6 != '\0')
         ) && (uVar6 = FUN_1800047f0(param_1,*(ulonglong *)(lVar8 + 0x20),&local_148,&local_118),
              (char)uVar6 != '\0')))) {
      local_138 = 0;
      puStack_130 = (ulonglong *)0x0;
      if ((*puStack_140 < local_118) ||
         ((*puStack_140 <= local_118 &&
          (((byte)puStack_140[1] < local_110 ||
           (((byte)puStack_140[1] <= local_110 &&
            (*(ulonglong *)((longlong)puStack_140 + 9) < local_10f)))))))) {
        plVar1 = *(longlong **)(local_148 + 0x90);
        iVar10 = (int)plVar1[3] + 1;
        puVar4 = (ulonglong *)0x0;
        if ((ulonglong)(longlong)iVar10 < (ulonglong)(plVar1[1] - *plVar1 >> 6)) {
          *(int *)(plVar1 + 3) = iVar10;
          puVar4 = (ulonglong *)((longlong)iVar10 * 0x40 + *plVar1);
        }
        while (puVar4 != (ulonglong *)0x0) {
          if (*(char *)((longlong)puVar4 + 0x11) == '\0') {
            uVar3 = local_148;
            if (puVar4 != (ulonglong *)0x0) goto LAB_1800066fc;
            break;
          }
          plVar1 = *(longlong **)(local_148 + 0x90);
          iVar10 = (int)plVar1[3] + 1;
          if ((ulonglong)(plVar1[1] - *plVar1 >> 6) <= (ulonglong)(longlong)iVar10) break;
          *(int *)(plVar1 + 3) = iVar10;
          puVar4 = (ulonglong *)((longlong)iVar10 * 0x40 + *plVar1);
        }
        if ((*(longlong *)(local_148 + 0x70) != 0) &&
           (uVar7 = FUN_180004b80(param_1,(longlong *)&local_148,(longlong *)&local_138,'\0'),
           uVar3 = local_138, puVar4 = puStack_130, (char)uVar7 != '\0')) {
LAB_1800066fc:
          puStack_130 = puVar4;
          local_138 = uVar3;
          local_148 = local_138;
          puStack_140 = puStack_130;
        }
      }
      if (*puStack_140 == local_118) {
        do {
          if ((byte)puStack_140[1] != local_110) break;
          local_80 = (void *)0x0;
          local_78 = 0;
          local_80 = (void *)FUN_180002c90((ulonglong)local_110,(undefined8 *)0x0,(undefined8 *)0x0)
          ;
          local_d6 = 0;
          local_c6 = 0;
          local_b6 = (void *)0x0;
          local_94 = 0;
          local_be = 0;
          local_96 = 0;
          local_90 = 0;
          local_64 = 0;
          local_6c = 0;
          local_5c = 0;
          local_54 = 0;
          local_ce = 0;
          local_88 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          if ((((puStack_140 != (ulonglong *)0x0) &&
               (puVar2 = (undefined8 *)puStack_140[7], puVar2 != (undefined8 *)0x0)) &&
              ((uint)(ushort)puStack_140[6] < *(uint *)(param_1[1] + 0x94))) &&
             ((0x1e < (ushort)puStack_140[6] && (*(short *)((longlong)puVar2 + 0x1b) != 0)))) {
            local_f8 = *puVar2;
            uStack_f0 = puVar2[1];
            local_e8 = (ulonglong)*(byte *)(puVar2 + 2);
            local_94 = (uint)*(ushort *)((longlong)puVar2 + 0x1b);
            local_b6 = operator_new((ulonglong)*(ushort *)((longlong)puVar2 + 0x1b) + 1);
            memset(local_b6,0,(ulonglong)*(ushort *)((longlong)puVar2 + 0x1b) + 1);
            pvVar9 = local_b6;
            memcpy(local_b6,(void *)((longlong)puVar2 + 0x1e),
                   (ulonglong)*(ushort *)((longlong)puVar2 + 0x1b));
            uVar5 = 0x80;
            if (*(char *)((longlong)puVar2 + 0x1d) == '\x02') {
              uVar5 = 0x10;
            }
            local_94 = CONCAT22(uVar5,(undefined2)local_94);
            local_c6 = local_f8;
            lVar8 = param_1[0x4b];
            *(int *)(param_1 + 0x4b) = (int)lVar8 + 1;
            local_ce = CONCAT44((int)lVar8,*(undefined4 *)(param_2 + 0x2e));
            puVar2 = *(undefined8 **)(param_2 + 0x78);
            plVar1 = (longlong *)puVar2[1];
            lVar8 = FUN_18000a820(pvVar9,puVar2,plVar1,&local_f8);
            if (*(longlong *)(param_2 + 0x80) != 0x1642c8590b21641) {
              *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x80) + 1;
              puVar2[1] = lVar8;
              *plVar1 = lVar8;
              goto LAB_1800068a4;
            }
            std::_Xlength_error("list<T> too long");
LAB_1800069b2:
            FUN_180002b20((longlong *)&local_80);
            free(local_80);
            break;
          }
LAB_1800068a4:
          plVar1 = *(longlong **)(local_148 + 0x90);
          iVar10 = (int)plVar1[3] + 1;
          puVar4 = (ulonglong *)0x0;
          if ((ulonglong)(longlong)iVar10 < (ulonglong)(plVar1[1] - *plVar1 >> 6)) {
            *(int *)(plVar1 + 3) = iVar10;
            puVar4 = (ulonglong *)((longlong)iVar10 * 0x40 + *plVar1);
          }
          while (puVar4 != (ulonglong *)0x0) {
            if (*(char *)((longlong)puVar4 + 0x11) == '\0') {
              uVar3 = local_148;
              if (puVar4 != (ulonglong *)0x0) goto LAB_18000695d;
              break;
            }
            plVar1 = *(longlong **)(local_148 + 0x90);
            iVar10 = (int)plVar1[3] + 1;
            if ((ulonglong)(plVar1[1] - *plVar1 >> 6) <= (ulonglong)(longlong)iVar10) break;
            *(int *)(plVar1 + 3) = iVar10;
            puVar4 = (ulonglong *)((longlong)iVar10 * 0x40 + *plVar1);
          }
          if ((*(longlong *)(local_148 + 0x70) == 0) ||
             (uVar7 = FUN_180004b80(param_1,(longlong *)&local_148,(longlong *)&local_138,'\0'),
             uVar3 = local_138, puVar4 = puStack_130, (char)uVar7 == '\0')) goto LAB_1800069b2;
LAB_18000695d:
          puStack_130 = puVar4;
          local_138 = uVar3;
          local_148 = local_138;
          puStack_140 = puStack_130;
          FUN_180002b20((longlong *)&local_80);
          free(local_80);
        } while (*puStack_140 == local_118);
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_178);
  return;
}




ulonglong FUN_180006a00(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *in_RAX;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *in_stack_ffffffffffffffb8;
  ulonglong local_38;
  ulonglong *local_30;
  
  if ((param_2 == (undefined8 *)0x0) || (param_3 == (ulonglong *)0x0)) goto LAB_180006b76;
  if ((char)param_3[1] == -0x7c) {
    puVar1 = (undefined8 *)param_1[0xc];
    if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
      puVar3 = puVar1;
      puVar6 = (undefined8 *)puVar1[1];
      do {
        in_RAX = puVar6;
        if ((ulonglong)in_RAX[4] < *param_3) {
          puVar6 = (undefined8 *)in_RAX[2];
          in_RAX = puVar3;
        }
        else {
          puVar6 = (undefined8 *)*in_RAX;
        }
        puVar3 = in_RAX;
      } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
      if ((in_RAX == puVar1) || (*param_3 < (ulonglong)in_RAX[4])) goto LAB_180006a6b;
    }
    else {
LAB_180006a6b:
      in_RAX = puVar1;
    }
    if (in_RAX == puVar1) goto LAB_180006b76;
    lVar8 = in_RAX[5];
    uVar7 = 0x100;
  }
  else {
    lVar8 = *(longlong *)((longlong)param_2 + 0x22);
    uVar7 = *param_3;
  }
  if (lVar8 == 0) goto LAB_180006b76;
  *(ulonglong *)((longlong)param_3 + 0x32) = *param_3;
  *(longlong *)((longlong)param_3 + 0x22) = lVar8;
  if (uVar7 == 0x100) {
    puVar1 = (undefined8 *)param_1[0xe];
    if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
      puVar3 = puVar1;
      puVar6 = (undefined8 *)puVar1[1];
      do {
        puVar4 = puVar6;
        if ((ulonglong)puVar4[4] < *param_3) {
          puVar6 = (undefined8 *)puVar4[2];
          puVar4 = puVar3;
        }
        else {
          puVar6 = (undefined8 *)*puVar4;
        }
        puVar3 = puVar4;
      } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
      if ((puVar4 == puVar1) || (*param_3 < (ulonglong)puVar4[4])) goto LAB_180006ae6;
    }
    else {
LAB_180006ae6:
      puVar4 = puVar1;
    }
    if (puVar4 == puVar1) {
      uVar9 = 0x100;
      cVar2 = FUN_180006560(param_1,(longlong)param_3,0x100);
      if (cVar2 != '\0') {
        local_38 = *param_3;
        local_30 = param_3;
        in_stack_ffffffffffffffb8 = (longlong *)FUN_18000ab80(param_1 + 0xe,&local_38);
        FUN_18000abb0(param_1 + 0xe,&local_38,uVar9,(ulonglong *)(in_stack_ffffffffffffffb8 + 4),
                      in_stack_ffffffffffffffb8);
      }
    }
  }
  uVar9 = param_2[1];
  *(undefined8 *)((longlong)param_3 + 0x11) = *param_2;
  *(undefined8 *)((longlong)param_3 + 0x19) = uVar9;
  *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)(param_2 + 2);
  plVar5 = FUN_180008d60((longlong *)&local_38,*(void **)((longlong)param_3 + 0x42));
  in_RAX = (undefined8 *)
           FUN_180005af0(param_1,lVar8,(longlong)param_3,uVar7,in_stack_ffffffffffffffb8,plVar5);
  if ((char)in_RAX != '\0') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
LAB_180006b76:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




void FUN_180006b90(void)

{
  return;
}




void FUN_180006ba0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(param_3 + 0x10);
    *(ulonglong *)(param_2 + 0x4a) =
         (ulonglong)*(uint *)(param_3 + 0x84) / 100 +
         (*(longlong *)(param_3 + 0x7c) + 0x2b6109100) * 10000000;
    *(ulonglong *)(param_2 + 0x52) =
         (ulonglong)*(uint *)(param_3 + 0x90) / 100 +
         (*(longlong *)(param_3 + 0x88) + 0x2b6109100) * 10000000;
    *(ulonglong *)(param_2 + 0x5a) =
         (ulonglong)*(uint *)(param_3 + 0x78) / 100 +
         (*(longlong *)(param_3 + 0x70) + 0x2b6109100) * 10000000;
  }
  return;
}




ulonglong FUN_180006c80(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar3;
  void *_Dst;
  uint uVar4;
  longlong local_68;
  uint local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (((param_2 != 0) && (param_3 != 0)) && (in_RAX = *(ulonglong *)(param_2 + 8), in_RAX < 0x4001))
  {
    *(longlong *)(param_1 + 0x268) = *(longlong *)(param_1 + 0x268) + in_RAX;
    memset(*(void **)(param_1 + 0x260),0,0x4000);
    local_60 = *(uint *)(param_2 + 8);
    local_68 = param_2 + 0x15;
    local_58 = *(undefined8 *)(param_1 + 0x260);
    uVar4 = (local_60 >> 0xe) + local_60 + (local_60 >> 0xc) + 0xb;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_50 = uVar4;
    iVar2 = FUN_1800111a0((longlong)&local_68);
    in_RAX = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      uVar3 = FUN_180011550(&local_68);
      iVar2 = (int)uVar3;
      if (iVar2 == 1) {
        in_RAX = FUN_180011e00((longlong)&local_68);
        iVar2 = (int)in_RAX;
        uVar4 = local_4c;
      }
      else {
        FUN_180011e00((longlong)&local_68);
        in_RAX = 0xfffffffb;
        if (iVar2 == 0) {
          iVar2 = -5;
        }
      }
    }
    if (iVar2 == 0) {
      *(longlong *)(param_1 + 0x270) = *(longlong *)(param_1 + 0x270) + (ulonglong)uVar4;
      _Dst = operator_new((ulonglong)uVar4);
      *(void **)(param_3 + 0x94) = _Dst;
      memcpy(_Dst,*(void **)(param_1 + 0x260),(ulonglong)uVar4);
      *(uint *)(param_3 + 0x9c) = uVar4;
      uVar1 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_3 + 0xa0) = uVar1;
      *(undefined1 *)(param_3 + 0xa4) = 1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180006de0(undefined8 *param_1,char param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined2 *_Memory;
  longlong *plVar9;
  ulonglong extraout_RAX;
  undefined1 *extraout_RAX_00;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_res18;
  undefined **local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_60;
  char cStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  ulonglong *puStack_48;
  undefined8 local_38;
  undefined2 *local_30;
  
  local_38 = 0xfffffffffffffffe;
  lVar11 = *param_3;
  if (lVar11 != param_3[1]) {
    if (param_2 == '\0') {
      local_b8 = IDataRunList::vftable;
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b0 = (longlong *)operator_new(0x10);
      *local_b0 = 0;
      local_b0[1] = 0;
      *local_b0 = (longlong)&local_b0;
      local_80 = 0;
      local_78 = local_98;
      local_b8 = CBtrfsNoResidentDataRunList::vftable;
      lVar11 = *param_3;
      local_88 = local_b0;
      if (lVar11 != param_3[1]) {
        do {
          if ((*(longlong *)(lVar11 + 0x18) != 0) &&
             (*(ulonglong **)(lVar11 + 0x20) != (ulonglong *)0x0)) {
            uVar7 = **(ulonglong **)(lVar11 + 0x20);
            if (*(char *)(param_1 + 0x1a) == '\0') {
              puVar8 = *(undefined8 **)param_1[2];
              goto joined_r0x0001800070f2;
            }
            puVar8 = *(undefined8 **)param_1[4];
            while( true ) {
              if (puVar8 == (undefined8 *)param_1[4]) goto LAB_18000715f;
              lVar10 = puVar8[2];
              uVar3 = *(ulonglong *)(lVar10 + 0x18);
              if ((uVar3 <= uVar7) && (plVar9 = *(longlong **)(lVar10 + 8), uVar7 < *plVar9 + uVar3)
                 ) break;
              puVar8 = (undefined8 *)*puVar8;
            }
            uVar1 = *(ushort *)(lVar10 + 0x20);
            if ((plVar9 != (longlong *)0x0) && (*(ushort *)((longlong)plVar9 + 0x2c) != 0)) {
              *(short *)(lVar10 + 0x20) =
                   (short)(((ulonglong)uVar1 + 1) % (ulonglong)*(ushort *)((longlong)plVar9 + 0x2c))
              ;
            }
            lVar12 = (plVar9[(ulonglong)uVar1 * 4 + 7] + **(longlong **)(lVar11 + 0x20)) - uVar3;
            iVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))();
            iVar6 = (**(code **)(*(longlong *)*param_1 + 0x28))();
            uVar7 = *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 8);
            local_res18 = (longlong *)operator_new(0x10);
            *local_res18 = lVar12 / (longlong)iVar5;
            local_res18[1] = uVar7 / (ulonglong)(longlong)iVar6;
            FUN_18000dde0((longlong)&local_b0,&local_res18);
            if (((longlong *)param_1[0x48] != (longlong *)0x0) &&
               (*(char *)(param_1 + 0x49) != '\0')) {
              uVar2 = *(uint *)(param_1[1] + 0x90);
              FUN_180015400((longlong *)param_1[0x48],lVar12 / (longlong)(ulonglong)uVar2,lVar10,
                            (ulonglong)((uVar2 - 1) + *(int *)(*(longlong *)(lVar11 + 0x20) + 8)) /
                            (ulonglong)uVar2);
            }
          }
          lVar11 = lVar11 + 0x28;
        } while (lVar11 != param_3[1]);
      }
      local_res18 = (longlong *)0x0;
      local_68 = 0;
      _Memory = (undefined2 *)operator_new(0x10);
      *_Memory = 0;
      *(undefined8 *)(_Memory + 4) = 0;
      local_30 = _Memory;
      iVar5 = (*(code *)local_b8[5])(&local_b8);
      if ((iVar5 == 1) || (iVar5 = (*(code *)local_b8[5])(&local_b8), iVar5 == 0xe)) {
        uVar4 = (*(code *)local_b8[2])(&local_b8);
        *_Memory = uVar4;
      }
      plVar9 = FUN_180010090((longlong)&local_b8,(longlong *)&local_res18,&local_68);
      *(longlong **)(_Memory + 4) = plVar9;
      if (plVar9 == (longlong *)0x0) {
        free(_Memory);
        _Memory = (undefined2 *)0x0;
      }
      *(undefined2 **)(param_4 + 0x8c) = _Memory;
      *(longlong **)(param_4 + 0x70) = local_res18;
      local_b8 = IDataRunList::vftable;
      FUN_180010a50((longlong)&local_b8);
      FUN_180010d00((longlong)&local_b0);
      free(local_b0);
      uVar7 = extraout_RAX;
    }
    else {
      lVar10 = param_3[1] - lVar11;
      register0x00000020 = (BADSPACEBASE *)-(lVar10 >> 0x3f);
      if (1 < (ulonglong)(lVar10 / 0x28)) goto LAB_18000718a;
      uVar7 = FUN_180006c80((longlong)param_1,*(longlong *)(lVar11 + 0x18),param_4);
    }
    return CONCAT71((int7)(uVar7 >> 8),1);
  }
  goto LAB_18000718a;
joined_r0x0001800070f2:
  if (puVar8 == (undefined8 *)param_1[2]) goto LAB_18000714c;
  local_60 = puVar8[2];
  cStack_58 = (char)puVar8[3];
  uStack_57 = (undefined7)((ulonglong)puVar8[3] >> 8);
  puStack_48 = (ulonglong *)puVar8[5];
  uStack_50 = (undefined1)puVar8[4];
  uStack_4f = (undefined7)((ulonglong)puVar8[4] >> 8);
  if ((((local_60 == 0x100) && (cStack_58 == -0x1c)) && (CONCAT17(uStack_50,uStack_57) <= uVar7)) &&
     ((uVar7 - CONCAT17(uStack_50,uStack_57) < *puStack_48 &&
      (*(short *)((longlong)puStack_48 + 0x2c) != 0)))) goto LAB_18000715f;
  puVar8 = (undefined8 *)*puVar8;
  goto joined_r0x0001800070f2;
LAB_18000714c:
  FUN_180006b90();
LAB_18000715f:
  local_b8 = IDataRunList::vftable;
  FUN_180010a50((longlong)&local_b8);
  FUN_180010d00((longlong)&local_b0);
  free(local_b0);
  register0x00000020 = (BADSPACEBASE *)extraout_RAX_00;
LAB_18000718a:
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}




void FUN_1800071a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong *_Memory;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  _Memory = (longlong *)*plVar1;
  if (_Memory != plVar1) {
    do {
      free((void *)_Memory[2]);
      plVar1 = *(longlong **)(param_1 + 0x30);
      _Memory = (longlong *)*_Memory;
    } while (_Memory != plVar1);
    _Memory = (longlong *)*plVar1;
  }
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (_Memory != *(longlong **)(param_1 + 0x30)) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x30));
  }
  puVar2 = (undefined8 *)FUN_18000d230();
  FUN_18000d2f0(puVar2);
  puVar3 = FUN_18000d230();
  FUN_18000d3c0((longlong)puVar3);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x20) = 0;
  }
  return;
}




ulonglong FUN_180007260(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined7 extraout_var;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x240);
  if ((((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) ||
      (plVar4 = *(longlong **)(param_1 + 8), plVar4 == (longlong *)0x0)) ||
     ((*(char *)(param_1 + 0xd1) == '\0' && (*(char *)(param_1 + 0x248) == '\0')))) {
    return (ulonglong)plVar4 & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(plVar4 + 0x12);
  iVar5 = 0;
  if (0 < param_3) {
    do {
      plVar4 = *(longlong **)(param_1 + 0x240);
      bVar2 = FUN_180015500(plVar4,param_2 / (longlong)(ulonglong)uVar1);
      if (((int)CONCAT71(extraout_var,bVar2) != 0) ||
         ((plVar4 = (longlong *)plVar4[0xc], plVar4 != (longlong *)0x0 &&
          (cVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2 / (longlong)(ulonglong)uVar1),
          cVar3 != '\0')))) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  return 0;
}




ulonglong FUN_180007340(longlong *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  void *_Buf2;
  longlong *plVar2;
  undefined2 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  undefined **local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70 [2];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  
  local_50 = 0xfffffffffffffffe;
  uVar15 = (*(ulonglong **)(param_2 + 0x90))[1];
  if (**(ulonglong **)(param_2 + 0x90) == uVar15) {
    uVar15 = uVar15 & 0xffffffffffffff00;
  }
  else {
    puVar14 = (undefined8 *)param_1[0x10];
    plVar12 = param_1;
    puVar7 = puVar14;
    if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
      plVar12 = *(longlong **)(param_2 + 0x58);
      puVar8 = (undefined8 *)puVar14[1];
      do {
        if ((longlong *)puVar8[4] < plVar12) {
          puVar9 = (undefined8 *)puVar8[2];
        }
        else {
          puVar9 = (undefined8 *)*puVar8;
          puVar7 = puVar8;
        }
        puVar8 = puVar9;
      } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    }
    if ((puVar7 == puVar14) || (*(ulonglong *)(param_2 + 0x58) < (ulonglong)puVar7[4])) {
      puVar7 = puVar14;
    }
    local_res18 = param_3;
    if (puVar7 == puVar14) {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      plVar12 = param_3;
      local_88 = (longlong *)FUN_180009920();
      local_78 = *(undefined8 *)(param_2 + 0x58);
      FUN_18000b4b0((longlong *)local_70,(longlong *)&local_88);
      plVar5 = (longlong *)FUN_18000ad10(param_1 + 0x10,&local_78);
      FUN_18000ad80(param_1 + 0x10,&local_60,plVar12,(ulonglong *)(plVar5 + 4),plVar5);
      FUN_180009180((longlong *)local_70,&local_res10,(longlong *)*local_70[0],local_70[0]);
      free(local_70[0]);
      puVar14 = (undefined8 *)param_1[0x10];
      puVar7 = puVar14;
      if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
        puVar8 = (undefined8 *)puVar14[1];
        do {
          if ((ulonglong)puVar8[4] < *(ulonglong *)(param_2 + 0x58)) {
            puVar9 = (undefined8 *)puVar8[2];
          }
          else {
            puVar9 = (undefined8 *)*puVar8;
            puVar7 = puVar8;
          }
          puVar8 = puVar9;
        } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
      }
      if ((puVar7 == puVar14) || (*(ulonglong *)(param_2 + 0x58) < (ulonglong)puVar7[4])) {
        puVar7 = puVar14;
      }
      FUN_180009180((longlong *)&local_88,&local_res10,(longlong *)*local_88,local_88);
      plVar12 = local_88;
      free(local_88);
    }
    plVar5 = puVar7 + 5;
    plVar16 = *(longlong **)(param_2 + 0x90);
    if (*plVar16 != plVar16[1]) {
      *(undefined4 *)(plVar16 + 3) = 0;
      puVar13 = (ulonglong *)*plVar16;
      while (puVar13 != (ulonglong *)0x0) {
        puVar6 = (ulonglong *)FUN_180007e80(plVar12,*puVar13,plVar5);
        cVar1 = (char)puVar13[1];
        if (cVar1 == '`') {
          FUN_180007ba0((longlong)param_1,puVar13,(longlong)puVar6,plVar5);
        }
        else if (cVar1 == '\x01') {
          FUN_180006ba0(plVar12,(longlong)puVar6,puVar13[7]);
          *(uint *)(puVar6 + 0x17) = (uint)puVar6[0x17] | 2;
        }
        else if (cVar1 == 'l') {
          FUN_180008060(param_1,(longlong)puVar13,puVar6);
        }
        else if (cVar1 == -0x1c) {
          FUN_180003b20((ulonglong)param_1,(longlong)puVar13,param_1 + 10,'\0');
        }
        plVar12 = *(longlong **)(param_2 + 0x90);
        uVar15 = (longlong)(int)plVar12[3] + 1;
        if ((ulonglong)(plVar12[1] - *plVar12 >> 6) <= uVar15) break;
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        puVar13 = (ulonglong *)(uVar15 * 0x40 + *plVar12);
      }
    }
    plVar12 = (longlong *)*plVar5;
    plVar16 = (longlong *)*plVar12;
    if (plVar16 != plVar12) {
      do {
        *(undefined1 *)((longlong)plVar16 + 0x8a) = 1;
        if (*(short *)((longlong)plVar16 + 0x8e) == 0x10) {
          if ((int)plVar16[0x1c] < 3) {
            plVar11 = (longlong *)plVar16[2];
            if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar11 + 0x19);
              plVar12 = (longlong *)*plVar11;
              while (plVar16 = plVar11, cVar1 == '\0') {
                cVar1 = *(char *)(*plVar12 + 0x19);
                plVar11 = plVar12;
                plVar12 = (longlong *)*plVar12;
              }
            }
            else {
              cVar1 = *(char *)(plVar16[1] + 0x19);
              plVar2 = (longlong *)plVar16[1];
              plVar11 = plVar16;
              while ((plVar12 = plVar2, plVar16 = plVar12, cVar1 == '\0' &&
                     (plVar11 == (longlong *)plVar12[2]))) {
                cVar1 = *(char *)(plVar12[1] + 0x19);
                plVar2 = (longlong *)plVar12[1];
                plVar11 = plVar12;
              }
            }
          }
          else {
LAB_1800079c7:
            plVar12 = *(longlong **)((longlong)plVar16 + 0x39);
            FUN_180006b90();
            puVar14 = (undefined8 *)param_3[1];
            if ((undefined8 *)param_3[2] == puVar14) {
              plVar12 = plVar16 + 5;
              FUN_180009e10(param_3,puVar14,plVar12);
            }
            else {
              FUN_18000a360(puVar14,plVar16 + 5);
              param_3[1] = param_3[1] + 0xa5;
            }
            if (*(longlong *)((longlong)plVar16 + 0x6a) != 0) {
              local_60 = *(undefined8 *)((longlong)plVar16 + 0x5a);
              local_58 = *(longlong *)((longlong)plVar16 + 0x6a);
              plVar11 = (longlong *)FUN_18000bab0(param_1 + 0x12,&local_60);
              FUN_18000bb30(param_1 + 0x12,&local_78,plVar12,(ulonglong *)(plVar11 + 4),plVar11);
            }
            plVar11 = (longlong *)plVar16[2];
            if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar11 + 0x19);
              plVar12 = (longlong *)*plVar11;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar12 + 0x19);
                plVar11 = plVar12;
                plVar12 = (longlong *)*plVar12;
              }
              plVar12 = FUN_1800094d0(plVar5,&local_40,plVar16);
              plVar16 = plVar11;
            }
            else {
              cVar1 = *(char *)(plVar16[1] + 0x19);
              plVar11 = (longlong *)plVar16[1];
              plVar12 = plVar16;
              while ((plVar2 = plVar11, cVar1 == '\0' && (plVar12 == (longlong *)plVar2[2]))) {
                cVar1 = *(char *)(plVar2[1] + 0x19);
                plVar11 = (longlong *)plVar2[1];
                plVar12 = plVar2;
              }
              plVar12 = FUN_1800094d0(plVar5,&local_40,plVar16);
              plVar16 = plVar2;
            }
          }
        }
        else {
          if ((((*(uint *)(plVar16 + 0x1c) & 8) == 0) && (6 < (int)*(uint *)(plVar16 + 0x1c))) &&
             (*(longlong *)((longlong)plVar16 + 0x62) <= plVar16[0x1d])) {
            puVar14 = (undefined8 *)param_1[0x12];
            if (*(char *)((longlong)puVar14[1] + 0x19) == '\0') {
              puVar7 = (undefined8 *)puVar14[1];
              do {
                if ((ulonglong)puVar7[4] < *(ulonglong *)((longlong)plVar16 + 0x5a)) {
                  puVar8 = (undefined8 *)puVar7[2];
                }
                else {
                  puVar8 = (undefined8 *)*puVar7;
                  puVar14 = puVar7;
                }
                puVar7 = puVar8;
              } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
            }
            puVar7 = (undefined8 *)param_1[0x12];
            if (*(char *)((longlong)puVar7[1] + 0x19) == '\0') {
              puVar8 = (undefined8 *)puVar7[1];
              do {
                if (*(ulonglong *)((longlong)plVar16 + 0x5a) < (ulonglong)puVar8[4]) {
                  puVar9 = (undefined8 *)*puVar8;
                  puVar7 = puVar8;
                }
                else {
                  puVar9 = (undefined8 *)puVar8[2];
                }
                puVar8 = puVar9;
              } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
            }
            if (puVar14 != puVar7) {
              _Buf2 = *(void **)((longlong)plVar16 + 0x6a);
LAB_1800076b0:
              puVar8 = puVar14 + 5;
              sVar10 = 0xffffffffffffffff;
              do {
                sVar10 = sVar10 + 1;
              } while (*(char *)((longlong)_Buf2 + sVar10) != '\0');
              if (0xf < (ulonglong)puVar14[8]) {
                puVar8 = (undefined8 *)*puVar8;
              }
              if ((puVar14[7] != sVar10) || (iVar4 = memcmp(puVar8,_Buf2,puVar14[7]), iVar4 != 0))
              goto LAB_1800076ec;
              if (_Buf2 != (void *)0x0) {
                free(_Buf2);
              }
              plVar11 = (longlong *)plVar16[2];
              if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar11 + 0x19);
                plVar12 = (longlong *)*plVar11;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar12 + 0x19);
                  plVar11 = plVar12;
                  plVar12 = (longlong *)*plVar12;
                }
              }
              else {
                cVar1 = *(char *)(plVar16[1] + 0x19);
                plVar2 = (longlong *)plVar16[1];
                plVar12 = plVar16;
                while ((plVar11 = plVar2, cVar1 == '\0' && (plVar12 == (longlong *)plVar11[2]))) {
                  cVar1 = *(char *)(plVar11[1] + 0x19);
                  plVar2 = (longlong *)plVar11[1];
                  plVar12 = plVar11;
                }
              }
              plVar12 = FUN_1800094d0(plVar5,&local_res20,plVar16);
              plVar16 = plVar11;
              param_3 = local_res18;
              goto LAB_180007b0c;
            }
LAB_180007740:
            local_d8 = IDataRunList::vftable;
            local_d0 = (longlong *)0x0;
            local_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_d0 = (longlong *)operator_new(0x10);
            *local_d0 = 0;
            local_d0[1] = 0;
            *local_d0 = (longlong)&local_d0;
            local_a0 = 0;
            local_98 = local_b8;
            local_d8 = CBtrfsNoResidentDataRunList::vftable;
            plVar12 = *(longlong **)plVar16[0x1a];
            local_a8 = local_d0;
            if (plVar12 != (longlong *)plVar16[0x1a]) {
              do {
                local_res10 = (longlong *)operator_new(0x10);
                *local_res10 = plVar12[4];
                local_res10[1] = plVar12[5];
                FUN_18000dde0((longlong)&local_d0,&local_res10);
                plVar11 = (longlong *)plVar12[2];
                if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
                  cVar1 = *(char *)(*plVar11 + 0x19);
                  plVar12 = plVar11;
                  plVar11 = (longlong *)*plVar11;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*plVar11 + 0x19);
                    plVar12 = plVar11;
                    plVar11 = (longlong *)*plVar11;
                  }
                }
                else {
                  cVar1 = *(char *)(plVar12[1] + 0x19);
                  plVar2 = (longlong *)plVar12[1];
                  plVar11 = plVar12;
                  while ((plVar12 = plVar2, cVar1 == '\0' && (plVar11 == (longlong *)plVar12[2]))) {
                    cVar1 = *(char *)(plVar12[1] + 0x19);
                    plVar2 = (longlong *)plVar12[1];
                    plVar11 = plVar12;
                  }
                }
              } while (plVar12 != (longlong *)plVar16[0x1a]);
            }
            plVar12 = (longlong *)operator_new(0x10);
            *(undefined2 *)plVar12 = 0;
            plVar12[1] = 0;
            local_res10 = plVar12;
            iVar4 = (*(code *)local_d8[5])(&local_d8);
            if ((iVar4 == 1) || (iVar4 = (*(code *)local_d8[5])(&local_d8), iVar4 == 0xe)) {
              uVar3 = (*(code *)local_d8[2])(&local_d8);
              *(undefined2 *)plVar12 = uVar3;
            }
            plVar11 = FUN_180010090((longlong)&local_d8,(longlong *)&local_res10,&local_48);
            plVar12[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) {
              free(plVar12);
              plVar12 = (longlong *)0x0;
            }
            plVar11 = local_d0;
            *(longlong **)((longlong)plVar16 + 0xb4) = plVar12;
            local_d8 = IDataRunList::vftable;
            for (uVar15 = local_b8; uVar15 != local_b8 + local_b0; uVar15 = uVar15 + 1) {
              plVar12 = (longlong *)0x0;
              if (plVar11 != (longlong *)0x0) {
                plVar12 = (longlong *)*plVar11;
              }
              free(*(void **)(*(longlong *)(plVar12[1] + (uVar15 >> 1 & plVar12[2] - 1U) * 8) +
                             (ulonglong)((uint)uVar15 & 1) * 8));
            }
            FUN_180010d00((longlong)&local_d0);
            if (((local_a8 != local_d0) && (local_d0 != (longlong *)0x0)) &&
               ((undefined8 *)*local_d0 != (undefined8 *)0x0)) {
              local_a8 = *(longlong **)*local_d0;
            }
            local_98 = local_b8;
            FUN_180010d00((longlong)&local_d0);
            free(local_d0);
            local_d0 = (longlong *)0x0;
            param_3 = local_res18;
            goto LAB_1800079c7;
          }
          plVar11 = (longlong *)plVar16[2];
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar11 + 0x19);
            plVar12 = (longlong *)*plVar11;
            while (plVar16 = plVar11, cVar1 == '\0') {
              cVar1 = *(char *)(*plVar12 + 0x19);
              plVar11 = plVar12;
              plVar12 = (longlong *)*plVar12;
            }
          }
          else {
            cVar1 = *(char *)(plVar16[1] + 0x19);
            plVar2 = (longlong *)plVar16[1];
            plVar11 = plVar16;
            while ((plVar12 = plVar2, plVar16 = plVar12, cVar1 == '\0' &&
                   (plVar11 == (longlong *)plVar12[2]))) {
              cVar1 = *(char *)(plVar12[1] + 0x19);
              plVar2 = (longlong *)plVar12[1];
              plVar11 = plVar12;
            }
          }
        }
LAB_180007b0c:
      } while (plVar16 != (longlong *)*plVar5);
    }
    uVar15 = CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
  }
  return uVar15;
LAB_1800076ec:
  puVar8 = (undefined8 *)puVar14[2];
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    cVar1 = *(char *)((longlong)*puVar8 + 0x19);
    puVar14 = puVar8;
    puVar8 = (undefined8 *)*puVar8;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((longlong)*puVar8 + 0x19);
      puVar14 = puVar8;
      puVar8 = (undefined8 *)*puVar8;
    }
  }
  else {
    cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
    puVar9 = (undefined8 *)puVar14[1];
    puVar8 = puVar14;
    while ((puVar14 = puVar9, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar14[2]))) {
      cVar1 = *(char *)((longlong)puVar14[1] + 0x19);
      puVar9 = (undefined8 *)puVar14[1];
      puVar8 = puVar14;
    }
  }
  if (puVar14 == puVar7) goto LAB_180007740;
  goto LAB_1800076b0;
}




void FUN_180007b40(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009180(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180007b70(longlong param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009180((longlong *)(param_1 + 8),local_res8,(longlong *)**(longlong **)(param_1 + 8),
                *(longlong **)(param_1 + 8));
  free(*(void **)(param_1 + 8));
  return;
}




void FUN_180007ba0(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStackY_238 [32];
  undefined8 *local_208 [2];
  undefined8 local_1f8;
  ulonglong local_1e8 [2];
  undefined8 local_1d7;
  undefined8 uStack_1cf;
  undefined1 local_1c7;
  void *local_170 [6];
  void *local_140;
  undefined8 local_138;
  uint local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined8 local_110 [15];
  void *local_98 [6];
  void *local_68 [2];
  uint local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_1f8 = 0xfffffffffffffffe;
  local_48 = DAT_180021010 ^ (ulonglong)auStackY_238;
  if ((param_2 != (undefined8 *)0x0) && (param_3 != 0)) {
    FUN_1800013c0(local_1e8);
    local_140 = (void *)0x0;
    local_138 = 0;
    local_140 = (void *)FUN_180009a70();
    local_128 = 0;
    local_130 = 0;
    lVar6 = param_1;
    uVar3 = FUN_180006490(param_1,(longlong)param_2,'\x01',local_1e8);
    if ((char)uVar3 != '\0') {
      plVar7 = param_4;
      puVar4 = (undefined8 *)FUN_180007e80(lVar6,local_1e8[0],param_4);
      if (puVar4 == (undefined8 *)0x0) {
        local_1d7 = *param_2;
        uStack_1cf = param_2[1];
        local_1c7 = *(undefined1 *)(param_2 + 2);
        local_130 = local_130 | 1;
        local_118 = local_1e8[0];
        local_208[0] = local_110;
        FUN_18000a360(local_110,local_1e8);
        FUN_18000b570((longlong *)local_68,(longlong *)&local_140);
        local_58 = local_130;
        local_50 = local_128;
        plVar5 = (longlong *)FUN_18000af10(param_4,&local_118);
        FUN_18000afe0(param_4,local_208,plVar7,(ulonglong *)(plVar5 + 4),plVar5);
        FUN_180008c10((longlong *)local_68);
        free(local_68[0]);
        FUN_180002b20((longlong *)local_98);
        free(local_98[0]);
        puVar4 = *(undefined8 **)(param_3 + 0x78);
        plVar7 = (longlong *)puVar4[1];
        lVar6 = FUN_18000a820(local_98[0],puVar4,plVar7,local_1e8);
        if (*(longlong *)(param_3 + 0x80) == 0x1642c8590b21641) {
          std::_Xlength_error("list<T> too long");
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(longlong *)(param_3 + 0x80) = *(longlong *)(param_3 + 0x80) + 1;
        puVar4[1] = lVar6;
        *plVar7 = lVar6;
      }
      else {
        FUN_180006490(param_1,(longlong)param_2,'\x01',puVar4);
        uVar2 = param_2[1];
        *(undefined8 *)((longlong)puVar4 + 0x11) = *param_2;
        *(undefined8 *)((longlong)puVar4 + 0x19) = uVar2;
        *(undefined1 *)((longlong)puVar4 + 0x21) = *(undefined1 *)(param_2 + 2);
        *(uint *)(puVar4 + 0x17) = *(uint *)(puVar4 + 0x17) | 1;
      }
    }
    FUN_180008c10((longlong *)&local_140);
    free(local_140);
    FUN_180002b20((longlong *)local_170);
    free(local_170[0]);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_238);
  return;
}




void FUN_180007dd0(longlong param_1)

{
  FUN_180008c10((longlong *)(param_1 + 0xa8));
  free(*(void **)(param_1 + 0xa8));
  FUN_180002b20((longlong *)(param_1 + 0x78));
  free(*(void **)(param_1 + 0x78));
  return;
}




void FUN_180007e20(longlong param_1)

{
  FUN_180008c10((longlong *)(param_1 + 0xb0));
  free(*(void **)(param_1 + 0xb0));
  FUN_180002b20((longlong *)(param_1 + 0x80));
  free(*(void **)(param_1 + 0x80));
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180007e80(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStackY_208 [32];
  undefined8 *local_1d8 [2];
  undefined8 local_1c8;
  undefined8 local_1b8 [15];
  void *local_140 [6];
  void *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_e8;
  undefined8 local_e0 [15];
  void *local_68 [6];
  void *local_38 [2];
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_1c8 = 0xfffffffffffffffe;
  local_18 = DAT_180021010 ^ (ulonglong)auStackY_208;
  puVar5 = (undefined8 *)*param_3;
  puVar2 = puVar5;
  puVar6 = (undefined8 *)puVar5[1];
  if (*(char *)((longlong)puVar5[1] + 0x19) == '\0') {
    do {
      puVar3 = puVar6;
      if ((ulonglong)puVar3[4] < param_2) {
        puVar6 = (undefined8 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar6 = (undefined8 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
    if ((puVar3 != puVar5) && ((ulonglong)puVar3[4] <= param_2)) goto LAB_180007ef6;
  }
  puVar3 = puVar5;
LAB_180007ef6:
  if (puVar3 == puVar5) {
    plVar7 = param_3;
    FUN_1800013c0(local_1b8);
    local_110 = (void *)0x0;
    local_108 = 0;
    local_110 = (void *)FUN_180009a70();
    local_f8 = 0;
    local_100 = 0;
    local_1d8[0] = local_e0;
    local_e8 = param_2;
    FUN_18000a360(local_e0,local_1b8);
    FUN_18000b570((longlong *)local_38,(longlong *)&local_110);
    local_28 = local_100;
    local_20 = local_f8;
    plVar4 = (longlong *)FUN_18000af10(param_3,&local_e8);
    FUN_18000afe0(param_3,local_1d8,plVar7,(ulonglong *)(plVar4 + 4),plVar4);
    FUN_180008c10((longlong *)local_38);
    free(local_38[0]);
    FUN_180002b20((longlong *)local_68);
    free(local_68[0]);
    puVar5 = *(undefined8 **)(*param_3 + 8);
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
    while (cVar1 == '\0') {
      if ((ulonglong)puVar5[4] < param_2) {
        puVar5 = (undefined8 *)puVar5[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar5;
      }
      cVar1 = *(char *)((longlong)puVar5 + 0x19);
    }
    FUN_180008c10((longlong *)&local_110);
    free(local_110);
    FUN_180002b20((longlong *)local_140);
    free(local_140[0]);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_208);
  return;
}




ulonglong FUN_180008060(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *in_RAX;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  undefined8 local_68 [2];
  ulonglong local_58;
  char cStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  ulonglong *puStack_40;
  undefined8 local_38;
  
  if (param_2 == 0) goto LAB_1800083e7;
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (*(ushort *)(param_2 + 0x30) < 0x16) goto LAB_1800083e7;
  in_RAX = (undefined8 *)0x0;
  if (1 < (byte)(*(char *)(lVar3 + 0x14) - 1U)) {
    FUN_180006c80((longlong)param_1,lVar3,(longlong)param_3);
    lVar3 = *(longlong *)(lVar3 + 8);
    param_3[0x18] = param_3[0x18] + lVar3;
    *(uint *)(param_3 + 0x17) = (uint)param_3[0x17] | 4;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  if (*(ushort *)(param_2 + 0x30) < 0x35) goto LAB_1800083e7;
  puVar11 = *(ulonglong **)(lVar3 + 0x15);
  if ((puVar11 == (ulonglong *)0x0) || (*(longlong *)(lVar3 + 0x1d) == 0)) {
    *(uint *)(param_3 + 0x17) = (uint)param_3[0x17] | 8;
    return 1;
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    puVar10 = puStack_40;
    for (in_RAX = *(undefined8 **)param_1[2]; puStack_40 = puVar10,
        in_RAX != (undefined8 *)param_1[2]; in_RAX = (undefined8 *)*in_RAX) {
      local_58 = in_RAX[2];
      puVar10 = (ulonglong *)in_RAX[5];
      local_38 = in_RAX[6];
      cStack_50 = (char)in_RAX[3];
      uStack_4f = (undefined7)((ulonglong)in_RAX[3] >> 8);
      uStack_48 = (undefined1)in_RAX[4];
      uStack_47 = (undefined7)((ulonglong)in_RAX[4] >> 8);
      if ((((local_58 == 0x100) && (cStack_50 == -0x1c)) &&
          ((ulonglong *)CONCAT17(uStack_48,uStack_4f) <= puVar11)) &&
         (((ulonglong)((longlong)puVar11 - (longlong)CONCAT17(uStack_48,uStack_4f)) < *puVar10 &&
          (*(short *)((longlong)puVar10 + 0x2c) != 0)))) {
        puStack_40 = puVar10;
        if (puVar10 != (ulonglong *)0x0) goto LAB_18000825e;
        break;
      }
    }
    FUN_180006b90();
    puVar10 = puVar11;
  }
  else {
    puVar10 = param_3;
    for (in_RAX = *(undefined8 **)param_1[4]; in_RAX != (undefined8 *)param_1[4];
        in_RAX = (undefined8 *)*in_RAX) {
      lVar9 = in_RAX[2];
      puVar12 = *(ulonglong **)(lVar9 + 0x18);
      if (puVar12 <= puVar11) {
        plVar8 = *(longlong **)(lVar9 + 8);
        puVar10 = (ulonglong *)(*plVar8 + (longlong)puVar12);
        if (puVar11 < puVar10) goto LAB_18000813f;
      }
    }
  }
  puVar11 = *(ulonglong **)(lVar3 + 0x15);
  for (in_RAX = *(undefined8 **)param_1[10]; in_RAX != (undefined8 *)param_1[10];
      in_RAX = (undefined8 *)*in_RAX) {
    lVar9 = in_RAX[2];
    puVar12 = *(ulonglong **)(lVar9 + 0x18);
    if (puVar12 <= puVar11) {
      plVar8 = *(longlong **)(lVar9 + 8);
      puVar10 = (ulonglong *)(*plVar8 + (longlong)puVar12);
      if (puVar11 < puVar10) goto LAB_18000813f;
    }
  }
  goto LAB_18000825e;
LAB_18000813f:
  if (lVar9 != 0) {
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar9 + 8);
    }
    uVar2 = *(ushort *)(lVar9 + 0x20);
    if ((plVar8 != (longlong *)0x0) && (*(ushort *)((longlong)plVar8 + 0x2c) != 0)) {
      *(short *)(lVar9 + 0x20) =
           (short)(((ulonglong)uVar2 + 1) % (ulonglong)*(ushort *)((longlong)plVar8 + 0x2c));
    }
    puVar10 = (ulonglong *)((ulonglong)uVar2 * 0x20);
    lVar9 = (*(longlong *)((longlong)(puVar10 + 7) + (longlong)plVar8) - (longlong)puVar12) +
            *(longlong *)(lVar3 + 0x15);
    goto LAB_1800082a8;
  }
LAB_18000825e:
  if ((param_1[0x4f] != 0) || (param_1[0x50] != 0)) {
    lVar9 = param_1[0x4f];
    if (param_1[0x50] != 0) {
      lVar9 = param_1[0x50];
    }
    in_RAX = (undefined8 *)(*(longlong *)(lVar9 + 8) + 0x30);
    if (in_RAX != (undefined8 *)0x0) {
      in_RAX = (undefined8 *)
               (*(longlong *)(*(longlong *)(lVar9 + 8) + 0x38) - *(longlong *)(lVar9 + 0x18));
      lVar9 = (longlong)in_RAX + (longlong)puVar11;
      if (lVar9 != 0) {
LAB_1800082a8:
        iVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        uVar7 = *(ulonglong *)(lVar3 + 0x1d) / (ulonglong)(longlong)iVar6;
        if (((uint)param_3[0x17] & 8) != 0) {
          if (param_3[0x16] == 0) {
            param_3[0x18] = 0;
            *(uint *)(param_3 + 0x17) = (uint)param_3[0x17] ^ 8;
          }
          puVar11 = *(ulonglong **)param_3[0x15];
          while (puVar11 != (ulonglong *)param_3[0x15]) {
            if (puVar11[4] == lVar9 / (longlong)iVar5) {
              FUN_180008c10((longlong *)(param_3 + 0x15));
              *(uint *)(param_3 + 0x17) = (uint)param_3[0x17] ^ 8;
              param_3[0x18] = 0;
              break;
            }
            puVar12 = (ulonglong *)puVar11[2];
            if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
              cVar1 = *(char *)((longlong)*puVar12 + 0x19);
              puVar11 = puVar12;
              puVar10 = (ulonglong *)*puVar12;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((longlong)*puVar10 + 0x19);
                puVar11 = puVar10;
                puVar10 = (ulonglong *)*puVar10;
              }
            }
            else {
              cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
              puVar4 = (ulonglong *)puVar11[1];
              puVar12 = puVar11;
              while ((puVar11 = puVar4, cVar1 == '\0' && (puVar12 == (ulonglong *)puVar11[2]))) {
                cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
                puVar4 = (ulonglong *)puVar11[1];
                puVar12 = puVar11;
              }
            }
          }
        }
        uStack_48 = (undefined1)*(undefined8 *)(param_2 + 9);
        uStack_47 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 9) >> 8);
        cStack_50 = (char)uVar7;
        uStack_4f = (undefined7)(uVar7 >> 8);
        local_58 = lVar9 / (longlong)iVar5;
        FUN_18000a6e0((longlong *)(param_3 + 0x15),local_68,puVar10,&local_58);
        *(uint *)(param_3 + 0x17) = (uint)param_3[0x17] | 4;
        lVar3 = *(longlong *)(lVar3 + 0x1d);
        param_3[0x18] = param_3[0x18] + lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
    }
  }
LAB_1800083e7:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




void FUN_180008410(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar9;
  *plVar9 = (longlong)plVar9;
  *(longlong *)(*param_2 + 8) = *param_2;
  param_2[1] = 0;
  if (plVar7 != (longlong *)*param_2) {
    do {
      plVar9 = (longlong *)*plVar7;
      free(plVar7);
      plVar7 = plVar9;
    } while (plVar9 != (longlong *)*param_2);
  }
  if (*(ulonglong *)(param_1 + 0x28) < 10) {
    plVar9 = (longlong *)**(longlong **)(param_1 + 0x20);
    if (plVar9 != *(longlong **)(param_1 + 0x20)) {
      do {
        lVar8 = param_1;
        FUN_180006b90();
        puVar2 = (undefined8 *)*param_2;
        puVar3 = (undefined8 *)puVar2[1];
        uVar6 = FUN_180002eb0(lVar8,puVar2,puVar3,plVar9 + 2);
        if (param_2[1] == 0xaaaaaaaaaaaaaa9) {
LAB_1800085d1:
          std::_Xlength_error("list<T> too long");
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_2[1] = param_2[1] + 1;
        puVar2[1] = uVar6;
        *puVar3 = uVar6;
        plVar9 = (longlong *)*plVar9;
      } while (plVar9 != (longlong *)*(longlong *)(param_1 + 0x20));
    }
  }
  else {
    plVar9 = (longlong *)**(longlong **)(param_1 + 0xa0);
    if (plVar9 != *(longlong **)(param_1 + 0xa0)) {
      do {
        lVar8 = param_1;
        FUN_180006b90();
        puVar2 = (undefined8 *)*param_2;
        puVar3 = (undefined8 *)puVar2[1];
        uVar6 = FUN_180002eb0(lVar8,puVar2,puVar3,plVar9 + 4);
        if (param_2[1] == 0xaaaaaaaaaaaaaa9) goto LAB_1800085d1;
        param_2[1] = param_2[1] + 1;
        puVar2[1] = uVar6;
        *puVar3 = uVar6;
        plVar7 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x19);
          plVar9 = plVar7;
          plVar7 = (longlong *)*plVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar9 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
        }
        else {
          cVar1 = *(char *)(plVar9[1] + 0x19);
          plVar5 = (longlong *)plVar9[1];
          plVar7 = plVar9;
          while ((plVar9 = plVar5, cVar1 == '\0' && (plVar7 == (longlong *)plVar9[2]))) {
            cVar1 = *(char *)(plVar9[1] + 0x19);
            plVar5 = (longlong *)plVar9[1];
            plVar7 = plVar9;
          }
        }
      } while (plVar9 != *(longlong **)(param_1 + 0xa0));
    }
  }
  return;
}




void FUN_1800085e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_res8;
  longlong local_res20;
  undefined **local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  plVar7 = (longlong *)*plVar1;
  plVar12 = (longlong *)*plVar7;
  if (plVar12 != plVar7) {
    do {
      plVar7 = (longlong *)plVar12[5];
      plVar13 = (longlong *)*plVar7;
      if (plVar13 != plVar7) {
        do {
          if (*(uint *)(plVar13 + 0x1c) < 3) {
LAB_1800088bc:
            if (*(void **)((longlong)plVar13 + 0x6a) != (void *)0x0) {
              free(*(void **)((longlong)plVar13 + 0x6a));
            }
            if (*(void **)((longlong)plVar13 + 0xbc) != (void *)0x0) {
              free(*(void **)((longlong)plVar13 + 0xbc));
            }
            plVar7 = plVar13 + 0x1a;
            lVar10 = *plVar7;
            plVar8 = *(longlong **)(lVar10 + 8);
            lVar9 = lVar10;
            if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
              do {
                FUN_180008fd0(plVar7,(longlong *)plVar8[2]);
                plVar4 = (longlong *)*plVar8;
                free(plVar8);
                plVar8 = plVar4;
              } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
              lVar9 = *plVar7;
            }
            *(longlong *)(lVar9 + 8) = lVar10;
            *(longlong *)*plVar7 = lVar10;
            *(longlong *)(*plVar7 + 0x10) = lVar10;
            plVar13[0x1b] = 0;
          }
          else {
            if (plVar13[0x1b] != 0) {
              local_88 = IDataRunList::vftable;
              local_80 = (longlong *)0x0;
              local_78 = 0;
              local_70 = 0;
              local_68 = 0;
              local_60 = 0;
              local_80 = (longlong *)operator_new(0x10);
              *local_80 = 0;
              local_80[1] = 0;
              *local_80 = (longlong)&local_80;
              local_50 = 0;
              local_48 = local_68;
              local_88 = CBtrfsNoResidentDataRunList::vftable;
              plVar7 = *(longlong **)plVar13[0x1a];
              local_58 = local_80;
              if (plVar7 != (longlong *)plVar13[0x1a]) {
                do {
                  local_res8 = (longlong *)operator_new(0x10);
                  *local_res8 = plVar7[4];
                  local_res8[1] = plVar7[5];
                  FUN_18000dde0((longlong)&local_80,&local_res8);
                  plVar8 = (longlong *)plVar7[2];
                  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
                    cVar2 = *(char *)(*plVar8 + 0x19);
                    plVar7 = plVar8;
                    plVar8 = (longlong *)*plVar8;
                    while (cVar2 == '\0') {
                      cVar2 = *(char *)(*plVar8 + 0x19);
                      plVar7 = plVar8;
                      plVar8 = (longlong *)*plVar8;
                    }
                  }
                  else {
                    cVar2 = *(char *)(plVar7[1] + 0x19);
                    plVar4 = (longlong *)plVar7[1];
                    plVar8 = plVar7;
                    while ((plVar7 = plVar4, cVar2 == '\0' && (plVar8 == (longlong *)plVar7[2]))) {
                      cVar2 = *(char *)(plVar7[1] + 0x19);
                      plVar4 = (longlong *)plVar7[1];
                      plVar8 = plVar7;
                    }
                  }
                } while (plVar7 != (longlong *)plVar13[0x1a]);
              }
              plVar7 = (longlong *)operator_new(0x10);
              *(undefined2 *)plVar7 = 0;
              plVar7[1] = 0;
              local_res8 = plVar7;
              iVar6 = (*(code *)local_88[5])(&local_88);
              if ((iVar6 == 1) || (iVar6 = (*(code *)local_88[5])(&local_88), iVar6 == 0xe)) {
                uVar5 = (*(code *)local_88[2])(&local_88);
                *(undefined2 *)plVar7 = uVar5;
              }
              plVar8 = FUN_180010090((longlong)&local_88,(longlong *)&local_res8,&local_res20);
              plVar7[1] = (longlong)plVar8;
              if (plVar8 == (longlong *)0x0) {
                free(plVar7);
                plVar7 = (longlong *)0x0;
              }
              plVar8 = local_80;
              *(longlong **)((longlong)plVar13 + 0xb4) = plVar7;
              local_88 = IDataRunList::vftable;
              for (uVar11 = local_68; uVar11 != local_68 + local_60; uVar11 = uVar11 + 1) {
                if (plVar8 == (longlong *)0x0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = *plVar8;
                }
                free(*(void **)(*(longlong *)
                                 (*(longlong *)(lVar10 + 8) +
                                 (uVar11 >> 1 & *(longlong *)(lVar10 + 0x10) - 1U) * 8) +
                               (ulonglong)((uint)uVar11 & 1) * 8));
              }
              FUN_180010d00((longlong)&local_80);
              if (((local_58 != local_80) && (local_80 != (longlong *)0x0)) &&
                 ((undefined8 *)*local_80 != (undefined8 *)0x0)) {
                local_58 = *(longlong **)*local_80;
              }
              local_48 = local_68;
              FUN_180010d00((longlong)&local_80);
              free(local_80);
            }
            if (*(longlong *)((longlong)plVar13 + 0x6a) == 0) goto LAB_1800088bc;
            puVar3 = (undefined8 *)param_2[1];
            if ((undefined8 *)param_2[2] == puVar3) {
              FUN_180009e10(param_2,puVar3,plVar13 + 5);
            }
            else {
              FUN_18000a360(puVar3,plVar13 + 5);
              param_2[1] = param_2[1] + 0xa5;
            }
          }
          plVar7 = (longlong *)plVar13[2];
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            cVar2 = *(char *)(*plVar7 + 0x19);
            plVar13 = plVar7;
            plVar7 = (longlong *)*plVar7;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*plVar7 + 0x19);
              plVar13 = plVar7;
              plVar7 = (longlong *)*plVar7;
            }
          }
          else {
            cVar2 = *(char *)(plVar13[1] + 0x19);
            plVar8 = (longlong *)plVar13[1];
            plVar7 = plVar13;
            while ((plVar13 = plVar8, cVar2 == '\0' && (plVar7 == (longlong *)plVar13[2]))) {
              cVar2 = *(char *)(plVar13[1] + 0x19);
              plVar8 = (longlong *)plVar13[1];
              plVar7 = plVar13;
            }
          }
          plVar7 = (longlong *)plVar12[5];
        } while (plVar13 != plVar7);
      }
      plVar13 = plVar12 + 5;
      FUN_180008dd0(plVar13,(longlong *)plVar7[1]);
      *(longlong **)(*plVar13 + 8) = plVar7;
      *(longlong **)*plVar13 = plVar7;
      *(longlong **)(*plVar13 + 0x10) = plVar7;
      plVar12[6] = 0;
      plVar7 = (longlong *)plVar12[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        plVar12 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x19);
          plVar12 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar2 = *(char *)(plVar12[1] + 0x19);
        plVar13 = (longlong *)plVar12[1];
        plVar7 = plVar12;
        while ((plVar12 = plVar13, cVar2 == '\0' && (plVar7 == (longlong *)plVar12[2]))) {
          cVar2 = *(char *)(plVar12[1] + 0x19);
          plVar13 = (longlong *)plVar12[1];
          plVar7 = plVar12;
        }
      }
      plVar7 = (longlong *)*plVar1;
    } while (plVar12 != plVar7);
  }
  FUN_180008ed0(plVar1,(longlong *)plVar7[1]);
  *(longlong **)(*plVar1 + 8) = plVar7;
  *(longlong **)*plVar1 = plVar7;
  *(longlong **)(*plVar1 + 0x10) = plVar7;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}




void FUN_180008a70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  _Memory = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180008e70(param_1,(longlong *)_Memory[2]);
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180008b00(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  _Memory = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180008f50(param_1,(longlong *)_Memory[2]);
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry>
   >::~vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry> >(void) __ptr64
    private: void __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct
   GSISymbolEntry> >::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<struct_GSISymbolEntry,class_std::allocator<struct_GSISymbolEntry>_>
               (longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x28) * 0x28)) &&
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




void FUN_180008c10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  _Memory = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180008fd0(param_1,(longlong *)_Memory[2]);
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180008ca0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)*param_1;
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  return;
}




void FUN_180008d00(longlong *param_1)

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




longlong * FUN_180008d60(longlong *param_1,void *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = 0xffffffffffffffff;
  *(undefined1 *)param_1 = 0;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180009030(param_1,param_2,sVar1);
  return param_1;
}




void FUN_180008db0(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_180009180(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  return;
}




void FUN_180008dd0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180008dd0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180008c10(param_2 + 0x1a);
    free((void *)param_2[0x1a]);
    FUN_180002b20(param_2 + 0x14);
    free((void *)param_2[0x14]);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008e70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180008e70(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008ed0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res10;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180008ed0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180009180(param_2 + 5,&local_res10,*(longlong **)param_2[5],(longlong *)param_2[5]);
    free((void *)param_2[5]);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008f50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180008f50(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180008fd0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180008fd0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




longlong * FUN_180009030(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_18000a550();
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
      if (pvVar3 == (void *)0x0) goto LAB_180009173;
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
LAB_180009173:
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




undefined8 *
FUN_180009180(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar5) && (param_4 == plVar5)) {
    FUN_180008dd0(param_1,(longlong *)plVar5[1]);
    *(longlong **)(*param_1 + 8) = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar5 = param_3;
    if (param_3 != param_4) {
      do {
        plVar2 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar3 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x19);
            param_3 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((param_3 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar3 = param_3;
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
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar2 = plVar5;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar5 = FUN_1800095a0(param_1,plVar5);
        FUN_180008c10(plVar5 + 0x1a);
        free((void *)plVar5[0x1a]);
        FUN_180002b20(plVar5 + 0x14);
        free((void *)plVar5[0x14]);
        free(plVar5);
        plVar5 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




undefined8 *
FUN_180009320(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_1800099b0(param_1,(longlong *)plVar6[1]);
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
        plVar6 = FUN_1800095a0(param_1,plVar6);
        if (0xf < (ulonglong)plVar6[8]) {
          pvVar3 = (void *)plVar6[5];
          _Memory = pvVar3;
          if ((0xfff < plVar6[8] + 1U) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar6[7] = 0;
        plVar6[8] = 0xf;
        *(undefined1 *)(plVar6 + 5) = 0;
        free(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




longlong * FUN_1800094d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_3[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar4 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0x19);
    plVar2 = (longlong *)param_3[1];
    plVar3 = param_3;
    while ((plVar4 = plVar2, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = (longlong *)plVar4[1];
      plVar3 = plVar4;
    }
  }
  plVar3 = FUN_1800095a0(param_1,param_3);
  FUN_180008c10(plVar3 + 0x1a);
  free((void *)plVar3[0x1a]);
  FUN_180002b20(plVar3 + 0x14);
  free((void *)plVar3[0x14]);
  free(plVar3);
  *param_2 = (longlong)plVar4;
  return param_2;
}




longlong * FUN_1800095a0(longlong *param_1,longlong *param_2)

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
                FUN_180009b10(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180009b70(param_1,(longlong)plVar6);
              break;
            }
LAB_1800098a2:
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
            goto LAB_1800098a2;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180009b70(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180009b10(param_1,plVar6);
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




void FUN_180009920(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xf0);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009950(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009980(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_1800099b0(undefined8 param_1,longlong *param_2)

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
    FUN_1800099b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[8]) {
      pvVar3 = (void *)param_2[5];
      _Memory = pvVar3;
      if ((0xfff < param_2[8] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_2[7] = 0;
    param_2[8] = 0xf;
    *(undefined1 *)(param_2 + 5) = 0;
    free(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




void FUN_180009a70(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009aa0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009ad0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (param_2 == (undefined8 *)0x0) {
    param_2 = puVar1;
    param_3 = puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}




void FUN_180009b10(longlong *param_1,longlong *param_2)

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




void FUN_180009b70(longlong *param_1,longlong param_2)

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




longlong FUN_180009bd0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  void *_Dst;
  size_t _Size;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  lVar7 = *param_1;
  lVar11 = (param_1[1] - lVar7) / 0x28;
  if (lVar11 == 0x666666666666666) {
    FUN_180002e90();
    pcVar4 = (code *)swi(3);
    lVar7 = (*pcVar4)();
    return lVar7;
  }
  uVar1 = lVar11 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x28;
  uVar8 = uVar1;
  if ((uVar2 <= 0x666666666666666 - (uVar2 >> 1)) && (uVar8 = (uVar2 >> 1) + uVar2, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  uVar2 = uVar8 * 0x28;
  if (uVar8 < 0x666666666666667) {
    uVar8 = uVar2;
    if (0xfff < uVar2) goto LAB_180009cb4;
    if (uVar2 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar2);
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
LAB_180009cb4:
    uVar9 = uVar8 + 0x27;
    if (uVar9 <= uVar8) {
      uVar9 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new(uVar9);
    if (pvVar6 == (void *)0x0) goto LAB_180009df6;
    _Dst = (void *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar6;
  }
  uVar5 = param_3[1];
  lVar7 = (((longlong)param_2 - lVar7) / 0x28) * 0x28;
  *(undefined8 *)(lVar7 + (longlong)_Dst) = *param_3;
  ((undefined8 *)(lVar7 + (longlong)_Dst))[1] = uVar5;
  uVar5 = param_3[3];
  puVar3 = (undefined8 *)(lVar7 + 0x10 + (longlong)_Dst);
  *puVar3 = param_3[2];
  puVar3[1] = uVar5;
  *(undefined8 *)(lVar7 + 0x20 + (longlong)_Dst) = param_3[4];
  pvVar6 = (void *)param_1[1];
  pvVar10 = (void *)*param_1;
  FUN_180002ed0(local_res8);
  if (param_2 == pvVar6) {
    _Size = (longlong)pvVar6 - (longlong)pvVar10;
    pvVar6 = _Dst;
    param_2 = pvVar10;
  }
  else {
    memmove(_Dst,pvVar10,(longlong)param_2 - (longlong)pvVar10);
    lVar11 = lVar7 + 0x28;
    FUN_180002ed0(local_res8);
    pvVar6 = (void *)(lVar11 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar6,param_2,_Size);
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar10 = pvVar6;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar6) / 0x28) * 0x28)) &&
       (pvVar10 = *(void **)((longlong)pvVar6 + -8),
       0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar10)))) {
LAB_180009df6:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 0x28);
  param_1[2] = (longlong)(uVar2 + (longlong)_Dst);
  return *param_1 + lVar7;
}




longlong FUN_180009e10(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  lVar8 = *param_1;
  lVar5 = ((longlong)param_2 - lVar8) +
          SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816((longlong)param_2 - lVar8),8);
  lVar7 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(param_1[1] - lVar8),8) +
          (param_1[1] - lVar8);
  lVar7 = (lVar7 >> 7) - (lVar7 >> 0x3f);
  if (lVar7 == 0x18d3018d3018d30) {
    FUN_180002e90();
    pcVar3 = (code *)swi(3);
    lVar5 = (*pcVar3)();
    return lVar5;
  }
  uVar1 = lVar7 + 1;
  lVar8 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(param_1[2] - lVar8),8) +
          (param_1[2] - lVar8);
  uVar9 = (lVar8 >> 7) - (lVar8 >> 0x3f);
  uVar14 = uVar1;
  if ((uVar9 <= 0x18d3018d3018d30 - (uVar9 >> 1)) && (uVar14 = (uVar9 >> 1) + uVar9, uVar14 < uVar1)
     ) {
    uVar14 = uVar1;
  }
  uVar9 = uVar14 * 0xa5;
  if (uVar14 < 0x18d3018d3018d31) {
    if (uVar9 < 0x1000) {
      if (uVar9 == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13 = (undefined8 *)operator_new(uVar9);
      }
      goto LAB_180009f47;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
  }
  uVar6 = uVar9 + 0x27;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new(uVar6);
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar13 = (undefined8 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
  puVar13[-1] = pvVar4;
LAB_180009f47:
  lVar5 = ((lVar5 >> 7) - (lVar5 >> 0x3f)) * 0xa5;
  puVar12 = (undefined8 *)(lVar5 + (longlong)puVar13);
  FUN_18000a360(puVar12,param_3);
  puVar2 = (undefined8 *)param_1[1];
  if (param_2 == puVar2) {
    puVar10 = puVar13;
    for (puVar12 = (undefined8 *)*param_1; puVar12 != puVar2;
        puVar12 = (undefined8 *)((longlong)puVar12 + 0xa5)) {
      FUN_18000a360(puVar10,puVar12);
      puVar10 = (undefined8 *)((longlong)puVar10 + 0xa5);
    }
  }
  else {
    FUN_18000a470(param_1,(undefined8 *)*param_1,param_2,puVar13);
    FUN_18000a470(param_1,param_2,(undefined8 *)param_1[1],(undefined8 *)((longlong)puVar12 + 0xa5))
    ;
  }
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar11 = (void *)param_1[1];
    if (pvVar4 != pvVar11) {
      do {
        FUN_180001460((longlong)pvVar4);
        pvVar4 = (void *)((longlong)pvVar4 + 0xa5);
      } while (pvVar4 != pvVar11);
      pvVar4 = (void *)*param_1;
    }
    lVar8 = SUB168(SEXT816(-0x3967f3967f3967f3) * SEXT816(param_1[2] - (longlong)pvVar4),8) +
            (param_1[2] - (longlong)pvVar4);
    pvVar11 = pvVar4;
    if ((0xfff < (ulonglong)(((lVar8 >> 7) - (lVar8 >> 0x3f)) * 0xa5)) &&
       (pvVar11 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
  }
  *param_1 = (longlong)puVar13;
  param_1[1] = uVar1 * 0xa5 + (longlong)puVar13;
  param_1[2] = uVar14 * 0xa5 + (longlong)puVar13;
  return *param_1 + lVar5;
}




void FUN_18000a0c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong extraout_RAX;
  longlong lVar5;
  char *pcVar6;
  longlong *_Memory;
  
  _Memory = *(longlong **)*param_1;
  pcVar6 = (char *)param_1;
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    if (_Memory == (longlong *)*param_1) goto LAB_18000a120;
    pcVar6 = (char *)param_1;
    FUN_18000a870(param_1,(longlong)_Memory,param_2 + 2);
    _Memory = (longlong *)*_Memory;
  }
LAB_18000a16f:
  plVar2 = (longlong *)*param_1;
  if (_Memory == (longlong *)*plVar2) {
    FUN_180002b20(param_1);
  }
  else {
    while (_Memory != plVar2) {
      plVar3 = (longlong *)*_Memory;
      *(longlong **)_Memory[1] = plVar3;
      *(longlong *)(*_Memory + 8) = _Memory[1];
      param_1[1] = param_1[1] + -1;
      FUN_180002a90(_Memory + 0x11);
      free(_Memory);
      _Memory = plVar3;
    }
  }
  return;
LAB_18000a120:
  for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
    puVar1 = (undefined8 *)*param_1;
    plVar2 = (longlong *)puVar1[1];
    lVar4 = FUN_18000a820(pcVar6,puVar1,plVar2,param_2 + 2);
    lVar5 = param_1[1];
    pcVar6 = (char *)(0x1642c8590b21641 - lVar5);
    if ((longlong *)pcVar6 == (longlong *)0x0) {
      pcVar6 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar5 = extraout_RAX;
    }
    param_1[1] = lVar5 + 1;
    puVar1[1] = lVar4;
    *plVar2 = lVar4;
  }
  goto LAB_18000a16f;
}




undefined8 *
FUN_18000a1e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             size_t param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
    FUN_18000a550();
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar2)();
    return puVar4;
  }
  uVar1 = param_1[3];
  uVar5 = _Size + param_2 | 0xf;
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
    if (pvVar3 == (void *)0x0) goto LAB_18000a30c;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  param_1[2] = _Size + param_2;
  pvVar3 = (void *)((longlong)_Dst + _Size);
  param_1[3] = uVar7;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar3,"\\BtrfsCache.txt",param_5);
    *(undefined1 *)((longlong)pvVar3 + param_5) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy(pvVar3,"\\BtrfsCache.txt",param_5);
    *(undefined1 *)((longlong)pvVar3 + param_5) = 0;
    pvVar3 = _Src;
    if ((0xfff < uVar1 + 1) &&
       (pvVar3 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar3)))) {
LAB_18000a30c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  *param_1 = _Dst;
  return param_1;
}




undefined8 * FUN_18000a360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0x11) = *(undefined8 *)((longlong)param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x19) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x22) = *(undefined8 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2a) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2e) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined8 *)((longlong)param_1 + 0x32) = *(undefined8 *)((longlong)param_2 + 0x32);
  *(undefined8 *)((longlong)param_1 + 0x3a) = *(undefined8 *)((longlong)param_2 + 0x3a);
  *(undefined8 *)((longlong)param_1 + 0x42) = *(undefined8 *)((longlong)param_2 + 0x42);
  *(undefined8 *)((longlong)param_1 + 0x4a) = *(undefined8 *)((longlong)param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x52) = *(undefined8 *)((longlong)param_2 + 0x52);
  *(undefined8 *)((longlong)param_1 + 0x5a) = *(undefined8 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
  *(undefined2 *)((longlong)param_1 + 0x66) = *(undefined2 *)((longlong)param_2 + 0x66);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  FUN_18000a4f0(param_1 + 0xf,param_2 + 0xf);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  return param_1;
}




undefined8 *
FUN_18000a470(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != param_3) {
    do {
      FUN_18000c620(param_4,param_2);
      param_4 = (undefined8 *)((longlong)param_4 + 0xa5);
      param_2 = (undefined8 *)((longlong)param_2 + 0xa5);
    } while (param_2 != param_3);
  }
  return param_4;
}




undefined8 * FUN_18000a4f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)FUN_180002c90(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  *param_1 = plVar1;
  FUN_18000b400((longlong)param_1,*plVar1,*(undefined8 **)*param_2,(undefined8 *)*param_2);
  return param_1;
}




void FUN_18000a550(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_18000a570(longlong param_1,longlong *param_2)

{
  *(longlong *)param_2[1] = *param_2;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  return param_2;
}




undefined8 *
FUN_18000a590(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4)

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
      bVar7 = *param_4 < (ulonglong)plVar6[4];
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
      puVar4 = FUN_18000a8c0(param_1,&local_res8,'\x01',plVar6,param_4);
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
  if ((ulonglong)plVar5[4] < *param_4) {
    puVar4 = FUN_18000a8c0(param_1,&local_res8,bVar7,plVar6,param_4);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_18000a6e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

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
      if ((ulonglong)plVar6[6] <= (ulonglong)param_4[2]) {
        plVar5 = (longlong *)plVar6[2];
      }
      else {
        plVar5 = (longlong *)*plVar6;
      }
      bVar7 = (ulonglong)plVar6[6] > (ulonglong)param_4[2];
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
  }
  plVar5 = plVar6;
  if (bVar7) {
    if (plVar6 == (longlong *)*plVar2) {
      puVar4 = FUN_18000b140(param_1,&local_res8,'\x01',plVar6,param_4);
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
  if ((ulonglong)plVar5[6] < (ulonglong)param_4[2]) {
    puVar4 = FUN_18000b140(param_1,&local_res8,bVar7,plVar6,param_4);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong FUN_18000a820(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                      undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180002c90(param_1,param_2,param_3);
  FUN_18000a360((undefined8 *)(lVar1 + 0x10),param_4);
  return lVar1;
}




void FUN_18000a870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  FUN_180002a90((undefined8 *)(param_2 + 0x88));
  FUN_18000a360((undefined8 *)(param_2 + 0x10),param_3);
  return;
}




undefined8 *
FUN_18000a8c0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  plVar5 = (longlong *)FUN_18000c1c0(param_1,param_5);
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
        goto LAB_18000ab45;
      }
LAB_18000aa77:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_18000aa77;
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
LAB_18000ab45:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




void FUN_18000ab80(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000b7c0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  return;
}




undefined8 *
FUN_18000abb0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
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
      bVar7 = *param_4 < (ulonglong)plVar6[4];
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
      puVar4 = FUN_18000b800(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffd8,param_5);
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
  if ((ulonglong)plVar5[4] < *param_4) {
    puVar4 = FUN_18000b800(param_1,&local_res8,bVar7,plVar6,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong FUN_18000ad10(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18000b740(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar2 = FUN_180009920();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  param_2[2] = uVar2;
  return lVar1;
}




undefined8 *
FUN_18000ad80(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
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
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar2 = (longlong *)*param_1;
  bVar7 = true;
  plVar6 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar5 = (longlong *)plVar2[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_4 < (ulonglong)plVar6[4];
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
      puVar4 = FUN_18000bbb0(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
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
  if ((ulonglong)plVar5[4] < *param_4) {
    puVar4 = FUN_18000bbb0(param_1,&local_res8,bVar7,plVar6,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_180009180(param_5 + 5,&local_res8,*(longlong **)param_5[5],(longlong *)param_5[5]);
    free((void *)param_5[5]);
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong FUN_18000af10(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18000b6a0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  FUN_18000c620((undefined8 *)(lVar1 + 0x28),param_2 + 1);
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  uVar2 = FUN_180009a70();
  *(undefined8 *)(lVar1 + 0xd0) = uVar2;
  *(undefined8 *)(lVar1 + 0xd0) = param_2[0x16];
  param_2[0x16] = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xd8);
  *(undefined8 *)(lVar1 + 0xd8) = param_2[0x17];
  param_2[0x17] = uVar2;
  *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0xe8) = param_2[0x19];
  return lVar1;
}




undefined8 *
FUN_18000afe0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
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
      bVar8 = *param_4 < (ulonglong)plVar7[4];
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
      puVar4 = FUN_18000be60(param_1,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffd8,param_5);
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
  if ((ulonglong)plVar6[4] < *param_4) {
    puVar4 = FUN_18000be60(param_1,&local_res8,bVar8,plVar7,in_stack_ffffffffffffffd8,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_18000b6d0(plVar5,param_5);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 *
FUN_18000b140(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x492492492492490 < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_18000c4a0(param_1,param_5);
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
        goto LAB_18000b3c5;
      }
LAB_18000b2f7:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_18000b2f7;
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
LAB_18000b3c5:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}




void FUN_18000b400(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong extraout_RAX;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = (char *)param_1;
  for (; param_3 != param_4; param_3 = (undefined8 *)*param_3) {
    plVar1 = *(longlong **)(param_2 + 8);
    lVar2 = FUN_18000a820(pcVar4,(undefined8 *)param_2,plVar1,param_3 + 2);
    lVar3 = *(longlong *)(param_1 + 8);
    pcVar4 = (char *)(0x1642c8590b21641 - lVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "list<T> too long";
      std::_Xlength_error("list<T> too long");
      lVar3 = extraout_RAX;
    }
    *(longlong *)(param_1 + 8) = lVar3 + 1;
    *(longlong *)(param_2 + 8) = lVar2;
    *plVar1 = lVar2;
  }
  return;
}




longlong * FUN_18000b4b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_180009920();
  *param_1 = lVar6;
  local_res8 = SUB81(param_1,0);
  puVar7 = FUN_18000c4e0(param_1,*(undefined8 **)(*param_2 + 8),lVar6,local_res8);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}




longlong * FUN_18000b570(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_180009a70();
  *param_1 = lVar6;
  local_res8 = SUB81(param_1,0);
  puVar7 = FUN_18000c580(param_1,*(undefined8 **)(*param_2 + 8),lVar6,local_res8);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}




void FUN_18000b630(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar1) {
    plVar2 = (longlong *)(lVar3 + 0x78);
    do {
      FUN_180002b20(plVar2);
      FUN_180002ab0(plVar2);
      lVar3 = lVar3 + 0xa5;
      plVar2 = (longlong *)((longlong)plVar2 + 0xa5);
    } while (lVar3 != lVar1);
  }
  return;
}




void FUN_18000b690(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_18000b6a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000b6d0(undefined8 param_1,void *param_2)

{
  FUN_180008c10((longlong *)((longlong)param_2 + 0xd0));
  free(*(void **)((longlong)param_2 + 0xd0));
  FUN_180002b20((longlong *)((longlong)param_2 + 0xa0));
  free(*(void **)((longlong)param_2 + 0xa0));
  free(param_2);
  return;
}




void FUN_18000b740(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000b770(undefined8 param_1,void *param_2)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  FUN_180009180((longlong *)((longlong)param_2 + 0x28),&local_res8,
                (longlong *)**(longlong **)((longlong)param_2 + 0x28),
                *(longlong **)((longlong)param_2 + 0x28));
  free(*(void **)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}




void FUN_18000b7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000b7f0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




undefined8 *
FUN_18000b800(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000b7f0(0x555555555555554,param_6);
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
      goto LAB_18000b889;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000b889;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000b889:
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
        goto LAB_18000ba75;
      }
LAB_18000b9a7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000b9a7;
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
LAB_18000ba75:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




longlong FUN_18000bab0(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  size_t sVar3;
  
  lVar2 = FUN_18000c120(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  pvVar1 = (void *)param_2[1];
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0xf;
  *(undefined1 *)(lVar2 + 0x28) = 0;
  sVar3 = 0xffffffffffffffff;
  do {
    sVar3 = sVar3 + 1;
  } while (*(char *)((longlong)pvVar1 + sVar3) != '\0');
  FUN_180009030((longlong *)(lVar2 + 0x28),pvVar1,sVar3);
  return lVar2;
}




undefined8 *
FUN_18000bb30(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
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
      bVar3 = *param_4 < (ulonglong)puVar2[4];
      if (bVar3) {
        puVar1 = (undefined8 *)*puVar2;
      }
      else {
        puVar1 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar1 + 0x19) == '\0');
  }
  puVar2 = FUN_18000c1f0(param_1,&local_res8,bVar3,puVar2,in_stack_ffffffffffffffd8,param_5);
  *param_2 = *puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}




undefined8 *
FUN_18000bbb0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000b770(0x492492492492491,param_6);
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
      goto LAB_18000bc39;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000bc39;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000bc39:
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
        goto LAB_18000be25;
      }
LAB_18000bd57:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000bd57;
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
LAB_18000be25:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000be60(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x11111111111110f < (ulonglong)param_1[1]) {
    FUN_18000b6d0(0x111111111111110,param_6);
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
      goto LAB_18000bee9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000bee9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000bee9:
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
        goto LAB_18000c0d5;
      }
LAB_18000c007:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000c007;
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
LAB_18000c0d5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




void FUN_18000c110(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_18000c120(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000c150(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x40)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x28);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x40) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0;
  free(param_2);
  return;
}




void FUN_18000c1c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000c760(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}




undefined8 *
FUN_18000c1f0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000c150(0x38e38e38e38e38d,param_6);
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
      goto LAB_18000c279;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18000c279;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18000c279:
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
        goto LAB_18000c465;
      }
LAB_18000c397:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_18000c397;
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
LAB_18000c465:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




void FUN_18000c4a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000b740(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  return;
}




undefined8 *
FUN_18000c4e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_18000c790(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_18000c4e0(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_18000c4e0(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 *
FUN_18000c580(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_18000c4a0(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_18000c580(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_18000c580(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_18000c620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0x11) = *(undefined8 *)((longlong)param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x19) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x22) = *(undefined8 *)((longlong)param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x2a) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x2e) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined8 *)((longlong)param_1 + 0x32) = *(undefined8 *)((longlong)param_2 + 0x32);
  *(undefined8 *)((longlong)param_1 + 0x3a) = *(undefined8 *)((longlong)param_2 + 0x3a);
  *(undefined8 *)((longlong)param_1 + 0x42) = *(undefined8 *)((longlong)param_2 + 0x42);
  *(undefined8 *)((longlong)param_1 + 0x4a) = *(undefined8 *)((longlong)param_2 + 0x4a);
  *(undefined8 *)((longlong)param_1 + 0x52) = *(undefined8 *)((longlong)param_2 + 0x52);
  *(undefined8 *)((longlong)param_1 + 0x5a) = *(undefined8 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
  *(undefined2 *)((longlong)param_1 + 0x66) = *(undefined2 *)((longlong)param_2 + 0x66);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = FUN_180002c90(param_1,(undefined8 *)0x0,(undefined8 *)0x0);
  param_1[0xf] = uVar1;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = uVar1;
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  return param_1;
}




void FUN_18000c760(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




longlong FUN_18000c790(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000b6a0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  FUN_18000a360((undefined8 *)(lVar1 + 0x28),param_2 + 1);
  FUN_18000b570((longlong *)(lVar1 + 0xd0),param_2 + 0x16);
  *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0xe8) = param_2[0x19];
  return lVar1;
}




undefined8 FUN_18000c820(void)

{
  return 8;
}




undefined8 FUN_18000c830(void)

{
  return 0;
}




void FUN_18000c840(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 8,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0xc,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x10,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x18,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x20,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x28,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x5c,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x60,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x68,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x70,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x80,4);
                    /* WARNING: Could not recover jumptable at 0x00018000c93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x58,4);
  return;
}




void FUN_18000c950(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 8,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xc,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x10,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x18,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x20,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x28,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x5c,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x60,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x68,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x70,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x80,4);
                    /* WARNING: Could not recover jumptable at 0x00018000ca4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x58,4);
  return;
}




undefined8 * FUN_18000ca60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18000ca90(void)

{
  return 0xffffffffffffffff;
}




void FUN_18000caa0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(code **)(*param_2 + 0x40) == FUN_18000dcc0) {
    *(int *)(param_1 + 8) = (int)param_2[5];
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_18000caf0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_18000cb00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_18000cb10(undefined8 *param_1)

{
  *param_1 = IFileProperties::vftable;
  return;
}




undefined8 * FUN_18000cb20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18000cb50(undefined8 param_1,longlong *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_180009030(param_2,&DAT_1800185b3,0);
  return param_2;
}




undefined8 FUN_18000cb90(void)

{
  return 7;
}




undefined8 FUN_18000cba0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x81);
}




undefined8 * FUN_18000cbb0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = CBtrfsFileProerties::vftable;
  FUN_1800013c0((undefined8 *)((longlong)param_1 + 0x11));
  return param_1;
}




undefined8 * FUN_18000cc00(undefined8 *param_1,uint param_2)

{
  *param_1 = CBtrfsFileProerties::vftable;
  if (*(void **)((longlong)param_1 + 0x53) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x53));
  }
  *(undefined8 *)((longlong)param_1 + 0x53) = 0;
  if (*(void **)((longlong)param_1 + 0xa5) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0xa5));
  }
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  FUN_180002b20((longlong *)((longlong)param_1 + 0x89));
  free(*(void **)((longlong)param_1 + 0x89));
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined2 FUN_18000cca0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x75);
}




void FUN_18000ccb0(longlong param_1,char *param_2)

{
  void *_Dst;
  size_t _Count;
  size_t sVar1;
  
  if (param_2 != (char *)0x0) {
    if (*(void **)(param_1 + 0x53) != (void *)0x0) {
      free(*(void **)(param_1 + 0x53));
    }
    _Count = 0xffffffffffffffff;
    do {
      sVar1 = _Count;
      _Count = sVar1 + 1;
    } while (param_2[_Count] != '\0');
    _Dst = operator_new(sVar1 + 2);
    *(void **)(param_1 + 0x53) = _Dst;
    memset(_Dst,0,sVar1 + 2);
    strncpy(*(char **)(param_1 + 0x53),param_2,_Count);
  }
  return;
}




undefined * FUN_18000cd30(longlong param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x53);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_1800185b3;
  }
  return puVar1;
}




undefined8 FUN_18000cd50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4b);
}




undefined8 * FUN_18000cd60(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x5b);
  return param_2;
}




undefined8 * FUN_18000cd70(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 99);
  return param_2;
}




undefined8 * FUN_18000cd80(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x6b);
  return param_2;
}




undefined2 FUN_18000cd90(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x77);
}




void FUN_18000cda0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x73) = param_2;
  return;
}




undefined1 FUN_18000cdb0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x73);
}




ushort * FUN_18000cdc0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  char *pcVar4;
  undefined8 *_Memory;
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
  
  puVar3 = *(ushort **)(param_1 + 0x9d);
  if (puVar3 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  pcVar4 = *(char **)(puVar3 + 4);
  if (pcVar4 == (char *)0x0) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)0x0;
    uVar9 = 0;
    cVar1 = *pcVar4;
    puVar12 = puVar3;
    puVar8 = puVar11;
    puVar10 = puVar11;
    while (cVar1 != '\0') {
      uVar9 = (int)puVar10 + (*(byte *)((longlong)puVar8 + (longlong)pcVar4) & 0xf) +
              (*(byte *)((longlong)puVar8 + (longlong)pcVar4) >> 4) + 1;
      puVar10 = (ushort *)(ulonglong)uVar9;
      puVar12 = (ushort *)(longlong)(int)uVar9;
      puVar8 = puVar12;
      cVar1 = *(char *)((longlong)puVar12 + (longlong)pcVar4);
    }
    if (*puVar3 == 0) {
      puVar11 = (ushort *)operator_new(0x48);
      local_res8 = puVar11;
      FUN_1800109d0((undefined8 *)puVar11);
      *(undefined ***)puVar11 = CNoneResidentNTFSDataRunList::vftable;
      FUN_180010ed0((longlong)puVar11,*(longlong *)(puVar3 + 4),uVar9 + 1);
    }
    else {
      local_30 = (longlong *)0x0;
      local_28 = 0;
      local_30 = (longlong *)FUN_180002c50(puVar12,(undefined8 *)0x0,(undefined8 *)0x0);
      FUN_180016bb0(*(longlong *)(puVar3 + 4),uVar9 + 1,(longlong)&local_30);
      if (local_28 != 0) {
        _Memory = *(undefined8 **)(*local_30 + 0x10);
        puVar11 = (ushort *)operator_new(0x50);
        local_res8 = puVar11;
        FUN_1800109d0((undefined8 *)puVar11);
        *(undefined ***)puVar11 = CResidentNTFSDataRunList::vftable;
        puVar11[0x24] = 0;
        puVar11[0x25] = 0;
        uVar2 = *puVar3;
        uVar5 = _Memory[2];
        uVar6 = *_Memory;
        local_res8 = (ushort *)operator_new(0x10);
        *(undefined8 *)local_res8 = uVar6;
        *(undefined8 *)(local_res8 + 4) = uVar5;
        FUN_18000dde0((longlong)(puVar11 + 4),&local_res8);
        *(uint *)(puVar11 + 0x24) = (uint)uVar2;
        free(_Memory);
        plVar13 = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (plVar13 != local_30) {
          do {
            plVar7 = (longlong *)*plVar13;
            free(plVar13);
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
          free(plVar13);
          plVar13 = plVar7;
        } while (plVar7 != local_30);
      }
      free(local_30);
    }
  }
  return puVar11;
}




void FUN_18000cde0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x77) = param_2;
  return;
}




undefined8 FUN_18000cdf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  int local_res18 [4];
  
  local_res10[0] = *(undefined2 *)(param_1 + 0x75);
  (**(code **)(*param_2 + 0x78))(param_2,local_res10,2);
  (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x53),local_res10[0]);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x4b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x77,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x5b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 99,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6b,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x73,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x79,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0xb5,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x3b,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x3f,4);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x81,8);
  local_res8[0] = *(longlong *)(param_1 + 0x9d) != 0;
  (**(code **)(*param_2 + 0x78))(param_2,local_res8,1);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x9d);
    if (lVar1 != 0) {
      pcVar2 = *(char **)(lVar1 + 8);
      local_res18[0] = 0;
      if (pcVar2 != (char *)0x0) {
        if (*pcVar2 != '\0') {
          lVar3 = 0;
          do {
            local_res18[0] =
                 ((byte)pcVar2[lVar3] >> 4) + 1 + ((byte)pcVar2[lVar3] & 0xf) + local_res18[0];
            lVar3 = (longlong)local_res18[0];
          } while (pcVar2[lVar3] != '\0');
        }
        local_res18[0] = local_res18[0] + 1;
      }
      (**(code **)(*param_2 + 0x78))(param_2,local_res18,4);
      (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar1 + 8),local_res18[0]);
      (**(code **)(*param_2 + 0x78))(param_2,lVar1,2);
    }
  }
  else if (*(longlong *)(param_1 + 0xa5) != 0) {
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0xb1,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0xad,4);
    (**(code **)(*param_2 + 0x78))
              (param_2,*(undefined8 *)(param_1 + 0xa5),*(undefined4 *)(param_1 + 0xad));
    return 1;
  }
  return 1;
}




undefined8 FUN_18000d020(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  void *pvVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  char local_res8 [8];
  ushort local_res10 [4];
  
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,2);
  *(ushort *)(param_1 + 0x75) = local_res10[0];
  if (local_res10[0] != 0) {
    pvVar1 = operator_new((ulonglong)(local_res10[0] + 1));
    memset(pvVar1,0,(ulonglong)(local_res10[0] + 1));
    param_4 = *param_2;
    (**(code **)(param_4 + 0x70))(param_2,pvVar1,local_res10[0]);
    *(void **)(param_1 + 0x53) = pvVar1;
  }
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x4b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x77,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x5b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 99,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x73,1);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x79,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xb5,1);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x3b,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x3f,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x81,8);
  pcVar3 = local_res8;
  uVar4 = 1;
  (**(code **)(*param_2 + 0x70))(param_2);
  if (*(char *)(param_1 + 0xb5) != '\0') {
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xb1,4);
    (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0xad,4);
    if (*(int *)(param_1 + 0xad) != 0) {
      pvVar1 = operator_new((longlong)*(int *)(param_1 + 0xad));
      memset(pvVar1,0,(longlong)*(int *)(param_1 + 0xad));
      *(void **)(param_1 + 0xa5) = pvVar1;
      (**(code **)(*param_2 + 0x70))(param_2,pvVar1,*(undefined4 *)(param_1 + 0xad));
    }
    return 1;
  }
  if (local_res8[0] != '\0') {
    puVar2 = FUN_1800105e0(param_2,pcVar3,uVar4,param_4);
    *(undefined2 **)(param_1 + 0x9d) = puVar2;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18000d230(void)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1800219f0) {
    puVar1 = &DAT_1800219f0;
    _Init_thread_header(&DAT_1800219f0);
    if (DAT_1800219f0 == -1) {
      DAT_180021a20 = FUN_180002c50(puVar1,(undefined8 *)0x0,(undefined8 *)0x0);
      DAT_180021a30 = 0;
      _DAT_180021a38 = 0;
      DAT_180021a30 = FUN_180002c50(puVar1,(undefined8 *)0x0,(undefined8 *)0x0);
      _Mtx_init_in_situ(&DAT_180021a40,2);
      atexit(FUN_1800178a0);
      _Init_thread_footer(&DAT_1800219f0);
      return &DAT_180021a00;
    }
  }
  return &DAT_180021a00;
}




void FUN_18000d2f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *_Memory;
  
  iVar4 = _Mtx_lock(param_1 + 8);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[4];
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    free((void *)puVar2[2]);
  }
  plVar3 = (longlong *)param_1[4];
  _Memory = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(undefined8 *)(param_1[4] + 8) = param_1[4];
  param_1[5] = 0;
  if (_Memory != (longlong *)param_1[4]) {
    do {
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
    } while (plVar3 != (longlong *)param_1[4]);
  }
  iVar4 = _Mtx_unlock(param_1 + 8);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  return;
}




void FUN_18000d3c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *_Memory;
  
  iVar4 = _Mtx_lock(param_1 + 0x40);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    free((void *)puVar2[2]);
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  _Memory = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (_Memory != *(longlong **)(param_1 + 0x30)) {
    do {
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
    } while (plVar3 != (longlong *)*(longlong *)(param_1 + 0x30));
  }
  iVar4 = _Mtx_unlock(param_1 + 0x40);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  return;
}




void FUN_18000d4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)puVar1[1];
  uVar4 = FUN_180002eb0(param_1,puVar1,puVar2,param_2);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = uVar4;
  *puVar2 = uVar4;
  return;
}




void FUN_18000d510(undefined8 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = _Mtx_unlock(*param_1);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
  }
  return;
}




void * FUN_18000d540(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  void *_Dst_00;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x28))();
    lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    if (0x10fff < lVar3 * iVar2) {
      _Dst = operator_new(0x1000);
      lVar5 = 0;
      lVar3 = 0;
      _Dst_00 = operator_new(0x1000);
      memset(_Dst_00,0,0x1000);
      do {
        if (lVar5 != 0) {
          iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
          lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
          if (lVar4 * iVar2 < (&DAT_180018d60)[lVar5] + 0x1000) break;
        }
        memset(_Dst,0,0x1000);
        iVar2 = (**(code **)(*param_1 + 0x30))(param_1,_Dst,(&DAT_180018d60)[lVar5],0x1000,0);
        if (iVar2 == 0) break;
        if (*(longlong *)((longlong)_Dst + 0x40) == 0x4d5f53665248425f) {
          uVar1 = *(uint *)((longlong)_Dst + 0x90);
          if ((((uVar1 != 0) && ((uVar1 & uVar1 - 1) == 0)) &&
              (*(uint *)((longlong)_Dst + 0x94) - 0x86 < 0xff7b)) &&
             (*(uint *)((longlong)_Dst + 0x94) % uVar1 == 0)) {
            if ((lVar3 == 0) ||
               (*(ulonglong *)((longlong)_Dst_00 + 0x48) < *(ulonglong *)((longlong)_Dst + 0x48))) {
              memcpy(_Dst_00,_Dst,0x1000);
              lVar3 = lVar3 + 1;
            }
            goto LAB_18000d696;
          }
        }
        else {
          if (lVar5 == 0) break;
LAB_18000d696:
          lVar5 = lVar5 + 1;
        }
      } while ((&DAT_180018d60)[lVar5] != 0);
      free(_Dst);
      if (lVar3 == 0) {
        free(_Dst_00);
        _Dst_00 = (void *)0x0;
      }
      return _Dst_00;
    }
  }
  return (void *)0x0;
}




void FUN_18000d700(ulonglong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined5 uStack_75;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  uint6 uStack_56;
  void *pvStack_50;
  ulonglong local_48;
  
  local_b8 = 0xfffffffffffffffe;
  local_48 = DAT_180021010 ^ (ulonglong)auStack_f8;
  local_c8 = param_1;
  local_c0 = param_4;
  if (param_4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0x98);
    uVar13 = 0;
    puVar9[0x12] = 0;
    uVar6 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar6;
    uVar6 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar6;
    uVar6 = param_2[5];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar6;
    uVar6 = param_2[7];
    puVar9[6] = param_2[6];
    puVar9[7] = uVar6;
    uVar6 = param_2[9];
    puVar9[8] = param_2[8];
    puVar9[9] = uVar6;
    uVar6 = param_2[0xb];
    puVar9[10] = param_2[10];
    puVar9[0xb] = uVar6;
    *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)((longlong)puVar9 + 100) = *(undefined1 *)((longlong)param_2 + 100);
    puVar9[0xe] = 0;
    puVar9[0xf] = param_3;
    puVar9[0x10] = 0;
    *(undefined4 *)(puVar9 + 0xd) = 0;
    *(undefined1 *)(puVar9 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x8a) = 0;
    local_d0 = (longlong *)operator_new(0x20);
    *local_d0 = 0;
    local_d0[2] = 0;
    local_d0[1] = 0;
    *(undefined4 *)(local_d0 + 3) = 0;
    puVar9[0x12] = local_d0;
    *(undefined1 *)((longlong)puVar9 + 0x65) = 1;
    uVar14 = *(uint *)(param_2 + 0xc);
    if (*(char *)((longlong)param_2 + 100) == '\0') {
      if (param_1 < (ulonglong)uVar14 * 0x19 + 0x65) goto LAB_18000da8a;
      if (uVar14 != 0) {
        do {
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          puVar1 = (undefined8 *)((longlong)param_2 + uVar13 * 0x19 + 0x65);
          local_a0 = *(undefined4 *)puVar1;
          uStack_9c = *(undefined4 *)((longlong)param_2 + uVar13 * 0x19 + 0x69);
          local_88 = *puVar1;
          puVar1 = (undefined8 *)((longlong)param_2 + uVar13 * 0x19 + 0x6d);
          uStack_98 = *(undefined4 *)puVar1;
          uStack_94 = *(undefined4 *)((longlong)param_2 + uVar13 * 0x19 + 0x71);
          uStack_80 = *puVar1;
          local_78 = *(byte *)((longlong)param_2 + uVar13 * 0x19 + 0x75);
          uStack_76 = 1;
          if (*(int *)((longlong)param_2 + uVar13 * 0x19 + 0x7a) == 0) {
            pvStack_50 = (void *)0x0;
            uVar14 = 0;
          }
          else {
            puVar10 = FUN_18000d230();
            local_d8 = (ulonglong)*(uint *)((longlong)param_2 + uVar13 * 0x19 + 0x7a);
            puVar2 = puVar10 + 0x40;
            local_b0 = puVar2;
            iVar8 = _Mtx_lock(puVar2);
            if (iVar8 != 0) {
              std::_Throw_C_error(iVar8);
            }
            local_a8 = 1;
            local_d0 = (longlong *)(puVar10 + 0x10);
            lVar12 = *local_d0;
            plVar3 = (longlong *)(puVar10 + 0x18);
            if ((lVar12 == 0) || (0x9fffff < *plVar3 + local_d8)) {
              pvVar11 = operator_new(0xa00000);
              *(void **)(puVar10 + 0x10) = pvVar11;
              memset(pvVar11,0,0xa00000);
              plVar7 = local_d0;
              *plVar3 = 0;
              FUN_18000d4a0((undefined8 *)(puVar10 + 0x30),local_d0);
              lVar12 = *plVar7;
            }
            if (lVar12 == 0) {
              iVar8 = _Mtx_unlock(puVar2);
              if (iVar8 != 0) {
                std::_Throw_C_error(iVar8);
              }
              pvVar11 = (void *)0x0;
            }
            else {
              pvVar11 = (void *)(*plVar3 + lVar12);
              *plVar3 = *plVar3 + local_d8;
              iVar8 = _Mtx_unlock(puVar2);
              if (iVar8 != 0) {
                std::_Throw_C_error(iVar8);
              }
            }
            pvStack_50 = pvVar11;
            memcpy(pvVar11,(void *)((longlong)param_2 +
                                   (ulonglong)*(uint *)((longlong)param_2 + uVar13 * 0x19 + 0x76) +
                                   0x65),
                   (ulonglong)*(uint *)((longlong)param_2 + uVar13 * 0x19 + 0x7a));
            uVar14 = *(uint *)((longlong)param_2 + uVar13 * 0x19 + 0x7a);
            param_1 = local_c8;
          }
          uVar4 = *(undefined2 *)((longlong)param_2 + uVar13 * 0x19 + 0x7a);
          if (param_1 < (ulonglong)uVar14 + 0x7e) goto LAB_18000da8a;
          uStack_77 = 0;
          plVar3 = (longlong *)puVar9[0x12];
          puVar5 = (undefined4 *)plVar3[1];
          local_58 = uVar4;
          if ((undefined4 *)plVar3[2] == puVar5) {
            FUN_18000daf0(plVar3,puVar5,&local_88);
          }
          else {
            *puVar5 = local_a0;
            puVar5[1] = uStack_9c;
            puVar5[2] = uStack_98;
            puVar5[3] = uStack_94;
            *(ulonglong *)(puVar5 + 4) = CONCAT53(uStack_75,CONCAT12(uStack_76,(ushort)local_78));
            *(undefined8 *)(puVar5 + 6) = uStack_70;
            *(undefined8 *)(puVar5 + 8) = local_68;
            *(undefined8 *)(puVar5 + 10) = uStack_60;
            *(ulonglong *)(puVar5 + 0xc) = CONCAT62(uStack_56,uVar4);
            *(void **)(puVar5 + 0xe) = pvStack_50;
            plVar3[1] = plVar3[1] + 0x40;
          }
          *(int *)(puVar9 + 0xd) =
               *(int *)(puVar9 + 0xd) + *(int *)((longlong)param_2 + uVar13 * 0x19 + 0x7a);
          uVar14 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar14;
          param_4 = local_c0;
        } while (uVar14 < *(uint *)(param_2 + 0xc));
      }
      *(int *)(puVar9 + 0xd) = *(int *)(puVar9 + 0xd) + *(int *)(puVar9 + 0xc) * 0x19;
    }
    else {
      if (param_1 < (ulonglong)uVar14 * 0x21 + 0x65) goto LAB_18000da8a;
      if (uVar14 != 0) {
        do {
          pvStack_50 = (void *)0x0;
          local_58 = 0;
          uStack_77 = 0;
          uStack_76 = 0;
          lVar12 = uVar13 * 0x21;
          puVar1 = (undefined8 *)(lVar12 + 0x65 + (longlong)param_2);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          local_78 = *(byte *)(lVar12 + 0x75 + (longlong)param_2);
          uStack_70 = *(undefined8 *)(lVar12 + 0x76 + (longlong)param_2);
          local_68 = *(undefined8 *)(lVar12 + 0x7e + (longlong)param_2);
          uStack_60 = 0;
          plVar3 = (longlong *)puVar9[0x12];
          puVar1 = (undefined8 *)plVar3[1];
          if ((undefined8 *)plVar3[2] == puVar1) {
            FUN_18000daf0(plVar3,puVar1,&local_88);
          }
          else {
            *puVar1 = local_88;
            puVar1[1] = uStack_80;
            puVar1[2] = CONCAT53(uStack_75,(uint3)local_78);
            puVar1[3] = uStack_70;
            puVar1[4] = local_68;
            puVar1[5] = 0;
            puVar1[6] = (ulonglong)uStack_56 << 0x10;
            puVar1[7] = 0;
            plVar3[1] = plVar3[1] + 0x40;
          }
          uVar14 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_2 + 0xc));
      }
      *(int *)(puVar9 + 0xd) = *(int *)(puVar9 + 0xc) * 0x21;
    }
    *param_4 = puVar9;
  }
LAB_18000da8a:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_f8);
  return;
}




void FUN_18000dac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180009ad0(param_1,param_2,param_3);
  uVar1 = param_4[1];
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  uVar1 = param_4[3];
  *(undefined8 *)(lVar2 + 0x20) = param_4[2];
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = param_4[4];
  return;
}




longlong FUN_18000daf0(longlong *param_1,void *param_2,undefined8 *param_3)

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
  lVar9 = param_1[1] - lVar5 >> 6;
  if (lVar9 == 0x3ffffffffffffff) {
    FUN_180002e90();
    pcVar2 = (code *)swi(3);
    lVar5 = (*pcVar2)();
    return lVar5;
  }
  uVar10 = lVar9 + 1;
  uVar6 = param_1[2] - lVar5 >> 6;
  uVar11 = uVar10;
  if ((uVar6 <= 0x3ffffffffffffff - (uVar6 >> 1)) &&
     (uVar11 = (uVar6 >> 1) + uVar6, uVar11 < uVar10)) {
    uVar11 = uVar10;
  }
  uVar6 = uVar11 * 0x40;
  if (uVar11 < 0x400000000000000) {
    uVar11 = uVar6;
    if (0xfff < uVar6) goto LAB_18000db89;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar11 = 0xffffffffffffffff;
LAB_18000db89:
    uVar7 = uVar11 + 0x27;
    if (uVar7 <= uVar11) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar7);
    if (pvVar4 == (void *)0x0) goto LAB_18000dcab;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  uVar3 = param_3[1];
  uVar11 = (longlong)param_2 - lVar5 & 0xffffffffffffffc0;
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
  pvVar4 = (void *)param_1[1];
  pvVar8 = (void *)*param_1;
  FUN_180002ed0(local_res8);
  if (param_2 == pvVar4) {
    _Size = (longlong)pvVar4 - (longlong)pvVar8;
    pvVar4 = _Dst;
    param_2 = pvVar8;
  }
  else {
    memmove(_Dst,pvVar8,(longlong)param_2 - (longlong)pvVar8);
    lVar5 = uVar11 + 0x40;
    FUN_180002ed0(local_res8);
    pvVar4 = (void *)(lVar5 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar4,param_2,_Size);
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar8 = pvVar4;
    if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xffffffffffffffc0U)) &&
       (pvVar8 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) {
LAB_18000dcab:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar8);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(uVar10 * 0x40 + (longlong)_Dst);
  param_1[2] = (longlong)(uVar6 + (longlong)_Dst);
  return *param_1 + uVar11;
}




undefined4 FUN_18000dcc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined8 FUN_18000dcd0(void)

{
  return 10;
}




undefined8 * FUN_18000dce0(undefined8 *param_1,uint param_2)

{
  *param_1 = IDataRunList::vftable;
  FUN_180010a50((longlong)param_1);
  FUN_180010d00((longlong)(param_1 + 1));
  free((void *)param_1[1]);
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000dd50(undefined8 *param_1)

{
  *param_1 = IDataRunList::vftable;
  FUN_180010a50((longlong)param_1);
  FUN_180010d00((longlong)(param_1 + 1));
  free((void *)param_1[1]);
  param_1[1] = 0;
  return;
}




void FUN_18000dd90(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)operator_new(0x10);
  *local_res8 = *param_2;
  local_res8[1] = param_2[1];
  FUN_18000dde0(param_1 + 8,&local_res8);
  return;
}




void FUN_18000dde0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if ((((int)*(longlong *)(param_1 + 0x20) + (int)uVar3 & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 2U >> 1)) {
    FUN_18000dea0(param_1,param_2);
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




void FUN_18000dea0(longlong param_1,undefined8 param_2)

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
      FUN_18000e0a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar10 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_18000df33;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_18000df33:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_18000e093;
    _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar2;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  sVar7 = uVar10 * 8;
  pvVar2 = (void *)(lVar9 + sVar7);
  FUN_180002ed0((undefined1 *)&local_res10);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + lVar9;
  memmove((void *)(sVar7 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  pvVar6 = (void *)(sVar5 + (longlong)(sVar7 + (longlong)_Dst));
  FUN_180002ed0((undefined1 *)&local_res10);
  if (uVar8 < uVar10) {
    sVar5 = uVar8 * 8;
    memmove(pvVar6,pvVar2,sVar5);
    lVar9 = *(longlong *)(param_1 + 8);
    pvVar2 = (void *)(sVar5 + lVar9);
    FUN_180002ed0((undefined1 *)&local_res10);
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
LAB_18000e093:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  return;
}




void FUN_18000e0a0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




uint FUN_18000e0c0(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_3 != 0) {
    uVar2 = (ulonglong)param_3;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = *(uint *)(&DAT_180018d90 + (ulonglong)((bVar1 ^ param_1) & 0xff) * 4) ^ param_1 >> 8
      ;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return param_1;
}




undefined8 * FUN_18000e110(undefined8 *param_1,uint param_2)

{
  FUN_18000e150(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000e150(undefined8 *param_1)

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
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




ulonglong FUN_18000e1d0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00018000e262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)ppuVar3[3])(plVar5);
        return uVar4;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0xe;
}




void FUN_18000e270(longlong param_1,undefined8 *param_2,undefined4 *param_3)

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




undefined8 FUN_18000e310(longlong param_1,longlong *param_2)

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




undefined8 FUN_18000e4c0(longlong param_1,longlong *param_2)

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




undefined8 * FUN_18000e6a0(longlong param_1)

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




undefined8 * FUN_18000e8b0(undefined8 *param_1)

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




undefined8 * FUN_18000ea00(undefined8 *param_1,uint param_2)

{
  FUN_18000ea40(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000ea40(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  *param_1 = CFileSystemNode::vftable;
  uVar6 = 0;
  if ((void *)param_1[0x3b] != (void *)0x0) {
    free((void *)param_1[0x3b]);
    param_1[0x3b] = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  memset(param_1 + 0x13,0,0x130);
  plVar7 = (longlong *)param_1[0x42];
  uVar5 = (ulonglong)((longlong)param_1[0x43] + (7 - (longlong)plVar7)) >> 3;
  if ((longlong *)param_1[0x43] < plVar7) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  param_1[0x43] = param_1[0x42];
  _Mtx_destroy_in_situ(param_1 + 0x45);
  pvVar4 = (void *)param_1[0x42];
  if (pvVar4 != (void *)0x0) {
    _Memory = pvVar4;
    if ((0xfff < (param_1[0x44] - (longlong)pvVar4 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  plVar7 = (longlong *)param_1[6];
  *param_1 = CFileNode::vftable;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x138))(plVar7,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}




void FUN_18000ebf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_3;
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return;
}




undefined8 FUN_18000ec00(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c8);
  *param_3 = *(undefined4 *)(param_1 + 0x1d0);
  return 1;
}




void FUN_18000ec20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}




undefined4 FUN_18000ec30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




undefined8 FUN_18000ec40(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0xc0),0x108);
  return 1;
}




undefined8 FUN_18000ec70(longlong param_1,void *param_2)

{
  memmove((void *)(param_1 + 0xc0),param_2,0x108);
  return 1;
}




undefined8 FUN_18000ec90(longlong param_1,void *param_2)

{
  memmove(param_2,(void *)(param_1 + 0x98),0x28);
  return 1;
}




void FUN_18000ecc0(undefined8 param_1,longlong *param_2,int param_3)

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
  
  local_30 = DAT_180021010 ^ (ulonglong)auStack_a8;
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
    FUN_18000f910(param_2,(int *)&local_60);
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
LAB_18000ee66:
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
        if ((iVar3 == 0) && (iVar5 == 0)) goto LAB_18000ee66;
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




undefined8 FUN_18000ef30(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018000ef44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_3);
    return uVar2;
  }
  return 0;
}




void FUN_18000ef50(longlong param_1)

{
  undefined1 auStack_68 [32];
  int local_48 [11];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180021010 ^ (ulonglong)auStack_68;
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
    FUN_18000f910(param_1,local_48);
  }
  memmove((void *)(param_1 + 0x98),local_48,0x28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_18000efd0(longlong param_1,longlong *param_2)

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
  
  local_28 = DAT_180021010 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0;
    local_50 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff;
    local_40 = 0;
    local_30 = *(ulonglong *)(param_1 + 0xb8) & 0xffffffff;
    uStack_38 = *(ulonglong *)(param_1 + 0xb0) & 0xffffffff;
    FUN_18000e310(param_1,param_2);
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




undefined8 FUN_18000f210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  uint local_res10 [2];
  longlong *local_res18 [2];
  
  if (param_2 != (longlong *)0x0) {
    FUN_18000e4c0(param_1,param_2);
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
      free(*(void **)(param_1 + 0x1d8));
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
        plVar3 = FUN_18000e8b0(local_res18[0]);
        local_res18[0] = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
        puVar1 = *(undefined8 **)(param_1 + 0x218);
        if (*(undefined8 **)(param_1 + 0x220) == puVar1) {
          FUN_180002ce0((longlong *)(param_1 + 0x210),puVar1,local_res18);
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
FUN_18000f470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

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
  puVar6 = FUN_18000e8b0(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
    plVar7 = FUN_18000f690(param_1);
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
      FUN_18000fda0(puVar6 + 0x42,*(void **)(param_1 + 0x210),*(longlong *)(param_1 + 0x218),param_4
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




longlong * FUN_18000f690(longlong param_1)

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
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c840);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 4:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c848);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 5:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c850);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 6:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c868);
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
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c858);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    case 10:
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_18001c860);
      (**(code **)(*plVar1 + 0x40))(plVar1,0x10);
      return plVar1;
    }
  }
  return (longlong *)0x0;
}




/* WARNING: Removing unreachable block (ram,0x00018000fbf0) */
/* WARNING: Removing unreachable block (ram,0x00018000fbf6) */

void FUN_18000f910(undefined8 param_1,int *param_2)

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
    FUN_18000dea0((longlong)&local_50,local_38);
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
      if ((undefined **)*plVar3 == CBtrfsFileProerties::vftable) {
        uVar4 = *(ushort *)((longlong)plVar3 + 0x77);
      }
      else {
        uVar4 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
      }
      if ((uVar4 & 0x10) == 0) {
        iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar5 == 0) {
          *param_2 = *param_2 + 1;
        }
        if ((undefined **)*plVar3 == CBtrfsFileProerties::vftable) {
          lVar7 = *(longlong *)((longlong)plVar3 + 0x4b);
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
          if ((undefined **)*plVar3 == CBtrfsFileProerties::vftable) {
            lVar7 = *(longlong *)((longlong)plVar3 + 0x4b);
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
        FUN_18000dea0((longlong)&local_50,local_40);
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
      free(pvVar8);
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
    free(pvVar8);
  }
  local_40 = 0;
  pvStack_48 = (void *)0x0;
  free(local_50);
  return;
}




void FUN_18000fcd0(undefined8 *param_1)

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




void FUN_18000fda0(ulonglong *param_1,void *param_2,longlong param_3,undefined1 param_4)

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
LAB_18000ff63:
      FUN_180002e90();
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
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar3)))) goto LAB_18000feb6;
      free(pvVar3);
    }
    pvVar4 = (void *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar2 != 0) {
      if (0x1fffffffffffffff < uVar2) goto LAB_18000ff63;
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
LAB_18000feb6:
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
    FUN_180002ed0(local_res20);
    memmove(pvVar4,param_2,sVar7);
    pvVar4 = (void *)(sVar7 + (longlong)pvVar4);
  }
  else if (uVar2 < uVar6) {
    sVar7 = uVar2 * 8;
    memmove(pvVar4,param_2,sVar7);
    pvVar3 = (void *)(sVar7 + (longlong)param_2);
    pvVar4 = (void *)param_1[1];
    FUN_180002ed0(local_res20);
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




void FUN_18000ff70(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_58 [11];
  
  local_58[8] = DAT_180021010 ^ (ulonglong)local_58;
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




longlong * FUN_180010090(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *_Memory;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte local_res20 [8];
  longlong local_60;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  longlong *plVar13;
  
  plVar13 = (longlong *)0x0;
  plVar12 = (longlong *)0x0;
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  FUN_180010710((longlong *)&local_50,param_2);
  local_60 = 0;
  *param_3 = 0;
  *param_2 = 0;
  pbVar7 = local_50;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar8 = *(ulonglong *)(param_1 + 0x20);
    plVar5 = plVar13;
    if ((undefined8 *)(param_1 + 8) != (undefined8 *)0x0) {
      plVar5 = *(longlong **)(param_1 + 8);
    }
    if (((*(longlong **)(param_1 + 0x30) != plVar5) && (plVar5 != (longlong *)0x0)) &&
       ((undefined8 *)*plVar5 != (undefined8 *)0x0)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*plVar5;
    }
    *(ulonglong *)(param_1 + 0x40) = uVar8;
    plVar5 = plVar13;
    if (uVar8 != *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20)) {
      if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x30);
      }
      plVar5 = *(longlong **)
                (*(longlong *)(plVar5[1] + (plVar5[2] - 1U & uVar8 >> 1) * 8) +
                (ulonglong)((uint)uVar8 & 1) * 8);
    }
    if (plVar5 != (longlong *)0x0) {
      *param_2 = *plVar5;
      bVar2 = false;
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar10 = *(longlong *)(param_1 + 0x28);
      uVar8 = *(ulonglong *)(param_1 + 0x40);
      while (uVar8 != lVar9 + lVar10) {
        lVar9 = *plVar5;
        uVar11 = lVar9 - local_60;
        pbVar7 = local_48;
        bVar3 = FUN_18000ff70(uVar11);
        uVar8 = plVar5[1];
        bVar4 = FUN_18000ff70(uVar8);
        if (lVar9 == -1) {
          bVar2 = true;
        }
        bVar1 = 0;
        if (lVar9 != -1) {
          local_60 = lVar9;
          bVar1 = bVar3;
        }
        *param_3 = *param_3 + uVar8;
        lVar9 = plVar5[1];
        local_res20[0] = bVar1 << 4 | bVar4 & 0xf;
        if (local_40 == pbVar7) {
          FUN_180010890((longlong *)&local_50,pbVar7,local_res20);
        }
        else {
          *pbVar7 = local_res20[0];
          local_48 = pbVar7 + 1;
        }
        uVar6 = 0;
        if (bVar4 != 0) {
          do {
            local_res20[0] = (byte)(lVar9 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180010890((longlong *)&local_50,local_48,local_res20);
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
            local_res20[0] = (byte)((longlong)uVar11 >> ((byte)(uVar6 << 3) & 0x3f));
            if (local_40 == local_48) {
              FUN_180010890((longlong *)&local_50,local_48,local_res20);
            }
            else {
              *local_48 = local_res20[0];
              local_48 = local_48 + 1;
            }
            bVar3 = (char)uVar6 + 1;
            uVar6 = (uint)bVar3;
          } while (bVar3 < bVar1);
        }
        uVar8 = *(longlong *)(param_1 + 0x40) + 1;
        *(ulonglong *)(param_1 + 0x40) = uVar8;
        lVar10 = *(longlong *)(param_1 + 0x28);
        lVar9 = *(longlong *)(param_1 + 0x20);
        plVar5 = plVar13;
        if (uVar8 != lVar9 + lVar10) {
          plVar12 = plVar13;
          if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
            plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x30);
          }
          plVar5 = *(longlong **)
                    (*(longlong *)(plVar12[1] + (uVar8 >> 1 & plVar12[2] - 1U) * 8) +
                    (ulonglong)((uint)uVar8 & 1) * 8);
        }
      }
      if (bVar2) {
        *param_3 = 0;
      }
      pbVar7 = local_50;
      plVar12 = plVar13;
      if (local_50 != local_48) {
        local_res20[0] = 0;
        if (local_40 == local_48) {
          FUN_180010890((longlong *)&local_50,local_48,local_res20);
        }
        else {
          *local_48 = 0;
          local_48 = local_48 + 1;
        }
        pbVar7 = local_50;
        uVar8 = (longlong)local_48 - (longlong)local_50;
        plVar12 = (longlong *)operator_new(uVar8 & 0xffffffff);
        if (plVar12 != (longlong *)0x0) {
          memcpy(plVar12,pbVar7,uVar8 & 0xffffffff);
        }
      }
    }
  }
  if (pbVar7 != (byte *)0x0) {
    _Memory = pbVar7;
    if ((0xfff < (ulonglong)((longlong)local_40 - (longlong)pbVar7)) &&
       (_Memory = *(byte **)(pbVar7 + -8), (byte *)0x1f < pbVar7 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return plVar12;
}




undefined2 *
FUN_1800105e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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




void FUN_1800106b0(longlong *param_1)

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




void FUN_180010710(longlong *param_1,undefined8 param_2)

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
  FUN_180002ed0((undefined1 *)&local_res10);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  FUN_1800107a0(param_1,(longlong)_Dst,lVar1 - lVar2,0x80);
  return;
}




longlong FUN_180010780(longlong param_1)

{
  return param_1 + 8;
}




undefined8 FUN_180010790(undefined8 param_1)

{
  return param_1;
}




void FUN_1800107a0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}




undefined8 * FUN_180010830(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
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
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x18)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




longlong FUN_180010890(longlong *param_1,void *param_2,undefined1 *param_3)

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
    FUN_180002e90();
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
  FUN_180002ed0(local_res8);
  if (param_2 == pvVar3) {
    _Size = (longlong)pvVar3 - (longlong)_Src;
    pvVar3 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    lVar4 = lVar7 + 1;
    FUN_180002ed0(local_res8);
    pvVar3 = (void *)(lVar4 + (longlong)_Dst);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar3,param_2,_Size);
  FUN_1800107a0(param_1,(longlong)_Dst,uVar6,uVar5);
  return *param_1 + lVar7;
}




undefined8 * FUN_1800109d0(undefined8 *param_1)

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




void FUN_180010a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  for (uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar3 != *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20); uVar3 = uVar3 + 1) {
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    free(*(void **)(*(longlong *)
                     (*(longlong *)(lVar2 + 8) + (uVar3 >> 1 & *(longlong *)(lVar2 + 0x10) - 1U) * 8
                     ) + (ulonglong)((uint)uVar3 & 1) * 8));
  }
  FUN_180010d00(param_1 + 8);
  plVar1 = *(longlong **)(param_1 + 8);
  if (((*(longlong **)(param_1 + 0x30) != plVar1) && (plVar1 != (longlong *)0x0)) &&
     ((undefined8 *)*plVar1 != (undefined8 *)0x0)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)*plVar1;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  return;
}




void FUN_180010b00(longlong param_1,longlong *param_2)

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




void FUN_180010bc0(longlong param_1,longlong *param_2)

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
        FUN_18000dea0(param_1 + 8,uVar5);
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




void FUN_180010d00(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
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
      free(pvVar1);
    }
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_180010dc0(void)

{
  return 2;
}




undefined8 * FUN_180010dd0(undefined8 *param_1,uint param_2)

{
  *param_1 = IDataRunList::vftable;
  FUN_180010a50((longlong)param_1);
  FUN_180010d00((longlong)(param_1 + 1));
  free((void *)param_1[1]);
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_180010e40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_180010e50(longlong param_1,longlong *param_2)

{
  FUN_180010b00(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180010e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,4);
  return;
}




void FUN_180010e90(longlong param_1,longlong *param_2)

{
  FUN_180010bc0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000180010ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,4);
  return;
}




undefined8 FUN_180010ed0(longlong param_1,longlong param_2,int param_3)

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
      FUN_18000dea0(param_1 + 8,uVar6);
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




undefined4 FUN_1800111a0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar3 = *(code **)(param_1 + 0x30);
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pcVar3 == (code *)0x0) {
    pcVar3 = FUN_180014be0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(code **)(param_1 + 0x30) = FUN_180014be0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(undefined1 **)(param_1 + 0x38) = &LAB_180014bf0;
  }
  plVar4 = (longlong *)(*pcVar3)(uVar7,1,0x1718);
  if (plVar4 != (longlong *)0x0) {
    *(longlong **)(param_1 + 0x28) = plVar4;
    *plVar4 = param_1;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 1;
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 9) = 0xf;
    *(undefined4 *)((longlong)plVar4 + 0x44) = 0x8000;
    *(undefined4 *)((longlong)plVar4 + 0x4c) = 0x7fff;
    *(undefined4 *)(plVar4 + 0xf) = 0xf;
    *(undefined4 *)((longlong)plVar4 + 0x74) = 0x8000;
    *(undefined4 *)((longlong)plVar4 + 0x7c) = 0x7fff;
    *(undefined4 *)(plVar4 + 0x10) = 5;
    lVar5 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0x8000,2);
    plVar4[10] = lVar5;
    lVar5 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar4 + 0x44),2);
    plVar4[0xc] = lVar5;
    lVar5 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar4 + 0x74),2);
    *(undefined4 *)(plVar4 + 0x2de) = 0x4000;
    plVar4[0xd] = lVar5;
    lVar5 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0x4000,4);
    plVar4[2] = lVar5;
    uVar1 = *(uint *)(plVar4 + 0x2de);
    *(uint *)(plVar4 + 3) = uVar1 * 4;
    if ((((plVar4[10] != 0) && (plVar4[0xc] != 0)) && (plVar4[0xd] != 0)) && (lVar5 != 0)) {
      *(undefined8 *)((longlong)plVar4 + 0xac) = 6;
      *(undefined1 *)((longlong)plVar4 + 0x3c) = 8;
      plVar4[0x2df] = lVar5 + (ulonglong)(uVar1 >> 1) * 2;
      plVar4[0x2dd] = lVar5 + (ulonglong)uVar1 * 3;
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (((lVar5 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
         (*(longlong *)(param_1 + 0x38) != 0)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x48) = 2;
        iVar6 = *(int *)(lVar5 + 0x2c);
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined4 *)(lVar5 + 0x28) = 0;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
          *(int *)(lVar5 + 0x2c) = iVar6;
        }
        uVar2 = 0x71;
        if (iVar6 != 0) {
          uVar2 = 0x2a;
        }
        *(undefined4 *)(lVar5 + 8) = uVar2;
        *(uint *)(param_1 + 0x4c) = (uint)(iVar6 != 2);
        *(longlong *)(lVar5 + 0xb40) = lVar5 + 0xbc;
        *(undefined ***)(lVar5 + 0xb50) = &PTR_DAT_180021078;
        *(longlong *)(lVar5 + 0xb58) = lVar5 + 0x9b0;
        *(undefined ***)(lVar5 + 0xb68) = &PTR_DAT_180021038;
        *(longlong *)(lVar5 + 0xb70) = lVar5 + 0xaa4;
        *(undefined **)(lVar5 + 0xb80) = &DAT_180021058;
        *(undefined4 *)(lVar5 + 0x40) = 0;
        *(undefined2 *)(lVar5 + 0x1710) = 0;
        *(undefined4 *)(lVar5 + 0x1714) = 0;
        *(undefined4 *)(lVar5 + 0x170c) = 8;
        init_block(lVar5);
        *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x44) * 2;
        *(undefined2 *)(*(longlong *)(lVar5 + 0x68) + (ulonglong)(*(int *)(lVar5 + 0x74) - 1) * 2) =
             0;
        memset(*(void **)(lVar5 + 0x68),0,(ulonglong)(*(int *)(lVar5 + 0x74) - 1) * 2);
        lVar8 = (longlong)*(int *)(lVar5 + 0xac);
        *(uint *)(lVar5 + 0xa8) = (uint)*(ushort *)(&DAT_1800192a2 + lVar8 * 0x10);
        *(uint *)(lVar5 + 0xb4) = (uint)*(ushort *)(&DAT_1800192a0 + lVar8 * 0x10);
        *(uint *)(lVar5 + 0xb8) = (uint)*(ushort *)(&DAT_1800192a4 + lVar8 * 0x10);
        *(uint *)(lVar5 + 0xa4) = (uint)*(ushort *)(&DAT_1800192a6 + lVar8 * 0x10);
        *(undefined8 *)(lVar5 + 0x90) = 0;
        *(undefined4 *)(lVar5 + 0x84) = 0;
        *(undefined4 *)(lVar5 + 0x9c) = 0;
        *(undefined4 *)(lVar5 + 0x70) = 0;
        *(undefined4 *)(lVar5 + 0xa0) = 2;
        *(undefined4 *)(lVar5 + 0x88) = 2;
        return 0;
      }
      return 0xfffffffe;
    }
    *(undefined4 *)(plVar4 + 1) = 0x29a;
    *(char **)(param_1 + 0x20) = "insufficient memory";
    FUN_180011e00(param_1);
  }
  return 0xfffffffc;
}




void FUN_1800114e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(lVar3 + 0x28) <= *(uint *)(param_1 + 0x18)) {
    uVar4 = *(uint *)(lVar3 + 0x28);
  }
  if (uVar4 != 0) {
    memcpy(*(void **)(param_1 + 0x10),*(void **)(lVar3 + 0x20),(ulonglong)uVar4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar4;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
    *plVar1 = *plVar1 + (ulonglong)uVar4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x28);
    *piVar2 = *piVar2 - uVar4;
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar3 + 0x28) == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}




ulonglong FUN_180011550(longlong *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  if ((param_1[2] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) {
    param_1[4] = (longlong)"stream error";
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) goto LAB_180011dbe;
  iVar13 = *(int *)(puVar3 + 1);
  *puVar3 = param_1;
  *(undefined4 *)(puVar3 + 8) = 4;
  uVar8 = 0;
  uVar9 = 0;
  if (iVar13 == 0x2a) {
    if (*(int *)((longlong)puVar3 + 0x2c) == 2) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0x1f;
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0x8b;
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 8;
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      piVar4 = (int *)puVar3[6];
      if (piVar4 == (int *)0x0) {
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        if (*(int *)((longlong)puVar3 + 0xac) == 9) {
          uVar12 = 2;
        }
        else if ((*(int *)(puVar3 + 0x16) < 2) && (1 < *(int *)((longlong)puVar3 + 0xac))) {
          uVar12 = 0;
        }
        else {
          uVar12 = 4;
        }
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = uVar12;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = 0xb;
        iVar13 = 0x71;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined4 *)(puVar3 + 1) = 0x71;
      }
      else {
        *(byte *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             (-(*(longlong *)(piVar4 + 0xc) != 0) & 0x10U) + (-(piVar4[0xf] != 0) & 2U) +
             (-(*(longlong *)(piVar4 + 8) != 0) & 8U) + (-(*(longlong *)(piVar4 + 4) != 0) & 4U) +
             (*piVar4 != 0);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             *(undefined1 *)(puVar3[6] + 4);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             *(undefined1 *)(puVar3[6] + 5);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             *(undefined1 *)(puVar3[6] + 6);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             *(undefined1 *)(puVar3[6] + 7);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        if (*(int *)((longlong)puVar3 + 0xac) == 9) {
          uVar12 = 2;
        }
        else if ((*(int *)(puVar3 + 0x16) < 2) && (1 < *(int *)((longlong)puVar3 + 0xac))) {
          uVar12 = 0;
        }
        else {
          uVar12 = 4;
        }
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = uVar12;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
             *(undefined1 *)(puVar3[6] + 0xc);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        lVar10 = puVar3[6];
        uVar6 = *(uint *)(puVar3 + 5);
        if (*(longlong *)(lVar10 + 0x10) != 0) {
          *(undefined1 *)((ulonglong)uVar6 + puVar3[2]) = *(undefined1 *)(lVar10 + 0x18);
          *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
               *(undefined1 *)(puVar3[6] + 0x19);
          *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
          uVar6 = *(uint *)(puVar3 + 5);
          lVar10 = puVar3[6];
        }
        if (*(int *)(lVar10 + 0x3c) != 0) {
          if ((uint *)puVar3[2] == (uint *)0x0) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
            iVar13 = 0x45;
            *(undefined4 *)(puVar3 + 7) = 0;
            *(undefined4 *)(puVar3 + 1) = 0x45;
            goto LAB_1800118d5;
          }
          uVar6 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),(uint *)puVar3[2],uVar6);
          *(uint *)((longlong)param_1 + 0x4c) = uVar6;
        }
        iVar13 = 0x45;
        *(undefined4 *)(puVar3 + 7) = 0;
        *(undefined4 *)(puVar3 + 1) = 0x45;
      }
    }
    else {
      if ((*(int *)(puVar3 + 0x16) < 2) && (iVar13 = *(int *)((longlong)puVar3 + 0xac), 1 < iVar13))
      {
        if (iVar13 < 6) {
          uVar11 = 0x60;
          uVar6 = 0x40;
        }
        else if (iVar13 == 6) {
          uVar11 = 0xa0;
          uVar6 = 0x80;
        }
        else {
          uVar11 = 0xe0;
          uVar6 = 0xc0;
        }
      }
      else {
        uVar11 = 0x20;
        uVar6 = uVar9;
      }
      if (*(int *)((longlong)puVar3 + 0x94) != 0) {
        uVar6 = uVar11;
      }
      *(undefined4 *)(puVar3 + 1) = 0x71;
      iVar13 = ((*(int *)(puVar3 + 9) * 0x1000 - 0x7800U | uVar6) / 0x1f + 1) * 0x1f;
      *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)((uint)iVar13 >> 8);
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)iVar13;
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      if (*(int *)((longlong)puVar3 + 0x94) != 0) {
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
        *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)uVar2;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
        *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)uVar2;
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
      iVar13 = *(int *)(puVar3 + 1);
    }
  }
LAB_1800118d5:
  if (iVar13 == 0x45) {
    lVar10 = puVar3[6];
    if (*(longlong *)(lVar10 + 0x10) != 0) {
      uVar6 = *(uint *)(puVar3 + 5);
      uVar11 = uVar6;
      if (*(uint *)(puVar3 + 7) < (uint)*(ushort *)(lVar10 + 0x18)) {
        do {
          if (uVar11 == *(uint *)(puVar3 + 3)) {
            if ((*(int *)(lVar10 + 0x3c) != 0) && (uVar6 < uVar11)) {
              uVar7 = uVar9;
              if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
                uVar7 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                      (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
              }
              *(uint *)((longlong)param_1 + 0x4c) = uVar7;
            }
            FUN_1800114e0((longlong)param_1);
            uVar6 = *(uint *)(puVar3 + 5);
            uVar11 = uVar6;
            if (uVar6 == *(uint *)(puVar3 + 3)) break;
          }
          *(undefined1 *)((ulonglong)uVar11 + puVar3[2]) =
               *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 7) + *(longlong *)(puVar3[6] + 0x10));
          *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + 1;
          uVar11 = *(int *)(puVar3 + 5) + 1;
          *(uint *)(puVar3 + 5) = uVar11;
          lVar10 = puVar3[6];
        } while (*(uint *)(puVar3 + 7) < (uint)*(ushort *)(lVar10 + 0x18));
      }
      lVar10 = puVar3[6];
      if ((*(int *)(lVar10 + 0x3c) != 0) && (uVar6 < uVar11)) {
        uVar7 = uVar9;
        if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
          uVar7 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
        }
        *(uint *)((longlong)param_1 + 0x4c) = uVar7;
        lVar10 = puVar3[6];
      }
      if (*(int *)(puVar3 + 7) != *(int *)(lVar10 + 0x18)) {
        iVar13 = *(int *)(puVar3 + 1);
        goto LAB_1800119b7;
      }
      *(undefined4 *)(puVar3 + 7) = 0;
    }
    iVar13 = 0x49;
    *(undefined4 *)(puVar3 + 1) = 0x49;
  }
LAB_1800119b7:
  if (iVar13 == 0x49) {
    if (*(longlong *)(puVar3[6] + 0x20) != 0) {
      uVar6 = *(uint *)(puVar3 + 5);
      uVar11 = uVar6;
      do {
        if (uVar11 == *(uint *)(puVar3 + 3)) {
          if ((*(int *)(puVar3[6] + 0x3c) != 0) && (uVar6 < uVar11)) {
            uVar7 = uVar9;
            if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
              uVar7 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                    (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
            }
            *(uint *)((longlong)param_1 + 0x4c) = uVar7;
          }
          FUN_1800114e0((longlong)param_1);
          uVar6 = *(uint *)(puVar3 + 5);
          uVar11 = uVar6;
          if (uVar6 == *(uint *)(puVar3 + 3)) {
            bVar5 = true;
            goto LAB_180011a5e;
          }
        }
        cVar1 = *(char *)((ulonglong)*(uint *)(puVar3 + 7) + *(longlong *)(puVar3[6] + 0x20));
        *(uint *)(puVar3 + 7) = *(uint *)(puVar3 + 7) + 1;
        *(char *)((ulonglong)uVar11 + puVar3[2]) = cVar1;
        uVar11 = *(int *)(puVar3 + 5) + 1;
        *(uint *)(puVar3 + 5) = uVar11;
      } while (cVar1 != '\0');
      bVar5 = false;
LAB_180011a5e:
      if ((*(int *)(puVar3[6] + 0x3c) != 0) && (uVar6 < uVar11)) {
        uVar7 = uVar9;
        if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
          uVar7 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
        }
        *(uint *)((longlong)param_1 + 0x4c) = uVar7;
      }
      if (bVar5) {
        iVar13 = *(int *)(puVar3 + 1);
        goto LAB_180011a9c;
      }
      *(undefined4 *)(puVar3 + 7) = 0;
    }
    iVar13 = 0x5b;
    *(undefined4 *)(puVar3 + 1) = 0x5b;
  }
LAB_180011a9c:
  if (iVar13 == 0x5b) {
    if (*(longlong *)(puVar3[6] + 0x30) != 0) {
      uVar6 = *(uint *)(puVar3 + 5);
      uVar11 = uVar6;
      do {
        if (uVar11 == *(uint *)(puVar3 + 3)) {
          if ((*(int *)(puVar3[6] + 0x3c) != 0) && (uVar6 < uVar11)) {
            uVar7 = uVar9;
            if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
              uVar7 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                    (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
            }
            *(uint *)((longlong)param_1 + 0x4c) = uVar7;
          }
          FUN_1800114e0((longlong)param_1);
          uVar6 = *(uint *)(puVar3 + 5);
          uVar11 = uVar6;
          if (uVar6 == *(uint *)(puVar3 + 3)) {
            bVar5 = true;
            goto LAB_180011b3e;
          }
        }
        cVar1 = *(char *)((ulonglong)*(uint *)(puVar3 + 7) + *(longlong *)(puVar3[6] + 0x30));
        *(uint *)(puVar3 + 7) = *(uint *)(puVar3 + 7) + 1;
        *(char *)((ulonglong)uVar11 + puVar3[2]) = cVar1;
        uVar11 = *(int *)(puVar3 + 5) + 1;
        *(uint *)(puVar3 + 5) = uVar11;
      } while (cVar1 != '\0');
      bVar5 = false;
LAB_180011b3e:
      if ((*(int *)(puVar3[6] + 0x3c) != 0) && (uVar6 < uVar11)) {
        if ((uint *)((ulonglong)uVar6 + puVar3[2]) != (uint *)0x0) {
          uVar8 = FUN_180014ee0(*(uint *)((longlong)param_1 + 0x4c),
                                (uint *)((ulonglong)uVar6 + puVar3[2]),uVar11 - uVar6);
        }
        *(uint *)((longlong)param_1 + 0x4c) = uVar8;
      }
      if (bVar5) {
        iVar13 = *(int *)(puVar3 + 1);
        goto LAB_180011b7e;
      }
    }
    iVar13 = 0x67;
    *(undefined4 *)(puVar3 + 1) = 0x67;
  }
LAB_180011b7e:
  if (iVar13 == 0x67) {
    if (*(int *)(puVar3[6] + 0x3c) != 0) {
      uVar9 = *(uint *)(puVar3 + 5);
      uVar8 = *(uint *)(puVar3 + 3);
      if (uVar8 < uVar9 + 2) {
        FUN_1800114e0((longlong)param_1);
        uVar9 = *(uint *)(puVar3 + 5);
        uVar8 = *(uint *)(puVar3 + 3);
      }
      if (uVar8 < uVar9 + 2) goto LAB_180011bde;
      *(undefined1 *)((ulonglong)uVar9 + puVar3[2]) = *(undefined1 *)((longlong)param_1 + 0x4c);
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
           *(undefined1 *)((longlong)param_1 + 0x4d);
      *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(puVar3 + 1) = 0x71;
  }
LAB_180011bde:
  if ((*(int *)(puVar3 + 5) != 0) && (FUN_1800114e0((longlong)param_1), (int)param_1[3] == 0)) {
LAB_180011da5:
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    return 0;
  }
  if ((*(int *)(puVar3 + 1) == 0x29a) && ((int)param_1[1] != 0)) {
LAB_180011dbe:
    param_1[4] = (longlong)"buffer error";
    return 0xfffffffb;
  }
  if ((((int)param_1[1] != 0) || (*(int *)((longlong)puVar3 + 0x9c) != 0)) ||
     (*(int *)(puVar3 + 1) != 0x29a)) {
    uVar9 = (*(code *)(&PTR_FUN_1800192a8)[(longlong)*(int *)((longlong)puVar3 + 0xac) * 2])(puVar3)
    ;
    if (uVar9 - 2 < 2) {
      *(undefined4 *)(puVar3 + 1) = 0x29a;
    }
    if ((uVar9 & 0xfffffffd) == 0) {
      if ((int)param_1[3] != 0) {
        return 0;
      }
      goto LAB_180011da5;
    }
    if (uVar9 == 1) {
      FUN_180014220((longlong)puVar3,(undefined1 *)0x0,0,0);
      FUN_1800114e0((longlong)param_1);
      if ((int)param_1[3] == 0) goto LAB_180011da5;
    }
  }
  if (*(int *)((longlong)puVar3 + 0x2c) < 1) {
    return 1;
  }
  if (*(int *)((longlong)puVar3 + 0x2c) == 2) {
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0x4c);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0x4d);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0x4e);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0x4f);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0xc);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0xd);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0xe);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) =
         *(undefined1 *)((longlong)param_1 + 0xf);
  }
  else {
    uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
    *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)((ushort)uVar2 >> 8);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)uVar2;
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
    *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)((ushort)uVar2 >> 8);
    *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
    *(char *)((ulonglong)*(uint *)(puVar3 + 5) + puVar3[2]) = (char)uVar2;
  }
  *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
  FUN_1800114e0((longlong)param_1);
  if (0 < *(int *)((longlong)puVar3 + 0x2c)) {
    *(int *)((longlong)puVar3 + 0x2c) = -*(int *)((longlong)puVar3 + 0x2c);
  }
  return (ulonglong)(*(int *)(puVar3 + 5) == 0);
}




undefined8 FUN_180011e00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 8);
    if ((((iVar1 - 0x2aU < 0x3e) &&
         ((0x2002000088000001U >> ((ulonglong)(iVar1 - 0x2aU) & 0x3f) & 1) != 0)) || (iVar1 == 0x71)
        ) || (iVar1 == 0x29a)) {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x10));
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      if (*(longlong *)(lVar3 + 0x68) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x68));
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x60));
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      if (*(longlong *)(lVar3 + 0x50) != 0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x50));
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar3);
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (iVar1 == 0x71) {
        uVar2 = 0xfffffffd;
      }
      return uVar2;
    }
  }
  return 0xfffffffe;
}




/* Library Function - Single Match
    longest_match
   
   Library: Visual Studio 2019 Release */

uint longest_match(longlong param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  
  uVar13 = *(uint *)(param_1 + 0x94);
  uVar9 = (ulonglong)(int)*(uint *)(param_1 + 0xa0);
  pcVar3 = (char *)((ulonglong)uVar13 + *(longlong *)(param_1 + 0x50));
  cVar14 = pcVar3[uVar9 - 1];
  uVar16 = 0;
  if (*(int *)(param_1 + 0x44) - 0x106U < uVar13) {
    uVar16 = (uVar13 - *(int *)(param_1 + 0x44)) + 0x106;
  }
  cVar6 = pcVar3[uVar9];
  pcVar2 = pcVar3 + 0x102;
  uVar13 = *(uint *)(param_1 + 0xa4) >> 2;
  if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0xb4)) {
    uVar13 = *(uint *)(param_1 + 0xa4);
  }
  uVar4 = *(uint *)(param_1 + 0x9c);
  uVar15 = *(uint *)(param_1 + 0xb8);
  if (uVar4 < *(uint *)(param_1 + 0xb8)) {
    uVar15 = uVar4;
  }
  do {
    pcVar5 = (char *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x50));
    iVar7 = (int)uVar9;
    if ((((pcVar5[iVar7] == cVar6) && (pcVar5[(longlong)iVar7 + -1] == cVar14)) &&
        (*pcVar5 == *pcVar3)) && (pcVar5[1] == pcVar3[1])) {
      pcVar5 = pcVar5 + 2;
      pcVar11 = pcVar3 + 2;
      while (((((pcVar12 = pcVar11 + 1, *pcVar12 == pcVar5[1] &&
                (pcVar12 = pcVar11 + 2, *pcVar12 == pcVar5[2])) &&
               ((pcVar12 = pcVar11 + 3, *pcVar12 == pcVar5[3] &&
                ((pcVar12 = pcVar11 + 4, *pcVar12 == pcVar5[4] &&
                 (pcVar12 = pcVar11 + 5, *pcVar12 == pcVar5[5])))))) &&
              (pcVar12 = pcVar11 + 6, *pcVar12 == pcVar5[6])) &&
             (pcVar12 = pcVar11 + 7, *pcVar12 == pcVar5[7]))) {
        pcVar1 = pcVar5 + 8;
        pcVar5 = pcVar5 + 8;
        pcVar12 = pcVar11 + 8;
        if ((*pcVar12 != *pcVar1) || (pcVar11 = pcVar12, pcVar2 <= pcVar12)) break;
      }
      iVar10 = (int)pcVar12 - (int)pcVar2;
      uVar8 = iVar10 + 0x102;
      if (iVar7 < (int)uVar8) {
        *(uint *)(param_1 + 0x98) = param_2;
        uVar9 = (ulonglong)uVar8;
        if ((int)uVar15 <= (int)uVar8) {
LAB_18001207c:
          if (uVar8 <= uVar4) {
            uVar4 = uVar8;
          }
          return uVar4;
        }
        cVar14 = pcVar2[(longlong)iVar10 + -1];
        cVar6 = pcVar2[(longlong)(int)uVar8 + -0x102];
      }
    }
    uVar8 = (uint)uVar9;
    param_2 = (uint)*(ushort *)
                     (*(longlong *)(param_1 + 0x60) +
                     (ulonglong)(*(uint *)(param_1 + 0x4c) & param_2) * 2);
    if ((param_2 <= uVar16) || (uVar13 = uVar13 - 1, uVar13 == 0)) goto LAB_18001207c;
  } while( true );
}




uint FUN_1800120b0(longlong param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar4 = (char *)((ulonglong)*(uint *)(param_1 + 0x94) + *(longlong *)(param_1 + 0x50));
  pcVar7 = (char *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x50));
  if ((*pcVar7 == *pcVar4) && (pcVar7[1] == pcVar4[1])) {
    pcVar7 = pcVar7 + 2;
    pcVar5 = pcVar4 + 2;
    while (((((pcVar6 = pcVar5 + 1, *pcVar6 == pcVar7[1] &&
              (pcVar6 = pcVar5 + 2, *pcVar6 == pcVar7[2])) &&
             (pcVar6 = pcVar5 + 3, *pcVar6 == pcVar7[3])) &&
            ((pcVar6 = pcVar5 + 4, *pcVar6 == pcVar7[4] &&
             (pcVar6 = pcVar5 + 5, *pcVar6 == pcVar7[5])))) &&
           ((pcVar6 = pcVar5 + 6, *pcVar6 == pcVar7[6] &&
            (pcVar6 = pcVar5 + 7, *pcVar6 == pcVar7[7]))))) {
      pcVar1 = pcVar7 + 8;
      pcVar7 = pcVar7 + 8;
      pcVar6 = pcVar5 + 8;
      if ((*pcVar6 != *pcVar1) || (pcVar5 = pcVar6, pcVar4 + 0x102 <= pcVar6)) break;
    }
    uVar3 = ((int)pcVar6 - (int)(pcVar4 + 0x102)) + 0x102;
    if (2 < (int)uVar3) {
      *(uint *)(param_1 + 0x98) = param_2;
      uVar2 = *(uint *)(param_1 + 0x9c);
      if (uVar3 <= *(uint *)(param_1 + 0x9c)) {
        uVar2 = uVar3;
      }
      return uVar2;
    }
  }
  return 2;
}




void FUN_180012190(longlong *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  short *psVar8;
  ulonglong _Size;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x44);
  _Size = (ulonglong)uVar2;
  uVar9 = *(uint *)((longlong)param_1 + 0x9c);
  do {
    uVar9 = ((int)param_1[0xb] - *(uint *)((longlong)param_1 + 0x94)) - uVar9;
    if (*(int *)((longlong)param_1 + 0x44) + -0x106 + uVar2 <= *(uint *)((longlong)param_1 + 0x94))
    {
      memcpy((void *)param_1[10],(void *)(param_1[10] + _Size),_Size);
      uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
      *(uint *)(param_1 + 0x13) = (int)param_1[0x13] - uVar2;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) - uVar2;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar2;
      psVar8 = (short *)(param_1[0xd] + uVar11 * 2);
      do {
        puVar1 = (ushort *)(psVar8 + -1);
        psVar8 = psVar8 + -1;
        sVar6 = *puVar1 - (short)uVar2;
        if (*puVar1 < uVar2) {
          sVar6 = 0;
        }
        *psVar8 = sVar6;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != 0);
      psVar8 = (short *)(param_1[0xc] + _Size * 2);
      uVar10 = uVar2;
      do {
        puVar1 = (ushort *)(psVar8 + -1);
        psVar8 = psVar8 + -1;
        sVar6 = *puVar1 - (short)uVar2;
        if (*puVar1 < uVar2) {
          sVar6 = 0;
        }
        *psVar8 = sVar6;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar9 = uVar9 + uVar2;
    }
    plVar4 = (longlong *)*param_1;
    uVar10 = *(uint *)(plVar4 + 1);
    if (uVar10 == 0) {
      return;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x9c);
    uVar3 = *(uint *)((longlong)param_1 + 0x94);
    lVar5 = param_1[10];
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    else {
      *(uint *)(plVar4 + 1) = uVar10 - uVar9;
      if (*(int *)(plVar4[5] + 0x2c) == 1) {
        uVar10 = FUN_180014c00(*(uint *)((longlong)plVar4 + 0x4c),(byte *)*plVar4,uVar9);
LAB_1800122d2:
        *(uint *)((longlong)plVar4 + 0x4c) = uVar10;
      }
      else if (*(int *)(plVar4[5] + 0x2c) == 2) {
        if ((uint *)*plVar4 == (uint *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_180014ee0(*(uint *)((longlong)plVar4 + 0x4c),(uint *)*plVar4,uVar9);
        }
        goto LAB_1800122d2;
      }
      memcpy((void *)((ulonglong)uVar3 + (ulonglong)uVar7 + lVar5),(void *)*plVar4,(ulonglong)uVar9)
      ;
      *plVar4 = *plVar4 + (ulonglong)uVar9;
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + uVar9;
      uVar7 = *(uint *)((longlong)param_1 + 0x9c);
    }
    uVar9 = uVar7 + uVar9;
    *(uint *)((longlong)param_1 + 0x9c) = uVar9;
    if (2 < uVar9) {
      uVar10 = (uint)*(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(uint *)(param_1 + 0xe) = uVar10;
      *(uint *)(param_1 + 0xe) =
           (uVar10 << ((byte)(int)param_1[0x10] & 0x1f) ^
           (uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 1) + param_1[10])) &
           *(uint *)((longlong)param_1 + 0x7c);
    }
    if (0x105 < uVar9) {
      return;
    }
    if (*(int *)(*param_1 + 8) == 0) {
      return;
    }
  } while( true );
}




undefined8 FUN_180012370(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = (int)param_1[3] - 5;
  uVar9 = 0xffff;
  if (uVar5 < 0xffff) {
    uVar9 = uVar5;
  }
  puVar8 = (undefined1 *)0x0;
  do {
    uVar5 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar5 < 2) {
      FUN_180012190(param_1);
      uVar5 = *(uint *)((longlong)param_1 + 0x9c);
      if (uVar5 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        uVar9 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar9) {
          puVar8 = (undefined1 *)((ulonglong)uVar9 + param_1[10]);
        }
        FUN_1800143a0(param_1,puVar8,*(int *)((longlong)param_1 + 0x94) - uVar9,(uint)(param_2 == 4)
                     );
        lVar3 = *param_1;
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar4 = *(longlong *)(lVar3 + 0x28);
        uVar9 = *(uint *)(lVar3 + 0x18);
        if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar3 + 0x18)) {
          uVar9 = *(uint *)(lVar4 + 0x28);
        }
        if (uVar9 != 0) {
          memcpy(*(void **)(lVar3 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar9);
          *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)uVar9;
          plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + 0x20);
          *plVar1 = *plVar1 + (ulonglong)uVar9;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + uVar9;
          *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar9;
          piVar2 = (int *)(*(longlong *)(lVar3 + 0x28) + 0x28);
          *piVar2 = *piVar2 - uVar9;
          lVar3 = *(longlong *)(lVar3 + 0x28);
          if (*(int *)(lVar3 + 0x28) == 0) {
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
          }
        }
        if (*(int *)(*param_1 + 0x18) != 0) {
          if (param_2 == 4) {
            return 3;
          }
          return 1;
        }
        if (param_2 == 4) {
          return 2;
        }
        return 0;
      }
    }
    uVar10 = *(uint *)((longlong)param_1 + 0x84);
    piVar2 = (int *)((longlong)param_1 + 0x94);
    *piVar2 = *piVar2 + uVar5;
    uVar5 = *(uint *)((longlong)param_1 + 0x94);
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    uVar6 = uVar10 + uVar9;
    if ((*piVar2 == 0) || (uVar6 <= uVar5)) {
      *(uint *)((longlong)param_1 + 0x94) = uVar6;
      *(uint *)((longlong)param_1 + 0x9c) = uVar5 - uVar6;
      puVar7 = puVar8;
      if (-1 < (int)uVar10) {
        puVar7 = (undefined1 *)((ulonglong)uVar10 + param_1[10]);
      }
      FUN_1800143a0(param_1,puVar7,uVar9,0);
      lVar3 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar3 + 0x28);
      uVar5 = *(uint *)(lVar3 + 0x18);
      if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar3 + 0x18)) {
        uVar5 = *(uint *)(lVar4 + 0x28);
      }
      if (uVar5 != 0) {
        memcpy(*(void **)(lVar3 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar5);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5;
        plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + 0x20);
        *plVar1 = *plVar1 + (ulonglong)uVar5;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + uVar5;
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar5;
        piVar2 = (int *)(*(longlong *)(lVar3 + 0x28) + 0x28);
        *piVar2 = *piVar2 - uVar5;
        lVar3 = *(longlong *)(lVar3 + 0x28);
        if (*(int *)(lVar3 + 0x28) == 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
    uVar5 = *(uint *)((longlong)param_1 + 0x84);
    uVar10 = *(int *)((longlong)param_1 + 0x94) - uVar5;
    if (*(int *)((longlong)param_1 + 0x44) - 0x106U <= uVar10) {
      puVar7 = puVar8;
      if (-1 < (int)uVar5) {
        puVar7 = (undefined1 *)((ulonglong)uVar5 + param_1[10]);
      }
      FUN_1800143a0(param_1,puVar7,uVar10,0);
      lVar3 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar4 = *(longlong *)(lVar3 + 0x28);
      uVar5 = *(uint *)(lVar3 + 0x18);
      if (*(uint *)(lVar4 + 0x28) <= *(uint *)(lVar3 + 0x18)) {
        uVar5 = *(uint *)(lVar4 + 0x28);
      }
      if (uVar5 != 0) {
        memcpy(*(void **)(lVar3 + 0x10),*(void **)(lVar4 + 0x20),(ulonglong)uVar5);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + (ulonglong)uVar5;
        plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + 0x20);
        *plVar1 = *plVar1 + (ulonglong)uVar5;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + uVar5;
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) - uVar5;
        piVar2 = (int *)(*(longlong *)(lVar3 + 0x28) + 0x28);
        *piVar2 = *piVar2 - uVar5;
        lVar3 = *(longlong *)(lVar3 + 0x28);
        if (*(int *)(lVar3 + 0x28) == 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  } while( true );
}




undefined8 FUN_180012630(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  short sVar8;
  ushort uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  
  puVar11 = (undefined1 *)0x0;
  puVar14 = puVar11;
  do {
    uVar13 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar13 < 0x106) {
      FUN_180012190(param_1);
      uVar13 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar13 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar13 == 0) {
        uVar13 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar13) {
          puVar11 = (undefined1 *)((ulonglong)uVar13 + param_1[10]);
        }
        FUN_1800143a0(param_1,puVar11,*(int *)((longlong)param_1 + 0x94) - uVar13,
                      (uint)(param_2 == 4));
        lVar4 = *param_1;
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar5 = *(longlong *)(lVar4 + 0x28);
        uVar13 = *(uint *)(lVar4 + 0x18);
        if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar4 + 0x18)) {
          uVar13 = *(uint *)(lVar5 + 0x28);
        }
        if (uVar13 != 0) {
          memcpy(*(void **)(lVar4 + 0x10),*(void **)(lVar5 + 0x20),(ulonglong)uVar13);
          *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + (ulonglong)uVar13;
          plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x28) + 0x20);
          *plVar1 = *plVar1 + (ulonglong)uVar13;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + uVar13;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) - uVar13;
          piVar2 = (int *)(*(longlong *)(lVar4 + 0x28) + 0x28);
          *piVar2 = *piVar2 - uVar13;
          lVar4 = *(longlong *)(lVar4 + 0x28);
          if (*(int *)(lVar4 + 0x28) == 0) {
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
          }
        }
        if (*(int *)(*param_1 + 0x18) != 0) {
          if (param_2 == 4) {
            return 3;
          }
          return 1;
        }
        if (param_2 == 4) {
          return 2;
        }
        return 0;
      }
    }
    if (2 < uVar13) {
      uVar13 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) + param_1[10])
               ^ (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar13;
      *(undefined2 *)
       (param_1[0xc] +
       (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar13 * 2);
      puVar14 = (undefined1 *)
                (ulonglong)
                *(ushort *)
                 (param_1[0xc] +
                 (ulonglong)
                 (*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2);
      *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
           (short)*(uint *)((longlong)param_1 + 0x94);
    }
    uVar13 = (uint)puVar14;
    if (((uVar13 != 0) &&
        (uVar7 = *(int *)((longlong)param_1 + 0x94) - uVar13,
        uVar7 <= *(int *)((longlong)param_1 + 0x44) - 0x106U)) && ((int)param_1[0x16] != 2)) {
      if ((int)param_1[0x16] == 3) {
        if (uVar7 != 1) goto LAB_18001275b;
        uVar13 = FUN_1800120b0((longlong)param_1,uVar13);
      }
      else {
        uVar13 = longest_match((longlong)param_1,uVar13);
      }
      *(uint *)(param_1 + 0x11) = uVar13;
    }
LAB_18001275b:
    if (*(uint *)(param_1 + 0x11) < 3) {
      bVar12 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar12 * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      bVar15 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
LAB_18001293a:
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
      uVar13 = *(uint *)((longlong)param_1 + 0x94);
    }
    else {
      bVar12 = (char)*(uint *)(param_1 + 0x11) - 3;
      sVar8 = *(short *)((longlong)param_1 + 0x94) - (short)param_1[0x13];
      *(short *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = sVar8;
      uVar9 = sVar8 - 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar12;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_180019bc0)[bVar12] * 4 + 0x4c0);
      *psVar3 = *psVar3 + 1;
      if (uVar9 < 0x100) {
        pbVar6 = &DAT_180019cc0 + uVar9;
      }
      else {
        pbVar6 = &DAT_180019dc0 + (uVar9 >> 7);
      }
      psVar3 = (short *)((longlong)param_1 + (ulonglong)*pbVar6 * 4 + 0x9b0);
      *psVar3 = *psVar3 + 1;
      uVar13 = *(uint *)(param_1 + 0x11);
      bVar15 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      uVar7 = *(int *)((longlong)param_1 + 0x9c) - uVar13;
      *(uint *)((longlong)param_1 + 0x9c) = uVar7;
      if ((uVar13 <= *(uint *)(param_1 + 0x15)) && (2 < uVar7)) {
        *(uint *)(param_1 + 0x11) = uVar13 - 1;
        do {
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
          uVar13 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) +
                                   param_1[10]) ^
                   (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar13;
          *(undefined2 *)
           (param_1[0xc] +
           (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & *(uint *)((longlong)param_1 + 0x94)) *
           2) = *(undefined2 *)(param_1[0xd] + (ulonglong)uVar13 * 2);
          puVar14 = (undefined1 *)
                    (ulonglong)
                    *(ushort *)
                     (param_1[0xc] +
                     (ulonglong)
                     (*(uint *)((longlong)param_1 + 0x94) & *(uint *)((longlong)param_1 + 0x4c)) * 2
                     );
          *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               (short)*(uint *)((longlong)param_1 + 0x94);
          plVar1 = param_1 + 0x11;
          *(int *)plVar1 = (int)*plVar1 + -1;
        } while ((int)*plVar1 != 0);
        goto LAB_18001293a;
      }
      uVar13 = *(int *)((longlong)param_1 + 0x94) + uVar13;
      *(uint *)((longlong)param_1 + 0x94) = uVar13;
      *(undefined4 *)(param_1 + 0x11) = 0;
      uVar7 = (uint)*(byte *)((ulonglong)uVar13 + param_1[10]);
      *(uint *)(param_1 + 0xe) = uVar7;
      *(uint *)(param_1 + 0xe) =
           (uVar7 << ((byte)(int)param_1[0x10] & 0x1f) ^
           (uint)*(byte *)((ulonglong)(uVar13 + 1) + param_1[10])) &
           *(uint *)((longlong)param_1 + 0x7c);
    }
    if (bVar15) {
      uVar7 = *(uint *)((longlong)param_1 + 0x84);
      puVar10 = puVar11;
      if (-1 < (int)uVar7) {
        puVar10 = (undefined1 *)((ulonglong)uVar7 + param_1[10]);
      }
      FUN_1800143a0(param_1,puVar10,uVar13 - uVar7,0);
      lVar4 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      lVar5 = *(longlong *)(lVar4 + 0x28);
      uVar13 = *(uint *)(lVar4 + 0x18);
      if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar4 + 0x18)) {
        uVar13 = *(uint *)(lVar5 + 0x28);
      }
      if (uVar13 != 0) {
        memcpy(*(void **)(lVar4 + 0x10),*(void **)(lVar5 + 0x20),(ulonglong)uVar13);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + (ulonglong)uVar13;
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x28) + 0x20);
        *plVar1 = *plVar1 + (ulonglong)uVar13;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + uVar13;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) - uVar13;
        piVar2 = (int *)(*(longlong *)(lVar4 + 0x28) + 0x28);
        *piVar2 = *piVar2 - uVar13;
        lVar4 = *(longlong *)(lVar4 + 0x28);
        if (*(int *)(lVar4 + 0x28) == 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  } while( true );
}




undefined4 FUN_180012ad0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  short sVar11;
  ushort uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  
  puVar14 = (undefined1 *)0x0;
  puVar19 = puVar14;
LAB_180012b10:
  do {
    uVar17 = 2;
    uVar16 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar16 < 0x106) {
      FUN_180012190(param_1);
      uVar16 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar16 < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (uVar16 == 0) {
        if ((int)param_1[0x12] != 0) {
          bVar15 = *(byte *)((ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1) + param_1[10]);
          *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0
          ;
          *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
          *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
          psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar15 * 4 + 0xbc);
          *psVar3 = *psVar3 + 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        uVar16 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar16) {
          puVar14 = (undefined1 *)((ulonglong)uVar16 + param_1[10]);
        }
        FUN_1800143a0(param_1,puVar14,*(int *)((longlong)param_1 + 0x94) - uVar16,
                      (uint)(param_2 == 4));
        lVar9 = *param_1;
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar8 = *(longlong *)(lVar9 + 0x28);
        uVar16 = *(uint *)(lVar9 + 0x18);
        if (*(uint *)(lVar8 + 0x28) <= *(uint *)(lVar9 + 0x18)) {
          uVar16 = *(uint *)(lVar8 + 0x28);
        }
        if (uVar16 != 0) {
          memcpy(*(void **)(lVar9 + 0x10),*(void **)(lVar8 + 0x20),(ulonglong)uVar16);
          *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar16;
          plVar1 = (longlong *)(*(longlong *)(lVar9 + 0x28) + 0x20);
          *plVar1 = *plVar1 + (ulonglong)uVar16;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar16;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar16;
          piVar2 = (int *)(*(longlong *)(lVar9 + 0x28) + 0x28);
          *piVar2 = *piVar2 - uVar16;
          lVar9 = *(longlong *)(lVar9 + 0x28);
          if (*(int *)(lVar9 + 0x28) == 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
          }
        }
        if (*(int *)(*param_1 + 0x18) != 0) {
          if (param_2 == 4) {
            return 3;
          }
          return 1;
        }
        if (param_2 == 4) {
          return 2;
        }
        return 0;
      }
    }
    if (2 < uVar16) {
      uVar16 = ((uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 2) + param_1[10])
               ^ (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
               *(uint *)((longlong)param_1 + 0x7c);
      *(uint *)(param_1 + 0xe) = uVar16;
      *(undefined2 *)
       (param_1[0xc] +
       (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & *(uint *)((longlong)param_1 + 0x94)) * 2) =
           *(undefined2 *)(param_1[0xd] + (ulonglong)uVar16 * 2);
      puVar19 = (undefined1 *)
                (ulonglong)
                *(ushort *)
                 (param_1[0xc] +
                 (ulonglong)
                 (*(uint *)((longlong)param_1 + 0x4c) & *(uint *)((longlong)param_1 + 0x94)) * 2);
      *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
           (short)*(uint *)((longlong)param_1 + 0x94);
    }
    uVar16 = *(uint *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x14) = uVar16;
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x13];
    *(undefined4 *)(param_1 + 0x11) = 2;
    uVar18 = (uint)puVar19;
    if (((uVar18 != 0) && (uVar16 < *(uint *)(param_1 + 0x15))) &&
       (uVar16 = *(int *)((longlong)param_1 + 0x94) - uVar18,
       uVar16 <= *(int *)((longlong)param_1 + 0x44) - 0x106U)) {
      if ((int)param_1[0x16] != 2) {
        if ((int)param_1[0x16] == 3) {
          if (uVar16 != 1) goto LAB_180012c26;
          uVar16 = FUN_1800120b0((longlong)param_1,uVar18);
        }
        else {
          uVar16 = longest_match((longlong)param_1,uVar18);
        }
        *(uint *)(param_1 + 0x11) = uVar16;
      }
LAB_180012c26:
      uVar17 = *(uint *)(param_1 + 0x11);
      if ((uVar17 < 6) &&
         (((int)param_1[0x16] == 1 ||
          ((uVar17 == 3 &&
           (uVar17 = 3, 0x1000 < (uint)(*(int *)((longlong)param_1 + 0x94) - (int)param_1[0x13])))))
         )) {
        *(undefined4 *)(param_1 + 0x11) = 2;
        uVar17 = 2;
      }
    }
    uVar16 = *(uint *)(param_1 + 0x14);
    if ((uVar16 < 3) || (uVar16 < uVar17)) {
      if ((int)param_1[0x12] == 0) {
        *(undefined4 *)(param_1 + 0x12) = 1;
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
        goto LAB_180012b10;
      }
      bVar15 = *(byte *)((ulonglong)(*(int *)((longlong)param_1 + 0x94) - 1) + param_1[10]);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar15 * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1) {
        uVar16 = *(uint *)((longlong)param_1 + 0x84);
        puVar13 = puVar14;
        if (-1 < (int)uVar16) {
          puVar13 = (undefined1 *)((ulonglong)uVar16 + param_1[10]);
        }
        FUN_1800143a0(param_1,puVar13,*(int *)((longlong)param_1 + 0x94) - uVar16,0);
        lVar9 = *param_1;
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        lVar8 = *(longlong *)(lVar9 + 0x28);
        uVar16 = *(uint *)(lVar9 + 0x18);
        if (*(uint *)(lVar8 + 0x28) <= *(uint *)(lVar9 + 0x18)) {
          uVar16 = *(uint *)(lVar8 + 0x28);
        }
        if (uVar16 != 0) {
          memcpy(*(void **)(lVar9 + 0x10),*(void **)(lVar8 + 0x20),(ulonglong)uVar16);
          *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + (ulonglong)uVar16;
          plVar1 = (longlong *)(*(longlong *)(lVar9 + 0x28) + 0x20);
          *plVar1 = *plVar1 + (ulonglong)uVar16;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + uVar16;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) - uVar16;
          piVar2 = (int *)(*(longlong *)(lVar9 + 0x28) + 0x28);
          *piVar2 = *piVar2 - uVar16;
          lVar9 = *(longlong *)(lVar9 + 0x28);
          if (*(int *)(lVar9 + 0x28) == 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
          }
        }
      }
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      iVar4 = *(int *)(*param_1 + 0x18);
    }
    else {
      iVar4 = *(int *)((longlong)param_1 + 0x94);
      bVar15 = (char)uVar16 - 3;
      iVar5 = *(int *)((longlong)param_1 + 0x9c);
      sVar11 = (short)iVar4 - *(short *)((longlong)param_1 + 0x8c);
      *(short *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) =
           sVar11 + -1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar15;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      uVar12 = sVar11 - 2;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_180019bc0)[bVar15] * 4 + 0x4c0);
      *psVar3 = *psVar3 + 1;
      if (uVar12 < 0x100) {
        pbVar10 = &DAT_180019cc0 + uVar12;
      }
      else {
        pbVar10 = &DAT_180019dc0 + (uVar12 >> 7);
      }
      psVar3 = (short *)((longlong)param_1 + (ulonglong)*pbVar10 * 4 + 0x9b0);
      *psVar3 = *psVar3 + 1;
      lVar9 = param_1[0x2de];
      iVar6 = *(int *)((longlong)param_1 + 0x16f4);
      *(int *)((longlong)param_1 + 0x9c) =
           *(int *)((longlong)param_1 + 0x9c) + (1 - (int)param_1[0x14]);
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -2;
      do {
        iVar7 = *(int *)((longlong)param_1 + 0x94);
        uVar16 = iVar7 + 1;
        *(uint *)((longlong)param_1 + 0x94) = uVar16;
        if (uVar16 <= (uint)(iVar5 + -3 + iVar4)) {
          uVar17 = ((uint)*(byte *)((ulonglong)(iVar7 + 3) + param_1[10]) ^
                   (int)param_1[0xe] << ((byte)(int)param_1[0x10] & 0x1f)) &
                   *(uint *)((longlong)param_1 + 0x7c);
          *(uint *)(param_1 + 0xe) = uVar17;
          *(undefined2 *)
           (param_1[0xc] + (ulonglong)(uVar16 & *(uint *)((longlong)param_1 + 0x4c)) * 2) =
               *(undefined2 *)(param_1[0xd] + (ulonglong)uVar17 * 2);
          puVar19 = (undefined1 *)
                    (ulonglong)
                    *(ushort *)
                     (param_1[0xc] +
                     (ulonglong)
                     (*(uint *)((longlong)param_1 + 0x4c) & *(uint *)((longlong)param_1 + 0x94)) * 2
                     );
          *(short *)(param_1[0xd] + (ulonglong)*(uint *)(param_1 + 0xe) * 2) =
               (short)*(uint *)((longlong)param_1 + 0x94);
          uVar16 = *(uint *)((longlong)param_1 + 0x94);
        }
        plVar1 = param_1 + 0x14;
        *(int *)plVar1 = (int)*plVar1 + -1;
      } while ((int)*plVar1 != 0);
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x11) = 2;
      *(uint *)((longlong)param_1 + 0x94) = uVar16 + 1;
      if (iVar6 != (int)lVar9 + -1) goto LAB_180012b10;
      uVar17 = *(uint *)((longlong)param_1 + 0x84);
      puVar13 = puVar14;
      if (-1 < (int)uVar17) {
        puVar13 = (undefined1 *)((ulonglong)uVar17 + param_1[10]);
      }
      FUN_1800143a0(param_1,puVar13,(uVar16 + 1) - uVar17,0);
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      FUN_1800114e0(*param_1);
      iVar4 = *(int *)(*param_1 + 0x18);
    }
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}




/* Library Function - Single Match
    init_block
   
   Library: Visual Studio 2019 Release */

void init_block(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0xbc);
  lVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 0x9b0) = 0;
  *(undefined2 *)(param_1 + 0x9b4) = 0;
  *(undefined2 *)(param_1 + 0x9b8) = 0;
  *(undefined2 *)(param_1 + 0x9bc) = 0;
  *(undefined2 *)(param_1 + 0x9c0) = 0;
  *(undefined2 *)(param_1 + 0x9c4) = 0;
  *(undefined2 *)(param_1 + 0x9c8) = 0;
  *(undefined2 *)(param_1 + 0x9cc) = 0;
  *(undefined2 *)(param_1 + 0x9d0) = 0;
  *(undefined2 *)(param_1 + 0x9d4) = 0;
  *(undefined2 *)(param_1 + 0x9d8) = 0;
  *(undefined2 *)(param_1 + 0x9dc) = 0;
  *(undefined2 *)(param_1 + 0x9e0) = 0;
  *(undefined2 *)(param_1 + 0x9e4) = 0;
  *(undefined2 *)(param_1 + 0x9e8) = 0;
  *(undefined2 *)(param_1 + 0x9ec) = 0;
  *(undefined2 *)(param_1 + 0x9f0) = 0;
  *(undefined2 *)(param_1 + 0x9f4) = 0;
  *(undefined2 *)(param_1 + 0x9f8) = 0;
  *(undefined2 *)(param_1 + 0x9fc) = 0;
  *(undefined2 *)(param_1 + 0xa00) = 0;
  *(undefined2 *)(param_1 + 0xa04) = 0;
  *(undefined2 *)(param_1 + 0xa08) = 0;
  *(undefined2 *)(param_1 + 0xa0c) = 0;
  *(undefined2 *)(param_1 + 0xa10) = 0;
  *(undefined2 *)(param_1 + 0xa14) = 0;
  *(undefined2 *)(param_1 + 0xa18) = 0;
  *(undefined2 *)(param_1 + 0xa1c) = 0;
  *(undefined2 *)(param_1 + 0xa20) = 0;
  *(undefined2 *)(param_1 + 0xa24) = 0;
  *(undefined2 *)(param_1 + 0xaa4) = 0;
  *(undefined2 *)(param_1 + 0xaa8) = 0;
  *(undefined2 *)(param_1 + 0xaac) = 0;
  *(undefined2 *)(param_1 + 0xab0) = 0;
  *(undefined2 *)(param_1 + 0xab4) = 0;
  *(undefined2 *)(param_1 + 0xab8) = 0;
  *(undefined2 *)(param_1 + 0xabc) = 0;
  *(undefined2 *)(param_1 + 0xac0) = 0;
  *(undefined2 *)(param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0xac8) = 0;
  *(undefined2 *)(param_1 + 0xacc) = 0;
  *(undefined2 *)(param_1 + 0xad0) = 0;
  *(undefined2 *)(param_1 + 0xad4) = 0;
  *(undefined2 *)(param_1 + 0xad8) = 0;
  *(undefined2 *)(param_1 + 0xadc) = 0;
  *(undefined2 *)(param_1 + 0xae0) = 0;
  *(undefined2 *)(param_1 + 0xae4) = 0;
  *(undefined2 *)(param_1 + 0xae8) = 0;
  *(undefined2 *)(param_1 + 0xaec) = 0;
  *(undefined2 *)(param_1 + 0x4bc) = 1;
  *(undefined8 *)(param_1 + 0x1700) = 0;
  *(undefined4 *)(param_1 + 0x1708) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  return;
}




/* Library Function - Single Match
    pqdownheap
   
   Library: Visual Studio 2019 Release */

void pqdownheap(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar3 = *(int *)(param_1 + 0x149c);
  lVar9 = (longlong)param_3;
  iVar4 = *(int *)(param_1 + 0xba8 + lVar9 * 4);
  iVar6 = param_3 * 2;
  bVar10 = SBORROW4(iVar6,iVar3);
  iVar8 = iVar6 - iVar3;
  if (iVar3 < iVar6) {
    *(int *)(param_1 + 0xba8 + lVar9 * 4) = iVar4;
    return;
  }
  while( true ) {
    if (bVar10 != iVar8 < 0) {
      lVar7 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4);
      lVar5 = (longlong)*(int *)(param_1 + 0xbac + (longlong)iVar6 * 4);
      uVar1 = *(ushort *)(param_2 + lVar7 * 4);
      uVar2 = *(ushort *)(param_2 + lVar5 * 4);
      if ((uVar2 < uVar1) ||
         ((uVar2 == uVar1 &&
          (*(byte *)(param_1 + 0x14a4 + lVar5) <= *(byte *)(lVar7 + 0x14a4 + param_1))))) {
        iVar6 = iVar6 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0xba8 + (longlong)iVar6 * 4);
    uVar1 = *(ushort *)(param_2 + (longlong)iVar4 * 4);
    uVar2 = *(ushort *)(param_2 + (longlong)iVar3 * 4);
    iVar8 = (int)lVar9;
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)((longlong)iVar4 + 0x14a4 + param_1) <=
         *(byte *)((longlong)iVar3 + 0x14a4 + param_1))))) break;
    lVar9 = (longlong)iVar6;
    iVar6 = iVar6 * 2;
    *(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4) = iVar3;
    iVar3 = *(int *)(param_1 + 0x149c);
    bVar10 = SBORROW4(iVar6,iVar3);
    iVar8 = iVar6 - iVar3;
    if (iVar3 < iVar6) {
      *(int *)(param_1 + 0xba8 + lVar9 * 4) = iVar4;
      return;
    }
  }
  *(int *)(param_1 + 0xba8 + (longlong)iVar8 * 4) = iVar4;
  return;
}




/* Library Function - Single Match
    gen_bitlen
   
   Library: Visual Studio 2019 Release */

void gen_bitlen(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  short *psVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined2 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  int *piVar27;
  
  plVar7 = (longlong *)param_2[2];
  lVar8 = *param_2;
  lVar10 = param_2[1];
  lVar26 = *plVar7;
  iVar24 = 0;
  lVar25 = plVar7[1];
  lVar11 = plVar7[2];
  iVar6 = (int)plVar7[3];
  uVar23 = (ulonglong)iVar6;
  puVar20 = (undefined2 *)(param_1 + 0xb88);
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  *(undefined2 *)
   (lVar8 + 2 + (longlong)*(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) * 4)
       = 0;
  iVar13 = *(int *)(param_1 + 0x14a0) + 1;
  lVar17 = (longlong)iVar13;
  if (lVar17 < 0x23d) {
    lVar21 = 0x23d - lVar17;
    iVar19 = (int)lVar21;
    piVar27 = (int *)(param_1 + 0xba8 + lVar17 * 4);
    do {
      iVar5 = *piVar27;
      lVar17 = (longlong)iVar5 * 4;
      iVar14 = *(ushort *)(lVar8 + 2 + (ulonglong)*(ushort *)(lVar17 + 2 + lVar8) * 4) + 1;
      iVar15 = iVar24 + 1;
      iVar9 = iVar6;
      if (iVar14 <= iVar6) {
        iVar15 = iVar24;
        iVar9 = iVar14;
      }
      iVar24 = iVar15;
      *(short *)(lVar17 + 2 + lVar8) = (short)iVar9;
      if (iVar5 <= (int)lVar10) {
        iVar15 = 0;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)iVar9 * 2);
        *psVar2 = *psVar2 + 1;
        if ((int)lVar11 <= iVar5) {
          iVar15 = *(int *)(lVar25 + (longlong)(iVar5 - (int)lVar11) * 4);
        }
        uVar3 = *(ushort *)(lVar17 + lVar8);
        *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + (iVar9 + iVar15) * (uint)uVar3;
        if (lVar26 != 0) {
          *(int *)(param_1 + 0x1704) =
               *(int *)(param_1 + 0x1704) +
               ((uint)*(ushort *)(lVar17 + 2 + lVar26) + iVar15) * (uint)uVar3;
        }
      }
      piVar27 = piVar27 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    if (iVar24 != 0) {
      do {
        uVar18 = (ulonglong)(int)(iVar6 - 1U);
        sVar4 = *(short *)(param_1 + 0xb88 + uVar18 * 2);
        uVar16 = iVar6 - 1U;
        while (sVar4 == 0) {
          uVar16 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar16;
          sVar4 = *(short *)(param_1 + 0xb88 + (longlong)(int)uVar16 * 2);
        }
        iVar24 = iVar24 + -2;
        psVar2 = (short *)(param_1 + 0xb88 + (longlong)(int)uVar16 * 2);
        *psVar2 = *psVar2 + -1;
        psVar2 = (short *)(param_1 + 0xb8a + (longlong)(int)uVar16 * 2);
        *psVar2 = *psVar2 + 2;
        psVar2 = (short *)(param_1 + uVar23 * 2 + 0xb88);
        *psVar2 = *psVar2 + -1;
      } while (0 < iVar24);
      if (iVar6 != 0) {
        lVar26 = (longlong)(iVar13 + iVar19);
        do {
          uVar22 = (uint)uVar23;
          uVar3 = *(ushort *)(param_1 + 0xb88 + (longlong)(int)uVar22 * 2);
          uVar16 = (uint)uVar3;
          if (uVar3 != 0) {
            lVar25 = param_1 + 0xba8 + lVar26 * 4;
            do {
              iVar6 = *(int *)(lVar25 + -4);
              lVar25 = lVar25 + -4;
              lVar26 = lVar26 + -1;
              if (iVar6 <= (int)lVar10) {
                puVar1 = (ushort *)(lVar8 + (longlong)iVar6 * 4);
                uVar12 = (uint)*(ushort *)(lVar8 + 2 + (longlong)iVar6 * 4);
                if (uVar12 != uVar22) {
                  *(int *)(param_1 + 0x1700) =
                       *(int *)(param_1 + 0x1700) + (uVar22 - uVar12) * (uint)*puVar1;
                  puVar1[1] = (ushort)uVar23;
                }
                uVar16 = uVar16 - 1;
              }
            } while (uVar16 != 0);
          }
          uVar23 = (ulonglong)(uVar22 - 1);
        } while (uVar22 - 1 != 0);
      }
    }
  }
  return;
}




void FUN_180013560(longlong param_1,int param_2,short *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ushort local_38 [4];
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  ulonglong local_18;
  
  local_18 = DAT_180021010 ^ (ulonglong)local_38;
  local_38[1] = *param_3 * 2;
  local_38[2] = (param_3[1] + *param_3 * 2) * 2;
  local_38[3] = (param_3[2] + local_38[2]) * 2;
  local_30 = (param_3[3] + local_38[3]) * 2;
  local_2e = (param_3[4] + local_30) * 2;
  local_2c = (param_3[5] + local_2e) * 2;
  local_2a = (param_3[6] + local_2c) * 2;
  local_28 = (param_3[7] + local_2a) * 2;
  local_26 = (param_3[8] + local_28) * 2;
  local_24 = (param_3[9] + local_26) * 2;
  local_22 = (param_3[10] + local_24) * 2;
  local_20 = (param_3[0xb] + local_22) * 2;
  local_1e = (param_3[0xc] + local_20) * 2;
  local_1c = (param_3[0xd] + local_1e) * 2;
  local_1a = (param_3[0xe] + local_1c) * 2;
  if (-1 < param_2) {
    lVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + 2 + lVar8 * 4);
      uVar6 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        uVar7 = (uint)local_38[uVar6];
        local_38[uVar6] = local_38[uVar6] + 1;
        uVar2 = 0;
        do {
          uVar3 = uVar2;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
          uVar4 = uVar7 & 1;
          uVar7 = uVar7 >> 1;
          uVar2 = (uVar3 | uVar4) * 2;
        } while (0 < (int)uVar5);
        *(ushort *)(param_1 + lVar8 * 4) = (ushort)uVar3 | (ushort)uVar4;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 <= param_2);
  }
  __security_check_cookie(local_18 ^ (ulonglong)local_38);
  return;
}




/* Library Function - Single Match
    build_tree
   
   Library: Visual Studio 2019 Release */

void build_tree(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  lVar2 = *param_2;
  iVar11 = -1;
  iVar12 = 0;
  uVar7 = 0;
  iVar5 = *(int *)(param_2[2] + 0x14);
  uVar10 = (ulonglong)iVar5;
  lVar8 = *(longlong *)param_2[2];
  *(undefined4 *)(param_1 + 0x149c) = 0;
  *(undefined4 *)(param_1 + 0x14a0) = 0x23d;
  iVar3 = iVar11;
  if (0 < iVar5) {
    do {
      if (*(short *)(lVar2 + uVar7 * 4) == 0) {
        *(undefined2 *)(lVar2 + 2 + uVar7 * 4) = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x149c);
        *(int *)(param_1 + 0x149c) = iVar5 + 1;
        *(int *)(param_1 + 0xbac + (longlong)iVar5 * 4) = iVar12;
        *(undefined1 *)(uVar7 + 0x14a4 + param_1) = 0;
        iVar11 = iVar12;
      }
      iVar12 = iVar12 + 1;
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar10);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x149c);
    iVar3 = iVar11;
    if (1 < (int)*(uint *)(param_1 + 0x149c)) goto LAB_1800137d7;
  }
  do {
    iVar5 = iVar3 + 1;
    iVar11 = iVar3 + 1;
    if (1 < iVar3) {
      iVar5 = 0;
      iVar11 = iVar3;
    }
    *(int *)(param_1 + 0x149c) = (int)uVar7 + 1;
    *(int *)(param_1 + 0xbac + (longlong)(int)uVar7 * 4) = iVar5;
    lVar4 = (longlong)iVar5;
    *(undefined2 *)(lVar2 + lVar4 * 4) = 1;
    *(undefined1 *)(lVar4 + 0x14a4 + param_1) = 0;
    *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + -1;
    if (lVar8 != 0) {
      *(int *)(param_1 + 0x1704) =
           *(int *)(param_1 + 0x1704) - (uint)*(ushort *)(lVar8 + 2 + lVar4 * 4);
    }
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x149c);
    iVar3 = iVar11;
  } while ((int)*(uint *)(param_1 + 0x149c) < 2);
LAB_1800137d7:
  *(int *)(param_2 + 1) = iVar11;
  iVar5 = *(int *)(param_1 + 0x149c);
  iVar3 = iVar5 / 2;
  if (0 < iVar3) {
    do {
      pqdownheap(param_1,lVar2,iVar3);
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar5 = *(int *)(param_1 + 0x149c);
  }
  do {
    iVar3 = *(int *)(param_1 + 0xbac);
    lVar4 = (longlong)iVar3;
    *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0xba8 + (longlong)iVar5 * 4);
    *(int *)(param_1 + 0x149c) = *(int *)(param_1 + 0x149c) + -1;
    pqdownheap(param_1,lVar2,1);
    iVar5 = *(int *)(param_1 + 0xbac);
    lVar8 = (longlong)iVar5;
    iVar12 = *(int *)(param_1 + 0x14a0);
    iVar9 = (int)uVar10;
    *(int *)(param_1 + 0x14a0) = iVar12 + -1;
    *(int *)(param_1 + 0xba4 + (longlong)iVar12 * 4) = iVar3;
    iVar3 = *(int *)(param_1 + 0x14a0);
    *(int *)(param_1 + 0x14a0) = iVar3 + -1;
    *(int *)(param_1 + 0xba4 + (longlong)iVar3 * 4) = iVar5;
    *(short *)(lVar2 + (longlong)iVar9 * 4) =
         *(short *)(lVar2 + lVar4 * 4) + *(short *)(lVar2 + lVar8 * 4);
    bVar6 = *(byte *)(lVar4 + 0x14a4 + param_1);
    bVar1 = *(byte *)(lVar8 + 0x14a4 + param_1);
    if (bVar6 < bVar1) {
      bVar6 = bVar1;
    }
    *(byte *)((longlong)iVar9 + 0x14a4 + param_1) = bVar6 + 1;
    *(short *)(lVar2 + 2 + lVar8 * 4) = (short)uVar10;
    *(short *)(lVar2 + 2 + lVar4 * 4) = (short)uVar10;
    *(int *)(param_1 + 0xbac) = iVar9;
    uVar10 = (ulonglong)(iVar9 + 1);
    pqdownheap(param_1,lVar2,1);
    iVar5 = *(int *)(param_1 + 0x149c);
  } while (1 < iVar5);
  iVar5 = *(int *)(param_1 + 0x14a0);
  *(int *)(param_1 + 0x14a0) = iVar5 + -1;
  *(undefined4 *)(param_1 + 0xba4 + (longlong)iVar5 * 4) = *(undefined4 *)(param_1 + 0xbac);
  gen_bitlen(param_1,param_2);
  FUN_180013560(lVar2,iVar11,(short *)(param_1 + 0xb88));
  return;
}




/* Library Function - Single Match
    scan_tree
   
   Library: Visual Studio 2019 Release */

void scan_tree(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = *(ushort *)(param_2 + 2);
  iVar10 = 0;
  uVar6 = 0xffffffff;
  *(undefined2 *)(param_2 + 6 + (longlong)param_3 * 4) = 0xffff;
  if (-1 < param_3) {
    iVar9 = 0x8a;
    if (uVar2 != 0) {
      iVar9 = 7;
    }
    puVar8 = (ushort *)(param_2 + 6);
    lVar7 = (longlong)param_3 + 1;
    iVar4 = (uVar2 != 0) + 3;
    do {
      iVar10 = iVar10 + 1;
      uVar3 = *puVar8;
      uVar5 = (uint)uVar2;
      uVar11 = (uint)uVar3;
      if ((iVar9 <= iVar10) || (uVar5 != uVar11)) {
        if (iVar10 < iVar4) {
          psVar1 = (short *)(param_1 + 0xaa4 + (ulonglong)uVar2 * 4);
          *psVar1 = *psVar1 + (short)iVar10;
        }
        else if (uVar5 == 0) {
          if (iVar10 < 0xb) {
            *(short *)(param_1 + 0xae8) = *(short *)(param_1 + 0xae8) + 1;
          }
          else {
            *(short *)(param_1 + 0xaec) = *(short *)(param_1 + 0xaec) + 1;
          }
        }
        else {
          if (uVar5 != uVar6) {
            psVar1 = (short *)(param_1 + 0xaa4 + (ulonglong)uVar2 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xae4) = *(short *)(param_1 + 0xae4) + 1;
        }
        iVar10 = 0;
        uVar6 = uVar5;
        if (uVar11 == 0) {
          iVar4 = 3;
          iVar9 = 0x8a;
          iVar10 = 0;
        }
        else if (uVar5 == uVar11) {
          iVar4 = 3;
          iVar9 = 6;
          iVar10 = 0;
        }
        else {
          iVar9 = 7;
          iVar4 = 4;
        }
      }
      puVar8 = puVar8 + 2;
      lVar7 = lVar7 + -1;
      uVar2 = uVar3;
    } while (lVar7 != 0);
  }
  return;
}




/* Library Function - Single Match
    send_tree
   
   Library: Visual Studio 2019 Release */

void send_tree(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ushort *puVar15;
  
  if (-1 < param_3) {
    uVar11 = *(ushort *)(param_2 + 2);
    iVar4 = 0;
    uVar13 = 0xffffffff;
    iVar5 = 0x8a;
    if (uVar11 != 0) {
      iVar5 = 7;
    }
    puVar15 = (ushort *)(param_2 + 6);
    lVar14 = (longlong)param_3 + 1;
    iVar3 = (uVar11 != 0) + 3;
    do {
      uVar8 = (ulonglong)uVar11;
      iVar12 = iVar4 + 1;
      uVar1 = *puVar15;
      uVar6 = (uint)uVar11;
      uVar7 = (uint)uVar1;
      if ((iVar5 <= iVar12) || (uVar6 != uVar7)) {
        if (iVar12 < iVar3) {
          do {
            iVar5 = *(int *)(param_1 + 0x1714);
            uVar11 = *(ushort *)(param_1 + uVar8 * 4 + 0xaa4);
            uVar9 = uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            uVar13 = (uint)*(ushort *)(param_1 + uVar8 * 4 + 0xaa6);
            if ((int)(0x10 - uVar13) < iVar5) {
              *(ushort *)(param_1 + 0x1710) = uVar9;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                   (char)uVar9;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              uVar9 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
              iVar5 = *(int *)(param_1 + 0x1714) + -0x10;
            }
            *(uint *)(param_1 + 0x1714) = iVar5 + uVar13;
            *(ushort *)(param_1 + 0x1710) = uVar9;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        else {
          if (uVar6 == 0) {
            iVar5 = *(int *)(param_1 + 0x1714);
            if (iVar12 < 0xb) {
              uVar11 = *(ushort *)(param_1 + 0xae8);
              uVar9 = *(ushort *)(param_1 + 0xaea);
              uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
              if ((int)(0x10 - (uint)uVar9) < iVar5) {
                *(ushort *)(param_1 + 0x1710) = uVar10;
                *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     (char)uVar10;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                uVar10 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
                iVar5 = (uVar9 - 0x10) + *(int *)(param_1 + 0x1714);
              }
              else {
                iVar5 = iVar5 + (uint)uVar9;
              }
              *(int *)(param_1 + 0x1714) = iVar5;
              uVar11 = (short)iVar12 - 3;
              *(ushort *)(param_1 + 0x1710) = uVar10;
              iVar5 = *(int *)(param_1 + 0x1714);
              if (iVar5 < 0xe) {
                iVar4 = iVar5 + 3;
                goto LAB_180013d1e;
              }
              uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | uVar10;
              *(ushort *)(param_1 + 0x1710) = uVar10;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                   (char)uVar10;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              uVar2 = *(undefined2 *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
              uVar11 = uVar11 >> (0x10U - (char)uVar2 & 0x1f);
            }
            else {
              uVar11 = *(ushort *)(param_1 + 0xaec);
              uVar9 = *(ushort *)(param_1 + 0xaee);
              uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
              if ((int)(0x10 - (uint)uVar9) < iVar5) {
                *(ushort *)(param_1 + 0x1710) = uVar10;
                *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     (char)uVar10;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                uVar10 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
                iVar5 = (uVar9 - 0x10) + *(int *)(param_1 + 0x1714);
              }
              else {
                iVar5 = iVar5 + (uint)uVar9;
              }
              *(int *)(param_1 + 0x1714) = iVar5;
              uVar11 = (short)iVar12 - 0xb;
              *(ushort *)(param_1 + 0x1710) = uVar10;
              iVar5 = *(int *)(param_1 + 0x1714);
              if (iVar5 < 10) {
                uVar11 = uVar11 << ((byte)iVar5 & 0x1f) | uVar10;
                *(int *)(param_1 + 0x1714) = iVar5 + 7;
              }
              else {
                uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | uVar10;
                *(ushort *)(param_1 + 0x1710) = uVar10;
                *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     (char)uVar10;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                uVar11 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
                *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -9;
              }
            }
          }
          else {
            if (uVar6 != uVar13) {
              iVar5 = *(int *)(param_1 + 0x1714);
              uVar11 = *(ushort *)(param_1 + 0xaa4 + uVar8 * 4);
              uVar9 = uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
              uVar13 = (uint)*(ushort *)(param_1 + 0xaa6 + uVar8 * 4);
              if ((int)(0x10 - uVar13) < iVar5) {
                *(ushort *)(param_1 + 0x1710) = uVar9;
                *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     (char)uVar9;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                *(undefined1 *)
                 ((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                     *(undefined1 *)(param_1 + 0x1711);
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                uVar9 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
                iVar5 = *(int *)(param_1 + 0x1714) + -0x10;
              }
              *(uint *)(param_1 + 0x1714) = iVar5 + uVar13;
              *(ushort *)(param_1 + 0x1710) = uVar9;
              iVar12 = iVar4;
            }
            iVar5 = *(int *)(param_1 + 0x1714);
            uVar11 = *(ushort *)(param_1 + 0xae4);
            uVar9 = *(ushort *)(param_1 + 0xae6);
            uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            if ((int)(0x10 - (uint)uVar9) < iVar5) {
              *(ushort *)(param_1 + 0x1710) = uVar10;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                   (char)uVar10;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              uVar10 = uVar11 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
              iVar5 = (uVar9 - 0x10) + *(int *)(param_1 + 0x1714);
            }
            else {
              iVar5 = iVar5 + (uint)uVar9;
            }
            *(int *)(param_1 + 0x1714) = iVar5;
            uVar11 = (short)iVar12 - 3;
            *(ushort *)(param_1 + 0x1710) = uVar10;
            iVar5 = *(int *)(param_1 + 0x1714);
            if (iVar5 < 0xf) {
              iVar4 = iVar5 + 2;
LAB_180013d1e:
              *(int *)(param_1 + 0x1714) = iVar4;
              uVar11 = uVar11 << ((byte)iVar5 & 0x1f) | uVar10;
            }
            else {
              uVar10 = uVar11 << ((byte)iVar5 & 0x1f) | uVar10;
              *(ushort *)(param_1 + 0x1710) = uVar10;
              *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                   (char)uVar10;
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10))
                   = *(undefined1 *)(param_1 + 0x1711);
              uVar2 = *(undefined2 *)(param_1 + 0x1714);
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xe;
              uVar11 = uVar11 >> (0x10U - (char)uVar2 & 0x1f);
            }
          }
          *(ushort *)(param_1 + 0x1710) = uVar11;
        }
        uVar13 = uVar6;
        iVar12 = 0;
        if (uVar7 == 0) {
          iVar3 = uVar1 + 3;
          iVar5 = 0x8a;
        }
        else if (uVar6 == uVar7) {
          iVar3 = 3;
          iVar5 = 6;
        }
        else {
          iVar5 = 7;
          iVar3 = 4;
          iVar12 = 0;
        }
      }
      iVar4 = iVar12;
      puVar15 = puVar15 + 2;
      lVar14 = lVar14 + -1;
      uVar11 = uVar1;
    } while (lVar14 != 0);
  }
  return;
}




/* Library Function - Single Match
    send_all_trees
   
   Library: Visual Studio 2019 Release */

void send_all_trees(longlong param_1,int param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_4;
  iVar4 = *(int *)(param_1 + 0x1714);
  puVar1 = (ushort *)(param_1 + 0x1710);
  if (iVar4 < 0xc) {
    *(int *)(param_1 + 0x1714) = iVar4 + 5;
    uVar6 = (short)param_2 + -0x101 << ((byte)iVar4 & 0x1f) | *puVar1;
  }
  else {
    uVar6 = (short)param_2 - 0x101;
    uVar5 = uVar6 << ((byte)iVar4 & 0x1f) | *puVar1;
    *puVar1 = uVar5;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar5;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar2 = *(undefined2 *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    uVar6 = uVar6 >> (0x10U - (char)uVar2 & 0x1f);
  }
  *puVar1 = uVar6;
  iVar4 = *(int *)(param_1 + 0x1714);
  uVar5 = (short)param_3 - 1;
  if (iVar4 < 0xc) {
    *(int *)(param_1 + 0x1714) = iVar4 + 5;
    uVar5 = uVar5 << ((byte)iVar4 & 0x1f) | uVar6;
  }
  else {
    uVar6 = uVar5 << ((byte)iVar4 & 0x1f) | uVar6;
    *puVar1 = uVar6;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar6;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar2 = *(undefined2 *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xb;
    uVar5 = uVar5 >> (0x10U - (char)uVar2 & 0x1f);
  }
  *puVar1 = uVar5;
  iVar4 = *(int *)(param_1 + 0x1714);
  uVar6 = (short)param_4 - 4;
  if (iVar4 < 0xd) {
    *(int *)(param_1 + 0x1714) = iVar4 + 4;
    uVar6 = uVar6 << ((byte)iVar4 & 0x1f) | uVar5;
  }
  else {
    uVar5 = uVar6 << ((byte)iVar4 & 0x1f) | uVar5;
    *puVar1 = uVar5;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar5;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar2 = *(undefined2 *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xc;
    uVar6 = uVar6 >> (0x10U - (char)uVar2 & 0x1f);
  }
  *puVar1 = uVar6;
  if (0 < (int)param_4) {
    iVar4 = *(int *)(param_1 + 0x1714);
    pbVar7 = &DAT_18001a610;
    do {
      uVar6 = *(ushort *)(param_1 + 0xaa6 + (ulonglong)*pbVar7 * 4);
      bVar3 = (byte)iVar4;
      if (iVar4 < 0xe) {
        iVar4 = iVar4 + 3;
        *(int *)(param_1 + 0x1714) = iVar4;
        uVar6 = uVar6 << (bVar3 & 0x1f) | *puVar1;
      }
      else {
        uVar5 = uVar6 << (bVar3 & 0x1f) | *puVar1;
        *puVar1 = uVar5;
        *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             (char)uVar5;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
             *(undefined1 *)(param_1 + 0x1711);
        uVar2 = *(undefined2 *)(param_1 + 0x1714);
        *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        iVar4 = *(int *)(param_1 + 0x1714);
        uVar6 = uVar6 >> (0x10U - (char)uVar2 & 0x1f);
      }
      pbVar7 = pbVar7 + 1;
      *puVar1 = uVar6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  send_tree(param_1,param_1 + 0xbc,param_2 + -1);
  send_tree(param_1,param_1 + 0x9b0,param_3 + -1);
  return;
}




void FUN_180014220(longlong param_1,undefined1 *param_2,int param_3,ushort param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  
  iVar3 = *(int *)(param_1 + 0x1714);
  if (iVar3 < 0xe) {
    *(int *)(param_1 + 0x1714) = iVar3 + 3;
    uVar6 = param_4 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x1710);
  }
  else {
    uVar6 = param_4 << ((byte)iVar3 & 0x1f) | *(ushort *)(param_1 + 0x1710);
    *(ushort *)(param_1 + 0x1710) = uVar6;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar6;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    uVar2 = *(undefined2 *)(param_1 + 0x1714);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0xd;
    uVar6 = param_4 >> (0x10U - (char)uVar2 & 0x1f);
  }
  *(ushort *)(param_1 + 0x1710) = uVar6;
  if (*(int *)(param_1 + 0x1714) < 9) {
    if (*(int *)(param_1 + 0x1714) < 1) goto LAB_1800142f2;
    uVar1 = *(undefined1 *)(param_1 + 0x1710);
  }
  else {
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar6;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar1 = *(undefined1 *)(param_1 + 0x1711);
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = uVar1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_1800142f2:
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined4 *)(param_1 + 0x1714) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 8;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (byte)param_3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  bVar4 = (byte)((uint)param_3 >> 8);
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = bVar4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~(byte)param_3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  *(byte *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = ~bVar4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  uVar5 = *(uint *)(param_1 + 0x28);
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(param_1 + 0x10)) = uVar1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      uVar5 = *(uint *)(param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}




void FUN_1800143a0(longlong *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  undefined *puVar11;
  ushort uVar12;
  longlong *plVar13;
  
  uVar12 = (ushort)param_4;
  iVar6 = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 1) {
    uVar7 = param_3 + 5;
    uVar9 = uVar7;
  }
  else {
    if ((param_3 != 0) && (*(int *)(*param_1 + 0x48) == 2)) {
      iVar6 = 0;
      psVar5 = (short *)((longlong)param_1 + 0xbc);
      lVar10 = 0;
      do {
        if (*psVar5 != 0) break;
        iVar6 = iVar6 + 1;
        lVar10 = lVar10 + 1;
        psVar5 = psVar5 + 2;
      } while (lVar10 < 9);
      if (iVar6 == 9) {
        iVar6 = 0xe;
        plVar13 = param_1 + 0x1f;
        lVar10 = 0xe;
        do {
          if (*(short *)((longlong)plVar13 + -4) != 0) break;
          if ((short)*plVar13 != 0) {
            iVar6 = iVar6 + 1;
            break;
          }
          if (*(short *)((longlong)plVar13 + 4) != 0) {
            iVar6 = iVar6 + 2;
            break;
          }
          if ((short)plVar13[1] != 0) {
            iVar6 = iVar6 + 3;
            break;
          }
          if (*(short *)((longlong)plVar13 + 0xc) != 0) {
            iVar6 = iVar6 + 4;
            break;
          }
          if ((short)plVar13[2] != 0) {
            iVar6 = iVar6 + 5;
            break;
          }
          lVar10 = lVar10 + 6;
          plVar13 = plVar13 + 3;
          iVar6 = iVar6 + 6;
        } while (lVar10 < 0x20);
      }
      *(uint *)(*param_1 + 0x48) = (uint)(iVar6 == 0x20);
    }
    build_tree((longlong)param_1,param_1 + 0x168);
    build_tree((longlong)param_1,param_1 + 0x16b);
    plVar13 = param_1;
    scan_tree((longlong)param_1,(longlong)param_1 + 0xbc,(int)param_1[0x169]);
    scan_tree((longlong)plVar13,(longlong)(param_1 + 0x136),(int)param_1[0x16c]);
    build_tree((longlong)plVar13,param_1 + 0x16e);
    iVar6 = 0x12;
    lVar10 = 0x12;
    do {
      if (*(short *)((longlong)param_1 + (ulonglong)(byte)(&DAT_18001a610)[lVar10] * 4 + 0xaa6) != 0
         ) break;
      if (*(short *)((longlong)param_1 + (ulonglong)(byte)(&UNK_18001a60f)[lVar10] * 4 + 0xaa6) != 0
         ) {
        iVar6 = iVar6 + -1;
        break;
      }
      if (*(short *)((longlong)param_1 + (ulonglong)(byte)(&UNK_18001a60e)[lVar10] * 4 + 0xaa6) != 0
         ) {
        iVar6 = iVar6 + -2;
        break;
      }
      if (*(short *)((longlong)param_1 + (ulonglong)(byte)(&UNK_18001a60d)[lVar10] * 4 + 0xaa6) != 0
         ) {
        iVar6 = iVar6 + -3;
        break;
      }
      lVar10 = lVar10 + -4;
      iVar6 = iVar6 + -4;
    } while (2 < lVar10);
    *(int *)(param_1 + 0x2e0) = (int)param_1[0x2e0] + iVar6 * 3 + 0x11;
    uVar7 = *(int *)((longlong)param_1 + 0x1704) + 10U >> 3;
    uVar4 = (int)param_1[0x2e0] + 10U >> 3;
    uVar9 = uVar7;
    if (uVar4 < uVar7) {
      uVar9 = uVar4;
    }
  }
  if ((uVar9 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    if (((int)param_1[0x16] == 4) || (uVar7 == uVar9)) {
      iVar6 = *(int *)((longlong)param_1 + 0x1714);
      uVar12 = uVar12 + 2;
      if (iVar6 < 0xe) {
        *(int *)((longlong)param_1 + 0x1714) = iVar6 + 3;
        uVar12 = uVar12 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x2e2);
      }
      else {
        uVar8 = uVar12 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x2e2);
        *(ushort *)(param_1 + 0x2e2) = uVar8;
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)uVar8;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        uVar1 = *(undefined2 *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        uVar12 = uVar12 >> (0x10U - (char)uVar1 & 0x1f);
      }
      *(ushort *)(param_1 + 0x2e2) = uVar12;
      puVar11 = &DAT_18001a190;
      plVar13 = (longlong *)&DAT_180019f10;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x1714);
      uVar12 = uVar12 + 4;
      if (iVar2 < 0xe) {
        *(int *)((longlong)param_1 + 0x1714) = iVar2 + 3;
        uVar12 = uVar12 << ((byte)iVar2 & 0x1f) | *(ushort *)(param_1 + 0x2e2);
      }
      else {
        uVar8 = uVar12 << ((byte)iVar2 & 0x1f) | *(ushort *)(param_1 + 0x2e2);
        *(ushort *)(param_1 + 0x2e2) = uVar8;
        *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)uVar8;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) =
             *(undefined1 *)((longlong)param_1 + 0x1711);
        uVar1 = *(undefined2 *)((longlong)param_1 + 0x1714);
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        *(int *)((longlong)param_1 + 0x1714) = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        uVar12 = uVar12 >> (0x10U - (char)uVar1 & 0x1f);
      }
      *(ushort *)(param_1 + 0x2e2) = uVar12;
      send_all_trees((longlong)param_1,(int)param_1[0x169] + 1,(int)param_1[0x16c] + 1,iVar6 + 1);
      plVar13 = param_1 + 0x136;
      puVar11 = (undefined *)((longlong)param_1 + 0xbc);
    }
    FUN_180014780((longlong)param_1,(longlong)puVar11,(longlong)plVar13);
  }
  else {
    FUN_180014220((longlong)param_1,param_2,param_3,uVar12);
  }
  init_block((longlong)param_1);
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x1714) < 9) {
    if (*(int *)((longlong)param_1 + 0x1714) < 1) goto LAB_18001474c;
    uVar3 = (undefined1)param_1[0x2e2];
  }
  else {
    *(char *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = (char)param_1[0x2e2];
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x1711);
  }
  *(undefined1 *)((ulonglong)*(uint *)(param_1 + 5) + param_1[2]) = uVar3;
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
LAB_18001474c:
  *(undefined2 *)(param_1 + 0x2e2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1714) = 0;
  return;
}




void FUN_180014780(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  if (*(int *)(param_1 + 0x16f4) != 0) {
    do {
      uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x16f8) + uVar13 * 2);
      bVar4 = *(byte *)(uVar13 + *(longlong *)(param_1 + 0x16e8));
      uVar11 = (ulonglong)bVar4;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      if (uVar9 == 0) {
        uVar6 = (uint)*(ushort *)(param_2 + 2 + uVar11 * 4);
        iVar5 = *(int *)(param_1 + 0x1714);
        uVar9 = *(ushort *)(param_2 + uVar11 * 4);
        if ((int)(0x10 - uVar6) < iVar5) {
          uVar8 = uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
          *(ushort *)(param_1 + 0x1710) = uVar8;
          *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               (char)uVar8;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(ushort *)(param_1 + 0x1710) = uVar9 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
          *(uint *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + -0x10 + uVar6;
        }
        else {
          *(ushort *)(param_1 + 0x1710) =
               uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
          *(uint *)(param_1 + 0x1714) = iVar5 + uVar6;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1714);
        bVar2 = (&DAT_180019bc0)[uVar11];
        uVar8 = *(ushort *)(param_2 + (ulonglong)(bVar2 + 0x101) * 4);
        uVar6 = (uint)*(ushort *)(param_2 + 2 + (ulonglong)(bVar2 + 0x101) * 4);
        uVar10 = uVar8 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
        if ((int)(0x10 - uVar6) < iVar5) {
          *(ushort *)(param_1 + 0x1710) = uVar10;
          *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               (char)uVar10;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          iVar5 = *(int *)(param_1 + 0x1714) + -0x10;
          uVar10 = uVar8 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
        }
        iVar5 = iVar5 + uVar6;
        *(int *)(param_1 + 0x1714) = iVar5;
        *(ushort *)(param_1 + 0x1710) = uVar10;
        iVar3 = *(int *)(&DAT_180019f90 + (ulonglong)bVar2 * 4);
        if (iVar3 != 0) {
          uVar8 = (ushort)bVar4 - (short)*(undefined4 *)(&DAT_18001a090 + (ulonglong)bVar2 * 4);
          if (0x10 - iVar3 < iVar5) {
            uVar10 = uVar8 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            *(ushort *)(param_1 + 0x1710) = uVar10;
            *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 (char)uVar10;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            uVar8 = uVar8 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar3 + -0x10;
          }
          else {
            uVar8 = uVar8 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x1714) = iVar5 + iVar3;
          }
          *(ushort *)(param_1 + 0x1710) = uVar8;
        }
        uVar6 = uVar9 - 1;
        if (uVar6 < 0x100) {
          bVar4 = (&DAT_180019cc0)[uVar6];
        }
        else {
          bVar4 = (&DAT_180019cc0)[(uVar6 >> 7) + 0x100];
        }
        iVar5 = *(int *)(param_1 + 0x1714);
        lVar1 = (ulonglong)bVar4 * 4;
        uVar9 = *(ushort *)(lVar1 + param_3);
        uVar8 = uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
        uVar7 = (uint)*(ushort *)(lVar1 + 2 + param_3);
        if ((int)(0x10 - uVar7) < iVar5) {
          *(ushort *)(param_1 + 0x1710) = uVar8;
          *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               (char)uVar8;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
               *(undefined1 *)(param_1 + 0x1711);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          uVar8 = uVar9 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
          iVar5 = *(int *)(param_1 + 0x1714) + -0x10;
        }
        iVar5 = iVar5 + uVar7;
        *(int *)(param_1 + 0x1714) = iVar5;
        *(ushort *)(param_1 + 0x1710) = uVar8;
        iVar3 = *(int *)(&DAT_18001a110 + lVar1);
        if (iVar3 != 0) {
          uVar9 = (short)uVar6 - (short)*(undefined4 *)(&DAT_18001a010 + lVar1);
          if (0x10 - iVar3 < iVar5) {
            uVar8 = uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            *(ushort *)(param_1 + 0x1710) = uVar8;
            *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 (char)uVar8;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
                 *(undefined1 *)(param_1 + 0x1711);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
            uVar9 = uVar9 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
            *(int *)(param_1 + 0x1714) = *(int *)(param_1 + 0x1714) + iVar3 + -0x10;
          }
          else {
            uVar9 = uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
            *(int *)(param_1 + 0x1714) = iVar5 + iVar3;
          }
          *(ushort *)(param_1 + 0x1710) = uVar9;
        }
      }
    } while (uVar12 < *(uint *)(param_1 + 0x16f4));
  }
  iVar5 = *(int *)(param_1 + 0x1714);
  uVar9 = *(ushort *)(param_2 + 0x400);
  uVar8 = *(ushort *)(param_2 + 0x402);
  uVar10 = uVar9 << ((byte)iVar5 & 0x1f) | *(ushort *)(param_1 + 0x1710);
  if ((int)(0x10 - (uint)uVar8) < iVar5) {
    *(ushort *)(param_1 + 0x1710) = uVar10;
    *(char *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) = (char)uVar10;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x10)) =
         *(undefined1 *)(param_1 + 0x1711);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    uVar10 = uVar9 >> (0x10U - *(char *)(param_1 + 0x1714) & 0x1f);
    iVar5 = *(int *)(param_1 + 0x1714) + -0x10;
  }
  *(uint *)(param_1 + 0x1714) = iVar5 + (uint)uVar8;
  *(ushort *)(param_1 + 0x1710) = uVar10;
  *(uint *)(param_1 + 0x170c) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}




void FUN_180014be0(undefined8 param_1,int param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000180014be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc((ulonglong)(uint)(param_2 * param_3));
  return;
}




uint FUN_180014c00(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
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
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar19 = (uint)*param_2 + (param_1 & 0xffff);
    uVar3 = uVar19 - 0xfff1;
    if (uVar19 < 0xfff1) {
      uVar3 = uVar19;
    }
    uVar21 = uVar3 + uVar21;
    uVar19 = uVar21 - 0xfff1;
    if (uVar21 < 0xfff1) {
      uVar19 = uVar21;
    }
    return uVar19 << 0x10 | uVar3;
  }
  if (param_2 != (byte *)0x0) {
    if (0xf < param_3) {
      if (0x15af < param_3) {
        uVar22 = (ulonglong)param_3 / 0x15b0;
        do {
          param_3 = param_3 - 0x15b0;
          iVar20 = 0x15b;
          do {
            iVar4 = uVar3 + *param_2;
            iVar5 = iVar4 + (uint)param_2[1];
            iVar6 = iVar5 + (uint)param_2[2];
            iVar7 = iVar6 + (uint)param_2[3];
            iVar8 = iVar7 + (uint)param_2[4];
            iVar9 = iVar8 + (uint)param_2[5];
            iVar10 = iVar9 + (uint)param_2[6];
            iVar11 = iVar10 + (uint)param_2[7];
            iVar12 = iVar11 + (uint)param_2[8];
            iVar13 = iVar12 + (uint)param_2[9];
            iVar14 = iVar13 + (uint)param_2[10];
            iVar15 = iVar14 + (uint)param_2[0xb];
            iVar16 = iVar15 + (uint)param_2[0xc];
            iVar17 = iVar16 + (uint)param_2[0xd];
            iVar18 = iVar17 + (uint)param_2[0xe];
            pbVar1 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            uVar3 = iVar18 + (uint)*pbVar1;
            uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                     iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          uVar3 = uVar3 % 0xfff1;
          uVar21 = uVar21 % 0xfff1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (param_3 != 0) {
        if (0xf < param_3) {
          uVar22 = (ulonglong)(param_3 >> 4);
          do {
            param_3 = param_3 - 0x10;
            iVar20 = uVar3 + *param_2;
            iVar4 = iVar20 + (uint)param_2[1];
            iVar5 = iVar4 + (uint)param_2[2];
            iVar6 = iVar5 + (uint)param_2[3];
            iVar7 = iVar6 + (uint)param_2[4];
            iVar8 = iVar7 + (uint)param_2[5];
            iVar9 = iVar8 + (uint)param_2[6];
            iVar10 = iVar9 + (uint)param_2[7];
            iVar11 = iVar10 + (uint)param_2[8];
            iVar12 = iVar11 + (uint)param_2[9];
            iVar13 = iVar12 + (uint)param_2[10];
            iVar14 = iVar13 + (uint)param_2[0xb];
            iVar15 = iVar14 + (uint)param_2[0xc];
            iVar16 = iVar15 + (uint)param_2[0xd];
            iVar17 = iVar16 + (uint)param_2[0xe];
            pbVar1 = param_2 + 0xf;
            param_2 = param_2 + 0x10;
            uVar3 = iVar17 + (uint)*pbVar1;
            uVar21 = uVar21 + iVar20 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                     iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        for (; param_3 != 0; param_3 = param_3 - 1) {
          bVar2 = *param_2;
          param_2 = param_2 + 1;
          uVar3 = uVar3 + bVar2;
          uVar21 = uVar21 + uVar3;
        }
        uVar3 = uVar3 % 0xfff1;
        uVar21 = uVar21 % 0xfff1;
      }
      return uVar21 << 0x10 | uVar3;
    }
    if (param_3 != 0) {
      do {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar3 = uVar3 + bVar2;
        uVar21 = uVar21 + uVar3;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    uVar19 = uVar3 - 0xfff1;
    if (uVar3 < 0xfff1) {
      uVar19 = uVar3;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar19;
  }
  return 1;
}




uint FUN_180014ee0(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = ~param_1;
  if (param_3 != 0) {
    do {
      if (((ulonglong)param_2 & 3) == 0) break;
      uVar1 = *param_2;
      param_2 = (uint *)((longlong)param_2 + 1);
      uVar2 = *(uint *)(&DAT_18001a680 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar2) * 4) ^
              uVar2 >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (0x1f < param_3) {
    uVar3 = (ulonglong)(param_3 >> 5);
    do {
      uVar2 = uVar2 ^ *param_2;
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[1];
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[2];
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[3];
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[4];
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[5];
      param_3 = param_3 - 0x20;
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[6];
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[7];
      param_2 = param_2 + 8;
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (3 < param_3) {
    uVar3 = (ulonglong)(param_3 >> 2);
    do {
      uVar2 = uVar2 ^ *param_2;
      param_3 = param_3 - 4;
      param_2 = param_2 + 1;
      uVar2 = *(uint *)(&DAT_18001aa80 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_18001ae80 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_18001a680 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_18001b280 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar2 = *(uint *)(&DAT_18001a680 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar2) * 4) ^
            uVar2 >> 8;
  }
  return ~uVar2;
}




undefined8 FUN_1800151e0(longlong *param_1,ulonglong param_2,undefined4 param_3)

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
  FUN_180015470(param_1);
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




undefined8 FUN_180015400(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

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




undefined8 FUN_180015470(undefined8 *param_1)

{
  LPCWSTR lpFileName;
  
  if ((param_1[8] == 0) || (*(char *)(param_1 + 0xb) == '\0')) {
    free((void *)*param_1);
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




byte FUN_180015500(longlong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[10] + param_2;
  if (((ulonglong)param_1[2] < uVar2) || (*param_1 == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*param_1 + (uVar2 >> 3)) & '\x01' << ((byte)uVar2 & 7);
  }
  return bVar1;
}




void FUN_180015550(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10 [2];
  
  puVar1 = FUN_180015590(param_1,local_10);
  FUN_180015610(param_1,(undefined8 *)*puVar1,param_2);
  return;
}




undefined8 * FUN_180015590(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180010790(param_1);
  FUN_1800155d0(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_1800155d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_180010830(param_1,param_2);
  return param_1;
}




void FUN_180015610(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_2[1];
  uVar2 = FUN_180015760(param_3);
  lVar3 = FUN_180015770(param_1,param_2,plVar1,uVar2);
  FUN_180015690(param_1,1);
  param_2[1] = lVar3;
  *plVar1 = lVar3;
  return;
}




void FUN_180015690(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_180015710(param_1);
  plVar2 = (longlong *)FUN_180010780(param_1);
  if ((lVar1 - *plVar2) - 1U < param_2) {
    std::_Xlength_error("list<T> too long");
  }
  plVar2 = (longlong *)FUN_180010780(param_1);
  *plVar2 = *plVar2 + param_2;
  return;
}




void FUN_180015710(undefined8 param_1)

{
  FUN_180015740(param_1);
  FUN_180015730();
  return;
}




undefined8 FUN_180015730(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




void FUN_180015740(undefined8 param_1)

{
  FUN_180015760(param_1);
  return;
}




undefined8 FUN_180015760(undefined8 param_1)

{
  return param_1;
}




longlong FUN_180015770(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4
                      )

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_180002c50(param_1,param_2,param_3);
  uVar2 = FUN_180010790(param_1);
  uVar3 = FUN_180015760(param_4);
  uVar4 = FUN_180010790(lVar1 + 0x10);
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
  
  puVar1 = (undefined8 *)FUN_180001110(8,param_2);
  puVar2 = (undefined8 *)FUN_180015760(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180021010) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    if (DAT_1800213b0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800213b0 = DAT_1800213b0 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180021400 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800165d0();
      FID_conflict__RTC_Initialize();
      DAT_180021400 = 0;
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
    if (DAT_180021400 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180021400 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800165c0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180018290,&DAT_1800182a0);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180018280,&DAT_180018288);
        DAT_180021400 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180016600();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_1800213b0 = DAT_1800213b0 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180015b44) */
/* WARNING: Removing unreachable block (ram,0x000180015ad3) */
/* WARNING: Removing unreachable block (ram,0x000180015b87) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800213b0 < 1)) {
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
    FUN_18001694c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18001692c();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_180015c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180015c6c(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_1800213b8,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180015dbe;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_1800213e8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_1800213e8 != (HANDLE)0x0) goto LAB_180015d5c;
  }
  else {
    DAT_1800213e8 = (HANDLE)0x0;
    (*pFVar3)(&DAT_1800213e0);
    bVar7 = 0x40 - ((byte)DAT_180021010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_1800213f0 = DAT_180021010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_1800213f8 = DAT_180021010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180015d5c:
    uVar6 = FUN_18001616c(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180015dcc);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180015dbe:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180015dcc(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  if (DAT_1800213e8 != (HANDLE)0x0) {
    CloseHandle(DAT_1800213e8);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  uVar1 = (ulonglong)_tls_index;
  DAT_180021000 = DAT_180021000 + 1;
  *param_1 = DAT_180021000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180021000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180015ed8:
                    /* WARNING: Could not recover jumptable at 0x000180015ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180021000;
      goto LAB_180015ed8;
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
  
  if (DAT_1800213e8 != (HANDLE)0x0) {
    SetEvent(DAT_1800213e8);
                    /* WARNING: Could not recover jumptable at 0x000180015f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_1800213e8);
    return;
  }
  bVar1 = (byte)DAT_180021010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180017010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180021010 ^ _DAT_1800213f8) >> bVar1 |
            (DAT_180021010 ^ _DAT_1800213f8) << 0x40 - bVar1))(&DAT_1800213e0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_1800213e8 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
    WaitForSingleObjectEx(DAT_1800213e8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180015fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800213b8);
    return;
  }
  bVar1 = (byte)DAT_180021010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180017010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180021010 ^ _DAT_1800213f0) >> bVar1 |
            (DAT_180021010 ^ _DAT_1800213f0) << 0x40 - bVar1))
            (&DAT_1800213e0,&DAT_1800213b8,param_1);
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
LAB_180015fe2:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180021408 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180021408;
        pvVar1 = DAT_180021408;
      }
      DAT_180021408 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180015fe2;
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
    uVar3 = FUN_180001000();
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
  
  uVar1 = FUN_18001616c(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180016ba0();
  if (cVar1 != '\0') {
    cVar1 = FUN_180016ba0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180016ba0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180016ba0();
  FUN_180016ba0();
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
    _execute_onexit_table(&DAT_180021418);
    return;
  }
  uVar2 = FUN_18000c830();
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
  FUN_180016ba0();
  FUN_180016ba0();
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
    DAT_180021410 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180016ba0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180016ba0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180016ba0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001616c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180021411 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180021010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180021010;
      _DAT_180021418 = in_RAX;
      uRam0000000180021420 = in_RAX;
      _DAT_180021428 = in_RAX;
      _DAT_180021430 = in_RAX;
      uRam0000000180021438 = in_RAX;
      _DAT_180021440 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180021418);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180021430), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180021411 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x0001800162d2) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_1800162bb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800162bb:
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
    DAT_180021408 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180021410 == '\0') || (param_2 == '\0')) {
    FUN_180016ba0();
    FUN_180016ba0();
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
  
  bVar2 = (byte)DAT_180021010 & 0x3f;
  if (((DAT_180021010 ^ _DAT_180021418) >> bVar2 | (DAT_180021010 ^ _DAT_180021418) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180021418,_Func);
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
                    /* WARNING: Could not recover jumptable at 0x0001800163c5. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x1800163f6;
  capture_previous_context((PCONTEXT)&DAT_1800214f0);
  _DAT_180021460 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180021588 = puVar3 + 0x40;
  _DAT_180021570 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180021450 = 0xc0000409;
  _DAT_180021454 = 1;
  _DAT_180021468 = 1;
  DAT_180021470 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180021010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180021008;
  *(undefined8 *)(puVar3 + -8) = 0x180016498;
  DAT_1800215e8 = _DAT_180021460;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800183e8);
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
  
  if (DAT_180021010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180021010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180021010 == 0x2b992ddfa232) {
      DAT_180021010 = 0x2b992ddfa233;
    }
  }
  DAT_180021008 = ~DAT_180021010;
  return;
}




void FUN_1800165c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800165c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1800219c0);
  return;
}




void FUN_1800165d0(void)

{
  __std_type_info_destroy_list(&DAT_1800219c0);
  return;
}




undefined * FUN_1800165dc(void)

{
  return &DAT_1800219d0;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180002ee0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800165dc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180016600(void)

{
  return &DAT_180021a90;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180016608(void)

{
  _DAT_1800219d8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180016643;
  FUN_180016608();
  *(undefined8 *)(puVar4 + -8) = 0x180016654;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18001665e;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180016678;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1800166b9;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800166eb;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18001670d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18001672e;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180016739;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180016749;
    FUN_180016608();
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
  
  for (puVar1 = &DAT_18001e150; puVar1 < &DAT_18001e150; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18001e160; puVar1 < &DAT_18001e160; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined8 * FUN_1800167dc(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18001681c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18001683c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18001687c(undefined8 *param_1)

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




undefined8 * FUN_1800168e8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18001692c(void)

{
  undefined8 local_28 [5];
  
  FUN_18001681c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800204b8);
}




void FUN_18001694c(void)

{
  undefined8 local_28 [5];
  
  FUN_18001687c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180020540);
}




char * FUN_18001696c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x000180016a4e) */
/* WARNING: Removing unreachable block (ram,0x0001800169cc) */
/* WARNING: Removing unreachable block (ram,0x0001800169a7) */
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
  
  DAT_18002101c = 2;
  _DAT_180021018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180021020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800219e0 = DAT_1800219e0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1800219e0 = DAT_1800219e0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180021018 = 2;
    DAT_18002101c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18002101c = 0xe;
      _DAT_180021018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180021018 = 5;
        DAT_18002101c = 0x2e;
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
  return DAT_180021030 != 0;
}




undefined1 FUN_180016ba0(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000180016cc6) */
/* WARNING: Removing unreachable block (ram,0x000180016dd0) */
/* WARNING: Removing unreachable block (ram,0x000180016dea) */
/* WARNING: Removing unreachable block (ram,0x000180016d87) */
/* WARNING: Removing unreachable block (ram,0x000180016da1) */
/* WARNING: Removing unreachable block (ram,0x000180016dce) */
/* WARNING: Removing unreachable block (ram,0x000180016d3b) */
/* WARNING: Removing unreachable block (ram,0x000180016d55) */
/* WARNING: Removing unreachable block (ram,0x000180016d82) */
/* WARNING: Removing unreachable block (ram,0x000180016d2c) */
/* WARNING: Removing unreachable block (ram,0x000180016cfe) */
/* WARNING: Removing unreachable block (ram,0x000180016d09) */
/* WARNING: Removing unreachable block (ram,0x000180016d27) */
/* WARNING: Removing unreachable block (ram,0x000180016cee) */
/* WARNING: Removing unreachable block (ram,0x000180016cde) */
/* WARNING: Removing unreachable block (ram,0x000180016e47) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_180016bb0(longlong param_1,int param_2,longlong param_3)

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
    FUN_180015550(param_3,&local_30);
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

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180017010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180017020(undefined8 param_1,longlong param_2)

{
  FUN_180001300(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_180017030(undefined8 param_1,longlong param_2)

{
  FUN_180001300((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180017040(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x70));
  return;
}




void Unwind_180017060(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180017080(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180017090(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_1800170b0(undefined8 param_1,longlong param_2)

{
  FUN_18000cb10(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1800170c0(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_1800170d0(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1800170e0(undefined8 param_1,longlong param_2)

{
  FUN_180008ca0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1800170f0(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180017100(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_180017110(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_180017120(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_180017130(undefined8 param_1,longlong param_2)

{
  FUN_180003160((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_180017140(undefined8 param_1,longlong param_2)

{
  FUN_180003160((longlong *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_180017150(undefined8 param_1,longlong param_2)

{
  FUN_180003180((longlong *)(*(longlong *)(param_2 + 0x40) + 0x80));
  return;
}




void Unwind_180017170(undefined8 param_1,longlong param_2)

{
  FUN_1800031e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_180017190(undefined8 param_1,longlong param_2)

{
  FUN_180003210((longlong *)(*(longlong *)(param_2 + 0x40) + 0xa0));
  return;
}




void Unwind_1800171b0(undefined8 param_1,longlong param_2)

{
  FUN_180001460(*(longlong *)(param_2 + 0x40) + 0xf0);
  return;
}




void Unwind_1800171d0(undefined8 param_1,longlong param_2)

{
  FUN_180001460(*(longlong *)(param_2 + 0x40) + 0x195);
  return;
}




void Unwind_1800171f0(undefined8 param_1,longlong param_2)

{
  FUN_180008d00((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180017200(undefined8 param_1,longlong param_2)

{
  FUN_180001460(param_2 + 0x40);
  return;
}




void Unwind_180017210(undefined8 param_1,longlong param_2)

{
  FUN_180008d00(*(longlong **)(param_2 + 0xc0));
  return;
}




void Unwind_180017220(undefined8 param_1,longlong param_2)

{
  FID_conflict__vector<struct_GSISymbolEntry,class_std::allocator<struct_GSISymbolEntry>_>
            ((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180017230(undefined8 param_1,longlong param_2)

{
  FUN_180001460(param_2 + 0x80);
  return;
}




void Unwind_180017240(undefined8 param_1,longlong param_2)

{
  FUN_18000dd50((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_180017250(undefined8 param_1,longlong param_2)

{
  FUN_180007b40((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_180017260(undefined8 param_1,longlong param_2)

{
  FUN_180007b70(param_2 + 0x90);
  return;
}




void Unwind_180017270(undefined8 param_1,longlong param_2)

{
  FUN_18000dd50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180017280(undefined8 param_1,longlong param_2)

{
  FUN_180007dd0(param_2 + 0x50);
  return;
}




void Unwind_180017290(undefined8 param_1,longlong param_2)

{
  FUN_180007e20(param_2 + 0x120);
  return;
}




void Unwind_1800172a0(undefined8 param_1,longlong param_2)

{
  FUN_180001460(param_2 + 0x50);
  return;
}




void Unwind_1800172b0(undefined8 param_1,longlong param_2)

{
  FUN_180001460(*(longlong *)(param_2 + 0x30));
  return;
}




void Catch_All_1800172c0(undefined8 param_1,longlong param_2)

{
  FUN_180002ad0(param_1,*(longlong *)(param_2 + 0xa0),*(longlong *)(param_2 + 0x28));
  FUN_180002b90(param_1,*(void **)(param_2 + 0x30),*(longlong *)(param_2 + 0xa8));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180017300(undefined8 param_1,longlong param_2)

{
  FUN_18000b630((longlong *)(param_2 + 0x40));
  return;
}




void Catch_All_180017310(undefined8 param_1,longlong param_2)

{
  FUN_180002b20(*(longlong **)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017340(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180002b20(*(longlong **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017370(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017390(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800173b0(undefined8 param_1,longlong param_2)

{
  FUN_180002cd0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017400(undefined8 param_1,longlong param_2)

{
  FUN_18000b7f0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017470(undefined8 param_1,longlong param_2)

{
  FUN_18000b690(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800174a0(undefined8 param_1,longlong param_2)

{
  FUN_18000b6d0(param_1,*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800174c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_2 + 0x88);
  plVar1 = *(longlong **)(param_2 + 0x80);
  if (plVar5 != plVar1) {
    lVar2 = *(longlong *)(param_2 + 0x78);
    lVar3 = *(longlong *)(param_2 + 0x70);
    do {
      plVar4 = *(longlong **)(lVar2 + 8);
      *(longlong *)plVar4[1] = *plVar4;
      *(longlong *)(*plVar4 + 8) = plVar4[1];
      FUN_180002a90(plVar4 + 0x11);
      free(plVar4);
      plVar4 = (longlong *)(lVar3 + 8);
      *plVar4 = *plVar4 + -1;
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != plVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017540(undefined8 param_1,longlong param_2)

{
  FUN_180008db0(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017570(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180008c10(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_1800175a0(undefined8 param_1,longlong param_2)

{
  FUN_18000c110(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017610(undefined8 param_1,longlong param_2)

{
  FUN_180008fd0(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180017640(undefined8 param_1,longlong param_2)

{
  FUN_18000b690(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180017670(void)

{
  _Init_thread_abort(&DAT_1800219f0);
  return;
}




void Unwind_180017680(void)

{
  FUN_180002950(&DAT_180021a20);
  return;
}




void Unwind_180017690(undefined8 param_1,longlong param_2)

{
  FUN_18000d510((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1800176a0(undefined8 param_1,longlong param_2)

{
  FUN_18000fcd0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800176b0(undefined8 param_1,longlong param_2)

{
  FUN_1800106b0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1800176c0(undefined8 param_1,longlong param_2)

{
  FUN_180002950((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800176d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1800176f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




undefined1 * Catch_All_180017710(undefined8 param_1,longlong param_2)

{
  void *_Memory;
  
  _Memory = *(void **)(param_2 + 0x48);
  if (_Memory != (void *)0x0) {
    if (*(void **)((longlong)_Memory + 8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 8));
    }
    free(_Memory);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return &LAB_18001068a;
}




undefined * Catch_180017760(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x70) = 0;
  return &DAT_1800153dd;
}




undefined * Catch_All_180017786(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x70) = 0;
  return &DAT_1800153dd;
}




undefined8
FUN_1800177b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002ef0("Exception occurred.GetErrorCode\n",param_2,param_3,param_4);
  return 1;
}




void Catch_All_1800177e0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_180017818(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18001782f(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18001784b(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800178a0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_18000d2f0((undefined8 *)&DAT_180021a00);
  FUN_18000d3c0(0x180021a00);
  _Mtx_destroy_in_situ(&DAT_180021a40);
  plVar2 = (longlong *)*DAT_180021a30;
  *DAT_180021a30 = (longlong)DAT_180021a30;
  DAT_180021a30[1] = (longlong)DAT_180021a30;
  _DAT_180021a38 = 0;
  if (plVar2 != DAT_180021a30) {
    do {
      plVar1 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != DAT_180021a30);
  }
  free(DAT_180021a30);
  plVar2 = (longlong *)*DAT_180021a20;
  *DAT_180021a20 = (longlong)DAT_180021a20;
  DAT_180021a20[1] = (longlong)DAT_180021a20;
  _DAT_180021a28 = 0;
  if (plVar2 != DAT_180021a20) {
    do {
      plVar1 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != DAT_180021a20);
  }
  free(DAT_180021a20);
  return;
}



