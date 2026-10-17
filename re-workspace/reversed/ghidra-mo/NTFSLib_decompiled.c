
void FUN_180001000(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [4];
  
  if (param_1 + 0x1000U < *param_2) {
    *param_2 = param_1 + 0x1000U;
  }
  puVar5 = (undefined8 *)param_3[2];
  bVar4 = false;
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  if (puVar5 == (undefined8 *)0x0) {
LAB_18000108a:
    bVar4 = true;
    puVar6 = (undefined8 *)param_3[3];
  }
  else {
    puVar6 = (undefined8 *)param_3[3] + 0x200;
    puVar1 = puVar5 + 0x201;
    if (puVar6 < puVar5 + 1) {
      if (puVar6 < puVar1) goto LAB_18000108a;
    }
    else if (puVar6 < puVar1) goto LAB_180001090;
    puVar5 = (undefined8 *)
             FUN_180007040((longlong)puVar2,puVar5,
                           (ulonglong)((longlong)puVar6 - (longlong)puVar1) >> 0xc);
    puVar6 = (undefined8 *)
             ((ulonglong)((uint)((longlong)puVar6 - (longlong)puVar1) & 0xfff) + 8 +
             (longlong)puVar5);
  }
LAB_180001090:
  if (bVar4) {
    puVar5 = FUN_180006a70(puVar2,lVar3 + 0x1000U >> 0xc);
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)((ulonglong)((uint)(lVar3 + 0x1000U) & 0xfff) + 8 + (longlong)puVar5);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_1800010fa:
    FUN_180006a70(puVar2,lVar3 + 0x1002U >> 0xc);
  }
  else {
    puVar6 = (undefined8 *)((longlong)puVar6 + 2);
    puVar1 = puVar5 + 0x201;
    if (puVar6 < puVar5 + 1) {
      if (puVar6 < puVar1) goto LAB_1800010fa;
    }
    else if (puVar6 < puVar1) goto LAB_18000110d;
    FUN_180007040((longlong)puVar2,puVar5,(ulonglong)((longlong)puVar6 - (longlong)puVar1) >> 0xc);
  }
LAB_18000110d:
  if ((longlong)param_4[1] <= lVar3 + 0x1002) {
    if (param_5 == param_4) {
      return;
    }
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    param_5[3] = param_4[3];
    return;
  }
  puVar5 = (undefined8 *)param_3[2];
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  bVar4 = false;
  if (puVar5 == (undefined8 *)0x0) {
LAB_180001189:
    bVar4 = true;
    puVar6 = (undefined8 *)param_3[3];
  }
  else {
    puVar6 = (undefined8 *)param_3[3] + 0x200;
    puVar1 = puVar5 + 0x201;
    if (puVar6 < puVar5 + 1) {
      if (puVar6 < puVar1) goto LAB_180001189;
    }
    else if (puVar6 < puVar1) goto LAB_18000118f;
    puVar5 = (undefined8 *)
             FUN_180007040((longlong)puVar2,puVar5,
                           (ulonglong)((longlong)puVar6 - (longlong)puVar1) >> 0xc);
    puVar6 = (undefined8 *)
             ((ulonglong)((uint)((longlong)puVar6 - (longlong)puVar1) & 0xfff) + 8 +
             (longlong)puVar5);
  }
LAB_18000118f:
  if (bVar4) {
    puVar5 = FUN_180006a70(puVar2,lVar3 + 0x1000U >> 0xc);
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)((ulonglong)((uint)(lVar3 + 0x1000U) & 0xfff) + 8 + (longlong)puVar5);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_18000120f:
    puVar5 = FUN_180006a70(puVar2,lVar3 + 0x1002U >> 0xc);
    if (puVar5 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)((ulonglong)((uint)(lVar3 + 0x1002U) & 0xfff) + 8 + (longlong)puVar5);
    }
  }
  else {
    puVar6 = (undefined8 *)((longlong)puVar6 + 2);
    puVar1 = puVar5 + 0x201;
    if (puVar6 < puVar5 + 1) {
      if (puVar6 < puVar1) goto LAB_18000120f;
    }
    else if (puVar6 < puVar1) goto LAB_18000123e;
    puVar5 = (undefined8 *)
             FUN_180007040((longlong)puVar2,puVar5,
                           (ulonglong)((longlong)puVar6 - (longlong)puVar1) >> 0xc);
    puVar6 = (undefined8 *)
             ((ulonglong)((uint)((longlong)puVar6 - (longlong)puVar1) & 0xfff) + 8 +
             (longlong)puVar5);
  }
LAB_18000123e:
  if (param_5 == local_38) {
    return;
  }
  *param_5 = puVar2;
  param_5[1] = lVar3 + 0x1002;
  param_5[2] = puVar5;
  param_5[3] = puVar6;
  return;
}




undefined8
FUN_1800012b0(undefined *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 **param_4,
             longlong param_5,uint *param_6,undefined8 *param_7)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  byte bStackX_19;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  uint *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_70 = 0xfffffffffffffffe;
  if (param_2 + 0x1000 < param_3) {
    param_3 = param_2 + 0x1000;
  }
  local_90 = *param_4;
  local_88 = param_4[1];
  local_80 = param_4[2];
  local_78 = param_4[3];
  lVar10 = *(longlong *)(param_5 + 8) - (longlong)local_88;
  if (0x1002 < lVar10) {
    lVar10 = 0x1002;
  }
  FUN_1800059f0(&local_90,lVar10);
  puVar7 = *param_4;
  local_d0 = param_4[1];
  local_c8 = param_4[2];
  local_c0 = param_4[3];
  bVar2 = false;
  local_d8 = puVar7;
  local_b0 = local_c8;
  local_a8 = local_d0;
  if (local_c8 == (undefined8 *)0x0) {
LAB_1800013de:
    bVar2 = true;
    puVar15 = local_c0;
  }
  else {
    puVar6 = local_c8 + 0x201;
    puVar15 = (undefined8 *)((longlong)local_c0 + 2);
    if (puVar15 < local_c8 + 1) {
      if (puVar15 < puVar6) goto LAB_1800013de;
    }
    else if (puVar15 < puVar6) goto LAB_1800013e3;
    local_b0 = (undefined8 *)
               FUN_180007040((longlong)puVar7,local_c8,
                             (ulonglong)((longlong)puVar15 - (longlong)puVar6) >> 0xc);
    puVar15 = (undefined8 *)
              (((longlong)puVar15 - (longlong)puVar6 & 0xfffU) + 8 + (longlong)local_b0);
  }
LAB_1800013e3:
  local_c0 = puVar15;
  puVar15 = (undefined8 *)0x0;
  if (bVar2) {
    uVar14 = (longlong)local_d0 + 2;
    local_c8 = local_b0;
    local_b0 = FUN_180006a70(puVar7,uVar14 >> 0xc);
    local_c0 = puVar15;
    if (local_b0 != (undefined8 *)0x0) {
      local_c0 = (undefined8 *)((uVar14 & 0xfff) + 8 + (longlong)local_b0);
    }
  }
  puVar7 = local_b0;
  puVar6 = local_c0;
  local_d0 = (undefined8 *)((longlong)local_d0 + 2);
  local_a0 = local_d8;
  local_c8 = local_b0;
  local_a8 = local_d0;
  FUN_180005900(&local_d8);
  local_b4 = 0;
  local_b8 = local_b8 & 0xffffff00;
  *param_7 = param_2;
  param_7[1] = param_3;
  *(undefined4 *)(param_7 + 2) = 0x1002;
  if (param_2 < param_3) {
    local_98 = &DAT_18001ca90;
    puVar16 = param_2;
    puVar9 = puVar15;
    do {
      if (param_2 + *local_98 < puVar16) {
        do {
          puVar9 = (undefined8 *)(ulonglong)((int)puVar9 + 1);
          local_98 = &DAT_18001ca90 + (longlong)puVar9;
        } while (param_2 + *local_98 < puVar16);
        *(undefined4 *)(param_7 + 2) = *(undefined4 *)(&DAT_18001ca68 + (longlong)puVar9 * 4);
      }
      puVar5 = (undefined8 *)0x0;
      uVar13 = (uint)puVar15;
      puVar11 = puVar6;
      if (puVar16 + 3 <= param_3) {
        iVar3 = (*(code *)param_1)(puVar16,param_7);
        uVar13 = local_b4;
        if (iVar3 == 0) goto LAB_18000184d;
        if (1 < (longlong)local_88 - (longlong)local_d0) {
          sVar8 = (short)puVar16 - (short)*(undefined4 *)(param_7 + 3);
          local_b8 = local_b8 & 0xff | 1 << (local_b4 & 0x1f);
          iVar17 = (int)puVar9;
          sVar1 = (short)iVar3;
          if (iVar17 == 0) {
            uVar12 = sVar1 - 3U & 0xfff | (sVar8 + -1) * 0x1000;
          }
          else if (iVar17 == 1) {
            uVar12 = sVar1 - 3U & 0x7ff | (sVar8 + -1) * 0x800;
          }
          else if (iVar17 == 2) {
            uVar12 = sVar1 - 3U & 0x3ff | (sVar8 + -1) * 0x400;
          }
          else if (iVar17 == 3) {
            uVar12 = sVar1 - 3U & 0x1ff | (sVar8 + -1) * 0x200;
          }
          else if (iVar17 == 4) {
            uVar12 = sVar1 - 3U & 0xff | (sVar8 + -1) * 0x100;
          }
          else if (iVar17 == 5) {
            uVar12 = sVar1 - 3U & 0x7f | (sVar8 + -1) * 0x80;
          }
          else if (iVar17 == 6) {
            uVar12 = sVar1 - 3U & 0x3f | (sVar8 + -1) * 0x40;
          }
          else if (iVar17 == 7) {
            uVar12 = sVar1 - 3U & 0x1f | (sVar8 + -1) * 0x20;
          }
          else {
            uVar12 = (sVar8 + -1) * 0x10 | sVar1 - 3U & 0xf;
          }
          param_5._0_1_ = (undefined1)uVar12;
          param_5._1_1_ = (undefined1)(uVar12 >> 8);
          if (local_c8 == (undefined8 *)0x0) {
            uVar14 = (ulonglong)local_d0 & 0xfff;
            local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc);
            if (local_c8 == (undefined8 *)0x0) {
              local_c0 = (undefined8 *)0x0;
            }
            else {
              local_c0 = (undefined8 *)((longlong)local_c8 + uVar14 + 8);
            }
          }
          puVar7 = local_c8;
          *(undefined1 *)local_c0 = (undefined1)param_5;
          if (local_c8 == (undefined8 *)0x0) {
            uVar14 = (longlong)local_d0 + 1;
            local_c8 = FUN_180006a70(local_d8,uVar14 >> 0xc);
            puVar15 = puVar5;
            if (local_c8 != (undefined8 *)0x0) {
              puVar15 = (undefined8 *)((uVar14 & 0xfff) + 8 + (longlong)local_c8);
            }
          }
          else {
            puVar15 = (undefined8 *)((longlong)local_c0 + 1);
            if (local_c8 + 0x201 <= puVar15) {
              lVar10 = local_d8[1];
              puVar4 = (undefined8 *)*local_c8;
              if (puVar4 == (undefined8 *)0x0) {
                puVar4 = *(undefined8 **)(lVar10 + 0x20030);
                if (puVar4 == (undefined8 *)0x0) {
                  local_68 = (undefined8 *)operator_new(0x1008);
                  if (local_68 == (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)0x0;
                  }
                  else {
                    *local_68 = 0;
                    puVar4 = local_68;
                  }
                  *(longlong *)(lVar10 + 0x20028) = *(longlong *)(lVar10 + 0x20028) + 1;
                }
                else {
                  *(undefined8 *)(lVar10 + 0x20030) = *puVar4;
                  *puVar4 = 0;
                }
                *puVar7 = puVar4;
              }
              puVar15 = puVar4 + 1;
              local_c8 = puVar4;
            }
          }
          local_d0 = (undefined8 *)((longlong)local_d0 + 1);
          local_c0 = puVar15;
          if (local_c8 == (undefined8 *)0x0) {
            uVar14 = (ulonglong)local_d0 & 0xfff;
            local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc);
            local_c0 = puVar5;
            if (local_c8 != (undefined8 *)0x0) {
              local_c0 = (undefined8 *)((longlong)local_c8 + uVar14 + 8);
            }
          }
          puVar7 = local_c8;
          *(undefined1 *)local_c0 = param_5._1_1_;
          if (local_c8 == (undefined8 *)0x0) {
            uVar14 = (longlong)local_d0 + 1;
            local_c8 = FUN_180006a70(local_d8,uVar14 >> 0xc);
            if (local_c8 == (undefined8 *)0x0) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
              puVar4 = (undefined8 *)((longlong)local_c8 + (uVar14 & 0xfff) + 8);
            }
          }
          else {
            puVar4 = (undefined8 *)((longlong)local_c0 + 1);
            if (local_c8 + 0x201 <= puVar4) {
              lVar10 = local_d8[1];
              puVar15 = (undefined8 *)*local_c8;
              if (puVar15 == (undefined8 *)0x0) {
                puVar15 = *(undefined8 **)(lVar10 + 0x20030);
                if (puVar15 != (undefined8 *)0x0) {
                  *(undefined8 *)(lVar10 + 0x20030) = *puVar15;
                  *puVar15 = 0;
                  *local_c8 = puVar15;
                  puVar4 = puVar15 + 1;
                  local_c8 = puVar15;
                  goto LAB_180001831;
                }
                local_60 = (undefined8 *)operator_new(0x1008);
                if (local_60 == (undefined8 *)0x0) {
                  puVar15 = (undefined8 *)0x0;
                }
                else {
                  *local_60 = 0;
                  puVar15 = local_60;
                }
                *(longlong *)(lVar10 + 0x20028) = *(longlong *)(lVar10 + 0x20028) + 1;
                *puVar7 = puVar15;
              }
              puVar4 = puVar15 + 1;
              local_c8 = puVar15;
            }
          }
LAB_180001831:
          puVar16 = puVar16 + iVar3;
          uVar13 = local_b8;
          goto LAB_180001971;
        }
LAB_180001b1e:
        puVar6 = puVar11;
        puVar7 = local_b0;
        if (puVar16 < param_3) {
          if ((ulonglong)((longlong)local_88 - (longlong)param_4[1]) < 0x1002) {
            return 0xc0000023;
          }
          *param_6 = ((int)param_3 - (int)param_2) + 2;
          if (&local_d8 != param_4) {
            local_d8 = *param_4;
            local_d0 = param_4[1];
            local_c8 = param_4[2];
            local_c0 = param_4[3];
          }
          FUN_1800059f0(&local_d8,2);
          uVar13 = *param_6;
          iVar3 = uVar13 - 2;
          if (iVar3 == 0) goto LAB_180001cd9;
          goto LAB_180001bb0;
        }
        break;
      }
LAB_18000184d:
      if ((longlong)local_88 <= (longlong)local_d0) goto LAB_180001b1e;
      uVar13 = local_b8 & 0xff & ~(1 << (uVar13 & 0x1f));
      local_b8 = uVar13;
      if (local_c8 == (undefined8 *)0x0) {
        uVar14 = (ulonglong)local_d0 & 0xfff;
        local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc);
        local_c0 = puVar5;
        if (local_c8 != (undefined8 *)0x0) {
          local_c0 = (undefined8 *)(uVar14 + 8 + (longlong)local_c8);
        }
      }
      puVar7 = local_c8;
      *(undefined1 *)local_c0 = *puVar16;
      puVar16 = puVar16 + 1;
      if (local_c8 == (undefined8 *)0x0) {
        uVar14 = (longlong)local_d0 + 1;
        local_c8 = FUN_180006a70(local_d8,uVar14 >> 0xc);
        if (local_c8 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = (undefined8 *)((uVar14 & 0xfff) + 8 + (longlong)local_c8);
        }
      }
      else {
        puVar4 = (undefined8 *)((longlong)local_c0 + 1);
        if (local_c8 + 0x201 <= puVar4) {
          lVar10 = local_d8[1];
          puVar15 = (undefined8 *)*local_c8;
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = *(undefined8 **)(lVar10 + 0x20030);
            if (puVar15 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar10 + 0x20030) = *puVar15;
              *puVar15 = 0;
              *local_c8 = puVar15;
              puVar4 = puVar15 + 1;
              local_c8 = puVar15;
              goto LAB_180001971;
            }
            local_58 = (undefined8 *)operator_new(0x1008);
            if (local_58 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)0x0;
            }
            else {
              *local_58 = 0;
              puVar15 = local_58;
            }
            *(longlong *)(lVar10 + 0x20028) = *(longlong *)(lVar10 + 0x20028) + 1;
            *puVar7 = puVar15;
          }
          puVar4 = puVar15 + 1;
          local_c8 = puVar15;
        }
      }
LAB_180001971:
      local_d0 = (undefined8 *)((longlong)local_d0 + 1);
      local_b4 = local_b4 + 1 & 7;
      puVar15 = (undefined8 *)(ulonglong)local_b4;
      puVar7 = local_b0;
      local_c0 = puVar4;
      if (local_b4 == 0) {
        if (local_b0 == (undefined8 *)0x0) {
          uVar14 = (ulonglong)local_a8 & 0xfff;
          local_b0 = FUN_180006a70(local_a0,(ulonglong)local_a8 >> 0xc);
          puVar11 = puVar5;
          if (local_b0 != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)(uVar14 + 8 + (longlong)local_b0);
          }
        }
        puVar6 = local_c0;
        puVar7 = local_c8;
        *(char *)puVar11 = (char)uVar13;
        local_b8 = uVar13 & 0xffffff00;
        if ((longlong)local_88 <= (longlong)local_d0) goto LAB_180001b1e;
        local_a0 = local_d8;
        local_a8 = local_d0;
        local_b0 = local_c8;
        if (local_c8 == (undefined8 *)0x0) {
          uVar14 = (longlong)local_d0 + 1;
          puVar11 = FUN_180006a70(local_d8,uVar14 >> 0xc);
          if (puVar11 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)((uVar14 & 0xfff) + 8 + (longlong)puVar11);
          }
        }
        else {
          if ((undefined8 *)((longlong)local_c0 + 1) < local_c8 + 0x201) {
            local_d0 = (undefined8 *)((longlong)local_d0 + 1);
            puVar15 = (undefined8 *)(ulonglong)local_b4;
            local_c0 = (undefined8 *)((longlong)local_c0 + 1);
            goto LAB_180001aec;
          }
          lVar10 = local_d8[1];
          puVar11 = (undefined8 *)*local_c8;
          if (puVar11 == (undefined8 *)0x0) {
            puVar11 = *(undefined8 **)(lVar10 + 0x20030);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar10 + 0x20030) = *puVar11;
              *puVar11 = 0;
              *local_c8 = puVar11;
              puVar5 = puVar11 + 1;
              goto LAB_180001ad1;
            }
            local_50 = (undefined8 *)operator_new(0x1008);
            if (local_50 == (undefined8 *)0x0) {
              puVar11 = (undefined8 *)0x0;
            }
            else {
              *local_50 = 0;
              puVar11 = local_50;
            }
            *(longlong *)(lVar10 + 0x20028) = *(longlong *)(lVar10 + 0x20028) + 1;
            *puVar7 = puVar11;
          }
          puVar5 = puVar11 + 1;
        }
LAB_180001ad1:
        local_d0 = (undefined8 *)((longlong)local_d0 + 1);
        puVar15 = (undefined8 *)(ulonglong)local_b4;
        local_c8 = puVar11;
        local_c0 = puVar5;
      }
LAB_180001aec:
    } while (puVar16 < param_3);
  }
  puVar15 = local_a8;
  puVar9 = (undefined8 *)0x0;
  if ((longlong)local_a8 < (longlong)local_88) {
    if ((puVar7 == (undefined8 *)0x0) &&
       (puVar7 = FUN_180006a70(local_a0,(ulonglong)local_a8 >> 0xc), puVar6 = puVar9,
       puVar7 != (undefined8 *)0x0)) {
      puVar6 = (undefined8 *)((ulonglong)((uint)puVar15 & 0xfff) + 8 + (longlong)puVar7);
    }
    *(char *)puVar6 = (char)local_b8;
  }
  uVar13 = (int)local_d0 - *(int *)(param_4 + 1);
  *param_6 = uVar13;
  uVar12 = (short)uVar13 - 3U & 0xfff;
  bStackX_19 = (byte)(uVar12 >> 8) | 0xb0;
  if (&local_d8 != param_4) {
    local_d8 = *param_4;
    local_d0 = param_4[1];
    local_c8 = param_4[2];
    local_c0 = param_4[3];
  }
  puVar7 = local_d0;
  if ((local_c8 == (undefined8 *)0x0) &&
     (local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc), local_c0 = puVar9,
     local_c8 != (undefined8 *)0x0)) {
    local_c0 = (undefined8 *)((longlong)local_c8 + ((ulonglong)puVar7 & 0xfff) + 8);
  }
  *(char *)local_c0 = (char)uVar12;
  puVar7 = FUN_180005900(&local_d8);
  if (puVar7[2] == 0) {
    uVar14 = puVar7[1];
    puVar15 = FUN_180006a70((undefined8 *)*puVar7,uVar14 >> 0xc);
    if (puVar15 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)((longlong)puVar15 + (uVar14 & 0xfff) + 8);
    }
    puVar7[2] = puVar15;
    puVar7[3] = puVar9;
  }
  *(byte *)puVar7[3] = bStackX_19;
  return 0;
LAB_180001bb0:
  iVar3 = iVar3 + -1;
  if (local_c8 == (undefined8 *)0x0) {
    uVar14 = (ulonglong)local_d0 & 0xfff;
    local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc);
    local_c0 = puVar5;
    if (local_c8 != (undefined8 *)0x0) {
      local_c0 = (undefined8 *)(uVar14 + 8 + (longlong)local_c8);
    }
  }
  puVar7 = local_c8;
  *(undefined1 *)local_c0 = *param_2;
  param_2 = param_2 + 1;
  if (local_c8 == (undefined8 *)0x0) {
    uVar14 = (longlong)local_d0 + 1;
    local_c8 = FUN_180006a70(local_d8,uVar14 >> 0xc);
    puVar15 = puVar5;
    if (local_c8 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)((uVar14 & 0xfff) + 8 + (longlong)local_c8);
    }
  }
  else {
    puVar15 = (undefined8 *)((longlong)local_c0 + 1);
    if (local_c8 + 0x201 <= (undefined8 *)((longlong)local_c0 + 1)) {
      lVar10 = local_d8[1];
      puVar6 = (undefined8 *)*local_c8;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)(lVar10 + 0x20030);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar10 + 0x20030) = *puVar6;
          *puVar6 = 0;
          *local_c8 = puVar6;
          puVar15 = puVar6 + 1;
          local_c8 = puVar6;
          goto LAB_180001cb8;
        }
        puVar6 = (undefined8 *)operator_new(0x1008);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          *puVar6 = 0;
        }
        *(longlong *)(lVar10 + 0x20028) = *(longlong *)(lVar10 + 0x20028) + 1;
        *puVar7 = puVar6;
      }
      puVar15 = puVar6 + 1;
      local_c8 = puVar6;
    }
  }
LAB_180001cb8:
  local_d0 = (undefined8 *)((longlong)local_d0 + 1);
  local_c0 = puVar15;
  if (iVar3 == 0) {
    uVar13 = (uint)(ushort)*param_6;
LAB_180001cd9:
    uVar12 = (short)uVar13 - 3U & 0xfff;
    if (&local_d8 != param_4) {
      local_d8 = *param_4;
      local_d0 = param_4[1];
      local_c8 = param_4[2];
      local_c0 = param_4[3];
    }
    puVar7 = local_d0;
    if ((local_c8 == (undefined8 *)0x0) &&
       (local_c8 = FUN_180006a70(local_d8,(ulonglong)local_d0 >> 0xc), local_c0 = puVar5,
       local_c8 != (undefined8 *)0x0)) {
      local_c0 = (undefined8 *)((longlong)local_c8 + ((ulonglong)puVar7 & 0xfff) + 8);
    }
    *(char *)local_c0 = (char)uVar12;
    puVar7 = FUN_180005900(&local_d8);
    puVar7 = FUN_1800058a0(puVar7);
    *(byte *)puVar7[1] = (byte)(uVar12 >> 8) | 0x30;
    return 0;
  }
  goto LAB_180001bb0;
}




undefined8
FUN_180001ec0(undefined1 param_1,short param_2,undefined8 **param_3,longlong param_4,short *param_5)

{
  ulonglong uVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  psVar2 = param_5;
  param_5[0] = 6;
  param_5[1] = 0;
  if ((uint)(*(int *)(param_4 + 8) - *(int *)(param_3 + 1)) < 6) {
    return 0xc0000023;
  }
  local_48 = *param_3;
  local_38 = param_3[2];
  local_40 = param_3[1];
  local_30 = param_3[3];
  puVar4 = (undefined8 *)0x0;
  uVar6 = param_2 - 3U & 0xfff;
  param_5._0_1_ = (undefined1)uVar6;
  param_5._1_1_ = (byte)(uVar6 >> 8);
  if (local_38 == (undefined8 *)0x0) {
LAB_180001f8b:
    uVar1 = (longlong)local_40 + 2;
    local_38 = FUN_180006a70(local_48,uVar1 >> 0xc);
    puVar3 = puVar4;
    if (local_38 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)((uVar1 & 0xfff) + 8 + (longlong)local_38);
    }
  }
  else {
    puVar3 = (undefined8 *)((longlong)local_30 + 2);
    puVar5 = local_38 + 0x201;
    if (puVar3 < local_38 + 1) {
      if (puVar3 < puVar5) goto LAB_180001f8b;
    }
    else if (puVar3 < puVar5) goto LAB_180001fb9;
    local_38 = (undefined8 *)
               FUN_180007040((longlong)local_48,local_38,
                             (ulonglong)((longlong)puVar3 - (longlong)puVar5) >> 0xc);
    puVar3 = (undefined8 *)(((longlong)puVar3 - (longlong)puVar5 & 0xfffU) + 8 + (longlong)local_38)
    ;
  }
LAB_180001fb9:
  puVar5 = (undefined8 *)((longlong)local_40 + 2);
  local_30 = puVar3;
  local_40 = puVar5;
  if ((local_38 == (undefined8 *)0x0) &&
     (local_38 = FUN_180006a70(local_48,(ulonglong)puVar5 >> 0xc), local_30 = puVar4,
     local_38 != (undefined8 *)0x0)) {
    local_30 = (undefined8 *)((ulonglong)((uint)puVar5 & 0xfff) + 8 + (longlong)local_38);
  }
  *(undefined1 *)local_30 = 2;
  FUN_180005900(&local_48);
  puVar5 = local_40;
  if (local_38 == (undefined8 *)0x0) {
    local_38 = FUN_180006a70(local_48,(ulonglong)local_40 >> 0xc);
    if (local_38 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = (undefined8 *)((ulonglong)((uint)puVar5 & 0xfff) + 8 + (longlong)local_38);
    }
  }
  *(undefined1 *)local_30 = param_1;
  FUN_180005900(&local_48);
  puVar5 = local_40;
  if (local_38 == (undefined8 *)0x0) {
    local_38 = FUN_180006a70(local_48,(ulonglong)local_40 >> 0xc);
    if (local_38 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = (undefined8 *)((ulonglong)((uint)puVar5 & 0xfff) + 8 + (longlong)local_38);
    }
  }
  *(undefined1 *)local_30 = param_5._0_1_;
  FUN_180005900(&local_48);
  puVar5 = local_40;
  if (local_38 == (undefined8 *)0x0) {
    local_38 = FUN_180006a70(local_48,(ulonglong)local_40 >> 0xc);
    if (local_38 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = (undefined8 *)((ulonglong)((uint)puVar5 & 0xfff) + 8 + (longlong)local_38);
    }
  }
  *(byte *)local_30 = param_5._1_1_;
  uVar6 = *psVar2 - 3U & 0xfff;
  param_5._1_1_ = (byte)(uVar6 >> 8) | 0xb0;
  if (&local_48 != param_3) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    local_30 = param_3[3];
  }
  puVar5 = local_40;
  if ((local_38 == (undefined8 *)0x0) &&
     (local_38 = FUN_180006a70(local_48,(ulonglong)local_40 >> 0xc), local_30 = puVar4,
     local_38 != (undefined8 *)0x0)) {
    local_30 = (undefined8 *)((longlong)local_38 + ((ulonglong)puVar5 & 0xfff) + 8);
  }
  *(char *)local_30 = (char)uVar6;
  puVar5 = FUN_180005900(&local_48);
  if (puVar5[2] == 0) {
    uVar1 = puVar5[1];
    puVar3 = FUN_180006a70((undefined8 *)*puVar5,uVar1 >> 0xc);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)((longlong)puVar3 + (uVar1 & 0xfff) + 8);
    }
    puVar5[2] = puVar3;
    puVar5[3] = puVar4;
  }
  *(byte *)puVar5[3] = param_5._1_1_;
  return 0;
}




undefined8
FUN_180002210(undefined1 *param_1,int param_2,undefined8 *param_3,longlong param_4,int *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  puVar5 = (undefined8 *)param_3[2];
  bVar4 = false;
  if (puVar5 == (undefined8 *)0x0) {
LAB_1800022a7:
    bVar4 = true;
    puVar7 = (undefined8 *)param_3[3];
  }
  else {
    puVar1 = puVar5 + 0x201;
    puVar7 = (undefined8 *)param_3[3] + 0x200;
    if (puVar7 < puVar5 + 1) {
      if (puVar7 < puVar1) goto LAB_1800022a7;
    }
    else if (puVar7 < puVar1) goto LAB_1800022ad;
    puVar5 = (undefined8 *)
             FUN_180007040((longlong)puVar2,puVar5,
                           (ulonglong)((longlong)puVar7 - (longlong)puVar1) >> 0xc);
    puVar7 = (undefined8 *)(((longlong)puVar7 - (longlong)puVar1 & 0xfffU) + 8 + (longlong)puVar5);
  }
LAB_1800022ad:
  if (bVar4) {
    puVar5 = FUN_180006a70(puVar2,lVar3 + 0x1000U >> 0xc);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)((lVar3 + 0x1000U & 0xfff) + 8 + (longlong)puVar5);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_180002314:
    FUN_180006a70(puVar2,lVar3 + 0x1002U >> 0xc);
  }
  else {
    puVar1 = puVar5 + 0x201;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    if (puVar7 < puVar5 + 1) {
      if (puVar7 < puVar1) goto LAB_180002314;
    }
    else if (puVar7 < puVar1) goto LAB_180002327;
    FUN_180007040((longlong)puVar2,puVar5,(ulonglong)((longlong)puVar7 - (longlong)puVar1) >> 0xc);
  }
LAB_180002327:
  if ((lVar3 + 0x1002 < *(longlong *)(param_4 + 8)) ||
     (lVar3 + 0x1002 == *(longlong *)(param_4 + 8))) {
    *param_5 = (param_2 - (int)param_1) + 2;
    local_50 = *param_3;
    local_48 = param_3[1];
    local_40 = param_3[2];
    local_38 = param_3[3];
    FUN_1800059f0(&local_50,2);
    FUN_180002420(&local_50,param_1,*param_5 + -2);
    local_50 = *param_3;
    local_48 = param_3[1];
    local_40 = param_3[2];
    local_38 = param_3[3];
    FUN_180003170(&local_50,(short)*param_5 - 3U & 0xfff | 0x3000);
    uVar6 = 0;
  }
  else {
    uVar6 = 0xc0000023;
  }
  return uVar6;
}




void FUN_180002420(undefined8 *param_1,undefined1 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    uVar5 = param_1[1];
    puVar6 = (undefined8 *)0x0;
    do {
      param_3 = param_3 + -1;
      if (param_1[2] == 0) {
        puVar2 = FUN_180006a70((undefined8 *)*param_1,uVar5 >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)uVar5 & 0xfff) + 8 + (longlong)puVar2);
        }
        param_1[2] = puVar2;
        param_1[3] = puVar4;
      }
      *(undefined1 *)param_1[3] = *param_2;
      puVar4 = (undefined8 *)param_1[2];
      if (puVar4 == (undefined8 *)0x0) {
        lVar1 = param_1[1];
        puVar2 = FUN_180006a70((undefined8 *)*param_1,lVar1 + 1U >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)(lVar1 + 1U) & 0xfff) + 8 + (longlong)puVar2);
        }
        param_1[2] = puVar2;
        param_1[3] = puVar4;
      }
      else if ((undefined8 *)(param_1[3] + 1) < puVar4 + 0x201) {
        param_1[3] = (undefined8 *)(param_1[3] + 1);
      }
      else {
        lVar1 = ((undefined8 *)*param_1)[1];
        puVar2 = (undefined8 *)*puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(lVar1 + 0x20030);
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar1 + 0x20030) = *puVar2;
            *puVar2 = 0;
            *puVar4 = puVar2;
            param_1[2] = puVar2;
            param_1[3] = puVar2 + 1;
            goto LAB_18000256f;
          }
          puVar3 = (undefined8 *)operator_new(0x1008);
          puVar2 = puVar6;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar2 = puVar3;
          }
          *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
          *puVar4 = puVar2;
        }
        param_1[2] = puVar2;
        param_1[3] = puVar2 + 1;
      }
LAB_18000256f:
      param_1[1] = param_1[1] + 1;
      uVar5 = param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}




void FUN_1800025a0(undefined1 *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    uVar5 = param_2[1];
    puVar6 = (undefined8 *)0x0;
    do {
      param_3 = param_3 + -1;
      if (param_2[2] == 0) {
        puVar2 = FUN_180006a70((undefined8 *)*param_2,uVar5 >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)uVar5 & 0xfff) + 8 + (longlong)puVar2);
        }
        param_2[2] = puVar2;
        param_2[3] = puVar4;
      }
      *param_1 = *(undefined1 *)param_2[3];
      param_1 = param_1 + 1;
      puVar4 = (undefined8 *)param_2[2];
      if (puVar4 == (undefined8 *)0x0) {
        lVar1 = param_2[1];
        puVar2 = FUN_180006a70((undefined8 *)*param_2,lVar1 + 1U >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)(lVar1 + 1U) & 0xfff) + 8 + (longlong)puVar2);
        }
        param_2[2] = puVar2;
        param_2[3] = puVar4;
      }
      else if ((undefined8 *)(param_2[3] + 1) < puVar4 + 0x201) {
        param_2[3] = (undefined8 *)(param_2[3] + 1);
      }
      else {
        lVar1 = ((undefined8 *)*param_2)[1];
        puVar2 = (undefined8 *)*puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(lVar1 + 0x20030);
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar1 + 0x20030) = *puVar2;
            *puVar2 = 0;
            *puVar4 = puVar2;
            param_2[2] = puVar2;
            param_2[3] = puVar2 + 1;
            goto LAB_1800026f2;
          }
          puVar3 = (undefined8 *)operator_new(0x1008);
          puVar2 = puVar6;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar2 = puVar3;
          }
          *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
          *puVar4 = puVar2;
        }
        param_2[2] = puVar2;
        param_2[3] = puVar2 + 1;
      }
LAB_1800026f2:
      param_2[1] = param_2[1] + 1;
      uVar5 = param_2[1];
    } while (param_3 != 0);
  }
  return;
}




undefined8
FUN_180002720(byte *param_1,byte *param_2,undefined8 *param_3,longlong param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte local_res8;
  undefined2 local_res18;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  byte *local_50;
  
  uVar14 = 0;
  local_68 = (undefined8 *)*param_3;
  local_60 = param_3[1];
  local_58 = (undefined8 *)param_3[2];
  local_50 = (byte *)param_3[3];
  if (local_58 == (undefined8 *)0x0) {
    uVar5 = (uint)local_60;
    local_58 = FUN_180006a70(local_68,local_60 >> 0xc);
    if (local_58 == (undefined8 *)0x0) {
      local_50 = (byte *)0x0;
    }
    else {
      local_50 = (byte *)((ulonglong)(uVar5 & 0xfff) + 8 + (longlong)local_58);
    }
  }
  local_res8 = *local_50;
  FUN_180005900(&local_68);
  puVar4 = local_68;
  bVar9 = 0;
  puVar7 = local_58;
  pbVar11 = param_1;
  pbVar12 = local_50;
  uVar15 = local_60;
  if (param_1 < param_2) {
    do {
      if (*(longlong *)(param_4 + 8) <= (longlong)uVar15) break;
      uVar5 = (&DAT_18001ca90)[uVar14];
      while (iVar13 = (int)uVar14, param_1 + uVar5 < pbVar11) {
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar5 = (&DAT_18001ca90)[uVar14];
      }
      uVar5 = (uint)uVar15;
      if ((local_res8 & (byte)(1 << bVar9)) == 0) {
        puVar6 = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
          puVar6 = FUN_180006a70(puVar4,uVar15 >> 0xc);
          if (puVar6 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)(uVar5 & 0xfff) + 8 + (longlong)puVar6);
          }
        }
        *pbVar11 = *pbVar12;
        if (puVar6 == (undefined8 *)0x0) {
          puVar7 = FUN_180006a70(puVar4,uVar15 + 1 >> 0xc);
          if (puVar7 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
            goto LAB_180002922;
          }
          pbVar12 = (byte *)((ulonglong)((uint)(uVar15 + 1) & 0xfff) + 8 + (longlong)puVar7);
          uVar15 = uVar15 + 1;
          pbVar11 = pbVar11 + 1;
        }
        else {
          pbVar12 = pbVar12 + 1;
          puVar7 = puVar6;
          if (pbVar12 < puVar6 + 0x201) {
LAB_180002922:
            uVar15 = uVar15 + 1;
            pbVar11 = pbVar11 + 1;
          }
          else {
            lVar3 = puVar4[1];
            puVar7 = (undefined8 *)*puVar6;
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = *(undefined8 **)(lVar3 + 0x20030);
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar3 + 0x20030) = *puVar7;
                *puVar7 = 0;
                *puVar6 = puVar7;
                pbVar12 = (byte *)(puVar7 + 1);
                uVar15 = uVar15 + 1;
                pbVar11 = pbVar11 + 1;
                goto LAB_180002bdf;
              }
              puVar7 = (undefined8 *)operator_new(0x1008);
              if (puVar7 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                *puVar7 = 0;
              }
              *(longlong *)(lVar3 + 0x20028) = *(longlong *)(lVar3 + 0x20028) + 1;
              *puVar6 = puVar7;
            }
            pbVar12 = (byte *)(puVar7 + 1);
            uVar15 = uVar15 + 1;
            pbVar11 = pbVar11 + 1;
          }
        }
      }
      else {
        if ((longlong)(*(longlong *)(param_4 + 8) - uVar15) < 2) {
          return 0xc0000242;
        }
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = FUN_180006a70(puVar4,uVar15 >> 0xc);
          if (puVar7 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)(uVar5 & 0xfff) + 8 + (longlong)puVar7);
          }
        }
        bVar1 = *pbVar12;
        if (puVar7 == (undefined8 *)0x0) {
          puVar6 = FUN_180006a70(puVar4,uVar15 + 1 >> 0xc);
          if (puVar6 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)((uint)(uVar15 + 1) & 0xfff) + 8 + (longlong)puVar6);
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
          puVar6 = puVar7;
          if (puVar7 + 0x201 <= pbVar12) {
            lVar3 = puVar4[1];
            puVar6 = (undefined8 *)*puVar7;
            if (puVar6 == (undefined8 *)0x0) {
              puVar6 = *(undefined8 **)(lVar3 + 0x20030);
              if (puVar6 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar3 + 0x20030) = *puVar6;
                *puVar6 = 0;
                *puVar7 = puVar6;
                pbVar12 = (byte *)(puVar6 + 1);
                goto LAB_180002a1d;
              }
              puVar6 = (undefined8 *)operator_new(0x1008);
              if (puVar6 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)0x0;
              }
              else {
                *puVar6 = 0;
              }
              *(longlong *)(lVar3 + 0x20028) = *(longlong *)(lVar3 + 0x20028) + 1;
              *puVar7 = puVar6;
            }
            pbVar12 = (byte *)(puVar6 + 1);
          }
        }
LAB_180002a1d:
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = FUN_180006a70(puVar4,uVar15 + 1 >> 0xc);
          if (puVar6 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)(uVar5 + 1 & 0xfff) + 8 + (longlong)puVar6);
          }
        }
        bVar2 = *pbVar12;
        local_res18 = CONCAT11(bVar2,bVar1);
        if (puVar6 == (undefined8 *)0x0) {
          puVar7 = FUN_180006a70(puVar4,uVar15 + 2 >> 0xc);
          if (puVar7 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)((uint)(uVar15 + 2) & 0xfff) + 8 + (longlong)puVar7);
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
          puVar7 = puVar6;
          if (puVar6 + 0x201 <= pbVar12) {
            lVar3 = puVar4[1];
            puVar7 = (undefined8 *)*puVar6;
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = *(undefined8 **)(lVar3 + 0x20030);
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar3 + 0x20030) = *puVar7;
                *puVar7 = 0;
                *puVar6 = puVar7;
                pbVar12 = (byte *)(puVar7 + 1);
                goto LAB_180002b09;
              }
              puVar7 = (undefined8 *)operator_new(0x1008);
              if (puVar7 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                *puVar7 = 0;
              }
              *(longlong *)(lVar3 + 0x20028) = *(longlong *)(lVar3 + 0x20028) + 1;
              *puVar6 = puVar7;
            }
            pbVar12 = (byte *)(puVar7 + 1);
          }
        }
LAB_180002b09:
        uVar15 = uVar15 + 2;
        uVar5 = (uint)local_res18;
        if (iVar13 == 0) {
          uVar8 = (uint)(bVar2 >> 4);
          uVar5 = uVar5 & 0xfff;
        }
        else if (iVar13 == 1) {
          uVar8 = (uint)(bVar2 >> 3);
          uVar5 = uVar5 & 0x7ff;
        }
        else if (iVar13 == 2) {
          uVar8 = (uint)(bVar2 >> 2);
          uVar5 = uVar5 & 0x3ff;
        }
        else if (iVar13 == 3) {
          uVar8 = (uint)(bVar2 >> 1);
          uVar5 = uVar5 & 0x1ff;
        }
        else if (iVar13 == 4) {
          uVar8 = (uint)bVar2;
          uVar5 = (uint)bVar1;
        }
        else if (iVar13 == 5) {
          uVar8 = (uint)(local_res18 >> 7);
          uVar5 = uVar5 & 0x7f;
        }
        else if (iVar13 == 6) {
          uVar8 = (uint)(local_res18 >> 6);
          uVar5 = uVar5 & 0x3f;
        }
        else if (iVar13 == 7) {
          uVar8 = (uint)(local_res18 >> 5);
          uVar5 = uVar5 & 0x1f;
        }
        else {
          uVar8 = (uint)(local_res18 >> 4);
          uVar5 = local_res18 & 0xf;
        }
        uVar10 = (ulonglong)(uVar5 + 3);
        if ((longlong)pbVar11 - (longlong)param_1 <= (longlong)(ulonglong)uVar8) {
          return 0xc0000242;
        }
        if (param_2 <= pbVar11 + uVar10) {
          uVar10 = (ulonglong)(uint)((int)param_2 - (int)pbVar11);
        }
        if (0 < (int)uVar10) {
          do {
            *pbVar11 = pbVar11[-1 - (ulonglong)uVar8];
            uVar5 = (int)uVar10 - 1;
            uVar10 = (ulonglong)uVar5;
            pbVar11 = pbVar11 + 1;
          } while (0 < (int)uVar5);
        }
      }
LAB_180002bdf:
      bVar9 = bVar9 + 1 & 7;
      if (bVar9 == 0) {
        if (*(longlong *)(param_4 + 8) <= (longlong)uVar15) break;
        puVar6 = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
          puVar6 = FUN_180006a70(puVar4,uVar15 >> 0xc);
          if (puVar6 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((ulonglong)((uint)uVar15 & 0xfff) + 8 + (longlong)puVar6);
          }
        }
        local_res8 = *pbVar12;
        if (puVar6 == (undefined8 *)0x0) {
          puVar7 = FUN_180006a70(puVar4,uVar15 + 1 >> 0xc);
          if (puVar7 == (undefined8 *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            pbVar12 = (byte *)((longlong)puVar7 + (ulonglong)((uint)(uVar15 + 1) & 0xfff) + 8);
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
          puVar7 = puVar6;
          if (puVar6 + 0x201 <= pbVar12) {
            lVar3 = puVar4[1];
            puVar7 = (undefined8 *)*puVar6;
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = *(undefined8 **)(lVar3 + 0x20030);
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar3 + 0x20030) = *puVar7;
                *puVar7 = 0;
                *puVar6 = puVar7;
                pbVar12 = (byte *)(puVar7 + 1);
                goto LAB_180002ce1;
              }
              puVar7 = (undefined8 *)operator_new(0x1008);
              if (puVar7 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                *puVar7 = 0;
              }
              *(longlong *)(lVar3 + 0x20028) = *(longlong *)(lVar3 + 0x20028) + 1;
              *puVar6 = puVar7;
            }
            pbVar12 = (byte *)(puVar7 + 1);
          }
        }
LAB_180002ce1:
        uVar15 = uVar15 + 1;
      }
    } while (pbVar11 < param_2);
  }
  *param_5 = (int)pbVar11 - (int)param_1;
  return 0;
}




undefined8
FUN_180002d20(undefined1 param_1,int param_2,undefined8 *param_3,longlong param_4,int *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  puVar5 = (undefined8 *)param_3[2];
  bVar4 = false;
  if (puVar5 == (undefined8 *)0x0) {
LAB_180002db8:
    bVar4 = true;
    puVar7 = (undefined8 *)param_3[3];
  }
  else {
    puVar1 = puVar5 + 0x201;
    puVar7 = (undefined8 *)param_3[3] + 0x200;
    if (puVar7 < puVar5 + 1) {
      if (puVar7 < puVar1) goto LAB_180002db8;
    }
    else if (puVar7 < puVar1) goto LAB_180002dbe;
    puVar5 = (undefined8 *)
             FUN_180007040((longlong)puVar2,puVar5,
                           (ulonglong)((longlong)puVar7 - (longlong)puVar1) >> 0xc);
    puVar7 = (undefined8 *)(((longlong)puVar7 - (longlong)puVar1 & 0xfffU) + 8 + (longlong)puVar5);
  }
LAB_180002dbe:
  if (bVar4) {
    puVar5 = FUN_180006a70(puVar2,lVar3 + 0x1000U >> 0xc);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)((lVar3 + 0x1000U & 0xfff) + 8 + (longlong)puVar5);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
LAB_180002e25:
    FUN_180006a70(puVar2,lVar3 + 0x1002U >> 0xc);
  }
  else {
    puVar1 = puVar5 + 0x201;
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    if (puVar7 < puVar5 + 1) {
      if (puVar7 < puVar1) goto LAB_180002e25;
    }
    else if (puVar7 < puVar1) goto LAB_180002e38;
    FUN_180007040((longlong)puVar2,puVar5,(ulonglong)((longlong)puVar7 - (longlong)puVar1) >> 0xc);
  }
LAB_180002e38:
  if ((lVar3 + 0x1002 < *(longlong *)(param_4 + 8)) ||
     (lVar3 + 0x1002 == *(longlong *)(param_4 + 8))) {
    *param_5 = param_2 + 2;
    local_50 = *param_3;
    local_48 = param_3[1];
    local_40 = param_3[2];
    local_38 = param_3[3];
    FUN_1800059f0(&local_50,2);
    FUN_180002f30(&local_50,param_1,*param_5 + -2);
    local_50 = *param_3;
    local_48 = param_3[1];
    local_40 = param_3[2];
    local_38 = param_3[3];
    FUN_180003170(&local_50,(short)*param_5 - 3U & 0xfff | 0x3000);
    uVar6 = 0;
  }
  else {
    uVar6 = 0xc0000023;
  }
  return uVar6;
}




void FUN_180002f30(undefined8 *param_1,undefined1 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    uVar5 = param_1[1];
    puVar6 = (undefined8 *)0x0;
    do {
      param_3 = param_3 + -1;
      if (param_1[2] == 0) {
        puVar2 = FUN_180006a70((undefined8 *)*param_1,uVar5 >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)uVar5 & 0xfff) + 8 + (longlong)puVar2);
        }
        param_1[2] = puVar2;
        param_1[3] = puVar4;
      }
      *(undefined1 *)param_1[3] = param_2;
      puVar4 = (undefined8 *)param_1[2];
      if (puVar4 == (undefined8 *)0x0) {
        lVar1 = param_1[1];
        puVar2 = FUN_180006a70((undefined8 *)*param_1,lVar1 + 1U >> 0xc);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)((ulonglong)((uint)(lVar1 + 1U) & 0xfff) + 8 + (longlong)puVar2);
        }
        param_1[2] = puVar2;
        param_1[3] = puVar4;
      }
      else if ((undefined8 *)(param_1[3] + 1) < puVar4 + 0x201) {
        param_1[3] = (undefined8 *)(param_1[3] + 1);
      }
      else {
        lVar1 = ((undefined8 *)*param_1)[1];
        puVar2 = (undefined8 *)*puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(lVar1 + 0x20030);
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar1 + 0x20030) = *puVar2;
            *puVar2 = 0;
            *puVar4 = puVar2;
            param_1[2] = puVar2;
            param_1[3] = puVar2 + 1;
            goto LAB_18000307c;
          }
          puVar3 = (undefined8 *)operator_new(0x1008);
          puVar2 = puVar6;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar2 = puVar3;
          }
          *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
          *puVar4 = puVar2;
        }
        param_1[2] = puVar2;
        param_1[3] = puVar2 + 1;
      }
LAB_18000307c:
      param_1[1] = param_1[1] + 1;
      uVar5 = param_1[1];
    } while (param_3 != 0);
  }
  return;
}




void FUN_1800030b0(undefined1 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (param_2[2] == 0) {
    uVar1 = param_2[1];
    puVar2 = FUN_180006a70((undefined8 *)*param_2,uVar1 >> 0xc);
    lVar4 = lVar5;
    if (puVar2 != (undefined8 *)0x0) {
      lVar4 = (ulonglong)((uint)uVar1 & 0xfff) + 8 + (longlong)puVar2;
    }
    param_2[2] = puVar2;
    param_2[3] = lVar4;
  }
  *param_1 = *(undefined1 *)param_2[3];
  puVar2 = FUN_180005900(param_2);
  if (puVar2[2] == 0) {
    uVar1 = puVar2[1];
    puVar3 = FUN_180006a70((undefined8 *)*puVar2,uVar1 >> 0xc);
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = (ulonglong)((uint)uVar1 & 0xfff) + 8 + (longlong)puVar3;
    }
    puVar2[2] = puVar3;
    puVar2[3] = lVar5;
  }
  param_1[1] = *(undefined1 *)puVar2[3];
  return;
}




void FUN_180003170(undefined8 *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uStackX_11;
  
  puVar5 = (undefined1 *)0x0;
  if (param_1[2] == 0) {
    uVar1 = param_1[1];
    puVar2 = FUN_180006a70((undefined8 *)*param_1,uVar1 >> 0xc);
    puVar4 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined1 *)((ulonglong)((uint)uVar1 & 0xfff) + 8 + (longlong)puVar2);
    }
    param_1[2] = puVar2;
    param_1[3] = puVar4;
  }
  *(char *)param_1[3] = (char)param_2;
  puVar2 = FUN_180005900(param_1);
  uStackX_11 = (undefined1)((ushort)param_2 >> 8);
  if (puVar2[2] != 0) {
    *(undefined1 *)puVar2[3] = uStackX_11;
    return;
  }
  uVar1 = puVar2[1];
  puVar3 = FUN_180006a70((undefined8 *)*puVar2,uVar1 >> 0xc);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined1 *)((ulonglong)((uint)uVar1 & 0xfff) + 8 + (longlong)puVar3);
  }
  puVar2[2] = puVar3;
  puVar2[3] = puVar5;
  *puVar5 = uStackX_11;
  return;
}




void FUN_180003250(byte *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,int *param_5)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  longlong lVar11;
  uint uVar12;
  byte *pbVar13;
  short sVar14;
  ushort uVar15;
  byte *pbVar16;
  undefined1 auStackY_1e8 [32];
  byte local_1b8;
  undefined8 *local_1b0;
  ulonglong uStack_1a8;
  byte *local_1a0;
  byte *pbStack_198;
  byte local_190;
  byte local_18f;
  byte *local_188;
  undefined8 local_180;
  longlong lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  byte *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  byte *local_130;
  undefined8 *local_128;
  int *local_120;
  byte *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  byte *local_e8;
  undefined8 local_e0;
  byte *local_d8;
  undefined8 local_d0;
  byte local_c8 [128];
  ulonglong local_48;
  
  local_e0 = 0xfffffffffffffffe;
  local_48 = DAT_18002c018 ^ (ulonglong)auStackY_1e8;
  local_120 = param_5;
  local_180 = 0;
  lStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_1b0 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  local_1a0 = (byte *)0x0;
  pbStack_198 = (byte *)0x0;
  local_188 = (byte *)&local_110;
  local_138 = &local_158;
  local_110 = *param_4;
  local_108 = param_4[1];
  local_100 = param_4[2];
  local_f8 = param_4[3];
  local_158 = *param_3;
  local_150 = param_3[1];
  local_148 = param_3[2];
  local_140 = param_3[3];
  local_160 = param_2;
  local_128 = param_3;
  local_118 = param_1;
  local_f0 = param_4;
  FUN_180001000((longlong)param_1,(ulonglong *)&local_160,&local_158,&local_110,&local_180);
  puVar3 = (undefined8 *)*param_3;
  lVar11 = param_3[1];
  pbVar10 = (byte *)param_3[2];
  pbVar13 = (byte *)0x0;
  local_188 = param_1;
  if (pbVar10 == (byte *)0x0) {
LAB_18000339b:
    uVar7 = lVar11 + 2;
    pbVar10 = (byte *)FUN_180006a70(puVar3,uVar7 >> 0xc);
    pbVar8 = pbVar13;
    if (pbVar10 != (byte *)0x0) {
      pbVar8 = pbVar10 + (uVar7 & 0xfff) + 8;
    }
  }
  else {
    pbVar2 = pbVar10 + 0x1008;
    pbVar8 = (byte *)(param_3[3] + 2);
    if (pbVar8 < pbVar10 + 8) {
      if (pbVar8 < pbVar2) goto LAB_18000339b;
    }
    else if (pbVar8 < pbVar2) goto LAB_1800033c5;
    pbVar10 = (byte *)FUN_180007040((longlong)puVar3,(undefined8 *)pbVar10,
                                    (ulonglong)((longlong)pbVar8 - (longlong)pbVar2) >> 0xc);
    pbVar8 = pbVar10 + ((longlong)pbVar8 - (longlong)pbVar2 & 0xfffU) + 8;
  }
LAB_1800033c5:
  uVar7 = lVar11 + 2;
  bVar9 = 0xff;
  pbVar2 = (byte *)0x0;
  uVar12 = 0;
  local_1b0 = puVar3;
  uStack_1a8 = uVar7;
  local_1a0 = pbVar10;
  pbStack_198 = pbVar8;
  memset(local_c8,0,0x7f);
  if (local_118 < local_160) {
    do {
      local_190 = *local_188;
      local_188 = local_188 + 1;
      local_18f = bVar9 & local_190;
      sVar14 = (short)pbVar2;
      uVar15 = (ushort)uVar12;
      lVar11 = lStack_178;
      if (sVar14 == 0) {
        if (uVar15 == 0) {
          uVar12 = 1;
          local_1b8 = local_190;
        }
        else if (local_1b8 == local_190) {
          uVar12 = (uint)(ushort)(uVar15 + 1);
          if ((ushort)(uVar15 + 1) == 0x7f) {
            if (pbVar10 == (byte *)0x0) {
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar8 = pbVar13;
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar8 = local_1a0 + (uVar7 & 0xfff) + 8;
                pbStack_198 = local_1a0 + (uVar7 & 0xfff) + 8;
              }
            }
            *pbVar8 = 0xff;
            puVar3 = FUN_180005900(&local_1b0);
            lVar11 = lStack_178;
            uVar7 = uStack_1a8;
            if (lStack_178 <= (longlong)puVar3[1]) goto LAB_1800042d8;
            if (local_1a0 == (byte *)0x0) {
              uVar7 = uStack_1a8 & 0xfff;
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
              if (local_1a0 == (byte *)0x0) {
                pbStack_198 = (byte *)0x0;
              }
              else {
                pbStack_198 = local_1a0 + uVar7 + 8;
              }
            }
            *pbStack_198 = local_1b8;
            puVar3 = FUN_180005900(&local_1b0);
            uVar7 = uStack_1a8;
            if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
            uVar12 = 0;
            pbVar8 = pbStack_198;
            pbVar10 = local_1a0;
          }
        }
        else {
          if (2 < uVar15) {
            if (pbVar10 == (byte *)0x0) {
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar8 = pbVar13;
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar8 = local_1a0 + (uVar7 & 0xfff) + 8;
                pbStack_198 = local_1a0 + (uVar7 & 0xfff) + 8;
              }
            }
            *pbVar8 = (byte)uVar12 | 0x80;
            puVar3 = FUN_180005900(&local_1b0);
            lVar11 = lStack_178;
            uVar7 = uStack_1a8;
            if ((longlong)puVar3[1] < lStack_178) {
              if (local_1a0 == (byte *)0x0) {
                uVar7 = uStack_1a8 & 0xfff;
                local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
                if (local_1a0 == (byte *)0x0) {
                  pbStack_198 = (byte *)0x0;
                }
                else {
                  pbStack_198 = local_1a0 + uVar7 + 8;
                }
              }
              *pbStack_198 = local_1b8;
              puVar3 = FUN_180005900(&local_1b0);
              uVar7 = uStack_1a8;
              if ((longlong)puVar3[1] < lVar11) goto LAB_180003f50;
            }
            goto LAB_1800042d8;
          }
          local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffff00000000);
          pbVar16 = pbVar13;
          if (uVar12 != 0) {
            do {
              local_c8[(longlong)pbVar2] = local_1b8;
              uVar15 = (short)pbVar2 + 1;
              pbVar2 = (byte *)(ulonglong)uVar15;
              iVar6 = (int)pbVar16;
              if (uVar15 == 0x7f) {
                if (pbVar10 == (byte *)0x0) {
                  local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
                  pbVar8 = pbVar13;
                  pbStack_198 = pbVar13;
                  if (local_1a0 != (byte *)0x0) {
                    pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
                    pbStack_198 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
                  }
                }
                *pbVar8 = 0x7f;
                puVar3 = FUN_180005900(&local_1b0);
                uVar7 = uStack_1a8;
                pbVar10 = pbVar13;
                if (lStack_178 <= (longlong)puVar3[1]) goto LAB_1800042d8;
                do {
                  if (local_1a0 == (byte *)0x0) {
                    uVar4 = (uint)uStack_1a8;
                    local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
                    pbStack_198 = pbVar13;
                    if (local_1a0 != (byte *)0x0) {
                      pbStack_198 = local_1a0 + (ulonglong)(uVar4 & 0xfff) + 8;
                    }
                  }
                  pbVar2 = local_1a0;
                  *pbStack_198 = local_c8[(longlong)pbVar10];
                  if (local_1a0 == (byte *)0x0) {
                    uVar7 = uStack_1a8 + 1;
                    local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
                    pbVar8 = pbVar13;
                    if (local_1a0 != (byte *)0x0) {
                      pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
                    }
                  }
                  else {
                    pbVar8 = pbStack_198 + 1;
                    if (local_1a0 + 0x1008 <= pbStack_198 + 1) {
                      lVar11 = local_1b0[1];
                      pbVar16 = *(byte **)local_1a0;
                      if (pbVar16 == (byte *)0x0) {
                        pbVar16 = *(byte **)(lVar11 + 0x20030);
                        if (pbVar16 != (byte *)0x0) {
                          *(undefined8 *)(lVar11 + 0x20030) = *(undefined8 *)pbVar16;
                          pbVar16[0] = 0;
                          pbVar16[1] = 0;
                          pbVar16[2] = 0;
                          pbVar16[3] = 0;
                          pbVar16[4] = 0;
                          pbVar16[5] = 0;
                          pbVar16[6] = 0;
                          pbVar16[7] = 0;
                          *(byte **)local_1a0 = pbVar16;
                          pbVar8 = pbVar16 + 8;
                          local_1a0 = pbVar16;
                          goto LAB_1800037cb;
                        }
                        local_d8 = (byte *)operator_new(0x1008);
                        pbVar16 = pbVar13;
                        if (local_d8 != (byte *)0x0) {
                          local_d8[0] = 0;
                          local_d8[1] = 0;
                          local_d8[2] = 0;
                          local_d8[3] = 0;
                          local_d8[4] = 0;
                          local_d8[5] = 0;
                          local_d8[6] = 0;
                          local_d8[7] = 0;
                          pbVar16 = local_d8;
                        }
                        *(longlong *)(lVar11 + 0x20028) = *(longlong *)(lVar11 + 0x20028) + 1;
                        *(byte **)pbVar2 = pbVar16;
                      }
                      pbVar8 = pbVar16 + 8;
                      local_1a0 = pbVar16;
                    }
                  }
LAB_1800037cb:
                  uVar7 = uStack_1a8 + 1;
                  uStack_1a8 = uVar7;
                  pbStack_198 = pbVar8;
                  if (lStack_178 <= (longlong)uVar7) goto LAB_1800042d8;
                  pbVar10 = pbVar10 + 1;
                } while ((longlong)pbVar10 < 0x7f);
                pbVar10 = local_1a0;
                pbVar2 = pbVar13;
                iVar6 = (int)local_138;
              }
              uVar4 = iVar6 + 1;
              pbVar16 = (byte *)(ulonglong)uVar4;
              local_138 = (undefined8 *)CONCAT44(local_138._4_4_,uVar4);
            } while ((int)uVar4 < (int)uVar12);
          }
          uVar12 = 0;
          local_c8[(longlong)pbVar2] = local_190;
          uVar15 = (short)pbVar2 + 1;
          pbVar2 = (byte *)(ulonglong)uVar15;
          lVar11 = lStack_178;
          if (uVar15 == 0x7f) {
            if (pbVar10 == (byte *)0x0) {
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar8 = pbVar13;
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
                pbStack_198 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
              }
            }
            *pbVar8 = 0x7f;
            puVar3 = FUN_180005900(&local_1b0);
            uVar7 = uStack_1a8;
            pbVar10 = pbVar13;
            if (lStack_178 <= (longlong)puVar3[1]) goto LAB_1800042d8;
            do {
              if (local_1a0 == (byte *)0x0) {
                uVar4 = (uint)uStack_1a8;
                local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
                pbStack_198 = pbVar13;
                if (local_1a0 != (byte *)0x0) {
                  pbStack_198 = local_1a0 + (ulonglong)(uVar4 & 0xfff) + 8;
                }
              }
              pbVar2 = local_1a0;
              *pbStack_198 = local_c8[(longlong)pbVar10];
              if (local_1a0 == (byte *)0x0) {
                uVar7 = uStack_1a8 + 1;
                local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
                pbVar8 = pbVar13;
                if (local_1a0 != (byte *)0x0) {
                  pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
                }
              }
              else {
                pbVar8 = pbStack_198 + 1;
                if (local_1a0 + 0x1008 <= pbStack_198 + 1) {
                  lVar11 = local_1b0[1];
                  pbVar16 = *(byte **)local_1a0;
                  if (pbVar16 == (byte *)0x0) {
                    pbVar16 = *(byte **)(lVar11 + 0x20030);
                    if (pbVar16 != (byte *)0x0) {
                      *(undefined8 *)(lVar11 + 0x20030) = *(undefined8 *)pbVar16;
                      pbVar16[0] = 0;
                      pbVar16[1] = 0;
                      pbVar16[2] = 0;
                      pbVar16[3] = 0;
                      pbVar16[4] = 0;
                      pbVar16[5] = 0;
                      pbVar16[6] = 0;
                      pbVar16[7] = 0;
                      *(byte **)local_1a0 = pbVar16;
                      pbVar8 = pbVar16 + 8;
                      local_1a0 = pbVar16;
                      goto LAB_1800039b4;
                    }
                    local_d0 = (byte *)operator_new(0x1008);
                    pbVar16 = pbVar13;
                    if (local_d0 != (byte *)0x0) {
                      local_d0[0] = 0;
                      local_d0[1] = 0;
                      local_d0[2] = 0;
                      local_d0[3] = 0;
                      local_d0[4] = 0;
                      local_d0[5] = 0;
                      local_d0[6] = 0;
                      local_d0[7] = 0;
                      pbVar16 = local_d0;
                    }
                    *(longlong *)(lVar11 + 0x20028) = *(longlong *)(lVar11 + 0x20028) + 1;
                    *(byte **)pbVar2 = pbVar16;
                  }
                  pbVar8 = pbVar16 + 8;
                  local_1a0 = pbVar16;
                }
              }
LAB_1800039b4:
              uStack_1a8 = uStack_1a8 + 1;
              uVar7 = uStack_1a8;
              pbStack_198 = pbVar8;
              if (lStack_178 <= (longlong)uStack_1a8) goto LAB_1800042d8;
              pbVar10 = pbVar10 + 1;
            } while ((longlong)pbVar10 < 0x7f);
            pbVar2 = (byte *)0x0;
            pbVar10 = local_1a0;
            lVar11 = lStack_178;
          }
        }
      }
      else if (uVar15 == 0) {
        if (pbVar2[(longlong)&local_d0 + 7] == local_190) {
          uVar12 = 2;
          pbVar2 = (byte *)(ulonglong)(ushort)(sVar14 - 1);
          local_1b8 = local_190;
        }
        else {
          local_c8[(longlong)pbVar2] = local_190;
          pbVar2 = (byte *)(ulonglong)(ushort)(sVar14 + 1U);
          if ((ushort)(sVar14 + 1U) == 0x7f) {
            if (pbVar10 == (byte *)0x0) {
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar8 = pbVar13;
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar8 = local_1a0 + (uVar7 & 0xfff) + 8;
                pbStack_198 = local_1a0 + (uVar7 & 0xfff) + 8;
              }
            }
            *pbVar8 = 0x7f;
            puVar3 = FUN_180005900(&local_1b0);
            lVar11 = lStack_178;
            uVar7 = uStack_1a8;
            pbVar10 = pbVar13;
            if ((longlong)puVar3[1] < lStack_178) {
              do {
                if (local_1a0 == (byte *)0x0) {
                  uVar7 = uStack_1a8 & 0xfff;
                  local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
                  if (local_1a0 == (byte *)0x0) {
                    pbStack_198 = (byte *)0x0;
                  }
                  else {
                    pbStack_198 = local_1a0 + uVar7 + 8;
                  }
                }
                *pbStack_198 = local_c8[(longlong)pbVar10];
                puVar3 = FUN_180005900(&local_1b0);
                uVar7 = uStack_1a8;
                if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
                pbVar10 = pbVar10 + 1;
              } while ((longlong)pbVar10 < 0x7f);
              goto LAB_180003c16;
            }
            goto LAB_1800042d8;
          }
        }
      }
      else if (local_1b8 == local_190) {
        uVar12 = (uint)(ushort)(uVar15 + 1);
        if ((ushort)(uVar15 + 1) == 0x7f) {
          if (pbVar10 == (byte *)0x0) {
            local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
            pbVar8 = pbVar13;
            pbStack_198 = pbVar13;
            if (local_1a0 != (byte *)0x0) {
              pbVar8 = local_1a0 + (uVar7 & 0xfff) + 8;
              pbStack_198 = local_1a0 + (uVar7 & 0xfff) + 8;
            }
          }
          *pbVar8 = (byte)pbVar2;
          puVar3 = FUN_180005900(&local_1b0);
          lVar11 = lStack_178;
          uVar7 = uStack_1a8;
          if (lStack_178 <= (longlong)puVar3[1]) goto LAB_1800042d8;
          pbVar10 = pbVar13;
          if (pbVar2 != (byte *)0x0) {
            do {
              if (local_1a0 == (byte *)0x0) {
                uVar7 = uStack_1a8 & 0xfff;
                local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
                if (local_1a0 == (byte *)0x0) {
                  pbStack_198 = (byte *)0x0;
                }
                else {
                  pbStack_198 = local_1a0 + uVar7 + 8;
                }
              }
              *pbStack_198 = local_c8[(longlong)pbVar10];
              puVar3 = FUN_180005900(&local_1b0);
              uVar7 = uStack_1a8;
              if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
              pbVar10 = pbVar10 + 1;
            } while ((longlong)pbVar10 < (longlong)pbVar2);
          }
          if (local_1a0 == (byte *)0x0) {
            uVar7 = uStack_1a8 & 0xfff;
            local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
            if (local_1a0 == (byte *)0x0) {
              pbStack_198 = (byte *)0x0;
            }
            else {
              pbStack_198 = local_1a0 + uVar7 + 8;
            }
          }
          *pbStack_198 = 0xff;
          puVar3 = FUN_180005900(&local_1b0);
          uVar7 = uStack_1a8;
          if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
          if (local_1a0 == (byte *)0x0) {
            uVar7 = uStack_1a8 & 0xfff;
            local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
            if (local_1a0 == (byte *)0x0) {
              pbStack_198 = (byte *)0x0;
            }
            else {
              pbStack_198 = local_1a0 + uVar7 + 8;
            }
          }
          *pbStack_198 = local_1b8;
          puVar3 = FUN_180005900(&local_1b0);
          uVar7 = uStack_1a8;
          if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
          uVar12 = 0;
LAB_180003c16:
          pbVar2 = (byte *)0x0;
          uVar7 = uStack_1a8;
          pbVar8 = pbStack_198;
          pbVar10 = local_1a0;
        }
      }
      else {
        if (pbVar10 == (byte *)0x0) {
          local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
          pbVar8 = pbVar13;
          pbStack_198 = pbVar13;
          if (local_1a0 != (byte *)0x0) {
            pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
            pbStack_198 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
          }
        }
        *pbVar8 = (byte)pbVar2;
        puVar3 = FUN_180005900(&local_1b0);
        lVar11 = lStack_178;
        uVar7 = uStack_1a8;
        if (lStack_178 <= (longlong)puVar3[1]) goto LAB_1800042d8;
        pbVar10 = pbVar13;
        if (pbVar2 != (byte *)0x0) {
          do {
            if (local_1a0 == (byte *)0x0) {
              uVar7 = uStack_1a8 & 0xfff;
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbStack_198 = local_1a0 + uVar7 + 8;
              }
            }
            pbVar8 = local_1a0;
            *pbStack_198 = local_c8[(longlong)pbVar10];
            if (local_1a0 == (byte *)0x0) {
              uVar7 = uStack_1a8 + 1;
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar16 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar16 = local_1a0 + (uVar7 & 0xfff) + 8;
              }
            }
            else {
              pbVar16 = pbStack_198 + 1;
              if (local_1a0 + 0x1008 <= pbStack_198 + 1) {
                lVar1 = local_1b0[1];
                pbVar5 = *(byte **)local_1a0;
                if (pbVar5 == (byte *)0x0) {
                  pbVar5 = *(byte **)(lVar1 + 0x20030);
                  if (pbVar5 != (byte *)0x0) {
                    *(undefined8 *)(lVar1 + 0x20030) = *(undefined8 *)pbVar5;
                    pbVar5[0] = 0;
                    pbVar5[1] = 0;
                    pbVar5[2] = 0;
                    pbVar5[3] = 0;
                    pbVar5[4] = 0;
                    pbVar5[5] = 0;
                    pbVar5[6] = 0;
                    pbVar5[7] = 0;
                    *(byte **)local_1a0 = pbVar5;
                    pbVar16 = pbVar5 + 8;
                    local_1a0 = pbVar5;
                    goto LAB_180003dba;
                  }
                  local_e8 = (byte *)operator_new(0x1008);
                  pbVar5 = pbVar13;
                  if (local_e8 != (byte *)0x0) {
                    local_e8[0] = 0;
                    local_e8[1] = 0;
                    local_e8[2] = 0;
                    local_e8[3] = 0;
                    local_e8[4] = 0;
                    local_e8[5] = 0;
                    local_e8[6] = 0;
                    local_e8[7] = 0;
                    pbVar5 = local_e8;
                  }
                  *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
                  *(byte **)pbVar8 = pbVar5;
                }
                pbVar16 = pbVar5 + 8;
                local_1a0 = pbVar5;
              }
            }
LAB_180003dba:
            uStack_1a8 = uStack_1a8 + 1;
            uVar7 = uStack_1a8;
            pbStack_198 = pbVar16;
            if (lVar11 <= (longlong)uStack_1a8) goto LAB_1800042d8;
            pbVar10 = pbVar10 + 1;
          } while ((longlong)pbVar10 < (longlong)pbVar2);
        }
        if (local_1a0 == (byte *)0x0) {
          uVar7 = uStack_1a8 & 0xfff;
          local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
          pbStack_198 = pbVar13;
          if (local_1a0 != (byte *)0x0) {
            pbStack_198 = local_1a0 + uVar7 + 8;
          }
        }
        pbVar10 = local_1a0;
        *pbStack_198 = (byte)uVar12 | 0x80;
        if (local_1a0 == (byte *)0x0) {
          uVar7 = uStack_1a8 + 1;
          local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
          pbVar2 = pbVar13;
          if (local_1a0 != (byte *)0x0) {
            pbVar2 = local_1a0 + (uVar7 & 0xfff) + 8;
          }
        }
        else {
          pbVar2 = pbStack_198 + 1;
          if (local_1a0 + 0x1008 <= pbVar2) {
            lVar1 = local_1b0[1];
            pbVar8 = *(byte **)local_1a0;
            if (pbVar8 == (byte *)0x0) {
              pbVar8 = *(byte **)(lVar1 + 0x20030);
              if (pbVar8 == (byte *)0x0) {
                local_130 = (byte *)operator_new(0x1008);
                pbVar8 = pbVar13;
                if (local_130 != (byte *)0x0) {
                  local_130[0] = 0;
                  local_130[1] = 0;
                  local_130[2] = 0;
                  local_130[3] = 0;
                  local_130[4] = 0;
                  local_130[5] = 0;
                  local_130[6] = 0;
                  local_130[7] = 0;
                  pbVar8 = local_130;
                }
                *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
              }
              else {
                *(undefined8 *)(lVar1 + 0x20030) = *(undefined8 *)pbVar8;
                pbVar8[0] = 0;
                pbVar8[1] = 0;
                pbVar8[2] = 0;
                pbVar8[3] = 0;
                pbVar8[4] = 0;
                pbVar8[5] = 0;
                pbVar8[6] = 0;
                pbVar8[7] = 0;
              }
              *(byte **)pbVar10 = pbVar8;
            }
            pbVar2 = pbVar8 + 8;
            local_1a0 = pbVar8;
          }
        }
        uStack_1a8 = uStack_1a8 + 1;
        uVar7 = uStack_1a8;
        pbStack_198 = pbVar2;
        if (lVar11 <= (longlong)uStack_1a8) goto LAB_1800042d8;
        if (local_1a0 == (byte *)0x0) {
          uVar7 = uStack_1a8 & 0xfff;
          local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
          pbStack_198 = pbVar13;
          if (local_1a0 != (byte *)0x0) {
            pbStack_198 = local_1a0 + uVar7 + 8;
          }
        }
        *pbStack_198 = local_1b8;
        puVar3 = FUN_180005900(&local_1b0);
        uVar7 = uStack_1a8;
        if (lVar11 <= (longlong)puVar3[1]) goto LAB_1800042d8;
        pbVar2 = (byte *)0x0;
LAB_180003f50:
        uVar12 = 1;
        uVar7 = uStack_1a8;
        pbVar8 = pbStack_198;
        pbVar10 = local_1a0;
        local_1b8 = local_190;
      }
      bVar9 = local_18f;
    } while (local_188 < local_160);
    if ((short)pbVar2 == 0) {
LAB_180004216:
      if ((short)uVar12 != 0) {
        if (pbVar10 == (byte *)0x0) {
          local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
          pbVar8 = pbVar13;
          pbStack_198 = pbVar13;
          if (local_1a0 != (byte *)0x0) {
            pbVar8 = local_1a0 + (uVar7 & 0xfff) + 8;
            pbStack_198 = local_1a0 + (uVar7 & 0xfff) + 8;
          }
        }
        *pbVar8 = (byte)uVar12 | 0x80;
        puVar3 = FUN_180005900(&local_1b0);
        uVar7 = uStack_1a8;
        if ((longlong)puVar3[1] < lStack_178) {
          if (local_1a0 == (byte *)0x0) {
            uVar7 = uStack_1a8 & 0xfff;
            local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
            if (local_1a0 == (byte *)0x0) {
              pbStack_198 = (byte *)0x0;
            }
            else {
              pbStack_198 = local_1a0 + uVar7 + 8;
            }
          }
          *pbStack_198 = local_1b8;
          FUN_180005900(&local_1b0);
          uVar7 = uStack_1a8;
        }
      }
    }
    else {
      if (pbVar10 == (byte *)0x0) {
        local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
        pbVar8 = pbVar13;
        pbStack_198 = pbVar13;
        if (local_1a0 != (byte *)0x0) {
          pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
          pbStack_198 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
        }
      }
      *pbVar8 = (byte)pbVar2;
      puVar3 = FUN_180005900(&local_1b0);
      uVar7 = uStack_1a8;
      if ((longlong)puVar3[1] < lVar11) {
        pbVar8 = pbStack_198;
        pbVar10 = local_1a0;
        pbVar16 = pbVar13;
        if (pbVar2 != (byte *)0x0) {
          do {
            if (local_1a0 == (byte *)0x0) {
              uVar4 = (uint)uStack_1a8;
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uStack_1a8 >> 0xc);
              pbStack_198 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbStack_198 = local_1a0 + (ulonglong)(uVar4 & 0xfff) + 8;
              }
            }
            pbVar10 = local_1a0;
            *pbStack_198 = local_c8[(longlong)pbVar16];
            if (local_1a0 == (byte *)0x0) {
              uVar7 = uStack_1a8 + 1;
              local_1a0 = (byte *)FUN_180006a70(local_1b0,uVar7 >> 0xc);
              pbVar8 = pbVar13;
              if (local_1a0 != (byte *)0x0) {
                pbVar8 = local_1a0 + (ulonglong)((uint)uVar7 & 0xfff) + 8;
              }
            }
            else {
              pbVar8 = pbStack_198 + 1;
              if (local_1a0 + 0x1008 <= pbStack_198 + 1) {
                lVar11 = local_1b0[1];
                pbVar5 = *(byte **)local_1a0;
                if (pbVar5 == (byte *)0x0) {
                  pbVar5 = *(byte **)(lVar11 + 0x20030);
                  if (pbVar5 != (byte *)0x0) {
                    *(undefined8 *)(lVar11 + 0x20030) = *(undefined8 *)pbVar5;
                    pbVar5[0] = 0;
                    pbVar5[1] = 0;
                    pbVar5[2] = 0;
                    pbVar5[3] = 0;
                    pbVar5[4] = 0;
                    pbVar5[5] = 0;
                    pbVar5[6] = 0;
                    pbVar5[7] = 0;
                    *(byte **)local_1a0 = pbVar5;
                    pbVar8 = pbVar5 + 8;
                    local_1a0 = pbVar5;
                    goto LAB_1800041ed;
                  }
                  local_130 = (byte *)operator_new(0x1008);
                  pbVar5 = pbVar13;
                  if (local_130 != (byte *)0x0) {
                    local_130[0] = 0;
                    local_130[1] = 0;
                    local_130[2] = 0;
                    local_130[3] = 0;
                    local_130[4] = 0;
                    local_130[5] = 0;
                    local_130[6] = 0;
                    local_130[7] = 0;
                    pbVar5 = local_130;
                  }
                  *(longlong *)(lVar11 + 0x20028) = *(longlong *)(lVar11 + 0x20028) + 1;
                  *(byte **)pbVar10 = pbVar5;
                }
                pbVar8 = pbVar5 + 8;
                local_1a0 = pbVar5;
              }
            }
LAB_1800041ed:
            uVar7 = uStack_1a8 + 1;
            uStack_1a8 = uVar7;
            pbStack_198 = pbVar8;
            if (lStack_178 <= (longlong)uVar7) goto LAB_1800042d8;
            pbVar16 = pbVar16 + 1;
            pbVar10 = local_1a0;
          } while ((longlong)pbVar16 < (longlong)pbVar2);
        }
        goto LAB_180004216;
      }
    }
LAB_1800042d8:
    if (local_160 <= local_188) goto LAB_1800042e3;
  }
  else {
LAB_1800042e3:
    if ((longlong)uVar7 < lStack_178) {
      iVar6 = (int)uVar7 - *(int *)(local_128 + 1);
      *local_120 = iVar6;
      local_130 = (byte *)&local_158;
      local_158 = *local_128;
      local_150 = local_128[1];
      local_148 = local_128[2];
      local_140 = local_128[3];
      FUN_180003170(&local_158,(short)iVar6 - 3U & 0xfff | 0xb000);
      goto LAB_1800043c4;
    }
  }
  local_130 = (byte *)&local_158;
  local_e8 = (byte *)&local_110;
  local_158 = *local_f0;
  local_150 = local_f0[1];
  local_148 = local_f0[2];
  local_140 = local_f0[3];
  local_110 = *local_128;
  local_108 = local_128[1];
  local_100 = local_128[2];
  local_f8 = local_128[3];
  FUN_180002210(local_118,(int)local_160,&local_110,(longlong)&local_158,local_120);
LAB_1800043c4:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1e8);
  return;
}




undefined8
FUN_1800043f0(undefined1 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             short *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong local_res20;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  param_5[0] = 0x44;
  param_5[1] = 0;
  local_60 = (undefined8 *)*param_3;
  local_58 = param_3[1];
  local_50 = (undefined8 *)param_3[2];
  local_48 = (undefined8 *)param_3[3];
  FUN_1800059f0(&local_60,0x44);
  if (((longlong)*(ulonglong *)(param_4 + 8) <= (longlong)local_58) &&
     (local_58 != *(ulonglong *)(param_4 + 8))) {
    return 0xc0000023;
  }
  puVar1 = (undefined8 *)*param_3;
  lVar2 = param_3[1];
  puVar3 = (undefined8 *)param_3[2];
  puVar5 = (undefined8 *)0x0;
  local_60 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1800044d2:
    uVar7 = lVar2 + 2;
    puVar3 = FUN_180006a70(puVar1,uVar7 >> 0xc);
    puVar6 = puVar5;
    if (puVar3 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)((uVar7 & 0xfff) + 8 + (longlong)puVar3);
    }
  }
  else {
    puVar4 = puVar3 + 0x201;
    puVar6 = (undefined8 *)(param_3[3] + 2);
    if (puVar6 < puVar3 + 1) {
      if (puVar6 < puVar4) goto LAB_1800044d2;
    }
    else if (puVar6 < puVar4) goto LAB_180004502;
    puVar3 = (undefined8 *)
             FUN_180007040((longlong)puVar1,puVar3,
                           (ulonglong)((longlong)puVar6 - (longlong)puVar4) >> 0xc);
    puVar6 = (undefined8 *)(((longlong)puVar6 - (longlong)puVar4 & 0xfffU) + 8 + (longlong)puVar3);
  }
LAB_180004502:
  uVar7 = lVar2 + 2;
  local_res20 = 0x20;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = FUN_180006a70(puVar1,uVar7 >> 0xc);
      puVar6 = puVar5;
      if (puVar3 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)((uVar7 & 0xfff) + 8 + (longlong)puVar3);
      }
    }
    *(undefined1 *)puVar6 = 0xff;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = FUN_180006a70(puVar1,uVar7 + 1 >> 0xc);
      puVar6 = puVar5;
      if (puVar4 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)((uVar7 + 1 & 0xfff) + 8 + (longlong)puVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)((longlong)puVar6 + 1);
      puVar4 = puVar3;
      if (puVar3 + 0x201 <= puVar6) {
        lVar2 = puVar1[1];
        puVar4 = (undefined8 *)*puVar3;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(lVar2 + 0x20030);
          if (puVar4 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)operator_new(0x1008);
            puVar4 = puVar5;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = 0;
              puVar4 = puVar6;
            }
            *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
          }
          else {
            *(undefined8 *)(lVar2 + 0x20030) = *puVar4;
            *puVar4 = 0;
          }
          *puVar3 = puVar4;
        }
        puVar6 = puVar4 + 1;
      }
    }
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = FUN_180006a70(puVar1,uVar7 + 1 >> 0xc);
      puVar6 = puVar5;
      if (puVar4 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)((uVar7 + 1 & 0xfff) + 8 + (longlong)puVar4);
      }
    }
    *(undefined1 *)puVar6 = param_1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = FUN_180006a70(puVar1,uVar7 + 2 >> 0xc);
      puVar6 = puVar5;
      if (puVar4 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)((uVar7 + 2 & 0xfff) + 8 + (longlong)puVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)((longlong)puVar6 + 1);
      if (puVar4 + 0x201 <= puVar6) {
        lVar2 = puVar1[1];
        puVar3 = (undefined8 *)*puVar4;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = *(undefined8 **)(lVar2 + 0x20030);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20030) = *puVar3;
            *puVar3 = 0;
            *puVar4 = puVar3;
            puVar6 = puVar3 + 1;
            puVar4 = puVar3;
            goto LAB_1800046dc;
          }
          puVar6 = (undefined8 *)operator_new(0x1008);
          puVar3 = puVar5;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0;
            puVar3 = puVar6;
          }
          *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
          *puVar4 = puVar3;
        }
        puVar6 = puVar3 + 1;
        puVar4 = puVar3;
      }
    }
LAB_1800046dc:
    local_50 = puVar4;
    uVar7 = uVar7 + 2;
    local_res20 = local_res20 + -1;
    puVar3 = local_50;
    local_58 = uVar7;
    local_48 = puVar6;
    if (local_res20 == 0) {
      if (local_50 == (undefined8 *)0x0) {
        local_50 = FUN_180006a70(puVar1,uVar7 >> 0xc);
        local_48 = puVar5;
        if (local_50 != (undefined8 *)0x0) {
          local_48 = (undefined8 *)((uVar7 & 0xfff) + 8 + (longlong)local_50);
        }
      }
      *(undefined1 *)local_48 = 0xa0;
      FUN_180005900(&local_60);
      if (local_50 == (undefined8 *)0x0) {
        uVar7 = local_58 & 0xfff;
        local_50 = FUN_180006a70(local_60,local_58 >> 0xc);
        local_48 = puVar5;
        if (local_50 != (undefined8 *)0x0) {
          local_48 = (undefined8 *)((longlong)local_50 + uVar7 + 8);
        }
      }
      *(undefined1 *)local_48 = param_1;
      FUN_180005900(&local_60);
      local_60 = (undefined8 *)*param_3;
      local_58 = param_3[1];
      local_50 = (undefined8 *)param_3[2];
      local_48 = (undefined8 *)param_3[3];
      FUN_180003170(&local_60,*param_5 - 3U & 0xfff | 0xb000);
      return 0;
    }
  } while( true );
}




undefined8
FUN_1800047f0(byte *param_1,byte *param_2,undefined8 *param_3,longlong param_4,int *param_5)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (&local_68 == param_3) {
    pbVar8 = (byte *)0x0;
    pbVar3 = (byte *)0x0;
    uVar6 = 0;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)*param_3;
    uVar6 = param_3[1];
    pbVar3 = (byte *)param_3[2];
    pbVar8 = (byte *)param_3[3];
  }
  pbVar11 = param_1;
  if (param_1 < param_2) {
    do {
      pbVar5 = (byte *)0x0;
      if (*(longlong *)(param_4 + 8) <= (longlong)uVar6) break;
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)FUN_180006a70(puVar9,uVar6 >> 0xc);
        pbVar8 = pbVar5;
        if (pbVar3 != (byte *)0x0) {
          pbVar8 = pbVar3 + (ulonglong)((uint)uVar6 & 0xfff) + 8;
        }
      }
      bVar1 = *pbVar8;
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)FUN_180006a70(puVar9,uVar6 + 1 >> 0xc);
        if (pbVar3 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          pbVar8 = pbVar3 + (ulonglong)((uint)(uVar6 + 1) & 0xfff) + 8;
        }
      }
      else {
        pbVar8 = pbVar8 + 1;
        if (pbVar3 + 0x1008 <= pbVar8) {
          lVar2 = puVar9[1];
          pbVar4 = *(byte **)pbVar3;
          if (*(byte **)pbVar3 == (byte *)0x0) {
            pbVar4 = *(byte **)(lVar2 + 0x20030);
            if (pbVar4 != (byte *)0x0) {
              *(undefined8 *)(lVar2 + 0x20030) = *(undefined8 *)pbVar4;
              pbVar4[0] = 0;
              pbVar4[1] = 0;
              pbVar4[2] = 0;
              pbVar4[3] = 0;
              pbVar4[4] = 0;
              pbVar4[5] = 0;
              pbVar4[6] = 0;
              pbVar4[7] = 0;
              *(byte **)pbVar3 = pbVar4;
              pbVar8 = pbVar4 + 8;
              pbVar3 = pbVar4;
              goto LAB_18000495b;
            }
            pbVar8 = (byte *)operator_new(0x1008);
            if (pbVar8 != (byte *)0x0) {
              pbVar8[0] = 0;
              pbVar8[1] = 0;
              pbVar8[2] = 0;
              pbVar8[3] = 0;
              pbVar8[4] = 0;
              pbVar8[5] = 0;
              pbVar8[6] = 0;
              pbVar8[7] = 0;
              pbVar5 = pbVar8;
            }
            *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
            *(byte **)pbVar3 = pbVar5;
            pbVar4 = pbVar5;
          }
          pbVar8 = pbVar4 + 8;
          pbVar3 = pbVar4;
        }
      }
LAB_18000495b:
      uVar10 = uVar6 + 1;
      bVar7 = bVar1 & 0x7f;
      if ((char)bVar1 < '\0') {
        pbVar5 = pbVar3;
        if (pbVar3 == (byte *)0x0) {
          pbVar5 = (byte *)FUN_180006a70(puVar9,uVar10 >> 0xc);
          if (pbVar5 == (byte *)0x0) {
            pbVar8 = (byte *)0x0;
          }
          else {
            pbVar8 = pbVar5 + (ulonglong)((uint)uVar10 & 0xfff) + 8;
          }
        }
        bVar1 = *pbVar8;
        if (pbVar5 == (byte *)0x0) {
          pbVar3 = (byte *)FUN_180006a70(puVar9,uVar6 + 2 >> 0xc);
          if (pbVar3 == (byte *)0x0) {
            pbVar8 = (byte *)0x0;
          }
          else {
            pbVar8 = pbVar3 + (ulonglong)((uint)(uVar6 + 2) & 0xfff) + 8;
          }
        }
        else {
          pbVar8 = pbVar8 + 1;
          pbVar3 = pbVar5;
          if (pbVar5 + 0x1008 <= pbVar8) {
            lVar2 = puVar9[1];
            pbVar3 = *(byte **)pbVar5;
            if (pbVar3 == (byte *)0x0) {
              pbVar3 = *(byte **)(lVar2 + 0x20030);
              if (pbVar3 != (byte *)0x0) {
                *(undefined8 *)(lVar2 + 0x20030) = *(undefined8 *)pbVar3;
                pbVar3[0] = 0;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                pbVar3[4] = 0;
                pbVar3[5] = 0;
                pbVar3[6] = 0;
                pbVar3[7] = 0;
                *(byte **)pbVar5 = pbVar3;
                pbVar8 = pbVar3 + 8;
                goto LAB_180004a66;
              }
              pbVar3 = (byte *)operator_new(0x1008);
              if (pbVar3 == (byte *)0x0) {
                pbVar3 = (byte *)0x0;
              }
              else {
                pbVar3[0] = 0;
                pbVar3[1] = 0;
                pbVar3[2] = 0;
                pbVar3[3] = 0;
                pbVar3[4] = 0;
                pbVar3[5] = 0;
                pbVar3[6] = 0;
                pbVar3[7] = 0;
              }
              *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
              *(byte **)pbVar5 = pbVar3;
            }
            pbVar8 = pbVar3 + 8;
          }
        }
LAB_180004a66:
        uVar10 = uVar6 + 2;
        if (bVar7 != 0) {
          pbVar5 = pbVar11;
          for (uVar6 = (ulonglong)bVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 1;
          }
          pbVar11 = pbVar11 + bVar7;
        }
      }
      else if (bVar7 != 0) {
        uVar6 = (ulonglong)bVar7;
        do {
          if (pbVar3 == (byte *)0x0) {
            pbVar3 = (byte *)FUN_180006a70(puVar9,uVar10 >> 0xc);
            if (pbVar3 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
            }
            else {
              pbVar8 = pbVar3 + (ulonglong)((uint)uVar10 & 0xfff) + 8;
            }
          }
          *pbVar11 = *pbVar8;
          if (pbVar3 == (byte *)0x0) {
            pbVar3 = (byte *)FUN_180006a70(puVar9,uVar10 + 1 >> 0xc);
            if (pbVar3 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
            }
            else {
              pbVar8 = pbVar3 + (ulonglong)((uint)(uVar10 + 1) & 0xfff) + 8;
            }
          }
          else {
            pbVar8 = pbVar8 + 1;
            if (pbVar3 + 0x1008 <= pbVar8) {
              lVar2 = puVar9[1];
              pbVar5 = *(byte **)pbVar3;
              if (pbVar5 == (byte *)0x0) {
                pbVar5 = *(byte **)(lVar2 + 0x20030);
                if (pbVar5 != (byte *)0x0) {
                  *(undefined8 *)(lVar2 + 0x20030) = *(undefined8 *)pbVar5;
                  pbVar5[0] = 0;
                  pbVar5[1] = 0;
                  pbVar5[2] = 0;
                  pbVar5[3] = 0;
                  pbVar5[4] = 0;
                  pbVar5[5] = 0;
                  pbVar5[6] = 0;
                  pbVar5[7] = 0;
                  *(byte **)pbVar3 = pbVar5;
                  pbVar8 = pbVar5 + 8;
                  pbVar3 = pbVar5;
                  goto LAB_180004b7d;
                }
                pbVar5 = (byte *)operator_new(0x1008);
                if (pbVar5 != (byte *)0x0) {
                  pbVar5[0] = 0;
                  pbVar5[1] = 0;
                  pbVar5[2] = 0;
                  pbVar5[3] = 0;
                  pbVar5[4] = 0;
                  pbVar5[5] = 0;
                  pbVar5[6] = 0;
                  pbVar5[7] = 0;
                }
                *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
                *(byte **)pbVar3 = pbVar5;
              }
              pbVar8 = pbVar5 + 8;
              pbVar3 = pbVar5;
            }
          }
LAB_180004b7d:
          uVar10 = uVar10 + 1;
          pbVar11 = pbVar11 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar6 = uVar10;
    } while (pbVar11 < param_2);
  }
  *param_5 = (int)pbVar11 - (int)param_1;
  return 0;
}




undefined8
FUN_180004bd0(undefined8 *param_1,longlong param_2,undefined8 *param_3,uint *param_4,
             undefined8 *param_5)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  puVar5 = param_5;
  if (param_3 != param_1) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
  }
  *param_4 = 0;
  *(undefined4 *)param_5 = 1;
  local_30 = param_1[1];
  if (*(longlong *)(param_2 + 8) - local_30 < 4) {
    return 0x8000001a;
  }
  param_5 = &local_38;
  local_38 = *param_1;
  local_28 = param_1[2];
  local_20 = param_1[3];
  FUN_1800030b0((undefined1 *)&param_5,&local_38);
  puVar7 = param_5;
  uVar4 = (ushort)param_5;
  if ((ushort)param_5 == 0) {
    return 0x8000001a;
  }
  *(undefined4 *)puVar5 = 0;
  uVar6 = ((ushort)param_5 & 0xfff) + 3;
  *param_4 = uVar6;
  FUN_1800059f0(param_1,(ulonglong)uVar6);
  if (((*(longlong *)(param_2 + 8) <= (longlong)param_1[1]) &&
      (param_1[1] != *(longlong *)(param_2 + 8))) || ((uVar4 & 0x7000) != 0x3000)) {
    FUN_1800059f0(param_1,-(ulonglong)*param_4);
    *(undefined4 *)puVar5 = 1;
    return 0xc0000242;
  }
  if (((ulonglong)puVar7 & 0x8000) == 0) {
    *(undefined4 *)puVar5 = 4;
    FUN_1800059f0(param_3,2);
    *param_4 = *param_4 - 2;
    return 0;
  }
  FUN_1800059f0(param_3,2);
  *param_4 = *param_4 - 2;
  if (*param_4 == 6) {
    puVar7 = (undefined8 *)*param_3;
    lVar2 = param_3[1];
    puVar8 = (undefined8 *)param_3[2];
    if (puVar8 == (undefined8 *)0x0) {
LAB_180004d8b:
      uVar10 = lVar2 + 2;
      puVar8 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar8 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar8);
      }
    }
    else {
      pcVar1 = (char *)(puVar8 + 0x201);
      pcVar9 = (char *)(param_3[3] + 2);
      if (pcVar9 < puVar8 + 1) {
        if (pcVar9 < pcVar1) goto LAB_180004d8b;
      }
      else if (pcVar9 < pcVar1) goto LAB_180004db7;
      puVar8 = (undefined8 *)
               FUN_180007040((longlong)puVar7,puVar8,
                             (ulonglong)((longlong)pcVar9 - (longlong)pcVar1) >> 0xc);
      pcVar9 = (char *)((ulonglong)((uint)((longlong)pcVar9 - (longlong)pcVar1) & 0xfff) + 8 +
                       (longlong)puVar8);
    }
LAB_180004db7:
    uVar10 = lVar2 + 2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar7 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar7);
      }
    }
    if (*pcVar9 != '\x02') goto LAB_180004eb3;
    puVar7 = (undefined8 *)*param_3;
    lVar2 = param_3[1];
    puVar8 = (undefined8 *)param_3[2];
    if (puVar8 == (undefined8 *)0x0) {
LAB_180004e50:
      uVar10 = lVar2 + 3;
      puVar8 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar8 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar8);
      }
    }
    else {
      pcVar1 = (char *)(puVar8 + 0x201);
      pcVar9 = (char *)(param_3[3] + 3);
      if (pcVar9 < puVar8 + 1) {
        if (pcVar9 < pcVar1) goto LAB_180004e50;
      }
      else if (pcVar9 < pcVar1) goto LAB_180004e7c;
      puVar8 = (undefined8 *)
               FUN_180007040((longlong)puVar7,puVar8,
                             (ulonglong)((longlong)pcVar9 - (longlong)pcVar1) >> 0xc);
      pcVar9 = (char *)((ulonglong)((uint)((longlong)pcVar9 - (longlong)pcVar1) & 0xfff) + 8 +
                       (longlong)puVar8);
    }
LAB_180004e7c:
    uVar10 = lVar2 + 3;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar7 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar7);
      }
    }
    if (*pcVar9 != '\0') goto LAB_180004eb3;
    bVar3 = true;
  }
  else {
LAB_180004eb3:
    bVar3 = false;
  }
  if (bVar3) {
    *(undefined4 *)puVar5 = 2;
    return 0;
  }
  if (*param_4 == 6) {
    puVar7 = (undefined8 *)*param_3;
    lVar2 = param_3[1];
    puVar8 = (undefined8 *)param_3[2];
    if (puVar8 == (undefined8 *)0x0) {
LAB_180004f4e:
      uVar10 = lVar2 + 2;
      puVar8 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar8 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar8);
      }
    }
    else {
      pcVar1 = (char *)(puVar8 + 0x201);
      pcVar9 = (char *)(param_3[3] + 2);
      if (pcVar9 < puVar8 + 1) {
        if (pcVar9 < pcVar1) goto LAB_180004f4e;
      }
      else if (pcVar9 < pcVar1) goto LAB_180004f7a;
      puVar8 = (undefined8 *)
               FUN_180007040((longlong)puVar7,puVar8,
                             (ulonglong)((longlong)pcVar9 - (longlong)pcVar1) >> 0xc);
      pcVar9 = (char *)((ulonglong)((uint)((longlong)pcVar9 - (longlong)pcVar1) & 0xfff) + 8 +
                       (longlong)puVar8);
    }
LAB_180004f7a:
    uVar10 = lVar2 + 2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = FUN_180006a70(puVar7,uVar10 >> 0xc);
      if (puVar7 == (undefined8 *)0x0) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar7);
      }
    }
    if (*pcVar9 == '\x02') {
      puVar7 = (undefined8 *)*param_3;
      lVar2 = param_3[1];
      puVar8 = (undefined8 *)param_3[2];
      if (puVar8 == (undefined8 *)0x0) {
LAB_180005013:
        uVar10 = lVar2 + 3;
        puVar8 = FUN_180006a70(puVar7,uVar10 >> 0xc);
        if (puVar8 == (undefined8 *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar8);
        }
      }
      else {
        pcVar1 = (char *)(puVar8 + 0x201);
        pcVar9 = (char *)(param_3[3] + 3);
        if (pcVar9 < puVar8 + 1) {
          if (pcVar9 < pcVar1) goto LAB_180005013;
        }
        else if (pcVar9 < pcVar1) goto LAB_18000503f;
        puVar8 = (undefined8 *)
                 FUN_180007040((longlong)puVar7,puVar8,
                               (ulonglong)((longlong)pcVar9 - (longlong)pcVar1) >> 0xc);
        pcVar9 = (char *)((ulonglong)((uint)((longlong)pcVar9 - (longlong)pcVar1) & 0xfff) + 8 +
                         (longlong)puVar8);
      }
LAB_18000503f:
      uVar10 = lVar2 + 3;
      if (puVar8 == (undefined8 *)0x0) {
        puVar7 = FUN_180006a70(puVar7,uVar10 >> 0xc);
        if (puVar7 == (undefined8 *)0x0) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)((ulonglong)((uint)uVar10 & 0xfff) + 8 + (longlong)puVar7);
        }
      }
      if (*pcVar9 == -1) {
        bVar3 = true;
        goto LAB_180005078;
      }
    }
  }
  bVar3 = false;
LAB_180005078:
  if (!bVar3) {
    return 0;
  }
  *(undefined4 *)puVar5 = 3;
  return 0;
}




undefined8 * FUN_1800050f0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *_Dst;
  void *_Memory;
  undefined8 *puVar10;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_180007580();
    pcVar4 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar4)();
    return puVar10;
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
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)operator_new(uVar8);
      }
      goto LAB_1800051e3;
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
  puVar10 = (undefined8 *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
  puVar10[-1] = pvVar7;
LAB_1800051e3:
  puVar2 = puVar10 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  pvVar7 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar7;
    _Dst = puVar10;
    param_2 = pvVar7;
  }
  else {
    memmove(puVar10,pvVar7,(longlong)param_2 - (longlong)pvVar7);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (param_1[2] - (longlong)pvVar7 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1);
  param_1[2] = (longlong)(puVar10 + uVar6);
  return puVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800052a0(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  
  *param_1 = ChunkCacheBuffer<65536>::vftable;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = ChunkCacheImplDiscrete<4096,16>::vftable;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar2 < DAT_18002ca18) {
    _Init_thread_header(&DAT_18002ca18);
    if (DAT_18002ca18 == -1) {
      _DAT_18002ca08 = 0;
      _DAT_18002ca10 = 0;
      _DAT_18002ca00 =
           LZDummyCompression<unsigned_char_const*___ptr64,class_RandomAccessIterator<class_ChunkUnit<class_ChunkCacheImplDiscrete<4096,16>,4096,16>,unsigned_char,__int64>,unsigned_char*___ptr64>
           ::vftable;
      atexit(FUN_18001bb30);
      _Init_thread_footer(&DAT_18002ca18);
    }
  }
  if (*piVar2 < DAT_18003ca58) {
    _Init_thread_header(&DAT_18003ca58);
    if (DAT_18003ca58 == -1) {
      _DAT_18002ca28 = LZNT1FindMatchStandard;
      _DAT_18002ca30 = &DAT_18002ca38;
      _DAT_18002ca20 =
           LZStandardCompression<unsigned_char_const*___ptr64,class_RandomAccessIterator<class_ChunkUnit<class_ChunkCacheImplDiscrete<4096,16>,4096,16>,unsigned_char,__int64>,unsigned_char*___ptr64>
           ::vftable;
      memset(&DAT_18002ca38,0,0x10020);
      atexit((_func_5014 *)&LAB_18001bb70);
      _Init_thread_footer(&DAT_18003ca58);
    }
  }
  if (*piVar2 < DAT_18003ca68) {
    _Init_thread_header(&DAT_18003ca68);
    if (DAT_18003ca68 == -1) {
      _DAT_18003ca60 =
           RLECompression<unsigned_char_const*___ptr64,class_RandomAccessIterator<class_ChunkUnit<class_ChunkCacheImplDiscrete<4096,16>,4096,16>,unsigned_char,__int64>,unsigned_char*___ptr64>
           ::vftable;
      atexit((_func_5014 *)&LAB_18001bb60);
      _Init_thread_footer(&DAT_18003ca68);
    }
  }
  if (param_2 == 0) {
    puVar1 = &DAT_18002ca00;
  }
  else {
    puVar1 = &DAT_18002ca20;
    if ((param_2 != 1) && (param_2 != 2)) {
      puVar1 = &DAT_18003ca60;
    }
  }
  param_1[0x4004] = puVar1;
  param_1[0x4005] = 0;
  param_1[0x4006] = 0;
  param_1[0x4007] = 0;
  param_1[0x4008] = 0;
  param_1[0x4009] = 0;
  return param_1;
}




/* public: __cdecl ChunkCache::ChunkCache(unsigned long) __ptr64 */

ChunkCache * __thiscall ChunkCache::ChunkCache(ChunkCache *this,ulong param_1)

{
                    /* 0x54e0  38  ??0ChunkCache@@QEAA@K@Z */
  *(ulong *)(this + 4) = param_1;
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




undefined8 * FUN_1800054f0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




undefined8 * FUN_180005590(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 local_18;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}




undefined8 * FUN_180005600(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




undefined8 * FUN_180005650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 local_18;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




void FUN_1800056b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  longlong lVar2;
  undefined8 local_20 [3];
  
  lVar2 = 0;
  _Memory = (undefined8 *)param_1[1];
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*_Memory;
    *_Memory = 0;
    free(_Memory);
    lVar2 = lVar2 + 1;
    _Memory = puVar1;
  }
  param_1[1] = 0;
  if (*param_1 != lVar2) {
    FUN_180005650(local_20,"buffer allocator memory leak detected!");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1800259b8);
  }
  *param_1 = 0;
  return;
}




void FUN_180005750(undefined8 *param_1)

{
  *param_1 = ChunkCacheBuffer<65536>::vftable;
  return;
}




void FUN_180005760(undefined8 *param_1)

{
  *param_1 = LZCompression<unsigned_char_const*___ptr64,class_RandomAccessIterator<class_ChunkUnit<class_ChunkCacheImplDiscrete<4096,16>,4096,16>,unsigned_char,__int64>,unsigned_char*___ptr64>
             ::vftable;
  return;
}




/* public: static void __cdecl CHardDriveIO::LoadSetting(class CHardDriveIOSetting & __ptr64) */

void __cdecl CHardDriveIO::LoadSetting(CHardDriveIOSetting *param_1)

{
                    /* 0x5770  264  ?LoadSetting@CHardDriveIO@@SAXAEAVCHardDriveIOSetting@@@Z
                       0x5770  270  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




void FUN_180005780(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
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




/* public: __cdecl ChunkCache::~ChunkCache(void) __ptr64 */

void __thiscall ChunkCache::~ChunkCache(ChunkCache *this)

{
                    /* 0x57f0  63  ??1ChunkCache@@QEAA@XZ */
  DeleteImpl(this);
  return;
}




void FUN_180005810(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180005840(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180005870(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




undefined8 * FUN_1800058a0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1[2] == 0) {
    uVar1 = param_1[1];
    puVar2 = FUN_180006a70((undefined8 *)*param_1,uVar1 >> 0xc);
    if (puVar2 == (undefined8 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uint)uVar1 & 0xfff) + 8 + (longlong)puVar2;
    }
    param_1[2] = puVar2;
    param_1[3] = lVar3;
  }
  return param_1 + 2;
}




undefined8 * FUN_180005900(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = param_1[1];
    puVar4 = FUN_180006a70((undefined8 *)*param_1,lVar2 + 1U >> 0xc);
    puVar3 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)((ulonglong)((uint)(lVar2 + 1U) & 0xfff) + 8 + (longlong)puVar4);
    }
  }
  else {
    puVar3 = (undefined8 *)(param_1[3] + 1);
    if (puVar3 < puVar1 + 0x201) goto LAB_1800059cc;
    lVar2 = ((undefined8 *)*param_1)[1];
    puVar4 = (undefined8 *)*puVar1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(lVar2 + 0x20030);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20030) = *puVar4;
        *puVar4 = 0;
        *puVar1 = puVar4;
        puVar3 = puVar4 + 1;
        goto LAB_1800059c8;
      }
      puVar4 = (undefined8 *)operator_new(0x1008);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
      }
      *(longlong *)(lVar2 + 0x20028) = *(longlong *)(lVar2 + 0x20028) + 1;
      *puVar1 = puVar4;
    }
    puVar3 = puVar4 + 1;
  }
LAB_1800059c8:
  param_1[2] = puVar4;
LAB_1800059cc:
  param_1[3] = puVar3;
  param_1[1] = param_1[1] + 1;
  return param_1;
}




undefined8 * FUN_1800059f0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 == (undefined8 *)0x0) {
LAB_180005a5b:
    uVar4 = param_1[1] + param_2;
    puVar2 = FUN_180006a70((undefined8 *)*param_1,uVar4 >> 0xc);
    if (puVar2 != (undefined8 *)0x0) goto LAB_180005a4c;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(param_1[3] + param_2);
    puVar1 = puVar2 + 0x201;
    if (puVar3 < puVar2 + 1) {
      if (puVar3 < puVar1) goto LAB_180005a5b;
    }
    else if (puVar3 < puVar1) goto LAB_180005a7c;
    uVar4 = (longlong)puVar3 - (longlong)puVar1;
    puVar2 = (undefined8 *)FUN_180007040((longlong)*param_1,puVar2,uVar4 >> 0xc);
LAB_180005a4c:
    puVar3 = (undefined8 *)((ulonglong)((uint)uVar4 & 0xfff) + 8 + (longlong)puVar2);
  }
  param_1[2] = puVar2;
LAB_180005a7c:
  param_1[3] = puVar3;
  param_1[1] = param_1[1] + param_2;
  return param_1;
}




/* public: void __cdecl ChunkCache::`default constructor closure'(void) __ptr64 */

void __thiscall ChunkCache::_default_constructor_closure_(ChunkCache *this)

{
                    /* 0x5aa0  121  ??_FChunkCache@@QEAAXXZ */
  *(undefined4 *)(this + 4) = 0xffff;
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}




undefined8 * FUN_180005ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005b60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* private: bool __cdecl ChunkCache::CheckStyle(void) __ptr64 */

bool __thiscall ChunkCache::CheckStyle(ChunkCache *this)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x5bc0  135  ?CheckStyle@ChunkCache@@AEAA_NXZ */
  uVar1 = *(uint *)(this + 4);
  if (uVar1 < 0x143) {
    if ((((uVar1 != 0x142) && (uVar1 != 0x101)) && (uVar1 != 0x112)) && (uVar1 != 0x122)) {
      return false;
    }
  }
  else if ((uVar1 != 0x182) && (uVar1 != 0x204)) {
    if (uVar1 != 0xffff) {
      return false;
    }
    uVar2 = 0x101;
    if (0x8000000 < *(uint *)this) {
      uVar2 = 0x122;
    }
    *(undefined4 *)(this + 4) = uVar2;
  }
  return true;
}




void FUN_180005c20(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong local_res8;
  
  lVar2 = *param_1;
  uVar5 = 0;
  uVar6 = param_1[1];
  piVar8 = (int *)param_1[2];
  plVar7 = (longlong *)param_1[3];
  uVar4 = uVar5;
  if ((int)param_1[5] != 0) {
    do {
      uVar1 = *(uint *)(lVar2 + 4);
      if ((uVar1 & 1) == 0) {
        if (((uVar1 & 2) != 0) || ((uVar1 & 4) != 0)) {
          local_res8 = 0;
          plVar7 = FUN_180006b30(*(longlong **)(lVar2 + 8),0x10000 - (uVar6 & 0xffff) < 4,
                                 uVar6 >> 0x10,&local_res8);
          piVar8 = (int *)(local_res8 + (uVar6 & 0xffff));
        }
      }
      else {
        plVar7 = (longlong *)&DAT_18003ca6d;
        piVar8 = (int *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + uVar6);
      }
      if ((*piVar8 != 0) && ((char)*plVar7 == '\0')) {
        *(char *)plVar7 = '\x01';
      }
      uVar6 = uVar6 + 4;
      *piVar8 = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 5));
  }
  if ((int)param_1[10] != 0) {
    uVar6 = param_1[7];
    lVar2 = param_1[6];
    pcVar3 = (char *)param_1[8];
    plVar7 = (longlong *)param_1[9];
    do {
      uVar4 = *(uint *)(lVar2 + 4);
      if ((uVar4 & 1) == 0) {
        if (((uVar4 & 2) != 0) || ((uVar4 & 4) != 0)) {
          local_res8 = 0;
          plVar7 = FUN_180006b30(*(longlong **)(lVar2 + 8),(uVar6 & 0xffff) == 0x10000,uVar6 >> 0x10
                                 ,&local_res8);
          pcVar3 = (char *)(local_res8 + (uVar6 & 0xffff));
        }
      }
      else {
        plVar7 = (longlong *)&DAT_18003ca6c;
        pcVar3 = (char *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + uVar6);
      }
      if ((*pcVar3 != '\0') && ((char)*plVar7 == '\0')) {
        *(char *)plVar7 = '\x01';
      }
      uVar5 = uVar5 + 1;
      *pcVar3 = '\0';
      uVar6 = uVar6 + 1;
    } while (uVar5 < *(uint *)(param_1 + 10));
  }
  return;
}




void FUN_180005df0(longlong param_1)

{
  longlong *_Memory;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x20038);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x20040) - lVar4 >> 3 == 0) {
    *(longlong *)(param_1 + 0x20040) = lVar4;
    return;
  }
  do {
    _Memory = *(longlong **)(lVar4 + uVar5 * 8);
    if (_Memory != (longlong *)0x0) {
      puVar1 = (undefined8 *)*_Memory;
      if (puVar1 != (undefined8 *)0x0) {
        lVar4 = _Memory[1];
        puVar2 = puVar1;
        for (puVar3 = (undefined8 *)*puVar1; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          puVar2 = puVar3;
        }
        *puVar2 = *(undefined8 *)(lVar4 + 0x20030);
        *(undefined8 **)(lVar4 + 0x20030) = puVar1;
      }
      _Memory[1] = 0;
      *_Memory = 0;
      free(_Memory);
    }
    lVar4 = *(longlong *)(param_1 + 0x20038);
    uVar5 = uVar5 + 1;
  } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x20040) - lVar4 >> 3));
  *(longlong *)(param_1 + 0x20040) = lVar4;
  return;
}




bool FUN_180005ec0(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined8 **param_4,
                  undefined8 *param_5,uint *param_6)

{
  int iVar1;
  undefined1 *local_res18 [2];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uVar2;
  
  local_res18[0] = param_3;
  if ((*(undefined **)(param_1 + 8) == (undefined *)0x0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_78 = (undefined8 *)*param_5;
    local_70 = (undefined8 *)param_5[1];
    local_68 = (undefined8 *)param_5[2];
    local_60 = (undefined8 *)param_5[3];
    local_58 = *param_4;
    local_50 = param_4[1];
    local_48 = param_4[2];
    local_40 = param_4[3];
    FUN_180001000((longlong)param_2,(ulonglong *)local_res18,&local_58,&local_78,&local_38);
    local_58 = (undefined8 *)*param_5;
    local_50 = (undefined8 *)param_5[1];
    local_48 = (undefined8 *)param_5[2];
    local_40 = (undefined8 *)param_5[3];
    local_78 = *param_4;
    local_70 = param_4[1];
    local_68 = param_4[2];
    local_60 = param_4[3];
    uVar2 = FUN_180002210(param_2,(int)local_res18[0],&local_78,(longlong)&local_58,(int *)param_6);
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = FUN_1800012b0(*(undefined **)(param_1 + 8),param_2,param_3,param_4,(longlong)param_5,
                          param_6,*(undefined8 **)(param_1 + 0x10));
    iVar1 = (int)uVar2;
  }
  return -1 < iVar1;
}




bool FUN_180006030(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                  undefined8 *param_5,int *param_6)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = *param_5;
  local_40 = param_5[1];
  local_38 = param_5[2];
  local_30 = param_5[3];
  local_28 = *param_4;
  local_20 = param_4[1];
  local_18 = param_4[2];
  local_10 = param_4[3];
  iVar1 = FUN_180003250(param_2,param_3,&local_28,&local_48,param_6);
  return -1 < iVar1;
}




/* private: void __cdecl ChunkCache::CreateImpl(void) __ptr64 */

void __thiscall ChunkCache::CreateImpl(ChunkCache *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_20 [3];
  
                    /* 0x60e0  145  ?CreateImpl@ChunkCache@@AEAAXXZ */
  if (*(longlong *)(this + 8) == 0) {
    uVar1 = *(uint *)(this + 4);
    if (uVar1 < 0x143) {
      if ((((uVar1 != 0x142) && (uVar1 != 0x101)) && (uVar1 != 0x112)) && (uVar1 != 0x122)) {
LAB_180006281:
        FUN_180005590(local_20,"invalid cache style!");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_20,(ThrowInfo *)&DAT_180025928);
      }
    }
    else if ((uVar1 != 0x182) && (uVar1 != 0x204)) {
      if (uVar1 != 0xffff) goto LAB_180006281;
      if (*(uint *)this < 0x8000001) {
        uVar1 = 0x101;
        *(undefined4 *)(this + 4) = 0x101;
      }
      else {
        uVar1 = 0x122;
        *(undefined4 *)(this + 4) = 0x122;
      }
    }
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        iVar4 = 1;
        uVar1 = uVar1 & 0xf0;
        puVar3 = (undefined8 *)0x0;
        if (uVar1 == 0x10) {
          iVar4 = 0;
        }
        else if (uVar1 != 0x20) {
          if (uVar1 == 0x40) {
            iVar4 = 2;
          }
          else if (uVar1 == 0x80) {
            iVar4 = 3;
          }
        }
        puVar2 = (undefined8 *)operator_new(0x20058);
        if (puVar2 != (undefined8 *)0x0) {
          puVar3 = FUN_1800052a0(puVar2,iVar4);
        }
        *(undefined8 **)(this + 8) = puVar3;
        return;
      }
      if ((uVar1 & 4) == 0) {
        return;
      }
      puVar3 = (undefined8 *)operator_new(0x20058);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *puVar3 = ChunkCacheBuffer<65536>::vftable;
        *(undefined2 *)(puVar3 + 1) = 0;
        puVar3[2] = 0xffffffffffffffff;
        puVar3[3] = 0xffffffffffffffff;
        *puVar3 = ChunkCacheImplPiece::vftable;
        puVar3[0x4005] = 0;
        puVar3[0x4006] = 0;
        puVar3[0x4007] = 0;
        puVar3[0x4008] = 0;
        puVar3[0x4009] = 0;
        puVar3[0x400a] = 0;
      }
    }
    else {
      puVar2 = (undefined8 *)operator_new(0x10);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar3 = puVar2;
      }
    }
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}




bool FUN_1800062b0(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                  longlong param_5,int *param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180002720(param_2,param_3,param_4,param_5,param_6);
  return -1 < (int)uVar1;
}




bool FUN_1800062f0(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4,
                  undefined8 *param_5,int *param_6)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = *param_5;
  local_40 = param_5[1];
  local_38 = param_5[2];
  local_30 = param_5[3];
  local_28 = *param_4;
  local_20 = param_4[1];
  local_18 = param_4[2];
  local_10 = param_4[3];
  uVar1 = FUN_1800047f0(param_2,param_3,&local_28,(longlong)&local_48,param_6);
  return -1 < (int)uVar1;
}




/* private: void __cdecl ChunkCache::DeleteImpl(void) __ptr64 */

void __thiscall ChunkCache::DeleteImpl(ChunkCache *this)

{
  uint uVar1;
  undefined8 *_Memory;
  
                    /* 0x63a0  149  ?DeleteImpl@ChunkCache@@AEAAXXZ */
  _Memory = *(undefined8 **)(this + 8);
  if (_Memory == (undefined8 *)0x0) {
    return;
  }
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) goto LAB_18000643e;
      *_Memory = ChunkCacheImplPiece::vftable;
    }
    else {
      *_Memory = ChunkCacheImplDiscrete<4096,16>::vftable;
      FUN_180005df0((longlong)_Memory);
      FUN_180005780(_Memory + 0x4007);
      FUN_1800056b0(_Memory + 0x4005);
    }
    *_Memory = ChunkCacheBuffer<65536>::vftable;
  }
  else {
    free((void *)_Memory[1]);
  }
  free(_Memory);
LAB_18000643e:
  *(undefined8 *)(this + 8) = 0;
  return;
}




bool FUN_180006460(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  uint *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180004bd0(param_2,param_3,param_4,param_5,param_6);
  return -1 < (int)uVar1;
}




byte FUN_1800064a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint *param_5,undefined4 *param_6)

{
  longlong lVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte bVar7;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar5 = param_6;
  puVar3 = param_5;
  local_70 = *param_3;
  lVar1 = param_3[1];
  local_60 = param_3[2];
  uStack_58 = param_3[3];
  bVar7 = 0x80;
  if (param_4 != param_2) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    param_4[3] = param_2[3];
  }
  *param_5 = 0;
  *param_6 = 1;
  lStack_68 = lVar1;
  local_50 = local_70;
  lStack_48 = lVar1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  FUN_1800059f0(&local_50,-4);
  lStack_68 = param_2[1];
  if ((lStack_68 < lStack_48) || (lStack_68 == lStack_48)) {
    param_5 = (uint *)&local_70;
    local_70 = *param_2;
    local_60 = param_2[2];
    uStack_58 = param_2[3];
    FUN_1800030b0((undefined1 *)&param_5,&local_70);
    puVar4 = param_5;
    uVar2 = (ushort)param_5;
    if ((ushort)param_5 != 0) {
      bVar7 = 0;
      *puVar5 = 0;
      uVar6 = ((ushort)param_5 & 0xfff) + 3;
      *puVar3 = uVar6;
      FUN_1800059f0(param_2,(ulonglong)uVar6);
      if ((((longlong)param_2[1] < lVar1) || (param_2[1] == lVar1)) && ((uVar2 & 0x7000) == 0x3000))
      {
        if (((ulonglong)puVar4 & 0x8000) == 0) {
          *puVar5 = 4;
        }
        FUN_1800059f0(param_4,2);
        *puVar3 = *puVar3 - 2;
      }
      else {
        FUN_1800059f0(param_2,-(ulonglong)*puVar3);
        *puVar5 = 1;
        bVar7 = 0xc0;
      }
    }
  }
  return bVar7 >> 7 ^ 1;
}




void FUN_180006650(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res18 [2];
  undefined8 *local_res20;
  undefined8 uVar14;
  longlong *local_88;
  longlong local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar14 = 0xfffffffffffffffe;
  FUN_180005df0(param_1);
  uVar13 = *(ulonglong *)(param_1 + 0x20050);
  if (uVar13 != 0) {
    do {
      puVar6 = (undefined8 *)0x0;
      uVar12 = uVar13;
      if (0x10000 < uVar13) {
        uVar12 = 0x10000;
      }
      puVar5 = (undefined8 *)operator_new(0x10);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = param_1;
        puVar6 = puVar5;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x20040);
      local_res20 = puVar6;
      if (*(undefined8 **)(param_1 + 0x20048) == puVar8) {
        FUN_1800050f0((longlong *)(param_1 + 0x20038),puVar8,&local_res20);
      }
      else {
        *puVar8 = puVar6;
        *(longlong *)(param_1 + 0x20040) = *(longlong *)(param_1 + 0x20040) + 8;
      }
      lVar1 = *(longlong *)(param_1 + 0x20038);
      local_88 = *(longlong **)(lVar1 + -8 + (*(longlong *)(param_1 + 0x20040) - lVar1 >> 3) * 8);
      puVar6 = (undefined8 *)*local_88;
      if (puVar6 != (undefined8 *)0x0) {
        lVar1 = local_88[1];
        puVar8 = puVar6;
        for (puVar3 = (undefined8 *)*puVar6; puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          puVar8 = puVar3;
        }
        *puVar8 = *(undefined8 *)(lVar1 + 0x20030);
        *(undefined8 **)(lVar1 + 0x20030) = puVar6;
        *local_88 = 0;
      }
      plVar2 = *(longlong **)(local_88[1] + 0x20020);
      local_80 = 0;
      puStack_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_60 = 0x10020;
      uStack_58 = 0;
      local_50 = 0;
      local_68 = local_88;
      uVar10 = uVar12;
      while (uVar10 != 0) {
        uVar7 = 0x1000;
        if ((uint)uVar10 < 0x1000) {
          uVar7 = (uint)uVar10;
        }
        cVar4 = (**(code **)(*plVar2 + 0x10))
                          (plVar2,param_2,uVar7,&local_88,&local_68,local_res18,uVar14,puVar5);
        if (cVar4 == '\0') goto LAB_180006884;
        uVar10 = uVar10 - uVar7;
        uVar11 = (ulonglong)local_res18[0];
        if (puStack_78 == (undefined8 *)0x0) {
LAB_18000682d:
          uVar9 = local_80 + uVar11;
          puStack_78 = FUN_180006a70(local_88,uVar9 >> 0xc);
          if (puStack_78 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            puVar8 = (undefined8 *)((ulonglong)((uint)uVar9 & 0xfff) + 8 + (longlong)puStack_78);
          }
        }
        else {
          puVar6 = puStack_78 + 0x201;
          puVar8 = (undefined8 *)((longlong)local_70 + uVar11);
          if (puVar8 < puStack_78 + 1) {
            if (puVar8 < puVar6) goto LAB_18000682d;
          }
          else if (puVar8 < puVar6) goto LAB_180006862;
          puStack_78 = (undefined8 *)
                       FUN_180007040((longlong)local_88,puStack_78,
                                     (ulonglong)((longlong)puVar8 - (longlong)puVar6) >> 0xc);
          puVar8 = (undefined8 *)
                   ((longlong)puStack_78 +
                   (ulonglong)((uint)((longlong)puVar8 - (longlong)puVar6) & 0xfff) + 8);
        }
LAB_180006862:
        local_70 = puVar8;
        local_80 = local_80 + uVar11;
      }
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_88,&local_68);
LAB_180006884:
      uVar13 = uVar13 - uVar12;
    } while (uVar13 != 0);
  }
  return;
}




bool FUN_1800068c0(longlong param_1,undefined1 param_2,int param_3,undefined8 **param_4,
                  undefined8 *param_5,int *param_6)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  if ((*(longlong *)(param_1 + 8) == 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    local_48 = *param_5;
    local_40 = param_5[1];
    local_38 = param_5[2];
    local_30 = param_5[3];
    local_28 = *param_4;
    local_20 = param_4[1];
    local_18 = param_4[2];
    local_10 = param_4[3];
    uVar1 = FUN_180002d20(param_2,param_3,&local_28,(longlong)&local_48,param_6);
    return -1 < (int)uVar1;
  }
  uVar1 = FUN_180001ec0(param_2,(short)param_3,param_4,(longlong)param_5,(short *)param_6);
  return -1 < (int)uVar1;
}




bool FUN_1800069c0(undefined8 param_1,undefined1 param_2,uint param_3,undefined8 *param_4,
                  undefined8 *param_5,short *param_6)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = *param_5;
  local_40 = param_5[1];
  local_38 = param_5[2];
  local_30 = param_5[3];
  local_28 = *param_4;
  local_20 = param_4[1];
  local_18 = param_4[2];
  local_10 = param_4[3];
  uVar1 = FUN_1800043f0(param_2,(ulonglong)param_3,&local_28,(longlong)&local_48,param_6);
  return -1 < (int)uVar1;
}




undefined8 * FUN_180006a70(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 < 0x10) {
    lVar1 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_180006cb0((longlong *)(lVar1 + 0x20028));
      *param_1 = puVar2;
    }
    if (param_2 != 0) {
      puVar4 = puVar2;
      do {
        puVar2 = (undefined8 *)*puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = *(undefined8 **)(lVar1 + 0x20030);
          if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)operator_new(0x1008);
            puVar2 = (undefined8 *)0x0;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = 0;
              puVar2 = puVar3;
            }
            *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
          }
          else {
            *(undefined8 *)(lVar1 + 0x20030) = *puVar2;
            *puVar2 = 0;
          }
          *puVar4 = puVar2;
        }
        param_2 = param_2 - 1;
        puVar4 = puVar2;
      } while (param_2 != 0);
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}




longlong * FUN_180006b30(longlong *param_1,char param_2,longlong param_3,longlong *param_4)

{
  longlong *_Dst;
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[2];
  if (lVar4 == param_3) {
    lVar4 = 0;
LAB_180006b5d:
    *param_4 = (longlong)(param_1 + lVar4 * 0x2000 + 4);
    plVar3 = (longlong *)((longlong)param_1 + lVar4 + 8);
  }
  else {
    lVar5 = param_1[3];
    if (lVar5 == param_3) {
      plVar3 = param_1 + 0x2004;
      lVar4 = 1;
      *param_4 = (longlong)plVar3;
      if (param_2 == '\0') goto LAB_180006b5d;
      _Dst = param_1 + 4;
      uVar1 = *(undefined1 *)((longlong)param_1 + 9);
      lVar4 = param_1[3];
      if ((char)param_1[1] != '\0') {
        (**(code **)*param_1)(param_1,param_1[2],_Dst);
      }
      *(undefined1 *)(param_1 + 1) = uVar1;
      param_1[2] = lVar4;
      memmove(_Dst,plVar3,0x10000);
      lVar4 = lVar4 + 1;
      cVar2 = (**(code **)(*param_1 + 8))(param_1,lVar4,plVar3);
      lVar5 = -1;
      if (cVar2 != '\0') {
        lVar5 = lVar4;
      }
      param_1[3] = lVar5;
      *param_4 = (longlong)_Dst;
    }
    else {
      plVar3 = param_1 + 4;
      if ((lVar4 != -1) && ((char)param_1[1] != '\0')) {
        (**(code **)*param_1)(param_1,lVar4,plVar3);
        lVar5 = param_1[3];
      }
      if ((lVar5 != -1) && (*(char *)((longlong)param_1 + 9) != '\0')) {
        (**(code **)*param_1)(param_1,lVar5,param_1 + 0x2004);
      }
      *(undefined2 *)(param_1 + 1) = 0;
      cVar2 = (**(code **)(*param_1 + 8))(param_1,param_3,plVar3);
      lVar4 = -1;
      if (cVar2 != '\0') {
        lVar4 = param_3;
      }
      param_1[2] = lVar4;
      cVar2 = (**(code **)(*param_1 + 8))(param_1,param_3 + 1,param_1 + 0x2004);
      lVar4 = -1;
      if (cVar2 != '\0') {
        lVar4 = param_3 + 1;
      }
      param_1[3] = lVar4;
      *param_4 = (longlong)plVar3;
    }
    plVar3 = param_1 + 1;
  }
  return plVar3;
}




void FUN_180006cb0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    param_1[1] = *plVar1;
    *plVar1 = 0;
    return;
  }
  puVar2 = (undefined8 *)operator_new(0x1008);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  *param_1 = *param_1 + 1;
  return;
}




/* public: unsigned long __cdecl ChunkCache::GetCapacity(void)const __ptr64 */

ulong __thiscall ChunkCache::GetCapacity(ChunkCache *this)

{
                    /* 0x6d10  174  ?GetCapacity@ChunkCache@@QEBAKXZ */
  return *(ulong *)this;
}




undefined8 FUN_180006d20(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
    return 0;
  }
  if ((*(code **)(param_1 + 8) == LZNT1FindMatchStandard) ||
     (uVar1 = 2, *(code **)(param_1 + 8) != LZNT1FindMatchMaximum)) {
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_180006d60(void)

{
  return 3;
}




/* public: int __cdecl TBuffer::GetBufferSize(void) __ptr64 */

int __thiscall TBuffer::GetBufferSize(TBuffer *this)

{
                    /* 0x6d70  171  ?GetBufferSize@TBuffer@@QEAAHXZ
                       0x6d70  225  ?GetStyle@ChunkCache@@QEBAKXZ */
  return *(int *)(this + 4);
}




ulonglong FUN_180006d80(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  longlong *local_58;
  longlong local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if ((param_2 == 0) || (0x10000 < param_3)) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_1[1];
    puVar7 = puVar1;
    for (puVar4 = (undefined8 *)*puVar1; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4
        ) {
      puVar7 = puVar4;
    }
    *puVar7 = *(undefined8 *)(lVar2 + 0x20030);
    *(undefined8 **)(lVar2 + 0x20030) = puVar1;
    *param_1 = 0;
  }
  uVar6 = param_2 + param_3;
  plVar3 = *(longlong **)(param_1[1] + 0x20020);
  local_40 = (undefined8 *)0x0;
  local_20 = 0;
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_30 = 0x10020;
  uStack_28 = 0;
  local_58 = param_1;
  local_38 = param_1;
  if (param_2 < uVar6) {
    do {
      uVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_2,uVar6,&local_58,&local_38,local_res10);
      if ((char)uVar5 == '\0') {
        return uVar5 & 0xffffffffffffff00;
      }
      param_2 = param_2 + 0x1000;
      uVar5 = (ulonglong)local_res10[0];
      if (puStack_48 == (undefined8 *)0x0) {
LAB_180006ee1:
        uVar8 = local_50 + uVar5;
        puStack_48 = FUN_180006a70(local_58,uVar8 >> 0xc);
        if (puStack_48 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar7 = (undefined8 *)((ulonglong)((uint)uVar8 & 0xfff) + 8 + (longlong)puStack_48);
        }
      }
      else {
        puVar7 = (undefined8 *)((longlong)local_40 + uVar5);
        puVar1 = puStack_48 + 0x201;
        if (puVar7 < puStack_48 + 1) {
          if (puVar7 < puVar1) goto LAB_180006ee1;
        }
        else if (puVar7 < puVar1) goto LAB_180006f16;
        puStack_48 = (undefined8 *)
                     FUN_180007040((longlong)local_58,puStack_48,
                                   (ulonglong)((longlong)puVar7 - (longlong)puVar1) >> 0xc);
        puVar7 = (undefined8 *)
                 ((longlong)puStack_48 +
                 (ulonglong)((uint)((longlong)puVar7 - (longlong)puVar1) & 0xfff) + 8);
      }
LAB_180006f16:
      local_40 = puVar7;
      local_50 = local_50 + uVar5;
    } while (param_2 < uVar6);
  }
  uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,&local_38);
  return uVar6;
}




ulonglong FUN_180006f70(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong local_res8 [4];
  
  if ((ulonglong)(*(longlong *)(param_1 + 0x20040) - *(longlong *)(param_1 + 0x20038) >> 3) <
      param_2 + 1U) {
    return param_2 + 1U & 0xffffffffffffff00;
  }
  local_res8[0] = 0x10000;
  uVar1 = FUN_180007230(*(longlong *)(*(longlong *)(param_1 + 0x20038) + param_2 * 8),param_3,
                        local_res8);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




ulonglong FUN_180006fd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x20038) != 0) {
    if (*(ulonglong *)(param_1 + 0x20020) < (ulonglong)(param_2 * 0x10000)) {
LAB_180007005:
      return in_RAX & 0xffffffffffffff00;
    }
    uVar1 = *(ulonglong *)(param_1 + 0x20020) + param_2 * -0x10000;
    if (uVar1 < 0x10000) {
      if (uVar1 == 0) goto LAB_180007005;
    }
    else {
      uVar1 = 0x10000;
    }
    if (*(longlong *)(param_1 + 0x20038) != 0) {
      in_RAX = (**(code **)(param_1 + 0x20040))
                         (*(longlong *)(param_1 + 0x20038),param_3,
                          param_2 * 0x10000 + *(longlong *)(param_1 + 0x20028),uVar1);
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




void FUN_180007040(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  do {
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x20030);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)operator_new(0x1008);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar3 = puVar2;
        }
        *(longlong *)(lVar1 + 0x20028) = *(longlong *)(lVar1 + 0x20028) + 1;
      }
      else {
        *(undefined8 *)(lVar1 + 0x20030) = *puVar3;
        *puVar3 = 0;
      }
      *param_2 = puVar3;
    }
    bVar4 = param_3 != 0;
    param_3 = param_3 + -1;
    param_2 = puVar3;
  } while (bVar4);
  return;
}




/* public: void __cdecl ChunkCache::Reset(unsigned long) __ptr64 */

void __thiscall ChunkCache::Reset(ChunkCache *this,ulong param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  ChunkCache *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  ulong local_84;
  uint local_80;
  uint local_7c;
  ChunkCache *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  ChunkCache *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  
                    /* 0x70e0  283  ?Reset@ChunkCache@@QEAAXK@Z */
  uVar5 = (ulonglong)param_1;
  *(ulong *)this = param_1;
  CreateImpl(this);
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) != 0) {
        lVar3 = *(longlong *)(this + 8);
        *(ulonglong *)(lVar3 + 0x20020) = uVar5;
        *(undefined2 *)(lVar3 + 8) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
      }
    }
    else {
      lVar3 = *(longlong *)(this + 8);
      *(ulonglong *)(lVar3 + 0x20050) = uVar5;
      FUN_180005df0(lVar3);
      *(undefined2 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
      FUN_180006650(*(longlong *)(this + 8),0);
    }
  }
  else {
    puVar2 = *(ulonglong **)(this + 8);
    pvVar4 = realloc((void *)puVar2[1],(ulonglong)param_1);
    *puVar2 = uVar5;
    puVar2[1] = (ulonglong)pvVar4;
    local_88 = param_1 * 8;
    local_7c = param_1 >> 3;
    local_80 = param_1 >> 2;
    local_48 = (ulonglong)local_7c << 3;
    local_58 = param_1 & 3;
    local_30 = param_1 & 7;
    local_70 = (ulonglong)local_80 << 2;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_40 = 0;
    local_38 = 0;
    local_a8 = this;
    local_84 = param_1;
    local_78 = this;
    local_50 = this;
    FUN_180005c20((longlong *)&local_a8);
  }
  return;
}




ulonglong FUN_180007230(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  uint local_res10 [4];
  uint local_res20 [2];
  uint local_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_40 = 0xfffffffffffffffe;
  if ((param_2 == (undefined1 *)0x0) || (*param_3 != 0x10000)) {
LAB_1800073f2:
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_78 = 0x10020;
    uStack_70 = 0;
    local_68 = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20020);
    local_res20[0] = 0;
    local_e8[0] = 1;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = param_1;
    local_60 = param_1;
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_60,&local_80,&local_e0,local_res20,local_e8)
    ;
    cVar2 = (char)uVar3;
    puVar5 = param_2;
    while (cVar2 != '\0') {
      in_RAX = (ulonglong)local_e8[0];
      local_c0 = local_e0;
      uStack_b8 = uStack_d8;
      local_b0 = local_d0;
      uStack_a8 = uStack_c8;
      if (local_e8[0] == 0) {
LAB_180007356:
        FUN_1800059f0(&local_c0,(ulonglong)local_res20[0]);
        local_a0 = local_c0;
        uStack_98 = uStack_b8;
        local_90 = local_b0;
        uStack_88 = uStack_a8;
        in_RAX = (**(code **)(*plVar1 + 0x28))
                           (plVar1,puVar5,param_2 + 0x10000,&local_e0,&local_a0,local_res10);
        if ((char)in_RAX == '\0') goto LAB_1800073f2;
      }
      else {
        if ((int)local_e8[0] < 2) goto LAB_1800073f2;
        if ((int)local_e8[0] < 4) goto LAB_180007356;
        if (local_e8[0] != 4) goto LAB_1800073f2;
        local_38 = &local_c0;
        local_res10[0] = local_res20[0];
        FUN_1800025a0(puVar5,&local_c0,local_res20[0]);
      }
      puVar5 = puVar5 + local_res10[0];
      uVar3 = (**(code **)(*plVar1 + 0x20))
                        (plVar1,&local_60,&local_80,&local_e0,local_res20,local_e8);
      cVar2 = (char)uVar3;
    }
    *param_3 = (longlong)puVar5 - (longlong)param_2;
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar4;
}




void FUN_180007410(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(longlong *)(param_1 + 0x20050) + param_2 * -0x10000;
  uVar2 = 0x10000;
  if (uVar1 < 0x10000) {
    uVar2 = uVar1;
  }
  FUN_180006d80(*(longlong **)(*(longlong *)(param_1 + 0x20038) + param_2 * 8),param_3,uVar2);
  return;
}




void FUN_180007450(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x20048) != 0) {
    if ((ulonglong)(param_2 * 0x10000) <= *(ulonglong *)(param_1 + 0x20020)) {
      uVar1 = *(ulonglong *)(param_1 + 0x20020) + param_2 * -0x10000;
      if (0xffff < uVar1) {
        uVar1 = 0x10000;
      }
                    /* WARNING: Could not recover jumptable at 0x00018000748e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x20050))
                (*(longlong *)(param_1 + 0x20048),param_3,
                 *(longlong *)(param_1 + 0x20030) + param_2 * 0x10000,uVar1);
      return;
    }
  }
  return;
}




undefined8 FUN_1800074a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 in_RAX;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_2[1];
  if (local_28 != *(longlong *)(param_3 + 8)) {
    local_30 = *param_2;
    local_20 = param_2[2];
    local_18 = param_2[3];
    in_RAX = FUN_180003170(&local_30,0);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 FUN_1800074f0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 local_30;
  longlong lStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = *param_2;
  lStack_28 = param_2[1];
  local_20 = param_2[2];
  uStack_18 = param_2[3];
  if (lStack_28 != *(longlong *)(param_3 + 8)) {
    uStack_18 = FUN_180003170(&local_30,0);
  }
  return CONCAT71((int7)((ulonglong)uStack_18 >> 8),1);
}




void FUN_180007580(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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




char * FUN_1800075f0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




void FUN_180007610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180009c80(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_2;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}




undefined8 *
FUN_180007650(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar4 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar4)();
    return puVar6;
  }
  plVar5 = (longlong *)FUN_180007610(param_1,param_5);
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
  plVar11 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar11[1];
    plVar9 = plVar11 + 1;
    plVar10 = plVar2 + 1;
    plVar8 = *(longlong **)plVar2[1];
    if (plVar2 == plVar8) {
      plVar8 = (longlong *)((undefined8 *)plVar2[1])[2];
      if ((char)plVar8[3] != '\0') {
        plVar8 = (longlong *)plVar2[2];
        plVar7 = plVar2;
        if (plVar11 == plVar8) {
          plVar2[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar2;
          }
          plVar8[1] = *plVar10;
          plVar7 = plVar8;
          plVar9 = plVar10;
          if (plVar2 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
            *plVar8 = (longlong)plVar2;
            *plVar10 = (longlong)plVar8;
            plVar11 = plVar2;
          }
          else {
            puVar6 = (undefined8 *)*plVar10;
            if (plVar2 == (longlong *)*puVar6) {
              *puVar6 = plVar8;
              *plVar8 = (longlong)plVar2;
              *plVar10 = (longlong)plVar8;
              plVar11 = plVar2;
            }
            else {
              puVar6[2] = plVar8;
              *plVar8 = (longlong)plVar2;
              *plVar10 = (longlong)plVar8;
              plVar11 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*plVar9 + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar2 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar2 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
        goto LAB_180007895;
      }
LAB_180007806:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(longlong **)(*plVar9 + 8);
    }
    else {
      if ((char)plVar8[3] == '\0') goto LAB_180007806;
      if (plVar11 == (longlong *)*plVar2) {
        FUN_180009d30(param_1,plVar2);
        plVar11 = plVar2;
      }
      *(undefined1 *)(plVar11[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar11[1] + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(plVar11[1] + 8);
      plVar10 = (longlong *)plVar9[2];
      plVar9[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar9;
      }
      plVar10[1] = plVar9[1];
      if (plVar9 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar6 = (undefined8 *)plVar9[1];
        if (plVar9 == (longlong *)*puVar6) {
          *puVar6 = plVar10;
        }
        else {
          puVar6[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar9;
LAB_180007895:
      plVar9[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}




undefined8 * FUN_1800078e0(longlong *param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  plVar1 = (longlong *)*param_1;
  bVar3 = true;
  plVar4 = plVar1;
  plVar5 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar3 = *param_4 < plVar5[4];
    }
    else {
      bVar3 = *param_4 <= plVar5[4];
    }
    plVar4 = plVar5;
    if (bVar3 == false) {
      plVar5 = (longlong *)plVar5[2];
    }
    else {
      plVar5 = (longlong *)*plVar5;
    }
  }
  local_res8 = plVar4;
  if (bVar3 != false) {
    if (plVar4 == (longlong *)*plVar1) {
      puVar2 = FUN_180007650(param_1,&local_res8,'\x01',plVar4,param_4);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    FUN_1800087e0((longlong *)&local_res8);
  }
  if (local_res8[4] < *param_4) {
    puVar2 = FUN_180007650(param_1,&local_res8,bVar3,plVar4,param_4);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = local_res8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




/* public: __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >(class MyTemplate::CSimpleArray<unsigned
   short,class MyTemplate::CSimpleArrayEqualHelper<unsigned short> > const & __ptr64) __ptr64 */

CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> * __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
          (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
           *this,CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> *pCVar5;
  
                    /* 0x7a00  1
                       ??0?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAA@AEBV01@@Z
                        */
  iVar4 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar3 = malloc((longlong)*(int *)(param_1 + 8) * 2);
  *(void **)this = pvVar3;
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 8);
    pCVar5 = this;
    if (0 < iVar2) {
      do {
        if ((-1 < iVar4) && (iVar4 < iVar2)) {
          pCVar5 = (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                    *)(*(longlong *)param_1 + (longlong)iVar4 * 2);
        }
        if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
          if (*(int *)(this + 0xc) == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = *(int *)(this + 8) * 2;
          }
          pvVar3 = malloc((longlong)iVar2 * 2);
          if (pvVar3 != (void *)0x0) {
            if (*(void **)this != (void *)0x0) {
              memcpy(pvVar3,*(void **)this,(longlong)*(int *)(this + 0xc) * 2);
              free(*(void **)this);
            }
            *(int *)(this + 0xc) = iVar2;
            *(void **)this = pvVar3;
            goto LAB_180007ac1;
          }
        }
        else {
LAB_180007ac1:
          puVar1 = (undefined2 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 2);
          if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = *(undefined2 *)pCVar5;
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)(param_1 + 8);
      } while (iVar4 < iVar2);
    }
  }
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::CSimpleArray<struct
   tagAttriListElement,class MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >(class
   MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> > const & __ptr64) __ptr64 */

CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
* __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
          (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
           *this,CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  *pCVar5;
  
                    /* 0x7b10  3
                       ??0?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAA@AEBV01@@Z
                        */
  iVar4 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar2 = malloc((longlong)*(int *)(param_1 + 8) * 0x30);
  *(void **)this = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 8);
    pCVar5 = this;
    if (0 < iVar1) {
      do {
        if ((-1 < iVar4) && (iVar4 < iVar1)) {
          pCVar5 = (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                    *)((longlong)iVar4 * 0x30 + *(longlong *)param_1);
        }
        if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
          if (*(int *)(this + 0xc) == 0) {
            iVar1 = 1;
          }
          else {
            iVar1 = *(int *)(this + 8) * 2;
          }
          pvVar2 = malloc((longlong)iVar1 * 0x30);
          if (pvVar2 != (void *)0x0) {
            if (*(void **)this != (void *)0x0) {
              memcpy(pvVar2,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x30);
              free(*(void **)this);
            }
            *(int *)(this + 0xc) = iVar1;
            *(void **)this = pvVar2;
            goto LAB_180007be3;
          }
        }
        else {
LAB_180007be3:
          puVar3 = (undefined4 *)((longlong)*(int *)(this + 8) * 0x30 + *(longlong *)this);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)pCVar5;
            *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(pCVar5 + 8);
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(pCVar5 + 0x10);
            *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(pCVar5 + 0x18);
            CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            ::
            CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                        *)(puVar3 + 8),
                       (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                        *)(pCVar5 + 0x20));
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = *(int *)(param_1 + 8);
      } while (iVar4 < iVar1);
    }
  }
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >(class MyTemplate::CSimpleArray<struct
   tagDataRun,class MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > const & __ptr64)
   __ptr64 */

CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_> *
__thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
          (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *pCVar8;
  
                    /* 0x7c60  7
                       ??0?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAA@AEBV01@@Z
                        */
  iVar7 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar6 = malloc((longlong)*(int *)(param_1 + 8) * 0x18);
  *(void **)this = pvVar6;
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 8);
    pCVar8 = this;
    if (0 < iVar5) {
      do {
        if ((-1 < iVar7) && (iVar7 < iVar5)) {
          pCVar8 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                    *)(*(longlong *)param_1 + (longlong)iVar7 * 0x18);
        }
        if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
          if (*(int *)(this + 0xc) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = *(int *)(this + 8) * 2;
          }
          pvVar6 = malloc((longlong)iVar5 * 0x18);
          if (pvVar6 != (void *)0x0) {
            if (*(void **)this != (void *)0x0) {
              memcpy(pvVar6,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
              free(*(void **)this);
            }
            *(int *)(this + 0xc) = iVar5;
            *(void **)this = pvVar6;
            goto LAB_180007d32;
          }
        }
        else {
LAB_180007d32:
          puVar1 = (undefined4 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
          if (puVar1 != (undefined4 *)0x0) {
            uVar2 = *(undefined4 *)(pCVar8 + 4);
            uVar3 = *(undefined4 *)(pCVar8 + 8);
            uVar4 = *(undefined4 *)(pCVar8 + 0xc);
            *puVar1 = *(undefined4 *)pCVar8;
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
            puVar1[3] = uVar4;
            *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(pCVar8 + 0x10);
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = *(int *)(param_1 + 8);
      } while (iVar7 < iVar5);
    }
  }
  return this;
}




CNtfsMFT * FUN_180007d90(CNtfsMFT *param_1)

{
  undefined8 uVar1;
  
  CNtfsMFT::CNtfsMFT(param_1);
  *(undefined ***)param_1 = NtfsLib::CExtendMFT::vftable;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar1 = FUN_180009c40();
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return param_1;
}




/* public: __cdecl CHardDriveIO::CHardDriveIO(class CHardDriveIO const & __ptr64) __ptr64 */

CHardDriveIO * __thiscall CHardDriveIO::CHardDriveIO(CHardDriveIO *this,CHardDriveIO *param_1)

{
                    /* 0x7e00  10  ??0CHardDriveIO@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  this[0x48] = param_1[0x48];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  return this;
}




/* public: __cdecl CHardDriveIOSetting::CHardDriveIOSetting(class CHardDriveIOSetting const &
   __ptr64) __ptr64 */

CHardDriveIOSetting * __thiscall
CHardDriveIOSetting::CHardDriveIOSetting(CHardDriveIOSetting *this,CHardDriveIOSetting *param_1)

{
                    /* 0x7e70  12  ??0CHardDriveIOSetting@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl CNtfsAttributeList::CNtfsAttributeList(class CNtfsAttributeList const & __ptr64)
   __ptr64 */

CNtfsAttributeList * __thiscall
CNtfsAttributeList::CNtfsAttributeList(CNtfsAttributeList *this,CNtfsAttributeList *param_1)

{
                    /* 0x7e80  14  ??0CNtfsAttributeList@@QEAA@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            ((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
              *)this,(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                      *)param_1);
  return this;
}




/* public: __cdecl CNtfsRunList::CNtfsRunList(class CNtfsRunList const & __ptr64) __ptr64 */

CNtfsRunList * __thiscall CNtfsRunList::CNtfsRunList(CNtfsRunList *this,CNtfsRunList *param_1)

{
                    /* 0x7eb0  23  ??0CNtfsRunList@@QEAA@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
            ((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
              *)this,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                      *)param_1);
  return this;
}




/* public: __cdecl CNtfsString::CNtfsString(class CNtfsString const & __ptr64) __ptr64 */

CNtfsString * __thiscall CNtfsString::CNtfsString(CNtfsString *this,CNtfsString *param_1)

{
                    /* 0x7ee0  25  ??0CNtfsString@@QEAA@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
              *)this,(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)param_1);
  return this;
}




/* protected: __cdecl CNtfsVolume::CNtfsVolume(class CNtfsVolume & __ptr64) __ptr64 */

CNtfsVolume * __thiscall CNtfsVolume::CNtfsVolume(CNtfsVolume *this,CNtfsVolume *param_1)

{
                    /* 0x7f10  29  ??0CNtfsVolume@@IEAA@AEAV0@@Z
                       0x7f10  30  ??0CNtfsVolume@@IEAA@PEAV0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x7f20  39  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x7f20  40  ??0IObject@@QEAA@AEBU0@@Z
                       0x7f20  41  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::~CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >(void) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
          (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
           *this)

{
                    /* 0x7f30  48
                       ??1?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0x7f30  51
                       ??1?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::~CSimpleArray<struct
   tagAttriListElement,class MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >(void)
   __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::
~CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
          (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
           *this)

{
                    /* 0x7f70  49
                       ??1?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  RemoveAll(this);
  return;
}




void FUN_180007f90(longlong *param_1)

{
  FUN_180009d90(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180007fc0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180007fe0(longlong *param_1)

{
  FUN_180009d90(param_1);
  free((void *)*param_1);
  return;
}




void FUN_180008010(CNtfsMFT *param_1)

{
  *(undefined ***)param_1 = NtfsLib::CExtendMFT::vftable;
  FUN_180009d90((longlong *)(param_1 + 0xf8));
  free(*(void **)(param_1 + 0xf8));
  CNtfsMFT::~CNtfsMFT(param_1);
  return;
}




void FUN_180008070(longlong param_1)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_1 + 0x20));
  return;
}




/* public: class MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> > & __ptr64 __cdecl
   MyTemplate::CSimpleArray<unsigned short,class MyTemplate::CSimpleArrayEqualHelper<unsigned short>
   >::operator=(class MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> > const & __ptr64) __ptr64 */

CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> * __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::operator=(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            *this,CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                  *param_1)

{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> *pCVar8;
  
                    /* 0x8090  66
                       ??4?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAAEAV01@AEBV01@@Z
                        */
  iVar4 = *(int *)(this + 8);
  iVar5 = 0;
  if (iVar4 == *(int *)(param_1 + 8)) {
    if (0 < iVar4) {
      iVar6 = iVar4 + -1;
      lVar7 = (longlong)iVar6 * 2;
      do {
        if ((-1 < iVar6) && (iVar3 = *(int *)(this + 8), iVar6 < iVar3)) {
          if (iVar6 != iVar3 + -1) {
            memmove((void *)(*(longlong *)this + lVar7),(void *)(*(longlong *)this + lVar7 + 2),
                    (longlong)(iVar3 - iVar4) * 2);
            iVar3 = *(int *)(this + 8);
          }
          *(int *)(this + 8) = iVar3 + -1;
        }
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -2;
      } while (0 < iVar4);
    }
  }
  else {
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined8 *)(this + 8) = 0;
    pvVar2 = malloc((longlong)*(int *)(param_1 + 8) * 2);
    *(void **)this = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  pCVar8 = this;
  if (0 < iVar4) {
    do {
      if ((-1 < iVar5) && (iVar5 < iVar4)) {
        pCVar8 = (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                  *)(*(longlong *)param_1 + (longlong)iVar5 * 2);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = *(int *)(this + 8) * 2;
        }
        pvVar2 = malloc((longlong)iVar4 * 2);
        if (pvVar2 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar2,*(void **)this,(longlong)*(int *)(this + 0xc) * 2);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar4;
          *(void **)this = pvVar2;
          goto LAB_1800081b1;
        }
      }
      else {
LAB_1800081b1:
        puVar1 = (undefined2 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 2);
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = *(undefined2 *)pCVar8;
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 8);
    } while (iVar5 < iVar4);
  }
  return this;
}




/* public: class MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> > & __ptr64 __cdecl
   MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::operator=(class
   MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> > const & __ptr64) __ptr64 */

CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
* __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::operator=(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            *this,CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                  *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  *pCVar6;
  longlong lVar7;
  
                    /* 0x8200  67
                       ??4?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAAEAV01@AEBV01@@Z
                        */
  iVar4 = *(int *)(this + 8);
  if (iVar4 == *(int *)(param_1 + 8)) {
    if (0 < iVar4) {
      iVar5 = iVar4 + -1;
      lVar7 = (longlong)iVar5 * 0x30;
      do {
        if ((-1 < iVar5) && (iVar5 < *(int *)(this + 8))) {
          CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)this + lVar7 + 0x20));
          iVar3 = *(int *)(this + 8);
          if (iVar5 != iVar3 + -1) {
            memmove((void *)(*(longlong *)this + lVar7),(void *)(*(longlong *)this + lVar7 + 0x30),
                    (longlong)((iVar3 - iVar5) + -1) * 0x30);
            iVar3 = *(int *)(this + 8);
          }
          *(int *)(this + 8) = iVar3 + -1;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -1;
        lVar7 = lVar7 + -0x30;
      } while (0 < iVar4);
    }
  }
  else {
    RemoveAll(this);
    pvVar1 = malloc((longlong)*(int *)(param_1 + 8) * 0x30);
    *(void **)this = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    }
  }
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 8);
  pCVar6 = this;
  if (0 < iVar4) {
    do {
      if ((-1 < iVar5) && (iVar5 < iVar4)) {
        pCVar6 = (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                  *)((longlong)iVar5 * 0x30 + *(longlong *)param_1);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = *(int *)(this + 8) * 2;
        }
        pvVar1 = malloc((longlong)iVar4 * 0x30);
        if (pvVar1 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar1,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x30);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar4;
          *(void **)this = pvVar1;
          goto LAB_180008343;
        }
      }
      else {
LAB_180008343:
        puVar2 = (undefined4 *)((longlong)*(int *)(this + 8) * 0x30 + *(longlong *)this);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)pCVar6;
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(pCVar6 + 8);
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(pCVar6 + 0x10);
          *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(pCVar6 + 0x18);
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                    ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)(puVar2 + 8),
                     (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)(pCVar6 + 0x20));
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 8);
    } while (iVar5 < iVar4);
  }
  return this;
}




/* public: class MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > & __ptr64 __cdecl
   MyTemplate::CSimpleArray<struct tagDataRun,class MyTemplate::CSimpleArrayEqualHelper<struct
   tagDataRun> >::operator=(class MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> > const & __ptr64) __ptr64 */

CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_> *
__thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
operator=(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
          *this,CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *pCVar9;
  
                    /* 0x83c0  69
                       ??4?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAAEAV01@AEBV01@@Z
                        */
  iVar5 = *(int *)(this + 8);
  iVar6 = 0;
  if (iVar5 == *(int *)(param_1 + 8)) {
    if (0 < iVar5) {
      iVar7 = iVar5 + -1;
      lVar8 = (longlong)iVar7 * 0x18;
      do {
        if ((-1 < iVar7) && (iVar4 = *(int *)(this + 8), iVar7 < iVar4)) {
          if (iVar7 != iVar4 + -1) {
            memmove((void *)(*(longlong *)this + lVar8),(void *)(*(longlong *)this + lVar8 + 0x18),
                    (longlong)(iVar4 - iVar5) * 0x18);
            iVar4 = *(int *)(this + 8);
          }
          *(int *)(this + 8) = iVar4 + -1;
        }
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + -0x18;
      } while (0 < iVar5);
    }
  }
  else {
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined8 *)(this + 8) = 0;
    pvVar3 = malloc((longlong)*(int *)(param_1 + 8) * 0x18);
    *(void **)this = pvVar3;
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  pCVar9 = this;
  if (0 < iVar5) {
    do {
      if ((-1 < iVar6) && (iVar6 < iVar5)) {
        pCVar9 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                  *)(*(longlong *)param_1 + (longlong)iVar6 * 0x18);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = *(int *)(this + 8) * 2;
        }
        pvVar3 = malloc((longlong)iVar5 * 0x18);
        if (pvVar3 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar3,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar5;
          *(void **)this = pvVar3;
          goto LAB_1800084ff;
        }
      }
      else {
LAB_1800084ff:
        puVar1 = (undefined8 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)(pCVar9 + 8);
          *puVar1 = *(undefined8 *)pCVar9;
          puVar1[1] = uVar2;
          puVar1[2] = *(undefined8 *)(pCVar9 + 0x10);
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 8);
    } while (iVar6 < iVar5);
  }
  return this;
}




/* public: class CHardDriveIO & __ptr64 __cdecl CHardDriveIO::operator=(class CHardDriveIO const &
   __ptr64) __ptr64 */

CHardDriveIO * __thiscall CHardDriveIO::operator=(CHardDriveIO *this,CHardDriveIO *param_1)

{
                    /* 0x8560  70  ??4CHardDriveIO@@QEAAAEAV0@AEBV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  this[0x48] = param_1[0x48];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  return this;
}




/* public: class CHardDriveIOSetting & __ptr64 __cdecl CHardDriveIOSetting::operator=(class
   CHardDriveIOSetting const & __ptr64) __ptr64 */

CHardDriveIOSetting * __thiscall
CHardDriveIOSetting::operator=(CHardDriveIOSetting *this,CHardDriveIOSetting *param_1)

{
                    /* 0x85c0  71  ??4CHardDriveIOSetting@@QEAAAEAV0@AEBV0@@Z
                       0x85c0  73  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x85c0  74  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x85c0  75  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x85c0  76  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x85c0  85  ??4CRecordAttributeReaderI@@QEAAAEAV0@$$QEAV0@@Z
                       0x85c0  86  ??4CRecordAttributeReaderI@@QEAAAEAV0@AEBV0@@Z
                       0x85c0  87  ??4CRecordAttributeWriterI@@QEAAAEAV0@$$QEAV0@@Z
                       0x85c0  88  ??4CRecordAttributeWriterI@@QEAAAEAV0@AEBV0@@Z
                       0x85c0  89  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x85c0  90  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x85c0  91  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x85c0  92  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x85d0  72  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z
                       0x85d0  94  ??4TBuffer@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CNtfsAttributeList & __ptr64 __cdecl CNtfsAttributeList::operator=(class
   CNtfsAttributeList const & __ptr64) __ptr64 */

CNtfsAttributeList * __thiscall
CNtfsAttributeList::operator=(CNtfsAttributeList *this,CNtfsAttributeList *param_1)

{
                    /* 0x85e0  77  ??4CNtfsAttributeList@@QEAAAEAV0@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::operator=((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)this,(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                       *)param_1);
  return this;
}




/* public: class CNtfsMFT & __ptr64 __cdecl CNtfsMFT::operator=(class CNtfsMFT & __ptr64) __ptr64 */

CNtfsMFT * __thiscall CNtfsMFT::operator=(CNtfsMFT *this,CNtfsMFT *param_1)

{
                    /* 0x8600  80  ??4CNtfsMFT@@QEAAAEAV0@AEAV0@@Z */
  CNtfsVolume::operator=((CNtfsVolume *)(this + 8),(CNtfsVolume *)(param_1 + 8));
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  operator=((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)(this + 0x60),
            (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)(param_1 + 0x60));
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  this[0xc0] = param_1[0xc0];
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  return this;
}




/* public: class CNtfsRunList & __ptr64 __cdecl CNtfsRunList::operator=(class CNtfsRunList const &
   __ptr64) __ptr64 */

CNtfsRunList * __thiscall CNtfsRunList::operator=(CNtfsRunList *this,CNtfsRunList *param_1)

{
                    /* 0x8720  82  ??4CNtfsRunList@@QEAAAEAV0@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  operator=((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)this,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                     *)param_1);
  return this;
}




/* public: class CNtfsString & __ptr64 __cdecl CNtfsString::operator=(class CNtfsString const &
   __ptr64) __ptr64 */

CNtfsString * __thiscall CNtfsString::operator=(CNtfsString *this,CNtfsString *param_1)

{
                    /* 0x8740  83  ??4CNtfsString@@QEAAAEAV0@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::operator=
            ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
              *)this,(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)param_1);
  return this;
}




/* public: unsigned short & __ptr64 __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::operator[](int) __ptr64 */

ushort * __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::operator[](CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
             *this,int param_1)

{
  ushort *in_RAX;
  
                    /* 0x8760  97
                       ??A?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAAEAGH@Z
                       0x8760  98
                       ??A?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEBAAEBGH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (ushort *)(*(longlong *)this + (longlong)param_1 * 2);
  }
  return in_RAX;
}




/* public: struct tagAttriListElement & __ptr64 __cdecl MyTemplate::CSimpleArray<struct
   tagAttriListElement,class MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement>
   >::operator[](int) __ptr64 */

tagAttriListElement * __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::operator[](CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
             *this,int param_1)

{
  tagAttriListElement *in_RAX;
  
                    /* 0x8780  99
                       ??A?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAAEAUtagAttriListElement@@H@Z
                       0x8780  100
                       ??A?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEBAAEBUtagAttriListElement@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (tagAttriListElement *)((longlong)param_1 * 0x30 + *(longlong *)this);
  }
  return in_RAX;
}




/* public: struct tagDataRun & __ptr64 __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::operator[](int) __ptr64 */

tagDataRun * __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
operator[](CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,int param_1)

{
  tagDataRun *in_RAX;
  
                    /* 0x87a0  103
                       ??A?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAAEAUtagDataRun@@H@Z
                       0x87a0  104
                       ??A?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEBAAEBUtagDataRun@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (tagDataRun *)(*(longlong *)this + (longlong)param_1 * 0x18);
  }
  return in_RAX;
}




/* public: class CNtfsFileRecordAttribute & __ptr64 __cdecl MyTemplate::CSimpleArray<class
   CNtfsFileRecordAttribute,class MyTemplate::CSimpleArrayEqualHelper<class
   CNtfsFileRecordAttribute> >::operator[](int) __ptr64 */

CNtfsFileRecordAttribute * __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::operator[](CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
             *this,int param_1)

{
  CNtfsFileRecordAttribute *in_RAX;
  
                    /* 0x87c0  105
                       ??A?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAAEAVCNtfsFileRecordAttribute@@H@Z
                       0x87c0  106
                       ??A?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEBAAEBVCNtfsFileRecordAttribute@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (CNtfsFileRecordAttribute *)((longlong)param_1 * 0x10 + *(longlong *)this);
  }
  return in_RAX;
}




longlong * FUN_1800087e0(longlong *param_1)

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




CHardDriveIO * FUN_180008870(CHardDriveIO *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x60,*(__uint64 *)(param_1 + -8),CHardDriveIO::~CHardDriveIO);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CHardDriveIO::~CHardDriveIO(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




CHardDriveIOSetting * FUN_180008910(CHardDriveIOSetting *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,8,*(__uint64 *)(param_1 + -8),CHardDriveIOSetting::~CHardDriveIOSetting);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CHardDriveIOSetting::~CHardDriveIOSetting(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




CNtfsVolume * FUN_1800089b0(CNtfsVolume *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x58,*(__uint64 *)(param_1 + -8),CNtfsVolume::~CNtfsVolume);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CNtfsVolume::~CNtfsVolume(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




CNtfsMFT * FUN_180008a50(CNtfsMFT *param_1,uint param_2)

{
  *(undefined ***)param_1 = NtfsLib::CExtendMFT::vftable;
  FUN_180009d90((longlong *)(param_1 + 0xf8));
  free(*(void **)(param_1 + 0xf8));
  CNtfsMFT::~CNtfsMFT(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::Add(unsigned short const & __ptr64)
   __ptr64 */

int __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::Add(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> *this,
     ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0x8ad0  122
                       ?Add@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAHAEBG@Z
                        */
  iVar2 = *(int *)(this + 8);
  if (iVar2 == *(int *)(this + 0xc)) {
    iVar3 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar3 = iVar2 * 2;
    }
    _Dst = malloc((longlong)iVar3 * 2);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 2);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar3;
    *(void **)this = _Dst;
    iVar2 = *(int *)(this + 8);
  }
  puVar1 = (ushort *)(*(longlong *)this + (longlong)iVar2 * 2);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::Add(struct tagAttriListElement
   const & __ptr64) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::Add(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
      *this,tagAttriListElement *param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  
                    /* 0x8b90  123
                       ?Add@?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAHAEBUtagAttriListElement@@@Z
                        */
  iVar1 = *(int *)(this + 8);
  if (iVar1 == *(int *)(this + 0xc)) {
    iVar2 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar2 = iVar1 * 2;
    }
    _Dst = malloc((longlong)iVar2 * 0x30);
    if (_Dst == (void *)0x0) goto LAB_180008c1a;
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x30);
      free(*(void **)this);
    }
    iVar1 = *(int *)(this + 8);
    *(int *)(this + 0xc) = iVar2;
    *(void **)this = _Dst;
  }
  InternalSetAtIndex(this,iVar1,param_1);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  _Dst = (void *)0x1;
LAB_180008c1a:
  return (int)_Dst;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::Add(struct tagDataRun const & __ptr64)
   __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::Add
          (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
           *this,tagDataRun *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
                    /* 0x8c30  125
                       ?Add@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAHAEBUtagDataRun@@@Z
                        */
  iVar3 = *(int *)(this + 8);
  if (iVar3 == *(int *)(this + 0xc)) {
    iVar4 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar4 = iVar3 * 2;
    }
    _Dst = malloc((longlong)iVar4 * 0x18);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar4;
    *(void **)this = _Dst;
    iVar3 = *(int *)(this + 8);
  }
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)iVar3 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x8d00  128  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180008d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




void FUN_180008d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_448 [32];
  undefined8 local_428;
  undefined8 local_420;
  CHAR local_418;
  char acStack_417 [1007];
  ulonglong local_28;
  
  local_28 = DAT_18002c018 ^ (ulonglong)auStack_448;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  memset(&local_418,0,1000);
  puVar2 = (undefined8 *)FUN_180009e70();
  local_428 = 0;
  local_420 = &local_res10;
  __stdio_common_vsprintf_s(*puVar2,&local_418,1000,param_1);
  uVar1 = 0xffffffffffffffff;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
  } while (acStack_417[uVar3] != '\0');
  if (((uVar3 + 1 < 3) || ((&local_418)[uVar3] != '\n')) ||
     (*(char *)((longlong)&local_420 + uVar3 + 7) != '\n')) {
    (acStack_417 + uVar3)[0] = '\r';
    (acStack_417 + uVar3)[1] = '\n';
    acStack_417[uVar3 + 2] = '\0';
  }
  OutputDebugStringA(&local_418);
  CLogWriter::Log(&local_418);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_448);
  return;
}




void FUN_180008e00(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_res8;
  
  if ((0 < *(int *)(param_1 + 0x20)) && (0 < *(int *)(param_1 + 0x28))) {
    iVar1 = *(int *)(param_1 + 0x68);
    uVar3 = 0;
    uVar4 = uVar3;
    uVar5 = uVar3;
    if (0 < iVar1) {
      do {
        iVar2 = (int)uVar3;
        if ((-1 < iVar2) && (iVar2 < iVar1)) {
          local_res8 = *(longlong *)(param_1 + 0x60) + uVar4;
        }
        uVar5 = uVar5 + *(longlong *)(local_res8 + 0x10);
        uVar3 = (ulonglong)(iVar2 + 1U);
        uVar4 = uVar4 + 0x18;
      } while ((int)(iVar2 + 1U) < iVar1);
    }
    *(undefined4 *)(param_1 + 0xd8) = 1;
    *(longlong *)(param_1 + 0x70) =
         (longlong)((longlong)*(int *)(param_1 + 0x24) * (longlong)*(int *)(param_1 + 0x20) * uVar5)
         / (longlong)*(int *)(param_1 + 0x28);
  }
  return;
}




/* public: long __cdecl CNtfsFileRecordAttribute::GetAttributeHeaderSize(void) __ptr64 */

long __thiscall CNtfsFileRecordAttribute::GetAttributeHeaderSize(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x8e80  162  ?GetAttributeHeaderSize@CNtfsFileRecordAttribute@@QEAAJXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (long)*(ushort *)(lVar1 + 0x14);
  }
  return (long)*(ushort *)(lVar1 + 0x20);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetAttributeLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetAttributeLength(CNtfsFileRecordAttribute *this)

{
                    /* 0x8ea0  163  ?GetAttributeLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  return (ulonglong)*(uint *)(*(longlong *)this + 4);
}




/* public: long __cdecl CNtfsVolume::GetBytesPerFileRecord(void)const __ptr64 */

long __thiscall CNtfsVolume::GetBytesPerFileRecord(CNtfsVolume *this)

{
                    /* 0x8eb0  172  ?GetBytesPerFileRecord@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x20);
}




/* public: long __cdecl CNtfsVolume::GetBytesPerSector(void)const __ptr64 */

long __thiscall CNtfsVolume::GetBytesPerSector(CNtfsVolume *this)

{
                    /* 0x8ec0  173  ?GetBytesPerSector@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x18);
}




/* public: unsigned short __cdecl CNtfsFileRecordAttribute::GetCompressionUnitSize(void)const
   __ptr64 */

ushort __thiscall CNtfsFileRecordAttribute::GetCompressionUnitSize(CNtfsFileRecordAttribute *this)

{
                    /* 0x8ed0  176  ?GetCompressionUnitSize@CNtfsFileRecordAttribute@@QEBAGXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  return *(ushort *)(*(longlong *)this + 0x22);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataAllocatedLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataAllocatedLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x8ef0  177  ?GetDataAllocatedLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x28);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataInitiatedLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataInitiatedLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x8f10  179  ?GetDataInitiatedLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x38);
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetDataRealLength(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetDataRealLength(CNtfsFileRecordAttribute *this)

{
  longlong lVar1;
  
                    /* 0x8f30  180  ?GetDataRealLength@CNtfsFileRecordAttribute@@QEBA_JXZ */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(__int64 *)(lVar1 + 0x30);
}




/* public: unsigned short __cdecl CNtfsFileRecordAttribute::GetFlags(void)const __ptr64 */

ushort __thiscall CNtfsFileRecordAttribute::GetFlags(CNtfsFileRecordAttribute *this)

{
                    /* 0x8f50  187  ?GetFlags@CNtfsFileRecordAttribute@@QEBAGXZ */
  return *(ushort *)(*(longlong *)this + 0xc);
}




/* public: class CHardDriveIO & __ptr64 __cdecl CNtfsMFT::GetHardDriveIO(void) __ptr64 */

CHardDriveIO * __thiscall CNtfsMFT::GetHardDriveIO(CNtfsMFT *this)

{
                    /* 0x8f60  189  ?GetHardDriveIO@CNtfsMFT@@QEAAAEAVCHardDriveIO@@XZ */
  return (CHardDriveIO *)(this + 0x78);
}




/* public: long __cdecl CNtfsVolume::GetHardDriveNumber(void)const __ptr64 */

long __thiscall CNtfsVolume::GetHardDriveNumber(CNtfsVolume *this)

{
                    /* 0x8f70  191  ?GetHardDriveNumber@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x38);
}




/* public: unsigned long __cdecl CNtfsFileRecordAttribute::GetID(void)const __ptr64 */

ulong __thiscall CNtfsFileRecordAttribute::GetID(CNtfsFileRecordAttribute *this)

{
                    /* 0x8f80  192  ?GetID@CNtfsFileRecordAttribute@@QEBAKXZ */
  return (ulong)*(ushort *)(*(longlong *)this + 0xe);
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x8f90  194  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180008f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetLastVCN(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetLastVCN(CNtfsFileRecordAttribute *this)

{
                    /* 0x8fa0  196  ?GetLastVCN@CNtfsFileRecordAttribute@@QEBA_JXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return -1;
  }
  return *(__int64 *)(*(longlong *)this + 0x18);
}




/* public: struct ILdmVolume * __ptr64 __cdecl CNtfsVolume::GetLdmVolumeAsDisk(void)const __ptr64 */

ILdmVolume * __thiscall CNtfsVolume::GetLdmVolumeAsDisk(CNtfsVolume *this)

{
                    /* 0x8fc0  197  ?GetLdmVolumeAsDisk@CNtfsVolume@@QEBAPEAUILdmVolume@@XZ */
  return *(ILdmVolume **)(this + 0x48);
}




/* public: void * __ptr64 __cdecl TBuffer::GetBuffer(void) __ptr64 */

void * __thiscall TBuffer::GetBuffer(TBuffer *this)

{
                    /* 0x8fd0  170  ?GetBuffer@TBuffer@@QEAAPEAXXZ
                       0x8fd0  201  ?GetMftLcnAddress@CNtfsVolume@@QEBA_JXZ */
  return *(void **)(this + 8);
}




/* public: __int64 __cdecl TBitmap::GetMaxBitIndex(void) __ptr64 */

__int64 __thiscall TBitmap::GetMaxBitIndex(TBitmap *this)

{
                    /* 0x8fe0  200  ?GetMaxBitIndex@TBitmap@@QEAA_JXZ
                       0x8fe0  202  ?GetMftMirrorLcnAddress@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x10);
}




undefined8 FUN_180008ff0(longlong param_1,longlong *param_2,undefined4 *param_3,ulonglong *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar6;
  CNtfsFileRecordAttribute *this;
  ulonglong uVar7;
  CNtfsFileRecordAttribute *local_res10;
  CNtfsRunList local_30 [8];
  int local_28;
  ulonglong uVar5;
  
  uVar6 = 0;
  iVar1 = (int)param_2[1];
  uVar5 = uVar6;
  this = local_res10;
  if (0 < iVar1) {
    do {
      iVar4 = (int)uVar5;
      if ((-1 < iVar4) && (iVar4 < iVar1)) {
        this = (CNtfsFileRecordAttribute *)((longlong)iVar4 * 0x10 + *param_2);
      }
      piVar2 = *(int **)this;
      if ((*piVar2 == 0x80) && (*(char *)((longlong)piVar2 + 9) == '\0')) {
        if ((char)piVar2[2] == '\0') {
          return 0;
        }
        CNtfsRunList::CNtfsRunList(local_30);
        CNtfsFileRecordAttribute::GetDataRunList(this,local_30);
        if (0 < local_28) {
          *param_3 = *(undefined4 *)(param_1 + 0x68);
          CNtfsRunList::Append((CNtfsRunList *)(param_1 + 0x60),local_30);
          param_3[1] = *(undefined4 *)(param_1 + 0x68);
          if ((0 < *(int *)(param_1 + 0x20)) && (0 < *(int *)(param_1 + 0x28))) {
            iVar1 = *(int *)(param_1 + 0x68);
            uVar5 = uVar6;
            uVar7 = uVar6;
            if (0 < iVar1) {
              do {
                iVar4 = (int)uVar6;
                if ((-1 < iVar4) && (iVar4 < iVar1)) {
                  local_res10 = (CNtfsFileRecordAttribute *)(*(longlong *)(param_1 + 0x60) + uVar5);
                }
                uVar7 = uVar7 + *(longlong *)(local_res10 + 0x10);
                uVar6 = (ulonglong)(iVar4 + 1U);
                uVar5 = uVar5 + 0x18;
              } while ((int)(iVar4 + 1U) < iVar1);
            }
            *(longlong *)(param_1 + 0x70) =
                 (longlong)
                 ((longlong)*(int *)(param_1 + 0x20) * (longlong)*(int *)(param_1 + 0x24) * uVar7) /
                 (longlong)*(int *)(param_1 + 0x28);
            *(undefined4 *)(param_1 + 0xd8) = 1;
          }
        }
        if (param_4 != (ulonglong *)0x0) {
          lVar3 = *(longlong *)this;
          if (*(char *)(lVar3 + 8) == '\0') {
            uVar5 = (ulonglong)*(uint *)(lVar3 + 0x10);
          }
          else {
            uVar5 = *(ulonglong *)(lVar3 + 0x28);
          }
          *param_4 = uVar5;
        }
        CNtfsRunList::~CNtfsRunList(local_30);
        return 1;
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < iVar1);
  }
  return 0;
}




undefined8 FUN_180009150(CNtfsMultiFileRecord *param_1,CNtfsFileRecord *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  tagCNtfsFileRecordForMultiRecord *ptVar4;
  uchar *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  TBuffer local_40 [24];
  
  uVar10 = 0xfffffffffffffffe;
  ptVar4 = CNtfsMultiFileRecord::GetMainFileRecord(param_1);
  lVar6 = -1;
  if (*(longlong *)(ptVar4 + 8) == -1) {
    lVar7 = -1;
  }
  else {
    lVar7 = (longlong)*(int *)(ptVar4 + 0x1c) * *(longlong *)(ptVar4 + 8) +
            *(longlong *)(ptVar4 + 0x30);
  }
  iVar3 = *(int *)(ptVar4 + 0x18);
  if ((iVar3 < 1) || (lVar1 = *(long *)(ptVar4 + 0x20), lVar1 < 1)) {
    return 0;
  }
  iVar2 = lVar1;
  if (lVar1 < iVar3) {
    iVar2 = iVar3;
  }
  lVar9 = (longlong)(iVar2 / iVar3);
  TBuffer::TBuffer(local_40);
  puVar5 = (uchar *)TBuffer::Malloc(local_40,iVar2);
  if (puVar5 != (uchar *)0x0) {
    lVar8 = lVar9;
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))
                      (param_1 + 0x78,puVar5,lVar7,lVar9,uVar10);
    if (iVar3 != 0) {
      iVar3 = CNtfsFileRecord::InitFromSourceFileRecord(param_2,puVar5,lVar1);
      if (iVar3 == 0) {
        FUN_180008d10("Call InitFromSourceFileRecord for $MFT failed!\n(%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\extendmft.cpp",
                      0x135,lVar8);
        goto LAB_180009231;
      }
LAB_18000928e:
      uVar10 = 1;
      goto LAB_180009293;
    }
LAB_180009231:
    if (*(longlong *)(ptVar4 + 0x10) != -1) {
      lVar6 = (longlong)*(int *)(ptVar4 + 0x1c) * *(longlong *)(ptVar4 + 0x10) +
              *(longlong *)(ptVar4 + 0x30);
    }
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))(param_1 + 0x78,puVar5,lVar6);
    if (iVar3 != 0) {
      iVar3 = CNtfsFileRecord::InitFromSourceFileRecord(param_2,puVar5,lVar1);
      if (iVar3 != 0) goto LAB_18000928e;
      FUN_180008d10("Call InitFromSourceFileRecord for $MFT failed!\n(%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\extendmft.cpp",0x147
                    ,lVar9);
    }
  }
  uVar10 = 0;
LAB_180009293:
  TBuffer::~TBuffer(local_40);
  return uVar10;
}




/* public: int __cdecl CNtfsFileRecordAttribute::GetName(unsigned short * __ptr64,long)const __ptr64
    */

int __thiscall
CNtfsFileRecordAttribute::GetName(CNtfsFileRecordAttribute *this,ushort *param_1,long param_2)

{
  longlong lVar1;
  
                    /* 0x92c0  207  ?GetName@CNtfsFileRecordAttribute@@QEBAHPEAGJ@Z */
  if ((*(byte *)(*(longlong *)this + 9) != 0) &&
     ((int)((uint)*(byte *)(*(longlong *)this + 9) * 2) <= param_2)) {
    memset(param_1,0,(longlong)param_2);
    lVar1 = *(longlong *)this;
    memcpy(param_1,(void *)((ulonglong)*(ushort *)(lVar1 + 10) + lVar1),
           (ulonglong)*(byte *)(lVar1 + 9) * 2);
    return 1;
  }
  return 0;
}




/* public: long __cdecl CNtfsFileRecordAttribute::GetNameLength(void)const __ptr64 */

long __thiscall CNtfsFileRecordAttribute::GetNameLength(CNtfsFileRecordAttribute *this)

{
                    /* 0x9330  208  ?GetNameLength@CNtfsFileRecordAttribute@@QEBAJXZ
                       0x9330  256  ?IsNamed@CNtfsFileRecordAttribute@@QEBAHXZ */
  return (long)*(byte *)(*(longlong *)this + 9);
}




/* public: __int64 __cdecl CNtfsVolume::GetSectorAddressFromLCN(__int64)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetSectorAddressFromLCN(CNtfsVolume *this,__int64 param_1)

{
                    /* 0x9340  211  ?GetSectorAddressFromLCN@CNtfsVolume@@QEBA_J_J@Z */
  if (param_1 == -1) {
    return -1;
  }
  return *(int *)(this + 0x1c) * param_1 + *(longlong *)(this + 0x30);
}




/* public: long __cdecl CNtfsVolume::GetSectorsPerCluster(void)const __ptr64 */

long __thiscall CNtfsVolume::GetSectorsPerCluster(CNtfsVolume *this)

{
                    /* 0x9360  213  ?GetSectorsPerCluster@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x1c);
}




/* public: long __cdecl CNtfsVolume::GetSectorsPerIndexRecord(void)const __ptr64 */

long __thiscall CNtfsVolume::GetSectorsPerIndexRecord(CNtfsVolume *this)

{
                    /* 0x9370  214  ?GetSectorsPerIndexRecord@CNtfsVolume@@QEBAJXZ */
  return *(long *)(this + 0x24);
}




/* public: int __cdecl TBitmap::GetBitmapSize(void) __ptr64 */

int __thiscall TBitmap::GetBitmapSize(TBitmap *this)

{
                    /* 0x9380  169  ?GetBitmapSize@TBitmap@@QEAAHXZ
                       0x9380  215
                       ?GetSize@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x9380  216
                       ?GetSize@?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x9380  217
                       ?GetSize@?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x9380  218
                       ?GetSize@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x9380  219
                       ?GetSize@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                       0x9380  220
                       ?GetSize@?$CSimpleArray@VCNtfsRunList@@V?$CSimpleArrayEqualHelper@VCNtfsRunList@@@MyTemplate@@@MyTemplate@@QEBAHXZ
                        */
  return *(int *)(this + 8);
}




/* public: unsigned char * __ptr64 __cdecl CNtfsFileRecord::GetSourceFileRecord(long & __ptr64)
   __ptr64 */

uchar * __thiscall CNtfsFileRecord::GetSourceFileRecord(CNtfsFileRecord *this,long *param_1)

{
                    /* 0x9390  221  ?GetSourceFileRecord@CNtfsFileRecord@@QEAAPEAEAEAJ@Z */
  *param_1 = *(long *)(this + 0x18);
  return *(uchar **)(this + 0x10);
}




/* public: unsigned char * __ptr64 __cdecl
   CNtfsFileRecordAttribute::GetSourceFileRecordAttribute(long & __ptr64)const __ptr64 */

uchar * __thiscall
CNtfsFileRecordAttribute::GetSourceFileRecordAttribute(CNtfsFileRecordAttribute *this,long *param_1)

{
                    /* 0x93a0  222
                       ?GetSourceFileRecordAttribute@CNtfsFileRecordAttribute@@QEBAPEAEAEAJ@Z */
  *param_1 = *(long *)(this + 8);
  return *(uchar **)this;
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetStartVCN(void)const __ptr64 */

__int64 __thiscall CNtfsFileRecordAttribute::GetStartVCN(CNtfsFileRecordAttribute *this)

{
                    /* 0x93b0  224  ?GetStartVCN@CNtfsFileRecordAttribute@@QEBA_JXZ */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return -1;
  }
  return *(__int64 *)(*(longlong *)this + 0x10);
}




/* public: unsigned long __cdecl CNtfsFileRecordAttribute::GetType(void)const __ptr64 */

ulong __thiscall CNtfsFileRecordAttribute::GetType(CNtfsFileRecordAttribute *this)

{
                    /* 0x93d0  226  ?GetType@CNtfsFileRecordAttribute@@QEBAKXZ */
  return **(ulong **)this;
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeClusterCount(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeClusterCount(CNtfsVolume *this)

{
                    /* 0x93e0  227  ?GetVolumeClusterCount@CNtfsVolume@@QEBA_JXZ */
  return *(longlong *)(this + 0x28) / (longlong)*(int *)(this + 0x1c);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeNewStartSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeNewStartSectorNumber(CNtfsVolume *this)

{
                    /* 0x93f0  230  ?GetVolumeNewStartSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x50);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeSerialNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeSerialNumber(CNtfsVolume *this)

{
                    /* 0x9400  231  ?GetVolumeSerialNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x40);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeStartSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeStartSectorNumber(CNtfsVolume *this)

{
                    /* 0x9410  232  ?GetVolumeStartSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x30);
}




/* public: __int64 __cdecl CNtfsVolume::GetVolumeTotalSectorNumber(void)const __ptr64 */

__int64 __thiscall CNtfsVolume::GetVolumeTotalSectorNumber(CNtfsVolume *this)

{
                    /* 0x9420  233  ?GetVolumeTotalSectorNumber@CNtfsVolume@@QEBA_JXZ */
  return *(__int64 *)(this + 0x28);
}




/* public: int __cdecl CNtfsMFT::Has0X20(void) __ptr64 */

int __thiscall CNtfsMFT::Has0X20(CNtfsMFT *this)

{
                    /* 0x9430  234  ?Has0X20@CNtfsMFT@@QEAAHXZ */
  return *(int *)(this + 0xec);
}




undefined8 FUN_180009440(CNtfsMultiFileRecord *param_1,CNtfsVolume *param_2)

{
  long lVar1;
  __uint64 _Var2;
  int iVar3;
  
  CNtfsVolume::operator=((CNtfsVolume *)(param_1 + 8),param_2);
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x30))(param_1 + 0x78);
  lVar1 = *(long *)(param_2 + 0x38);
  _Var2 = *(__uint64 *)(param_2 + 0x30);
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x28))(param_1 + 0x78,lVar1);
  CHardDriveIO::SetLdmInterface((CHardDriveIO *)(param_1 + 0x78),lVar1,_Var2,0);
  FUN_180009d90((longlong *)(param_1 + 0xf8));
  iVar3 = FUN_180009520(param_1);
  if ((iVar3 != 0) &&
     (FUN_180008e00((longlong)param_1),
     *(longlong *)(param_1 + 0x108) <=
     (longlong)*(int *)(param_1 + 0x28) * (*(longlong *)(param_1 + 0x70) + 3))) {
    return 1;
  }
  return 0;
}




int FUN_180009520(CNtfsMultiFileRecord *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  CNtfsFileRecordAttribute *pCVar8;
  CNtfsFileRecordAttribute *pCVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int iVar13;
  CNtfsFileRecordAttribute *local_res10;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  CNtfsFileRecordAttribute *local_68;
  undefined8 local_60 [2];
  longlong local_50;
  int local_48;
  
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_50);
  uVar3 = FUN_180009150(param_1,(CNtfsFileRecord *)&local_50);
  iVar10 = 0;
  iVar13 = 0;
  if ((int)uVar3 == 0) goto LAB_18000978e;
  local_res10 = (CNtfsFileRecordAttribute *)0x0;
  uVar3 = FUN_180008ff0((longlong)param_1,&local_50,(undefined4 *)&local_res10,
                        (ulonglong *)(param_1 + 0x108));
  if ((int)uVar3 == 0) goto LAB_18000978e;
  local_70 = 0;
  local_68 = local_res10;
  FUN_1800078e0((longlong *)(param_1 + 0xf8),&local_80,'\0',(longlong *)&local_70);
  iVar2 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)&local_50);
  if (iVar2 == 0) {
LAB_180009788:
    iVar13 = 1;
  }
  else {
    CNtfsAttributeList::CNtfsAttributeList((CNtfsAttributeList *)&local_80);
    pCVar8 = local_res10;
    pCVar9 = local_res10;
    iVar2 = iVar10;
    if (0 < local_48) {
      do {
        if ((-1 < iVar2) && (iVar2 < local_48)) {
          pCVar8 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + local_50);
        }
      } while ((**(int **)pCVar8 != 0x20) && (iVar2 = iVar2 + 1, iVar2 < local_48));
      if ((-1 < iVar2) && (iVar2 < local_48)) {
        pCVar9 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + local_50);
      }
    }
    TBuffer::TBuffer((TBuffer *)&local_70);
    lVar1 = *(longlong *)pCVar9;
    if (*(char *)(lVar1 + 8) == '\0') {
      iVar2 = *(int *)(lVar1 + 0x10);
    }
    else {
      iVar2 = (int)*(undefined8 *)(lVar1 + 0x28);
    }
    puVar4 = (uchar *)TBuffer::Malloc((TBuffer *)&local_70,iVar2);
    if (puVar4 != (uchar *)0x0) {
      lVar1 = *(longlong *)pCVar9;
      if (*(char *)(lVar1 + 8) == '\0') {
        uVar5 = *(uint *)(lVar1 + 0x10);
      }
      else {
        uVar5 = (uint)*(undefined8 *)(lVar1 + 0x28);
      }
      puVar11 = (ulonglong *)(ulonglong)uVar5;
      iVar2 = CNtfsMFT::GetDataFromAttribute((CNtfsMFT *)param_1,pCVar9,puVar4,uVar5);
      if (iVar2 != 0) {
        lVar1 = *(longlong *)pCVar9;
        if (*(char *)(lVar1 + 8) == '\0') {
          lVar6 = *(long *)(lVar1 + 0x10);
        }
        else {
          lVar6 = (long)*(undefined8 *)(lVar1 + 0x30);
        }
        iVar2 = CNtfsAttributeList::InitFromAttributeListData
                          ((CNtfsAttributeList *)&local_80,puVar4,lVar6);
        if (iVar2 != 0) {
          TBuffer::~TBuffer((TBuffer *)&local_70);
          pCVar8 = local_res10;
          iVar2 = local_78;
          if (0 < local_78) {
            do {
              if ((-1 < iVar10) && (iVar10 < iVar2)) {
                pCVar8 = (CNtfsFileRecordAttribute *)((longlong)iVar10 * 0x30 + local_80);
              }
              if (((*(int *)pCVar8 == 0x80) && (*(int *)(pCVar8 + 0x28) == 0)) &&
                 (uVar12 = *(ulonglong *)(pCVar8 + 0x10) & 0xffffffffffff, uVar12 != 0)) {
                iVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,uVar12,&local_50);
                if (iVar2 == 0) {
                  uVar3 = 0xcf;
                  pcVar7 = "Call ReadFileRecord() from GetMftOtherRunList() failed!\n(%s,%d)";
                }
                else {
                  local_res10 = (CNtfsFileRecordAttribute *)0x0;
                  puVar11 = (ulonglong *)0x0;
                  uVar3 = FUN_180008ff0((longlong)param_1,&local_50,(undefined4 *)&local_res10,
                                        (ulonglong *)0x0);
                  if ((int)uVar3 != 0) {
                    local_68 = local_res10;
                    puVar11 = &local_70;
                    local_70 = uVar12;
                    FUN_1800078e0((longlong *)(param_1 + 0xf8),local_60,'\0',(longlong *)puVar11);
                    iVar2 = local_78;
                    goto LAB_180009775;
                  }
                  uVar3 = 0xd8;
                  pcVar7 = 
                  "Call GetMftRunListFromRecord() from GetMftOtherRunList() failed!\n(%s,%d)";
                }
                FUN_180008d10(pcVar7,
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\extendmft.cpp"
                              ,uVar3,puVar11);
                goto LAB_1800097e4;
              }
LAB_180009775:
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar2);
          }
          CNtfsAttributeList::~CNtfsAttributeList((CNtfsAttributeList *)&local_80);
          goto LAB_180009788;
        }
      }
    }
    TBuffer::~TBuffer((TBuffer *)&local_70);
LAB_1800097e4:
    CNtfsAttributeList::~CNtfsAttributeList((CNtfsAttributeList *)&local_80);
  }
LAB_18000978e:
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_50);
  return iVar13;
}




/* public: void __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::InternalSetAtIndex(int,unsigned short
   const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::InternalSetAtIndex
          (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
           *this,int param_1,ushort *param_2)

{
  ushort *puVar1;
  
                    /* 0x97f0  244
                       ?InternalSetAtIndex@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAXHAEBG@Z
                        */
  puVar1 = (ushort *)(*(longlong *)this + (longlong)param_1 * 2);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::InternalSetAtIndex(int,struct
   tagAttriListElement const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::InternalSetAtIndex
          (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
           *this,int param_1,tagAttriListElement *param_2)

{
  undefined4 *puVar1;
  
                    /* 0x9830  245
                       ?InternalSetAtIndex@?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAXHAEBUtagAttriListElement@@@Z
                        */
  puVar1 = (undefined4 *)((longlong)param_1 * 0x30 + *(longlong *)this);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)param_2;
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x10);
    *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_2 + 0x18);
    CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
    CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
              ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                *)(puVar1 + 8),
               (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                *)(param_2 + 0x20));
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::InternalSetAtIndex(int,struct
   tagDataRun const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
InternalSetAtIndex(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                   *this,int param_1,tagDataRun *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* 0x98a0  247
                       ?InternalSetAtIndex@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAXHAEBUtagDataRun@@@Z
                        */
  puVar1 = (undefined8 *)(*(longlong *)this + (longlong)param_1 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsCompressed(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsCompressed(CNtfsFileRecordAttribute *this)

{
                    /* 0x98f0  252  ?IsCompressed@CNtfsFileRecordAttribute@@QEBAHXZ */
  if ((*(char *)(*(longlong *)this + 8) != '\0') && ((*(byte *)(*(longlong *)this + 0xc) & 1) != 0))
  {
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsMFT::IsInitiated(void) __ptr64 */

int __thiscall CNtfsMFT::IsInitiated(CNtfsMFT *this)

{
                    /* 0x9910  253  ?IsInitiated@CNtfsMFT@@QEAAHXZ */
  return *(int *)(this + 0xd8);
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsResident(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsResident(CNtfsFileRecordAttribute *this)

{
                    /* 0x9920  258  ?IsResident@CNtfsFileRecordAttribute@@QEBAHXZ */
  return (int)(*(char *)(*(longlong *)this + 8) == '\0');
}




/* public: int __cdecl CNtfsFileRecordAttribute::IsSparseFile(void)const __ptr64 */

int __thiscall CNtfsFileRecordAttribute::IsSparseFile(CNtfsFileRecordAttribute *this)

{
                    /* 0x9930  259  ?IsSparseFile@CNtfsFileRecordAttribute@@QEBAHXZ */
  if ((*(char *)(*(longlong *)this + 8) != '\0') && (*(short *)(*(longlong *)this + 0xc) < 0)) {
    return 1;
  }
  return 0;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x9950  269  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180009953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: void __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::RemoveAll(void) __ptr64 */

void __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::RemoveAll(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            *this)

{
                    /* 0x9960  271
                       ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAXXZ
                       0x9960  274
                       ?RemoveAll@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::RemoveAll(void) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::RemoveAll(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            *this)

{
  void *_Memory;
  int iVar1;
  
                    /* 0x99a0  272
                       ?RemoveAll@?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  _Memory = *(void **)this;
  iVar1 = 0;
  if (_Memory != (void *)0x0) {
    if (0 < *(int *)(this + 8)) {
      do {
        CNtfsRunList::~CNtfsRunList
                  ((CNtfsRunList *)((longlong)iVar1 * 0x30 + *(longlong *)this + 0x20));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 8));
      _Memory = *(void **)this;
    }
    free(_Memory);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: int __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::RemoveAt(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
           *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x9a20  277
                       ?RemoveAt@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (iVar1 = *(int *)(this + 8), param_1 < iVar1)) {
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 2);
      memmove(_Dst,(void *)((longlong)_Dst + 2),(longlong)((iVar1 - param_1) + -1) * 2);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagAttriListElement,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagAttriListElement> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
::RemoveAt(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
           *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x9a80  278
                       ?RemoveAt@?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    CNtfsRunList::~CNtfsRunList
              ((CNtfsRunList *)(*(longlong *)this + (longlong)param_1 * 0x30 + 0x20));
    iVar1 = *(int *)(this + 8);
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 0x30);
      memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)((iVar1 - param_1) + -1) * 0x30);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagDataRun,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagDataRun> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
RemoveAt(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
         *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x9b20  280
                       ?RemoveAt@?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (iVar1 = *(int *)(this + 8), param_1 < iVar1)) {
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 0x18);
      memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)((iVar1 - param_1) + -1) * 0x18);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataAllocatedLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataAllocatedLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x9b90  287  ?SetDataAllocatedLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x28) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataInitiatedLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataInitiatedLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x9bb0  288  ?SetDataInitiatedLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x38) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataRealLength(__int64) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataRealLength(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x9bd0  289  ?SetDataRealLength@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x30) = param_1;
  return 1;
}




/* public: void __cdecl CNtfsFileRecordAttribute::SetID(unsigned short) __ptr64 */

void __thiscall CNtfsFileRecordAttribute::SetID(CNtfsFileRecordAttribute *this,ushort param_1)

{
                    /* 0x9bf0  293  ?SetID@CNtfsFileRecordAttribute@@QEAAXG@Z */
  *(ushort *)(*(longlong *)this + 0xe) = param_1;
  return;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetLastVCN(__int64) __ptr64 */

int __thiscall CNtfsFileRecordAttribute::SetLastVCN(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x9c00  295  ?SetLastVCN@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x18) = param_1;
  return 1;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetStartVCN(__int64) __ptr64 */

int __thiscall CNtfsFileRecordAttribute::SetStartVCN(CNtfsFileRecordAttribute *this,__int64 param_1)

{
                    /* 0x9c20  300  ?SetStartVCN@CNtfsFileRecordAttribute@@QEAAH_J@Z */
  if (*(char *)(*(longlong *)this + 8) == '\0') {
    return 0;
  }
  *(__int64 *)(*(longlong *)this + 0x10) = param_1;
  return 1;
}




void FUN_180009c40(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180009c80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180009cc0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180009cc0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180009d20(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180009d30(longlong *param_1,longlong *param_2)

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




void FUN_180009d90(longlong *param_1)

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
      FUN_180009cc0(param_1,(longlong *)_Memory[2]);
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
  if ((0xfff < (ulonglong)(param_3 * 0x30)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined * FUN_180009e70(void)

{
  return &DAT_18003ca70;
}




undefined1 * FUN_180009e80(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_18003cca0 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_18003cca0 = &DAT_18003cba0;
    pcVar1 = (char *)__std_type_info_name(0x18002c590,&DAT_18004da30);
    FUN_18000a650(pcVar1,DAT_18003cca0,local_res10);
  }
  return DAT_18003cca0;
}




undefined1 * FUN_180009ee0(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_18003cb90 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_18003cb90 = &DAT_18003ca90;
    pcVar1 = (char *)__std_type_info_name(0x18002c568,&DAT_18004da30);
    FUN_18000a650(pcVar1,DAT_18003cb90,local_res10);
  }
  return DAT_18003cb90;
}




/* public: __cdecl CHardDriveIO::CHardDriveIO(void) __ptr64 */

CHardDriveIO * __thiscall CHardDriveIO::CHardDriveIO(CHardDriveIO *this)

{
                    /* 0x9f40  11  ??0CHardDriveIO@@QEAA@XZ */
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x48] = (CHardDriveIO)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl CHardDriveIOSetting::CHardDriveIOSetting(struct IManager * __ptr64,struct
   IBlockDevice * __ptr64) __ptr64 */

CHardDriveIOSetting * __thiscall
CHardDriveIOSetting::CHardDriveIOSetting
          (CHardDriveIOSetting *this,IManager *param_1,IBlockDevice *param_2)

{
                    /* 0x9f80  13  ??0CHardDriveIOSetting@@QEAA@PEAUIManager@@PEAUIBlockDevice@@@Z
                        */
  *(undefined ***)this = vftable;
  if (param_2 != (IBlockDevice *)0x0) {
    CHardDriveIO::s_pStorage = param_2;
  }
  if (param_1 != (IManager *)0x0) {
    CHardDriveIO::s_pDeviceManager = param_1;
  }
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x9fc0  42  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x9fc0  43  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x9fc0  44  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180009fe0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_18000a010(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000a01b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




/* public: virtual __cdecl CHardDriveIO::~CHardDriveIO(void) __ptr64 */

void __thiscall CHardDriveIO::~CHardDriveIO(CHardDriveIO *this)

{
                    /* 0xa020  53  ??1CHardDriveIO@@UEAA@XZ */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = vftable;
  return;
}




/* public: virtual __cdecl CHardDriveIOSetting::~CHardDriveIOSetting(void) __ptr64 */

void __thiscall CHardDriveIOSetting::~CHardDriveIOSetting(CHardDriveIOSetting *this)

{
                    /* 0xa040  54  ??1CHardDriveIOSetting@@UEAA@XZ */
  *(undefined ***)this = vftable;
  CHardDriveIO::s_pDeviceManager = (IManager *)0x0;
  CHardDriveIO::s_pStorage = (IBlockDevice *)0x0;
  return;
}




undefined8 FUN_18000a060(undefined *param_1,undefined8 param_2)

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




/* public: virtual int __cdecl CHardDriveIO::CloseDisk(void) __ptr64 */

int __thiscall CHardDriveIO::CloseDisk(CHardDriveIO *this)

{
                    /* 0xa090  137  ?CloseDisk@CHardDriveIO@@UEAAHXZ */
  *(undefined8 *)(this + 0x18) = 0;
  return 1;
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0xa0a0  143  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0xa0a0  153  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0xa0a0  166  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0xa0a0  193  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0xa0a0  251  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0xa0a0  285  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0xa0a0  286  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0xa0a0  298  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0xa0b0  167  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




/* public: virtual struct IBlockDevice * __ptr64 __cdecl CHardDriveIO::GetDevice(void) __ptr64 */

IBlockDevice * __thiscall CHardDriveIO::GetDevice(CHardDriveIO *this)

{
  undefined1 *puVar1;
  char *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  IBlockDevice *pIVar6;
  IBlockDevice *pIVar7;
  IBlockDevice *pIVar8;
  IBlockDevice IVar9;
  longlong lVar10;
  longlong lVar11;
  IBlockDevice *pIVar12;
  
                    /* 0xa0c0  182  ?GetDevice@CHardDriveIO@@UEAAPEAUIBlockDevice@@XZ */
  pIVar8 = (IBlockDevice *)0x0;
  if ((*(longlong *)(this + 0x38) != 0) &&
     ((*(longlong *)(this + 0x50) != 0 || (this[0x48] != (CHardDriveIO)0x0)))) {
    pIVar12 = (IBlockDevice *)(*(longlong *)(this + 0x40) + 8);
    if (*(longlong *)(this + 0x40) == 0) {
      pIVar12 = pIVar8;
    }
    return pIVar12;
  }
  if ((*(int *)(this + 8) != 0) && (*(IBlockDevice **)(this + 0x10) != (IBlockDevice *)0x0)) {
    return *(IBlockDevice **)(this + 0x10);
  }
  if (*(longlong *)(this + 0x18) == 0) {
    return (IBlockDevice *)0x0;
  }
  lVar11 = 7;
  if (DAT_18003cca0 == (undefined1 *)0x0) {
    DAT_18003cca0 = &DAT_18003cba0;
    pcVar2 = (char *)__std_type_info_name(0x18002c590,&DAT_18004da30);
    puVar1 = DAT_18003cca0;
    if (DAT_18003cca0 != (undefined1 *)0x0) {
      *DAT_18003cca0 = 0;
      if (*pcVar2 == 'c') {
        lVar10 = 6;
      }
      else {
        if (*pcVar2 != 's') goto LAB_18000a1c5;
        lVar10 = 7;
      }
      pIVar12 = (IBlockDevice *)(pcVar2 + lVar10);
      IVar9 = *(IBlockDevice *)(pcVar2 + lVar10);
      pIVar7 = pIVar8;
      pIVar6 = pIVar8;
      if (IVar9 != (IBlockDevice)0x0) {
        do {
          uVar5 = (uint)pIVar7;
          if (IVar9 == (IBlockDevice)0x3a) {
            if (0xff < uVar5) goto LAB_18000a1c5;
            pIVar12 = pIVar12 + 1;
            IVar9 = (IBlockDevice)0x2e;
          }
          else if (0xff < uVar5) goto LAB_18000a1c5;
          pIVar12 = pIVar12 + 1;
          pIVar6 = (IBlockDevice *)(ulonglong)(uVar5 + 1);
          pIVar7[(longlong)puVar1] = IVar9;
          IVar9 = *pIVar12;
          pIVar7 = pIVar6;
        } while (IVar9 != (IBlockDevice)0x0);
        if (0xff < uVar5 + 1) goto LAB_18000a1c5;
      }
      pIVar6[(longlong)puVar1] = (IBlockDevice)0x0;
    }
  }
LAB_18000a1c5:
  plVar3 = (longlong *)
           (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),DAT_18003cca0);
  uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if ((uVar4 & 1) != 0) {
    return (IBlockDevice *)0x0;
  }
  if (DAT_18003cb90 == (undefined1 *)0x0) {
    DAT_18003cb90 = &DAT_18003ca90;
    pcVar2 = (char *)__std_type_info_name(0x18002c568,&DAT_18004da30);
    puVar1 = DAT_18003cb90;
    if (DAT_18003cb90 != (undefined1 *)0x0) {
      *DAT_18003cb90 = 0;
      if (*pcVar2 == 'c') {
        lVar11 = 6;
      }
      else if (*pcVar2 != 's') goto LAB_18000a28e;
      IVar9 = *(IBlockDevice *)(pcVar2 + lVar11);
      pIVar12 = (IBlockDevice *)(pcVar2 + lVar11);
      pIVar7 = pIVar8;
      if (IVar9 != (IBlockDevice)0x0) {
        do {
          uVar5 = (uint)pIVar7;
          if (IVar9 == (IBlockDevice)0x3a) {
            if (0xff < uVar5) goto LAB_18000a28e;
            pIVar12 = pIVar12 + 1;
            IVar9 = (IBlockDevice)0x2e;
          }
          else if (0xff < uVar5) goto LAB_18000a28e;
          pIVar12 = pIVar12 + 1;
          pIVar8 = (IBlockDevice *)(ulonglong)(uVar5 + 1);
          pIVar7[(longlong)puVar1] = IVar9;
          IVar9 = *pIVar12;
          pIVar7 = pIVar8;
        } while (IVar9 != (IBlockDevice)0x0);
        if (0xff < uVar5 + 1) goto LAB_18000a28e;
      }
      pIVar8[(longlong)puVar1] = (IBlockDevice)0x0;
    }
  }
LAB_18000a28e:
  lVar11 = (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),DAT_18003cb90);
  if (lVar11 == 0) {
    return (IBlockDevice *)0x0;
  }
  return (IBlockDevice *)(lVar11 + 8);
}




/* public: virtual int __cdecl CHardDriveIO::GetGeometryInfo(struct tagGEOMETRY_INFO * __ptr64)
   __ptr64 */

int __thiscall CHardDriveIO::GetGeometryInfo(CHardDriveIO *this,tagGEOMETRY_INFO *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint local_res8 [2];
  
                    /* 0xa2e0  188  ?GetGeometryInfo@CHardDriveIO@@UEAAHPEAUtagGEOMETRY_INFO@@@Z */
  if ((*(int *)(this + 8) == 0) &&
     (puVar6 = *(undefined8 **)(this + 0x18), puVar6 != (undefined8 *)0x0)) {
    if (DAT_18003cec0 == (undefined1 *)0x0) {
      local_res8[0] = 0x100;
      DAT_18003cec0 = &DAT_18003cdc0;
      pcVar2 = (char *)__std_type_info_name(0x18002c5e0,&DAT_18004da30);
      FUN_18000a650(pcVar2,DAT_18003cec0,local_res8);
      puVar6 = *(undefined8 **)(this + 0x18);
    }
    plVar3 = (longlong *)(**(code **)*puVar6)(puVar6,DAT_18003cec0);
    if ((plVar3 != (longlong *)0x0) && (param_1 != (tagGEOMETRY_INFO *)0x0)) {
      if (DAT_18003cfd0 == (undefined1 *)0x0) {
        local_res8[0] = 0x100;
        DAT_18003cfd0 = &DAT_18003ced0;
        pcVar2 = (char *)__std_type_info_name(0x18002c608,&DAT_18004da30);
        FUN_18000a650(pcVar2,DAT_18003cfd0,local_res8);
      }
      plVar4 = (longlong *)
               (**(code **)**(undefined8 **)(this + 0x18))
                         (*(undefined8 **)(this + 0x18),DAT_18003cfd0);
      uVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
      *(undefined4 *)(param_1 + 0x18) = uVar1;
      uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
      *(undefined8 *)param_1 = uVar5;
      uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 8) = 0xc;
      return 1;
    }
  }
  return 0;
}




/* public: virtual int __cdecl CHardDriveIO::GetHardDriveNumber(int & __ptr64) __ptr64 */

int __thiscall CHardDriveIO::GetHardDriveNumber(CHardDriveIO *this,int *param_1)

{
                    /* 0xa440  190  ?GetHardDriveNumber@CHardDriveIO@@UEAAHAEAH@Z */
  *param_1 = *(int *)(this + 0x20);
  return 1;
}




/* public: virtual unsigned long __cdecl CHardDriveIO::GetSectorSize(void) __ptr64 */

ulong __thiscall CHardDriveIO::GetSectorSize(CHardDriveIO *this)

{
  undefined1 *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  
                    /* 0xa450  212  ?GetSectorSize@CHardDriveIO@@UEAAKXZ */
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 != (undefined8 *)0x0) goto LAB_18000a532;
  if (*(longlong *)(this + 0x18) == 0) {
    return 0x200;
  }
  if (DAT_18003cb90 == (undefined1 *)0x0) {
    DAT_18003cb90 = &DAT_18003ca90;
    pcVar3 = (char *)__std_type_info_name(0x18002c568,&DAT_18004da30);
    puVar1 = DAT_18003cb90;
    uVar6 = 0;
    if (DAT_18003cb90 != (undefined1 *)0x0) {
      *DAT_18003cb90 = 0;
      if (*pcVar3 == 'c') {
        lVar5 = 6;
      }
      else {
        if (*pcVar3 != 's') goto LAB_18000a519;
        lVar5 = 7;
      }
      pcVar3 = pcVar3 + lVar5;
      cVar8 = *pcVar3;
      if (cVar8 != '\0') {
        do {
          if (cVar8 == ':') {
            if (0xff < uVar6) goto LAB_18000a519;
            pcVar3 = pcVar3 + 1;
            cVar8 = '.';
          }
          else if (0xff < uVar6) goto LAB_18000a519;
          uVar4 = (ulonglong)uVar6;
          uVar6 = uVar6 + 1;
          pcVar3 = pcVar3 + 1;
          puVar1[uVar4] = cVar8;
          cVar8 = *pcVar3;
        } while (cVar8 != '\0');
        if (0xff < uVar6) goto LAB_18000a519;
      }
      puVar1[uVar6] = 0;
    }
  }
LAB_18000a519:
  lVar5 = (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),DAT_18003cb90);
  if (lVar5 == 0) {
    return 0x200;
  }
  puVar7 = (undefined8 *)(lVar5 + 8);
LAB_18000a532:
                    /* WARNING: Could not recover jumptable at 0x00018000a53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)*puVar7)();
  return uVar2;
}




/* public: __int64 __cdecl CHardDriveIO::GetVolumeHeadOffset(void) __ptr64 */

__int64 __thiscall CHardDriveIO::GetVolumeHeadOffset(CHardDriveIO *this)

{
  longlong *plVar1;
  __int64 extraout_RAX;
  undefined1 auStack_538 [32];
  undefined1 local_518 [640];
  undefined1 local_298 [640];
  ulonglong local_18;
  
                    /* 0xa550  228  ?GetVolumeHeadOffset@CHardDriveIO@@QEAA_JXZ */
  local_18 = DAT_18002c018 ^ (ulonglong)auStack_538;
  plVar1 = *(longlong **)(this + 0x30);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(this + 0x28) != 0)) {
    memset(local_518,0,0x275);
    (**(code **)(*plVar1 + 8))(plVar1);
    memset(local_298,0,0x275);
    (**(code **)(**(longlong **)(this + 0x28) + 8))(*(longlong **)(this + 0x28),local_298);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_538);
  return extraout_RAX;
}




ulonglong FUN_18000a650(char *param_1,undefined1 *param_2,uint *param_3)

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




/* public: virtual int __cdecl CHardDriveIO::OpenDisk(int) __ptr64 */

int __thiscall CHardDriveIO::OpenDisk(CHardDriveIO *this,int param_1)

{
  IManager *pIVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  
                    /* 0xa6f0  266  ?OpenDisk@CHardDriveIO@@UEAAHH@Z */
  if (param_1 < 0) {
    if (s_pStorage != (IBlockDevice *)0x0) {
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      *(undefined4 *)(this + 8) = 1;
      *(IBlockDevice **)(this + 0x10) = s_pStorage;
      return 1;
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x30))();
    pIVar1 = s_pDeviceManager;
    if (s_pDeviceManager != (IManager *)0x0) {
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      plVar5 = (longlong *)0x0;
      local_res18 = (longlong *)0x0;
      plVar2 = (longlong *)(**(code **)(*(longlong *)pIVar1 + 0x30))();
      plVar4 = (longlong *)0x0;
      local_res20 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        if (DAT_18003d1f0 == (undefined1 *)0x0) {
          DAT_18003d1f0 = &DAT_18003d0f0;
          local_res10[0] = 0x100;
          pcVar3 = (char *)__std_type_info_name(0x18002c658,&DAT_18004da30);
          FUN_18000a650(pcVar3,DAT_18003d1f0,local_res10);
        }
        plVar4 = (longlong *)(**(code **)*plVar2)(plVar2,DAT_18003d1f0);
        local_res20 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        else {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      iVar6 = 0;
      do {
        plVar2 = (longlong *)(**(code **)(*plVar4 + 0x28))(plVar4);
        if (plVar5 != plVar2) {
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            plVar5 = (longlong *)0x0;
            local_res18 = (longlong *)0x0;
          }
          if (plVar2 != (longlong *)0x0) {
            if (DAT_18003d0e0 == (undefined1 *)0x0) {
              DAT_18003d0e0 = &DAT_18003cfe0;
              local_res10[0] = 0x100;
              pcVar3 = (char *)__std_type_info_name(0x18002c630,&DAT_18004da30);
              FUN_18000a650(pcVar3,DAT_18003d0e0,local_res10);
            }
            plVar5 = (longlong *)(**(code **)*plVar2)(plVar2,DAT_18003d0e0);
            local_res18 = plVar5;
            if (plVar5 == (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              (**(code **)(*plVar2 + 8))(plVar2);
              goto LAB_18000a8c9;
            }
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        if (plVar5 == (longlong *)0x0) goto LAB_18000a8c9;
        bVar7 = iVar6 != param_1;
        iVar6 = iVar6 + 1;
      } while (bVar7);
      *(longlong **)(this + 0x18) = plVar5;
      *(int *)(this + 0x20) = param_1;
LAB_18000a8c9:
      if (*(longlong *)(this + 0x18) != 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        if (plVar5 == (longlong *)0x0) {
          return 1;
        }
        (**(code **)(*plVar5 + 8))(plVar5);
        return 1;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return 0;
}




void FUN_18000a940(char *param_1)

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
  
  local_18 = DAT_18002c018 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_18000aa35:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_18000aa35;
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
          FUN_18000a060(pFVar3,hModule);
        }
      }
      goto LAB_18000aa35;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




/* public: virtual int __cdecl CHardDriveIO::ReadSector(unsigned char * __ptr64,__int64,__int64)
   __ptr64 */

int __thiscall
CHardDriveIO::ReadSector(CHardDriveIO *this,uchar *param_1,__int64 param_2,__int64 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint local_res8 [2];
  uchar *local_res10;
  longlong *local_58;
  longlong *local_50;
  
                    /* 0xaa60  268  ?ReadSector@CHardDriveIO@@UEAAHPEAE_J1@Z */
  lVar10 = *(longlong *)(this + 0x38);
  local_res10 = param_1;
  if ((lVar10 != 0) &&
     ((lVar1 = *(longlong *)(this + 0x50), lVar1 != 0 || (this[0x48] != (CHardDriveIO)0x0)))) {
    if (this[0x48] == (CHardDriveIO)0x0) {
      lVar1 = -lVar1;
    }
    uVar3 = (**(code **)(*(longlong *)(lVar10 + 8) + 8))(lVar10 + 8,param_1,lVar1 + param_2);
    uVar7 = (ulonglong)uVar3;
    if ((uVar7 == 0) && (*(longlong *)(this + 0x40) != 0)) {
      plVar11 = (longlong *)(*(longlong *)(this + 0x40) + 8);
      uVar3 = (**(code **)(*plVar11 + 8))
                        (plVar11,param_1,param_2 - *(longlong *)(this + 0x58),param_3 & 0xffffffff);
      uVar7 = (ulonglong)uVar3;
    }
    return (int)(param_3 == uVar7);
  }
  if ((*(int *)(this + 8) != 0) &&
     (plVar11 = *(longlong **)(this + 0x10), plVar11 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018000ab16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(*plVar11 + 8))(plVar11,param_1,param_2);
    return iVar4;
  }
  if (*(longlong *)(this + 0x18) != 0) {
    iVar4 = 0;
    local_58 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    puVar6 = FUN_180009e80();
    plVar11 = (longlong *)
              (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),puVar6);
    uVar7 = (**(code **)(*plVar11 + 0x28))(plVar11);
    if ((uVar7 & 1) == 0) {
      puVar6 = FUN_180009ee0();
      local_50 = (longlong *)
                 (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),puVar6);
      plVar9 = local_50;
    }
    else {
      if (DAT_18003cdb0 == (undefined1 *)0x0) {
        local_res8[0] = 0x100;
        DAT_18003cdb0 = &DAT_18003ccb0;
        pcVar8 = (char *)__std_type_info_name(0x18002c5b8,&DAT_18004da30);
        FUN_18000a650(pcVar8,DAT_18003cdb0,local_res8);
      }
      local_58 = (longlong *)
                 (**(code **)**(undefined8 **)(this + 0x18))
                           (*(undefined8 **)(this + 0x18),DAT_18003cdb0);
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      uVar7 = (ulonglong)((uint)(param_3 >> 0x3f) & 0x1ff);
      lVar10 = param_3 + uVar7;
      uVar3 = (uint)(lVar10 >> 9);
      local_res8[0] = uVar3 + 1;
      if (((uint)lVar10 & 0x1ff) == uVar7) {
        local_res8[0] = uVar3;
      }
      iVar13 = iVar4;
      if (0 < (int)local_res8[0]) {
        do {
          iVar12 = 0x200;
          if (param_3 < iVar4 + 0x200) {
            iVar12 = (int)param_3 - iVar4;
          }
          uVar7 = (**(code **)(*plVar11 + 0x28))(plVar11);
          if ((uVar7 & 1) == 0) {
            puVar2 = (undefined8 *)local_50[1];
            iVar5 = (*(code *)*puVar2)(local_50 + 1);
            iVar5 = (*(code *)puVar2[1])
                              (local_50 + 1,local_res10 + (uint)(iVar5 * iVar13 * 0x200),
                               iVar4 + param_2,iVar12);
          }
          else {
            lVar10 = *local_58;
            iVar5 = (**(code **)(*(longlong *)this + 8))(this);
            iVar5 = (**(code **)(lVar10 + 0x28))
                              (local_58,local_res10 + (uint)(iVar5 * iVar13 * 0x200),iVar4 + param_2
                               ,iVar12);
          }
          if (iVar5 != iVar12) {
            return 0;
          }
          iVar13 = iVar13 + 1;
          iVar4 = iVar4 + 0x200;
        } while (iVar13 < (int)local_res8[0]);
      }
      return 1;
    }
  }
  return 0;
}




/* public: static void __cdecl CHardDriveIOSetting::SetDevice(struct IManager * __ptr64,struct
   IBlockDevice * __ptr64) */

void __cdecl CHardDriveIOSetting::SetDevice(IManager *param_1,IBlockDevice *param_2)

{
                    /* 0xad10  291
                       ?SetDevice@CHardDriveIOSetting@@SAXPEAUIManager@@PEAUIBlockDevice@@@Z */
  if (param_2 != (IBlockDevice *)0x0) {
    CHardDriveIO::s_pStorage = param_2;
  }
  if (param_1 != (IManager *)0x0) {
    CHardDriveIO::s_pDeviceManager = param_1;
  }
  return;
}




/* public: long __cdecl CHardDriveIO::SetLdmInterface(long,unsigned __int64,unsigned __int64)
   __ptr64 */

long __thiscall
CHardDriveIO::SetLdmInterface(CHardDriveIO *this,long param_1,__uint64 param_2,__uint64 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long extraout_EAX;
  long lVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  undefined4 local_3e8;
  longlong *local_3e0;
  uint local_3d8 [2];
  longlong *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [524];
  uint local_1ac;
  int local_190;
  undefined1 local_168;
  char acStack_167 [271];
  ulonglong local_58;
  
                    /* 0xad40  296  ?SetLdmInterface@CHardDriveIO@@QEAAJJ_K0@Z */
  local_3c8 = 0xfffffffffffffffe;
  local_58 = DAT_18002c018 ^ (ulonglong)auStack_418;
  lVar9 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(__uint64 *)(this + 0x50) = param_2;
  *(__uint64 *)(this + 0x58) = param_3;
  local_3e8 = 0;
  if (*(longlong **)(this + 0x18) != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(this + 0x18) + 0x40))();
    local_3e8 = (**(code **)(*plVar5 + 0x88))(plVar5);
    if (DAT_18003cca0 == (undefined1 *)0x0) {
      DAT_18003cca0 = &DAT_18003cba0;
      local_3d8[0] = 0x100;
      pcVar6 = (char *)__std_type_info_name(0x18002c590,&DAT_18004da30);
      FUN_18000a650(pcVar6,DAT_18003cca0,local_3d8);
    }
    plVar5 = (longlong *)
             (**(code **)**(undefined8 **)(this + 0x18))
                       (*(undefined8 **)(this + 0x18),DAT_18003cca0);
    if ((plVar5 != (longlong *)0x0) &&
       (uVar2 = (**(code **)(*plVar5 + 0x28))(plVar5), (uVar2 & 1) == 0)) goto LAB_18000b04a;
  }
  if (param_3 == 0) {
    param_3 = param_2;
  }
  puVar7 = (undefined8 *)FUN_18000a940("LdmManager");
  if (puVar7 == (undefined8 *)0x0) goto LAB_18000b04a;
  local_168 = 0x49;
  pcVar6 = "LdmManager";
  do {
    pcVar8 = pcVar6;
    if (0xff < lVar9) goto LAB_18000b04a;
    acStack_167[lVar9] = *pcVar8;
    lVar9 = lVar9 + 1;
    pcVar6 = pcVar8 + 1;
  } while (pcVar8[1] != '\0');
  builtin_strncpy(acStack_167 + (longlong)(pcVar8 + -0x18001d5b7),"Module",6);
  if ((char *)0x103 < pcVar8 + -0x18001d5b0) {
    __report_rangecheckfailure();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  (&local_168)[(longlong)(pcVar8 + -0x18001d5b0)] = 0;
  plVar5 = (longlong *)(**(code **)*puVar7)(puVar7,&local_168);
  if (plVar5 == (longlong *)0x0) goto LAB_18000b04a;
  local_3e0 = (longlong *)0x0;
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_3e0);
  if (local_3e0 != (longlong *)0x0) {
    local_3d0 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_3e0 + 0x30))(local_3e0,param_1,&local_3d0);
    plVar5 = local_3d0;
    if ((iVar3 == 0) && (local_3d0 != (longlong *)0x0)) {
      memset(local_3b8,0,0x244);
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,local_3b8);
      if ((iVar3 == 0) && ((local_1ac & 4) != 0)) {
        iVar3 = (**(code **)(*local_3e0 + 0x48))
                          (local_3e0,param_1,(longlong)local_190 * param_2,this + 0x30);
        uVar10 = local_3e8;
        if ((iVar3 == 0) && (plVar5 = *(longlong **)(this + 0x30), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,this + 0x38,0);
          uVar10 = local_3e8;
        }
        else {
          local_3f8 = local_3e8;
          iVar3 = (**(code **)(*local_3e0 + 0xa0))
                            (local_3e0,param_1,(longlong)local_190 * param_2,this + 0x28);
          if (iVar3 != 0) goto LAB_18000b031;
          (**(code **)(**(longlong **)(this + 0x28) + 0x18))
                    (*(longlong **)(this + 0x28),this + 0x38,0);
        }
        *(__uint64 *)(this + 0x50) = param_2;
        local_3f8 = uVar10;
        iVar3 = (**(code **)(*local_3e0 + 0xa0))
                          (local_3e0,param_1,(longlong)local_190 * param_3,this + 0x28);
        if (iVar3 == 0) {
          (**(code **)(**(longlong **)(this + 0x28) + 0x18))
                    (*(longlong **)(this + 0x28),this + 0x40,0);
          *(__uint64 *)(this + 0x58) = param_3;
        }
      }
    }
  }
LAB_18000b031:
  if (local_3e0 != (longlong *)0x0) {
    (**(code **)(*local_3e0 + 8))();
  }
LAB_18000b04a:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_418);
  return extraout_EAX;
}




/* public: long __cdecl CHardDriveIO::SetLdmVolumeAsDisk(struct ILdmVolume * __ptr64,unsigned
   __int64,unsigned __int64) __ptr64 */

long __thiscall
CHardDriveIO::SetLdmVolumeAsDisk
          (CHardDriveIO *this,ILdmVolume *param_1,__uint64 param_2,__uint64 param_3)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_res8 [2];
  
                    /* 0xb080  297  ?SetLdmVolumeAsDisk@CHardDriveIO@@QEAAJPEAUILdmVolume@@_K1@Z */
  lVar2 = 0;
  *(__uint64 *)(this + 0x50) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(__uint64 *)(this + 0x58) = param_3;
  puVar5 = *(undefined8 **)(this + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    if (DAT_18003cca0 == (undefined1 *)0x0) {
      local_res8[0] = 0x100;
      DAT_18003cca0 = &DAT_18003cba0;
      pcVar3 = (char *)__std_type_info_name(0x18002c590,&DAT_18004da30);
      FUN_18000a650(pcVar3,DAT_18003cca0,local_res8);
      puVar5 = *(undefined8 **)(this + 0x18);
    }
    plVar4 = (longlong *)(**(code **)*puVar5)(puVar5,DAT_18003cca0);
    if ((plVar4 != (longlong *)0x0) &&
       (uVar1 = (**(code **)(*plVar4 + 0x28))(plVar4), (uVar1 & 1) == 0)) {
      return 0;
    }
  }
  this[0x48] = (CHardDriveIO)0x1;
  uVar6 = 0;
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,this + 0x38);
  *(longlong *)(this + 0x40) = *(longlong *)(this + 0x38);
  if (*(longlong *)(this + 0x38) == 0) {
    lVar2 = -4;
    FUN_180008d10("[CHardDriveIO] SetLdmVolumeAsDisk failure %d",0xfffffffc,uVar6,param_3);
  }
  return lVar2;
}




/* public: virtual int __cdecl CHardDriveIO::VerifySector(__int64,__int64) __ptr64 */

int __thiscall CHardDriveIO::VerifySector(CHardDriveIO *this,__int64 param_1,__int64 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  void *_Memory;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
                    /* 0xb180  304  ?VerifySector@CHardDriveIO@@UEAAH_J0@Z */
  if ((*(int *)(this + 8) == 0) && (*(longlong *)(this + 0x18) != 0)) {
    puVar2 = FUN_180009ee0();
    lVar3 = (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),puVar2);
    if (lVar3 != 0) {
      _Memory = operator_new(0x200000);
      iVar8 = 0x200;
      uVar5 = (ulonglong)((uint)(param_2 >> 0x3f) & 0x1ff);
      lVar4 = param_2 + uVar5;
      iVar7 = (int)(lVar4 >> 9);
      iVar9 = iVar7 + 1;
      if (((uint)lVar4 & 0x1ff) == uVar5) {
        iVar9 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar9) {
        iVar6 = 0;
        do {
          if (param_2 < iVar6 + iVar8) {
            iVar8 = (int)param_2 - iVar6;
          }
          iVar1 = (**(code **)(*(longlong *)(lVar3 + 8) + 8))
                            (lVar3 + 8,_Memory,iVar6 + param_1,iVar8);
          if (iVar1 == 0) {
            free(_Memory);
            return 0;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x200;
        } while (iVar7 < iVar9);
      }
      free(_Memory);
      return 1;
    }
  }
  return 0;
}




/* public: virtual int __cdecl CHardDriveIO::WriteSector(unsigned char * __ptr64,__int64,__int64)
   __ptr64 */

int __thiscall
CHardDriveIO::WriteSector(CHardDriveIO *this,uchar *param_1,__int64 param_2,__int64 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
                    /* 0xb2a0  306  ?WriteSector@CHardDriveIO@@UEAAHPEAE_J1@Z */
  lVar6 = *(longlong *)(this + 0x40);
  if ((lVar6 != 0) &&
     ((lVar7 = *(longlong *)(this + 0x50), lVar7 != 0 || (this[0x48] != (CHardDriveIO)0x0)))) {
    if (this[0x48] == (CHardDriveIO)0x0) {
      lVar7 = -lVar7;
    }
    uVar2 = (**(code **)(*(longlong *)(lVar6 + 8) + 0x10))
                      (lVar6 + 8,param_1,param_2 + lVar7,param_3 & 0xffffffff);
    return (int)(param_3 == (ulonglong)uVar2);
  }
  if ((*(int *)(this + 8) != 0) && (*(longlong **)(this + 0x10) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018000b328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(**(longlong **)(this + 0x10) + 0x10))();
    return iVar3;
  }
  if (*(longlong *)(this + 0x18) != 0) {
    puVar5 = FUN_180009ee0();
    lVar6 = (**(code **)**(undefined8 **)(this + 0x18))(*(undefined8 **)(this + 0x18),puVar5);
    if (lVar6 != 0) {
      uVar8 = (ulonglong)((uint)(param_3 >> 0x3f) & 0x1ff);
      lVar7 = param_3 + uVar8;
      iVar3 = (int)(lVar7 >> 9);
      iVar11 = iVar3 + 1;
      if (((uint)lVar7 & 0x1ff) == uVar8) {
        iVar11 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar11) {
        iVar10 = 0;
        do {
          iVar9 = 0x200;
          if (param_3 < iVar10 + 0x200) {
            iVar9 = (int)param_3 - iVar10;
          }
          puVar1 = *(undefined8 **)(lVar6 + 8);
          iVar4 = (*(code *)*puVar1)(lVar6 + 8);
          iVar4 = (*(code *)puVar1[2])
                            (lVar6 + 8,param_1 + (uint)(iVar4 * iVar3 * 0x200),iVar10 + param_2,
                             iVar9);
          if (iVar4 != iVar9) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar10 = iVar10 + 0x200;
        } while (iVar3 < iVar11);
      }
      return 1;
    }
  }
  return 0;
}




/* unsigned long __cdecl LZNT1FindMatchMaximum(unsigned char * __ptr64,struct
   _LZNT1_MAXIMUM_WORKSPACE * __ptr64) */

ulong __cdecl LZNT1FindMatchMaximum(uchar *param_1,_LZNT1_MAXIMUM_WORKSPACE *param_2)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  
                    /* 0xb430  260  ?LZNT1FindMatchMaximum@@YAKPEAEPEAU_LZNT1_MAXIMUM_WORKSPACE@@@Z
                        */
  puVar5 = *(uchar **)param_2;
  uVar3 = 0;
  if (puVar5 < param_1) {
    lVar4 = (longlong)puVar5 - (longlong)param_1;
    do {
      uVar1 = 0;
      puVar2 = param_1;
      if (*(uint *)(param_2 + 0x10) != 0) {
        do {
          if ((*(uchar **)(param_2 + 8) <= param_1 + uVar1) || (*puVar2 != puVar2[lVar4])) break;
          uVar1 = uVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar1 < *(uint *)(param_2 + 0x10));
      }
      if (uVar3 <= uVar1) {
        *(uchar **)(param_2 + 0x18) = puVar5;
        uVar3 = uVar1;
      }
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (puVar5 < param_1);
    if (2 < uVar3) {
      return uVar3;
    }
  }
  return 0;
}




/* unsigned long __cdecl LZNT1FindMatchStandard(unsigned char * __ptr64,struct
   _LZNT1_STANDARD_WORKSPACE * __ptr64) */

ulong __cdecl LZNT1FindMatchStandard(uchar *param_1,_LZNT1_STANDARD_WORKSPACE *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  
                    /* 0xb4d0  261
                       ?LZNT1FindMatchStandard@@YAKPEAEPEAU_LZNT1_STANDARD_WORKSPACE@@@Z */
  bVar1 = *param_1;
  bVar2 = param_1[1];
  bVar3 = param_1[2];
  pbVar11 = *(byte **)param_2;
  uVar12 = 0;
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar7 = (int)((((uint)bVar1 << 4 ^ (uint)bVar2) << 4 ^ (uint)bVar3) * -0x61a1) >> 4 & 0xfff;
  uVar9 = (ulonglong)uVar7;
  pbVar5 = *(byte **)(param_2 + uVar9 * 0x10 + 0x28);
  pbVar6 = *(byte **)(param_2 + ((ulonglong)uVar7 + 2) * 0x10);
  uVar8 = 0;
  uVar13 = 0;
  if (((((pbVar11 <= pbVar6) && (uVar13 = uVar12, pbVar6 < param_1)) && (*pbVar6 == bVar1)) &&
      ((pbVar6[1] == bVar2 && (pbVar6[2] == bVar3)))) && (uVar13 = 3, 3 < uVar4)) {
    puVar10 = param_1 + 3;
    do {
      if ((*(uchar **)(param_2 + 8) <= param_1 + uVar13) ||
         (*puVar10 != puVar10[(longlong)pbVar6 - (longlong)param_1])) break;
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 < uVar4);
    pbVar11 = *(byte **)param_2;
  }
  if ((((pbVar11 <= pbVar5) && (pbVar5 < param_1)) && (*pbVar5 == bVar1)) &&
     (((pbVar5[1] == bVar2 && (pbVar5[2] == bVar3)) && (uVar8 = 3, 3 < uVar4)))) {
    puVar10 = param_1 + 3;
    do {
      if ((*(uchar **)(param_2 + 8) <= param_1 + uVar8) ||
         (*puVar10 != puVar10[(longlong)pbVar5 - (longlong)param_1])) break;
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar8 < uVar4);
  }
  *(uchar **)(param_2 + ((ulonglong)uVar7 + 2) * 0x10) = param_1;
  if (uVar13 < uVar8) {
    *(byte **)(param_2 + uVar9 * 0x10 + 0x28) = pbVar5;
    *(byte **)(param_2 + 0x18) = pbVar5;
  }
  else {
    *(byte **)(param_2 + uVar9 * 0x10 + 0x28) = pbVar6;
    *(byte **)(param_2 + 0x18) = pbVar6;
    uVar8 = uVar13;
  }
  return uVar8;
}




void FUN_18000b630(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180009c80(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined4 * FUN_18000b680(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *_Dst;
  void *_Memory;
  undefined4 *puVar10;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 2;
  if (lVar5 == 0x3fffffffffffffff) {
    FUN_180007580();
    pcVar4 = (code *)swi(3);
    puVar10 = (undefined4 *)(*pcVar4)();
    return puVar10;
  }
  uVar1 = lVar5 + 1;
  uVar8 = param_1[2] - lVar3 >> 2;
  uVar6 = uVar1;
  if ((uVar8 <= 0x3fffffffffffffff - (uVar8 >> 1)) && (uVar6 = (uVar8 >> 1) + uVar8, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  uVar8 = uVar6 * 4;
  if (uVar6 < 0x4000000000000000) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined4 *)operator_new(uVar8);
      }
      goto LAB_18000b773;
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
  puVar10 = (undefined4 *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
  *(void **)(puVar10 + -2) = pvVar7;
LAB_18000b773:
  puVar2 = puVar10 + ((longlong)param_2 - lVar3 >> 2);
  *puVar2 = *param_3;
  pvVar7 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar7;
    _Dst = puVar10;
    param_2 = pvVar7;
  }
  else {
    memmove(puVar10,pvVar7,(longlong)param_2 - (longlong)pvVar7);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar7 = (void *)*param_1;
  if (pvVar7 != (void *)0x0) {
    _Memory = pvVar7;
    if ((0xfff < (param_1[2] - (longlong)pvVar7 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1);
  param_1[2] = (longlong)(puVar10 + uVar6);
  return puVar2;
}




undefined8 * FUN_18000b830(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  void *_Memory;
  
  lVar3 = *param_1;
  lVar13 = ((longlong)param_2 - lVar3) / 6 + ((longlong)param_2 - lVar3 >> 0x3f);
  lVar6 = (param_1[1] - lVar3) / 0x18;
  if (lVar6 == 0xaaaaaaaaaaaaaaa) {
    FUN_180007580();
    pcVar5 = (code *)swi(3);
    puVar15 = (undefined8 *)(*pcVar5)();
    return puVar15;
  }
  uVar1 = lVar6 + 1;
  uVar8 = (param_1[2] - lVar3) / 0x18;
  uVar14 = uVar1;
  if ((uVar8 <= 0xaaaaaaaaaaaaaaa - (uVar8 >> 1)) && (uVar14 = (uVar8 >> 1) + uVar8, uVar14 < uVar1)
     ) {
    uVar14 = uVar1;
  }
  uVar8 = uVar14 * 0x18;
  if (uVar14 < 0xaaaaaaaaaaaaaab) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = (undefined8 *)operator_new(uVar8);
      }
      goto LAB_18000b971;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  uVar11 = uVar8 + 0x27;
  if (uVar11 <= uVar8) {
    uVar11 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new(uVar11);
  if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar15 = (undefined8 *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
  puVar15[-1] = pvVar9;
LAB_18000b971:
  puVar2 = puVar15 + ((lVar13 >> 2) - (lVar13 >> 0x3f)) * 3;
  uVar7 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar7;
  puVar2[2] = param_3[2];
  puVar4 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar12 = puVar15;
  if (param_2 == puVar4) {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 3) {
      uVar7 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar7;
      puVar12[2] = puVar10[2];
      puVar12 = puVar12 + 3;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 3) {
      uVar7 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar7;
      puVar12[2] = puVar10[2];
      puVar12 = puVar12 + 3;
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar10 = puVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 3) {
      uVar7 = param_2[1];
      puVar10[3] = *param_2;
      puVar10[4] = uVar7;
      puVar10[5] = param_2[2];
      puVar10 = puVar10 + 3;
    }
  }
  pvVar9 = (void *)*param_1;
  if (pvVar9 != (void *)0x0) {
    _Memory = pvVar9;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar9) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar9 + -8),
       0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)puVar15;
  param_1[1] = (longlong)(puVar15 + uVar1 * 3);
  param_1[2] = (longlong)(puVar15 + uVar14 * 3);
  return puVar2;
}




undefined8 *
FUN_18000bad0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    FUN_180009d20(param_1,param_6);
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
      goto LAB_18000bb4f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000bb4f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000bb4f:
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
        goto LAB_18000bcf5;
      }
LAB_18000bc66:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_18000bc66;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180009d30(param_1,plVar2);
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
LAB_18000bcf5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_18000bd50(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    FUN_18000bad0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    if (*param_4 < param_3[4]) {
      FUN_18000bad0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    if ((longlong)((undefined8 *)plVar3[2])[4] < *param_4) {
      FUN_18000bad0(param_1,param_2,'\0',(undefined8 *)plVar3[2],param_4,param_5);
      return param_2;
    }
  }
  else {
    lVar1 = *param_4;
    lVar2 = param_3[4];
    if ((lVar1 < lVar2) &&
       (local_38 = param_3, plVar3 = FUN_1800087e0((longlong *)&local_38),
       *(longlong *)(*plVar3 + 0x20) < lVar1)) {
      if (*(char *)(local_38[2] + 0x19) != '\0') {
        FUN_18000bad0(param_1,param_2,'\0',local_38,param_4,param_5);
        return param_2;
      }
      FUN_18000bad0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
    if ((lVar2 < lVar1) &&
       ((lVar2 = *param_1, local_38 = param_3, plVar3 = FUN_18000c840((longlong *)&local_38),
        *plVar3 == lVar2 || (lVar1 < local_38[4])))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_18000bad0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_18000bad0(param_1,param_2,'\x01',local_38,param_4,param_5);
      return param_2;
    }
  }
  puVar4 = FUN_18000bf40(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar4;
  return param_2;
}




undefined8 *
FUN_18000bf40(longlong *param_1,undefined8 *param_2,char param_3,longlong *param_4,longlong *param_5
             )

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < plVar4[4];
    }
    else {
      bVar5 = *param_4 <= plVar4[4];
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_18000bad0(param_1,&local_18,'\x01',plVar6,param_4,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if (plVar4[4] < *param_4) {
    puVar3 = FUN_18000bad0(param_1,&local_18,bVar5,plVar6,param_4,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_10 = 0x30;
    free(param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_18000c0c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pvVar4 = (void *)param_1[1];
  lVar1 = *param_1;
  uVar6 = (longlong)pvVar4 - lVar1;
  uVar3 = param_1[2] - lVar1;
  if (param_2 <= uVar3) {
    if (param_2 <= uVar6) {
      if (param_2 != uVar6) {
        param_1[1] = lVar1 + param_2;
      }
      return;
    }
    memset(pvVar4,0,(param_2 + lVar1) - (longlong)pvVar4);
    param_1[1] = param_2 + lVar1;
    return;
  }
  if (0x7fffffffffffffff < param_2) {
    FUN_180007580();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = param_2;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
     (uVar5 = (uVar3 >> 1) + uVar3, uVar5 < param_2)) {
    uVar5 = param_2;
  }
  pvVar4 = FUN_18000f8d0(param_1,uVar5);
  memset((void *)((longlong)pvVar4 + uVar6),0,
         (longlong)pvVar4 + (param_2 - (longlong)((longlong)pvVar4 + uVar6)));
  memmove(pvVar4,(void *)*param_1,param_1[1] - *param_1);
  FUN_18000f840(param_1,(longlong)pvVar4,param_2,uVar5);
  return;
}




void FUN_18000c1d0(longlong *param_1,ulonglong param_2)

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
    FUN_180007580();
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




void FUN_18000c360(longlong *param_1,ulonglong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pvVar3 = (void *)param_1[1];
  lVar4 = *param_1;
  uVar6 = (longlong)pvVar3 - lVar4;
  uVar2 = param_1[2] - lVar4;
  if (uVar2 < param_2) {
    if (param_2 < 0x8000000000000000) {
      uVar5 = param_2;
      if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
         (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_2)) {
        uVar5 = param_2;
      }
      pvVar3 = FUN_18000f8d0(param_1,uVar5);
      memset((void *)((longlong)pvVar3 + uVar6),(uint)**(byte **)(param_3 + 8),param_2 - uVar6);
      memmove(pvVar3,(void *)*param_1,param_1[1] - *param_1);
      FUN_18000f840(param_1,(longlong)pvVar3,param_2,uVar5);
      return;
    }
    FUN_180007580();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar6 < param_2) {
    memset(pvVar3,(uint)**(byte **)(param_3 + 8),param_2 - uVar6);
    lVar4 = (param_2 - uVar6) + (longlong)pvVar3;
  }
  else {
    if (param_2 == uVar6) {
      return;
    }
    lVar4 = lVar4 + param_2;
  }
  param_1[1] = lVar4;
  return;
}




longlong FUN_18000c480(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_180009c40();
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_180009c40();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  CHardDriveIO::CHardDriveIO((CHardDriveIO *)(param_1 + 0x60));
  CNtfsVolume::CNtfsVolume((CNtfsVolume *)(param_1 + 0xc0));
  CNtfsFileRecordAttribute::CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x10138) = 0;
  *(undefined8 *)(param_1 + 0x10140) = 0;
  *(undefined8 *)(param_1 + 0x10148) = 0;
  *(undefined8 *)(param_1 + 0x10150) = 0;
  *(undefined8 *)(param_1 + 0x10158) = 0;
  *(undefined8 *)(param_1 + 0x10160) = 0;
  *(undefined8 *)(param_1 + 0x10168) = 0;
  *(undefined8 *)(param_1 + 0x10170) = 0;
  *(undefined8 *)(param_1 + 0x10178) = 0;
  TBitmap::TBitmap((TBitmap *)(param_1 + 0x10188));
  *(undefined8 *)(param_1 + 0x101a8) = 0;
  *(undefined8 *)(param_1 + 0x101b0) = 0;
  *(undefined8 *)(param_1 + 0x101b8) = 0;
  *(undefined8 *)(param_1 + 0x10128) = 0xffffffffffff0000;
  *(undefined4 *)(param_1 + 0x10130) = 0;
  *(undefined8 *)(param_1 + 0x101a0) = 0;
  *(undefined8 *)(param_1 + 0x101c0) = 0;
  return param_1;
}




void FUN_18000c5b0(longlong *param_1)

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




void FUN_18000c620(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
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




void FUN_18000c690(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x18) * 0x18)) &&
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




void FUN_18000c720(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_180009d90(plVar1);
  plVar2 = (longlong *)(param_1 + 0x18);
  FUN_180009d90(plVar2);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x101b0) = *(longlong *)(param_1 + 0x101a8);
  FUN_18000c690((longlong *)(param_1 + 0x101a8));
  TBitmap::~TBitmap((TBitmap *)(param_1 + 0x10188));
  FUN_18000c620((longlong *)(param_1 + 0x10168));
  FUN_18000c690((longlong *)(param_1 + 0x10150));
  FUN_18000c690((longlong *)(param_1 + 0x10138));
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_1 + 0x118))
  ;
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_1 + 0xc0));
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(param_1 + 0x60));
  FUN_18000c690((longlong *)(param_1 + 0x40));
  FUN_18000c5b0((longlong *)(param_1 + 0x28));
  FUN_180009d90(plVar2);
  free((void *)*plVar2);
  FUN_180009d90(plVar1);
  free((void *)*plVar1);
  return;
}




longlong * FUN_18000c840(longlong *param_1)

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




undefined8 FUN_18000c8b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  void *_Memory;
  void *local_20;
  longlong lStack_18;
  longlong local_10;
  
  local_20 = (void *)0x0;
  lStack_18 = 0;
  local_10 = 0;
  iVar4 = FUN_18000d9a0(param_1,param_2,(longlong *)&local_20,param_4);
  if (iVar4 == 0) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x3f3
                  ,param_4);
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    lVar3 = lStack_18 - (longlong)local_20 >> 0x3f;
    if ((lStack_18 - (longlong)local_20) / 0x18 + lVar3 != lVar3) {
      uVar7 = 0;
      do {
        puVar1 = (undefined8 *)((longlong)local_20 + uVar7 * 0x18);
        puVar2 = *(undefined8 **)(param_1 + 0x101b0);
        if (*(undefined8 **)(param_1 + 0x101b8) == puVar2) {
          FUN_18000b830((longlong *)(param_1 + 0x101a8),puVar2,puVar1);
        }
        else {
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = puVar1[2];
          *(longlong *)(param_1 + 0x101b0) = *(longlong *)(param_1 + 0x101b0) + 0x18;
        }
        uVar6 = uVar6 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar7 < (ulonglong)((lStack_18 - (longlong)local_20) / 0x18));
    }
    uVar5 = 1;
  }
  if (local_20 != (void *)0x0) {
    _Memory = local_20;
    if ((0xfff < (ulonglong)(((local_10 - (longlong)local_20) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)local_20 + -8),
       0x1f < (ulonglong)((longlong)local_20 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar5;
}




undefined8 FUN_18000ca40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint uVar13;
  longlong *local_res20;
  longlong *local_68;
  undefined8 local_60;
  void *local_58;
  longlong lStack_50;
  longlong local_48;
  
  local_60 = 0xfffffffffffffffe;
  local_58 = (void *)0x0;
  lStack_50 = 0;
  local_48 = 0;
  iVar5 = FUN_18000de50(param_1,param_2,(longlong *)&local_58,param_4);
  if (iVar5 == 0) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x95,
                  param_4);
    uVar10 = 0;
  }
  else {
    uVar13 = 0;
    lVar3 = lStack_50 - (longlong)local_58 >> 0x3f;
    if ((lStack_50 - (longlong)local_58) / 0x18 + lVar3 != lVar3) {
      uVar11 = 0;
      plVar1 = (longlong *)(param_1 + 0x58);
      do {
        lVar3 = uVar11 * 0x18;
        puVar2 = (undefined8 *)(lVar3 + (longlong)local_58);
        puVar4 = *(undefined8 **)(param_1 + 0x48);
        if (*(undefined8 **)(param_1 + 0x50) == puVar4) {
          FUN_18000b830((longlong *)(param_1 + 0x40),puVar4,puVar2);
        }
        else {
          uVar10 = puVar2[1];
          *puVar4 = *puVar2;
          puVar4[1] = uVar10;
          puVar4[2] = puVar2[2];
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x18;
        }
        pvVar12 = local_58;
        plVar8 = *(longlong **)(param_1 + 8);
        plVar9 = plVar8;
        if (*(char *)(plVar8[1] + 0x19) == '\0') {
          plVar6 = (longlong *)plVar8[1];
          do {
            if (plVar6[4] < *plVar1) {
              plVar7 = (longlong *)plVar6[2];
            }
            else {
              plVar7 = (longlong *)*plVar6;
              plVar9 = plVar6;
            }
            plVar6 = plVar7;
          } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
          if ((plVar9 == plVar8) || (*plVar1 < plVar9[4])) goto LAB_18000cb58;
        }
        else {
LAB_18000cb58:
          local_res20 = plVar1;
          plVar8 = (longlong *)
                   FUN_18000b630((undefined8 *)(param_1 + 8),&DAT_18001d5f5,&local_res20);
          FUN_18000bd50((longlong *)(param_1 + 8),&local_68,plVar9,plVar8 + 4,plVar8);
          plVar9 = local_68;
        }
        plVar9[5] = *(longlong *)((longlong)pvVar12 + lVar3);
        *plVar1 = *plVar1 + *(longlong *)(lVar3 + 0x10 + (longlong)local_58) *
                            (longlong)*(int *)(param_1 + 0xdc);
        uVar13 = uVar13 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar11 < (ulonglong)((lStack_50 - (longlong)local_58) / 0x18));
    }
    uVar10 = 1;
  }
  if (local_58 != (void *)0x0) {
    pvVar12 = local_58;
    if ((0xfff < (ulonglong)(((local_48 - (longlong)local_58) / 0x18) * 0x18)) &&
       (pvVar12 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar12);
  }
  return uVar10;
}




undefined8 FUN_18000cc80(longlong param_1)

{
  __int64 *p_Var1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  __int64 _Var11;
  int local_38;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  uVar9 = 0;
  lVar7 = *(longlong *)(param_1 + 0x10168);
  if (*(longlong *)(param_1 + 0x10170) - lVar7 >> 2 != 0) {
    uVar6 = 0;
    do {
      uVar6 = (ulonglong)*(uint *)(lVar7 + uVar6 * 4);
      uVar10 = 0;
      lVar3 = *(longlong *)(param_1 + 0x10138);
      p_Var1 = (__int64 *)(*(longlong *)(param_1 + 0x40) + uVar6 * 0x18);
      _Var11 = *p_Var1;
      lVar5 = p_Var1[1];
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10 + uVar6 * 0x18);
      lVar8 = *(longlong *)(param_1 + 0x10140) - lVar3;
      lVar4 = lVar8 >> 0x3f;
      lVar8 = lVar8 / 0x18 + lVar4;
      if (lVar8 == lVar4) {
LAB_18000cd37:
        FUN_180008d10("*****************\tFailed at (%s,%d)----NeedDataRun((%I64d,%I64d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      0x273,_Var11);
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      0x25d,_Var11);
        return 0;
      }
      uVar6 = 0;
      while (*(longlong *)(lVar3 + 0x10 + uVar6 * 0x18) < lVar7) {
        uVar10 = uVar10 + 1;
        uVar6 = (ulonglong)uVar10;
        if ((ulonglong)(lVar8 - lVar4) <= uVar6) goto LAB_18000cd37;
      }
      local_28 = *(longlong *)(lVar3 + uVar6 * 0x18);
      *(longlong *)(lVar3 + uVar6 * 0x18) = local_28 + lVar7;
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10138) + 0x10 + uVar6 * 0x18);
      *plVar2 = *plVar2 - lVar7;
      local_38 = (int)lVar7;
      lStack_20 = lVar5;
      local_18 = lVar7;
      TBitmap::SetBit((TBitmap *)(param_1 + 0x10188),local_28,1,local_38);
      TBitmap::SetBit((TBitmap *)(param_1 + 0x10188),_Var11,0,local_38);
      plVar2 = *(longlong **)(param_1 + 0x10158);
      if (*(longlong **)(param_1 + 0x10160) == plVar2) {
        FUN_18000b830((longlong *)(param_1 + 0x10150),plVar2,&local_28);
      }
      else {
        *plVar2 = local_28;
        plVar2[1] = lStack_20;
        plVar2[2] = local_18;
        *(longlong *)(param_1 + 0x10158) = *(longlong *)(param_1 + 0x10158) + 0x18;
      }
      lVar7 = *(longlong *)(param_1 + 0x10168);
      uVar9 = uVar9 + 1;
      uVar6 = (ulonglong)uVar9;
    } while (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x10170) - lVar7 >> 2));
  }
  return 1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000ce60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_1058 [32];
  uint local_1038 [4];
  undefined1 local_1028 [48];
  undefined8 local_ff8;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000ce72;
  local_28 = DAT_18002c018 ^ (ulonglong)auStack_1058;
  *(undefined8 *)(param_1 + 0x10180) = param_2;
  plVar1 = (longlong *)(param_1 + 0x10168);
  lVar5 = *plVar1;
  *(longlong *)(param_1 + 0x10170) = lVar5;
  lVar11 = *(longlong *)(param_1 + 0x40);
  uVar10 = 0;
  local_1038[0] = 0;
  uVar8 = (*(longlong *)(param_1 + 0x48) - lVar11) / 0x18;
  if (uVar8 != 0) {
    do {
      uVar3 = local_1038[0];
      lVar5 = *(longlong *)(lVar11 + 0x10 + (ulonglong)local_1038[0] * 0x18) +
              *(longlong *)(lVar11 + (ulonglong)local_1038[0] * 0x18);
      if (lVar5 == -1) {
        lVar5 = -1;
      }
      else {
        lVar5 = *(int *)(param_1 + 0xdc) * lVar5 + *(longlong *)(param_1 + 0xf0);
      }
      if (*(longlong *)(param_1 + 0xf0) + *(longlong *)(param_1 + 0x10180) < lVar5) {
        puVar2 = *(undefined4 **)(param_1 + 0x10170);
        if (*(undefined4 **)(param_1 + 0x10178) == puVar2) {
          FUN_18000b680(plVar1,puVar2,local_1038);
        }
        else {
          *puVar2 = (int)uVar10;
          *(longlong *)(param_1 + 0x10170) = *(longlong *)(param_1 + 0x10170) + 4;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x40);
      local_1038[0] = uVar3 + 1;
      uVar10 = (ulonglong)local_1038[0];
      uVar8 = (*(longlong *)(param_1 + 0x48) - lVar11) / 0x18;
    } while (uVar10 < uVar8);
    lVar5 = *(longlong *)(param_1 + 0x10170);
  }
  uVar9 = lVar5 - *plVar1;
  if ((uVar9 & 0xfffffffffffffffc) != 0) {
    uVar6 = FUN_18000ef10(param_1,uVar8,uVar9,uVar10);
    if ((int)uVar6 == 0) {
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x1b2,uVar10);
    }
    else {
      uVar6 = FUN_18000d0e0(param_1);
      if ((int)uVar6 == 0) {
        uVar6 = 0x1ca;
      }
      else {
        uVar6 = FUN_18000f0f0(param_1);
        if ((int)uVar6 == 0) {
          uVar6 = 0x1d0;
        }
        else {
          uVar6 = FUN_18000f600(param_1,uVar8,uVar9,uVar10);
          if ((int)uVar6 == 0) {
            uVar6 = 0x1d6;
          }
          else {
            if (*(int *)*plVar1 != 0) goto LAB_18000d0a7;
            uVar10 = 1;
            uVar6 = **(undefined8 **)(param_1 + 0x40);
            iVar4 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                              (param_1 + 0x60,local_1028,*(undefined8 *)(param_1 + 0xf0));
            if (iVar4 == 0) {
              pcVar7 = "Read $Boot failed!(%s,%d)";
              uVar6 = 0x394;
            }
            else {
              uVar10 = 1;
              local_ff8 = uVar6;
              iVar4 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))
                                (param_1 + 0x60,local_1028,*(undefined8 *)(param_1 + 0xf0));
              if (iVar4 != 0) goto LAB_18000d0a7;
              pcVar7 = "Write $Boot failed!(%s,%d)";
              uVar6 = 0x39b;
            }
            FUN_180008d10(pcVar7,
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                          ,uVar6,uVar10);
            uVar6 = 0x1de;
          }
        }
      }
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    uVar6,uVar10);
    }
  }
LAB_18000d0a7:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1058);
  return;
}




void FUN_18000d0d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10128) = 0;
  *(undefined4 *)(param_1 + 0x10130) = 0;
  return;
}




undefined8 FUN_18000d0e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *local_res10;
  longlong *local_res18;
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_68;
  longlong lStack_60;
  
  local_b0 = 0xfffffffffffffffe;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uVar13 = 0;
  lVar9 = *(longlong *)(param_1 + 0x10168);
  if (*(longlong *)(param_1 + 0x10170) - lVar9 >> 2 != 0) {
    uVar7 = 0;
    do {
      lVar1 = uVar7 * 4;
      lVar10 = *(longlong *)
                (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(lVar1 + lVar9) * 0x18);
      local_98 = *(longlong *)
                  (*(longlong *)(param_1 + 0x40) + 0x10 + (ulonglong)*(uint *)(lVar1 + lVar9) * 0x18
                  );
      FUN_18000c0c0((longlong *)&local_c8,
                    (longlong)(*(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xdc) * (int)local_98))
      ;
      if (lVar10 == -1) {
        lVar9 = -1;
      }
      else {
        lVar9 = *(int *)(param_1 + 0xdc) * lVar10 + *(longlong *)(param_1 + 0xf0);
      }
      plVar12 = (longlong *)(*(int *)(param_1 + 0xdc) * local_98);
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))(param_1 + 0x60,local_c8,lVar9);
      if (iVar4 == 0) {
        uVar11 = 0x28a;
LAB_18000d3f5:
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      uVar11,plVar12);
        uVar11 = 0;
        goto LAB_18000d3af;
      }
      lVar9 = uVar7 * 0x18;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10150) + lVar9);
      if (lVar10 == -1) {
        lVar10 = -1;
      }
      else {
        lVar10 = *(int *)(param_1 + 0xdc) * lVar10 + *(longlong *)(param_1 + 0xf0);
      }
      plVar12 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x10 + lVar9) *
                (longlong)*(int *)(param_1 + 0xdc));
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))(param_1 + 0x60,local_c8,lVar10);
      if (iVar4 == 0) {
        uVar11 = 0x291;
        goto LAB_18000d3f5;
      }
      plVar12 = (longlong *)(lVar9 + *(longlong *)(param_1 + 0x10150));
      local_68 = *plVar12;
      lStack_60 = plVar12[1];
      plVar12 = (longlong *)
                (*(longlong *)(param_1 + 0x40) +
                (ulonglong)*(uint *)(lVar1 + *(longlong *)(param_1 + 0x10168)) * 0x18);
      local_88 = *plVar12;
      lStack_80 = plVar12[1];
      plVar12 = *(longlong **)(param_1 + 8);
      plVar3 = (longlong *)*plVar12;
      while( true ) {
        if (plVar3 == plVar12) {
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,0x3ad,plVar12);
          uVar11 = 0x296;
          goto LAB_18000d3f5;
        }
        if (local_88 == plVar3[5]) break;
        plVar8 = (longlong *)plVar3[2];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x19);
          plVar3 = plVar8;
          plVar8 = (longlong *)*plVar8;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar8 + 0x19);
            plVar3 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar2 = *(char *)(plVar3[1] + 0x19);
          plVar5 = (longlong *)plVar3[1];
          plVar8 = plVar3;
          while ((plVar3 = plVar5, cVar2 == '\0' && (plVar8 == (longlong *)plVar3[2]))) {
            cVar2 = *(char *)(plVar3[1] + 0x19);
            plVar5 = (longlong *)plVar3[1];
            plVar8 = plVar3;
          }
        }
      }
      plVar8 = plVar12;
      if (*(char *)(plVar12[1] + 0x19) == '\0') {
        lVar10 = plVar3[4];
        plVar5 = (longlong *)plVar12[1];
        do {
          if (plVar5[4] < lVar10) {
            plVar6 = (longlong *)plVar5[2];
          }
          else {
            plVar6 = (longlong *)*plVar5;
            plVar8 = plVar5;
          }
          plVar5 = plVar6;
        } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
        if ((plVar8 == plVar12) || (lVar10 < plVar8[4])) goto LAB_18000d323;
      }
      else {
LAB_18000d323:
        local_res10 = plVar3 + 4;
        plVar12 = (longlong *)FUN_18000b630((undefined8 *)(param_1 + 8),&DAT_18001d5f5,&local_res10)
        ;
        FUN_18000bd50((longlong *)(param_1 + 8),&local_res18,plVar8,plVar12 + 4,plVar12);
        plVar8 = local_res18;
      }
      plVar8[5] = local_68;
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x40) +
       (ulonglong)*(uint *)(lVar1 + *(longlong *)(param_1 + 0x10168)) * 0x18) =
           *(undefined8 *)(lVar9 + *(longlong *)(param_1 + 0x10150));
      uVar13 = uVar13 + 1;
      lVar9 = *(longlong *)(param_1 + 0x10168);
      uVar7 = (ulonglong)uVar13;
    } while (uVar7 < (ulonglong)(*(longlong *)(param_1 + 0x10170) - lVar9 >> 2));
  }
  uVar11 = 1;
LAB_18000d3af:
  if (local_c8 != (void *)0x0) {
    _Memory = local_c8;
    if ((0xfff < (ulonglong)(local_b8 - (longlong)local_c8)) &&
       (_Memory = *(void **)((longlong)local_c8 + -8),
       0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  return uVar11;
}




int FUN_18000d450(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  int local_18;
  
  lVar4 = FUN_18000e390(param_1,param_2);
  lVar10 = *(longlong *)(param_1 + 0x10128);
  if ((lVar4 < lVar10) || (*(int *)(param_1 + 0x10130) + lVar10 <= lVar4)) {
    puVar6 = *(undefined8 **)(param_1 + 8);
    cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
    puVar5 = (undefined8 *)puVar6[1];
    while (cVar1 == '\0') {
      if (param_2 < (longlong)puVar5[4]) {
        puVar8 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
      }
      else {
        puVar8 = (undefined8 *)puVar5[2];
      }
      puVar5 = puVar8;
      cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      puVar5 = (undefined8 *)*puVar6;
      if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar5[2] + 0x19);
        puVar6 = (undefined8 *)puVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar6[2] + 0x19);
          puVar5 = puVar6;
          puVar6 = (undefined8 *)puVar6[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar8 = (undefined8 *)puVar6[1];
        while ((puVar5 = puVar8, cVar1 == '\0' && (puVar6 == (undefined8 *)*puVar5))) {
          cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar8 = (undefined8 *)puVar5[1];
          puVar6 = puVar5;
        }
        if (*(char *)((longlong)puVar6 + 0x19) != '\0') {
          puVar5 = puVar6;
        }
      }
    }
    else {
      puVar5 = (undefined8 *)puVar6[2];
    }
    plVar7 = *(longlong **)(param_1 + 0x40);
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar7 != plVar2) {
      do {
        if (*plVar7 == puVar5[5]) {
          if (plVar2 != plVar7) {
            iVar9 = (int)(0x10000 / (longlong)*(int *)(param_1 + 0xd8));
            if (((longlong)*(int *)(param_1 + 0xdc) * plVar7[2] - param_2) + puVar5[4] <
                (longlong)iVar9) {
              local_18 = (int)plVar7[2];
              iVar9 = (*(int *)(param_1 + 0xdc) * local_18 - (int)param_2) + (int)puVar5[4];
            }
            lVar10 = (longlong)iVar9;
            iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                              (param_1 + 0x60,param_1 + 0x128,lVar4);
            if (iVar3 != 0) {
              *(int *)(param_1 + 0x10130) = iVar9;
              *(longlong *)(param_1 + 0x10128) = lVar4;
              lVar10 = lVar4;
              goto LAB_18000d5ed;
            }
            FUN_180008d10("*****************\tFailed at (%s,%d)",
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                          ,0x18b,lVar10);
          }
          break;
        }
        plVar7 = plVar7 + 3;
      } while (plVar7 != plVar2);
    }
    iVar9 = -1;
  }
  else {
LAB_18000d5ed:
    iVar9 = ((int)lVar4 - (int)lVar10) * *(int *)(param_1 + 0xd8);
  }
  return iVar9;
}




undefined4 FUN_18000d600(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  CNtfsFileRecord *pCVar4;
  undefined4 uVar5;
  CNtfsFileRecordAttribute *local_res10;
  CNtfsRunList local_60 [8];
  int local_58;
  CNtfsRunList local_50 [8];
  int local_48;
  longlong local_30;
  int local_28;
  
  if (param_2 < 0) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x2f4
                  ,param_4);
    uVar5 = 0;
  }
  else {
    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_30);
    uVar3 = FUN_18000dc10(param_1,param_2,(CNtfsFileRecord *)&local_30);
    if ((int)uVar3 == 0) {
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x2fb,param_4);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar2 = 0;
      if (0 < local_28) {
        do {
          if ((-1 < iVar2) && (iVar2 < local_28)) {
            local_res10 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + local_30);
          }
          piVar1 = *(int **)local_res10;
          if (((*piVar1 == 0x80) && ((char)piVar1[2] != '\0')) &&
             (*(char *)((longlong)piVar1 + 9) == '\0')) {
            CNtfsRunList::CNtfsRunList(local_50);
            iVar2 = CNtfsFileRecordAttribute::GetDataRunList(local_res10,local_50);
            if (iVar2 == 0) {
              FUN_180008d10("*****************\tFailed at (%s,%d)",
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                            ,0x310,param_4);
            }
            else {
              CNtfsRunList::CNtfsRunList(local_60);
              uVar3 = FUN_18000e190(param_1,param_2,(longlong *)local_60);
              if ((int)uVar3 == 0) {
                uVar3 = 0x316;
              }
              else if (local_48 == local_58) {
                iVar2 = CNtfsFileRecordAttribute::SetDataRunList(local_res10,local_60);
                if (iVar2 != 0) {
                  CNtfsRunList::~CNtfsRunList(local_60);
                  CNtfsRunList::~CNtfsRunList(local_50);
                  break;
                }
                uVar3 = 800;
              }
              else {
                uVar3 = 0x31b;
              }
              FUN_180008d10("*****************\tFailed at (%s,%d)",
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                            ,uVar3,param_4);
              CNtfsRunList::~CNtfsRunList(local_60);
            }
            CNtfsRunList::~CNtfsRunList(local_50);
            goto LAB_18000d7f1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_28);
      }
      pCVar4 = (CNtfsFileRecord *)
               CNtfsFileRecord::CNtfsFileRecord
                         ((CNtfsFileRecord *)local_50,(CNtfsFileRecord *)&local_30);
      uVar3 = FUN_18000f290(param_1,param_2,pCVar4,param_4);
      if ((int)uVar3 == 0) {
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      0x327,param_4);
      }
      else {
        uVar5 = 1;
      }
    }
LAB_18000d7f1:
    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_30);
  }
  return uVar5;
}




undefined8 FUN_18000d820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x101a8) == *(longlong *)(param_1 + 0x101b0)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x101c0);
}




undefined8 FUN_18000d840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x101a8);
  if (lVar7 == *(longlong *)(param_1 + 0x101b0)) {
    return 0;
  }
  uVar8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x101b0) - lVar7;
  lVar3 = lVar5 >> 0x3f;
  if (lVar5 / 0x18 + lVar3 != lVar3) {
    do {
      puVar1 = (undefined8 *)(lVar7 + uVar8 * 0x18);
      if ((int)param_2[1] == *(int *)((longlong)param_2 + 0xc)) {
        if (*(int *)((longlong)param_2 + 0xc) == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = (int)param_2[1] * 2;
        }
        _Dst = malloc((longlong)iVar6 * 0x18);
        if (_Dst != (void *)0x0) {
          if ((void *)*param_2 != (void *)0x0) {
            memcpy(_Dst,(void *)*param_2,(longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
            free((void *)*param_2);
          }
          *(int *)((longlong)param_2 + 0xc) = iVar6;
          *param_2 = (longlong)_Dst;
          goto LAB_18000d921;
        }
      }
      else {
LAB_18000d921:
        puVar2 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          uVar4 = puVar1[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = puVar1[2];
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      lVar7 = *(longlong *)(param_1 + 0x101a8);
    } while (uVar8 < (ulonglong)((*(longlong *)(param_1 + 0x101b0) - lVar7) / 0x18));
  }
  return 1;
}




undefined4 FUN_18000d9a0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  CNtfsFileRecordAttribute *this;
  ulonglong uVar4;
  int iVar5;
  CNtfsFileRecordAttribute *pCVar6;
  undefined4 uVar7;
  CNtfsFileRecordAttribute *local_res20;
  longlong local_80;
  int local_78;
  int *local_70 [2];
  CNtfsFileRecordAttribute local_60 [16];
  longlong local_50;
  int local_48;
  
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_50);
  uVar3 = FUN_18000dc10(param_1,param_2,(CNtfsFileRecord *)&local_50);
  if ((int)uVar3 == 0) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x402
                  ,param_4);
    uVar7 = 0;
  }
  else {
    CNtfsFileRecordAttribute::CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
    uVar7 = 0;
    iVar5 = 0;
    pCVar6 = local_res20;
    if (0 < local_48) {
      do {
        if ((-1 < iVar5) && (iVar5 < local_48)) {
          pCVar6 = (CNtfsFileRecordAttribute *)((longlong)iVar5 * 0x10 + local_50);
        }
        CNtfsFileRecordAttribute::operator=((CNtfsFileRecordAttribute *)local_70,pCVar6);
        if (*local_70[0] == 0xb0) {
          if ((char)local_70[0][2] == '\0') {
            uVar3 = 0x40d;
          }
          else {
            this = (CNtfsFileRecordAttribute *)
                   CNtfsFileRecordAttribute::CNtfsFileRecordAttribute
                             (local_60,(CNtfsFileRecordAttribute *)local_70);
            CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_80);
            iVar2 = CNtfsFileRecordAttribute::GetDataRunList(this,(CNtfsRunList *)&local_80);
            if (iVar2 != 0) {
              iVar2 = 0;
              if (0 < local_78) {
                do {
                  if ((-1 < iVar2) && (iVar2 < local_78)) {
                    local_res20 = (CNtfsFileRecordAttribute *)(local_80 + (longlong)iVar2 * 0x18);
                  }
                  puVar1 = (undefined8 *)param_3[1];
                  if ((undefined8 *)param_3[2] == puVar1) {
                    FUN_18000b830(param_3,puVar1,(undefined8 *)local_res20);
                  }
                  else {
                    uVar3 = *(undefined8 *)(local_res20 + 8);
                    *puVar1 = *(undefined8 *)local_res20;
                    puVar1[1] = uVar3;
                    puVar1[2] = *(undefined8 *)(local_res20 + 0x10);
                    param_3[1] = param_3[1] + 0x18;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < local_78);
              }
              CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_80);
              CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(this);
              if ((char)local_70[0][2] == '\0') {
                uVar4 = (ulonglong)(uint)local_70[0][4];
              }
              else {
                uVar4 = *(ulonglong *)(local_70[0] + 10);
              }
              *(longlong *)(param_1 + 0x101c0) = *(longlong *)(param_1 + 0x101c0) + uVar4;
              goto LAB_18000db3d;
            }
            FUN_180008d10("*****************\tFailed at (%s,%d)",
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                          ,0x420,param_4);
            CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_80);
            CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(this);
            uVar3 = 0x412;
          }
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,uVar3,param_4);
          goto LAB_18000db51;
        }
LAB_18000db3d:
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_48);
    }
    uVar7 = 1;
LAB_18000db51:
    CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
  }
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_50);
  return uVar7;
}




undefined8 FUN_18000dbe0(longlong param_1,CNtfsFileRecord *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Memory;
  longlong lVar6;
  int iVar7;
  size_t _Size;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iStackX_10;
  undefined8 uVar13;
  void *pvStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  
  lVar9 = *(longlong *)(param_1 + 0x101a0);
  if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x101a8) != *(longlong *)(param_1 + 0x101b0))) {
    return 0;
  }
  uVar13 = 0xfffffffffffffffe;
  iVar4 = *(int *)(param_1 + 0xd8);
  _Size = (size_t)iVar4;
  if (iVar4 < 1) {
    lVar11 = 0;
  }
  else if (*(int *)(param_1 + 0xe0) < 1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)(_Size * *(longlong *)(param_1 + 0x58)) / (longlong)*(int *)(param_1 + 0xe0);
  }
  if ((lVar11 < lVar9) || (lVar9 < 0)) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x12d
                  ,lVar9);
  }
  else if (0 < iVar4) {
    iVar1 = *(int *)(param_1 + 0xe0);
    lVar11 = (longlong)iVar1;
    if (0 < iVar1) {
      lVar5 = lVar11 * lVar9;
      lVar6 = lVar5 % (longlong)_Size;
      uVar10 = 1;
      iVar2 = 1;
      if (iVar4 < iVar1) {
        iVar2 = iVar1 / iVar4;
      }
      pvStack_50 = (void *)0x0;
      uStack_48 = 0;
      lStack_40 = 0;
      FUN_18000c1d0((longlong *)&pvStack_50,(longlong)(iVar2 * iVar4));
      iVar7 = 0;
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          lVar12 = (((lVar5 - lVar6) / lVar11) * lVar11) / (longlong)_Size + (longlong)iVar7;
          iVar3 = FUN_18000d450(param_1,lVar12);
          if (iVar3 < 0) {
            lVar12 = FUN_18000e390(param_1,lVar12);
            lVar9 = 1;
            iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                              ((longlong *)(param_1 + 0x60),(longlong)iVar8 + (longlong)pvStack_50,
                               lVar12,1,uVar13);
            if (iVar3 == 0) {
              uVar13 = 0x153;
              goto LAB_18000ddae;
            }
          }
          else {
            memcpy((void *)((longlong)iVar8 + (longlong)pvStack_50),
                   (void *)(param_1 + 0x128 + (longlong)iVar3),_Size);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + iVar4;
        } while (iVar7 < iVar2);
      }
      iStackX_10 = (int)lVar6;
      iVar4 = CNtfsFileRecord::InitFromSourceFileRecord
                        (param_2,(uchar *)((longlong)iStackX_10 + (longlong)pvStack_50),iVar1);
      if (iVar4 == 0) {
        uVar13 = 0x160;
LAB_18000ddae:
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      uVar13,lVar9);
        uVar10 = 0;
      }
      if (pvStack_50 == (void *)0x0) {
        return uVar10;
      }
      _Memory = pvStack_50;
      if ((0xfff < (ulonglong)(lStack_40 - (longlong)pvStack_50)) &&
         (_Memory = *(void **)((longlong)pvStack_50 + -8),
         0x1f < (ulonglong)((longlong)pvStack_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      return uVar10;
    }
  }
  return 0;
}




undefined8 FUN_18000dc10(longlong param_1,longlong param_2,CNtfsFileRecord *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Memory;
  longlong lVar6;
  int iVar7;
  size_t _Size;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res10;
  undefined8 uVar12;
  void *local_50;
  undefined8 uStack_48;
  longlong local_40;
  
  uVar12 = 0xfffffffffffffffe;
  iVar4 = *(int *)(param_1 + 0xd8);
  _Size = (size_t)iVar4;
  if (iVar4 < 1) {
    lVar10 = 0;
  }
  else if (*(int *)(param_1 + 0xe0) < 1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(_Size * *(longlong *)(param_1 + 0x58)) / (longlong)*(int *)(param_1 + 0xe0);
  }
  if ((lVar10 < param_2) || (param_2 < 0)) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x12d
                  ,param_2);
  }
  else if (0 < iVar4) {
    iVar1 = *(int *)(param_1 + 0xe0);
    lVar10 = (longlong)iVar1;
    if (0 < iVar1) {
      lVar5 = lVar10 * param_2;
      lVar6 = lVar5 % (longlong)_Size;
      uVar9 = 1;
      iVar2 = 1;
      if (iVar4 < iVar1) {
        iVar2 = iVar1 / iVar4;
      }
      local_50 = (void *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      FUN_18000c1d0((longlong *)&local_50,(longlong)(iVar2 * iVar4));
      iVar7 = 0;
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          lVar11 = (((lVar5 - lVar6) / lVar10) * lVar10) / (longlong)_Size + (longlong)iVar7;
          iVar3 = FUN_18000d450(param_1,lVar11);
          if (iVar3 < 0) {
            lVar11 = FUN_18000e390(param_1,lVar11);
            param_2 = 1;
            iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                              ((longlong *)(param_1 + 0x60),(longlong)iVar8 + (longlong)local_50,
                               lVar11,1,uVar12);
            if (iVar3 == 0) {
              uVar12 = 0x153;
              goto LAB_18000ddae;
            }
          }
          else {
            memcpy((void *)((longlong)iVar8 + (longlong)local_50),
                   (void *)(param_1 + 0x128 + (longlong)iVar3),_Size);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + iVar4;
        } while (iVar7 < iVar2);
      }
      local_res10 = (int)lVar6;
      iVar4 = CNtfsFileRecord::InitFromSourceFileRecord
                        (param_3,(uchar *)((longlong)local_res10 + (longlong)local_50),iVar1);
      if (iVar4 == 0) {
        uVar12 = 0x160;
LAB_18000ddae:
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      uVar12,param_2);
        uVar9 = 0;
      }
      if (local_50 == (void *)0x0) {
        return uVar9;
      }
      _Memory = local_50;
      if ((0xfff < (ulonglong)(local_40 - (longlong)local_50)) &&
         (_Memory = *(void **)((longlong)local_50 + -8),
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      return uVar9;
    }
  }
  return 0;
}




undefined4 FUN_18000de50(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  CNtfsFileRecordAttribute *pCVar5;
  CNtfsFileRecordAttribute *pCVar6;
  longlong *plVar7;
  longlong lVar8;
  CNtfsFileRecordAttribute *pCVar9;
  undefined4 uVar10;
  int iVar11;
  CNtfsFileRecordAttribute *pCVar12;
  CNtfsFileRecordAttribute *local_res20;
  longlong local_98 [2];
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  int *local_70 [2];
  longlong local_60;
  int local_58;
  
  local_78 = 0xfffffffffffffffe;
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_60);
  uVar4 = FUN_18000dc10(param_1,param_2,(CNtfsFileRecord *)&local_60);
  if ((int)uVar4 == 0) {
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0xa6,
                  param_4);
    uVar10 = 0;
    goto LAB_18000e103;
  }
  CNtfsFileRecordAttribute::CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
  uVar10 = 0;
  iVar11 = 0;
  pCVar9 = local_res20;
  pCVar12 = local_res20;
  if (0 < local_58) {
    do {
      if ((-1 < iVar11) && (iVar11 < local_58)) {
        pCVar12 = (CNtfsFileRecordAttribute *)((longlong)iVar11 * 0x10 + local_60);
      }
      CNtfsFileRecordAttribute::operator=((CNtfsFileRecordAttribute *)local_70,pCVar12);
      if ((*local_70[0] == 0x80) && (*(char *)((longlong)local_70[0] + 9) == '\0')) {
        if ((char)local_70[0][2] == '\0') {
          uVar4 = 0xb5;
        }
        else {
          pCVar5 = (CNtfsFileRecordAttribute *)
                   CNtfsFileRecordAttribute::CNtfsFileRecordAttribute
                             ((CNtfsFileRecordAttribute *)local_98,
                              (CNtfsFileRecordAttribute *)local_70);
          local_res20 = pCVar5;
          CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_88);
          iVar3 = CNtfsFileRecordAttribute::GetDataRunList(pCVar5,(CNtfsRunList *)&local_88);
          if (iVar3 != 0) {
            iVar3 = 0;
            if (0 < local_80) {
              do {
                if ((-1 < iVar3) && (iVar3 < local_80)) {
                  pCVar9 = (CNtfsFileRecordAttribute *)(local_88 + (longlong)iVar3 * 3);
                }
                puVar2 = (undefined8 *)param_3[1];
                if ((undefined8 *)param_3[2] == puVar2) {
                  FUN_18000b830(param_3,puVar2,(undefined8 *)pCVar9);
                }
                else {
                  uVar4 = *(undefined8 *)(pCVar9 + 8);
                  *puVar2 = *(undefined8 *)pCVar9;
                  puVar2[1] = uVar4;
                  puVar2[2] = *(undefined8 *)(pCVar9 + 0x10);
                  param_3[1] = param_3[1] + 0x18;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < local_80);
            }
            CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_88);
            CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(pCVar5);
            goto LAB_18000dfc6;
          }
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,0xca,param_4);
          CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_88);
          CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(pCVar5);
          uVar4 = 0xba;
        }
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      uVar4,param_4);
        goto LAB_18000e0f9;
      }
LAB_18000dfc6:
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_58);
  }
  lVar8 = (param_3[1] - *param_3) / 6 + (param_3[1] - *param_3 >> 0x3f);
  lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  if (lVar8 != 0) {
    local_98[0] = (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) / 0x18 + lVar8;
    plVar1 = (longlong *)(param_1 + 0x18);
    pCVar9 = (CNtfsFileRecordAttribute *)*plVar1;
    pCVar12 = *(CNtfsFileRecordAttribute **)(pCVar9 + 8);
    pCVar5 = pCVar9;
    if ((*(CNtfsFileRecordAttribute **)(pCVar9 + 8))[0x19] == (CNtfsFileRecordAttribute)0x0) {
      do {
        if (*(longlong *)(pCVar12 + 0x20) < local_98[0]) {
          pCVar6 = *(CNtfsFileRecordAttribute **)(pCVar12 + 0x10);
        }
        else {
          pCVar6 = *(CNtfsFileRecordAttribute **)pCVar12;
          pCVar5 = pCVar12;
        }
        pCVar12 = pCVar6;
      } while (pCVar6[0x19] == (CNtfsFileRecordAttribute)0x0);
      if ((pCVar5 == pCVar9) || (local_98[0] < *(longlong *)(pCVar5 + 0x20))) goto LAB_18000e0b4;
    }
    else {
LAB_18000e0b4:
      local_88 = local_98;
      plVar7 = (longlong *)FUN_18000b630(plVar1,&DAT_18001d5f5,&local_88);
      FUN_18000bd50(plVar1,&local_res20,(longlong *)pCVar5,plVar7 + 4,plVar7);
      pCVar5 = local_res20;
    }
    *(longlong *)(pCVar5 + 0x28) = param_2;
  }
  uVar10 = 1;
LAB_18000e0f9:
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
LAB_18000e103:
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_60);
  return uVar10;
}




longlong FUN_18000e130(longlong param_1)

{
  if ((0 < *(int *)(param_1 + 0xd8)) && (0 < *(int *)(param_1 + 0xe0))) {
    return (*(longlong *)(param_1 + 0x58) * (longlong)*(int *)(param_1 + 0xd8)) /
           (longlong)*(int *)(param_1 + 0xe0);
  }
  return 0;
}




longlong FUN_18000e160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000e390(param_1,0);
  return (lVar1 - *(longlong *)(param_1 + 0xf0)) / (longlong)*(int *)(param_1 + 0xdc);
}




undefined8 FUN_18000e190(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  
  plVar10 = (longlong *)**(longlong **)(param_1 + 0x18);
  plVar7 = plVar10;
  while( true ) {
    if (plVar7 == *(longlong **)(param_1 + 0x18)) {
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x342,plVar10);
      return 0;
    }
    if (param_2 == plVar7[5]) break;
    plVar4 = (longlong *)plVar7[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar4 + 0x19);
      plVar7 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar3 == '\0') {
        cVar3 = *(char *)(*plVar4 + 0x19);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar3 = *(char *)(plVar7[1] + 0x19);
      plVar8 = (longlong *)plVar7[1];
      plVar4 = plVar7;
      while ((plVar7 = plVar8, cVar3 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
        cVar3 = *(char *)(plVar7[1] + 0x19);
        plVar8 = (longlong *)plVar7[1];
        plVar4 = plVar7;
      }
    }
  }
  uVar9 = 0;
  if (plVar10 != plVar7) {
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar10 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar3 = *(char *)(plVar10[2] + 0x19);
        plVar4 = (longlong *)plVar10[2];
        while (cVar3 == '\0') {
          cVar3 = *(char *)(plVar4[2] + 0x19);
          plVar10 = plVar4;
          plVar4 = (longlong *)plVar4[2];
        }
      }
      else {
        cVar3 = *(char *)(plVar7[1] + 0x19);
        plVar8 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar10 = plVar8, cVar3 == '\0' && (plVar4 == (longlong *)*plVar10))) {
          cVar3 = *(char *)(plVar10[1] + 0x19);
          plVar8 = (longlong *)plVar10[1];
          plVar4 = plVar10;
        }
        if (*(char *)((longlong)plVar4 + 0x19) != '\0') {
          plVar10 = plVar4;
        }
      }
    }
    else {
      plVar10 = (longlong *)plVar7[2];
    }
    uVar9 = *(uint *)(plVar10 + 4);
  }
  if (uVar9 < *(uint *)(plVar7 + 4)) {
    lVar11 = (ulonglong)uVar9 * 0x18;
    uVar13 = (ulonglong)(*(uint *)(plVar7 + 4) - uVar9);
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      if ((int)param_3[1] == *(int *)((longlong)param_3 + 0xc)) {
        if (*(int *)((longlong)param_3 + 0xc) == 0) {
          iVar12 = 1;
        }
        else {
          iVar12 = (int)param_3[1] * 2;
        }
        _Dst = malloc((longlong)iVar12 * 0x18);
        if (_Dst != (void *)0x0) {
          if ((void *)*param_3 != (void *)0x0) {
            memcpy(_Dst,(void *)*param_3,(longlong)*(int *)((longlong)param_3 + 0xc) * 0x18);
            free((void *)*param_3);
          }
          *(int *)((longlong)param_3 + 0xc) = iVar12;
          *param_3 = (longlong)_Dst;
          goto LAB_18000e32d;
        }
      }
      else {
LAB_18000e32d:
        puVar1 = (undefined8 *)(*param_3 + (longlong)(int)param_3[1] * 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)(lVar5 + lVar11);
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1[2] = *(undefined8 *)(lVar5 + 0x10 + lVar11);
        }
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      lVar11 = lVar11 + 0x18;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return 1;
}




longlong FUN_18000e390(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
  puVar3 = (undefined8 *)puVar4[1];
  while (cVar1 == '\0') {
    if (param_2 < (longlong)puVar3[4]) {
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
    else {
      puVar2 = (undefined8 *)puVar3[2];
    }
    puVar3 = puVar2;
    cVar1 = *(char *)((longlong)puVar2 + 0x19);
  }
  if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    puVar3 = (undefined8 *)*puVar4;
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)puVar3[2] + 0x19);
      puVar4 = (undefined8 *)puVar3[2];
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)puVar4[2] + 0x19);
        puVar3 = puVar4;
        puVar4 = (undefined8 *)puVar4[2];
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
      puVar2 = (undefined8 *)puVar4[1];
      while ((puVar3 = puVar2, cVar1 == '\0' && (puVar4 == (undefined8 *)*puVar3))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar2 = (undefined8 *)puVar3[1];
        puVar4 = puVar3;
      }
      if (*(char *)((longlong)puVar4 + 0x19) != '\0') {
        puVar3 = puVar4;
      }
    }
  }
  else {
    puVar3 = (undefined8 *)puVar4[2];
  }
  if (puVar3[5] != -1) {
    return param_2 + (((longlong)*(int *)(param_1 + 0xdc) * puVar3[5] +
                      *(longlong *)(param_1 + 0xf0)) - puVar3[4]);
  }
  return param_2 + (-1 - puVar3[4]);
}




int FUN_18000e450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  CNtfsFileRecordAttribute *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uStackX_c;
  uchar *local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong local_48;
  int local_40;
  
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_48);
  iVar9 = *(int *)(param_1 + 0xd8);
  iVar6 = 0;
  if (0 < iVar9) {
    if ((*(int *)(param_1 + 0xe0) < 1) ||
       (-1 < ((longlong)iVar9 * *(longlong *)(param_1 + 0x58)) / (longlong)*(int *)(param_1 + 0xe0))
       ) {
      if ((0 < iVar9) && (iVar1 = *(int *)(param_1 + 0xe0), 0 < iVar1)) {
        iVar8 = 1;
        if (iVar9 < iVar1) {
          iVar8 = iVar1 / iVar9;
        }
        local_60 = (uchar *)0x0;
        uStack_58 = 0;
        local_50 = 0;
        FUN_18000c1d0((longlong *)&local_60,(longlong)(iVar8 * iVar9));
        iVar5 = iVar6;
        iVar10 = iVar6;
        if (0 < iVar8) {
          do {
            iVar2 = FUN_18000d450(param_1,(longlong)iVar5);
            if (iVar2 < 0) {
              lVar3 = FUN_18000e390(param_1,(longlong)iVar5);
              param_4 = 1;
              iVar2 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                                ((longlong *)(param_1 + 0x60),local_60 + iVar10,lVar3);
              if (iVar2 == 0) {
                FUN_180008d10("*****************\tFailed at (%s,%d)",
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                              ,0x153,param_4);
                if (local_60 == (uchar *)0x0) goto LAB_18000e4cb;
                puVar4 = local_60;
                if ((0xfff < (ulonglong)(local_50 - (longlong)local_60)) &&
                   (puVar4 = *(uchar **)(local_60 + -8),
                   (uchar *)0x1f < local_60 + (-8 - (longlong)*(uchar **)(local_60 + -8)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_18000e6a8;
              }
            }
            else {
              memcpy(local_60 + iVar10,(void *)(param_1 + 0x128 + (longlong)iVar2),(longlong)iVar9);
            }
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + iVar9;
          } while (iVar5 < iVar8);
        }
        iVar9 = 1;
        iVar8 = CNtfsFileRecord::InitFromSourceFileRecord
                          ((CNtfsFileRecord *)&local_48,local_60,iVar1);
        if (iVar8 != 0) {
          if (local_60 != (uchar *)0x0) {
            puVar4 = local_60;
            if ((0xfff < (ulonglong)(local_50 - (longlong)local_60)) &&
               (puVar4 = *(uchar **)(local_60 + -8),
               (uchar *)0x1f < local_60 + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(puVar4);
            local_60 = (uchar *)0x0;
            uStack_58 = 0;
            local_50 = 0;
          }
          if (0 < local_40) {
            pCVar7 = (CNtfsFileRecordAttribute *)CONCAT44(uStackX_c,iVar1);
            do {
              if ((-1 < iVar6) && (iVar6 < local_40)) {
                pCVar7 = (CNtfsFileRecordAttribute *)((longlong)iVar6 * 0x10 + local_48);
              }
              CNtfsFileRecordAttribute::operator=
                        ((CNtfsFileRecordAttribute *)(param_1 + 0x118),pCVar7);
              if (**(int **)(param_1 + 0x118) == 0x20) goto LAB_18000e4ea;
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_40);
          }
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,0x125,param_4);
          iVar9 = 0;
          goto LAB_18000e4ea;
        }
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      0x160,param_4);
        if (local_60 != (uchar *)0x0) {
          puVar4 = local_60;
          if ((0xfff < (ulonglong)(local_50 - (longlong)local_60)) &&
             (puVar4 = *(uchar **)(local_60 + -8),
             (uchar *)0x1f < local_60 + (-8 - (longlong)puVar4))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
LAB_18000e6a8:
          free(puVar4);
          local_60 = (uchar *)0x0;
          uStack_58 = 0;
          local_50 = 0;
        }
      }
    }
    else {
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x12d,param_4);
    }
  }
LAB_18000e4cb:
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",0x11a,
                param_4);
  iVar9 = 0;
LAB_18000e4ea:
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_48);
  return iVar9;
}




undefined4 FUN_18000e780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  __int64 _Var3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *local_res8;
  undefined8 uVar9;
  longlong local_50;
  int local_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  
  uVar9 = 0xfffffffffffffffe;
  if (*(char *)(*(longlong *)(param_1 + 0x118) + 8) == '\0') {
    FUN_18000c0c0((longlong *)(param_1 + 0x28),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x118) + 4));
    _Var3 = CNtfsFileRecordAttribute::GetResidentData
                      ((CNtfsFileRecordAttribute *)(param_1 + 0x118),*(uchar **)(param_1 + 0x28),
                       *(longlong *)(param_1 + 0x30) - (longlong)*(uchar **)(param_1 + 0x28));
    if (_Var3 == 0) {
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x10f,param_4);
      return 0;
    }
  }
  else {
    CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_50);
    CNtfsFileRecordAttribute::GetDataRunList
              ((CNtfsFileRecordAttribute *)(param_1 + 0x118),(CNtfsRunList *)&local_50);
    iVar4 = 0;
    if (0 < local_48) {
      do {
        if ((-1 < iVar4) && (iVar4 < local_48)) {
          local_res8 = (longlong *)(local_50 + (longlong)iVar4 * 0x18);
        }
        local_40 = *local_res8;
        lStack_38 = local_res8[1];
        local_30 = local_res8[2];
        uVar8 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
        uVar5 = *(int *)(param_1 + 0xd8) * *(int *)(param_1 + 0xdc) * (int)local_30;
        if ((uVar5 == 0) || (uVar1 = uVar5 + uVar8, uVar1 == 0)) {
LAB_18000e939:
          CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_50);
          return 0;
        }
        FUN_18000c0c0((longlong *)(param_1 + 0x28),(ulonglong)uVar1);
        if (local_40 == -1) {
          lVar6 = -1;
        }
        else {
          lVar6 = *(int *)(param_1 + 0xdc) * local_40 + *(longlong *)(param_1 + 0xf0);
        }
        uVar7 = (ulonglong)uVar5 / (ulonglong)*(uint *)(param_1 + 0xd8);
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                          ((longlong *)(param_1 + 0x60),
                           (ulonglong)uVar8 + *(longlong *)(param_1 + 0x28),lVar6,uVar7,uVar9);
        if (iVar2 == 0) {
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,0x103,uVar7);
          goto LAB_18000e939;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_48);
    }
    CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_50);
  }
  return 1;
}




undefined8 FUN_18000e950(longlong param_1,CNtfsVolume *param_2)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  FUN_180009d90((longlong *)(param_1 + 8));
  FUN_180009d90((longlong *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x101b0) = *(undefined8 *)(param_1 + 0x101a8);
  CNtfsVolume::operator=((CNtfsVolume *)(param_1 + 0xc0),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x30))(param_1 + 0x60);
  uVar2 = *(uint *)(param_2 + 0x38);
  plVar6 = *(longlong **)(param_2 + 0x30);
  iVar4 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x28))(param_1 + 0x60,uVar2);
  plVar16 = (longlong *)0x0;
  pplVar7 = (longlong **)(ulonglong)uVar2;
  CHardDriveIO::SetLdmInterface((CHardDriveIO *)(param_1 + 0x60),uVar2,(__uint64)plVar6,0);
  if (iVar4 == 0) {
    uVar15 = 0x2e;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 200);
    uVar13 = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    plVar12 = *(longlong **)(param_1 + 8);
    local_res10 = 0;
    cVar1 = *(char *)(plVar12[1] + 0x19);
    plVar14 = plVar12;
    plVar11 = (longlong *)plVar12[1];
    while (cVar1 == '\0') {
      if (plVar11[4] < 0) {
        plVar5 = (longlong *)plVar11[2];
        plVar11 = plVar14;
      }
      else {
        plVar5 = (longlong *)*plVar11;
      }
      plVar14 = plVar11;
      plVar11 = plVar5;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((plVar14 == plVar12) || (plVar12 = plVar14, 0 < plVar14[4])) {
      local_res18 = &local_res10;
      plVar6 = (longlong *)FUN_18000b630((undefined8 *)(param_1 + 8),&DAT_18001d5f5,&local_res18);
      pplVar7 = &local_res8;
      plVar16 = plVar6 + 4;
      FUN_18000bd50((longlong *)(param_1 + 8),pplVar7,plVar14,plVar16,plVar6);
      plVar12 = local_res8;
      plVar6 = plVar14;
    }
    plVar12[5] = lVar8;
    iVar4 = FUN_18000e450(param_1,pplVar7,plVar6,plVar16);
    if (iVar4 == 0) {
      uVar15 = 0x58;
    }
    else {
      iVar4 = FUN_18000e780(param_1,pplVar7,plVar6,plVar16);
      if (iVar4 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x28);
        if (0x20 < (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar8)) {
          do {
            uVar9 = *(ulonglong *)(uVar13 + 0x10 + lVar8);
            iVar4 = (int)*(undefined8 *)(uVar13 + lVar8);
            if (iVar4 == 0) {
              uVar2 = *(uint *)(param_1 + 0xdc);
              plVar6 = (longlong *)(ulonglong)uVar2;
              uVar10 = (int)uVar13 + *(uint *)(param_1 + 0xd8) * uVar2;
              uVar13 = (ulonglong)(uVar10 - (uVar10 % *(uint *)(param_1 + 0xd8)) * uVar2);
            }
            else {
              sVar3 = (short)((ulonglong)*(undefined8 *)(uVar13 + lVar8) >> 0x20);
              if (sVar3 < 1) {
                uVar15 = 0x79;
LAB_18000ebb4:
                FUN_180008d10("*****************\tFailed at (%s,%d)",
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                              ,uVar15,plVar16);
                uVar15 = 100;
                goto LAB_18000ebcd;
              }
              uVar13 = (ulonglong)(uint)((int)uVar13 + (int)sVar3);
              if (iVar4 == 0x80) {
                uVar15 = FUN_18000ca40(param_1,uVar9 & 0xffffffffffff,plVar6,plVar16);
                if ((int)uVar15 == 0) {
                  uVar15 = 0x89;
                  goto LAB_18000ebb4;
                }
              }
              else if (iVar4 == 0xb0) {
                uVar9 = uVar9 & 0xffffffffffff;
                *(ulonglong *)(param_1 + 0x101a0) = uVar9;
                FUN_18000c8b0(param_1,uVar9,plVar6,plVar16);
              }
            }
            lVar8 = *(longlong *)(param_1 + 0x28);
          } while (uVar13 + 0x20 < (ulonglong)(*(longlong *)(param_1 + 0x30) - lVar8));
        }
        return 1;
      }
      uVar15 = 0x5e;
    }
LAB_18000ebcd:
    FUN_180008d10("*****************\tFailed at (%s,%d)",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                  uVar15,plVar16);
    uVar15 = 0x34;
  }
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",uVar15,
                plVar16);
  return 0;
}




undefined4 FUN_18000ebf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  TBitmap *this;
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  undefined8 uVar4;
  uchar *_Dst;
  void *pvVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res10 [8];
  void **local_98;
  undefined1 *puStack_90;
  void *local_88;
  longlong lStack_80;
  longlong local_78;
  void *local_70;
  longlong lStack_68;
  longlong local_60;
  CNtfsFileRecord local_58 [48];
  
  CNtfsFileRecord::CNtfsFileRecord(local_58);
  uVar4 = FUN_18000dc10(param_1,6,local_58);
  if ((int)uVar4 == 0) {
    uVar4 = 0x202;
  }
  else {
    iVar3 = CNtfsFileRecord::IsAttributeListPresent(local_58);
    if (iVar3 == 0) {
      local_70 = (void *)0x0;
      lStack_68 = 0;
      uVar7 = 0;
      local_60 = 0;
      iVar3 = FUN_18000de50(param_1,6,(longlong *)&local_70,param_4);
      uVar6 = 0;
      if (iVar3 == 0) {
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      0x20e,param_4);
      }
      else {
        local_88 = (void *)0x0;
        lStack_80 = 0;
        local_78 = 0;
        lVar2 = lStack_68 - (longlong)local_70 >> 0x3f;
        if ((lStack_68 - (longlong)local_70) / 0x18 + lVar2 != lVar2) {
          do {
            uVar9 = (int)lStack_80 - (int)local_88;
            plVar1 = (longlong *)((longlong)local_70 + uVar7 * 0x18);
            uVar8 = (int)plVar1[2] * *(int *)(param_1 + 0xdc);
            local_res10[0] = 0;
            local_98 = &local_88;
            puStack_90 = local_res10;
            FUN_18000c360((longlong *)&local_88,
                          (ulonglong)(*(int *)(param_1 + 0xd8) * uVar8 + uVar9),(longlong)&local_98)
            ;
            lVar2 = *plVar1;
            if (lVar2 != -1) {
              pvVar5 = (void *)(ulonglong)uVar8;
              iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))
                                ((longlong *)(param_1 + 0x60),(ulonglong)uVar9 + (longlong)local_88,
                                 *(int *)(param_1 + 0xdc) * lVar2 + *(longlong *)(param_1 + 0xf0));
              if (iVar3 == 0) {
                uVar4 = 0x222;
                goto LAB_18000edd9;
              }
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
          } while (uVar7 < (ulonglong)((lStack_68 - (longlong)local_70) / 0x18));
        }
        this = (TBitmap *)(param_1 + 0x10188);
        pvVar5 = local_70;
        iVar3 = TBitmap::CreateBitmap(this,(lStack_80 - (longlong)local_88) * 8);
        _Src = local_88;
        if (iVar3 == 0) {
          uVar4 = 0x228;
LAB_18000edd9:
          FUN_180008d10("*****************\tFailed at (%s,%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                        ,uVar4,pvVar5);
        }
        else {
          iVar3 = TBitmap::GetBitmapSize(this);
          _Dst = TBitmap::GetBitmapData(this);
          memcpy(_Dst,_Src,(longlong)iVar3);
          uVar6 = 1;
        }
        if (local_88 != (void *)0x0) {
          pvVar5 = local_88;
          if ((0xfff < (ulonglong)(local_78 - (longlong)local_88)) &&
             (pvVar5 = *(void **)((longlong)local_88 + -8),
             0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
          local_88 = (void *)0x0;
          lStack_80 = 0;
          local_78 = 0;
        }
      }
      if (local_70 != (void *)0x0) {
        pvVar5 = local_70;
        if ((0xfff < (ulonglong)(((local_60 - (longlong)local_70) / 0x18) * 0x18)) &&
           (pvVar5 = *(void **)((longlong)local_70 + -8),
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar5);
        local_70 = (void *)0x0;
        lStack_68 = 0;
        local_60 = 0;
      }
      goto LAB_18000eed3;
    }
    uVar4 = 0x208;
  }
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",uVar4,
                param_4);
  uVar6 = 0;
LAB_18000eed3:
  CNtfsFileRecord::~CNtfsFileRecord(local_58);
  return uVar6;
}




undefined8 FUN_18000ef10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  iVar2 = FUN_18000ebf0(param_1,param_2,param_3,param_4);
  if (iVar2 != 0) {
    lVar7 = 0;
    lVar8 = -1;
    iVar2 = 0;
    local_38 = -1;
    local_28 = 0;
    lStack_30 = 0;
LAB_18000ef80:
    do {
      iVar4 = *(int *)(param_1 + 0xdc);
      iVar3 = TBitmap::GetBitmapSize((TBitmap *)(param_1 + 0x10188));
      param_4 = *(longlong *)(param_1 + 0x10180);
      if ((longlong)(iVar3 << 3) < param_4 / (longlong)iVar4) {
        iVar4 = TBitmap::GetBitmapSize((TBitmap *)(param_1 + 0x10188));
        lVar5 = (longlong)(iVar4 << 3);
      }
      else {
        lVar5 = param_4 / (longlong)*(int *)(param_1 + 0xdc);
      }
      lVar6 = (longlong)iVar2;
      if (lVar5 <= lVar6) goto LAB_18000f075;
      iVar4 = TBitmap::GetBit((TBitmap *)(param_1 + 0x10188),lVar6);
      if (iVar4 == 0) {
        if (lVar8 == -1) {
          lVar7 = 0;
          lVar8 = lVar6;
          local_38 = lVar6;
        }
        lVar7 = lVar7 + 1;
        local_28 = lVar7;
      }
      else if (lVar8 != -1) {
        plVar1 = *(longlong **)(param_1 + 0x10140);
        if (*(longlong **)(param_1 + 0x10148) == plVar1) {
          FUN_18000b830((longlong *)(param_1 + 0x10138),plVar1,&local_38);
        }
        else {
          *plVar1 = local_38;
          plVar1[1] = lStack_30;
          plVar1[2] = local_28;
          *(longlong *)(param_1 + 0x10140) = *(longlong *)(param_1 + 0x10140) + 0x18;
        }
        if (100 < lVar7) {
          FUN_180008d10("-----------------FreeDataRun(%I64d,%I64d)",lVar8,lVar7,param_4);
        }
        lVar8 = -1;
        iVar2 = iVar2 + 1;
        local_38 = -1;
        goto LAB_18000ef80;
      }
      iVar2 = iVar2 + 1;
    } while( true );
  }
  uVar9 = 0x1ea;
LAB_18000ef28:
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",uVar9,
                param_4);
  return 0;
LAB_18000f075:
  if (lVar8 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x10140);
    if (*(longlong **)(param_1 + 0x10148) == plVar1) {
      FUN_18000b830((longlong *)(param_1 + 0x10138),plVar1,&local_38);
    }
    else {
      *plVar1 = local_38;
      plVar1[1] = lStack_30;
      plVar1[2] = local_28;
      *(longlong *)(param_1 + 0x10140) = *(longlong *)(param_1 + 0x10140) + 0x18;
    }
  }
  uVar9 = FUN_18000cc80(param_1);
  if ((int)uVar9 != 0) {
    return 1;
  }
  uVar9 = 0x1f6;
  goto LAB_18000ef28;
}




undefined8 FUN_18000f0f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  cVar1 = *(char *)((longlong)puVar7[1] + 0x19);
  puVar9 = puVar7;
  puVar3 = (undefined8 *)puVar7[1];
  while (cVar1 == '\0') {
    if ((longlong)(ulonglong)**(uint **)(param_1 + 0x10168) < (longlong)puVar3[4]) {
      puVar4 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)puVar3[2];
    }
    puVar3 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x19);
  }
  if (puVar9 == puVar7) {
    lVar11 = -1;
  }
  else {
    lVar11 = puVar9[5];
  }
  lVar5 = *(longlong *)(param_1 + 0x10168);
  uVar8 = 1;
  if (1 < (ulonglong)(*(longlong *)(param_1 + 0x10170) - lVar5 >> 2)) {
    puVar9 = (undefined8 *)0x1;
    do {
      puVar3 = (undefined8 *)puVar7[1];
      if (*(char *)((longlong)puVar7[1] + 0x19) == '\0') {
        do {
          if ((longlong)(ulonglong)*(uint *)((longlong)puVar9 * 4 + lVar5) < (longlong)puVar3[4]) {
            puVar4 = (undefined8 *)*puVar3;
            puVar7 = puVar3;
          }
          else {
            puVar4 = (undefined8 *)puVar3[2];
          }
          puVar3 = puVar4;
        } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
        if (puVar7 == *(undefined8 **)(param_1 + 0x18)) goto LAB_18000f1a9;
        lVar5 = puVar7[5];
      }
      else {
LAB_18000f1a9:
        lVar5 = -1;
      }
      if ((lVar11 != lVar5) && (iVar2 = FUN_18000d600(param_1,lVar11,puVar9,lVar11), iVar2 == 0)) {
        uVar10 = 0x2a8;
        goto LAB_18000f24e;
      }
      puVar7 = *(undefined8 **)(param_1 + 0x18);
      cVar1 = *(char *)((longlong)puVar7[1] + 0x19);
      puVar3 = puVar7;
      puVar4 = (undefined8 *)puVar7[1];
      while (cVar1 == '\0') {
        if ((longlong)(ulonglong)*(uint *)((longlong)puVar9 * 4 + *(longlong *)(param_1 + 0x10168))
            < (longlong)puVar4[4]) {
          puVar6 = (undefined8 *)*puVar4;
          puVar3 = puVar4;
        }
        else {
          puVar6 = (undefined8 *)puVar4[2];
        }
        puVar4 = puVar6;
        cVar1 = *(char *)((longlong)puVar6 + 0x19);
      }
      if (puVar3 == puVar7) {
        lVar11 = -1;
      }
      else {
        lVar11 = puVar3[5];
      }
      lVar5 = *(longlong *)(param_1 + 0x10168);
      uVar8 = uVar8 + 1;
      puVar9 = (undefined8 *)(ulonglong)uVar8;
    } while (puVar9 < (undefined8 *)(*(longlong *)(param_1 + 0x10170) - lVar5 >> 2));
  }
  iVar2 = FUN_18000d600(param_1,lVar11,puVar9,lVar11);
  if (iVar2 != 0) {
    return 1;
  }
  uVar10 = 0x2b0;
LAB_18000f24e:
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",uVar10,
                lVar11);
  return 0;
}




undefined8
FUN_18000f290(longlong param_1,longlong param_2,CNtfsFileRecord *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uchar *_Memory;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  long local_res8 [2];
  int local_res20;
  int local_68;
  void *local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  iVar2 = *(int *)(param_1 + 0xd8);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    iVar11 = *(int *)(param_1 + 0xe0);
    lVar9 = (longlong)iVar11;
    if (0 < iVar11) {
      iVar7 = 0;
      local_res8[0] = 0;
      _Memory = CNtfsFileRecord::Convert2SourceFileRecord(param_3,local_res8);
      if (local_res8[0] <= iVar11) {
        lVar6 = (lVar9 * param_2) % lVar8;
        local_res20 = 1;
        if (iVar2 < iVar11) {
          local_res20 = iVar11 / iVar2;
        }
        local_58 = (void *)0x0;
        uStack_50 = 0;
        local_48 = 0;
        FUN_18000c1d0((longlong *)&local_58,(longlong)(local_res20 * iVar2));
        iVar11 = iVar7;
        if (0 < local_res20) {
          do {
            lVar4 = FUN_18000e390(param_1,(longlong)iVar7 +
                                          (((lVar9 * param_2 - lVar6) / lVar9) * lVar9) / lVar8);
            uVar10 = 1;
            plVar1 = (longlong *)(param_1 + 0x60);
            if (lVar9 < lVar8) {
              iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))(plVar1,local_58);
              if (iVar3 == 0) {
                free(_Memory);
                FUN_180008d10("*****************\tFailed at (%s,%d)",
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                              ,0x374,uVar10);
                if (local_58 == (void *)0x0) goto LAB_18000f559;
                pvVar5 = local_58;
                if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
                   (pvVar5 = *(void **)((longlong)local_58 + -8),
                   0x1f < (ulonglong)
                          ((longlong)local_58 + (-8 - (longlong)*(void **)((longlong)local_58 + -8))
                          ))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              else {
                local_68 = (int)lVar6;
                memcpy((void *)((longlong)local_68 + (longlong)local_58),_Memory,
                       (longlong)local_res8[0]);
                uVar10 = 1;
                iVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))
                                  (param_1 + 0x60,local_58,lVar4);
                if (iVar3 != 0) goto LAB_18000f48b;
                free(_Memory);
                FUN_180008d10("*****************\tFailed at (%s,%d)",
                              "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                              ,0x37d,uVar10);
                if (local_58 == (void *)0x0) goto LAB_18000f559;
                pvVar5 = local_58;
                if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
                   (pvVar5 = *(void **)((longlong)local_58 + -8),
                   0x1f < (ulonglong)
                          ((longlong)local_58 + (-8 - (longlong)*(void **)((longlong)local_58 + -8))
                          ))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
LAB_18000f544:
              free(pvVar5);
              local_58 = (void *)0x0;
              uStack_50 = 0;
              local_48 = 0;
LAB_18000f559:
              CNtfsFileRecord::~CNtfsFileRecord(param_3);
              return 0;
            }
            iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,_Memory + iVar11,lVar4);
            if (iVar3 == 0) {
              free(_Memory);
              FUN_180008d10("*****************\tFailed at (%s,%d)",
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp"
                            ,0x387,uVar10);
              if (local_58 == (void *)0x0) goto LAB_18000f559;
              pvVar5 = local_58;
              if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
                 (pvVar5 = *(void **)((longlong)local_58 + -8),
                 0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              goto LAB_18000f544;
            }
LAB_18000f48b:
            iVar7 = iVar7 + 1;
            iVar11 = iVar11 + iVar2;
          } while (iVar7 < local_res20);
        }
        free(_Memory);
        if (local_58 != (void *)0x0) {
          pvVar5 = local_58;
          if ((0xfff < (ulonglong)(local_48 - (longlong)local_58)) &&
             (pvVar5 = *(void **)((longlong)local_58 + -8),
             0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
          local_58 = (void *)0x0;
          uStack_50 = 0;
          local_48 = 0;
        }
        CNtfsFileRecord::~CNtfsFileRecord(param_3);
        return 1;
      }
      free(_Memory);
      FUN_180008d10("*****************\tFailed at (%s,%d)",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                    0x359,param_4);
    }
  }
  CNtfsFileRecord::~CNtfsFileRecord(param_3);
  return 0;
}




undefined8 FUN_18000f600(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uchar *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  uint uVar10;
  void *local_50;
  longlong lStack_48;
  longlong local_40;
  CNtfsFileRecord local_38 [32];
  
  CNtfsFileRecord::CNtfsFileRecord(local_38);
  uVar5 = FUN_18000dc10(param_1,6,local_38);
  if ((int)uVar5 == 0) {
    uVar5 = 699;
  }
  else {
    iVar4 = CNtfsFileRecord::IsAttributeListPresent(local_38);
    if (iVar4 == 0) {
      local_50 = (void *)0x0;
      lStack_48 = 0;
      local_40 = 0;
      iVar4 = FUN_18000de50(param_1,6,(longlong *)&local_50,param_4);
      if (iVar4 == 0) {
        uVar5 = 0x2c7;
LAB_18000f7dd:
        FUN_180008d10("*****************\tFailed at (%s,%d)",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",
                      uVar5,param_4);
        uVar5 = 0;
      }
      else {
        uVar10 = 0;
        lVar9 = lStack_48 - (longlong)local_50 >> 0x3f;
        if ((lStack_48 - (longlong)local_50) / 0x18 + lVar9 != lVar9) {
          uVar7 = 0;
          pvVar8 = local_50;
          lVar9 = lStack_48;
          do {
            iVar4 = *(int *)(param_1 + 0xdc);
            iVar1 = *(int *)((longlong)pvVar8 + uVar7 * 0x18 + 0x10);
            lVar2 = *(longlong *)((longlong)pvVar8 + uVar7 * 0x18);
            if (lVar2 != -1) {
              lVar9 = *(longlong *)(param_1 + 0xf0);
              lVar3 = *(longlong *)(param_1 + 0x60);
              puVar6 = TBitmap::GetBitmapData((TBitmap *)(param_1 + 0x10188));
              param_4 = (ulonglong)(uint)(iVar1 * iVar4);
              iVar4 = (**(code **)(lVar3 + 0x18))(param_1 + 0x60,puVar6,iVar4 * lVar2 + lVar9);
              pvVar8 = local_50;
              lVar9 = lStack_48;
              if (iVar4 == 0) {
                uVar5 = 0x2d8;
                goto LAB_18000f7dd;
              }
            }
            uVar10 = uVar10 + 1;
            uVar7 = (ulonglong)uVar10;
          } while (uVar7 < (ulonglong)((lVar9 - (longlong)pvVar8) / 0x18));
        }
        uVar5 = 1;
      }
      if (local_50 != (void *)0x0) {
        pvVar8 = local_50;
        if ((0xfff < (ulonglong)(((local_40 - (longlong)local_50) / 0x18) * 0x18)) &&
           (pvVar8 = *(void **)((longlong)local_50 + -8),
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar8);
        local_50 = (void *)0x0;
        lStack_48 = 0;
        local_40 = 0;
      }
      goto LAB_18000f80e;
    }
    uVar5 = 0x2c1;
  }
  FUN_180008d10("*****************\tFailed at (%s,%d)",
                "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp",uVar5,
                param_4);
  uVar5 = 0;
LAB_18000f80e:
  CNtfsFileRecord::~CNtfsFileRecord(local_38);
  return uVar5;
}




void FUN_18000f840(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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




void * FUN_18000f8d0(undefined8 param_1,ulonglong param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      pvVar1 = operator_new(param_2);
      return pvVar1;
    }
    return (void *)0x0;
  }
  uVar3 = param_2 + 0x27;
  if (uVar3 <= param_2) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar1 = operator_new(uVar3);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar2 + -8) = pvVar1;
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void FUN_18000f930(undefined8 param_1,void *param_2,ulonglong param_3)

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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 4)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
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




/* public: __cdecl MyTemplate::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >::CSimpleArray<unsigned short,class
   MyTemplate::CSimpleArrayEqualHelper<unsigned short> >(void) __ptr64 */

CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> * __thiscall
MyTemplate::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
::CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
          (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
           *this)

{
                    /* 0xfa10  2
                       ??0?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0xfa10  4
                       ??0?$CSimpleArray@UtagAttriListElement@@V?$CSimpleArrayEqualHelper@UtagAttriListElement@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0xfa10  6
                       ??0?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0xfa10  8
                       ??0?$CSimpleArray@UtagDataRun@@V?$CSimpleArrayEqualHelper@UtagDataRun@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                       0xfa10  9
                       ??0?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl CNtfsAttributeList::CNtfsAttributeList(void) __ptr64 */

CNtfsAttributeList * __thiscall CNtfsAttributeList::CNtfsAttributeList(CNtfsAttributeList *this)

{
                    /* 0xfa20  15  ??0CNtfsAttributeList@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl CNtfsString::CNtfsString(unsigned short * __ptr64) __ptr64 */

CNtfsString * __thiscall CNtfsString::CNtfsString(CNtfsString *this,ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0xfa50  26  ??0CNtfsString@@QEAA@PEAG@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *param_1;
  do {
    if (uVar2 == 0) {
      return this;
    }
    if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
      if (*(int *)(this + 0xc) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)(this + 8) * 2;
      }
      _Dst = malloc((longlong)iVar3 * 2);
      if (_Dst != (void *)0x0) {
        if (*(void **)this != (void *)0x0) {
          memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 2);
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        *(int *)(this + 0xc) = iVar3;
        *(void **)this = _Dst;
        goto LAB_18000fad4;
      }
    }
    else {
LAB_18000fad4:
      puVar1 = (ushort *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 2);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = *param_1;
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    param_1 = param_1 + 1;
    uVar2 = *param_1;
  } while( true );
}




/* public: __cdecl CNtfsString::CNtfsString(unsigned short * __ptr64,long) __ptr64 */

CNtfsString * __thiscall CNtfsString::CNtfsString(CNtfsString *this,ushort *param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
                    /* 0xfb20  27  ??0CNtfsString@@QEAA@PEAGJ@Z */
  iVar4 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *param_1;
  do {
    if ((uVar2 == 0) || (param_2 <= iVar4)) {
      return this;
    }
    if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
      if (*(int *)(this + 0xc) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)(this + 8) * 2;
      }
      _Dst = malloc((longlong)iVar3 * 2);
      if (_Dst != (void *)0x0) {
        if (*(void **)this != (void *)0x0) {
          memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 2);
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        *(int *)(this + 0xc) = iVar3;
        *(void **)this = _Dst;
        goto LAB_18000fbbb;
      }
    }
    else {
LAB_18000fbbb:
      puVar1 = (ushort *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 2);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = *param_1;
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = *param_1;
  } while( true );
}




/* public: __cdecl CNtfsRunList::CNtfsRunList(void) __ptr64 */

CNtfsRunList * __thiscall CNtfsRunList::CNtfsRunList(CNtfsRunList *this)

{
                    /* 0xfc10  24  ??0CNtfsRunList@@QEAA@XZ
                       0xfc10  28  ??0CNtfsString@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl CNtfsAttributeList::~CNtfsAttributeList(void) __ptr64 */

void __thiscall CNtfsAttributeList::~CNtfsAttributeList(CNtfsAttributeList *this)

{
                    /* 0xfc40  55  ??1CNtfsAttributeList@@QEAA@XZ */
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::RemoveAll((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)this);
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::RemoveAll((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)this);
  return;
}




/* public: __cdecl CNtfsRunList::~CNtfsRunList(void) __ptr64 */

void __thiscall CNtfsRunList::~CNtfsRunList(CNtfsRunList *this)

{
                    /* 0xfc70  60  ??1CNtfsRunList@@QEAA@XZ
                       0xfc70  61  ??1CNtfsString@@QEAA@XZ */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: bool __cdecl CNtfsString::operator==(class CNtfsString & __ptr64) __ptr64 */

bool __thiscall CNtfsString::operator==(CNtfsString *this,CNtfsString *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *local_res8;
  
                    /* 0xfcd0  95  ??8CNtfsString@@QEAA_NAEAV0@@Z */
  iVar1 = *(int *)(this + 8);
  if (iVar1 != *(int *)(param_1 + 8)) {
    return false;
  }
  iVar2 = 0;
  psVar3 = local_res8;
  if (0 < iVar1) {
    do {
      if (-1 < iVar2) {
        if (iVar2 < iVar1) {
          psVar3 = (short *)(*(longlong *)this + (longlong)iVar2 * 2);
        }
        if (iVar2 < *(int *)(param_1 + 8)) {
          local_res8 = (short *)(*(longlong *)param_1 + (longlong)iVar2 * 2);
        }
      }
      if (*psVar3 != *local_res8) {
        return false;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return true;
}




/* public: bool __cdecl CNtfsString::operator!=(class CNtfsString & __ptr64) __ptr64 */

bool __thiscall CNtfsString::operator!=(CNtfsString *this,CNtfsString *param_1)

{
  bool bVar1;
  
                    /* 0xfd50  96  ??9CNtfsString@@QEAA_NAEAV0@@Z */
  bVar1 = operator==(this,param_1);
  return !bVar1;
}




/* public: bool __cdecl CNtfsString::operator<(class CNtfsString & __ptr64) __ptr64 */

bool __thiscall CNtfsString::operator<(CNtfsString *this,CNtfsString *param_1)

{
  bool bVar1;
  
                    /* 0xfd60  107  ??MCNtfsString@@QEAA_NAEAV0@@Z
                       0xfd60  108  ??NCNtfsString@@QEAA_NAEAV0@@Z */
  bVar1 = operator>(this,param_1);
  if (!bVar1) {
    bVar1 = operator==(this,param_1);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}




/* public: bool __cdecl CNtfsString::operator>(class CNtfsString & __ptr64) __ptr64 */

bool __thiscall CNtfsString::operator>(CNtfsString *this,CNtfsString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *local_res8;
  
                    /* 0xfdb0  109  ??OCNtfsString@@QEAA_NAEAV0@@Z */
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  iVar4 = 0;
  puVar5 = local_res8;
  if (0 < iVar3) {
    do {
      if (-1 < iVar4) {
        if (iVar4 < iVar1) {
          puVar5 = (ushort *)(*(longlong *)this + (longlong)iVar4 * 2);
        }
        if (iVar4 < iVar2) {
          local_res8 = (ushort *)(*(longlong *)param_1 + (longlong)iVar4 * 2);
        }
      }
      if (0 < (int)((uint)*puVar5 - (uint)*local_res8)) {
        return true;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar2 < iVar1) {
    return true;
  }
  return false;
}




/* public: bool __cdecl CNtfsString::operator>=(class CNtfsString & __ptr64) __ptr64 */

bool __thiscall CNtfsString::operator>=(CNtfsString *this,CNtfsString *param_1)

{
  bool bVar1;
  
                    /* 0xfe50  110  ??PCNtfsString@@QEAA_NAEAV0@@Z */
  bVar1 = operator>(this,param_1);
  if (!bVar1) {
    bVar1 = operator==(this,param_1);
    if (!bVar1) {
      return bVar1;
    }
  }
  return true;
}




/* public: int __cdecl CNtfsAttributeList::Convert2AttributeListData(unsigned char * __ptr64 &
   __ptr64,long & __ptr64) __ptr64 */

int __thiscall
CNtfsAttributeList::Convert2AttributeListData
          (CNtfsAttributeList *this,uchar **param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  uchar *_Dst;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *local_res10;
  
                    /* 0xfe90  139
                       ?Convert2AttributeListData@CNtfsAttributeList@@QEAAHAEAPEAEAEAJ@Z */
  if (*param_1 == (uchar *)0x0) {
    SortAttribute(this);
    uVar5 = 0;
    *param_2 = 0;
    iVar2 = *(int *)(this + 8);
    uVar9 = uVar5;
    uVar7 = uVar5;
    puVar8 = local_res10;
    if (0 < iVar2) {
      do {
        iVar4 = (int)uVar7;
        if ((-1 < iVar4) && (iVar4 < *(int *)(this + 8))) {
          puVar8 = (undefined4 *)(*(longlong *)this + uVar9);
        }
        iVar6 = (puVar8[10] * 2 + 0x21U & 0xfffffff8) + *param_2;
        *param_2 = iVar6;
        uVar9 = uVar9 + 0x30;
        uVar7 = (ulonglong)(iVar4 + 1U);
      } while ((int)(iVar4 + 1U) < iVar2);
      if (0 < iVar6) {
        _Dst = (uchar *)operator_new((longlong)iVar6);
        *param_1 = _Dst;
        if (_Dst != (uchar *)0x0) {
          memset(_Dst,0,(longlong)*param_2);
          puVar8 = local_res10;
          uVar9 = uVar5;
          do {
            iVar4 = (int)uVar5;
            if ((-1 < iVar4) && (iVar4 < *(int *)(this + 8))) {
              local_res10 = (undefined4 *)(*(longlong *)this + uVar9);
            }
            *(undefined4 *)_Dst = *local_res10;
            uVar3 = *(short *)(local_res10 + 10) * 2 + 0x21U & 0xfff8;
            *(ushort *)(_Dst + 4) = uVar3;
            *(undefined8 *)(_Dst + 8) = *(undefined8 *)(local_res10 + 2);
            *(undefined2 *)(_Dst + 0x18) = *(undefined2 *)(local_res10 + 6);
            *(undefined8 *)(_Dst + 0x10) = *(undefined8 *)(local_res10 + 4);
            bVar1 = *(byte *)(local_res10 + 10);
            _Dst[6] = bVar1;
            _Dst[7] = '\x1a';
            if (bVar1 != 0) {
              if (0 < (int)local_res10[10]) {
                puVar8 = *(undefined4 **)(local_res10 + 8);
              }
              memcpy(_Dst + 0x1a,puVar8,(ulonglong)bVar1 * 2);
              uVar3 = *(ushort *)(_Dst + 4);
            }
            uVar5 = (ulonglong)(iVar4 + 1U);
            _Dst = _Dst + (short)uVar3;
            uVar9 = uVar9 + 0x30;
          } while ((int)(iVar4 + 1U) < iVar2);
          return 1;
        }
      }
    }
  }
  return 0;
}




/* public: long __cdecl CNtfsAttributeList::GetElementDataLength(struct tagAttriListElement &
   __ptr64) __ptr64 */

long __thiscall
CNtfsAttributeList::GetElementDataLength(CNtfsAttributeList *this,tagAttriListElement *param_1)

{
                    /* 0x10000  184
                       ?GetElementDataLength@CNtfsAttributeList@@QEAAJAEAUtagAttriListElement@@@Z */
  return *(int *)(param_1 + 0x28) * 2 + 0x21U & 0xfffffff8;
}




/* public: int __cdecl CNtfsAttributeList::InitFromAttributeListData(unsigned char * __ptr64,long)
   __ptr64 */

int __thiscall
CNtfsAttributeList::InitFromAttributeListData(CNtfsAttributeList *this,uchar *param_1,long param_2)

{
  int iVar1;
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_> *pCVar2;
  void *_Dst;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  void *local_50;
  undefined8 local_48;
  
                    /* 0x10010  237  ?InitFromAttributeListData@CNtfsAttributeList@@QEAAHPEAEJ@Z */
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::RemoveAll((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)this);
  iVar6 = 0;
  if (0 < param_2) {
    do {
      piVar5 = (int *)(param_1 + iVar6);
      if ((short)piVar5[1] == 0) {
        return 0;
      }
      if (*piVar5 == 0) {
        return 1;
      }
      local_50 = (void *)0x0;
      local_48 = 0;
      local_70 = *piVar5;
      local_68 = *(undefined8 *)(piVar5 + 2);
      local_60 = *(undefined8 *)(piVar5 + 4);
      local_58 = (undefined2)piVar5[6];
      pCVar2 = (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                *)CNtfsString::CNtfsString
                            ((CNtfsString *)&local_80,
                             (ushort *)
                             ((ulonglong)*(byte *)((longlong)piVar5 + 7) + (longlong)piVar5),
                             (uint)*(byte *)((longlong)piVar5 + 6));
      MyTemplate::
      CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
      operator=((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                 *)&local_50,pCVar2);
      if (local_80 != (void *)0x0) {
        free(local_80);
        local_80 = (void *)0x0;
      }
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        free(local_80);
        local_80 = (void *)0x0;
      }
      local_78 = 0;
      iVar1 = *(int *)(this + 8);
      if (iVar1 == *(int *)(this + 0xc)) {
        iVar4 = 1;
        if (*(int *)(this + 0xc) != 0) {
          iVar4 = iVar1 * 2;
        }
        _Dst = malloc((longlong)iVar4 * 0x30);
        if (_Dst != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x30);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar4;
          *(void **)this = _Dst;
          iVar1 = *(int *)(this + 8);
          goto LAB_180010161;
        }
      }
      else {
LAB_180010161:
        piVar3 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)this);
        if (piVar3 != (int *)0x0) {
          *piVar3 = local_70;
          *(undefined8 *)(piVar3 + 2) = local_68;
          *(undefined8 *)(piVar3 + 4) = local_60;
          *(undefined2 *)(piVar3 + 6) = local_58;
          MyTemplate::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                    ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)(piVar3 + 8),
                     (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                      *)&local_50);
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar6 = iVar6 + (short)piVar5[1];
      if (local_50 != (void *)0x0) {
        free(local_50);
        local_50 = (void *)0x0;
      }
      local_48 = 0;
      if (local_50 != (void *)0x0) {
        free(local_50);
      }
    } while (iVar6 < param_2);
  }
  return 1;
}




/* public: void __cdecl CNtfsAttributeList::SortAttribute(void) __ptr64 */

void __thiscall CNtfsAttributeList::SortAttribute(CNtfsAttributeList *this)

{
  CNtfsString *pCVar1;
  CNtfsString *this_00;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  tagAttriListElement *ptVar9;
  int iVar10;
  CNtfsAttributeList *pCVar11;
  longlong lVar12;
  int iVar13;
  longlong local_88;
  void *local_58;
  undefined8 local_50;
  
                    /* 0x10230  301  ?SortAttribute@CNtfsAttributeList@@QEAAXXZ */
  local_58 = (void *)0x0;
  local_50 = 0;
  iVar3 = *(int *)(this + 8);
  if (0 < iVar3) {
    local_88 = 0x30;
    pCVar11 = this;
    iVar8 = 0;
    do {
      iVar10 = iVar8 + 1;
      lVar12 = local_88;
      for (iVar13 = iVar10; iVar13 < iVar3; iVar13 = iVar13 + 1) {
        ptVar9 = MyTemplate::
                 CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                 ::operator[]((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
                               *)this,iVar8);
        if ((-1 < iVar13) && (iVar13 < *(int *)(this + 8))) {
          pCVar11 = (CNtfsAttributeList *)(*(longlong *)this + lVar12);
        }
        uVar4 = *(uint *)ptVar9;
        if (*(uint *)pCVar11 < uVar4) {
LAB_18001031d:
          uVar5 = *(undefined8 *)(ptVar9 + 8);
          uVar6 = *(undefined8 *)(ptVar9 + 0x10);
          uVar2 = *(undefined2 *)(ptVar9 + 0x18);
          MyTemplate::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
          operator=((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)&local_58,
                    (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)(ptVar9 + 0x20));
          *(uint *)ptVar9 = *(uint *)pCVar11;
          *(undefined8 *)(ptVar9 + 8) = *(undefined8 *)(pCVar11 + 8);
          *(undefined8 *)(ptVar9 + 0x10) = *(undefined8 *)(pCVar11 + 0x10);
          *(undefined2 *)(ptVar9 + 0x18) = *(undefined2 *)(pCVar11 + 0x18);
          MyTemplate::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
          operator=((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)(ptVar9 + 0x20),
                    (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)(pCVar11 + 0x20));
          *(uint *)pCVar11 = uVar4;
          *(undefined8 *)(pCVar11 + 8) = uVar5;
          *(undefined8 *)(pCVar11 + 0x10) = uVar6;
          *(undefined2 *)(pCVar11 + 0x18) = uVar2;
          MyTemplate::
          CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
          operator=((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)(pCVar11 + 0x20),
                    (CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
                     *)&local_58);
        }
        else if (*(uint *)pCVar11 <= uVar4) {
          pCVar1 = (CNtfsString *)(pCVar11 + 0x20);
          this_00 = (CNtfsString *)(ptVar9 + 0x20);
          bVar7 = CNtfsString::operator>(this_00,pCVar1);
          if ((bVar7) ||
             (((bVar7 = CNtfsString::operator>(this_00,pCVar1), bVar7 ||
               (bVar7 = CNtfsString::operator==(this_00,pCVar1), bVar7)) &&
              (*(longlong *)(pCVar11 + 8) < *(longlong *)(ptVar9 + 8))))) goto LAB_18001031d;
        }
        lVar12 = lVar12 + 0x30;
      }
      local_88 = local_88 + 0x30;
      iVar8 = iVar10;
    } while (iVar10 < iVar3);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
    local_58 = (void *)0x0;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  return;
}




/* public: __cdecl CNtfsFileRecord::CNtfsFileRecord(class CNtfsFileRecord const & __ptr64) __ptr64
    */

CNtfsFileRecord * __thiscall
CNtfsFileRecord::CNtfsFileRecord(CNtfsFileRecord *this,CNtfsFileRecord *param_1)

{
                    /* 0x10420  16  ??0CNtfsFileRecord@@QEAA@AEBV0@@Z */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  operator=(this,param_1);
  return this;
}




/* public: __cdecl CNtfsFileRecord::CNtfsFileRecord(void) __ptr64 */

CNtfsFileRecord * __thiscall CNtfsFileRecord::CNtfsFileRecord(CNtfsFileRecord *this)

{
                    /* 0x10460  17  ??0CNtfsFileRecord@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute> >::~CSimpleArray<class
   CNtfsFileRecordAttribute,class MyTemplate::CSimpleArrayEqualHelper<class
   CNtfsFileRecordAttribute> >(void) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::
~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
          (CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
           *this)

{
                    /* 0x10490  52
                       ??1?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  RemoveAll(this);
  return;
}




/* public: __cdecl CNtfsFileRecord::~CNtfsFileRecord(void) __ptr64 */

void __thiscall CNtfsFileRecord::~CNtfsFileRecord(CNtfsFileRecord *this)

{
                    /* 0x104b0  56  ??1CNtfsFileRecord@@QEAA@XZ */
  free(*(void **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               *)this);
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               *)this);
  return;
}




/* public: class CNtfsFileRecord const & __ptr64 __cdecl CNtfsFileRecord::operator=(class
   CNtfsFileRecord const & __ptr64) __ptr64 */

CNtfsFileRecord * __thiscall
CNtfsFileRecord::operator=(CNtfsFileRecord *this,CNtfsFileRecord *param_1)

{
  int iVar1;
  void *pvVar2;
  CNtfsFileRecordAttribute *this_00;
  CNtfsFileRecordAttribute *pCVar3;
  int iVar4;
  CNtfsFileRecordAttribute local_40 [24];
  
                    /* 0x104f0  78  ??4CNtfsFileRecord@@QEAAAEBV0@AEBV0@@Z */
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               *)this);
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 8);
  pCVar3 = (CNtfsFileRecordAttribute *)this;
  if (0 < iVar1) {
    do {
      if ((-1 < iVar4) && (iVar4 < iVar1)) {
        pCVar3 = (CNtfsFileRecordAttribute *)((longlong)iVar4 * 0x10 + *(longlong *)param_1);
      }
      CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(local_40,pCVar3);
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar1 = 1;
        }
        else {
          iVar1 = *(int *)(this + 8) * 2;
        }
        pvVar2 = malloc((longlong)iVar1 << 4);
        if (pvVar2 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar2,*(void **)this,(longlong)*(int *)(this + 0xc) << 4);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar1;
          *(void **)this = pvVar2;
          goto LAB_1800105a1;
        }
      }
      else {
LAB_1800105a1:
        this_00 = (CNtfsFileRecordAttribute *)
                  ((longlong)*(int *)(this + 8) * 0x10 + *(longlong *)this);
        if (this_00 != (CNtfsFileRecordAttribute *)0x0) {
          CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(this_00,local_40);
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(local_40);
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(param_1 + 8);
    } while (iVar4 < iVar1);
  }
  free(*(void **)(this + 0x10));
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(this + 0x18) = iVar1;
  pvVar2 = operator_new((longlong)iVar1);
  *(void **)(this + 0x10) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    MyTemplate::
    CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
    ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                 *)this);
  }
  else {
    memcpy(pvVar2,*(void **)(param_1 + 0x10),(longlong)*(int *)(this + 0x18));
  }
  return this;
}




/* public: int __cdecl MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute> >::Add(class
   CNtfsFileRecordAttribute const & __ptr64) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::Add(CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
      *this,CNtfsFileRecordAttribute *param_1)

{
  int iVar1;
  void *_Dst;
  CNtfsFileRecordAttribute *this_00;
  int iVar2;
  
                    /* 0x10640  126
                       ?Add@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAHAEBVCNtfsFileRecordAttribute@@@Z
                        */
  iVar1 = *(int *)(this + 8);
  if (iVar1 == *(int *)(this + 0xc)) {
    iVar2 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar2 = iVar1 * 2;
    }
    _Dst = malloc((longlong)iVar2 << 4);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) << 4);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar2;
    *(void **)this = _Dst;
    iVar1 = *(int *)(this + 8);
  }
  this_00 = (CNtfsFileRecordAttribute *)((longlong)iVar1 * 0x10 + *(longlong *)this);
  if (this_00 != (CNtfsFileRecordAttribute *)0x0) {
    CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(this_00,param_1);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: static int __cdecl CNtfsFileRecord::CheckFileRecord(struct tagFILERECORD * __ptr64,int)
    */

int __cdecl CNtfsFileRecord::CheckFileRecord(tagFILERECORD *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x10700  133  ?CheckFileRecord@CNtfsFileRecord@@SAHPEAUtagFILERECORD@@H@Z */
  if (((((uint)*(ushort *)(param_1 + 6) == ((int)(param_2 + (param_2 >> 0x1f & 0x1ffU)) >> 9) + 1U)
       && (uVar1 = *(uint *)(param_1 + 0x1c), uVar1 < 0x2001)) &&
      (*(uint *)(param_1 + 0x18) <= uVar1)) &&
     (((param_2 == uVar1 && (*(ushort *)(param_1 + 6) - 1 == (uVar1 >> 9 & 0xffff))) &&
      ((ushort)(*(short *)(param_1 + 4) - 0x2aU) < 0xd7)))) {
    return 1;
  }
  return 0;
}




/* public: static int __cdecl CNtfsFileRecord::CheckFileRecordMagic(struct tagFILERECORD * __ptr64)
    */

int __cdecl CNtfsFileRecord::CheckFileRecordMagic(tagFILERECORD *param_1)

{
                    /* 0x10760  134  ?CheckFileRecordMagic@CNtfsFileRecord@@SAHPEAUtagFILERECORD@@@Z
                        */
  return (int)(*(int *)param_1 == 0x454c4946);
}




/* public: unsigned char * __ptr64 __cdecl CNtfsFileRecord::Convert2SourceFileRecord(long & __ptr64)
   __ptr64 */

uchar * __thiscall CNtfsFileRecord::Convert2SourceFileRecord(CNtfsFileRecord *this,long *param_1)

{
  ushort uVar1;
  int iVar2;
  uchar *_Dst;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uchar *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *local_res8;
  
                    /* 0x10770  141  ?Convert2SourceFileRecord@CNtfsFileRecord@@QEAAPEAEAEAJ@Z */
  if (*(longlong *)(this + 0x10) != 0) {
    uVar1 = *(ushort *)(*(longlong *)(this + 0x10) + 0x14);
    uVar11 = 0;
    iVar3 = 0;
    *param_1 = 0;
    uVar12 = (uint)uVar1;
    iVar2 = *(int *)(this + 8);
    plVar6 = local_res8;
    uVar8 = uVar11;
    if (0 < iVar2) {
      do {
        iVar10 = (int)uVar8;
        if ((-1 < iVar10) && (iVar10 < iVar2)) {
          plVar6 = (longlong *)((longlong)iVar10 * 0x10 + *(longlong *)this);
        }
        iVar3 = (*(int *)(*plVar6 + 4) + 7U & 0xfffffff8) + *param_1;
        *param_1 = iVar3;
        iVar2 = *(int *)(this + 8);
        uVar8 = (ulonglong)(iVar10 + 1U);
      } while ((int)(iVar10 + 1U) < iVar2);
    }
    uVar9 = uVar1 + 0xb + iVar3 & 0xfffffff8;
    *param_1 = uVar9;
    uVar4 = *(int *)(this + 0x18) + -1 + uVar9 & -*(int *)(this + 0x18);
    *param_1 = uVar4;
    if (((int)uVar4 <= *(int *)(this + 0x18)) &&
       (_Dst = (uchar *)operator_new((longlong)(int)uVar4), _Dst != (uchar *)0x0)) {
      memset(_Dst,0,(longlong)*param_1);
      memcpy(_Dst,*(void **)(this + 0x10),(ulonglong)uVar1);
      *(uint *)(_Dst + 0x18) = uVar9;
      iVar2 = *(int *)(this + 8);
      uVar8 = uVar11;
      if (0 < iVar2) {
        do {
          iVar3 = (int)uVar8;
          if ((-1 < iVar3) && (iVar3 < iVar2)) {
            local_res8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)this);
          }
          lVar5 = local_res8[1];
          memcpy(_Dst + (int)uVar12,(void *)*local_res8,(longlong)(int)lVar5);
          uVar12 = uVar12 + ((int)lVar5 + 7U & 0xfffffff8);
          iVar2 = *(int *)(this + 8);
          uVar8 = (ulonglong)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < iVar2);
      }
      puVar7 = _Dst + (int)uVar12;
      puVar7[0] = 0xff;
      puVar7[1] = 0xff;
      puVar7[2] = 0xff;
      puVar7[3] = 0xff;
      if ((int)(*(ushort *)(_Dst + 6) - 1) < 1) {
        return _Dst;
      }
      puVar7 = _Dst + 0x1fe;
      uVar8 = uVar11;
      do {
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
        lVar5 = *(ushort *)(_Dst + 4) + uVar11;
        uVar11 = uVar11 + 2;
        *(undefined2 *)(_Dst + lVar5 + 2) = *(undefined2 *)puVar7;
        *(undefined2 *)puVar7 = *(undefined2 *)(_Dst + *(ushort *)(_Dst + 4));
        puVar7 = puVar7 + 0x200;
      } while ((int)uVar12 < (int)(*(ushort *)(_Dst + 6) - 1));
      return _Dst;
    }
  }
  return (uchar *)0x0;
}




/* public: int __cdecl CNtfsFileRecord::DeleteAttribute(unsigned long) __ptr64 */

int __thiscall CNtfsFileRecord::DeleteAttribute(CNtfsFileRecord *this,ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *local_res8;
  
                    /* 0x10930  148  ?DeleteAttribute@CNtfsFileRecord@@QEAAHK@Z */
  iVar1 = *(int *)(this + 8);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        local_res8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)this);
      }
      if (param_1 == *(ulong *)*local_res8) {
        MyTemplate::
        CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
        ::RemoveAt((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                    *)this,iVar2);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}




/* protected: int __cdecl CNtfsFileRecord::FixupFileRecord(struct tagFILERECORD * __ptr64) __ptr64
    */

int __thiscall CNtfsFileRecord::FixupFileRecord(CNtfsFileRecord *this,tagFILERECORD *param_1)

{
  longlong lVar1;
  tagFILERECORD *ptVar2;
  int iVar3;
  longlong lVar4;
  
                    /* 0x10980  156  ?FixupFileRecord@CNtfsFileRecord@@IEAAHPEAUtagFILERECORD@@@Z */
  if (param_1 == (tagFILERECORD *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < (int)(*(ushort *)(param_1 + 6) - 1)) {
    lVar4 = 0;
    ptVar2 = param_1 + 0x1fe;
    do {
      iVar3 = iVar3 + 1;
      lVar1 = (ulonglong)*(ushort *)(param_1 + 4) + lVar4;
      lVar4 = lVar4 + 2;
      *(undefined2 *)(param_1 + lVar1 + 2) = *(undefined2 *)ptVar2;
      *(undefined2 *)ptVar2 = *(undefined2 *)(param_1 + *(ushort *)(param_1 + 4));
      ptVar2 = ptVar2 + 0x200;
    } while (iVar3 < (int)(*(ushort *)(param_1 + 6) - 1));
  }
  return 1;
}




/* public: int __cdecl CNtfsFileRecord::GetFileRecordHeader(struct tagFILERECORD & __ptr64) __ptr64
    */

int __thiscall CNtfsFileRecord::GetFileRecordHeader(CNtfsFileRecord *this,tagFILERECORD *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* 0x109e0  186
                       ?GetFileRecordHeader@CNtfsFileRecord@@QEAAHAEAUtagFILERECORD@@@Z */
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar2 = puVar1[1];
  *(undefined8 *)param_1 = *puVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = puVar1[3];
  *(undefined8 *)(param_1 + 0x10) = puVar1[2];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = puVar1[5];
  *(undefined8 *)(param_1 + 0x20) = puVar1[4];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return 1;
}




/* public: int __cdecl CNtfsFileRecord::InitEmptyFileRecord(struct tagFILERECORD & __ptr64,long)
   __ptr64 */

int __thiscall
CNtfsFileRecord::InitEmptyFileRecord(CNtfsFileRecord *this,tagFILERECORD *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Dst;
  
                    /* 0x10a10  236
                       ?InitEmptyFileRecord@CNtfsFileRecord@@QEAAHAEAUtagFILERECORD@@J@Z */
  if (0 < param_2) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x14);
    *(long *)(param_1 + 0x1c) = param_2;
    if (*(int *)param_1 == 0x454c4946) {
      iVar3 = CheckFileRecord(param_1,param_2);
      if (iVar3 != 0) {
        free(*(void **)(this + 0x10));
        *(long *)(this + 0x18) = param_2;
        _Dst = operator_new((longlong)param_2);
        *(void **)(this + 0x10) = _Dst;
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,(longlong)*(int *)(this + 0x18));
          puVar1 = *(undefined8 **)(this + 0x10);
          uVar2 = *(undefined8 *)(param_1 + 8);
          *puVar1 = *(undefined8 *)param_1;
          puVar1[1] = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0x18);
          puVar1[2] = *(undefined8 *)(param_1 + 0x10);
          puVar1[3] = uVar2;
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          puVar1[4] = *(undefined8 *)(param_1 + 0x20);
          puVar1[5] = uVar2;
          *(undefined2 *)((ulonglong)*(ushort *)(param_1 + 4) + *(longlong *)(this + 0x10)) = 0x1234
          ;
          MyTemplate::
          CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
          ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                       *)this);
          return 1;
        }
        *(undefined4 *)(this + 0x18) = 0;
      }
    }
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecord::InitFromSourceFileRecord(unsigned char * __ptr64,long)
   __ptr64 */

int __thiscall
CNtfsFileRecord::InitFromSourceFileRecord(CNtfsFileRecord *this,uchar *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  CNtfsFileRecordAttribute local_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* 0x10ae0  240  ?InitFromSourceFileRecord@CNtfsFileRecord@@QEAAHPEAEJ@Z */
  if ((((param_1 != (uchar *)0x0) && (0 < param_2)) && (*(int *)param_1 == 0x454c4946)) &&
     (iVar2 = CheckFileRecord((tagFILERECORD *)param_1,param_2), iVar2 != 0)) {
    free(*(void **)(this + 0x10));
    uVar6 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(long *)(this + 0x18) = param_2;
    pvVar3 = operator_new((longlong)param_2);
    *(void **)(this + 0x10) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,param_1,(longlong)*(int *)(this + 0x18));
      iVar2 = UnfixupFileRecord(this,*(tagFILERECORD **)(this + 0x10));
      pvVar3 = *(void **)(this + 0x10);
      if (iVar2 != 0) {
        uVar4 = 0;
        if (pvVar3 != (void *)0x0) {
          uVar4 = *(undefined8 *)((longlong)pvVar3 + 0x10);
          uStack_28 = *(undefined8 *)((longlong)pvVar3 + 0x18);
          uVar6 = (uint)uStack_28;
          local_30 = uVar4;
        }
        MyTemplate::
        CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
        ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                     *)this);
        uVar7 = (uint)(ushort)((ulonglong)uVar4 >> 0x20);
        while( true ) {
          if ((int)uVar6 <= (int)uVar7) {
            return 1;
          }
          puVar5 = (uint *)((longlong)(int)uVar7 + *(longlong *)(this + 0x10));
          if (*puVar5 == 0xffffffff) {
            return 1;
          }
          uVar1 = puVar5[1];
          if (uVar1 == 0) {
            return 1;
          }
          if (uVar6 <= uVar1) break;
          if ((*puVar5 & 0xfffffe0f) != 0) {
            return 1;
          }
          if (*(int *)(this + 0x18) < (int)((uVar1 - (int)*(longlong *)(this + 0x10)) + (int)puVar5)
             ) {
            return 0;
          }
          CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(local_50);
          CNtfsFileRecordAttribute::InitFromSourceAttribute(local_50,(uchar *)puVar5,puVar5[1]);
          MyTemplate::
          CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
          ::Add((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                 *)this,local_50);
          uVar7 = uVar7 + puVar5[1];
          CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(local_50);
        }
        return 1;
      }
      free(pvVar3);
      *(undefined8 *)(this + 0x10) = 0;
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  return 0;
}




/* public: void __cdecl MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute>
   >::InternalSetAtIndex(int,class CNtfsFileRecordAttribute const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::InternalSetAtIndex
          (CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
           *this,int param_1,CNtfsFileRecordAttribute *param_2)

{
  CNtfsFileRecordAttribute *this_00;
  
                    /* 0x10c40  248
                       ?InternalSetAtIndex@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAXHAEBVCNtfsFileRecordAttribute@@@Z
                        */
  this_00 = (CNtfsFileRecordAttribute *)((longlong)param_1 * 0x10 + *(longlong *)this);
  if (this_00 != (CNtfsFileRecordAttribute *)0x0) {
    CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(this_00,param_2);
  }
  return;
}




/* public: int __cdecl CNtfsFileRecord::IsAttributeListPresent(void) __ptr64 */

int __thiscall CNtfsFileRecord::IsAttributeListPresent(CNtfsFileRecord *this)

{
  int iVar1;
  int iVar2;
  undefined8 *local_res8;
  
                    /* 0x10c80  250  ?IsAttributeListPresent@CNtfsFileRecord@@QEAAHXZ */
  iVar1 = *(int *)(this + 8);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        local_res8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)this);
      }
      if (*(int *)*local_res8 == 0x20) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}




/* public: void __cdecl MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute> >::RemoveAll(void) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::RemoveAll(CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            *this)

{
  void *_Memory;
  int iVar1;
  
                    /* 0x10cc0  275
                       ?RemoveAll@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  iVar1 = 0;
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    if (0 < *(int *)(this + 8)) {
      do {
        CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                  ((CNtfsFileRecordAttribute *)((longlong)iVar1 * 0x10 + *(longlong *)this));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 8));
      _Memory = *(void **)this;
    }
    free(_Memory);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: int __cdecl MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute> >::RemoveAt(int) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
::RemoveAt(CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
           *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x10d30  281
                       ?RemoveAt@?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
              ((CNtfsFileRecordAttribute *)(*(longlong *)this + (longlong)param_1 * 0x10));
    iVar1 = *(int *)(this + 8);
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 0x10);
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)((iVar1 - param_1) + -1) << 4);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecord::SetFileRecordHeader(struct tagFILERECORD & __ptr64) __ptr64
    */

int __thiscall CNtfsFileRecord::SetFileRecordHeader(CNtfsFileRecord *this,tagFILERECORD *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* 0x10db0  292
                       ?SetFileRecordHeader@CNtfsFileRecord@@QEAAHAEAUtagFILERECORD@@@Z */
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return 1;
}




/* protected: int __cdecl CNtfsFileRecord::UnfixupFileRecord(struct tagFILERECORD * __ptr64) __ptr64
    */

int __thiscall CNtfsFileRecord::UnfixupFileRecord(CNtfsFileRecord *this,tagFILERECORD *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  tagFILERECORD *ptVar4;
  
                    /* 0x10de0  303  ?UnfixupFileRecord@CNtfsFileRecord@@IEAAHPEAUtagFILERECORD@@@Z
                        */
  if (param_1 == (tagFILERECORD *)0x0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)(*(ushort *)(param_1 + 6) - 1)) {
    lVar3 = 0;
    ptVar4 = param_1 + 0x1fe;
    do {
      lVar1 = (ulonglong)*(ushort *)(param_1 + 4) + lVar3;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 2;
      *(undefined2 *)ptVar4 = *(undefined2 *)(param_1 + lVar1 + 2);
      ptVar4 = ptVar4 + 0x200;
    } while (iVar2 < (int)(*(ushort *)(param_1 + 6) - 1));
  }
  return 1;
}




/* public: __cdecl CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(class CNtfsFileRecordAttribute
   const & __ptr64) __ptr64 */

CNtfsFileRecordAttribute * __thiscall
CNtfsFileRecordAttribute::CNtfsFileRecordAttribute
          (CNtfsFileRecordAttribute *this,CNtfsFileRecordAttribute *param_1)

{
  int iVar1;
  void *_Dst;
  
                    /* 0x10e40  18  ??0CNtfsFileRecordAttribute@@QEAA@AEBV0@@Z */
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  free((void *)0x0);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  _Dst = operator_new((longlong)iVar1);
  *(void **)this = _Dst;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,*(void **)param_1,(longlong)*(int *)(this + 8));
  }
  return this;
}




/* public: __cdecl CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(void) __ptr64 */

CNtfsFileRecordAttribute * __thiscall
CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(CNtfsFileRecordAttribute *this)

{
                    /* 0x10ea0  19  ??0CNtfsFileRecordAttribute@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(void) __ptr64 */

void __thiscall CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(CNtfsFileRecordAttribute *this)

{
                    /* 0x10eb0  57  ??1CNtfsFileRecordAttribute@@QEAA@XZ */
  free(*(void **)this);
  return;
}




/* public: class CNtfsFileRecordAttribute const & __ptr64 __cdecl
   CNtfsFileRecordAttribute::operator=(class CNtfsFileRecordAttribute const & __ptr64) __ptr64 */

CNtfsFileRecordAttribute * __thiscall
CNtfsFileRecordAttribute::operator=
          (CNtfsFileRecordAttribute *this,CNtfsFileRecordAttribute *param_1)

{
  int iVar1;
  void *_Dst;
  
                    /* 0x10ec0  79  ??4CNtfsFileRecordAttribute@@QEAAAEBV0@AEBV0@@Z */
  free(*(void **)this);
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  _Dst = operator_new((longlong)iVar1);
  *(void **)this = _Dst;
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,*(void **)param_1,(longlong)*(int *)(this + 8));
  }
  return this;
}




/* public: int __cdecl CNtfsFileRecordAttribute::GetDataRunList(class CNtfsRunList & __ptr64)
   __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::GetDataRunList(CNtfsFileRecordAttribute *this,CNtfsRunList *param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  
                    /* 0x10f10  181
                       ?GetDataRunList@CNtfsFileRecordAttribute@@QEAAHAEAVCNtfsRunList@@@Z */
  lVar2 = *(longlong *)this;
  if (*(char *)(lVar2 + 8) == '\0') {
    return 0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x20);
  iVar3 = *(int *)(lVar2 + 4);
  if (*(void **)param_1 != (void *)0x0) {
    free(*(void **)param_1);
    *(undefined8 *)param_1 = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar3 = CNtfsRunList::InitFromSourceDataRun
                    (param_1,(uchar *)((ulonglong)*(ushort *)(*(longlong *)this + 0x20) +
                                      *(longlong *)this),iVar3 - (uint)uVar1);
  return iVar3;
}




/* public: __int64 __cdecl CNtfsFileRecordAttribute::GetResidentData(unsigned char *
   __ptr64,__int64) __ptr64 */

__int64 __thiscall
CNtfsFileRecordAttribute::GetResidentData
          (CNtfsFileRecordAttribute *this,uchar *param_1,__int64 param_2)

{
  longlong lVar1;
  
                    /* 0x10f90  210  ?GetResidentData@CNtfsFileRecordAttribute@@QEAA_JPEAE_J@Z */
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 8) == '\0') {
    if ((longlong)(ulonglong)*(uint *)(lVar1 + 0x10) < param_2) {
      param_2 = (ulonglong)*(uint *)(lVar1 + 0x10);
    }
    memcpy(param_1,(void *)((ulonglong)*(ushort *)(lVar1 + 0x14) + lVar1),param_2);
    return param_2;
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecordAttribute::InitFromSourceAttribute(unsigned char *
   __ptr64,long) __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::InitFromSourceAttribute
          (CNtfsFileRecordAttribute *this,uchar *param_1,long param_2)

{
  void *_Dst;
  
                    /* 0x10fe0  238  ?InitFromSourceAttribute@CNtfsFileRecordAttribute@@QEAAHPEAEJ@Z
                        */
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    free(*(void **)this);
    *(long *)(this + 8) = param_2;
    _Dst = operator_new((longlong)param_2);
    *(void **)this = _Dst;
    memcpy(_Dst,param_1,(longlong)*(int *)(this + 8));
    return 1;
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetDataRunList(class CNtfsRunList & __ptr64)
   __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetDataRunList(CNtfsFileRecordAttribute *this,CNtfsRunList *param_1)

{
  uchar *_Src;
  void *_Dst;
  uint uVar1;
  long local_res8 [2];
  
                    /* 0x11050  290
                       ?SetDataRunList@CNtfsFileRecordAttribute@@QEAAHAEAVCNtfsRunList@@@Z */
  if (*(char *)(*(longlong *)this + 8) != '\0') {
    local_res8[0] = 0;
    _Src = CNtfsRunList::Convert2SourceDataRun(param_1,local_res8);
    if (_Src != (uchar *)0x0) {
      uVar1 = local_res8[0] + 7 + (uint)*(ushort *)(*(longlong *)this + 0x20) & 0xfffffff8;
      _Dst = operator_new((longlong)(int)uVar1);
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,(longlong)(int)uVar1);
        memcpy(_Dst,*(void **)this,(ulonglong)*(ushort *)((longlong)*(void **)this + 0x20));
        memcpy((void *)((ulonglong)*(ushort *)(*(longlong *)this + 0x20) + (longlong)_Dst),_Src,
               (longlong)local_res8[0]);
        *(uint *)((longlong)_Dst + 4) = uVar1;
        free(*(void **)this);
        free(_Src);
        *(uint *)(this + 8) = uVar1;
        *(void **)this = _Dst;
        return 1;
      }
    }
  }
  return 0;
}




/* public: int __cdecl CNtfsFileRecordAttribute::SetResidentData(unsigned char * __ptr64,__int64)
   __ptr64 */

int __thiscall
CNtfsFileRecordAttribute::SetResidentData
          (CNtfsFileRecordAttribute *this,uchar *param_1,__int64 param_2)

{
  ushort uVar1;
  longlong lVar2;
  
                    /* 0x11130  299  ?SetResidentData@CNtfsFileRecordAttribute@@QEAAHPEAE_J@Z */
  lVar2 = *(longlong *)this;
  if ((*(char *)(lVar2 + 8) == '\0') && (param_2 <= (longlong)(ulonglong)*(uint *)(lVar2 + 0x10))) {
    uVar1 = *(ushort *)(lVar2 + 0x14);
    memcpy((void *)(lVar2 + (ulonglong)uVar1),param_1,param_2);
    *(int *)(*(longlong *)this + 0x10) = (int)param_2;
    *(uint *)(*(longlong *)this + 4) = (int)param_2 + (uint)uVar1;
    return 1;
  }
  return 0;
}




longlong * FUN_1800111a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  uint local_res10 [2];
  
  *param_1 = 0;
  if (param_2 != (longlong *)0x0) {
    if (DAT_18003d1f0 == (undefined1 *)0x0) {
      DAT_18003d1f0 = &DAT_18003d0f0;
      local_res10[0] = 0x100;
      pcVar1 = (char *)__std_type_info_name
                                 (0x18002c658,&DAT_18004da30,param_3,param_4,0xfffffffffffffffe);
      FUN_18000a650(pcVar1,DAT_18003d1f0,local_res10);
    }
    lVar2 = (**(code **)*param_2)(param_2,DAT_18003d1f0);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      (**(code **)(*param_2 + 0x10))();
    }
  }
  return param_1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180011250(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_100b8 [32];
  undefined1 *puStack_10098;
  longlong lStack_10090;
  longlong *plStack_10088;
  longlong *plStack_10078;
  undefined8 uStack_10070;
  longlong *plStack_10068;
  undefined1 auStack_10058 [65560];
  
  uStack_10070 = 0xfffffffffffffffe;
  uVar3 = DAT_18002c018 ^ (ulonglong)auStack_100b8;
  if (param_4 == *(longlong **)(param_1 + 0x20050)) {
    FUN_180005df0(param_1);
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
    if (param_4 != (longlong *)0x0) {
      do {
        plVar4 = param_4;
        if ((longlong *)0x10000 < param_4) {
          plVar4 = (longlong *)0x10000;
        }
        puStack_10098 = auStack_10058;
        lStack_10090 = param_3;
        plStack_10088 = plVar4;
        cVar2 = (**(code **)(*(longlong *)*param_2 + 8))
                          ((longlong *)*param_2,param_2[1],*(undefined4 *)(param_2 + 2),0);
        plVar6 = (longlong *)0x0;
        if (cVar2 != '\0') {
          plVar6 = plVar4;
        }
        if (plVar4 != plVar6) break;
        plStack_10068 = (longlong *)operator_new(0x10);
        plVar6 = (longlong *)0x0;
        if (plStack_10068 != (longlong *)0x0) {
          *plStack_10068 = 0;
          plStack_10068[1] = param_1;
          plVar6 = plStack_10068;
        }
        uVar5 = FUN_180006d80(plVar6,(ulonglong)auStack_10058,(ulonglong)plVar4);
        if ((char)uVar5 == '\0') break;
        puVar1 = *(undefined8 **)(param_1 + 0x20040);
        plStack_10078 = plVar6;
        if (*(undefined8 **)(param_1 + 0x20048) == puVar1) {
          FUN_1800050f0((longlong *)(param_1 + 0x20038),puVar1,&plStack_10078);
        }
        else {
          *puVar1 = plVar6;
          *(longlong *)(param_1 + 0x20040) = *(longlong *)(param_1 + 0x20040) + 8;
        }
        param_4 = (longlong *)((longlong)param_4 - (longlong)plVar4);
        param_3 = param_3 + (longlong)plVar4;
      } while (param_4 != (longlong *)0x0);
    }
  }
  __security_check_cookie(uVar3 ^ (ulonglong)auStack_100b8);
  return;
}




undefined1 * FUN_1800113d0(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_18003cfd0 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_18003cfd0 = &DAT_18003ced0;
    pcVar1 = (char *)__std_type_info_name(0x18002c608,&DAT_18004da30);
    FUN_18000a650(pcVar1,DAT_18003cfd0,local_res10);
  }
  return DAT_18003cfd0;
}




undefined1 * FUN_180011430(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_18003d300 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_18003d300 = &DAT_18003d200;
    pcVar1 = (char *)__std_type_info_name(0x18002c6a0,&DAT_18004da30);
    FUN_18000a650(pcVar1,DAT_18003d300,local_res10);
  }
  return DAT_18003d300;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord>
   >::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >(class
   MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> > const & __ptr64)
   __ptr64 */

CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
* __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
          (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
           *this,CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
                 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  *pCVar5;
  
                    /* 0x11490  5
                       ??0?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAA@AEBV01@@Z
                        */
  iVar4 = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar3 = malloc((longlong)*(int *)(param_1 + 8) * 0x28);
  *(void **)this = pvVar3;
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 8);
    pCVar5 = this;
    if (0 < iVar2) {
      do {
        if ((-1 < iVar4) && (iVar4 < iVar2)) {
          pCVar5 = (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
                    *)(*(longlong *)param_1 + (longlong)iVar4 * 0x28);
        }
        if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
          if (*(int *)(this + 0xc) == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = *(int *)(this + 8) * 2;
          }
          pvVar3 = malloc((longlong)iVar2 * 0x28);
          if (pvVar3 != (void *)0x0) {
            if (*(void **)this != (void *)0x0) {
              memcpy(pvVar3,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x28);
              free(*(void **)this);
            }
            *(int *)(this + 0xc) = iVar2;
            *(void **)this = pvVar3;
            goto LAB_18001155f;
          }
        }
        else {
LAB_18001155f:
          puVar1 = (undefined4 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x28);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)pCVar5;
            CNtfsFileRecord::CNtfsFileRecord
                      ((CNtfsFileRecord *)(puVar1 + 2),(CNtfsFileRecord *)(pCVar5 + 8));
          }
          *(int *)(this + 8) = *(int *)(this + 8) + 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = *(int *)(param_1 + 8);
      } while (iVar4 < iVar2);
    }
  }
  return this;
}




/* public: __cdecl CNtfsMultiFileRecord::CNtfsMultiFileRecord(class CNtfsMultiFileRecord const &
   __ptr64) __ptr64 */

CNtfsMultiFileRecord * __thiscall
CNtfsMultiFileRecord::CNtfsMultiFileRecord(CNtfsMultiFileRecord *this,CNtfsMultiFileRecord *param_1)

{
                    /* 0x115c0  21  ??0CNtfsMultiFileRecord@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  CNtfsFileRecord::CNtfsFileRecord
            ((CNtfsFileRecord *)(this + 0x10),(CNtfsFileRecord *)(param_1 + 0x10));
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
            ((CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
              *)(this + 0x30),
             (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
              *)(param_1 + 0x30));
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            ((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
              *)(this + 0x40),
             (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
              *)(param_1 + 0x40));
  return this;
}




/* public: __cdecl CRecordAttributeReaderI::CRecordAttributeReaderI(class CRecordAttributeReaderI &&
   __ptr64) __ptr64 */

CRecordAttributeReaderI * __thiscall
CRecordAttributeReaderI::CRecordAttributeReaderI
          (CRecordAttributeReaderI *this,CRecordAttributeReaderI *param_1)

{
                    /* 0x11640  32  ??0CRecordAttributeReaderI@@QEAA@$$QEAV0@@Z
                       0x11640  33  ??0CRecordAttributeReaderI@@QEAA@AEBV0@@Z
                       0x11640  34  ??0CRecordAttributeReaderI@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl CRecordAttributeWriterI::CRecordAttributeWriterI(class CRecordAttributeWriterI &&
   __ptr64) __ptr64 */

CRecordAttributeWriterI * __thiscall
CRecordAttributeWriterI::CRecordAttributeWriterI
          (CRecordAttributeWriterI *this,CRecordAttributeWriterI *param_1)

{
                    /* 0x11650  35  ??0CRecordAttributeWriterI@@QEAA@$$QEAV0@@Z
                       0x11650  36  ??0CRecordAttributeWriterI@@QEAA@AEBV0@@Z
                       0x11650  37  ??0CRecordAttributeWriterI@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord>
   >::~CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >(void) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::
~CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
          (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
           *this)

{
                    /* 0x11660  50
                       ??1?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAA@XZ
                        */
  RemoveAll(this);
  return;
}




void FUN_180011680(longlong *param_1)

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




void FUN_1800116f0(longlong param_1)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_1 + 8));
  return;
}




/* public: class MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> > & __ptr64 __cdecl
   MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >::operator=(class
   MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> > const & __ptr64)
   __ptr64 */

CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
* __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::operator=(CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
            *this,CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
                  *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  *pCVar7;
  
                    /* 0x11710  68
                       ??4?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAAEAV01@AEBV01@@Z
                        */
  iVar4 = *(int *)(this + 8);
  if (iVar4 == *(int *)(param_1 + 8)) {
    if (0 < iVar4) {
      iVar5 = iVar4 + -1;
      lVar6 = (longlong)iVar5 * 0x28;
      do {
        if ((-1 < iVar5) && (iVar5 < *(int *)(this + 8))) {
          CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)this + lVar6 + 8));
          iVar3 = *(int *)(this + 8);
          if (iVar5 != iVar3 + -1) {
            memmove((void *)(*(longlong *)this + lVar6),(void *)(*(longlong *)this + lVar6 + 0x28),
                    (longlong)((iVar3 - iVar5) + -1) * 0x28);
            iVar3 = *(int *)(this + 8);
          }
          *(int *)(this + 8) = iVar3 + -1;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -1;
        lVar6 = lVar6 + -0x28;
      } while (0 < iVar4);
    }
  }
  else {
    RemoveAll(this);
    pvVar2 = malloc((longlong)*(int *)(param_1 + 8) * 0x28);
    *(void **)this = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
    }
  }
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 8);
  pCVar7 = this;
  if (0 < iVar4) {
    do {
      if ((-1 < iVar5) && (iVar5 < iVar4)) {
        pCVar7 = (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
                  *)(*(longlong *)param_1 + (longlong)iVar5 * 0x28);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = *(int *)(this + 8) * 2;
        }
        pvVar2 = malloc((longlong)iVar4 * 0x28);
        if (pvVar2 != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(pvVar2,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x28);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar4;
          *(void **)this = pvVar2;
          goto LAB_18001184f;
        }
      }
      else {
LAB_18001184f:
        puVar1 = (undefined4 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x28);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)pCVar7;
          CNtfsFileRecord::CNtfsFileRecord
                    ((CNtfsFileRecord *)(puVar1 + 2),(CNtfsFileRecord *)(pCVar7 + 8));
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 8);
    } while (iVar5 < iVar4);
  }
  return this;
}




/* public: class CNtfsMultiFileRecord & __ptr64 __cdecl CNtfsMultiFileRecord::operator=(class
   CNtfsMultiFileRecord const & __ptr64) __ptr64 */

CNtfsMultiFileRecord * __thiscall
CNtfsMultiFileRecord::operator=(CNtfsMultiFileRecord *this,CNtfsMultiFileRecord *param_1)

{
                    /* 0x118b0  81  ??4CNtfsMultiFileRecord@@QEAAAEAV0@AEBV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  CNtfsFileRecord::operator=((CNtfsFileRecord *)(this + 0x10),(CNtfsFileRecord *)(param_1 + 0x10));
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::operator=((CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
               *)(this + 0x30),
              (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
               *)(param_1 + 0x30));
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::operator=((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)(this + 0x40),
              (CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)(param_1 + 0x40));
  return this;
}




/* public: struct tagCNtfsFileRecordForMultiRecord & __ptr64 __cdecl MyTemplate::CSimpleArray<struct
   tagCNtfsFileRecordForMultiRecord,class MyTemplate::CSimpleArrayEqualHelper<struct
   tagCNtfsFileRecordForMultiRecord> >::operator[](int) __ptr64 */

tagCNtfsFileRecordForMultiRecord * __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::operator[](CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
             *this,int param_1)

{
  tagCNtfsFileRecordForMultiRecord *in_RAX;
  
                    /* 0x11900  101
                       ??A?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAAEAUtagCNtfsFileRecordForMultiRecord@@H@Z
                       0x11900  102
                       ??A?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEBAAEBUtagCNtfsFileRecordForMultiRecord@@H@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    in_RAX = (tagCNtfsFileRecordForMultiRecord *)(*(longlong *)this + (longlong)param_1 * 0x28);
  }
  return in_RAX;
}




CNtfsMultiFileRecord * FUN_180011920(CNtfsMultiFileRecord *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (param_1,0x50,*(__uint64 *)(param_1 + -8),CNtfsMultiFileRecord::~CNtfsMultiFileRecord)
    ;
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >::Add(struct
   tagCNtfsFileRecordForMultiRecord const & __ptr64) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::Add(CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
      *this,tagCNtfsFileRecordForMultiRecord *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  
                    /* 0x119c0  124
                       ?Add@?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAHAEBUtagCNtfsFileRecordForMultiRecord@@@Z
                        */
  iVar2 = *(int *)(this + 8);
  if (iVar2 == *(int *)(this + 0xc)) {
    iVar3 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar3 = iVar2 * 2;
    }
    _Dst = malloc((longlong)iVar3 * 0x28);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x28);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar3;
    *(void **)this = _Dst;
    iVar2 = *(int *)(this + 8);
  }
  puVar1 = (undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)param_1;
    CNtfsFileRecord::CNtfsFileRecord
              ((CNtfsFileRecord *)(puVar1 + 2),(CNtfsFileRecord *)(param_1 + 8));
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* public: static int __cdecl CNTFSLib::ConvertPartitionDevice2DiskDevice(struct IManager *
   __ptr64,struct IManagerItem * __ptr64,int & __ptr64,__int64 & __ptr64) */

int __cdecl
CNTFSLib::ConvertPartitionDevice2DiskDevice
          (IManager *param_1,IManagerItem *param_2,int *param_3,__int64 *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  __int64 _Var10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  __int64 *p_Var14;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  
                    /* 0x11aa0  142
                       ?ConvertPartitionDevice2DiskDevice@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEAHAEA_J@Z
                        */
  *param_3 = -1;
  *param_4 = -1;
  if ((param_2 != (IManagerItem *)0x0) &&
     (p_Var14 = param_4, puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_2 + 0x38))(param_2),
     puVar3 != (undefined8 *)0x0)) {
    puVar4 = FUN_1800113d0();
    puVar13 = (undefined8 *)*puVar3;
    plVar5 = (longlong *)(*(code *)*puVar13)(puVar3,puVar4);
    if (plVar5 != (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      local_res18 = (longlong *)0x0;
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      FUN_1800111a0((longlong *)&local_res20,plVar6,puVar13,p_Var14);
      plVar6 = plVar11;
      plVar12 = plVar11;
      do {
        plVar7 = (longlong *)(**(code **)(*local_res20 + 0x28))();
        if (plVar6 != plVar7) {
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 8))(plVar6);
            local_res18 = (longlong *)0x0;
            plVar6 = plVar11;
          }
          if (plVar7 != (longlong *)0x0) {
            if (DAT_18003d0e0 == (undefined1 *)0x0) {
              DAT_18003d0e0 = &DAT_18003cfe0;
              local_res10[0] = 0x100;
              pcVar8 = (char *)__std_type_info_name(0x18002c630,&DAT_18004da30);
              FUN_18000a650(pcVar8,DAT_18003d0e0,local_res10);
            }
            plVar6 = (longlong *)(**(code **)*plVar7)(plVar7,DAT_18003d0e0);
            local_res18 = plVar6;
            if (plVar6 == (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              (**(code **)(*plVar7 + 8))(plVar7);
LAB_180011c99:
              puVar4 = FUN_180011430();
              plVar5 = (longlong *)(*(code *)**(undefined8 **)param_2)(param_2,puVar4);
              if (plVar5 != (longlong *)0x0) {
                _Var10 = (**(code **)(*plVar5 + 0x28))(plVar5);
                *param_4 = _Var10;
                *param_3 = (int)plVar12;
              }
              if (local_res20 != (longlong *)0x0) {
                (**(code **)(*local_res20 + 8))();
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
              return (uint)(plVar5 != (longlong *)0x0);
            }
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        if (plVar6 == (longlong *)0x0) goto LAB_180011c99;
        if (DAT_18003cfd0 == (undefined1 *)0x0) {
          DAT_18003cfd0 = &DAT_18003ced0;
          local_res10[0] = 0x100;
          pcVar8 = (char *)__std_type_info_name(0x18002c608,&DAT_18004da30);
          FUN_18000a650(pcVar8,DAT_18003cfd0,local_res10);
        }
        plVar7 = (longlong *)(**(code **)*plVar6)(plVar6,DAT_18003cfd0);
        lVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
        pcVar8 = (char *)(**(code **)(*plVar5 + 0x38))(plVar5);
        lVar9 = lVar9 - (longlong)pcVar8;
        do {
          cVar1 = *pcVar8;
          cVar2 = pcVar8[lVar9];
          if (cVar1 != cVar2) break;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) goto LAB_180011c99;
        plVar12 = (longlong *)(ulonglong)((int)plVar12 + 1);
      } while( true );
    }
  }
  return 0;
}




/* public: class CNtfsAttributeList & __ptr64 __cdecl CNtfsMultiFileRecord::GetAttributeList(void)
   __ptr64 */

CNtfsAttributeList * __thiscall CNtfsMultiFileRecord::GetAttributeList(CNtfsMultiFileRecord *this)

{
                    /* 0x11d00  164
                       ?GetAttributeList@CNtfsMultiFileRecord@@QEAAAEAVCNtfsAttributeList@@XZ */
  return (CNtfsAttributeList *)(this + 0x40);
}




/* public: class MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> > & __ptr64 __cdecl
   CNtfsMultiFileRecord::GetChildRecordArray(void) __ptr64 */

CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
* __thiscall CNtfsMultiFileRecord::GetChildRecordArray(CNtfsMultiFileRecord *this)

{
                    /* 0x11d10  175
                       ?GetChildRecordArray@CNtfsMultiFileRecord@@QEAAAEAV?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@XZ
                        */
  return (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
          *)(this + 0x30);
}




/* public: static int __cdecl CNTFSLib::GetDiskDeviceNumber(struct IManager * __ptr64,struct
   IManagerItem * __ptr64,int & __ptr64) */

int __cdecl CNTFSLib::GetDiskDeviceNumber(IManager *param_1,IManagerItem *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 in_R9;
  uint local_res8 [2];
  longlong *local_res20;
  longlong *plVar10;
  
                    /* 0x11d20  183
                       ?GetDiskDeviceNumber@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEAH@Z */
  *param_3 = -1;
  if ((param_1 != (IManager *)0x0) && (param_2 != (IManagerItem *)0x0)) {
    puVar3 = FUN_1800113d0();
    puVar12 = *(undefined8 **)param_2;
    plVar4 = (longlong *)(*(code *)*puVar12)(param_2,puVar3);
    if (plVar4 != (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      iVar9 = 0;
      plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      FUN_1800111a0((longlong *)&local_res20,plVar5,puVar12,in_R9);
      plVar5 = plVar10;
      plVar11 = plVar10;
      do {
        plVar6 = (longlong *)(**(code **)(*local_res20 + 0x28))();
        if (plVar5 != plVar6) {
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            plVar5 = plVar10;
          }
          if (plVar6 != (longlong *)0x0) {
            if (DAT_18003d0e0 == (undefined1 *)0x0) {
              DAT_18003d0e0 = &DAT_18003cfe0;
              local_res8[0] = 0x100;
              pcVar7 = (char *)__std_type_info_name(0x18002c630,&DAT_18004da30);
              FUN_18000a650(pcVar7,DAT_18003d0e0,local_res8);
            }
            plVar5 = (longlong *)(**(code **)*plVar6)(plVar6,DAT_18003d0e0);
            if (plVar5 == (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              (**(code **)(*plVar6 + 8))(plVar6);
              goto LAB_180011f03;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        if (plVar5 == (longlong *)0x0) goto LAB_180011f03;
        if (DAT_18003cfd0 == (undefined1 *)0x0) {
          DAT_18003cfd0 = &DAT_18003ced0;
          local_res8[0] = 0x100;
          pcVar7 = (char *)__std_type_info_name(0x18002c608,&DAT_18004da30);
          FUN_18000a650(pcVar7,DAT_18003cfd0,local_res8);
        }
        plVar6 = (longlong *)(**(code **)*plVar5)(plVar5,DAT_18003cfd0);
        lVar8 = (**(code **)(*plVar6 + 0x38))(plVar6);
        pcVar7 = (char *)(**(code **)(*plVar4 + 0x38))(plVar4);
        lVar8 = lVar8 - (longlong)pcVar7;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[lVar8];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          *param_3 = (int)plVar11;
          iVar9 = 1;
LAB_180011f03:
          if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 8))();
          }
          if (plVar5 == (longlong *)0x0) {
            return iVar9;
          }
          (**(code **)(*plVar5 + 8))(plVar5);
          return iVar9;
        }
        plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
      } while( true );
    }
  }
  return 0;
}




/* public: static int __cdecl CNTFSLib::GetLabel(struct IManager * __ptr64,struct IManagerItem *
   __ptr64,char * __ptr64,int) */

int __cdecl CNTFSLib::GetLabel(IManager *param_1,IManagerItem *param_2,char *param_3,int param_4)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  __int64 _Var3;
  CNtfsFileRecordAttribute *this;
  undefined1 auStackY_668 [32];
  void *local_638;
  undefined8 local_630;
  int local_628 [2];
  CNtfsFileRecordAttribute *local_620;
  __int64 local_618 [2];
  CNtfsRunList local_608 [16];
  CNtfsVolume local_5f8 [16];
  longlong local_5e8;
  int local_5dc;
  longlong local_5c8;
  CNtfsMultiFileRecord local_598 [80];
  CNtfsMFT local_548 [256];
  wchar_t local_448 [512];
  ulonglong local_48;
  
                    /* 0x11f40  195  ?GetLabel@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@PEADH@Z
                        */
  local_618[1] = 0xfffffffffffffffe;
  local_48 = DAT_18002c018 ^ (ulonglong)auStackY_668;
  _Var3 = -1;
  local_628[0] = -1;
  local_618[0] = -1;
  if ((param_3 == (char *)0x0) || (param_4 < 1)) goto LAB_1800121bf;
  CHardDriveIOSetting::CHardDriveIOSetting
            ((CHardDriveIOSetting *)&local_620,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting((CHardDriveIOSetting *)&local_620);
  iVar1 = ConvertPartitionDevice2DiskDevice(param_1,param_2,local_628,local_618);
  if (iVar1 != 0) {
    CNtfsVolume::CNtfsVolume(local_5f8);
    CNtfsMFT::CNtfsMFT(local_548);
    iVar2 = 0;
    iVar1 = CNtfsVolume::LoadNtfsVolume(local_5f8,local_628[0],local_618[0],0,(ILdmVolume *)0x0);
    if (iVar1 != 0) {
      iVar1 = CNtfsMFT::InitMFT(local_548,local_5f8,0,-1);
      if (iVar1 == 0) {
        if (local_5e8 != -1) {
          _Var3 = local_5dc * local_5e8 + local_5c8;
        }
        iVar1 = CNtfsMFT::InitMFT(local_548,local_5f8,0,_Var3);
        if (iVar1 == 0) goto LAB_18001219a;
      }
      CNtfsMultiFileRecord::CNtfsMultiFileRecord(local_598);
      CNtfsRunList::CNtfsRunList(local_608);
      iVar1 = CNtfsMultiFileRecord::Initiate(local_598,local_548,3);
      if (iVar1 != 0) {
        local_638 = (void *)0x0;
        local_630 = 0;
        iVar1 = CNtfsMultiFileRecord::Convert2AttributeArray
                          (local_598,
                           (CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                            *)&local_638);
        if ((iVar1 != 0) && (this = local_620, iVar1 = iVar2, 0 < (int)local_630)) {
          do {
            if ((-1 < iVar1) && (iVar1 < (int)local_630)) {
              this = (CNtfsFileRecordAttribute *)((longlong)iVar1 * 0x10 + (longlong)local_638);
            }
            if ((**(int **)this == 0x60) && ((char)(*(int **)this)[2] == '\0')) {
              memset(local_448,0,0x400);
              CNtfsFileRecordAttribute::GetResidentData(this,(uchar *)local_448,0x400);
              memset(param_3,0,(longlong)param_4);
              wcstombs(param_3,local_448,(longlong)param_4);
              break;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)local_630);
        }
        if (local_638 != (void *)0x0) {
          if (0 < (int)local_630) {
            do {
              CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                        ((CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + (longlong)local_638))
              ;
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)local_630);
          }
          free(local_638);
          local_638 = (void *)0x0;
        }
        local_630 = 0;
      }
      CNtfsRunList::~CNtfsRunList(local_608);
      CNtfsMultiFileRecord::~CNtfsMultiFileRecord(local_598);
    }
LAB_18001219a:
    CNtfsMFT::~CNtfsMFT(local_548);
    CNtfsVolume::~CNtfsVolume(local_5f8);
  }
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)&local_620);
LAB_1800121bf:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_668);
  return extraout_EAX;
}




/* public: struct tagCNtfsFileRecordForMultiRecord & __ptr64 __cdecl
   CNtfsMultiFileRecord::GetMainFileRecord(void) __ptr64 */

tagCNtfsFileRecordForMultiRecord * __thiscall
CNtfsMultiFileRecord::GetMainFileRecord(CNtfsMultiFileRecord *this)

{
                    /* 0x121e0  199
                       ?GetMainFileRecord@CNtfsMultiFileRecord@@QEAAAEAUtagCNtfsFileRecordForMultiRecord@@XZ
                       0x121e0  209  ?GetNtfsVolume@CNtfsMFT@@QEAAAEAVCNtfsVolume@@XZ */
  return (tagCNtfsFileRecordForMultiRecord *)(this + 8);
}




/* public: static unsigned __int64 __cdecl CNTFSLib::GetNTFSMaxSectors(unsigned long) */

__uint64 __cdecl CNTFSLib::GetNTFSMaxSectors(ulong param_1)

{
                    /* 0x121f0  204  ?GetNTFSMaxSectors@CNTFSLib@@SA_KK@Z */
  return (ulonglong)param_1 << 0x22;
}




/* public: static int __cdecl CNTFSLib::GetNTFSVersion(int,__int64,unsigned long & __ptr64) */

int __cdecl CNTFSLib::GetNTFSVersion(int param_1,__int64 param_2,ulong *param_3)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  __int64 _Var3;
  CNtfsFileRecordAttribute *this;
  undefined1 auStackY_648 [32];
  CNtfsFileRecordAttribute *local_618;
  undefined8 local_610;
  undefined8 local_608;
  CNtfsRunList local_600 [24];
  CNtfsVolume local_5e8 [16];
  longlong local_5d8;
  int local_5cc;
  longlong local_5b8;
  CNtfsMultiFileRecord local_588 [80];
  CNtfsMFT local_538 [256];
  uchar local_438 [8];
  undefined1 local_430;
  undefined1 local_42f;
  ulonglong local_38;
  
                    /* 0x12200  205  ?GetNTFSVersion@CNTFSLib@@SAHH_JAEAK@Z */
  local_608 = 0xfffffffffffffffe;
  local_38 = DAT_18002c018 ^ (ulonglong)auStackY_648;
  CNtfsVolume::CNtfsVolume(local_5e8);
  CNtfsMFT::CNtfsMFT(local_538);
  iVar2 = 0;
  iVar1 = CNtfsVolume::LoadNtfsVolume(local_5e8,param_1,param_2,0,(ILdmVolume *)0x0);
  if (iVar1 != 0) {
    _Var3 = -1;
    iVar1 = CNtfsMFT::InitMFT(local_538,local_5e8,0,-1);
    if (iVar1 == 0) {
      if (local_5d8 != -1) {
        _Var3 = local_5cc * local_5d8 + local_5b8;
      }
      iVar1 = CNtfsMFT::InitMFT(local_538,local_5e8,0,_Var3);
      if (iVar1 == 0) goto LAB_180012400;
    }
    CNtfsMultiFileRecord::CNtfsMultiFileRecord(local_588);
    CNtfsRunList::CNtfsRunList(local_600);
    iVar1 = CNtfsMultiFileRecord::Initiate(local_588,local_538,3);
    if (iVar1 != 0) {
      local_618 = (CNtfsFileRecordAttribute *)0x0;
      local_610 = 0;
      iVar1 = CNtfsMultiFileRecord::Convert2AttributeArray
                        (local_588,
                         (CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                          *)&local_618);
      if ((iVar1 != 0) && (this = local_618, iVar1 = iVar2, 0 < (int)local_610)) {
        do {
          if ((-1 < iVar1) && (iVar1 < (int)local_610)) {
            this = local_618 + (longlong)iVar1 * 0x10;
          }
          if ((**(int **)this == 0x70) && ((char)(*(int **)this)[2] == '\0')) {
            memset(local_438,0,0x400);
            CNtfsFileRecordAttribute::GetResidentData(this,local_438,0x400);
            *param_3 = (uint)CONCAT11(local_430,local_42f);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)local_610);
      }
      if (local_618 != (CNtfsFileRecordAttribute *)0x0) {
        if (0 < (int)local_610) {
          do {
            CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(local_618 + (longlong)iVar2 * 0x10);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)local_610);
        }
        free(local_618);
        local_618 = (CNtfsFileRecordAttribute *)0x0;
      }
      local_610 = 0;
    }
    CNtfsRunList::~CNtfsRunList(local_600);
    CNtfsMultiFileRecord::~CNtfsMultiFileRecord(local_588);
  }
LAB_180012400:
  CNtfsMFT::~CNtfsMFT(local_538);
  CNtfsVolume::~CNtfsVolume(local_5e8);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_648);
  return extraout_EAX;
}




/* public: static int __cdecl CNTFSLib::GetNTFSVersion(struct IManager * __ptr64,struct IManagerItem
   * __ptr64,unsigned long & __ptr64) */

int __cdecl CNTFSLib::GetNTFSVersion(IManager *param_1,IManagerItem *param_2,ulong *param_3)

{
  int iVar1;
  int local_res20 [2];
  __int64 local_28;
  CHardDriveIOSetting local_20 [8];
  undefined8 local_18;
  
                    /* 0x12440  206
                       ?GetNTFSVersion@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEAK@Z */
  local_18 = 0xfffffffffffffffe;
  local_res20[0] = -1;
  local_28 = -1;
  CHardDriveIOSetting::CHardDriveIOSetting(local_20,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting(local_20);
  iVar1 = ConvertPartitionDevice2DiskDevice(param_1,param_2,local_res20,&local_28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = GetNTFSVersion(local_res20[0],local_28,param_3);
  }
  CHardDriveIOSetting::~CHardDriveIOSetting(local_20);
  return iVar1;
}




/* public: static int __cdecl CNTFSLib::GetSpaceInformation(struct IManager * __ptr64,struct
   IManagerItem * __ptr64,__int64 & __ptr64,__int64 & __ptr64,__int64 & __ptr64) */

int __cdecl
CNTFSLib::GetSpaceInformation
          (IManager *param_1,IManagerItem *param_2,__int64 *param_3,__int64 *param_4,
          __int64 *param_5)

{
  DWORD DVar1;
  __uint64 _Var2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int extraout_EAX;
  longlong *plVar7;
  LPCSTR lpRootPathName;
  ulonglong uVar8;
  HANDLE hDevice;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong **pplVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 auStackY_5a8 [32];
  DWORD local_568 [2];
  CHardDriveIOSetting local_560 [8];
  undefined8 local_558;
  ulonglong local_550;
  undefined8 local_548;
  longlong local_540;
  DWORD local_538 [4];
  longlong *local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ULARGE_INTEGER local_508;
  ULARGE_INTEGER local_500;
  ULARGE_INTEGER local_4f8;
  longlong local_4f0 [7];
  CNtfsVolume local_4b8 [28];
  int local_49c;
  longlong local_490;
  undefined8 local_458;
  CHardDriveIO local_448 [96];
  CNtfsMFT local_3e8 [272];
  longlong local_2d8;
  __int64 _Stack_2d0;
  undefined8 local_2c8;
  longlong lStack_2c0;
  uint local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  CHAR local_258 [512];
  ulonglong local_58;
  
                    /* 0x124e0  223
                       ?GetSpaceInformation@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEA_J22@Z
                        */
  local_458 = 0xfffffffffffffffe;
  local_58 = DAT_18002c018 ^ (ulonglong)auStackY_5a8;
  plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x68))();
  if (plVar7 != (longlong *)0x0) {
    lpRootPathName = (LPCSTR)(**(code **)(*plVar7 + 0x98))(plVar7);
    if (lpRootPathName != (LPCSTR)0x0) {
      local_538[2] = 0;
      local_568[0] = 0;
      local_538[1] = 0;
      local_538[0] = 0;
      BVar4 = GetDiskFreeSpaceA(lpRootPathName,local_538 + 2,local_568,local_538 + 1,local_538);
      if (BVar4 != 0) {
        BVar4 = GetDiskFreeSpaceExA(lpRootPathName,&local_500,&local_508,&local_4f8);
        if (BVar4 != 0) {
          *param_3 = local_508.QuadPart / local_568[0];
          uVar8 = local_500.QuadPart / local_568[0];
          *param_5 = uVar8;
          *param_4 = *param_3 - uVar8;
          goto LAB_180012a05;
        }
      }
    }
  }
  memset(local_258,0,0x200);
  iVar5 = FUN_1800131f0((longlong *)param_2,local_258);
  if (iVar5 != 0) {
    hDevice = CreateFileA(local_258,0xc0000000,5,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hDevice != (HANDLE)0xffffffffffffffff) {
      local_558 = (ulonglong)local_558._4_4_ << 0x20;
      memset(&local_2d8,0,0x60);
      BVar4 = DeviceIoControl(hDevice,0x90064,(LPVOID)0x0,0,&local_2d8,0x60,(LPDWORD)&local_558,
                              (LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        *param_3 = _Stack_2d0;
        lVar10 = ((ulonglong)local_2ac / (ulonglong)local_2b0) * lStack_2c0;
        *param_5 = lVar10;
        *param_4 = *param_3 - lVar10;
        CloseHandle(hDevice);
        goto LAB_180012a05;
      }
      CloseHandle(hDevice);
    }
  }
  local_568[0] = 0xffffffff;
  local_558 = 0xffffffffffffffff;
  CHardDriveIOSetting::CHardDriveIOSetting(local_560,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting(local_560);
  iVar5 = ConvertPartitionDevice2DiskDevice(param_1,param_2,(int *)local_568,&local_558);
  if (iVar5 != 0) {
    CNtfsVolume::CNtfsVolume(local_4b8);
    FUN_180007d90(local_3e8);
    _Var2 = local_558;
    DVar1 = local_568[0];
    iVar5 = CNtfsVolume::LoadNtfsVolume(local_4b8,local_568[0],local_558,0,(ILdmVolume *)0x0);
    if (iVar5 != 0) {
      uVar14 = 0xffffffffffffffff;
      uVar9 = FUN_180009440((CNtfsMultiFileRecord *)local_3e8,local_4b8);
      if ((int)uVar9 != 0) {
        CHardDriveIO::CHardDriveIO(local_448);
        iVar5 = CHardDriveIO::OpenDisk(local_448,DVar1);
        if (iVar5 == 0) {
          FUN_180008d10("Open disk failed!(%s)(%d)",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp",
                        0x19f,uVar14);
        }
        else {
          CHardDriveIO::SetLdmInterface(local_448,DVar1,_Var2,0);
          local_550 = 0;
          FUN_1800168f0(local_4f0,local_448,local_4b8,local_3e8);
          plVar7 = (longlong *)0x0;
          cVar3 = FUN_1800178d0((longlong)local_4f0);
          if (cVar3 == '\0') {
            uVar9 = 0x1aa;
            pcVar11 = "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp";
            FUN_180008d10("Get Volume Bitmap size failed!(%s)(%d)",
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp",
                          0x1aa,plVar7);
          }
          else {
            local_528 = local_4f0;
            local_520 = 6;
            uStack_518 = CONCAT44(uStack_518._4_4_,0x80);
            local_548._0_4_ = 0;
            local_548._4_4_ = 0xffff;
            local_540 = 0;
            ChunkCache::Reset((ChunkCache *)&local_548,(ulong)local_550);
            plVar13 = (longlong *)(local_550 & 0xffffffff);
            if ((local_548._4_4_ & 1) == 0) {
              if ((local_548._4_4_ & 2) != 0) {
                cVar3 = FUN_180011250(local_540,&local_528,0,plVar13);
                goto LAB_1800128c8;
              }
            }
            else {
              plVar15 = (longlong *)0x0;
              cVar3 = (**(code **)(local_4f0[0] + 8))(local_4f0,6,0x80);
              plVar7 = (longlong *)0x0;
              if (cVar3 != '\0') {
                plVar7 = plVar13;
              }
              cVar3 = plVar7 == plVar13;
              plVar13 = plVar15;
LAB_1800128c8:
              plVar7 = plVar13;
              if (cVar3 != '\0') {
                local_2d8 = 0;
                _Stack_2d0 = 0;
                local_2c8 = 0;
                lStack_2c0 = 0;
                local_2a8 = 0;
                uStack_2a0 = 0;
                local_298 = 0;
                uStack_290 = 0;
                local_280 = 0;
                local_278 = 0;
                uStack_270 = 0;
                local_268 = 0;
                local_4f8.QuadPart = (ULONGLONG)&local_528;
                local_528 = &local_548;
                local_520 = 0;
                uStack_518 = 0;
                local_510 = 0;
                uVar8 = local_550 & 0xffffffff;
                pplVar12 = &local_528;
                FUN_180012bd0(&local_2d8,pplVar12,(ulong)local_550);
                uVar6 = FUN_180012f70(&local_2d8);
                *param_5 = (ulonglong)uVar6 * (longlong)local_49c;
                *param_3 = local_490;
                *param_4 = local_490 - *param_5;
                ChunkCache::DeleteImpl((ChunkCache *)&local_548);
                FUN_180016a40(local_4f0,pplVar12,uVar8,plVar13);
                CHardDriveIO::~CHardDriveIO(local_448);
                FUN_180008010(local_3e8);
                CNtfsVolume::~CNtfsVolume(local_4b8);
                CHardDriveIOSetting::~CHardDriveIOSetting(local_560);
                goto LAB_180012a05;
              }
            }
            uVar9 = 0x1b5;
            pcVar11 = "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp";
            FUN_180008d10("Load Volume Bitmap failed!(%s)(%d)",
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp",
                          0x1b5,plVar7);
            ChunkCache::DeleteImpl((ChunkCache *)&local_548);
          }
          FUN_180016a40(local_4f0,pcVar11,uVar9,plVar7);
        }
        CHardDriveIO::~CHardDriveIO(local_448);
      }
    }
    FUN_180008010(local_3e8);
    CNtfsVolume::~CNtfsVolume(local_4b8);
  }
  CHardDriveIOSetting::~CHardDriveIOSetting(local_560);
LAB_180012a05:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_5a8);
  return extraout_EAX;
}




/* public: static int __cdecl CNTFSLib::GetVolumeInformationA(struct IManager * __ptr64,struct
   IManagerItem * __ptr64,int & __ptr64,int & __ptr64,int & __ptr64,int & __ptr64,__int64 &
   __ptr64,__int64 & __ptr64,__int64 & __ptr64) */

int __cdecl
CNTFSLib::GetVolumeInformationA
          (IManager *param_1,IManagerItem *param_2,int *param_3,int *param_4,int *param_5,
          int *param_6,__int64 *param_7,__int64 *param_8,__int64 *param_9)

{
  int iVar1;
  int iVar2;
  __int64 _Var3;
  int local_1a8 [2];
  __int64 local_1a0;
  CHardDriveIOSetting local_198 [16];
  CNtfsVolume local_188 [8];
  __int64 local_180;
  longlong local_178;
  int local_16c;
  int local_168;
  int local_164;
  longlong local_158;
  __int64 local_148;
  undefined8 local_128;
  CNtfsMFT local_118 [256];
  
                    /* 0x12a30  229
                       ?GetVolumeInformationA@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEAH222AEA_J33@Z
                        */
  local_128 = 0xfffffffffffffffe;
  _Var3 = -1;
  local_1a8[0] = -1;
  local_1a0 = -1;
  CHardDriveIOSetting::CHardDriveIOSetting(local_198,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting(local_198);
  iVar1 = ConvertPartitionDevice2DiskDevice(param_1,param_2,local_1a8,&local_1a0);
  if (iVar1 == 0) {
    iVar2 = 0;
    goto LAB_180012ba6;
  }
  CNtfsVolume::CNtfsVolume(local_188);
  CNtfsMFT::CNtfsMFT(local_118);
  iVar2 = 0;
  iVar1 = CNtfsVolume::LoadNtfsVolume(local_188,local_1a8[0],local_1a0,0,(ILdmVolume *)0x0);
  if (iVar1 != 0) {
    iVar1 = CNtfsMFT::InitMFT(local_118,local_188,0,-1);
    if (iVar1 == 0) {
      if (local_178 != -1) {
        _Var3 = local_16c * local_178 + local_158;
      }
      iVar1 = CNtfsMFT::InitMFT(local_118,local_188,0,_Var3);
      if (iVar1 == 0) goto LAB_180012b91;
    }
    *param_3 = local_16c;
    *param_4 = local_168;
    *param_5 = local_164;
    *param_7 = local_180;
    *param_8 = local_178;
    _Var3 = CNtfsMFT::GetFileRecordCount(local_118);
    *param_6 = (int)_Var3;
    *param_9 = local_148;
    iVar2 = 1;
  }
LAB_180012b91:
  CNtfsMFT::~CNtfsMFT(local_118);
  CNtfsVolume::~CNtfsVolume(local_188);
LAB_180012ba6:
  CHardDriveIOSetting::~CHardDriveIOSetting(local_198);
  return iVar2;
}




void FUN_180012bd0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28 [4];
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  *(uint *)((longlong)param_1 + 0x24) = param_3;
  *(uint *)(param_1 + 4) = param_3 * 8;
  *(uint *)(param_1 + 10) = param_3 & 3;
  uVar1 = param_3 >> 3;
  *(uint *)((longlong)param_1 + 0x2c) = uVar1;
  *(uint *)(param_1 + 0xf) = param_3 & 7;
  *(uint *)(param_1 + 5) = param_3 >> 2;
  uVar4 = *param_1;
  lVar2 = param_1[1];
  uVar3 = param_1[3];
  if (param_1 + 6 != local_28) {
    param_1[6] = uVar4;
    param_1[7] = lVar2 + (ulonglong)(param_3 >> 2) * 4;
    param_1[8] = param_1[2];
    param_1[9] = uVar3;
    lVar2 = param_1[1];
    uVar1 = *(uint *)((longlong)param_1 + 0x2c);
    uVar4 = *param_1;
    uVar3 = param_1[3];
  }
  if (param_1 + 0xb != local_28) {
    param_1[0xb] = uVar4;
    param_1[0xc] = lVar2 + (ulonglong)uVar1 * 8;
    param_1[0xd] = param_1[2];
    param_1[0xe] = uVar3;
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord>
   >::InternalSetAtIndex(int,struct tagCNtfsFileRecordForMultiRecord const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::InternalSetAtIndex
          (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
           *this,int param_1,tagCNtfsFileRecordForMultiRecord *param_2)

{
  undefined4 *puVar1;
  
                    /* 0x12cb0  246
                       ?InternalSetAtIndex@?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAXHAEBUtagCNtfsFileRecordForMultiRecord@@@Z
                        */
  puVar1 = (undefined4 *)(*(longlong *)this + (longlong)param_1 * 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)param_2;
    CNtfsFileRecord::CNtfsFileRecord
              ((CNtfsFileRecord *)(puVar1 + 2),(CNtfsFileRecord *)(param_2 + 8));
  }
  return;
}




/* public: static int __cdecl CNTFSLib::IsNTFSPartitionRight(struct IManager * __ptr64,struct
   IManagerItem * __ptr64,__int64 const & __ptr64) */

int __cdecl CNTFSLib::IsNTFSPartitionRight(IManager *param_1,IManagerItem *param_2,__int64 *param_3)

{
  int iVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  CNtfsFileRecordAttribute *this;
  __int64 _Var4;
  undefined1 auStackY_608 [32];
  int local_5d8 [2];
  CNtfsFileRecordAttribute *local_5d0;
  __int64 local_5c8;
  longlong local_5c0;
  int local_5b8;
  undefined8 local_5a0;
  CNtfsVolume local_598 [16];
  longlong local_588;
  int local_57c;
  longlong local_568;
  CNtfsMFT local_538 [256];
  uchar local_438 [64];
  char local_3f8;
  wchar_t local_3f6 [479];
  ulonglong local_38;
  
                    /* 0x12d00  255
                       ?IsNTFSPartitionRight@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@AEB_J@Z */
  local_5a0 = 0xfffffffffffffffe;
  local_38 = DAT_18002c018 ^ (ulonglong)auStackY_608;
  _Var4 = -1;
  local_5d8[0] = -1;
  local_5c8 = -1;
  CHardDriveIOSetting::CHardDriveIOSetting
            ((CHardDriveIOSetting *)&local_5d0,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting((CHardDriveIOSetting *)&local_5d0);
  iVar1 = ConvertPartitionDevice2DiskDevice(param_1,param_2,local_5d8,&local_5c8);
  if (iVar1 == 0) goto LAB_180012f38;
  CNtfsVolume::CNtfsVolume(local_598);
  CNtfsMFT::CNtfsMFT(local_538);
  iVar3 = 0;
  iVar1 = CNtfsVolume::LoadNtfsVolume(local_598,local_5d8[0],local_5c8,0,(ILdmVolume *)0x0);
  if (iVar1 != 0) {
    iVar1 = CNtfsMFT::InitMFT(local_538,local_598,0,-1);
    if (iVar1 == 0) {
      if (local_588 != -1) {
        _Var4 = local_57c * local_588 + local_568;
      }
      iVar1 = CNtfsMFT::InitMFT(local_538,local_598,0,_Var4);
      if (iVar1 == 0) goto LAB_180012f23;
    }
    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_5c0);
    iVar1 = CNtfsMFT::ReadFileRecord(local_538,6,(CNtfsFileRecord *)&local_5c0);
    if ((iVar1 != 0) && (this = local_5d0, iVar1 = local_5b8, 0 < local_5b8)) {
      do {
        if ((-1 < iVar3) && (iVar3 < iVar1)) {
          this = (CNtfsFileRecordAttribute *)((longlong)iVar3 * 0x10 + local_5c0);
        }
        if ((**(int **)this == 0x30) && ((char)(*(int **)this)[2] == '\0')) {
          memset(local_438,0,0x400);
          CNtfsFileRecordAttribute::GetResidentData(this,local_438,0x400);
          if ((local_3f8 != '\a') ||
             (iVar2 = _wcsicmp(local_3f6,L"$Bitmap"), iVar1 = local_5b8, iVar2 != 0)) break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_5c0);
  }
LAB_180012f23:
  CNtfsMFT::~CNtfsMFT(local_538);
  CNtfsVolume::~CNtfsVolume(local_598);
LAB_180012f38:
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)&local_5d0);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_608);
  return extraout_EAX;
}




int FUN_180012f70(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *local_res8;
  uint local_res10;
  ulonglong local_res18;
  longlong local_res20;
  longlong local_68 [5];
  
  uVar5 = param_1[1];
  lVar7 = *param_1;
  iVar8 = 0;
  pbVar4 = (byte *)param_1[2];
  local_res10 = 0;
  local_res18 = uVar5;
  pbVar6 = pbVar4;
  local_res8 = param_1;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    do {
      uVar3 = *(uint *)(lVar7 + 4);
      if ((uVar3 & 1) == 0) {
        if (((uVar3 & 2) != 0) || ((uVar3 & 4) != 0)) {
          uVar2 = local_res18 & 0xffff;
          local_res20 = 0;
          FUN_180006b30(*(longlong **)(lVar7 + 8),0x10000 - uVar2 < 8,local_res18 >> 0x10,
                        &local_res20);
          pbVar6 = (byte *)(local_res20 + uVar2);
        }
      }
      else {
        pbVar6 = (byte *)(*(longlong *)(*(longlong *)(lVar7 + 8) + 8) + local_res18);
      }
      if (*(longlong *)pbVar6 == 0) {
        iVar8 = iVar8 + 0x40;
      }
      else if (*(longlong *)pbVar6 != -1) {
        lVar9 = 8;
        pbVar4 = pbVar6;
        uVar5 = local_res18;
        do {
          uVar3 = *(uint *)(lVar7 + 4);
          if ((uVar3 & 1) == 0) {
            if (((uVar3 & 2) != 0) || ((uVar3 & 4) != 0)) {
              local_res20 = 0;
              FUN_180006b30(*(longlong **)(lVar7 + 8),(uVar5 & 0xffff) == 0x10000,uVar5 >> 0x10,
                            &local_res20);
              pbVar4 = (byte *)(local_res20 + (uVar5 & 0xffff));
            }
          }
          else {
            pbVar4 = (byte *)(*(longlong *)(*(longlong *)(lVar7 + 8) + 8) + uVar5);
          }
          uVar5 = uVar5 + 1;
          iVar8 = iVar8 + (uint)(byte)(&DAT_18001e180)[*pbVar4];
          lVar9 = lVar9 + -1;
          param_1 = local_res8;
        } while (lVar9 != 0);
      }
      local_res18 = local_res18 + 8;
      local_res10 = local_res10 + 1;
    } while (local_res10 < *(uint *)((longlong)param_1 + 0x2c));
  }
  if ((int)param_1[0xf] != 0) {
    if (local_68 != param_1 + 0xb) {
      lVar7 = param_1[0xb];
      uVar5 = param_1[0xc];
      pbVar4 = (byte *)param_1[0xd];
    }
    uVar3 = 0;
    if ((int)param_1[0xf] != 0) {
      do {
        uVar1 = *(uint *)(lVar7 + 4);
        if ((uVar1 & 1) == 0) {
          if (((uVar1 & 2) != 0) || ((uVar1 & 4) != 0)) {
            local_res8 = (longlong *)0x0;
            FUN_180006b30(*(longlong **)(lVar7 + 8),(uVar5 & 0xffff) == 0x10000,uVar5 >> 0x10,
                          (longlong *)&local_res8);
            pbVar4 = (byte *)((longlong)local_res8 + (uVar5 & 0xffff));
          }
        }
        else {
          pbVar4 = (byte *)(*(longlong *)(*(longlong *)(lVar7 + 8) + 8) + uVar5);
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + (uint)(byte)(&DAT_18001e180)[*pbVar4];
      } while (uVar3 < *(uint *)(param_1 + 0xf));
    }
  }
  return iVar8;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800131f0(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  size_t sVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78 [2];
  ulonglong local_68;
  ulonglong local_60;
  char local_58 [24];
  ulonglong local_40;
  ulonglong uVar16;
  
  local_80 = 0xfffffffffffffffe;
  local_40 = DAT_18002c018 ^ (ulonglong)auStack_b8;
  uVar16 = 0;
  local_88 = param_2;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x38))();
  local_90 = (void *)0x0;
  if (DAT_18003d410 == (undefined1 *)0x0) {
    DAT_18003d410 = &DAT_18003d310;
    local_98[0] = 0x100;
    pcVar8 = (char *)__std_type_info_name(0x18002c6c8,&DAT_18004da30);
    FUN_18000a650(pcVar8,DAT_18003d410,local_98);
  }
  plVar9 = (longlong *)(**(code **)*puVar7)(puVar7,DAT_18003d410);
  cVar3 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_90);
  if ((cVar3 != '\0') && (local_90 != (void *)0x0)) {
    puVar10 = FUN_1800113d0();
    plVar9 = (longlong *)(**(code **)*puVar7)(puVar7,puVar10);
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x38))(plVar9);
    local_68 = 0;
    local_60 = 0xf;
    local_78[0]._0_1_ = 0;
    uVar18 = 0xffffffffffffffff;
    sVar17 = 0xffffffffffffffff;
    do {
      sVar17 = sVar17 + 1;
    } while (*(char *)((longlong)pvVar11 + sVar17) != '\0');
    FUN_180013b70(local_78,pvVar11,sVar17);
    uVar2 = local_60;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    uVar13 = local_68 - (local_68 - 0x11);
    if (local_68 < uVar13) {
      FUN_180013b50();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar10 = (undefined1 *)CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]);
    puVar14 = (undefined1 *)local_78;
    if (0xf < local_60) {
      puVar14 = puVar10;
    }
    memcpy(local_58,puVar14 + uVar13,local_68 - 0x11);
    uVar4 = atoi(local_58);
    if (0xf < uVar2) {
      puVar14 = puVar10;
      if ((0xfff < uVar2 + 1) &&
         (puVar14 = *(undefined1 **)(puVar10 + 0xfffffffffffffff8),
         (undefined1 *)0x1f < puVar10 + (-8 - (longlong)puVar14))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar14);
    }
    local_68 = 0;
    local_60 = 0xf;
    local_78[0]._0_1_ = 0;
    if (DAT_18003cb90 == (undefined1 *)0x0) {
      DAT_18003cb90 = &DAT_18003ca90;
      local_98[0] = 0x100;
      pcVar8 = (char *)__std_type_info_name(0x18002c568,&DAT_18004da30);
      FUN_18000a650(pcVar8,DAT_18003cb90,local_98);
    }
    lVar12 = (**(code **)*param_1)(param_1,DAT_18003cb90);
    puVar10 = FUN_180011430();
    plVar9 = (longlong *)(**(code **)*param_1)(param_1,puVar10);
    uVar5 = (*(code *)**(undefined8 **)(lVar12 + 8))();
    pvVar11 = local_90;
    iVar6 = (**(code **)(*plVar9 + 0x58))(plVar9);
    if ((iVar6 != 0) && (*(int *)((longlong)pvVar11 + 4) != 0)) {
      do {
        lVar12 = (**(code **)(*plVar9 + 0x28))(plVar9);
        if ((*(longlong *)((longlong)pvVar11 + uVar16 * 0x90 + 0x38) == lVar12 * (ulonglong)uVar5)
           && (uVar15 = *(uint *)((longlong)pvVar11 + uVar16 * 0x90 + 0x48), uVar15 != 0)) {
          uVar18 = (ulonglong)uVar15;
          break;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < *(uint *)((longlong)pvVar11 + 4));
    }
    free(local_90);
    local_90 = (void *)0x0;
    FUN_180013cc0(local_88,"\\\\?\\GLOBALROOT\\Device\\Harddisk%d\\Partition%d",(ulonglong)uVar4,
                  uVar18 & 0xffffffff);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_b8);
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >::RemoveAll(void)
   __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::RemoveAll(CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
            *this)

{
  void *_Memory;
  int iVar1;
  
                    /* 0x134c0  273
                       ?RemoveAll@?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  _Memory = *(void **)this;
  iVar1 = 0;
  if (_Memory != (void *)0x0) {
    if (0 < *(int *)(this + 8)) {
      do {
        CNtfsFileRecord::~CNtfsFileRecord
                  ((CNtfsFileRecord *)(*(longlong *)this + (longlong)iVar1 * 0x28 + 8));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 8));
      _Memory = *(void **)this;
    }
    free(_Memory);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: int __cdecl MyTemplate::CSimpleArray<struct tagCNtfsFileRecordForMultiRecord,class
   MyTemplate::CSimpleArrayEqualHelper<struct tagCNtfsFileRecordForMultiRecord> >::RemoveAt(int)
   __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
::RemoveAt(CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
           *this,int param_1)

{
  void *_Dst;
  int iVar1;
  
                    /* 0x13540  279
                       ?RemoveAt@?$CSimpleArray@UtagCNtfsFileRecordForMultiRecord@@V?$CSimpleArrayEqualHelper@UtagCNtfsFileRecordForMultiRecord@@@MyTemplate@@@MyTemplate@@QEAAHH@Z
                        */
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    CNtfsFileRecord::~CNtfsFileRecord
              ((CNtfsFileRecord *)(*(longlong *)this + (longlong)param_1 * 0x28 + 8));
    iVar1 = *(int *)(this + 8);
    if (param_1 != iVar1 + -1) {
      _Dst = (void *)(*(longlong *)this + (longlong)param_1 * 0x28);
      memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)((iVar1 - param_1) + -1) * 0x28);
      iVar1 = *(int *)(this + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
    return 1;
  }
  return 0;
}




/* public: static int __cdecl CNTFSLib::SetLabel(struct IManager * __ptr64,struct IManagerItem *
   __ptr64,char * __ptr64,struct ILdmVolume * __ptr64) */

int __cdecl
CNTFSLib::SetLabel(IManager *param_1,IManagerItem *param_2,char *param_3,ILdmVolume *param_4)

{
  int iVar1;
  int extraout_EAX;
  uchar *_Memory;
  longlong lVar2;
  void *_Memory_00;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  CNtfsFileRecordAttribute *pCVar7;
  __int64 _Var8;
  CNtfsFileRecordAttribute *pCVar9;
  ulonglong uVar10;
  undefined1 auStackY_a88 [32];
  void *local_a58;
  undefined8 local_a50;
  int local_a48;
  long local_a44;
  CNtfsFileRecordAttribute *local_a40;
  void *local_a38;
  undefined8 local_a30;
  ulonglong local_a18 [2];
  undefined8 local_a08;
  CNtfsRunList local_a00 [24];
  CNtfsVolume local_9e8 [16];
  longlong local_9d8;
  int local_9cc;
  longlong local_9b8;
  CNtfsMFT local_988 [256];
  tagFILERECORD local_888 [40];
  short local_860;
  undefined4 local_858;
  uint local_854;
  undefined2 local_84e;
  short local_84a;
  uint local_848;
  undefined2 local_844;
  undefined1 local_840 [1000];
  WCHAR local_458 [512];
  ulonglong local_58;
  
                    /* 0x135e0  294
                       ?SetLabel@CNTFSLib@@SAHPEAUIManager@@PEAUIManagerItem@@PEADPEAUILdmVolume@@@Z
                        */
  local_a08 = 0xfffffffffffffffe;
  local_58 = DAT_18002c018 ^ (ulonglong)auStackY_a88;
  if (param_3 == (char *)0x0) goto LAB_180013b09;
  local_a48 = -1;
  local_a18[0] = 0xffffffffffffffff;
  CHardDriveIOSetting::CHardDriveIOSetting
            ((CHardDriveIOSetting *)&local_a40,param_1,(IBlockDevice *)0x0);
  CHardDriveIO::LoadSetting((CHardDriveIOSetting *)&local_a40);
  iVar1 = ConvertPartitionDevice2DiskDevice(param_1,param_2,&local_a48,(__int64 *)local_a18);
  uVar6 = 0;
  if (iVar1 != 0) {
    uVar5 = local_a18[0];
    if (param_4 != (ILdmVolume *)0x0) {
      uVar5 = uVar6;
    }
    CNtfsVolume::CNtfsVolume(local_9e8);
    CNtfsMFT::CNtfsMFT(local_988);
    iVar1 = CNtfsVolume::LoadNtfsVolume(local_9e8,local_a48,uVar5,0,param_4);
    if (iVar1 != 0) {
      iVar1 = CNtfsMFT::InitMFT(local_988,local_9e8,0,-1);
      if (iVar1 == 0) {
        if (local_9d8 == -1) {
          _Var8 = -1;
        }
        else {
          _Var8 = local_9cc * local_9d8 + local_9b8;
        }
        iVar1 = CNtfsMFT::InitMFT(local_988,local_9e8,0,_Var8);
        if (iVar1 == 0) goto LAB_180013ae8;
      }
      CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_a38);
      CNtfsRunList::CNtfsRunList(local_a00);
      iVar1 = CNtfsMFT::ReadFileRecord(local_988,3,(CNtfsFileRecord *)&local_a38);
      if (iVar1 != 0) {
        local_a58 = (void *)0x0;
        local_a50 = 0;
        CNtfsFileRecord::GetFileRecordHeader((CNtfsFileRecord *)&local_a38,local_888);
        local_860 = 0;
        _Memory_00 = local_a38;
        uVar5 = uVar6;
        pCVar7 = local_a40;
        pCVar9 = local_a40;
        uVar10 = uVar6;
        iVar1 = (int)local_a30;
        if (0 < (int)local_a30 + 1) {
          do {
            iVar3 = (int)uVar5;
            if (iVar3 == iVar1) {
LAB_1800137b2:
              if ((int)uVar10 == 0) {
                CNtfsFileRecordAttribute::CNtfsFileRecordAttribute
                          ((CNtfsFileRecordAttribute *)local_a18);
                memset(local_458,0,0x400);
                memset(&local_858,0,0x400);
                MultiByteToWideChar(0,2,param_3,-1,local_458,0x1ff);
                lVar2 = -1;
                do {
                  lVar2 = lVar2 + 1;
                } while (local_458[lVar2] != L'\0');
                local_84a = local_860;
                local_860 = local_860 + 1;
                local_858 = 0x60;
                local_844 = 0x18;
                local_84e = 0x18;
                local_848 = (int)lVar2 * 2;
                local_854 = local_848 + 0x1f & 0xfffffff8;
                memcpy(local_840,local_458,(ulonglong)local_848);
                iVar1 = CNtfsFileRecordAttribute::InitFromSourceAttribute
                                  ((CNtfsFileRecordAttribute *)local_a18,(uchar *)&local_858,
                                   local_854);
                if (iVar1 == 0) {
                  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                            ((CNtfsFileRecordAttribute *)local_a18);
                  goto LAB_180013a88;
                }
                MyTemplate::
                CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                ::Add((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                       *)&local_a58,(CNtfsFileRecordAttribute *)local_a18);
                uVar10 = 1;
                CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                          ((CNtfsFileRecordAttribute *)local_a18);
                _Memory_00 = local_a38;
                iVar1 = (int)local_a30;
              }
            }
            else {
              if ((-1 < iVar3) && (iVar3 < iVar1)) {
                pCVar9 = (CNtfsFileRecordAttribute *)((longlong)iVar3 * 0x10 + (longlong)_Memory_00)
                ;
              }
              if (0x60 < **(uint **)pCVar9) goto LAB_1800137b2;
            }
            if (iVar3 == iVar1) break;
            if ((-1 < iVar3) && (iVar3 < iVar1)) {
              pCVar7 = (CNtfsFileRecordAttribute *)((longlong)iVar3 * 0x10 + (longlong)_Memory_00);
            }
            if (**(int **)pCVar7 != 0x60) {
              *(short *)((longlong)*(int **)pCVar7 + 0xe) = local_860;
              local_860 = local_860 + 1;
              MyTemplate::
              CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
              ::Add((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                     *)&local_a58,pCVar7);
              _Memory_00 = local_a38;
              iVar1 = (int)local_a30;
            }
            uVar5 = (ulonglong)(iVar3 + 1U);
          } while ((int)(iVar3 + 1U) < iVar1 + 1);
          if ((int)uVar10 != 0) {
            if (_Memory_00 != (void *)0x0) {
              uVar5 = uVar6;
              if (0 < iVar1) {
                do {
                  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                            ((CNtfsFileRecordAttribute *)
                             ((longlong)(int)uVar5 * 0x10 + (longlong)_Memory_00));
                  uVar4 = (int)uVar5 + 1;
                  _Memory_00 = local_a38;
                  uVar5 = (ulonglong)uVar4;
                } while ((int)uVar4 < (int)local_a30);
              }
              free(_Memory_00);
              local_a38 = (void *)0x0;
            }
            local_a30 = 0;
            uVar5 = uVar6;
            pCVar7 = local_a40;
            if (0 < (int)local_a50) {
              do {
                iVar1 = (int)uVar5;
                if ((-1 < iVar1) && (iVar1 < (int)local_a50)) {
                  pCVar7 = (CNtfsFileRecordAttribute *)
                           ((longlong)iVar1 * 0x10 + (longlong)local_a58);
                }
                MyTemplate::
                CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                ::Add((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                       *)&local_a38,pCVar7);
                uVar5 = (ulonglong)(iVar1 + 1U);
              } while ((int)(iVar1 + 1U) < (int)local_a50);
            }
            CNtfsFileRecord::SetFileRecordHeader((CNtfsFileRecord *)&local_a38,local_888);
            local_a44 = 0;
            _Memory = CNtfsFileRecord::Convert2SourceFileRecord
                                ((CNtfsFileRecord *)&local_a38,&local_a44);
            if (_Memory != (uchar *)0x0) {
              iVar1 = CNtfsFileRecord::InitFromSourceFileRecord
                                ((CNtfsFileRecord *)&local_a38,_Memory,local_a44);
              if (iVar1 == 0) {
                free(_Memory);
              }
              else {
                free(_Memory);
                iVar1 = CNtfsMFT::WriteFileRecord(local_988,3,(CNtfsFileRecord *)&local_a38);
                if (iVar1 != 0) {
                  CNtfsMFT::CNtfsMFT((CNtfsMFT *)&local_858);
                  iVar1 = CNtfsMFT::InitMFT((CNtfsMFT *)&local_858,local_9e8,1,-1);
                  if ((iVar1 == 0) ||
                     (iVar1 = CNtfsMFT::WriteFileRecord
                                        ((CNtfsMFT *)&local_858,3,(CNtfsFileRecord *)&local_a38),
                     iVar1 == 0)) {
                    CNtfsMFT::~CNtfsMFT((CNtfsMFT *)&local_858);
                  }
                  else {
                    CNtfsMFT::~CNtfsMFT((CNtfsMFT *)&local_858);
                  }
                }
              }
            }
          }
        }
LAB_180013a88:
        if (local_a58 != (void *)0x0) {
          if (0 < (int)local_a50) {
            do {
              CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
                        ((CNtfsFileRecordAttribute *)
                         ((longlong)(int)uVar6 * 0x10 + (longlong)local_a58));
              uVar4 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar4;
            } while ((int)uVar4 < (int)local_a50);
          }
          free(local_a58);
          local_a58 = (void *)0x0;
        }
        local_a50 = 0;
      }
      CNtfsRunList::~CNtfsRunList(local_a00);
      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_a38);
    }
LAB_180013ae8:
    CNtfsMFT::~CNtfsMFT(local_988);
    CNtfsVolume::~CNtfsVolume(local_9e8);
  }
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)&local_a40);
LAB_180013b09:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_a88);
  return extraout_EAX;
}




void FUN_180013b30(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180013b50(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_180013b70(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180013b30();
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
      if (pvVar3 == (void *)0x0) goto LAB_180013cb3;
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
LAB_180013cb3:
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




int FUN_180013cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180009e70();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* public: __cdecl CNtfsMFT::CNtfsMFT(void) __ptr64 */

CNtfsMFT * __thiscall CNtfsMFT::CNtfsMFT(CNtfsMFT *this)

{
                    /* 0x13d20  20  ??0CNtfsMFT@@QEAA@XZ */
  *(undefined ***)this = vftable;
  CNtfsVolume::CNtfsVolume((CNtfsVolume *)(this + 8));
  CNtfsRunList::CNtfsRunList((CNtfsRunList *)(this + 0x60));
  CHardDriveIO::CHardDriveIO((CHardDriveIO *)(this + 0x78));
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  return this;
}




/* public: virtual __cdecl CNtfsMFT::~CNtfsMFT(void) __ptr64 */

void __thiscall CNtfsMFT::~CNtfsMFT(CNtfsMFT *this)

{
  void *_Memory;
  
                    /* 0x13d80  58  ??1CNtfsMFT@@UEAA@XZ */
  *(undefined ***)this = vftable;
  _Memory = *(void **)(this + 0xf0);
  if (_Memory != (void *)0x0) {
    FUN_18000c720((longlong)_Memory);
    free(_Memory);
  }
  (**(code **)(*(longlong *)(this + 0x78) + 0x30))(this + 0x78);
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(this + 0x78));
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(this + 0x60));
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(this + 8));
  return;
}




CNtfsMFT * FUN_180013e00(CNtfsMFT *param_1,uint param_2)

{
  if ((param_2 & 2) != 0) {
    _eh_vector_destructor_iterator_(param_1,0xf8,*(__uint64 *)(param_1 + -8),CNtfsMFT::~CNtfsMFT);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8);
    }
    return param_1 + -8;
  }
  CNtfsMFT::~CNtfsMFT(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* public: int __cdecl CNtfsMFT::AdjustMftPos(__int64) __ptr64 */

int __thiscall CNtfsMFT::AdjustMftPos(CNtfsMFT *this,__int64 param_1)

{
  int iVar1;
  
                    /* 0x13ea0  130  ?AdjustMftPos@CNtfsMFT@@QEAAH_J@Z */
  if (*(int *)(this + 0xec) != 0) {
    iVar1 = FUN_18000ce60(*(longlong *)(this + 0xf0),param_1);
    return iVar1;
  }
  return 1;
}




/* public: void __cdecl CNtfsMFT::ClearCache(void) __ptr64 */

void __thiscall CNtfsMFT::ClearCache(CNtfsMFT *this)

{
                    /* 0x13ec0  136  ?ClearCache@CNtfsMFT@@QEAAXXZ */
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  if (*(int *)(this + 0xec) != 0) {
    FUN_18000d0d0(*(longlong *)(this + 0xf0));
    return;
  }
  return;
}




/* public: __int64 __cdecl CNtfsMFT::Get0XB0AllocSize(void) __ptr64 */

__int64 __thiscall CNtfsMFT::Get0XB0AllocSize(CNtfsMFT *this)

{
  __int64 _Var1;
  
                    /* 0x13ef0  158  ?Get0XB0AllocSize@CNtfsMFT@@QEAA_JXZ */
  if (*(int *)(this + 0xec) == 0) {
    return 0;
  }
  _Var1 = FUN_18000d820(*(longlong *)(this + 0xf0));
  return _Var1;
}




/* public: int __cdecl CNtfsMFT::Get0XB0DataRun(class CNtfsRunList & __ptr64) __ptr64 */

int __thiscall CNtfsMFT::Get0XB0DataRun(CNtfsMFT *this,CNtfsRunList *param_1)

{
  undefined8 uVar1;
  
                    /* 0x13f10  159  ?Get0XB0DataRun@CNtfsMFT@@QEAAHAEAVCNtfsRunList@@@Z */
  if (*(int *)(this + 0xec) == 0) {
    return 0;
  }
  uVar1 = FUN_18000d840(*(longlong *)(this + 0xf0),(longlong *)param_1);
  return (int)uVar1;
}




/* public: int __cdecl CNtfsMFT::Get0XB0FileRecord(class CNtfsFileRecord & __ptr64) __ptr64 */

int __thiscall CNtfsMFT::Get0XB0FileRecord(CNtfsMFT *this,CNtfsFileRecord *param_1)

{
  undefined8 uVar1;
  
                    /* 0x13f30  160  ?Get0XB0FileRecord@CNtfsMFT@@QEAAHAEAVCNtfsFileRecord@@@Z */
  if (*(int *)(this + 0xec) == 0) {
    return 0;
  }
  uVar1 = FUN_18000dbe0(*(longlong *)(this + 0xf0),param_1);
  return (int)uVar1;
}




/* public: int __cdecl CNtfsMFT::GetDataFromAttribute(class CNtfsFileRecordAttribute &
   __ptr64,unsigned char * __ptr64,long) __ptr64 */

int __thiscall
CNtfsMFT::GetDataFromAttribute
          (CNtfsMFT *this,CNtfsFileRecordAttribute *param_1,uchar *param_2,long param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  __int64 _Var5;
  ulonglong uVar6;
  uint uVar7;
  size_t _Size;
  longlong *local_res10;
  undefined8 uVar8;
  longlong local_40;
  int local_38;
  
                    /* 0x13f50  178
                       ?GetDataFromAttribute@CNtfsMFT@@QEAAHAEAVCNtfsFileRecordAttribute@@PEAEJ@Z */
  uVar8 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)param_1;
  if (*(char *)(lVar1 + 8) == '\0') {
    uVar6 = (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  else {
    uVar6 = *(ulonglong *)(lVar1 + 0x28);
  }
  _Size = (size_t)param_3;
  if ((longlong)_Size < (longlong)uVar6) {
    uVar2 = 0;
  }
  else {
    memset(param_2,0,_Size);
    if (*(char *)(*(longlong *)param_1 + 8) == '\0') {
      _Var5 = CNtfsFileRecordAttribute::GetResidentData(param_1,param_2,_Size);
      uVar2 = (uint)(_Var5 != 0);
    }
    else {
      CNtfsRunList::CNtfsRunList((CNtfsRunList *)&local_40);
      iVar3 = CNtfsFileRecordAttribute::GetDataRunList(param_1,(CNtfsRunList *)&local_40);
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = *(int *)(this + 0x24);
        iVar4 = local_38;
        uVar7 = uVar2;
        if (0 < local_38) {
          do {
            if ((-1 < (int)uVar7) && ((int)uVar7 < iVar4)) {
              local_res10 = (longlong *)(local_40 + (longlong)(int)uVar7 * 0x18);
            }
            if (*local_res10 != -1) {
              iVar4 = (**(code **)(*(longlong *)(this + 0x78) + 0x10))
                                (this + 0x78,param_2,
                                 (longlong)*(int *)(this + 0x24) * *local_res10 +
                                 *(longlong *)(this + 0x38),(longlong)iVar3 * local_res10[2],uVar8);
              if (iVar4 == 0) goto LAB_180014070;
              param_2 = param_2 + (longlong)*(int *)(this + 0x20) * (longlong)iVar3 * local_res10[2]
              ;
              iVar4 = local_38;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar4);
        }
        uVar2 = 1;
      }
LAB_180014070:
      CNtfsRunList::~CNtfsRunList((CNtfsRunList *)&local_40);
    }
  }
  return uVar2;
}




/* public: __int64 __cdecl CNtfsMFT::GetFileRecordCount(void) __ptr64 */

__int64 __thiscall CNtfsMFT::GetFileRecordCount(CNtfsMFT *this)

{
  longlong lVar1;
  
                    /* 0x140a0  185  ?GetFileRecordCount@CNtfsMFT@@QEAA_JXZ */
  if (*(int *)(this + 0xec) != 0) {
    lVar1 = FUN_18000e130(*(longlong *)(this + 0xf0));
    return lVar1;
  }
  return *(__int64 *)(this + 0x70);
}




/* public: __int64 __cdecl CNtfsMFT::GetMFTStartLcn(void) __ptr64 */

__int64 __thiscall CNtfsMFT::GetMFTStartLcn(CNtfsMFT *this)

{
  longlong lVar1;
  
                    /* 0x140c0  198  ?GetMFTStartLcn@CNtfsMFT@@QEAA_JXZ */
  if (*(int *)(this + 0xec) != 0) {
    lVar1 = FUN_18000e160(*(longlong *)(this + 0xf0));
    return lVar1;
  }
  if (*(int *)(this + 0x68) < 1) {
    return -1;
  }
  return **(__int64 **)(this + 0x60);
}




/* public: int __cdecl CNtfsMFT::GetMftRunList(class CNtfsRunList & __ptr64) __ptr64 */

int __thiscall CNtfsMFT::GetMftRunList(CNtfsMFT *this,CNtfsRunList *param_1)

{
                    /* 0x140f0  203  ?GetMftRunList@CNtfsMFT@@QEAAHAEAVCNtfsRunList@@@Z */
  MyTemplate::
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
  operator=((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)param_1,
            (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)(this + 0x60));
  return 1;
}




/* public: virtual int __cdecl CNtfsMFT::InitMFT(class CNtfsVolume & __ptr64,int,__int64) __ptr64 */

int __thiscall CNtfsMFT::InitMFT(CNtfsMFT *this,CNtfsVolume *param_1,int param_2,__int64 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  CNtfsFileRecordAttribute *this_00;
  undefined8 uVar9;
  CNtfsRunList *pCVar10;
  CNtfsFileRecord *pCVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong local_158;
  longlong local_150;
  uint local_148;
  CNtfsFileRecordAttribute *local_130;
  undefined8 local_128;
  CNtfsMFT local_118 [256];
  
                    /* 0x14110  241  ?InitMFT@CNtfsMFT@@UEAAHAEAVCNtfsVolume@@H_J@Z */
  local_128 = 0xfffffffffffffffe;
  CNtfsVolume::operator=((CNtfsVolume *)(this + 8),param_1);
  uVar7 = 0;
  uVar8 = uVar7;
  if (*(longlong *)(this + 0x60) != 0) {
    for (; (int)uVar8 < *(int *)(this + 0x68); uVar8 = (ulonglong)((int)uVar8 + 1)) {
    }
    free(*(void **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  lVar13 = (longlong)*(int *)(this + 0x20);
  if (*(int *)(this + 0x20) < 1) {
    GetLastError();
    FUN_180008d10("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfsmft.cpp",0x7c,0);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x28);
    if (iVar3 < 1) {
      GetLastError();
      FUN_180008d10("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfsmft.cpp",0x7f,0)
      ;
      iVar3 = 0;
    }
    else {
      iVar1 = *(int *)(this + 0x24);
      local_158 = CONCAT44(local_158._4_4_,iVar1);
      if (iVar1 < 1) {
        GetLastError();
        FUN_180008d10("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfsmft.cpp",0x82,
                      0);
        iVar3 = 0;
      }
      else {
        *(undefined8 *)(this + 0xe0) = 0;
        *(undefined4 *)(this + 0xe8) = 0;
        (**(code **)(*(longlong *)(this + 0x78) + 0x30))(this + 0x78);
        (**(code **)(*(longlong *)(this + 0x78) + 0x28))
                  (this + 0x78,*(undefined4 *)(param_1 + 0x38));
        uVar12 = 0;
        uVar9 = 0;
        CHardDriveIO::SetLdmVolumeAsDisk
                  ((CHardDriveIO *)(this + 0x78),*(ILdmVolume **)(param_1 + 0x48),0,0);
        if (param_2 == 0) {
          if (*(longlong *)(this + 0x10) == -1) {
            lVar5 = -1;
          }
          else {
            lVar5 = (longlong)*(int *)(this + 0x24) * *(longlong *)(this + 0x10) +
                    *(longlong *)(this + 0x38);
          }
          if (param_3 != -1) {
            lVar5 = param_3;
          }
          lVar5 = lVar13 * lVar5;
          iVar4 = __InitMftRunList(this,lVar5);
          if (iVar4 == 0) {
            FUN_180008d10("call __InitMftRunList failed!\n",lVar5,uVar9,uVar12);
            uVar8 = *(ulonglong *)(this + 0xf0);
            if (*(ulonglong *)(this + 0xf0) == 0) {
              pvVar6 = operator_new(0x101c8);
              if (pvVar6 != (void *)0x0) {
                uVar7 = FUN_18000c480((longlong)pvVar6);
              }
              *(ulonglong *)(this + 0xf0) = uVar7;
              uVar8 = uVar7;
            }
            uVar9 = FUN_18000e950(uVar8,param_1);
            if ((int)uVar9 == 0) {
              GetLastError();
              FUN_180008d10("file: %s, line: %d, error = 0x%I64x, lasterror = 0x%x \n",
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfsmft.cpp"
                            ,0xda,0);
              return 0;
            }
            *(undefined4 *)(this + 0xec) = 1;
            *(undefined4 *)(this + 0xd8) = 1;
            return 1;
          }
        }
        else {
          if (*(longlong *)(this + 0x18) == -1) {
            lVar5 = -1;
          }
          else {
            lVar5 = (longlong)*(int *)(this + 0x24) * *(longlong *)(this + 0x18) +
                    *(longlong *)(this + 0x38);
          }
          lVar5 = lVar13 * lVar5 + (longlong)iVar3;
          iVar4 = __InitMftRunList(this,lVar5);
          if (iVar4 == 0) {
            FUN_180008d10("InitMFTMirror::call __InitMftRunList failed!\n",lVar5,uVar9,uVar12);
          }
          CNtfsMFT(local_118);
          uVar12 = 0xffffffffffffffff;
          InitMFT(local_118,param_1,0,-1);
          CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_150);
          pCVar11 = (CNtfsFileRecord *)&local_150;
          uVar9 = 1;
          iVar4 = ReadFileRecord(local_118,1,pCVar11);
          if (iVar4 == 0) {
            FUN_180008d10("InitMFTMirror::call ReadFileRecord failed!\n",uVar9,pCVar11,uVar12);
            CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_150);
            ~CNtfsMFT(local_118);
            return 0;
          }
          pCVar10 = (CNtfsRunList *)(ulonglong)local_148;
          this_00 = local_130;
          while (iVar4 = (int)uVar7, iVar4 < (int)local_148) {
            if (-1 < iVar4) {
              this_00 = (CNtfsFileRecordAttribute *)((longlong)iVar4 * 0x10 + local_150);
              local_130 = this_00;
            }
            piVar2 = *(int **)this_00;
            if ((*piVar2 == 0x80) && (*(char *)((longlong)piVar2 + 9) == '\0')) {
              if ((char)piVar2[2] == '\0') {
                FUN_180008d10("$MFTMirror::$DATA is resident!\n",pCVar10,local_150,uVar12);
                CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_150);
                ~CNtfsMFT(local_118);
                return 0;
              }
              pCVar10 = (CNtfsRunList *)(this + 0x60);
              iVar4 = CNtfsFileRecordAttribute::GetDataRunList(this_00,pCVar10);
              if (iVar4 == 0) {
                FUN_180008d10("Failed to get the runlist of $MFTMirror::$DATA!\n",pCVar10,local_150,
                              uVar12);
                CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_150);
                ~CNtfsMFT(local_118);
                return 0;
              }
              break;
            }
            uVar7 = (ulonglong)(iVar4 + 1);
          }
          if (*(int *)(this + 0x68) == 0) {
            FUN_180008d10("Cannot get the runlist of $MFTMirror::$DATA!\n",pCVar10,local_150,uVar12)
            ;
            CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_150);
            ~CNtfsMFT(local_118);
            return 0;
          }
          CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_150);
          ~CNtfsMFT(local_118);
        }
        iVar4 = *(int *)(this + 0x68) + -1;
        if ((-1 < iVar4) && (iVar4 < *(int *)(this + 0x68))) {
          local_158 = *(longlong *)(this + 0x60) + (longlong)iVar4 * 0x18;
        }
        *(longlong *)(this + 0x70) =
             ((*(longlong *)(local_158 + 0x10) + *(longlong *)(local_158 + 8)) * (longlong)iVar1 *
             lVar13) / (longlong)iVar3;
        *(undefined4 *)(this + 0xd8) = 1;
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}




/* public: virtual int __cdecl CNtfsMFT::ReadFileRecord(__int64,class CNtfsFileRecord & __ptr64)
   __ptr64 */

int __thiscall CNtfsMFT::ReadFileRecord(CNtfsMFT *this,__int64 param_1,CNtfsFileRecord *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *local_58;
  
                    /* 0x14570  267  ?ReadFileRecord@CNtfsMFT@@UEAAH_JAEAVCNtfsFileRecord@@@Z */
  if (*(int *)(this + 0xec) != 0) {
    uVar5 = FUN_18000dc10(*(longlong *)(this + 0xf0),param_1,param_2);
    return (int)uVar5;
  }
  iVar3 = *(int *)(this + 0x28);
  uVar15 = (ulonglong)iVar3;
  if ((-1 < param_1) && (param_1 <= *(longlong *)(this + 0x70))) {
    lVar19 = *(longlong *)(this + 0xe0);
    if ((param_1 < lVar19) || (*(int *)(this + 0xe8) + lVar19 <= param_1)) {
      if (0 < iVar3) {
        iVar1 = *(int *)(this + 0x20);
        lVar19 = (longlong)iVar1;
        if ((0 < iVar1) && (lVar17 = (longlong)*(int *)(this + 0x24), 0 < lVar17)) {
          uVar13 = 0;
          iVar12 = 0;
          lVar6 = (longlong)(uVar15 * param_1 - (longlong)(uVar15 * param_1) % lVar19) /
                  (longlong)uVar15;
          lVar18 = *(longlong *)(this + 0x70) - lVar6;
          lVar7 = (longlong)(uVar15 * lVar6) / lVar19;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar15;
          lVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10000)) / auVar2,0);
          if (lVar18 < lVar8) {
            lVar8 = lVar18;
          }
          lVar19 = (longlong)(lVar8 * uVar15) / lVar19;
          uVar15 = uVar13;
          uVar20 = uVar13;
          if (0 < *(int *)(this + 0x68)) {
            do {
              iVar14 = (int)uVar15;
              if ((-1 < iVar14) && (iVar14 < *(int *)(this + 0x68))) {
                local_58 = (longlong *)(*(longlong *)(this + 0x60) + (longlong)iVar14 * 0x18);
              }
              lVar8 = local_58[2] * lVar17;
              if (((longlong)uVar13 <= lVar7) && (lVar7 < (longlong)(lVar8 + uVar13))) {
                iVar12 = (int)uVar20;
                lVar10 = (lVar8 - lVar7) + uVar13;
                lVar18 = lVar19 - iVar12;
                if (iVar12 + lVar10 <= lVar19) {
                  lVar18 = lVar10;
                }
                lVar16 = ((*local_58 * lVar17 + *(longlong *)(this + 0x38)) - uVar13) + lVar7;
                lVar11 = (longlong)&s_u8FileRecordCache + (longlong)(iVar12 * iVar1);
                lVar10 = lVar18;
                iVar4 = (**(code **)(*(longlong *)(this + 0x78) + 0x10))();
                if (iVar4 == 0) {
                  FUN_180008d10("call m_DriveIo.ReadSector() in CNtfsMFT::ReadFileRecord() failed!\n"
                                ,lVar11,lVar16,lVar10);
                  return 0;
                }
                uVar20 = (ulonglong)(uint)(iVar12 + (int)lVar18);
                lVar7 = lVar7 + (int)lVar18;
              }
              iVar12 = (int)uVar20;
              if (lVar19 <= iVar12) break;
              uVar13 = uVar13 + lVar8;
              uVar15 = (ulonglong)(iVar14 + 1U);
            } while ((int)(iVar14 + 1U) < *(int *)(this + 0x68));
          }
          *(longlong *)(this + 0xe0) = lVar6;
          *(int *)(this + 0xe8) = (iVar12 * iVar1) / iVar3;
          iVar3 = (**(code **)(*(longlong *)this + 0x10))(this,param_1,param_2);
          return iVar3;
        }
      }
    }
    else {
      puVar9 = (uchar *)((longlong)&s_u8FileRecordCache +
                        (longlong)(((int)param_1 - (int)lVar19) * iVar3));
      iVar3 = CNtfsFileRecord::InitFromSourceFileRecord(param_2,puVar9,iVar3);
      if (iVar3 != 0) {
        return 1;
      }
      FUN_180008d10("call fileRecord.InitFromSourceFileRecord() in CNtfsMFT::ReadFileRecord() failed!\n"
                    ,puVar9,uVar15,param_2);
    }
  }
  return 0;
}




/* public: virtual int __cdecl CNtfsMFT::WriteFileRecord(__int64,class CNtfsFileRecord & __ptr64)
   __ptr64 */

int __thiscall CNtfsMFT::WriteFileRecord(CNtfsMFT *this,__int64 param_1,CNtfsFileRecord *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CNtfsFileRecord *pCVar5;
  longlong lVar7;
  uchar *puVar8;
  char *pcVar9;
  long *plVar10;
  uchar *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int local_res20 [2];
  longlong local_a8;
  uchar *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  CNtfsFileRecord local_58 [32];
  undefined8 uVar6;
  
                    /* 0x14810  305  ?WriteFileRecord@CNtfsMFT@@UEAAH_JAEAVCNtfsFileRecord@@@Z */
  local_60 = 0xfffffffffffffffe;
  if (*(int *)(this + 0xec) == 0) {
    iVar2 = *(int *)(this + 0x20);
    local_80 = (longlong)iVar2;
    if (0 < iVar2) {
      iVar13 = *(int *)(this + 0x28);
      lVar14 = (longlong)iVar13;
      if ((0 < iVar13) && (lVar17 = (longlong)*(int *)(this + 0x24), 0 < lVar17)) {
        local_68 = (lVar14 * param_1) % local_80;
        lVar7 = (((lVar14 * param_1 - local_68) / lVar14) * lVar14) / local_80;
        lVar18 = 0;
        iVar3 = 0;
        iVar1 = 0;
        local_a8 = 1;
        if (iVar2 < iVar13) {
          local_a8 = (longlong)(iVar13 / iVar2);
        }
        plVar10 = local_res20;
        local_78 = lVar17;
        local_70 = lVar14;
        puVar8 = CNtfsFileRecord::Convert2SourceFileRecord(param_2,plVar10);
        if (puVar8 != (uchar *)0x0) {
          local_a0 = (uchar *)0x0;
          uStack_98 = 0;
          local_90 = 0;
          FUN_18000c1d0((longlong *)&local_a0,local_80 * local_a8);
          iVar13 = 0;
          if (0 < *(int *)(this + 0x68)) {
            do {
              if ((-1 < iVar13) && (iVar13 < *(int *)(this + 0x68))) {
                local_88 = (longlong *)(*(longlong *)(this + 0x60) + (longlong)iVar13 * 0x18);
              }
              lVar14 = local_88[2] * lVar17;
              if ((lVar18 <= lVar7) && (lVar7 < lVar14 + lVar18)) {
                lVar12 = (lVar14 - lVar7) + lVar18;
                if (local_a8 - iVar3 < lVar12) {
                  lVar12 = local_a8 - iVar3;
                }
                lVar17 = *local_88 * local_78 + *(longlong *)(this + 0x38) + (lVar7 - lVar18);
                if (local_70 < local_80) {
                  lVar16 = 1;
                  puVar11 = local_a0;
                  lVar15 = lVar17;
                  iVar3 = (**(code **)(*(longlong *)(this + 0x78) + 0x10))();
                  if (iVar3 != 0) {
                    memcpy(local_a0 + (int)local_68,puVar8,(longlong)local_res20[0]);
                    lVar16 = 1;
                    puVar11 = local_a0;
                    iVar4 = (**(code **)(*(longlong *)(this + 0x78) + 0x18))(this + 0x78);
                    lVar15 = lVar17;
                    lVar17 = local_78;
                    goto joined_r0x000180014a67;
                  }
                  pcVar9 = "call m_DriveIo.ReadSector() in CNtfsMFT::WriteFileRecord() failed!\n";
                }
                else {
                  puVar11 = puVar8 + iVar3 * iVar2;
                  lVar16 = lVar12;
                  iVar4 = (**(code **)(*(longlong *)(this + 0x78) + 0x18))();
                  lVar15 = lVar17;
                  iVar1 = iVar3;
                  lVar17 = local_78;
joined_r0x000180014a67:
                  local_78 = lVar17;
                  if (iVar4 != 0) {
                    lVar7 = lVar7 + lVar12;
                    iVar3 = iVar1 + (int)lVar12;
                    iVar1 = iVar3;
                    goto LAB_180014a80;
                  }
                  pcVar9 = "call m_DriveIo.WriteSector() in CNtfsMFT::WriteFileRecord() failed!\n";
                }
                FUN_180008d10(pcVar9,puVar11,lVar15,lVar16);
                free(puVar8);
                iVar2 = 0;
                goto LAB_180014aab;
              }
LAB_180014a80:
              if (local_a8 <= iVar3) break;
              lVar18 = lVar18 + lVar14;
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(this + 0x68));
          }
          iVar2 = 1;
          free(puVar8);
LAB_180014aab:
          if (local_a0 == (uchar *)0x0) {
            return iVar2;
          }
          puVar8 = local_a0;
          if ((0xfff < (ulonglong)(local_90 - (longlong)local_a0)) &&
             (puVar8 = *(uchar **)(local_a0 + -8),
             (uchar *)0x1f < local_a0 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(puVar8);
          return iVar2;
        }
        FUN_180008d10("call fileRecord.Convert2SourceFileRecord() in CNtfsMFT::WriteFileRecord() failed!\n"
                      ,plVar10,lVar14,param_2);
      }
    }
    iVar2 = 0;
  }
  else {
    pCVar5 = (CNtfsFileRecord *)CNtfsFileRecord::CNtfsFileRecord(local_58,param_2);
    uVar6 = FUN_18000f290(*(longlong *)(this + 0xf0),param_1,pCVar5,param_2);
    iVar2 = (int)uVar6;
  }
  return iVar2;
}




/* protected: int __cdecl CNtfsMFT::__InitMftRunList(__int64) __ptr64 */

int __thiscall CNtfsMFT::__InitMftRunList(CNtfsMFT *this,__int64 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  CNtfsRunList *pCVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  CNtfsFileRecordAttribute *local_res8;
  undefined8 uVar11;
  TBuffer local_60 [16];
  longlong local_50;
  uint local_48;
  
                    /* 0x14b40  307  ?__InitMftRunList@CNtfsMFT@@IEAAH_J@Z */
  uVar11 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(this + 0x20);
  if (((int)uVar1 < 1) || (uVar2 = *(uint *)(this + 0x28), (int)uVar2 < 1)) {
    return 0;
  }
  TBuffer::TBuffer(local_60);
  uVar3 = uVar2;
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = uVar1;
  }
  pvVar6 = TBuffer::Malloc(local_60,uVar3);
  if (pvVar6 != (void *)0x0) {
    lVar10 = (longlong)((int)uVar3 / (int)uVar1);
    iVar4 = (**(code **)(*(longlong *)(this + 0x78) + 0x10))
                      (this + 0x78,pvVar6,param_1 / (longlong)(int)uVar1,lVar10,uVar11);
    if (iVar4 != 0) {
      CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)&local_50);
      pCVar7 = (CNtfsRunList *)((longlong)pvVar6 + param_1 % (longlong)(int)uVar1);
      uVar9 = (ulonglong)uVar2;
      iVar5 = CNtfsFileRecord::InitFromSourceFileRecord
                        ((CNtfsFileRecord *)&local_50,(uchar *)pCVar7,uVar2);
      iVar8 = 0;
      iVar4 = 0;
      if (iVar5 == 0) {
        FUN_180008d10("Call InitFromSourceFileRecord for $MFT failed!\n",pCVar7,uVar9,lVar10);
        iVar4 = iVar8;
      }
      else {
        iVar5 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)&local_50);
        if (iVar5 == 0) {
          uVar9 = (ulonglong)local_48;
          iVar5 = iVar8;
          if (0 < (int)local_48) {
            do {
              if ((-1 < iVar5) && (iVar5 < (int)local_48)) {
                local_res8 = (CNtfsFileRecordAttribute *)((longlong)iVar5 * 0x10 + local_50);
              }
              pCVar7 = *(CNtfsRunList **)local_res8;
              if ((*(int *)pCVar7 == 0x80) && (pCVar7[9] == (CNtfsRunList)0x0)) {
                if (pCVar7[8] == (CNtfsRunList)0x0) {
                  FUN_180008d10("$MFT::$DATA is resident!\n",pCVar7,uVar9,local_50);
                  goto LAB_180014cb0;
                }
                pCVar7 = (CNtfsRunList *)(this + 0x60);
                iVar5 = CNtfsFileRecordAttribute::GetDataRunList(local_res8,pCVar7);
                lVar10 = local_50;
                if (iVar5 == 0) {
                  FUN_180008d10("Failed to get the runlist of $MFT::$DATA!\n",pCVar7,uVar9,local_50)
                  ;
                  goto LAB_180014cb0;
                }
                break;
              }
              iVar5 = iVar5 + 1;
              lVar10 = local_50;
            } while (iVar5 < (int)local_48);
          }
          if (*(int *)(this + 0x68) == 0) {
            FUN_180008d10("Cannot get the runlist of $MFT::$DATA!\n",pCVar7,uVar9,lVar10);
            iVar4 = iVar8;
          }
          else {
            iVar4 = 1;
          }
        }
        else {
          FUN_180008d10("$MFT has 0x20 attribute!\n",pCVar7,uVar9,lVar10);
          iVar4 = iVar8;
        }
      }
LAB_180014cb0:
      CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)&local_50);
      goto LAB_180014cbe;
    }
  }
  iVar4 = 0;
LAB_180014cbe:
  TBuffer::~TBuffer(local_60);
  return iVar4;
}




/* public: __cdecl CNtfsMultiFileRecord::CNtfsMultiFileRecord(void) __ptr64 */

CNtfsMultiFileRecord * __thiscall
CNtfsMultiFileRecord::CNtfsMultiFileRecord(CNtfsMultiFileRecord *this)

{
                    /* 0x14cf0  22  ??0CNtfsMultiFileRecord@@QEAA@XZ */
  *(undefined ***)this = vftable;
  CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)(this + 0x10));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  CNtfsAttributeList::CNtfsAttributeList((CNtfsAttributeList *)(this + 0x40));
  return this;
}




/* public: virtual __cdecl CNtfsMultiFileRecord::~CNtfsMultiFileRecord(void) __ptr64 */

void __thiscall CNtfsMultiFileRecord::~CNtfsMultiFileRecord(CNtfsMultiFileRecord *this)

{
                    /* 0x14d40  59  ??1CNtfsMultiFileRecord@@UEAA@XZ */
  *(undefined ***)this = vftable;
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::RemoveAll((CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
               *)(this + 0x30));
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::RemoveAll((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)(this + 0x40));
  CNtfsAttributeList::~CNtfsAttributeList((CNtfsAttributeList *)(this + 0x40));
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::RemoveAll((CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
               *)(this + 0x30));
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(this + 0x10));
  return;
}




/* public: int __cdecl CNtfsMultiFileRecord::Convert2AttributeArray(class
   MyTemplate::CSimpleArray<class CNtfsFileRecordAttribute,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsFileRecordAttribute> > & __ptr64) __ptr64 */

int __thiscall
CNtfsMultiFileRecord::Convert2AttributeArray
          (CNtfsMultiFileRecord *this,
          CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
          *param_1)

{
  bool bVar1;
  int iVar2;
  void *_Dst;
  CNtfsFileRecordAttribute *this_00;
  int iVar3;
  int *piVar4;
  CNtfsFileRecordAttribute *pCVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  int *local_70 [2];
  CNtfsRunList local_60 [16];
  CNtfsRunList local_50 [24];
  
                    /* 0x14dc0  138
                       ?Convert2AttributeArray@CNtfsMultiFileRecord@@QEAAHAEAV?$CSimpleArray@VCNtfsFileRecordAttribute@@V?$CSimpleArrayEqualHelper@VCNtfsFileRecordAttribute@@@MyTemplate@@@MyTemplate@@@Z
                        */
  iVar7 = *(int *)(this + 0x48);
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::RemoveAll(param_1);
  piVar4 = (int *)0x0;
  if (iVar7 == 0) {
    if (0 < *(int *)(this + 0x18)) {
      pCVar5 = (CNtfsFileRecordAttribute *)CONCAT44(uStackX_c,local_res8);
      do {
        iVar7 = (int)piVar4;
        if ((-1 < iVar7) && (iVar7 < *(int *)(this + 0x18))) {
          pCVar5 = (CNtfsFileRecordAttribute *)((longlong)iVar7 * 0x10 + *(longlong *)(this + 0x10))
          ;
        }
        if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
          if (*(int *)(param_1 + 0xc) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = *(int *)(param_1 + 8) * 2;
          }
          _Dst = malloc((longlong)iVar3 << 4);
          if (_Dst != (void *)0x0) {
            if (*(void **)param_1 != (void *)0x0) {
              memcpy(_Dst,*(void **)param_1,(longlong)*(int *)(param_1 + 0xc) << 4);
              free(*(void **)param_1);
            }
            *(int *)(param_1 + 0xc) = iVar3;
            *(void **)param_1 = _Dst;
            goto LAB_180014e76;
          }
        }
        else {
LAB_180014e76:
          this_00 = (CNtfsFileRecordAttribute *)
                    ((longlong)*(int *)(param_1 + 8) * 0x10 + *(longlong *)param_1);
          if (this_00 != (CNtfsFileRecordAttribute *)0x0) {
            CNtfsFileRecordAttribute::CNtfsFileRecordAttribute(this_00,pCVar5);
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        piVar4 = (int *)(ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < *(int *)(this + 0x18));
    }
  }
  else if (0 < iVar7) {
    piVar6 = (int *)CONCAT44(uStackX_c,local_res8);
    pCVar5 = (CNtfsFileRecordAttribute *)CONCAT44(uStackX_c,local_res8);
    piVar8 = piVar4;
    do {
      iVar3 = (int)piVar4;
      if ((-1 < iVar3) && (iVar3 < *(int *)(this + 0x48))) {
        piVar6 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)(this + 0x40));
      }
      if (*piVar6 != 0x20) {
        CNtfsFileRecordAttribute::CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
        iVar2 = GetAttribute(this,local_70,*(undefined8 *)(piVar6 + 4),*piVar6,(short)piVar6[6]);
        if (iVar2 == 0) {
          CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
          return 0;
        }
        if ((((piVar8 == (int *)0x0) ||
             (bVar1 = CNtfsString::operator==
                                ((CNtfsString *)(piVar8 + 8),(CNtfsString *)(piVar6 + 8)), !bVar1))
            || (*piVar8 != *piVar6)) || (((char)local_70[0][2] == '\0' || (*local_70[0] == 0x30))))
        {
LAB_180014ff0:
          MyTemplate::
          CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
          ::Add(param_1,(CNtfsFileRecordAttribute *)local_70);
        }
        else {
          iVar2 = *(int *)(param_1 + 8) + -1;
          if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 8))) {
            pCVar5 = (CNtfsFileRecordAttribute *)((longlong)iVar2 * 0x10 + *(longlong *)param_1);
          }
          if (*(char *)(*(longlong *)pCVar5 + 8) == '\0') goto LAB_180014ff0;
          CNtfsRunList::CNtfsRunList(local_60);
          CNtfsRunList::CNtfsRunList(local_50);
          CNtfsFileRecordAttribute::GetDataRunList(pCVar5,local_60);
          CNtfsFileRecordAttribute::GetDataRunList((CNtfsFileRecordAttribute *)local_70,local_50);
          CNtfsRunList::Append(local_60,local_50);
          CNtfsFileRecordAttribute::SetDataRunList(pCVar5,local_60);
          CNtfsRunList::~CNtfsRunList(local_50);
          CNtfsRunList::~CNtfsRunList(local_60);
        }
        CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)local_70);
        piVar8 = piVar6;
      }
      piVar4 = (int *)(ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < iVar7);
  }
  return 1;
}




/* protected: int __cdecl CNtfsMultiFileRecord::GetAttribute(class CNtfsFileRecordAttribute &
   __ptr64,struct tagFILEREF,unsigned long,unsigned long) __ptr64 */

int __thiscall
CNtfsMultiFileRecord::GetAttribute
          (CNtfsMultiFileRecord *this,CNtfsFileRecordAttribute *param_1,ulonglong param_3,
          int param_4,uint param_5)

{
  int iVar1;
  CNtfsFileRecordAttribute *pCVar2;
  int iVar3;
  CNtfsMultiFileRecord *pCVar4;
  CNtfsMultiFileRecord *pCVar5;
  CNtfsMultiFileRecord *pCVar6;
  CNtfsFileRecordAttribute *local_res8;
  
                    /* 0x15040  161
                       ?GetAttribute@CNtfsMultiFileRecord@@IEAAHAEAVCNtfsFileRecordAttribute@@UtagFILEREF@@KK@Z
                        */
  iVar1 = *(int *)(this + 0x38);
  pCVar6 = (CNtfsMultiFileRecord *)0x0;
  pCVar5 = this + 0x10;
  if ((longlong)*(int *)(this + 8) != (param_3 & 0xffffffffffff)) {
    pCVar5 = pCVar6;
  }
  pCVar2 = local_res8;
  pCVar4 = pCVar6;
  if (iVar1 < 1) {
LAB_1800150d5:
    if ((pCVar5 != (CNtfsMultiFileRecord *)0x0) && (iVar1 = *(int *)(pCVar5 + 8), 0 < iVar1)) {
      do {
        iVar3 = (int)pCVar6;
        if ((-1 < iVar3) && (iVar3 < iVar1)) {
          local_res8 = (CNtfsFileRecordAttribute *)((longlong)iVar3 * 0x10 + *(longlong *)pCVar5);
        }
        if ((**(int **)local_res8 == param_4) &&
           (*(ushort *)((longlong)*(int **)local_res8 + 0xe) == param_5)) {
          CNtfsFileRecordAttribute::operator=(param_1,local_res8);
          return 1;
        }
        pCVar6 = (CNtfsMultiFileRecord *)(ulonglong)(iVar3 + 1U);
      } while ((int)(iVar3 + 1U) < iVar1);
    }
  }
  else {
    do {
      if (pCVar5 != (CNtfsMultiFileRecord *)0x0) goto LAB_1800150d5;
      iVar3 = (int)pCVar4;
      if ((-1 < iVar3) && (iVar3 < iVar1)) {
        pCVar2 = (CNtfsFileRecordAttribute *)(*(longlong *)(this + 0x30) + (longlong)iVar3 * 0x28);
      }
      if ((longlong)*(int *)pCVar2 == (param_3 & 0xffffffffffff)) {
        pCVar5 = (CNtfsMultiFileRecord *)(pCVar2 + 8);
        goto LAB_1800150d5;
      }
      pCVar4 = (CNtfsMultiFileRecord *)(ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < iVar1);
  }
  return 0;
}




/* public: int __cdecl CNtfsMultiFileRecord::Initiate(class CNtfsMFT & __ptr64,long) __ptr64 */

int __thiscall
CNtfsMultiFileRecord::Initiate(CNtfsMultiFileRecord *this,CNtfsMFT *param_1,long param_2)

{
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  *this_00;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  CNtfsFileRecordAttribute *pCVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  CNtfsMFT *pCVar10;
  CNtfsMFT *pCVar11;
  uchar *local_res8;
  CNtfsFileRecord local_68 [40];
  
                    /* 0x15130  242  ?Initiate@CNtfsMultiFileRecord@@QEAAHAEAVCNtfsMFT@@J@Z */
  this_00 = (CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
             *)(this + 0x30);
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::RemoveAll(this_00);
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::RemoveAll((CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               *)(this + 0x40));
  *(long *)(this + 8) = param_2;
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2);
  if (iVar3 != 0) {
    iVar3 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)(this + 0x10));
    if (iVar3 == 0) {
      return 1;
    }
    local_res8 = (uchar *)0x0;
    lVar7 = 0;
    iVar3 = 0;
    pCVar6 = (CNtfsFileRecordAttribute *)param_1;
    if (0 < *(int *)(this + 0x18)) {
      do {
        if ((-1 < iVar3) && (iVar3 < *(int *)(this + 0x18))) {
          pCVar6 = (CNtfsFileRecordAttribute *)((longlong)iVar3 * 0x10 + *(longlong *)(this + 0x10))
          ;
        }
        piVar1 = *(int **)pCVar6;
        if (*piVar1 == 0x20) {
          if ((char)piVar1[2] == '\0') {
            iVar3 = piVar1[4];
          }
          else {
            iVar3 = (int)*(undefined8 *)(piVar1 + 10);
          }
          local_res8 = (uchar *)operator_new((longlong)iVar3);
          if (local_res8 == (uchar *)0x0) {
            return 0;
          }
          iVar3 = CNtfsMFT::GetDataFromAttribute(param_1,pCVar6,local_res8,iVar3);
          if (iVar3 == 0) goto LAB_1800152cc;
          lVar2 = *(longlong *)pCVar6;
          if (*(char *)(lVar2 + 8) == '\0') {
            lVar7 = *(long *)(lVar2 + 0x10);
          }
          else {
            lVar7 = (long)*(undefined8 *)(lVar2 + 0x30);
          }
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x18));
    }
    iVar3 = CNtfsAttributeList::InitFromAttributeListData
                      ((CNtfsAttributeList *)(this + 0x40),local_res8,lVar7);
    if (iVar3 != 0) {
      iVar3 = 0;
      iVar9 = 1;
      pCVar10 = param_1;
      pCVar11 = param_1;
      if (0 < *(int *)(this + 0x48)) {
        do {
          if ((-1 < iVar3) && (iVar3 < *(int *)(this + 0x48))) {
            pCVar10 = (CNtfsMFT *)((longlong)iVar3 * 0x30 + *(longlong *)(this + 0x40));
          }
          iVar4 = 0;
          iVar8 = 0;
          if (0 < *(int *)(this + 0x38)) {
            do {
              if ((-1 < iVar4) && (iVar4 < *(int *)(this + 0x38))) {
                pCVar11 = (CNtfsMFT *)(*(longlong *)this_00 + (longlong)iVar4 * 0x28);
              }
              iVar8 = iVar9;
            } while (((longlong)*(int *)pCVar11 != (*(ulonglong *)(pCVar10 + 0x10) & 0xffffffffffff)
                     ) && (iVar4 = iVar4 + 1, iVar8 = 0, iVar4 < *(int *)(this + 0x38)));
          }
          if ((longlong)*(int *)(this + 8) == (*(ulonglong *)(pCVar10 + 0x10) & 0xffffffffffff)) {
            iVar8 = iVar9;
          }
          if (iVar8 == 0) {
            CNtfsFileRecord::CNtfsFileRecord(local_68);
            iVar8 = *(int *)(pCVar10 + 0x10);
            iVar4 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)iVar8,local_68);
            if (iVar4 == 0) {
              free(local_res8);
              CNtfsFileRecord::~CNtfsFileRecord(local_68);
              return 0;
            }
            iVar4 = *(int *)(this + 0x38);
            if (iVar4 == *(int *)(this + 0x3c)) {
              iVar5 = iVar9;
              if (*(int *)(this + 0x3c) != 0) {
                iVar5 = iVar4 * 2;
              }
              _Dst = malloc((longlong)iVar5 * 0x28);
              if (_Dst != (void *)0x0) {
                if (*(void **)this_00 != (void *)0x0) {
                  memcpy(_Dst,*(void **)this_00,(longlong)*(int *)(this + 0x3c) * 0x28);
                  free(*(void **)this_00);
                }
                *(int *)(this + 0x3c) = iVar5;
                *(void **)this_00 = _Dst;
                iVar4 = *(int *)(this + 0x38);
                goto LAB_1800153a4;
              }
            }
            else {
LAB_1800153a4:
              piVar1 = (int *)(*(longlong *)this_00 + (longlong)iVar4 * 0x28);
              if (piVar1 != (int *)0x0) {
                *piVar1 = iVar8;
                CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)(piVar1 + 2),local_68);
              }
              *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
            }
            CNtfsFileRecord::~CNtfsFileRecord(local_68);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(this + 0x48));
      }
      free(local_res8);
      return 1;
    }
LAB_1800152cc:
    free(local_res8);
  }
  return 0;
}




/* public: int __cdecl CNtfsMultiFileRecord::IsMultiFileRecord(void) __ptr64 */

int __thiscall CNtfsMultiFileRecord::IsMultiFileRecord(CNtfsMultiFileRecord *this)

{
  int iVar1;
  
                    /* 0x15450  254  ?IsMultiFileRecord@CNtfsMultiFileRecord@@QEAAHXZ */
  iVar1 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)(this + 0x10));
  if ((iVar1 != 0) && (0 < *(int *)(this + 0x38))) {
    return 1;
  }
  return 0;
}




/* public: int __cdecl MyTemplate::CSimpleArray<class CNtfsRunList,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsRunList> >::Add(class CNtfsRunList const &
   __ptr64) __ptr64 */

int __thiscall
MyTemplate::
CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>::Add
          (CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>
           *this,CNtfsRunList *param_1)

{
  int iVar1;
  void *_Dst;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *this_00;
  int iVar2;
  
                    /* 0x15480  127
                       ?Add@?$CSimpleArray@VCNtfsRunList@@V?$CSimpleArrayEqualHelper@VCNtfsRunList@@@MyTemplate@@@MyTemplate@@QEAAHAEBVCNtfsRunList@@@Z
                        */
  iVar1 = *(int *)(this + 8);
  if (iVar1 == *(int *)(this + 0xc)) {
    iVar2 = 1;
    if (*(int *)(this + 0xc) != 0) {
      iVar2 = iVar1 * 2;
    }
    _Dst = malloc((longlong)iVar2 << 4);
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (*(void **)this != (void *)0x0) {
      memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) << 4);
      free(*(void **)this);
    }
    *(int *)(this + 0xc) = iVar2;
    *(void **)this = _Dst;
    iVar1 = *(int *)(this + 8);
  }
  this_00 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)((longlong)iVar1 * 0x10 + *(longlong *)this);
  if (this_00 !=
      (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
       *)0x0) {
    CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
    CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
              (this_00,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                        *)param_1);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}




/* protected: int __cdecl CNtfsRunList::AddSourceDataRun(unsigned char *
   __ptr64,long,__int64,__int64,int,int) __ptr64 */

int __thiscall
CNtfsRunList::AddSourceDataRun
          (CNtfsRunList *this,uchar *param_1,long param_2,__int64 param_3,__int64 param_4,
          int param_5,int param_6)

{
  byte *pbVar1;
  ulonglong uVar2;
  size_t _Size;
  uint uVar3;
  uint uVar4;
  __int64 local_res20;
  
                    /* 0x15540  129  ?AddSourceDataRun@CNtfsRunList@@IEAAHPEAEJ_J1HH@Z */
  uVar3 = 3;
  if ((param_4 & 0xff80000000000000U) == 0) {
    if ((param_4 & 0xff800000000000U) == 0) {
      if ((param_4 & 0xff8000000000U) == 0) {
        if ((param_4 & 0xff80000000U) == 0) {
          if ((param_4 & 0xff800000U) == 0) {
            if ((param_4 & 0xff8000U) == 0) {
              _Size = (size_t)(((param_4 & 0xff80U) != 0) + 1);
            }
            else {
              _Size = 3;
            }
          }
          else {
            _Size = 4;
          }
        }
        else {
          _Size = 5;
        }
      }
      else {
        _Size = 6;
      }
    }
    else {
      _Size = 7;
    }
  }
  else {
    _Size = 8;
  }
  if (param_6 == 0) {
    if (param_3 < 0) {
      uVar2 = -param_3;
      if ((uVar2 & 0xff00000000000000) == 0) {
        if ((uVar2 & 0xff000000000000) == 0) {
          if ((uVar2 & 0xff0000000000) == 0) {
            if ((uVar2 & 0xff00000000) == 0) {
              if ((uVar2 & 0xff000000) == 0) {
                if ((uVar2 & 0xff0000) == 0) {
                  uVar3 = ((uVar2 & 0xff00) != 0) + 1;
                }
              }
              else {
                uVar3 = 4;
              }
            }
            else {
              uVar3 = 5;
            }
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          uVar3 = 7;
        }
      }
      else {
        uVar3 = 8;
      }
      uVar4 = uVar3 + 1;
      if ((param_3 & 0x80L << ((char)uVar3 * '\b' - 8U & 0x3f)) != 0) {
        uVar4 = uVar3;
      }
    }
    else if ((param_3 & 0xff80000000000000U) == 0) {
      if ((param_3 & 0xff800000000000U) == 0) {
        if ((param_3 & 0xff8000000000U) == 0) {
          if ((param_3 & 0xff80000000U) == 0) {
            if ((param_3 & 0xff800000U) == 0) {
              uVar4 = uVar3;
              if ((param_3 & 0xff8000U) == 0) {
                uVar4 = ((param_3 & 0xff80U) != 0) + 1;
              }
            }
            else {
              uVar4 = 4;
            }
          }
          else {
            uVar4 = 5;
          }
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        uVar4 = 7;
      }
    }
    else {
      uVar4 = 8;
    }
  }
  else {
    uVar4 = 0;
  }
  if (param_1 != (uchar *)0x0) {
    pbVar1 = param_1 + param_2;
    *pbVar1 = (char)uVar4 << 4 | (byte)_Size;
    local_res20 = param_3;
    memcpy(pbVar1 + 1,&param_4,_Size);
    memcpy(pbVar1 + ((int)_Size + 1),&local_res20,(ulonglong)uVar4);
  }
  return (int)_Size + 1 + uVar4;
}




/* public: void __cdecl CNtfsRunList::Append(class CNtfsRunList & __ptr64) __ptr64 */

void __thiscall CNtfsRunList::Append(CNtfsRunList *this,CNtfsRunList *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  undefined8 *puVar5;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
                    /* 0x15760  131  ?Append@CNtfsRunList@@QEAAXAEAV1@@Z */
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    puVar5 = (undefined8 *)CONCAT44(uStackX_14,local_res10);
    do {
      if ((-1 < iVar4) && (iVar4 < iVar3)) {
        puVar5 = (undefined8 *)(*(longlong *)param_1 + (longlong)iVar4 * 0x18);
      }
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = *(int *)(this + 8) * 2;
        }
        _Dst = malloc((longlong)iVar3 * 0x18);
        if (_Dst != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar3;
          *(void **)this = _Dst;
          goto LAB_180015805;
        }
      }
      else {
LAB_180015805:
        puVar1 = (undefined8 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          uVar2 = puVar5[1];
          *puVar1 = *puVar5;
          puVar1[1] = uVar2;
          puVar1[2] = puVar5[2];
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(param_1 + 8);
    } while (iVar4 < iVar3);
  }
  return;
}




/* protected: int __cdecl CNtfsRunList::CalculateNumericSize(__int64,int) __ptr64 */

int __thiscall CNtfsRunList::CalculateNumericSize(CNtfsRunList *this,__int64 param_1,int param_2)

{
                    /* 0x15860  132  ?CalculateNumericSize@CNtfsRunList@@IEAAH_JH@Z */
  if (((param_1 & 0xff00000000000000U) != 0) ||
     (((param_1 & 0x80000000000000U) != 0 && (param_2 != 0)))) {
    return 8;
  }
  if (((param_1 & 0xff000000000000U) != 0) || (((param_1 & 0x800000000000U) != 0 && (param_2 != 0)))
     ) {
    return 7;
  }
  if (((param_1 & 0xff0000000000U) != 0) || (((param_1 & 0x8000000000U) != 0 && (param_2 != 0)))) {
    return 6;
  }
  if (((param_1 & 0xff00000000U) == 0) && (((param_1 & 0x80000000U) == 0 || (param_2 == 0)))) {
    if (((param_1 & 0xff000000U) != 0) || (((param_1 & 0x800000U) != 0 && (param_2 != 0)))) {
      return 4;
    }
    if (((param_1 & 0xff0000U) == 0) && (((param_1 & 0x8000U) == 0 || (param_2 == 0)))) {
      if (((param_1 & 0xff00U) == 0) && ((-1 < (char)param_1 || (param_2 == 0)))) {
        return 1;
      }
      return 2;
    }
    return 3;
  }
  return 5;
}




/* public: unsigned char * __ptr64 __cdecl CNtfsRunList::Convert2SourceDataRun(long & __ptr64)
   __ptr64 */

uchar * __thiscall CNtfsRunList::Convert2SourceDataRun(CNtfsRunList *this,long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uchar *_Dst;
  int iVar5;
  ulonglong uVar7;
  longlong lVar8;
  __int64 _Var9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *local_res8;
  ulonglong uVar6;
  
                    /* 0x15970  140  ?Convert2SourceDataRun@CNtfsRunList@@QEAAPEAEAEAJ@Z */
  uVar7 = 0;
  iVar4 = 0;
  *param_1 = 0;
  iVar1 = *(int *)(this + 8);
  uVar6 = uVar7;
  uVar10 = uVar7;
  puVar11 = local_res8;
  iVar2 = iVar4;
  if (0 < iVar1) {
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < iVar1)) {
        puVar11 = (ulonglong *)(*(longlong *)this + (longlong)iVar5 * 0x18);
      }
      uVar6 = *puVar11;
      lVar8 = uVar6 - uVar10;
      if (uVar6 == 0xffffffffffffffff) {
        lVar8 = -1;
      }
      iVar2 = AddSourceDataRun(this,(uchar *)0x0,0,lVar8,puVar11[2],(uint)(iVar5 == 0),
                               (uint)(uVar6 == 0xffffffffffffffff));
      iVar2 = *param_1 + iVar2;
      *param_1 = iVar2;
      iVar1 = *(int *)(this + 8);
      if (uVar6 != 0xffffffffffffffff) {
        uVar10 = uVar6;
      }
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < iVar1);
  }
  uVar3 = iVar2 + 8U & 0xfffffff8;
  *param_1 = uVar3;
  _Dst = (uchar *)operator_new((longlong)(int)uVar3);
  if (_Dst != (uchar *)0x0) {
    memset(_Dst,0,(longlong)*param_1);
    *param_1 = 0;
    iVar1 = *(int *)(this + 8);
    uVar6 = uVar7;
    if (0 < iVar1) {
      do {
        iVar2 = (int)uVar7;
        if ((-1 < iVar2) && (iVar2 < iVar1)) {
          local_res8 = (ulonglong *)(*(longlong *)this + (longlong)iVar2 * 0x18);
        }
        uVar10 = *local_res8;
        _Var9 = uVar10 - uVar6;
        if (uVar10 == 0xffffffffffffffff) {
          _Var9 = -1;
        }
        iVar4 = AddSourceDataRun(this,_Dst,*param_1,_Var9,local_res8[2],(uint)(iVar2 == 0),
                                 (uint)(uVar10 == 0xffffffffffffffff));
        uVar7 = (ulonglong)(iVar2 + 1U);
        iVar4 = *param_1 + iVar4;
        *param_1 = iVar4;
        iVar1 = *(int *)(this + 8);
        if (uVar10 != 0xffffffffffffffff) {
          uVar6 = uVar10;
        }
      } while ((int)(iVar2 + 1U) < iVar1);
    }
    *param_1 = iVar4 + 8U & 0xfffffff8;
  }
  return _Dst;
}




/* public: int __cdecl CNtfsRunList::InitFromSourceDataRun(unsigned char * __ptr64,long) __ptr64 */

int __thiscall CNtfsRunList::InitFromSourceDataRun(CNtfsRunList *this,uchar *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_res20;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  
                    /* 0x15b00  239  ?InitFromSourceDataRun@CNtfsRunList@@QEAAHPEAEJ@Z */
  if ((param_1 == (uchar *)0x0) || (param_2 < 1)) {
LAB_180015d37:
    iVar2 = 0;
  }
  else {
    uVar7 = 0;
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    *(undefined8 *)(this + 8) = 0;
    uVar8 = uVar7;
    uVar10 = uVar7;
    if (0 < param_2) {
      do {
        lVar5 = (longlong)(int)uVar10;
        bVar1 = param_1[lVar5];
        if (bVar1 == 0) break;
        local_58 = 0;
        bVar3 = bVar1 >> 4;
        bVar4 = bVar1 & 0xf;
        local_res20 = 0;
        if ((7 < bVar4) || (7 < bVar3)) goto LAB_180015d37;
        memcpy(&local_58,param_1 + lVar5 + 1,(ulonglong)bVar4);
        memcpy(&local_res20,param_1 + (ulonglong)bVar4 + lVar5 + 1,(ulonglong)bVar3);
        lVar5 = local_58;
        uVar6 = local_res20;
        switch(bVar3) {
        case 1:
          uVar6 = (longlong)(char)local_res20;
          break;
        case 2:
          uVar6 = (longlong)(short)local_res20;
          break;
        case 3:
          if ((local_res20 >> 0x17 & 1) != 0) {
            uVar6 = local_res20 - 0x1000000;
          }
          break;
        case 4:
          uVar6 = (longlong)(int)local_res20;
          break;
        case 5:
          if ((local_res20 & 0x8000000000) != 0) {
            uVar6 = local_res20 - 0x10000000000;
          }
          break;
        case 6:
          if ((local_res20 & 0x800000000000) != 0) {
            uVar6 = local_res20 - 0x1000000000000;
          }
          break;
        case 7:
          if ((local_res20 & 0x80000000000000) != 0) {
            uVar6 = local_res20 + 0xff00000000000000;
          }
        }
        if (bVar1 >> 4 == 0) {
          local_50 = -1;
        }
        else {
          local_50 = uVar6 + uVar7;
        }
        local_40 = local_58;
        local_48 = uVar8;
        MyTemplate::
        CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
        ::Add((CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
               *)this,(tagDataRun *)&local_50);
        uVar7 = uVar7 + uVar6;
        uVar9 = (int)uVar10 + bVar4 + 1 + (uint)bVar3;
        uVar8 = uVar8 + lVar5;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < param_2);
    }
    iVar2 = 1;
  }
  return iVar2;
}




/* public: void __cdecl CNtfsRunList::InsertDataRunRange(long,long) __ptr64 */

void __thiscall CNtfsRunList::InsertDataRunRange(CNtfsRunList *this,long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  CNtfsRunList *_Src;
  ulonglong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* 0x15d70  243  ?InsertDataRunRange@CNtfsRunList@@QEAAXJJ@Z */
  uVar4 = (ulonglong)(uint)param_2;
  iVar2 = *(int *)(this + 8);
  if (0 < param_2) {
    do {
      if (*(int *)(this + 8) == *(int *)(this + 0xc)) {
        if (*(int *)(this + 0xc) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = *(int *)(this + 8) * 2;
        }
        _Dst = malloc((longlong)iVar3 * 0x18);
        if (_Dst != (void *)0x0) {
          if (*(void **)this != (void *)0x0) {
            memcpy(_Dst,*(void **)this,(longlong)*(int *)(this + 0xc) * 0x18);
            free(*(void **)this);
          }
          *(int *)(this + 0xc) = iVar3;
          *(void **)this = _Dst;
          goto LAB_180015dfe;
        }
      }
      else {
LAB_180015dfe:
        puVar1 = (undefined8 *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = local_50;
          puVar1[1] = uStack_48;
          puVar1[2] = local_40;
        }
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (0 < iVar2 - param_1) {
    _Src = this;
    if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
      _Src = (CNtfsRunList *)(*(longlong *)this + (longlong)param_1 * 0x18);
    }
    iVar3 = param_1 + param_2;
    if ((-1 < iVar3) && (iVar3 < *(int *)(this + 8))) {
      this = (CNtfsRunList *)(*(longlong *)this + (longlong)iVar3 * 0x18);
    }
    memmove(this,_Src,(longlong)(iVar2 - param_1) * 0x18);
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<class CNtfsRunList,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsRunList> >::InternalSetAtIndex(int,class
   CNtfsRunList const & __ptr64) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>::
InternalSetAtIndex(CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>
                   *this,int param_1,CNtfsRunList *param_2)

{
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *this_00;
  
                    /* 0x15eb0  249
                       ?InternalSetAtIndex@?$CSimpleArray@VCNtfsRunList@@V?$CSimpleArrayEqualHelper@VCNtfsRunList@@@MyTemplate@@@MyTemplate@@QEAAXHAEBVCNtfsRunList@@@Z
                        */
  this_00 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)((longlong)param_1 * 0x10 + *(longlong *)this);
  if (this_00 !=
      (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
       *)0x0) {
    CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>::
    CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
              (this_00,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                        *)param_2);
  }
  return;
}




/* public: void __cdecl MyTemplate::CSimpleArray<class CNtfsRunList,class
   MyTemplate::CSimpleArrayEqualHelper<class CNtfsRunList> >::RemoveAll(void) __ptr64 */

void __thiscall
MyTemplate::
CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>::
RemoveAll(CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>
          *this)

{
  void *_Memory;
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
                    /* 0x15ef0  276
                       ?RemoveAll@?$CSimpleArray@VCNtfsRunList@@V?$CSimpleArrayEqualHelper@VCNtfsRunList@@@MyTemplate@@@MyTemplate@@QEAAXXZ
                        */
  _Memory = *(void **)this;
  uVar1 = 0;
  if (_Memory != (void *)0x0) {
    uVar4 = uVar1;
    if (0 < *(int *)(this + 8)) {
      do {
        puVar3 = (undefined8 *)(*(longlong *)this + uVar4);
        if ((void *)*puVar3 != (void *)0x0) {
          free((void *)*puVar3);
          *puVar3 = 0;
        }
        puVar3[1] = 0;
        if ((void *)*puVar3 != (void *)0x0) {
          free((void *)*puVar3);
          *puVar3 = 0;
        }
        puVar3[1] = 0;
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
        uVar4 = uVar4 + 0x10;
      } while ((int)uVar2 < *(int *)(this + 8));
      _Memory = *(void **)this;
    }
    free(_Memory);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: void __cdecl CNtfsRunList::RemoveDataRunRange(long,long) __ptr64 */

void __thiscall CNtfsRunList::RemoveDataRunRange(CNtfsRunList *this,long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  void *local_res8;
  
                    /* 0x15fa0  282  ?RemoveDataRunRange@CNtfsRunList@@QEAAXJJ@Z */
  iVar1 = *(int *)(this + 8);
  iVar2 = param_1 + param_2;
  if (iVar2 < iVar1) {
    _Src = local_res8;
    if ((-1 < iVar2) && (iVar2 < iVar1)) {
      _Src = (void *)(*(longlong *)this + (longlong)iVar2 * 0x18);
    }
    if ((-1 < param_1) && (param_1 < iVar1)) {
      local_res8 = (void *)(*(longlong *)this + (longlong)param_1 * 0x18);
    }
    memmove(local_res8,_Src,(longlong)((iVar1 - param_1) - param_2) * 0x18);
  }
  *(int *)(this + 8) = iVar1 - param_2;
  return;
}




/* public: int __cdecl CNtfsRunList::Split2MultiRunList(class MyTemplate::CSimpleArray<class
   CNtfsRunList,class MyTemplate::CSimpleArrayEqualHelper<class CNtfsRunList> > & __ptr64,int)
   __ptr64 */

int __thiscall
CNtfsRunList::Split2MultiRunList
          (CNtfsRunList *this,
          CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>
          *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
  *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *_Src;
  uint uVar8;
  __int64 _Var9;
  longlong lVar10;
  longlong lVar11;
  CNtfsRunList *pCVar12;
  uint uVar13;
  int iVar14;
  void *local_60;
  longlong local_58;
  
                    /* 0x16030  302
                       ?Split2MultiRunList@CNtfsRunList@@QEAAHAEAV?$CSimpleArray@VCNtfsRunList@@V?$CSimpleArrayEqualHelper@VCNtfsRunList@@@MyTemplate@@@MyTemplate@@H@Z
                        */
  MyTemplate::
  CSimpleArray<class_CNtfsRunList,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsRunList>_>::
  RemoveAll(param_1);
  iVar5 = 0;
  pCVar12 = this;
  if (0 < *(int *)(this + 8)) {
    do {
      iVar14 = 0;
      _Src = (void *)0x0;
      local_60 = (void *)0x0;
      uVar8 = 0;
      local_58 = 0;
      uVar7 = 0;
      iVar3 = *(int *)(this + 8);
      iVar6 = iVar5;
      if (iVar5 < iVar3) {
        lVar11 = 0;
        do {
          _Var9 = -1;
          if ((-1 < iVar6) && (iVar6 < iVar3)) {
            pCVar12 = (CNtfsRunList *)(*(longlong *)this + (longlong)iVar6 * 0x18);
          }
          lVar2 = *(longlong *)pCVar12;
          lVar10 = lVar2 - lVar11;
          if (lVar2 != -1) {
            lVar11 = lVar2;
            _Var9 = lVar10;
          }
          iVar3 = AddSourceDataRun(this,(uchar *)0x0,0,_Var9,*(__int64 *)(pCVar12 + 0x10),
                                   (uint)(iVar5 == iVar6),(uint)(lVar2 == -1));
          iVar14 = iVar14 + iVar3;
          if (param_2 <= (int)(iVar14 + 8U & 0xfffffff8)) break;
          pvVar4 = _Src;
          uVar13 = uVar7;
          if (uVar8 == uVar7) {
            uVar13 = 1;
            if (uVar7 != 0) {
              uVar13 = uVar8 * 2;
            }
            pvVar4 = malloc((longlong)(int)uVar13 * 0x18);
            if (pvVar4 != (void *)0x0) {
              if (_Src != (void *)0x0) {
                memcpy(pvVar4,_Src,(longlong)(int)uVar7 * 0x18);
                free(_Src);
              }
              local_58 = (ulonglong)uVar13 << 0x20;
              local_60 = pvVar4;
              goto LAB_1800161a9;
            }
          }
          else {
LAB_1800161a9:
            plVar1 = (longlong *)((longlong)pvVar4 + (longlong)(int)uVar8 * 0x18);
            if (plVar1 != (longlong *)0x0) {
              lVar2 = *(longlong *)(pCVar12 + 8);
              *plVar1 = *(longlong *)pCVar12;
              plVar1[1] = lVar2;
              plVar1[2] = *(longlong *)(pCVar12 + 0x10);
            }
            uVar8 = uVar8 + 1;
            local_58 = CONCAT44(local_58._4_4_,uVar8);
            _Src = pvVar4;
            uVar7 = uVar13;
          }
          iVar6 = iVar6 + 1;
          iVar3 = *(int *)(this + 8);
        } while (iVar6 < iVar3);
      }
      iVar5 = iVar6;
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == *(int *)(param_1 + 0xc)) {
        iVar6 = 1;
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar6 = iVar3 * 2;
        }
        pvVar4 = malloc((longlong)iVar6 << 4);
        if (pvVar4 != (void *)0x0) {
          if (*(void **)param_1 != (void *)0x0) {
            memcpy(pvVar4,*(void **)param_1,(longlong)*(int *)(param_1 + 0xc) << 4);
            free(*(void **)param_1);
          }
          *(int *)(param_1 + 0xc) = iVar6;
          *(void **)param_1 = pvVar4;
          iVar3 = *(int *)(param_1 + 8);
          goto LAB_18001626f;
        }
      }
      else {
LAB_18001626f:
        this_00 = (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                   *)((longlong)iVar3 * 0x10 + *(longlong *)param_1);
        if (this_00 !=
            (CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
             *)0x0) {
          MyTemplate::
          CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
          ::
          CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                    (this_00,(CSimpleArray<struct_tagDataRun,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagDataRun>_>
                              *)&local_60);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      if (_Src != (void *)0x0) {
        free(_Src);
        _Src = (void *)0x0;
        local_60 = (void *)0x0;
      }
      local_58 = 0;
      if (_Src != (void *)0x0) {
        free(_Src);
      }
    } while (iVar5 < *(int *)(this + 8));
  }
  return *(int *)(param_1 + 8);
}




/* public: __cdecl CNtfsVolume::CNtfsVolume(void) __ptr64 */

CNtfsVolume * __thiscall CNtfsVolume::CNtfsVolume(CNtfsVolume *this)

{
                    /* 0x16310  31  ??0CNtfsVolume@@QEAA@XZ */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  return this;
}




/* public: virtual __cdecl CNtfsVolume::~CNtfsVolume(void) __ptr64 */

void __thiscall CNtfsVolume::~CNtfsVolume(CNtfsVolume *this)

{
                    /* 0x16370  62  ??1CNtfsVolume@@UEAA@XZ */
  *(undefined ***)this = vftable;
  return;
}




void FUN_180016380(undefined8 *param_1)

{
  uint *puVar1;
  __time64_t _Var2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_138;
  undefined8 *local_130;
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_18002c018 ^ (ulonglong)auStack_168;
  *param_1 = DebugMsg::vftable;
  local_130 = param_1;
  memset(local_128,0,0x104);
  _Var2 = _time64((__time64_t *)0x0);
  lVar4 = _Var2 - param_1[6];
  puVar1 = (uint *)param_1[5];
  if (lVar4 == 0) {
    puVar3 = param_1 + 1;
    if (puVar1 == (uint *)0x0) {
      if (0xf < (ulonglong)param_1[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_180013cc0(local_128,"[==dbgFun==] %s leave().",puVar3,0);
    }
    else {
      if (0xf < (ulonglong)param_1[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_180013cc0(local_128,"[==dbgFun==] %s leave(0x%x).",puVar3,(ulonglong)*puVar1);
    }
  }
  else {
    puVar3 = param_1 + 1;
    if (puVar1 == (uint *)0x0) {
      if (0xf < (ulonglong)param_1[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_180013cc0(local_128,"[==dbgFun==] %s leave(). time: %llu second(s).",puVar3,lVar4);
    }
    else {
      if (0xf < (ulonglong)param_1[4]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      local_148 = lVar4;
      FUN_180013cc0(local_128,"[==dbgFun==] %s leave(0x%x). time: %llu second(s).",puVar3,
                    (ulonglong)*puVar1);
    }
  }
  OutputDebugStringA(local_128);
  FUN_180011680(param_1 + 1);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




/* public: class CNtfsVolume const & __ptr64 __cdecl CNtfsVolume::operator=(class CNtfsVolume &
   __ptr64) __ptr64 */

CNtfsVolume * __thiscall CNtfsVolume::operator=(CNtfsVolume *this,CNtfsVolume *param_1)

{
                    /* 0x164b0  84  ??4CNtfsVolume@@QEAAAEBV0@AEAV0@@Z */
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  return this;
}




undefined8 * FUN_180016500(undefined8 *param_1,uint param_2)

{
  FUN_180016380(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* protected: void __cdecl CNtfsVolume::Init(void) __ptr64 */

void __thiscall CNtfsVolume::Init(CNtfsVolume *this)

{
                    /* 0x16540  235  ?Init@CNtfsVolume@@IEAAXXZ */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  return;
}




/* public: static int __cdecl CNtfsVolume::IsNtfsPartition(struct tagNTFS_BOOT * __ptr64) */

int __cdecl CNtfsVolume::IsNtfsPartition(tagNTFS_BOOT *param_1)

{
                    /* 0x16590  257  ?IsNtfsPartition@CNtfsVolume@@SAHPEAUtagNTFS_BOOT@@@Z */
  if (((*(int *)(param_1 + 3) == 0x5346544e) && ((*(ushort *)(param_1 + 0xb) & 0x1ff) == 0)) &&
     ((ulonglong)(byte)param_1[0xd] * *(longlong *)(param_1 + 0x30) < *(ulonglong *)(param_1 + 0x28)
     )) {
    return 1;
  }
  return 0;
}




/* public: virtual int __cdecl CNtfsVolume::LoadLdmProc(struct ILdmVolume * __ptr64,__int64) __ptr64
    */

int __thiscall CNtfsVolume::LoadLdmProc(CNtfsVolume *this,ILdmVolume *param_1,__int64 param_2)

{
                    /* 0x165c0  262  ?LoadLdmProc@CNtfsVolume@@UEAAHPEAUILdmVolume@@_J@Z */
  *(ILdmVolume **)(this + 0x48) = param_1;
  *(__int64 *)(this + 0x50) = param_2;
  return 1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* public: virtual int __cdecl CNtfsVolume::LoadNtfsVolume(long,__int64,__int64,struct ILdmVolume *
   __ptr64) __ptr64 */

int __thiscall
CNtfsVolume::LoadNtfsVolume
          (CNtfsVolume *this,long param_1,__int64 param_2,__int64 param_3,ILdmVolume *param_4)

{
  int iVar1;
  int extraout_EAX;
  byte bVar2;
  char *pcVar3;
  uchar *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  __int64 _Var8;
  undefined1 auStack_1238 [32];
  undefined8 local_1218;
  CHardDriveIO local_1208 [96];
  undefined **local_11a8;
  undefined1 local_11a0;
  undefined7 uStack_119f;
  undefined8 local_1190;
  ulonglong uStack_1188;
  undefined8 local_1180;
  __time64_t local_1178;
  CHAR local_1168 [272];
  uchar local_1058 [3];
  int local_1055;
  ushort local_104d;
  ulonglong local_104b;
  ulonglong local_1030;
  longlong local_1028;
  undefined8 local_1020;
  int iStack_1018;
  int local_1014;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  ulonglong local_58;
  undefined8 uStack_48;
  
                    /* 0x165d0  263  ?LoadNtfsVolume@CNtfsVolume@@UEAAHJ_J0PEAUILdmVolume@@@Z */
  uStack_48 = 0x1800165ef;
  local_1218 = 0xfffffffffffffffe;
  local_58 = DAT_18002c018 ^ (ulonglong)auStack_1238;
  local_11a8 = DebugMsg::vftable;
  local_1190 = 0;
  uStack_1188 = 0xf;
  local_11a0 = 0;
  _Var8 = param_3;
  FUN_180013b70((longlong *)&local_11a0,"CNtfsVolume::LoadNtfsVolume",0x1b);
  local_1180 = 0;
  local_1178 = _time64((__time64_t *)0x0);
  memset(local_1168,0,0x104);
  puVar5 = &local_11a0;
  if (0xf < uStack_1188) {
    puVar5 = (undefined1 *)CONCAT71(uStack_119f,local_11a0);
  }
  FUN_180013cc0(local_1168,"[==dbgFun==] %s enter()",puVar5,_Var8);
  OutputDebugStringA(local_1168);
  uVar6 = param_3;
  (**(code **)(*(longlong *)this + 0x10))(this,param_4);
  CHardDriveIO::CHardDriveIO(local_1208);
  puVar4 = (uchar *)(ulonglong)(uint)param_1;
  iVar1 = CHardDriveIO::OpenDisk(local_1208,param_1);
  if (iVar1 == 0) {
    pcVar3 = "Open disk in CNtfsVolume::LoadNtfsVolume failed!\n";
  }
  else {
    if (param_4 == (ILdmVolume *)0x0) {
      CHardDriveIO::SetLdmInterface(local_1208,param_1,param_2,0);
    }
    else {
      CHardDriveIO::SetLdmVolumeAsDisk(local_1208,param_4,0,0);
    }
    _Var8 = 1;
    puVar4 = local_1058;
    uVar6 = param_2;
    iVar1 = CHardDriveIO::ReadSector(local_1208,puVar4,param_2,1);
    if (iVar1 == 0) {
      pcVar3 = "Read disk in CNtfsVolume::LoadNtfsVolume failed!\n";
    }
    else {
      if (local_1055 == 0x5346544e) {
        uVar6 = (ulonglong)local_104d;
        if ((local_104d & 0x1ff) == 0) {
          bVar2 = (byte)local_104b;
          if ((local_104b & 0xff) * local_1028 < local_1030) {
            *(ILdmVolume **)(this + 0x48) = param_4;
            *(long *)(this + 0x38) = param_1;
            *(__int64 *)(this + 0x30) = param_2;
            *(__int64 *)(this + 0x50) = param_3;
            *(uint *)(this + 0x18) = (uint)local_104d;
            if (bVar2 < 0x81) {
              uVar7 = (uint)bVar2;
            }
            else {
              uVar7 = 1 << (-bVar2 & 0x1f);
            }
            *(uint *)(this + 0x1c) = uVar7;
            if (uVar7 != 0) {
              if ((char)local_1014 < '\0') {
                local_1014 = (1 << (-(char)local_1014 & 0x1fU)) / (int)(uint)local_104d;
              }
              else {
                local_1014 = local_1014 * uVar7;
              }
              *(int *)(this + 0x24) = local_1014;
              if (local_1014 != 0) {
                if ((byte)iStack_1018 < 0x81) {
                  iVar1 = (uint)local_104d * iStack_1018 * uVar7;
                  *(int *)(this + 0x20) = iVar1;
                }
                else {
                  iVar1 = 1 << (-(byte)iStack_1018 & 0x1f);
                  *(int *)(this + 0x20) = iVar1;
                }
                if (iVar1 != 0) {
                  *(longlong *)(this + 8) = local_1028;
                  *(undefined8 *)(this + 0x10) = local_1020;
                  *(ulonglong *)(this + 0x28) = local_1030;
                  *(ulonglong *)(this + 0x40) = CONCAT44(uStack_100c,uStack_1010);
                  CHardDriveIO::CloseDisk(local_1208);
                }
              }
            }
            goto LAB_18001683f;
          }
        }
      }
      pcVar3 = "It is not a NTFS volume!\n";
    }
  }
  FUN_180008d10(pcVar3,puVar4,uVar6,_Var8);
LAB_18001683f:
  CHardDriveIO::~CHardDriveIO(local_1208);
  FUN_180016380(&local_11a8);
  __security_check_cookie(local_58 ^ (ulonglong)auStack_1238);
  return extraout_EAX;
}




undefined8 * FUN_180016880(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = CAttributeI::vftable;
  *param_1 = CAttributeBase::vftable;
  param_1[1] = param_2;
  *param_1 = CNoresidentAttribute::vftable;
  CNtfsRunList::CNtfsRunList((CNtfsRunList *)(param_1 + 2));
  CNtfsFileRecordAttribute::GetDataRunList
            ((CNtfsFileRecordAttribute *)param_1[1],(CNtfsRunList *)(param_1 + 2));
  return param_1;
}




undefined8 *
FUN_1800168f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = CRecordAttributeReader::vftable;
  param_1[1] = CRWContextI::vftable;
  param_1[1] = CAttributeReadWriteBase::vftable;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}




void FUN_180016950(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    return;
  }
  return;
}




void FUN_180016970(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}




void FUN_180016990(undefined8 *param_1)

{
  *param_1 = CAttributeBase::vftable;
  *param_1 = CAttributeI::vftable;
  return;
}




void FUN_1800169c0(undefined8 *param_1)

{
  *param_1 = CAttributeI::vftable;
  return;
}




void FUN_1800169d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CAttributeReadWriteBase::vftable;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  *param_1 = CRWContextI::vftable;
  return;
}




void FUN_180016a30(undefined8 *param_1)

{
  *param_1 = CRWContextI::vftable;
  return;
}




void FUN_180016a40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CRecordAttributeReader::vftable;
  param_1[1] = CAttributeReadWriteBase::vftable;
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  param_1[1] = CRWContextI::vftable;
  return;
}




void FUN_180016ab0(undefined8 *param_1)

{
  *param_1 = CRecordI::vftable;
  return;
}




undefined8 * FUN_180016ac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CAttributeBase::vftable;
  *param_1 = CAttributeI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016b10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CAttributeI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016b40(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CAttributeReadWriteBase::vftable;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  *param_1 = CRWContextI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016bc0(undefined8 *param_1,uint param_2)

{
  *param_1 = CMultiRecordWrapper::vftable;
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::RemoveAll((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               *)(param_1 + 0xb));
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord((CNtfsMultiFileRecord *)(param_1 + 1));
  *param_1 = CRecordI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016c30(undefined8 *param_1,uint param_2)

{
  *param_1 = CNoresidentAttribute::vftable;
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_1 + 2));
  *param_1 = CAttributeBase::vftable;
  *param_1 = CAttributeI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CRWContextI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016cd0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CRecordAttributeReader::vftable;
  param_1[1] = CAttributeReadWriteBase::vftable;
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  param_1[1] = CRWContextI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016d70(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = CRecordAttributeWriter::vftable;
  param_1[1] = CAttributeReadWriteBase::vftable;
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
  }
  param_1[1] = CRWContextI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016e10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CRecordI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016e40(undefined8 *param_1,uint param_2)

{
  *param_1 = CRecordWrapper::vftable;
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_1 + 2));
  *param_1 = CRecordI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180016ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CResidentAttribute::vftable;
  *param_1 = CAttributeBase::vftable;
  *param_1 = CAttributeI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* class CRecordAttributeReaderI * __ptr64 __cdecl CreateRecordAttributeReader(class CHardDriveIO &
   __ptr64,class CNtfsVolume & __ptr64,class CNtfsMFT & __ptr64) */

CRecordAttributeReaderI * __cdecl
CreateRecordAttributeReader(CHardDriveIO *param_1,CNtfsVolume *param_2,CNtfsMFT *param_3)

{
  CRecordAttributeReaderI *pCVar1;
  
                    /* 0x16ef0  146
                       ?CreateRecordAttributeReader@@YAPEAVCRecordAttributeReaderI@@AEAVCHardDriveIO@@AEAVCNtfsVolume@@AEAVCNtfsMFT@@@Z
                        */
  pCVar1 = (CRecordAttributeReaderI *)operator_new(0x38);
  if (pCVar1 != (CRecordAttributeReaderI *)0x0) {
    *(undefined ***)pCVar1 = CRecordAttributeReader::vftable;
    *(undefined ***)(pCVar1 + 8) = CRWContextI::vftable;
    *(undefined ***)(pCVar1 + 8) = CAttributeReadWriteBase::vftable;
    *(CHardDriveIO **)(pCVar1 + 0x10) = param_1;
    *(CNtfsVolume **)(pCVar1 + 0x18) = param_2;
    *(CNtfsMFT **)(pCVar1 + 0x20) = param_3;
    *(undefined8 *)(pCVar1 + 0x28) = 0;
    *(undefined8 *)(pCVar1 + 0x30) = 0;
    return pCVar1;
  }
  return (CRecordAttributeReaderI *)0x0;
}




/* class CRecordAttributeWriterI * __ptr64 __cdecl CreateRecordAttributeWriter(class CHardDriveIO &
   __ptr64,class CNtfsVolume & __ptr64,class CNtfsMFT & __ptr64) */

CRecordAttributeWriterI * __cdecl
CreateRecordAttributeWriter(CHardDriveIO *param_1,CNtfsVolume *param_2,CNtfsMFT *param_3)

{
  CRecordAttributeWriterI *pCVar1;
  
                    /* 0x16f90  147
                       ?CreateRecordAttributeWriter@@YAPEAVCRecordAttributeWriterI@@AEAVCHardDriveIO@@AEAVCNtfsVolume@@AEAVCNtfsMFT@@@Z
                        */
  pCVar1 = (CRecordAttributeWriterI *)operator_new(0x38);
  if (pCVar1 != (CRecordAttributeWriterI *)0x0) {
    *(undefined ***)pCVar1 = CRecordAttributeWriter::vftable;
    *(undefined ***)(pCVar1 + 8) = CRWContextI::vftable;
    *(undefined ***)(pCVar1 + 8) = CAttributeReadWriteBase::vftable;
    *(CHardDriveIO **)(pCVar1 + 0x10) = param_1;
    *(CNtfsVolume **)(pCVar1 + 0x18) = param_2;
    *(CNtfsMFT **)(pCVar1 + 0x20) = param_3;
    *(undefined8 *)(pCVar1 + 0x28) = 0;
    *(undefined8 *)(pCVar1 + 0x30) = 0;
    return pCVar1;
  }
  return (CRecordAttributeWriterI *)0x0;
}




/* void __cdecl DeleteRecordAttributeReader(class CRecordAttributeReaderI * __ptr64) */

void __cdecl DeleteRecordAttributeReader(CRecordAttributeReaderI *param_1)

{
                    /* 0x17030  150
                       ?DeleteRecordAttributeReader@@YAXPEAVCRecordAttributeReaderI@@@Z
                       0x17030  151
                       ?DeleteRecordAttributeWriter@@YAXPEAVCRecordAttributeWriterI@@@Z */
  if (param_1 != (CRecordAttributeReaderI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018001703d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}




longlong FUN_180017050(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *local_res8;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = (ulonglong)param_3 & 0xffffffff;
  puVar5 = param_4;
  if (((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) &&
      (cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x20))(), cVar2 != '\0')) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x28), puVar1 != (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)*puVar1;
    param_3 = param_4;
    cVar2 = (*(code *)*puVar5)(puVar1,uVar6,param_4,puVar5,uVar7);
    if (cVar2 != '\0') goto LAB_180017133;
  }
  plVar3 = (longlong *)FUN_180017cf0(param_1,param_2,param_3,puVar5);
  plVar3 = (longlong *)*plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,1);
    }
    *(longlong *)(param_1 + 0x28) = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,&local_res8,uVar6,param_4);
    plVar3 = (longlong *)*plVar4;
    *plVar4 = 0;
    plVar4 = *(longlong **)(param_1 + 0x28);
    if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
    }
    *(longlong **)(param_1 + 0x28) = plVar3;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x20))(local_res8,1);
    }
  }
LAB_180017133:
  return param_1 + 0x28;
}




void FUN_180017150(longlong param_1,longlong *param_2,int param_3,void *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  void *pvVar12;
  char cVar13;
  bool bVar14;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined8 *local_2a0;
  int *local_298;
  longlong local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  undefined8 *local_270;
  undefined8 local_268;
  undefined1 local_258 [528];
  ulonglong local_48;
  
  local_268 = 0xfffffffffffffffe;
  local_48 = DAT_18002c018 ^ (ulonglong)auStack_2c8;
  local_2a8 = 0;
  local_290 = param_1;
  local_280 = param_2;
  local_278 = param_2;
  if ((*(int *)(param_1 + 0x60) < 1) &&
     (pvVar12 = param_4,
     iVar3 = CNtfsMultiFileRecord::Convert2AttributeArray
                       ((CNtfsMultiFileRecord *)(param_1 + 8),
                        (CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
                         *)(param_1 + 0x58)), iVar3 == 0)) {
    FUN_180008d10("Call CNtfsMultiRecord::Convert2AttributeArray() failed in CMultiRecordWrapper::GetAttribute()! (%s, %d)"
                  ,
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                  ,0x199,pvVar12);
    local_298 = (int *)0x0;
    *param_2 = 0;
  }
  else {
    iVar3 = 0;
    plVar8 = local_278;
    lVar10 = local_290;
    if (0 < *(int *)(local_290 + 0x60)) {
      do {
        if ((-1 < iVar3) && (iVar3 < *(int *)(lVar10 + 0x60))) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar10 + 0x58));
        }
        piVar2 = (int *)*plVar8;
        if (*piVar2 == param_3) {
          cVar13 = (char)param_4;
          if (param_4 == (void *)0x0) {
            bVar14 = *(char *)((longlong)piVar2 + 9) == cVar13;
          }
          else {
            bVar1 = *(byte *)((longlong)piVar2 + 9);
            if ((bVar1 == 0) || (0x104 < (uint)bVar1 * 2)) goto LAB_1800172a3;
            memset(local_258,0,0x104);
            memcpy(local_258,
                   (void *)((ulonglong)*(ushort *)((longlong)piVar2 + 10) + (longlong)piVar2),
                   (ulonglong)bVar1 * 2);
            iVar6 = memcmp(param_4,local_258,(ulonglong)bVar1 * 2);
            bVar14 = iVar6 == 0;
            lVar10 = local_290;
          }
          if (bVar14) {
            if ((char)piVar2[2] == '\0') {
              local_298 = (int *)(longlong)*(int *)(lVar10 + 0x10);
              iVar6 = 0;
              iVar3 = *(int *)(lVar10 + 0x20);
              plVar8 = local_278;
              lVar11 = lVar10;
              if (0 < iVar3) goto LAB_180017330;
              goto LAB_1800173bb;
            }
            puVar5 = (undefined8 *)operator_new(0x20);
            if (puVar5 != (undefined8 *)0x0) {
              local_2a0 = puVar5;
              puVar5 = FUN_180016880(puVar5,plVar8);
            }
            local_2a0 = (undefined8 *)0x0;
            *param_2 = (longlong)puVar5;
            goto LAB_1800172d4;
          }
        }
LAB_1800172a3:
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar10 + 0x60));
    }
    local_2a0 = (undefined8 *)0x0;
    *param_2 = 0;
  }
  goto LAB_1800172d4;
LAB_180017330:
  do {
    if ((-1 < iVar6) && (iVar6 < iVar3)) {
      plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar10 + 0x18));
    }
    if (param_4 == (void *)0x0) {
      bVar14 = *(char *)(*plVar8 + 9) == cVar13;
LAB_1800173a9:
      if (bVar14) {
        local_2a0 = (undefined8 *)operator_new(0x20);
        if (local_2a0 != (undefined8 *)0x0) {
          *local_2a0 = CAttributeI::vftable;
          *local_2a0 = CAttributeBase::vftable;
          local_2a0[1] = plVar8;
          *local_2a0 = CResidentAttribute::vftable;
          local_2a0[2] = local_298;
          local_2a0[3] = (longlong *)(lVar10 + 0x18);
        }
        local_298 = (int *)0x0;
        *local_280 = (longlong)local_2a0;
        goto LAB_1800172d4;
      }
    }
    else {
      lVar11 = *plVar8;
      bVar1 = *(byte *)(lVar11 + 9);
      if ((bVar1 != 0) && ((uint)bVar1 * 2 < 0x105)) {
        memset(local_258,0,0x104);
        memcpy(local_258,(void *)((ulonglong)*(ushort *)(lVar11 + 10) + lVar11),(ulonglong)bVar1 * 2
              );
        iVar7 = memcmp(param_4,local_258,(ulonglong)bVar1 * 2);
        bVar14 = iVar7 == 0;
        goto LAB_1800173a9;
      }
    }
    iVar6 = iVar6 + 1;
    lVar11 = local_290;
  } while (iVar6 < iVar3);
LAB_1800173bb:
  iVar6 = 0;
  iVar3 = *(int *)(lVar11 + 0x40);
  plVar8 = local_278;
  if (0 < iVar3) {
    do {
      if ((-1 < iVar6) && (iVar6 < iVar3)) {
        local_270 = (undefined8 *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar6 * 0x28);
        iVar3 = *(int *)(lVar11 + 0x40);
      }
      plVar9 = local_270 + 1;
      if ((-1 < iVar6) && (iVar6 < iVar3)) {
        local_298 = (int *)(*(longlong *)(lVar11 + 0x38) + (longlong)iVar6 * 0x28);
      }
      local_2a0 = (undefined8 *)(longlong)*local_298;
      iVar7 = 0;
      iVar3 = *(int *)(local_270 + 2);
      local_288 = plVar9;
      if (0 < iVar3) {
        do {
          if ((-1 < iVar7) && (iVar7 < iVar3)) {
            plVar8 = (longlong *)((longlong)iVar7 * 0x10 + *plVar9);
          }
          if (param_4 == (void *)0x0) {
            if (*(char *)(*plVar8 + 9) == cVar13) {
LAB_18001758b:
              local_270 = (undefined8 *)operator_new(0x20);
              if (local_270 != (undefined8 *)0x0) {
                *local_270 = CAttributeI::vftable;
                *local_270 = CAttributeBase::vftable;
                local_270[1] = plVar8;
                *local_270 = CResidentAttribute::vftable;
                local_270[2] = local_2a0;
                local_270[3] = plVar9;
              }
              local_2a0 = (undefined8 *)0x0;
              *local_280 = (longlong)local_270;
              goto LAB_1800172d4;
            }
          }
          else {
            lVar10 = *plVar8;
            bVar1 = *(byte *)(lVar10 + 9);
            plVar9 = local_288;
            if ((bVar1 != 0) && ((uint)bVar1 * 2 < 0x105)) {
              memset(local_258,0,0x104);
              memcpy(local_258,(void *)((ulonglong)*(ushort *)(lVar10 + 10) + lVar10),
                     (ulonglong)bVar1 * 2);
              iVar4 = memcmp(param_4,local_258,(ulonglong)bVar1 * 2);
              plVar9 = local_288;
              if (iVar4 == 0) goto LAB_18001758b;
            }
          }
          iVar7 = iVar7 + 1;
          lVar11 = local_290;
        } while (iVar7 < iVar3);
      }
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(lVar11 + 0x40);
    } while (iVar6 < iVar3);
  }
  local_2a0 = (undefined8 *)0x0;
  *local_280 = 0;
LAB_1800172d4:
  local_2a8 = 1;
  __security_check_cookie(local_48 ^ (ulonglong)auStack_2c8);
  return;
}




void FUN_180017640(longlong param_1,undefined8 *param_2,int param_3,void *param_4)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined1 local_258 [528];
  ulonglong local_48;
  
  local_260 = 0xfffffffffffffffe;
  local_48 = DAT_18002c018 ^ (ulonglong)auStack_298;
  local_278 = (undefined8 *)CONCAT44(local_278._4_4_,param_3);
  local_270 = 0;
  iVar7 = 0;
  local_268 = param_2;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar6 = param_2;
    do {
      if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x18))) {
        puVar6 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
      }
      piVar2 = (int *)*puVar6;
      if (*piVar2 == param_3) {
        if (param_4 == (void *)0x0) {
          if (*(char *)((longlong)piVar2 + 9) == '\0') {
LAB_1800176d6:
            if ((char)piVar2[2] == '\0') {
              puVar5 = (undefined8 *)operator_new(0x20);
              if (puVar5 != (undefined8 *)0x0) {
                uVar3 = *(undefined8 *)(param_1 + 8);
                *puVar5 = CAttributeI::vftable;
                *puVar5 = CAttributeBase::vftable;
                puVar5[1] = puVar6;
                *puVar5 = CResidentAttribute::vftable;
                puVar5[2] = uVar3;
                puVar5[3] = (longlong *)(param_1 + 0x10);
              }
              *param_2 = puVar5;
            }
            else {
              local_278 = (undefined8 *)operator_new(0x20);
              if (local_278 != (undefined8 *)0x0) {
                local_278 = FUN_180016880(local_278,puVar6);
              }
              *param_2 = local_278;
            }
            goto LAB_1800177cc;
          }
        }
        else {
          bVar1 = *(byte *)((longlong)piVar2 + 9);
          if (bVar1 != 0) {
            if ((uint)bVar1 * 2 < 0x105) {
              memset(local_258,0,0x104);
              memcpy(local_258,
                     (void *)((ulonglong)*(ushort *)((longlong)piVar2 + 10) + (longlong)piVar2),
                     (ulonglong)bVar1 * 2);
              iVar4 = memcmp(param_4,local_258,(ulonglong)bVar1 * 2);
              if (iVar4 == 0) goto LAB_1800176d6;
            }
            param_3 = (int)local_278;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x18));
  }
  *param_2 = 0;
LAB_1800177cc:
  local_270 = 1;
  local_278 = (undefined8 *)0x0;
  __security_check_cookie(local_48 ^ (ulonglong)auStack_298);
  return;
}




ulonglong FUN_180017840(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)FUN_180017050(param_1 + 8,param_2,param_3,param_4);
  plVar1 = (longlong *)*plVar2;
  if (plVar1 == (longlong *)0x0) {
    uVar3 = (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 8,param_5,param_6,param_7);
  }
  return uVar3;
}




undefined8
FUN_180017890(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_180017050(param_1,param_2,param_3,param_4);
  plVar1 = (longlong *)*plVar2;
  if (plVar1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    *param_5 = uVar3;
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}




void FUN_1800178d0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 8) + 0x20))();
  return;
}




undefined8
FUN_180017900(longlong param_1,longlong *param_2,void *param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  size_t _Size;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *local_res10;
  TBuffer local_50 [24];
  
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  TBuffer::TBuffer(local_50);
  _Dst = TBuffer::Malloc(local_50,*(int *)(lVar2 + 0x18));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x18))) {
        local_res10 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
      }
      iVar1 = *(int *)(lVar2 + 0x18);
      _Size = (size_t)iVar1;
      lVar10 = (longlong)*(int *)(lVar2 + 0x1c);
      lVar4 = local_res10[1] * _Size * lVar10;
      lVar7 = local_res10[2] * _Size * lVar10;
      lVar5 = lVar7 + lVar4;
      if (param_4 < lVar5) {
        if (param_5 + param_4 <= lVar4) break;
        lVar11 = lVar4;
        if (lVar4 <= param_4) {
          lVar11 = param_4;
        }
        sVar8 = (lVar7 - lVar11) + lVar4;
        if (param_5 + param_4 <= lVar5) {
          sVar8 = (param_4 - lVar11) + param_5;
        }
        if (*local_res10 == -1) {
          memset(param_3,0,sVar8);
          param_3 = (void *)((longlong)param_3 + sVar8);
        }
        else {
          lVar7 = (lVar11 - lVar4) % (longlong)_Size;
          lVar5 = (lVar11 - lVar4) / (longlong)_Size +
                  lVar10 * *local_res10 + *(longlong *)(lVar2 + 0x30);
          if (lVar7 != 0) {
            memset(_Dst,0,_Size);
            lVar4 = 1;
            iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,_Dst,lVar5);
            if (iVar1 != 0) {
              memcpy(param_3,(void *)(lVar7 + (longlong)_Dst),*(int *)(lVar2 + 0x18) - lVar7);
              iVar1 = *(int *)(lVar2 + 0x18);
              param_3 = (void *)((longlong)param_3 + (iVar1 - lVar7));
              sVar8 = sVar8 + (lVar7 - iVar1);
              lVar5 = lVar5 + 1;
              goto LAB_180017a9c;
            }
            uVar9 = 0x28f;
LAB_180017b6d:
            FUN_180008d10("Call CHardDriveIO::ReadSector() failed in CNoresidentAttribute::GetData()! (%s, %d)"
                          ,
                          "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                          ,uVar9,lVar4);
            uVar9 = 0;
            goto LAB_180017b32;
          }
LAB_180017a9c:
          lVar7 = (longlong)sVar8 / (longlong)iVar1;
          sVar8 = (longlong)sVar8 % (longlong)iVar1;
          if (lVar7 != 0) {
            lVar4 = lVar7;
            iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_3,lVar5);
            if (iVar1 == 0) {
              uVar9 = 0x2a3;
              goto LAB_180017b6d;
            }
            iVar1 = *(int *)(lVar2 + 0x18);
            param_3 = (void *)((longlong)param_3 + iVar1 * lVar7);
            lVar5 = lVar5 + lVar7;
          }
          if (sVar8 != 0) {
            memset(_Dst,0,(longlong)iVar1);
            lVar4 = 1;
            iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,_Dst,lVar5);
            if (iVar1 == 0) {
              uVar9 = 0x2b4;
              goto LAB_180017b6d;
            }
            memcpy(param_3,_Dst,sVar8);
            param_3 = (void *)((longlong)param_3 + sVar8);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x18));
  }
  uVar9 = 1;
LAB_180017b32:
  TBuffer::~TBuffer(local_50);
  return uVar9;
}




ulonglong FUN_180017b90(longlong param_1,undefined8 param_2,uchar *param_3,longlong param_4,
                       __int64 param_5)

{
  __int64 _Var1;
  
  if (param_4 != 0) {
    return (ulonglong)param_3 & 0xffffffffffffff00;
  }
  _Var1 = CNtfsFileRecordAttribute::GetResidentData
                    (*(CNtfsFileRecordAttribute **)(param_1 + 8),param_3,param_5);
  return CONCAT71((int7)((ulonglong)_Var1 >> 8),1);
}




undefined8 FUN_180017bc0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 * FUN_180017bd0(longlong param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  plVar2 = (longlong *)operator_new(0x68);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)CRecordI::vftable;
    *plVar2 = (longlong)CMultiRecordWrapper::vftable;
    CNtfsMultiFileRecord::CNtfsMultiFileRecord((CNtfsMultiFileRecord *)(plVar2 + 1));
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar3 = plVar2;
  }
  if (*(int *)(*(CNtfsMFT **)(param_1 + 0x18) + 0xd8) == 0) {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    *param_2 = 0;
  }
  else {
    iVar1 = CNtfsMultiFileRecord::Initiate
                      ((CNtfsMultiFileRecord *)(plVar3 + 1),*(CNtfsMFT **)(param_1 + 0x18),param_3);
    if (iVar1 == 0) {
      FUN_180008d10("Call CNtfsMultiRecord::Initiate() failed in CRecordAttributeReader::GetMultiRecordWrapper()! (%s, %d)"
                    ,
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                    ,0xc5,param_4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,1);
      }
      *param_2 = 0;
    }
    else {
      *param_2 = plVar3;
    }
  }
  return param_2;
}




void FUN_180017cf0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  tagFILERECORD local_60 [32];
  ulonglong local_40;
  ulonglong local_30;
  
  local_68 = 0xfffffffffffffffe;
  local_30 = DAT_18002c018 ^ (ulonglong)auStack_a8;
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
    if (cVar2 != '\0') goto LAB_180017e79;
  }
  plVar4 = FUN_180017eb0(param_1,local_88,param_2,param_4);
  plVar1 = (longlong *)*plVar4;
  *plVar4 = 0;
  local_70 = plVar1;
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))(local_88[0],1);
  }
  if (plVar1 == (longlong *)0x0) {
LAB_180017e40:
    plVar4 = (longlong *)0x0;
    local_70 = (longlong *)0x0;
    plVar5 = *(longlong **)(param_1 + 0x20);
    if ((plVar1 != plVar5) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
    }
    *(longlong **)(param_1 + 0x20) = plVar1;
  }
  else {
    iVar3 = CNtfsFileRecord::GetFileRecordHeader((CNtfsFileRecord *)(plVar1 + 2),local_60);
    plVar4 = plVar1;
    if (iVar3 == 0) {
      FUN_180008d10("Call CNtfsFileRecord::GetFileRecordHeader() failed in CRecordAttributeReader::GetRecord()! (%s, %d)"
                    ,
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                    ,0x49,param_4);
      plVar1 = *(longlong **)(param_1 + 0x20);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      iVar3 = CNtfsFileRecord::IsAttributeListPresent((CNtfsFileRecord *)(plVar1 + 2));
      if ((iVar3 == 0) && ((local_40 & 0xffffffffffff) == 0)) goto LAB_180017e40;
      if ((local_40 & 0xffffffffffff) != 0) {
        param_2 = local_40 & 0xffffffffffff;
      }
      plVar5 = FUN_180017bd0(param_1,local_88,(long)param_2,param_4);
      plVar1 = (longlong *)*plVar5;
      *plVar5 = 0;
      if (local_88[0] != (longlong *)0x0) {
        local_78 = plVar1;
        (**(code **)(*local_88[0] + 0x10))(local_88[0],1);
      }
      local_78 = (longlong *)0x0;
      plVar5 = *(longlong **)(param_1 + 0x20);
      if ((plVar1 != plVar5) && (plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5,1);
      }
      *(longlong **)(param_1 + 0x20) = plVar1;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,1);
  }
LAB_180017e79:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




undefined8 * FUN_180017eb0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  plVar2 = (longlong *)operator_new(0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)CRecordI::vftable;
    *plVar2 = (longlong)CRecordWrapper::vftable;
    plVar2[1] = 0;
    CNtfsFileRecord::CNtfsFileRecord((CNtfsFileRecord *)(plVar2 + 2));
    plVar3 = plVar2;
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((int)plVar2[0x1b] == 0) {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
    *param_2 = 0;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,plVar3 + 2);
    if (iVar1 == 0) {
      FUN_180008d10("Call CNtfsMFT::ReadFileRecord() failed in CRecordAttributeReader::GetRecordWrapper()! (%s, %d)"
                    ,
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                    ,0xa3,param_4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,1);
      }
      *param_2 = 0;
    }
    else {
      plVar3[1] = param_3;
      *param_2 = plVar3;
    }
  }
  return param_2;
}




ulonglong FUN_180017fd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (*(char *)(lVar1 + 8) == '\0') {
    return (ulonglong)*(uint *)(lVar1 + 0x10);
  }
  return *(ulonglong *)(lVar1 + 0x30);
}




void FUN_180017ff0(longlong param_1,int param_2,void *param_3)

{
  byte bVar1;
  int *piVar2;
  undefined1 auStack_248 [32];
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_18 = DAT_18002c018 ^ (ulonglong)auStack_248;
  piVar2 = (int *)**(undefined8 **)(param_1 + 8);
  if ((((param_2 == *piVar2) && (bVar1 = *(byte *)((longlong)piVar2 + 9), param_3 != (void *)0x0))
      && (bVar1 != 0)) && ((uint)bVar1 * 2 < 0x105)) {
    memset(local_228,0,0x104);
    memcpy(local_228,(void *)((ulonglong)*(ushort *)((longlong)piVar2 + 10) + (longlong)piVar2),
           (ulonglong)bVar1 * 2);
    memcmp(param_3,local_228,(ulonglong)bVar1 * 2);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




ulonglong FUN_1800180c0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  int *local_res8;
  
  if (*(int *)(param_1 + 0x10) == param_2) {
LAB_180018107:
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  in_RAX = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)in_RAX;
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        local_res8 = (int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28);
      }
      if (*local_res8 == param_2) goto LAB_180018107;
      in_RAX = (ulonglong)(iVar2 + 1U);
    } while ((int)(iVar2 + 1U) < iVar1);
  }
  return in_RAX & 0xffffffffffffff00;
}




bool FUN_180018110(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 8) == param_2;
}




ulonglong FUN_180018120(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)FUN_180017050(param_1 + 8,param_2,param_3,param_4);
  plVar1 = (longlong *)*plVar2;
  if (plVar1 == (longlong *)0x0) {
    uVar3 = (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 8,param_5,param_6,param_7);
  }
  return uVar3;
}




undefined8
FUN_180018170(longlong param_1,longlong *param_2,void *param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  size_t sVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *local_res10;
  TBuffer local_50 [24];
  
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  TBuffer::TBuffer(local_50);
  _Dst = TBuffer::Malloc(local_50,*(int *)(lVar2 + 0x18));
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x18))) {
        local_res10 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar8 * 0x18);
      }
      iVar1 = *(int *)(lVar2 + 0x18);
      sVar10 = (size_t)iVar1;
      lVar12 = (longlong)*(int *)(lVar2 + 0x1c);
      lVar5 = local_res10[1] * sVar10 * lVar12;
      lVar6 = local_res10[2] * sVar10 * lVar12;
      lVar9 = lVar6 + lVar5;
      if (param_4 < lVar9) {
        if (param_5 + param_4 <= lVar5) break;
        lVar14 = lVar5;
        if (lVar5 <= param_4) {
          lVar14 = param_4;
        }
        uVar7 = (lVar6 - lVar14) + lVar5;
        if (param_5 + param_4 <= lVar9) {
          uVar7 = (param_4 - lVar14) + param_5;
        }
        if (*local_res10 == -1) {
          uVar4 = 0;
          if (uVar7 != 0) {
            do {
              if (*(char *)(uVar4 + (longlong)param_3) != '\0') goto LAB_180018486;
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar7);
          }
          param_3 = (void *)((longlong)param_3 + uVar7);
        }
        else {
          lVar6 = (lVar14 - lVar5) % (longlong)sVar10;
          lVar9 = (lVar14 - lVar5) / (longlong)sVar10 +
                  lVar12 * *local_res10 + *(longlong *)(lVar2 + 0x30);
          if (lVar6 != 0) {
            memset(_Dst,0,sVar10);
            uVar13 = 1;
            iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,_Dst,lVar9);
            if (iVar1 == 0) {
              uVar11 = 0x30d;
LAB_180018473:
              FUN_180008d10("Call CHardDriveIO::ReadSector() failed in CNoresidentAttribute::GetData()! (%s, %d)"
                            ,
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                            ,uVar11,uVar13);
LAB_180018486:
              uVar13 = 0;
            }
            else {
              memcpy((void *)(lVar6 + (longlong)_Dst),param_3,*(int *)(lVar2 + 0x18) - lVar6);
              uVar13 = 1;
              iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,_Dst,lVar9);
              if (iVar1 != 0) {
                iVar1 = *(int *)(lVar2 + 0x18);
                param_3 = (void *)((longlong)param_3 + (iVar1 - lVar6));
                uVar7 = uVar7 + (lVar6 - iVar1);
                lVar9 = lVar9 + 1;
                goto LAB_180018336;
              }
              FUN_180008d10("Call CHardDriveIO::WriteSector() failed in CNoresidentAttribute::GetData()! (%s, %d)"
                            ,
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                            ,0x316,uVar13);
              uVar13 = 0;
            }
            goto LAB_1800183e6;
          }
LAB_180018336:
          lVar5 = (longlong)uVar7 / (longlong)iVar1;
          sVar10 = (longlong)uVar7 % (longlong)iVar1;
          if (lVar5 != 0) {
            lVar6 = lVar5;
            iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3,lVar9);
            if (iVar1 == 0) {
              FUN_180008d10("Call CHardDriveIO::WriteSector() failed in CNoresidentAttribute::GetData()! (%s, %d)"
                            ,
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                            ,0x328,lVar6);
              uVar13 = 0;
              goto LAB_1800183e6;
            }
            iVar1 = *(int *)(lVar2 + 0x18);
            param_3 = (void *)((longlong)param_3 + iVar1 * lVar5);
            lVar9 = lVar9 + lVar5;
          }
          if (sVar10 != 0) {
            memset(_Dst,0,(longlong)iVar1);
            uVar13 = 1;
            iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,_Dst,lVar9);
            if (iVar1 == 0) {
              uVar11 = 0x339;
              goto LAB_180018473;
            }
            memcpy(_Dst,param_3,sVar10);
            uVar13 = 1;
            iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,_Dst,lVar9);
            if (iVar1 == 0) {
              FUN_180008d10("Call CHardDriveIO::WriteSector() failed in CNoresidentAttribute::GetData()! (%s, %d)"
                            ,
                            "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp"
                            ,0x342,uVar13);
              uVar13 = 0;
              goto LAB_1800183e6;
            }
            param_3 = (void *)((longlong)param_3 + sVar10);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  uVar13 = 1;
LAB_1800183e6:
  TBuffer::~TBuffer(local_50);
  return uVar13;
}




uchar * FUN_180018490(longlong param_1,undefined8 *param_2,uchar *param_3,longlong param_4,
                     __int64 param_5)

{
  int iVar1;
  undefined4 extraout_var;
  longlong *plVar2;
  
  if (param_4 == 0) {
    iVar1 = CNtfsFileRecordAttribute::SetResidentData
                      (*(CNtfsFileRecordAttribute **)(param_1 + 8),param_3,param_5);
    param_3 = (uchar *)CONCAT44(extraout_var,iVar1);
    if (iVar1 == 1) {
      plVar2 = (longlong *)(**(code **)*param_2)(param_2);
      param_3 = (uchar *)(**(code **)(*plVar2 + 0x18))
                                   (plVar2,*(undefined8 *)(param_1 + 0x10),
                                    *(undefined8 *)(param_1 + 0x18));
      if ((int)param_3 == 1) {
        return param_3;
      }
    }
  }
  return (uchar *)((ulonglong)param_3 & 0xffffffffffffff00);
}




/* public: __cdecl TBitmap::TBitmap(class TBitmap & __ptr64) __ptr64 */

TBitmap * __thiscall TBitmap::TBitmap(TBitmap *this,TBitmap *param_1)

{
  int iVar1;
  
                    /* 0x18500  45  ??0TBitmap@@QEAA@AEAV0@@Z */
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  iVar1 = CreateBitmap(this,*(__int64 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    memcpy(*(void **)this,*(void **)param_1,(longlong)*(int *)(this + 8));
  }
  return this;
}




/* public: __cdecl TBitmap::TBitmap(void) __ptr64 */

TBitmap * __thiscall TBitmap::TBitmap(TBitmap *this)

{
                    /* 0x18550  46  ??0TBitmap@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}




/* public: __cdecl TBitmap::~TBitmap(void) __ptr64 */

void __thiscall TBitmap::~TBitmap(TBitmap *this)

{
                    /* 0x18560  64  ??1TBitmap@@QEAA@XZ */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}




/* public: class TBitmap const & __ptr64 __cdecl TBitmap::operator=(class TBitmap & __ptr64) __ptr64
    */

TBitmap * __thiscall TBitmap::operator=(TBitmap *this,TBitmap *param_1)

{
  int iVar1;
  
                    /* 0x18590  93  ??4TBitmap@@QEAAAEBV0@AEAV0@@Z */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  iVar1 = CreateBitmap(this,*(__int64 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    memcpy(*(void **)this,*(void **)param_1,(longlong)*(int *)(this + 8));
  }
  return this;
}




/* public: int __cdecl TBitmap::CreateBitmap(__int64) __ptr64 */

int __thiscall TBitmap::CreateBitmap(TBitmap *this,__int64 param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  
                    /* 0x185f0  144  ?CreateBitmap@TBitmap@@QEAAH_J@Z */
  if (0 < param_1) {
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
    }
    *(undefined8 *)this = 0;
    *(__int64 *)(this + 0x10) = param_1;
    uVar3 = (ulonglong)((uint)(param_1 >> 0x3f) & 7);
    lVar2 = param_1 + uVar3;
    iVar1 = (int)(lVar2 >> 3);
    *(int *)(this + 8) = iVar1;
    if (((uint)lVar2 & 7) != uVar3) {
      iVar1 = iVar1 + 1;
      *(int *)(this + 8) = iVar1;
    }
    _Dst = operator_new((longlong)iVar1);
    *(void **)this = _Dst;
    if (_Dst != (void *)0x0) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
      memset(_Dst,0,(longlong)*(int *)(this + 8));
      return 1;
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return 0;
}




/* public: int __cdecl TBitmap::DestroyBitmap(void) __ptr64 */

int __thiscall TBitmap::DestroyBitmap(TBitmap *this)

{
                    /* 0x18690  152  ?DestroyBitmap@TBitmap@@QEAAHXZ */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
  }
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return 1;
}




/* public: int __cdecl TBitmap::FillBitmap(int) __ptr64 */

int __thiscall TBitmap::FillBitmap(TBitmap *this,int param_1)

{
  void *_Dst;
  
                    /* 0x186c0  155  ?FillBitmap@TBitmap@@QEAAHH@Z */
  _Dst = *(void **)this;
  if (_Dst == (void *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
    memset(_Dst,0,(longlong)*(int *)(this + 8));
    return 1;
  }
  memset(_Dst,0xff,(longlong)*(int *)(this + 8));
  return 1;
}




/* public: int __cdecl TBitmap::GetBit(__int64) __ptr64 */

int __thiscall TBitmap::GetBit(TBitmap *this,__int64 param_1)

{
  longlong lVar1;
  uint uVar2;
  
                    /* 0x18710  165  ?GetBit@TBitmap@@QEAAH_J@Z */
  if ((-1 < param_1) && (param_1 <= *(longlong *)(this + 0x10))) {
    uVar2 = (uint)(param_1 >> 0x3f) & 7;
    lVar1 = param_1 + (ulonglong)uVar2;
    return (int)((*(byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)this) &
                 '\x01' << (((byte)lVar1 & 7) - (char)uVar2 & 0x1f)) != 0);
  }
  return 0;
}




/* public: unsigned char * __ptr64 __cdecl TBitmap::GetBitmapData(void) __ptr64 */

uchar * __thiscall TBitmap::GetBitmapData(TBitmap *this)

{
                    /* 0x18760  168  ?GetBitmapData@TBitmap@@QEAAPEAEXZ */
  return *(uchar **)this;
}




/* public: int __cdecl TBitmap::SetBit(__int64,int,int) __ptr64 */

int __thiscall TBitmap::SetBit(TBitmap *this,__int64 param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  
                    /* 0x18770  284  ?SetBit@TBitmap@@QEAAH_JHH@Z */
  if ((-1 < param_1) && (param_1 <= *(longlong *)(this + 0x10))) {
    lVar4 = (longlong)param_3;
    if (0 < param_3) {
      if (param_2 == 0) {
        do {
          uVar3 = (uint)param_1 & 7;
          lVar1 = param_1;
          if (param_1 < 0) {
            lVar1 = param_1 + 7;
            uVar3 = uVar3 - 8;
          }
          param_1 = param_1 + 1;
          pbVar2 = (byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)this);
          *pbVar2 = *pbVar2 & ~(byte)(1 << (uVar3 & 0x1f));
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        return 1;
      }
      do {
        uVar3 = (uint)param_1 & 7;
        lVar1 = param_1;
        if (param_1 < 0) {
          lVar1 = param_1 + 7;
          uVar3 = uVar3 - 8;
        }
        param_1 = param_1 + 1;
        pbVar2 = (byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)this);
        *pbVar2 = *pbVar2 | (byte)(1 << (uVar3 & 0x1f));
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return 1;
  }
  return 0;
}




/* public: __cdecl TBuffer::TBuffer(void) __ptr64 */

TBuffer * __thiscall TBuffer::TBuffer(TBuffer *this)

{
                    /* 0x18820  47  ??0TBuffer@@QEAA@XZ */
  *(undefined8 *)this = 1;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




/* public: __cdecl TBuffer::~TBuffer(void) __ptr64 */

void __thiscall TBuffer::~TBuffer(TBuffer *this)

{
                    /* 0x18840  65  ??1TBuffer@@QEAA@XZ */
  if (*(int *)this != 0) {
    if (*(void **)(this + 8) != (void *)0x0) {
      free(*(void **)(this + 8));
    }
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* public: int __cdecl TBuffer::EnableAutoRelease(int) __ptr64 */

int __thiscall TBuffer::EnableAutoRelease(TBuffer *this,int param_1)

{
  int iVar1;
  
                    /* 0x18870  154  ?EnableAutoRelease@TBuffer@@QEAAHH@Z */
  iVar1 = *(int *)this;
  *(int *)this = param_1;
  return iVar1;
}




/* public: void __cdecl TBuffer::Free(void) __ptr64 */

void __thiscall TBuffer::Free(TBuffer *this)

{
                    /* 0x18880  157  ?Free@TBuffer@@QEAAXXZ */
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: void * __ptr64 __cdecl TBuffer::Malloc(int) __ptr64 */

void * __thiscall TBuffer::Malloc(TBuffer *this,int param_1)

{
  void *pvVar1;
  
                    /* 0x188b0  265  ?Malloc@TBuffer@@QEAAPEAXH@Z */
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  *(int *)(this + 4) = param_1;
  pvVar1 = operator_new((longlong)param_1);
  *(void **)(this + 8) = pvVar1;
  return pvVar1;
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
    FUN_180019a8c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180019a6c();
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
LAB_180018976:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18004d428 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18004d428;
        pvVar1 = DAT_18004d428;
      }
      DAT_18004d428 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180018976;
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
    uVar3 = FUN_180019c30();
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
  
  uVar1 = FUN_180018b00(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180019fb8();
  if (cVar1 != '\0') {
    cVar1 = FUN_180019fb8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180019fb8();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180019fb8();
  FUN_180019fb8();
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

void __scrt_dllmain_uninitialize_c(IStorageDevice *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_18004d438);
    return;
  }
  iVar2 = IStorageDevice::ConvertVolume(param_1);
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
  FUN_180019fb8();
  FUN_180019fb8();
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
    DAT_18004d430 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180019fb8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180019fb8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180019fb8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180018b00(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18004d431 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18002c018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18002c018;
      _DAT_18004d438 = in_RAX;
      uRam000000018004d440 = in_RAX;
      _DAT_18004d448 = in_RAX;
      _DAT_18004d450 = in_RAX;
      uRam000000018004d458 = in_RAX;
      _DAT_18004d460 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18004d438);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18004d450), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18004d431 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180018c66) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180018c4f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180018c4f:
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
    DAT_18004d428 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18004d430 == '\0') || (param_2 == '\0')) {
    FUN_180019fb8();
    FUN_180019fb8();
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
  
  bVar2 = (byte)DAT_18002c018 & 0x3f;
  if (((DAT_18002c018 ^ _DAT_18004d438) >> bVar2 | (DAT_18002c018 ^ _DAT_18004d438) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18004d438,_Func);
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

undefined8 FUN_180018d2c(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18004d468,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180018e7e;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18004d498 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18004d498 != (HANDLE)0x0) goto LAB_180018e1c;
  }
  else {
    DAT_18004d498 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18004d490);
    bVar7 = 0x40 - ((byte)DAT_18002c018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18004d4a0 = DAT_18002c018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18004d4a8 = DAT_18002c018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180018e1c:
    uVar6 = FUN_180018b00(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180018e8c);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180018e7e:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180018e8c(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  if (DAT_18004d498 != (HANDLE)0x0) {
    CloseHandle(DAT_18004d498);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  uVar1 = (ulonglong)_tls_index;
  DAT_18002c004 = DAT_18002c004 + 1;
  *param_1 = DAT_18002c004;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18002c004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180018f98:
                    /* WARNING: Could not recover jumptable at 0x000180018fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18002c004;
      goto LAB_180018f98;
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
  
  if (DAT_18004d498 != (HANDLE)0x0) {
    SetEvent(DAT_18004d498);
                    /* WARNING: Could not recover jumptable at 0x000180018ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18004d498);
    return;
  }
  bVar1 = (byte)DAT_18002c018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180019fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18002c018 ^ _DAT_18004d4a8) >> bVar1 |
            (DAT_18002c018 ^ _DAT_18004d4a8) << 0x40 - bVar1))(&DAT_18004d490);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18004d498 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
    WaitForSingleObjectEx(DAT_18004d498,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018001906c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004d468);
    return;
  }
  bVar1 = (byte)DAT_18002c018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180019fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18002c018 ^ _DAT_18004d4a0) >> bVar1 |
            (DAT_18002c018 ^ _DAT_18004d4a0) << 0x40 - bVar1))
            (&DAT_18004d490,&DAT_18004d468,param_1);
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18002c018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180019134(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001800192e9. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18001931a;
  capture_previous_context((PCONTEXT)&DAT_18004d560);
  _DAT_18004d4d0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18004d5f8 = puVar3 + 0x40;
  _DAT_18004d5e0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18004d4c0 = 0xc0000409;
  _DAT_18004d4c4 = 1;
  _DAT_18004d4d8 = 1;
  DAT_18004d4e0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18002c018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18002c010;
  *(undefined8 *)(puVar3 + -8) = 0x1800193bc;
  DAT_18004d658 = _DAT_18004d4d0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001f668);
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
  *(undefined8 *)(puVar3 + -8) = 0x180019402;
  capture_current_context((PCONTEXT)&DAT_18004d560);
  _DAT_18004d4d0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18004d5f8 = puVar3 + 0x30;
  _DAT_18004d4c0 = 0xc0000409;
  _DAT_18004d4c4 = 1;
  _DAT_18004d4d8 = 1;
  DAT_18004d4e0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18001946e;
  DAT_18004d658 = _DAT_18004d4d0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001f668);
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




void FUN_180019558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018001955f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18004da30);
  return;
}




void FUN_180019568(void)

{
  __std_type_info_destroy_list(&DAT_18004da30);
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
  IStorageDevice *pIVar12;
  undefined7 uVar13;
  
  if (param_2 == 0) {
    pIVar12 = (IStorageDevice *)CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_18004da40 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18004da40 = DAT_18004da40 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18004d420 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_180019568();
      FID_conflict__RTC_Initialize();
      DAT_18004d420 = 0;
      __scrt_dllmain_uninitialize_critical();
      uVar13 = (undefined7)((ulonglong)pIVar12 >> 8);
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
    if (DAT_18004d420 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18004d420 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180019558();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18001c2b8,&DAT_18001c2c8);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18001c2a8,&DAT_18001c2b0);
        DAT_18004d420 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180019e8c();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18004da40 = DAT_18004da40 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001800198a4) */
/* WARNING: Removing unreachable block (ram,0x000180019833) */
/* WARNING: Removing unreachable block (ram,0x0001800198e7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18004da40 < 1)) {
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




undefined8 * FUN_180019954(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180019994(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800199b4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800199f4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180019a28(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180019a6c(void)

{
  undefined8 local_28 [5];
  
  FUN_180019994(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800259f0);
}




void FUN_180019a8c(void)

{
  undefined8 local_28 [5];
  
  FUN_1800199f4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180025a50);
}




/* WARNING: Removing unreachable block (ram,0x000180019b82) */
/* WARNING: Removing unreachable block (ram,0x000180019b00) */
/* WARNING: Removing unreachable block (ram,0x000180019adb) */
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
  
  DAT_18002c024 = 2;
  _DAT_18002c020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18002c028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18004da44 = DAT_18004da44 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18004da44 = DAT_18004da44 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18002c020 = 2;
    DAT_18002c024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18002c024 = 0xe;
      _DAT_18002c020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18002c020 = 5;
        DAT_18002c024 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180019c30(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18002c030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019c44(void)

{
  _DAT_18004da48 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180019c7f;
  FUN_180019c44();
  *(undefined8 *)(puVar4 + -8) = 0x180019c90;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180019c9a;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180019cb4;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180019cf5;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180019d27;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180019d49;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180019d6a;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180019d75;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180019d85;
    FUN_180019c44();
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
  
  if (DAT_18002c018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18002c018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18002c018 == 0x2b992ddfa232) {
      DAT_18002c018 = 0x2b992ddfa233;
    }
  }
  DAT_18002c010 = ~DAT_18002c018;
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




undefined * FUN_180019e68(void)

{
  return &DAT_18004da50;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180009e70();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180019e68();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180019e8c(void)

{
  return &DAT_18004da58;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180020e68; puVar1 < &DAT_180020e68; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180020e78; puVar1 < &DAT_180020e78; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180019fb8(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180019fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180019fe0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xa0));
  return;
}




void Unwind_18001a000(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x90));
  return;
}




void Unwind_18001a020(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x98));
  return;
}




void Unwind_18001a040(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xa8));
  return;
}




void Unwind_18001a060(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x110));
  return;
}




void Unwind_18001a080(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x90));
  return;
}




void Unwind_18001a090(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_18001a0b0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_18001a0d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18001a0f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_18001a110(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_18001a130(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x60));
  return;
}




void Unwind_18001a140(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xb0));
  return;
}




void Unwind_18001a150(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xb8));
  return;
}




void Unwind_18001a160(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x100));
  return;
}




void Unwind_18001a170(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x118));
  return;
}




void Unwind_18001a190(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x100));
  return;
}




void Unwind_18001a1b0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xb8));
  return;
}




void Unwind_18001a1d0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xc0));
  return;
}




void Unwind_18001a1e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18001a200(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xb0));
  return;
}




void Catch_18001a220(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001a250(undefined8 param_1,longlong param_2)

{
  FUN_180005750(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001a260(undefined8 param_1,longlong param_2)

{
  FUN_1800056b0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x20028));
  return;
}




void Unwind_18001a280(undefined8 param_1,longlong param_2)

{
  FUN_180005780((longlong *)(*(longlong *)(param_2 + 0x50) + 0x20038));
  return;
}




void Unwind_18001a2a0(void)

{
  _Init_thread_abort(&DAT_18002ca18);
  return;
}




void Unwind_18001a2b0(void)

{
  _Init_thread_abort(&DAT_18003ca58);
  return;
}




void Unwind_18001a2c0(void)

{
  _Init_thread_abort(&DAT_18003ca68);
  return;
}




void Unwind_18001a2d0(void)

{
  FUN_180005760((undefined8 *)&DAT_18002ca00);
  return;
}




void Unwind_18001a2e0(void)

{
  FUN_180005760((undefined8 *)&DAT_18002ca20);
  return;
}




void Unwind_18001a2f0(undefined8 param_1,longlong param_2)

{
  FUN_180005870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a300(undefined8 param_1,longlong param_2)

{
  FUN_180005810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a310(undefined8 param_1,longlong param_2)

{
  FUN_180005870(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001a320(undefined8 param_1,longlong param_2)

{
  FUN_180005810(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001a330(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xd0));
  return;
}




void Unwind_18001a340(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x48));
  return;
}




void Unwind_18001a350(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xa8));
  return;
}




void Unwind_18001a360(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x38));
  return;
}




void Unwind_18001a370(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001a390(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001a3b0(undefined8 param_1,longlong param_2)

{
  FUN_180005750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a3c0(undefined8 param_1,longlong param_2)

{
  FUN_1800056b0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20028));
  return;
}




void Unwind_18001a3e0(undefined8 param_1,longlong param_2)

{
  FUN_180005780((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20038));
  return;
}




void Unwind_18001a400(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_18001a420(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18001a440(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xe0));
  return;
}




void Unwind_18001a450(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Catch_18001a460(undefined8 param_1,longlong param_2)

{
  FUN_180009d20(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a490(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001a4b0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x70));
  return;
}




void Unwind_18001a4e0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x80));
  return;
}




void Unwind_18001a510(undefined8 param_1,longlong param_2)

{
  FUN_180008070(*(longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18001a520(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x88) + 0x20));
  return;
}




void Unwind_18001a530(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x28));
  return;
}




void Unwind_18001a540(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x70));
  return;
}




void Unwind_18001a570(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT(*(CNtfsMFT **)(param_2 + 0x40));
  return;
}




void Unwind_18001a580(undefined8 param_1,longlong param_2)

{
  FUN_180007fe0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xf8));
  return;
}




void Unwind_18001a5a0(undefined8 param_1,longlong param_2)

{
  FUN_180007f90(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18001a5b0(undefined8 param_1,longlong param_2)

{
  FUN_180007fc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18001a5c0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::
  ~CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            (*(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5d0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5e0(undefined8 param_1,longlong param_2)

{
  FUN_180007fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001a5f0(undefined8 param_1,longlong param_2)

{
  FUN_180007f90(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18001a600(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18001a610(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x78) + 0x20));
  return;
}




void Unwind_18001a620(undefined8 param_1,longlong param_2)

{
  FUN_180007f90(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_18001a630(undefined8 param_1,longlong param_2)

{
  FUN_180007fc0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001a640(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Unwind_18001a670(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Unwind_18001a6a0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x28));
  return;
}




void Unwind_18001a6b0(undefined8 param_1,longlong param_2)

{
  TBuffer::~TBuffer((TBuffer *)(param_2 + 0x28));
  return;
}




void Unwind_18001a6c0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x68));
  return;
}




void Unwind_18001a6d0(undefined8 param_1,longlong param_2)

{
  CNtfsAttributeList::~CNtfsAttributeList((CNtfsAttributeList *)(param_2 + 0x38));
  return;
}




void Unwind_18001a6e0(undefined8 param_1,longlong param_2)

{
  TBuffer::~TBuffer((TBuffer *)(param_2 + 0x48));
  return;
}




void Unwind_18001a6f0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x38));
  return;
}




void Unwind_18001a720(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Unwind_18001a750(undefined8 param_1,longlong param_2)

{
  FUN_180008070(*(longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18001a760(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x28) + 0x20));
  return;
}




void Unwind_18001a770(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x30));
  return;
}




void Unwind_18001a780(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x38));
  return;
}




void Unwind_18001a7b0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Catch_18001a7c0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a7f0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001a820(undefined8 param_1,longlong param_2)

{
  FUN_18000a010(*(longlong **)(param_2 + 0x40));
  return;
}




undefined8 Catch_18001a830(void)

{
  return 0x18000a07c;
}




void Unwind_18001a850(undefined8 param_1,longlong param_2)

{
  FUN_180009fe0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18001a860(undefined8 param_1,longlong param_2)

{
  FUN_180009fe0((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_18001a870(undefined8 param_1,longlong param_2)

{
  FUN_18000a010((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18001a880(undefined8 param_1,longlong param_2)

{
  FUN_18000a010((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_18001a890(undefined8 param_1,longlong param_2)

{
  FUN_180009fe0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18001a8a0(undefined8 param_1,longlong param_2)

{
  FUN_18000a010((longlong *)(param_2 + 0x38));
  return;
}




void Catch_18001a8b0(undefined8 param_1,longlong param_2)

{
  FUN_180009d20(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a8e0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a910(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x98),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a950(undefined8 param_1,longlong param_2)

{
  FUN_180009d20(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a980(undefined8 param_1,longlong param_2)

{
  FUN_180009d20(*(undefined8 *)(param_2 + 0x60),*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18001a9b0(undefined8 param_1,CHardDriveIOSetting *param_2)

{
  CHardDriveIOSetting *pCVar1;
  
  pCVar1 = CHardDriveIOSetting::operator=(*(CHardDriveIOSetting **)(param_2 + 0x60),param_2);
  FUN_18000f930(pCVar1,*(void **)(param_2 + 0x78),*(ulonglong *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18001aa50(undefined8 param_1,longlong param_2)

{
  FUN_180007fe0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_18001aa60(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_18001aa70(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_18001aa80(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_18001aa90(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(*(longlong *)(param_2 + 0x40) + 0xc0));
  return;
}




void Unwind_18001aab0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            ((CNtfsFileRecordAttribute *)(*(longlong *)(param_2 + 0x40) + 0x118));
  return;
}




void Unwind_18001aad0(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10138));
  return;
}




void Unwind_18001aaf0(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10150));
  return;
}




void Unwind_18001ab10(undefined8 param_1,longlong param_2)

{
  FUN_18000c620((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10168));
  return;
}




void Unwind_18001ab30(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(*(longlong *)(param_2 + 0x40) + 0x10188));
  return;
}




void Unwind_18001ab50(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x40) + 0x101a8));
  return;
}




void Unwind_18001ab70(undefined8 param_1,longlong param_2)

{
  FUN_180007fe0((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_18001ab80(undefined8 param_1,longlong param_2)

{
  FUN_180007fe0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_18001ab90(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x28));
  return;
}




void Unwind_18001aba0(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x50) + 0x40));
  return;
}




void Unwind_18001abb0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(*(longlong *)(param_2 + 0x50) + 0x60));
  return;
}




void Unwind_18001abc0(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(*(longlong *)(param_2 + 0x50) + 0xc0));
  return;
}




void Unwind_18001abe0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            ((CNtfsFileRecordAttribute *)(*(longlong *)(param_2 + 0x50) + 0x118));
  return;
}




void Unwind_18001ac00(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10138));
  return;
}




void Unwind_18001ac20(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10150));
  return;
}




void Unwind_18001ac40(undefined8 param_1,longlong param_2)

{
  FUN_18000c620((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10168));
  return;
}




void Unwind_18001ac60(undefined8 param_1,longlong param_2)

{
  TBitmap::~TBitmap((TBitmap *)(*(longlong *)(param_2 + 0x50) + 0x10188));
  return;
}




void Unwind_18001ac80(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(*(longlong *)(param_2 + 0x50) + 0x101a8));
  return;
}




void Unwind_18001aca0(undefined8 param_1,longlong param_2)

{
  FUN_180007f90(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_18001acb0(undefined8 param_1,longlong param_2)

{
  FUN_180007fc0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_18001acc0(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001acd0(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18001ace0(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18001acf0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x58));
  return;
}




void Unwind_18001ad00(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x38));
  return;
}




void Unwind_18001ad10(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord(*(CNtfsFileRecord **)(param_2 + 0x98));
  return;
}




void Unwind_18001ad20(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x80));
  return;
}




void Unwind_18001ad50(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_2 + 0x38));
  return;
}




void Unwind_18001ad60(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute(*(CNtfsFileRecordAttribute **)(param_2 + 200))
  ;
  return;
}




void Unwind_18001ad70(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001ad80(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_2 + 0x58));
  return;
}




void Unwind_18001ad90(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            (*(CNtfsFileRecordAttribute **)(param_2 + 0xe8));
  return;
}




void Unwind_18001ada0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x40));
  return;
}




void Unwind_18001adb0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x88));
  return;
}




void Unwind_18001ade0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x40));
  return;
}




void Unwind_18001adf0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x70));
  return;
}




void Unwind_18001ae00(undefined8 param_1,longlong param_2)

{
  FUN_18000c690((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18001ae10(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18001ae20(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord(*(CNtfsFileRecord **)(param_2 + 0xc0));
  return;
}




void Unwind_18001ae30(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18001ae40(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::
  ~CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            (*(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               **)(param_2 + 0x20));
  return;
}




void Unwind_18001ae50(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x60));
  return;
}




void Unwind_18001ae60(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x70));
  return;
}




void Unwind_18001ae70(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x88));
  return;
}




void Unwind_18001aea0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x20));
  return;
}




void Unwind_18001aeb0(undefined8 param_1,longlong param_2)

{
  FUN_180008070(param_2 + 0x48);
  return;
}




void Unwind_18001aec0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x68));
  return;
}




void Unwind_18001aed0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0xd8));
  return;
}




void Unwind_18001aee0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
              *)(param_2 + 0x38));
  return;
}




void Unwind_18001aef0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x28));
  return;
}




void Unwind_18001af20(undefined8 param_1,longlong param_2)

{
  FUN_180008070(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001af30(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0xd8) + 0x20));
  return;
}




void Unwind_18001af40(undefined8 param_1,longlong param_2)

{
  FUN_180008070(param_2 + 0x30);
  return;
}




void Unwind_18001af50(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x50));
  return;
}




void Unwind_18001af60(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0xb8));
  return;
}




void Unwind_18001af70(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0xb0));
  return;
}




void Unwind_18001af80(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::
  ~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            (*(CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               **)(param_2 + 0x40));
  return;
}




void Unwind_18001af90(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::
  ~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            (*(CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
               **)(param_2 + 0x20));
  return;
}




void Unwind_18001afa0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_2 + 0x28));
  return;
}




void Unwind_18001afb0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x80));
  return;
}




void Unwind_18001afe0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            (*(CNtfsFileRecordAttribute **)(param_2 + 0x80));
  return;
}




void Unwind_18001aff0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Unwind_18001b020(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            (*(CNtfsFileRecordAttribute **)(param_2 + 0x68));
  return;
}




void Unwind_18001b030(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x58));
  return;
}




void Unwind_18001b060(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            (*(CNtfsFileRecordAttribute **)(param_2 + 0x58));
  return;
}




void Unwind_18001b070(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x80));
  return;
}




void Unwind_18001b0a0(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(*(longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18001b0b0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x88) + 8));
  return;
}




void Unwind_18001b0c0(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_18001b0d0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
  ::
  ~CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
            ((CSimpleArray<struct_tagCNtfsFileRecordForMultiRecord,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagCNtfsFileRecordForMultiRecord>_>
              *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_18001b0e0(undefined8 param_1,longlong param_2)

{
  CNtfsAttributeList::~CNtfsAttributeList
            ((CNtfsAttributeList *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_18001b0f0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_18001b100(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
  ::
  ~CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
            (*(CSimpleArray<struct_tagAttriListElement,class_MyTemplate::CSimpleArrayEqualHelper<struct_tagAttriListElement>_>
               **)(param_2 + 0x48));
  return;
}




void Unwind_18001b110(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18001b120(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x78) + 8));
  return;
}




void Unwind_18001b130(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x68));
  return;
}




void Unwind_18001b160(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(*(longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18001b170(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x28) + 8));
  return;
}




void Unwind_18001b180(undefined8 param_1,longlong param_2)

{
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)(param_2 + 0x48));
  return;
}




void Unwind_18001b190(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_2 + 0x70));
  return;
}




void Unwind_18001b1a0(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0x120));
  return;
}




void Unwind_18001b1b0(undefined8 param_1,longlong param_2)

{
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord((CNtfsMultiFileRecord *)(param_2 + 0xd0));
  return;
}




void Unwind_18001b1c0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x60));
  return;
}




void Unwind_18001b1d0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::
  ~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            ((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
              *)(param_2 + 0x30));
  return;
}




void Unwind_18001b1e0(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_2 + 0x60));
  return;
}




void Unwind_18001b1f0(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0x110));
  return;
}




void Unwind_18001b200(undefined8 param_1,longlong param_2)

{
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord((CNtfsMultiFileRecord *)(param_2 + 0xc0));
  return;
}




void Unwind_18001b210(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x48));
  return;
}




void Unwind_18001b220(undefined8 param_1,longlong param_2)

{
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)(param_2 + 0x28));
  return;
}




void Unwind_18001b230(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_2 + 0xf0));
  return;
}




void Unwind_18001b240(undefined8 param_1,longlong param_2)

{
  FUN_180008010((CNtfsMFT *)(param_2 + 0x1c0));
  return;
}




void Unwind_18001b250(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(param_2 + 0x160));
  return;
}




void Unwind_18001b260(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180016a40((undefined8 *)(param_2 + 0xb8),param_2,param_3,param_4);
  return;
}




void Unwind_18001b270(undefined8 param_1,longlong param_2)

{
  ChunkCache::~ChunkCache((ChunkCache *)(param_2 + 0x60));
  return;
}




void Unwind_18001b280(undefined8 param_1,longlong param_2)

{
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)(param_2 + 0x40));
  return;
}




void Unwind_18001b290(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_2 + 0x50));
  return;
}




void Unwind_18001b2a0(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0xc0));
  return;
}




void Unwind_18001b2b0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x58));
  return;
}




void Unwind_18001b2e0(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(*(longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18001b2f0(undefined8 param_1,longlong param_2)

{
  CHardDriveIOSetting::~CHardDriveIOSetting((CHardDriveIOSetting *)(param_2 + 0x38));
  return;
}




void Unwind_18001b300(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0xd0));
  return;
}




void Unwind_18001b310(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x48));
  return;
}




void Unwind_18001b320(undefined8 param_1,longlong param_2)

{
  FUN_180011680((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18001b330(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_18001b340(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(param_2 + 0xa0));
  return;
}




void Unwind_18001b350(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0x100));
  return;
}




void Unwind_18001b360(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x50));
  return;
}




void Unwind_18001b370(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x88));
  return;
}




void Unwind_18001b380(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute((CNtfsFileRecordAttribute *)(param_2 + 0x70));
  return;
}




void Unwind_18001b390(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0x230));
  return;
}




void Unwind_18001b3a0(undefined8 param_1,longlong param_2)

{
  CNtfsVolume::~CNtfsVolume((CNtfsVolume *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18001b3b0(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_18001b3c0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(*(longlong *)(param_2 + 0x40) + 0x78));
  return;
}




undefined * Catch_18001b3d0(void)

{
  return &DAT_18001454a;
}




void Unwind_18001b3f0(undefined8 param_1,longlong param_2)

{
  CNtfsMFT::~CNtfsMFT((CNtfsMFT *)(param_2 + 0x80));
  return;
}




void Unwind_18001b400(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_18001b420(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord(*(CNtfsFileRecord **)(param_2 + 0xe0));
  return;
}




void Unwind_18001b430(undefined8 param_1,longlong param_2)

{
  FUN_18000c5b0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18001b440(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x38));
  return;
}




void Unwind_18001b450(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x58));
  return;
}




void Unwind_18001b460(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0xc0));
  return;
}




void Unwind_18001b4a0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecordAttribute::~CNtfsFileRecordAttribute
            (*(CNtfsFileRecordAttribute **)(param_2 + 0xc0));
  return;
}




void Unwind_18001b4b0(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(param_2 + 0x38);
  return;
}




void Unwind_18001b4c0(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(param_2 + 0x40));
  return;
}




void Unwind_18001b4d0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x28));
  return;
}




void Unwind_18001b500(undefined8 param_1,longlong param_2)

{
  FUN_1800116f0(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001b510(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x30) + 8));
  return;
}




void Unwind_18001b520(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList(*(CNtfsRunList **)(param_2 + 0x68));
  return;
}




void Unwind_18001b530(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x98));
  return;
}




void Unwind_18001b570(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList(*(CNtfsRunList **)(param_2 + 0x58));
  return;
}




void Unwind_18001b580(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x50));
  return;
}




void Unwind_18001b590(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(param_2 + 0x68));
  return;
}




void Unwind_18001b5a0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            ((CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
              *)(param_2 + 0x68));
  return;
}




void Unwind_18001b5b0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x58));
  return;
}




void Unwind_18001b5e0(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::LoadSetting(*(CHardDriveIOSetting **)(param_2 + 0x60));
  return;
}




void Unwind_18001b610(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList(*(CNtfsRunList **)(param_2 + 0x60));
  return;
}




void Unwind_18001b620(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>::
  ~CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
            (*(CSimpleArray<unsigned_short,class_MyTemplate::CSimpleArrayEqualHelper<unsigned_short>_>
               **)(param_2 + 0x48));
  return;
}




void Unwind_18001b630(undefined8 param_1,longlong param_2)

{
  FUN_180011680((longlong *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_18001b640(undefined8 param_1,longlong param_2)

{
  FUN_180016380((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_18001b650(undefined8 param_1,longlong param_2)

{
  CHardDriveIO::~CHardDriveIO((CHardDriveIO *)(param_2 + 0x30));
  return;
}




void Unwind_18001b660(undefined8 param_1,longlong param_2)

{
  FUN_180011680((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_18001b670(undefined8 param_1,longlong param_2)

{
  FUN_180016990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001b680(undefined8 param_1,longlong param_2)

{
  CNtfsRunList::~CNtfsRunList((CNtfsRunList *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_18001b690(undefined8 param_1,longlong param_2)

{
  FUN_1800169c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001b6a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800169d0((undefined8 *)(*(longlong *)(param_2 + 0x20) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18001b6b0(undefined8 param_1,longlong param_2)

{
  FUN_180016a30(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_18001b6c0(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(*(longlong *)(param_2 + 0x28) + 0x20));
  return;
}




void Unwind_18001b6d0(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(*(longlong *)(param_2 + 0x28) + 0x28));
  return;
}




void Unwind_18001b6e0(undefined8 param_1,longlong param_2)

{
  FUN_1800169c0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_18001b6f0(undefined8 param_1,longlong param_2)

{
  FUN_180016a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001b700(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18001b710(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_18001b720(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800169d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18001b730(undefined8 param_1,longlong param_2)

{
  FUN_180016ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18001b740(undefined8 param_1,longlong param_2)

{
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord
            ((CNtfsMultiFileRecord *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18001b750(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::
  ~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            ((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
              *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_18001b760(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_18001b770(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18001b790(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800169d0((undefined8 *)(*(longlong *)(param_2 + 0x58) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18001b7a0(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18001b7b0(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18001b7c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180016950(*(longlong **)(param_2 + 0x50));
  }
  return;
}




void Unwind_18001b7f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18001b810(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18001b830(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18001b840(undefined8 param_1,longlong param_2)

{
  FUN_180016990(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_18001b850(undefined8 param_1,longlong param_2)

{
  FUN_1800169c0(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_18001b860(undefined8 param_1,longlong param_2)

{
  FUN_180016990(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_18001b870(undefined8 param_1,longlong param_2)

{
  FUN_1800169c0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_18001b880(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_18001b8a0(undefined8 param_1,longlong param_2)

{
  FUN_180016950((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_18001b8b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    FUN_180016950(*(longlong **)(param_2 + 0x30));
  }
  return;
}




void Unwind_18001b8e0(undefined8 param_1,longlong param_2)

{
  FUN_180016990(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_18001b8f0(void)

{
  return 0x180017886;
}




undefined * Catch_18001b910(void)

{
  return &DAT_1800178f4;
}




void Unwind_18001b930(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001b950(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18001b960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180016970(*(longlong **)(param_2 + 0x58));
  }
  return;
}




void Unwind_18001b990(undefined8 param_1,longlong param_2)

{
  FUN_180016ab0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18001b9a0(undefined8 param_1,longlong param_2)

{
  CNtfsMultiFileRecord::~CNtfsMultiFileRecord
            ((CNtfsMultiFileRecord *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_18001b9b0(undefined8 param_1,longlong param_2)

{
  MyTemplate::
  CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
  ::
  ~CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
            ((CSimpleArray<class_CNtfsFileRecordAttribute,class_MyTemplate::CSimpleArrayEqualHelper<class_CNtfsFileRecordAttribute>_>
              *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_18001b9c0(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_18001b9d0(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18001b9e0(undefined8 param_1,longlong param_2)

{
  FUN_180016970((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18001b9f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18001ba10(undefined8 param_1,longlong param_2)

{
  CNtfsFileRecord::~CNtfsFileRecord((CNtfsFileRecord *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




undefined8 Catch_18001ba20(void)

{
  return 0x180018166;
}




void FUN_18001ba53(undefined8 param_1,longlong param_2)

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




void FUN_18001bac0(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18001bad7(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18001baf3(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001bb30(void)

{
  _DAT_18002ca00 =
       LZCompression<unsigned_char_const*___ptr64,class_RandomAccessIterator<class_ChunkUnit<class_ChunkCacheImplDiscrete<4096,16>,4096,16>,unsigned_char,__int64>,unsigned_char*___ptr64>
       ::vftable;
  return;
}



