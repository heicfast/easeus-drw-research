
void FUN_180001000(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180001040(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180003b20(param_1);
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




longlong * FUN_1800010c0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180003dd0();
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
      goto LAB_1800011b5;
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
LAB_1800011b5:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180001a10(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180001960((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180001960(plVar9,plVar10,plVar13);
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
FUN_1800012c0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180003bb0(param_1,param_6);
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
      goto LAB_18000133f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000133f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000133f:
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
        goto LAB_1800014e5;
      }
LAB_180001456:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180001456;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180003ca0(param_1,plVar2);
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
LAB_1800014e5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180001540(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_1800012c0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_1800042e0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_1800012c0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_1800042e0(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_1800012c0(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_1800042e0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_1800020a0((longlong *)&local_38);
      uVar2 = FUN_1800042e0((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_1800012c0(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_1800012c0(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_1800042e0(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180002030((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_1800042e0(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1800012c0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_1800012c0(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180001770(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180001770(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_1800042e0(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_1800042e0(plVar5 + 4,param_4);
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
      puVar4 = FUN_1800012c0(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_1800042e0(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_1800012c0(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_180003d00(param_5 + 8);
    FUN_180001c90(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_180001960(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000d000);
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




void FUN_180001a10(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000d000,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_180001a80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CExFatFileSystemAnalyserModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_180003ae0();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CExFatFileSystemAnalyserModule>_>_>
             ::vftable;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1ae0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1ae0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x1ae0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1af0  4  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1af0  5  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x1af0  6  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180001b10(undefined8 *param_1)

{
  FUN_180004660(param_1);
  return;
}




void FUN_180001b30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003f40((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_180001b70(undefined8 *param_1)

{
  FUN_180004660(param_1);
  return;
}




void FUN_180001b90(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180001bc0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180001bd0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_180001bf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003f40(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180001c20(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180001c40(undefined8 *param_1)

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




void FUN_180001c90(longlong *param_1)

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




void FUN_180001d00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003f40(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180001d30(longlong *param_1)

{
  FUN_180003d00(param_1 + 4);
  FUN_180001c90(param_1);
  return;
}




void FUN_180001d60(longlong *param_1)

{
  FUN_180003d00(param_1);
  return;
}




void FUN_180001d80(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1da0  8  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1da0  9  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1da0  10  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z
                       0x1da0  11  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z
                       0x1da0  12  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1da0  13  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x1da0  14  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x1da0  15  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




bool FUN_180001db0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180001de0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180001e10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180001e40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180001e70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_180001ea0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180001ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180001ef0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180001f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180001f40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180001f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180001f90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180001fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180001fe0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180002021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




longlong * FUN_180002030(longlong *param_1)

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




longlong * FUN_1800020a0(longlong *param_1)

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




undefined8 * FUN_180002130(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x58);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *puVar3 = CExFatFileSystemAnalyser::vftable;
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    puVar3[1] = *(undefined8 *)(param_3 + 8);
    puVar3[2] = uVar2;
    puVar3[3] = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_3 + 0x20);
    puVar3[5] = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)((longlong)puVar3 + 0x34) = *(undefined4 *)(param_3 + 0x34);
    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_3 + 0x38);
    *puVar3 = CMomObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar3 + 8) = 0;
    *puVar3 = CMomAggObject<class_CExFatFileSystemAnalyser>::vftable;
    puVar3[9] = CMomAggObject<class_CExFatFileSystemAnalyser>::vftable;
    puVar3[10] = uVar1;
    *puVar3 = CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>::vftable;
    puVar3[9] = CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>::vftable;
    *(undefined4 *)(puVar3 + 8) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180002210(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = CExFatFileSystemAnalyser::vftable;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
    puVar2[5] = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38);
    *puVar2 = CMomObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 0x40);
    *puVar2 = CMomAggObject<class_CExFatFileSystemAnalyser>::vftable;
    puVar2[9] = CMomAggObject<class_CExFatFileSystemAnalyser>::vftable;
    puVar2[10] = *(undefined8 *)(param_2 + 0x50);
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>::vftable;
    puVar2[9] = CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>::vftable;
    *(undefined4 *)(puVar2 + 8) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800022e0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800044f0(puVar1,*param_2,*param_3);
    *puVar1 = CMomObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = CMomCloneObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar1 + 8) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180002370(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = CExFatFileSystemAnalyser::vftable;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x20);
    puVar2[5] = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x38);
    *puVar2 = CMomObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar2 + 8) = 0;
    *puVar2 = CMomCloneObject<class_CExFatFileSystemAnalyser>::vftable;
    *(undefined4 *)(puVar2 + 8) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




void FUN_180002410(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_180002430(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000243e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




undefined8 * FUN_180002450(undefined8 *param_1,uint param_2)

{
  FUN_180004660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800024a0(undefined8 *param_1,uint param_2)

{
  FUN_180004660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800024f0(undefined8 *param_1,uint param_2)

{
  FUN_180004660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002540(undefined8 *param_1,uint param_2)

{
  FUN_180004660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002590(undefined8 *param_1,uint param_2)

{
  FUN_180004660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800025d0(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_18000d028 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_180003df0(local_68,param_2,sVar13);
  uVar15 = local_50;
  uVar3 = local_58;
  local_98 = (longlong *)(param_1 + 0x10);
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
      if (uVar3 <= uVar2) goto LAB_1800026a7;
LAB_180002708:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002708;
LAB_1800026a7:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000293c;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_180003df0(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_180002817;
LAB_180002867:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002867;
LAB_180002817:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000286f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_180001040(plVar11,&DAT_180007270,local_a8);
    FUN_180001540(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000286f;
    }
    else if (iVar6 < 0) goto LAB_18000286f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_180003d00(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_180003d00(&local_88);
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
LAB_18000293c:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18000d000);
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
    FUN_1800010c0(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18000d000);
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




/* public: virtual void __cdecl IStorageDevice::ReleaseBitlocker(void) __ptr64 */

void __thiscall IStorageDevice::ReleaseBitlocker(IStorageDevice *this)

{
                    /* 0x2a20  28  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




void FUN_180002a30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  return;
}




undefined4 FUN_180002a40(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_180002a50(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x40);
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x2a60  20  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x2a60  21  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x2a60  22  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x2a60  24  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x2a60  26  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x2a60  29  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x2a60  30  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x2a60  31  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x2a70  19  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180002a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




undefined4 FUN_180002a80(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + -8);
}




CLogWriter * FUN_180002a90(longlong param_1,CLogWriter *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  CLogWriter *pCVar3;
  CLogWriter *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (CLogWriter *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1 + -0x48;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001000(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1 + -0x48;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001000(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (CLogWriter *)0x8;
    free(_Memory);
  }
  if (pCVar3 == (CLogWriter *)0x0) {
    return (CLogWriter *)0x0;
  }
  pCVar3 = CLogWriter::operator=(pCVar3,param_2);
  return pCVar3;
}




CLogWriter * FUN_180002c20(undefined8 param_1,CLogWriter *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  CLogWriter *pCVar3;
  CLogWriter *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (CLogWriter *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001000(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001000(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (CLogWriter *)0x8;
    free(_Memory);
  }
  if (pCVar3 == (CLogWriter *)0x0) {
    return (CLogWriter *)0x0;
  }
  pCVar3 = CLogWriter::operator=(pCVar3,param_2);
  return pCVar3;
}




void FUN_180002da0(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18000d028 ^ (ulonglong)auStack_138;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '*') {
      FUN_1800046e0(param_1 + -0x48,param_2);
    }
    else {
      puVar1 = (undefined8 *)
               (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),0);
      if (puVar1 == (undefined8 *)0x0) {
        cVar3 = *param_2;
        pcVar2 = local_117;
        local_118 = '*';
        if (cVar3 != '\0') {
          do {
            *pcVar2 = cVar3;
            pcVar2 = pcVar2 + 1;
            cVar3 = pcVar2[(longlong)param_2 - (longlong)local_117];
          } while (cVar3 != '\0');
        }
        *pcVar2 = '\0';
        FUN_1800046e0(param_1 + -0x48,&local_118);
      }
      else {
        (**(code **)*puVar1)(puVar1,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




int FUN_180002e60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + -8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = *(int *)(param_1 + -8);
  if (*piVar1 < 0) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) {
    return iVar3;
  }
  plVar2 = (longlong *)(param_1 + -0x48);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x98))(plVar2,1);
  }
  return iVar3;
}




undefined8 FUN_180002ea0(undefined *param_1,undefined8 param_2)

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




void FUN_180002ed0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_180003c00(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_180002f20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  return;
}




void FUN_180002f30(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002f33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}




int FUN_180002f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *_Memory;
  longlong *_Memory_00;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  
  _Memory_00 = (longlong *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  plVar1 = (longlong *)operator_new(8);
  _Memory = _Memory_00;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              dnc::
              ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
              ::vftable;
    _Memory = plVar1;
  }
  plVar1 = (longlong *)operator_new(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
              ::vftable;
    local_res20 = plVar1;
    lVar2 = (**(code **)(*_Memory + 0x10))(_Memory);
    plVar1[1] = lVar2;
    plVar1[2] = (longlong)&local_res10;
    plVar1[3] = (longlong)&local_res18;
    _Memory_00 = plVar1;
  }
  local_res20 = _Memory_00;
  if (_Memory != (longlong *)0x0) {
    free(_Memory);
  }
  lVar2 = FUN_180001000(&local_res20);
  *param_4 = lVar2;
  if (_Memory_00 != (longlong *)0x0) {
    free(_Memory_00);
  }
  return (*param_4 != 0) - 1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180003040(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_18000d028 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_180003df0(local_68,param_2,sVar12);
  uVar6 = local_50;
  uVar5 = local_58;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
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
      if (uVar5 <= uVar3) goto LAB_180003120;
LAB_1800031af:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_1800031af;
LAB_180003120:
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
      if (uVar5 < uVar3) goto LAB_180003174;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_180003177;
    }
    if (-1 < iVar7) goto LAB_180003177;
  }
LAB_180003174:
  puVar11 = puVar2;
LAB_180003177:
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
  if (puVar11 == *(undefined8 **)(param_1 + 0x10)) {
    *param_3 = 0;
  }
  else {
    *param_3 = (int)((longlong)(puVar11[9] - puVar11[8]) >> 3);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_98);
  return;
}




/* public: virtual int __cdecl IStorageDevice::GetBitlockerStatus(void) __ptr64 */

int __thiscall IStorageDevice::GetBitlockerStatus(IStorageDevice *this)

{
                    /* 0x3230  23  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




undefined1 FUN_180003240(void)

{
  return 0;
}




undefined8 FUN_180003250(void)

{
  return DAT_18000e1c8;
}




longlong FUN_180003260(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x48;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000180003278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x50))();
  return lVar1;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x32a0  25  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x0001800032a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




char * FUN_1800032b0(void)

{
  return "ExFatFileSystemAnalyser";
}




char * FUN_1800032c0(void)

{
  return "CExFatFileSystemAnalyserModule";
}




undefined * FUN_1800032e0(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_18000e1d0 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000e1e0) && (_Init_thread_header(&DAT_18000e1e0), DAT_18000e1e0 == -1)) {
      DAT_18000e1d8 = (undefined8 *)FUN_1800036d0("Thread");
      _Init_thread_footer(&DAT_18000e1e0);
    }
    if (DAT_18000e1d8 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_18000e208) && (_Init_thread_header(&DAT_18000e208), DAT_18000e208 == -1)) {
        FUN_180001a80((undefined8 *)&DAT_18000e1e8);
        atexit(FUN_180006cf0);
        _Init_thread_footer(&DAT_18000e208);
        DAT_18000e1d0 = &DAT_18000e1e8;
      }
      else {
        DAT_18000e1d0 = &DAT_18000e1e8;
      }
    }
    else {
      if (DAT_18000e780 == (undefined1 *)0x0) {
        DAT_18000e780 = &DAT_18000e680;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18000d2d8,&DAT_18000eea0);
        FUN_180003520(pcVar2,DAT_18000e780,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_18000e1d8)(DAT_18000e1d8,DAT_18000e780);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_18000e1d0 == (undefined *)0x0) {
          if ((*piVar4 < DAT_18000e230) &&
             (_Init_thread_header(&DAT_18000e230), DAT_18000e230 == -1)) {
            FUN_180001a80((undefined8 *)&DAT_18000e210);
            atexit(FUN_180006d30);
            _Init_thread_footer(&DAT_18000e230);
          }
          DAT_18000e1d0 = &DAT_18000e210;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_18000e1d0;
}




ulonglong FUN_180003520(char *param_1,undefined1 *param_2,uint *param_3)

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




undefined4 FUN_1800035c0(undefined4 param_1)

{
  char *pcVar1;
  uint local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18000e1b8) && (_Init_thread_header(&DAT_18000e1b8), DAT_18000e1b8 == -1)) {
    DAT_18000e1b0 = (undefined8 *)FUN_1800036d0("Error");
    _Init_thread_footer(&DAT_18000e1b8);
  }
  if (DAT_18000e1b0 != (undefined8 *)0x0) {
    if (DAT_18000e1c0 != (longlong *)0x0) goto LAB_18000367e;
    if (DAT_18000e340 == (undefined1 *)0x0) {
      DAT_18000e340 = &DAT_18000e240;
      local_18[0] = 0x100;
      pcVar1 = (char *)__std_type_info_name(0x18000d230,&DAT_18000eea0);
      FUN_180003520(pcVar1,DAT_18000e340,local_18);
    }
    DAT_18000e1c0 = (longlong *)(**(code **)*DAT_18000e1b0)(DAT_18000e1b0,DAT_18000e340);
  }
  if (DAT_18000e1c0 == (longlong *)0x0) {
    return param_1;
  }
LAB_18000367e:
  (**(code **)(*DAT_18000e1c0 + 0x28))();
  return param_1;
}




void FUN_1800036d0(char *param_1)

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
  
  local_18 = DAT_18000d028 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_1800037c5:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_1800037c5;
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
          FUN_180002ea0(pFVar3,hModule);
        }
      }
      goto LAB_1800037c5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_1800037f0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char cVar9;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar6 = 0;
  pcVar8 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  if (DAT_18000e450 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000e450 = &DAT_18000e350;
    pcVar2 = (char *)__std_type_info_name(0x18000d258,&DAT_18000eea0);
    FUN_180003520(pcVar2,DAT_18000e450,local_res10);
  }
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000e450;
  pcVar2 = DAT_18000e450;
  pcVar3 = pcVar8;
  if (cVar1 == cVar9) {
    do {
      if ((cVar1 == '\0') || (cVar9 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar9 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar9);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  if (DAT_18000e560 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000e560 = &DAT_18000e460;
    pcVar2 = (char *)__std_type_info_name(0x18000d290,&DAT_18000eea0);
    FUN_180003520(pcVar2,DAT_18000e560,local_res10);
  }
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000e560;
  pcVar2 = DAT_18000e560;
  pcVar3 = pcVar8;
  if (cVar1 == cVar9) {
    do {
      if ((cVar1 == '\0') || (cVar9 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar9 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar9);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  if (DAT_18000e670 == (char *)0x0) {
    DAT_18000e670 = &DAT_18000e570;
    pcVar3 = (char *)__std_type_info_name(0x18000d2b0,&DAT_18000eea0);
    pcVar2 = DAT_18000e670;
    if (DAT_18000e670 != (char *)0x0) {
      *DAT_18000e670 = '\0';
      if (*pcVar3 == 'c') {
        lVar4 = 6;
      }
      else {
        if (*pcVar3 != 's') goto LAB_1800039e3;
        lVar4 = 7;
      }
      pcVar3 = pcVar3 + lVar4;
      cVar1 = *pcVar3;
      uVar7 = uVar6;
      if (cVar1 != '\0') {
        do {
          uVar5 = (uint)uVar7;
          if (cVar1 == ':') {
            if (0xff < uVar5) goto LAB_1800039e3;
            pcVar3 = pcVar3 + 1;
            cVar1 = '.';
          }
          else if (0xff < uVar5) goto LAB_1800039e3;
          pcVar3 = pcVar3 + 1;
          uVar6 = (ulonglong)(uVar5 + 1);
          pcVar2[uVar7] = cVar1;
          cVar1 = *pcVar3;
          uVar7 = uVar6;
        } while (cVar1 != '\0');
        if (0xff < uVar5 + 1) goto LAB_1800039e3;
      }
      pcVar2[uVar6] = '\0';
    }
  }
LAB_1800039e3:
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000e670;
  pcVar2 = DAT_18000e670;
  if (cVar1 == cVar9) {
    do {
      if ((cVar1 == '\0') || (cVar9 == '\0')) break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      cVar9 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == cVar9);
  }
  if (cVar1 != *pcVar2) {
    return 0;
  }
  return param_1;
}




void FUN_180003a50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
  return;
}




int FUN_180003a60(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)((longlong)param_1 + 8);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  free(param_1);
  return iVar2;
}




int FUN_180003a90(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = param_1 + 8;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar2 = (int)param_1[8];
  if ((int)*plVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return iVar2;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x3ad0  27  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180003ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




void FUN_180003ae0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180003b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180003b60(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_180003bb0(undefined8 param_1,void *param_2)

{
  FUN_180003d00((longlong *)((longlong)param_2 + 0x40));
  FUN_180001c90((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_180003c00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180003c00(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180003d00(param_2 + 8);
    FUN_180001c90(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180003c90(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180003ca0(longlong *param_1,longlong *param_2)

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




void FUN_180003d00(longlong *param_1)

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




void FUN_180003db0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180003dd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_180003df0(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180003db0();
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
      if (pvVar3 == (void *)0x0) goto LAB_180003f33;
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
LAB_180003f33:
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




void FUN_180003f40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180003c00(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180003f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180003fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180003ff0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180004020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180004050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_180004080(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004100(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004180(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CExFatFileSystemAnalyser>_>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800041f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004270(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CExFatFileSystemAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CExFatFileSystemAnalyser>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




uint FUN_1800042e0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_180004350(undefined8 param_1,void *param_2,longlong param_3)

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




void GetModule(undefined8 param_1)

{
  DAT_18000e1c8 = param_1;
                    /* 0x43e0  32  GetModule */
  FUN_1800032e0();
  return;
}




void FUN_1800043f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1800047c0(param_1,param_2,param_3);
  *(undefined4 *)(lVar1 + 0x10) = *param_4;
  return;
}




ulonglong * FUN_180004420(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180003dd0();
      pcVar1 = (code *)swi(3);
      puVar4 = (ulonglong *)(*pcVar1)();
      return puVar4;
    }
    if (param_2 < 0x1000) {
      pvVar3 = operator_new(param_2);
    }
    else {
      uVar5 = param_2 + 0x27;
      if (uVar5 <= param_2) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar2 = operator_new(uVar5);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    param_1[2] = (longlong)pvVar3 + param_2;
    pvVar3 = (void *)*param_1;
    memset(pvVar3,0,param_2);
    param_1[1] = (longlong)pvVar3 + param_2;
  }
  return param_1;
}




undefined8 * FUN_1800044f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xff;
  *param_1 = CExFatFileSystemAnalyser::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180004d50((longlong)param_1,param_2,param_3);
  return param_1;
}




void FUN_180004530(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180004550(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180004580(longlong *param_1)

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
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  free((void *)*param_1);
  return;
}




void FUN_1800045f0(longlong *param_1)

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




void FUN_180004660(undefined8 *param_1)

{
  *param_1 = CExFatFileSystemAnalyser::vftable;
  return;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x4670  7  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




undefined4 FUN_180004680(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




longlong FUN_180004690(longlong param_1)

{
  return param_1 + 8;
}




char * FUN_1800046a0(void)

{
  return "CExFatFileSystemAnalyser";
}




undefined4 FUN_1800046b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




undefined8 FUN_1800046c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_1800046d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_1800046e0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  uint local_res10 [6];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] != '1') {
    if (DAT_18000e890 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18000e890 = &DAT_18000e790;
      pcVar1 = (char *)__std_type_info_name(0x18000d9b8,&DAT_18000eea0);
      FUN_180003520(pcVar1,DAT_18000e890,local_res10);
    }
    cVar2 = *pcVar3;
    cVar4 = *DAT_18000e890;
    pcVar1 = DAT_18000e890;
    if (cVar2 == cVar4) {
      do {
        if ((cVar2 == '\0') || (cVar4 == '\0')) break;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        cVar4 = pcVar1[1];
        pcVar1 = pcVar1 + 1;
      } while (cVar2 == cVar4);
    }
    if (cVar2 != *pcVar1) {
      return 0;
    }
  }
  return param_1;
}




void FUN_1800047c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_180004810(longlong *param_1)

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




void FUN_180004870(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint param_5,undefined8 *param_6)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  void *_Memory;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if ((param_4 != 0) && (param_2 != 0)) {
    plVar1 = (longlong *)(param_2 + 8);
    iVar7 = (*(code *)**(undefined8 **)(param_2 + 8))(plVar1);
    uVar11 = (uint)(iVar7 << 8) >> 2;
    _Memory = operator_new((ulonglong)(uint)(iVar7 << 8));
    uVar2 = param_5;
    if (_Memory != (void *)0x0) {
      uVar10 = (ulonglong)param_5 / (ulonglong)uVar11;
      uVar9 = (int)uVar10 * uVar11;
      iVar7 = (**(code **)(*plVar1 + 8))
                        (plVar1,_Memory,
                         (ulonglong)*(uint *)(param_4 + 0x50) +
                         (ulonglong)(uint)((int)uVar10 << 8) + param_3,0x100);
      puVar6 = param_6;
      while (iVar7 != 0) {
        puVar3 = (undefined8 *)*puVar6;
        puVar4 = (undefined8 *)puVar3[1];
        uVar8 = FUN_1800043f0(puVar6,puVar3,puVar4,&param_5);
        if (puVar6[1] == 0xaaaaaaaaaaaaaa9) {
LAB_180004a64:
          std::_Xlength_error("list<T> too long");
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar6[1] = puVar6[1] + 1;
        puVar3[1] = uVar8;
        *puVar4 = uVar8;
        uVar2 = *(uint *)((longlong)_Memory + (ulonglong)(uVar2 - uVar9) * 4);
        if (0xfff6 < uVar2 - 1) break;
        puVar3 = (undefined8 *)*puVar6;
        puVar4 = (undefined8 *)puVar3[1];
        param_5 = uVar2;
        uVar8 = FUN_1800043f0(puVar6,puVar3,puVar4,&param_5);
        if (puVar6[1] == 0xaaaaaaaaaaaaaa9) goto LAB_180004a64;
        puVar6[1] = puVar6[1] + 1;
        puVar3[1] = uVar8;
        *puVar4 = uVar8;
        if ((uVar2 < uVar9) || (uVar11 + uVar9 <= uVar2)) {
          uVar10 = (ulonglong)uVar2 / (ulonglong)uVar11;
          uVar9 = (int)uVar10 * uVar11;
        }
        iVar7 = (**(code **)(*plVar1 + 8))
                          (plVar1,_Memory,
                           (ulonglong)*(uint *)(param_4 + 0x50) +
                           param_3 + (ulonglong)(uint)((int)uVar10 << 8),0x100);
      }
      free(_Memory);
    }
  }
  return;
}




void FUN_180004a80(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *_Memory;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 *local_50;
  undefined8 local_48;
  char *local_40 [2];
  longlong local_30;
  
  plVar1 = (longlong *)(param_2 + 8);
  uVar5 = (**(code **)*plVar1)(plVar1);
  FUN_180004420((ulonglong *)local_40,(ulonglong)(*(int *)(param_1 + 0x20) * uVar5));
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_50 = (undefined8 *)FUN_1800047c0(&local_50,(undefined8 *)0x0,(undefined8 *)0x0);
  bVar4 = false;
  iVar7 = (uVar5 >> 5) * *(int *)(param_1 + 0x20);
  FUN_180004870(param_1,param_2,param_3,param_4,*(uint *)(param_1 + 0x38),&local_50);
  _Memory = local_50;
  puVar2 = (undefined8 *)*local_50;
  do {
    if ((puVar2 == _Memory) || (bVar4)) {
      puVar2 = (undefined8 *)*_Memory;
      *_Memory = _Memory;
      _Memory[1] = _Memory;
      local_48 = 0;
      while (puVar2 != _Memory) {
        puVar3 = (undefined8 *)*puVar2;
        free(puVar2);
        puVar2 = puVar3;
      }
      free(_Memory);
      if (local_40[0] != (char *)0x0) {
        pcVar8 = local_40[0];
        if ((0xfff < (ulonglong)(local_30 - (longlong)local_40[0])) &&
           (pcVar8 = *(char **)(local_40[0] + -8),
           (char *)0x1f < local_40[0] + (-8 - (longlong)pcVar8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pcVar8);
      }
      return;
    }
    iVar6 = (**(code **)(*plVar1 + 8))
                      (plVar1,local_40[0],
                       (ulonglong)*(uint *)(param_1 + 0x30) +
                       (ulonglong)(uint)((*(int *)(puVar2 + 2) + -2) * *(int *)(param_1 + 0x20)) +
                       param_3);
    if ((iVar6 != 0) && (iVar6 = 0, pcVar8 = local_40[0], 0 < iVar7)) {
      do {
        if (*pcVar8 == -0x7d) {
          WideCharToMultiByte(0,0,(LPCWSTR)(pcVar8 + 2),(uint)(byte)pcVar8[1],(LPSTR)(param_1 + 8),
                              0x10,(LPCSTR)0x0,(LPBOOL)0x0);
          bVar4 = true;
          break;
        }
        pcVar8 = pcVar8 + 0x20;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}




ulonglong FUN_180004c70(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint uVar2;
  size_t _Size;
  
  if (param_2 != 0) {
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (PTR_DAT_18000d008[_Size] != '\0');
    iVar1 = memcmp((void *)(param_2 + 3),PTR_DAT_18000d008,_Size);
    in_RAX = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      in_RAX = *(ulonglong *)(param_2 + 0x48);
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(ulonglong *)(param_1 + 0x18) = in_RAX;
      uVar2 = 1 << (*(byte *)(param_2 + 0x6d) & 0x1f);
      *(uint *)(param_1 + 0x20) = uVar2;
      *(ulonglong *)(param_1 + 0x28) = (ulonglong)*(uint *)(param_2 + 100);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x60);
      if (((uVar2 & 1) == 0) || (uVar2 == 1)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
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




void FUN_180004d50(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Memory;
  undefined8 uVar7;
  void *local_30 [2];
  longlong local_20;
  
  uVar7 = 0xfffffffffffffffe;
  uVar3 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = CONCAT44(0,uVar3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,uVar3) + 0x1ff;
  iVar4 = SUB164(auVar2 / auVar1,0);
  FUN_180004420((ulonglong *)local_30,(ulonglong)(iVar4 * uVar3));
  iVar5 = (**(code **)(*(longlong *)(param_2 + 8) + 8))
                    (param_2 + 8,local_30[0],param_3,SUB168(auVar2 / auVar1,0) & 0xffffffff,uVar7);
  if ((iVar5 == iVar4) &&
     (uVar6 = FUN_180004c70(param_1,(longlong)local_30[0]), (char)uVar6 != '\0')) {
    *(undefined4 *)(param_1 + 0x34) = 8;
    FUN_180004a80(param_1,param_2,param_3,(longlong)local_30[0]);
  }
  if (local_30[0] != (void *)0x0) {
    _Memory = local_30[0];
    if ((0xfff < (ulonglong)(local_20 - (longlong)local_30[0])) &&
       (_Memory = *(void **)((longlong)local_30[0] + -8),
       0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
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
    FUN_180005ee4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180005ec4();
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
LAB_180004ede:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000e8a0 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000e8a0;
        pvVar1 = DAT_18000e8a0;
      }
      DAT_18000e8a0 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180004ede;
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
    uVar3 = FUN_18000609c();
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
  
  uVar1 = FUN_180005068(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180006430();
  if (cVar1 != '\0') {
    cVar1 = FUN_180006430();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180006430();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180006430();
  FUN_180006430();
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
    _execute_onexit_table(&DAT_18000e8b0);
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
  FUN_180006430();
  FUN_180006430();
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
    DAT_18000e8a8 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180006430();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180006430();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180006430();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005068(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000e8a9 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000d028 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000d028;
      _DAT_18000e8b0 = in_RAX;
      uRam000000018000e8b8 = in_RAX;
      _DAT_18000e8c0 = in_RAX;
      _DAT_18000e8c8 = in_RAX;
      uRam000000018000e8d0 = in_RAX;
      _DAT_18000e8d8 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000e8b0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000e8c8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000e8a9 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x0001800051ce) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_1800051b7;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800051b7:
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
    DAT_18000e8a0 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000e8a8 == '\0') || (param_2 == '\0')) {
    FUN_180006430();
    FUN_180006430();
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
  
  bVar2 = (byte)DAT_18000d028 & 0x3f;
  if (((DAT_18000d028 ^ _DAT_18000e8b0) >> bVar2 | (DAT_18000d028 ^ _DAT_18000e8b0) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000e8b0,_Func);
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
                    /* WARNING: Could not recover jumptable at 0x0001800052c1. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x1800052f2;
  capture_previous_context((PCONTEXT)&DAT_18000e980);
  _DAT_18000e8f0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000ea18 = puVar3 + 0x40;
  _DAT_18000ea00 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000e8e0 = 0xc0000409;
  _DAT_18000e8e4 = 1;
  _DAT_18000e8f8 = 1;
  DAT_18000e900 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000d028;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000d020;
  *(undefined8 *)(puVar3 + -8) = 0x180005394;
  DAT_18000ea78 = _DAT_18000e8f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180008378);
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
  *(undefined8 *)(puVar3 + -8) = 0x1800053da;
  capture_current_context((PCONTEXT)&DAT_18000e980);
  _DAT_18000e8f0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000ea18 = puVar3 + 0x30;
  _DAT_18000e8e0 = 0xc0000409;
  _DAT_18000e8e4 = 1;
  _DAT_18000e8f8 = 1;
  DAT_18000e900 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180005446;
  DAT_18000ea78 = _DAT_18000e8f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180008378);
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

undefined8 FUN_180005530(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000ee50,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180005682;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000ee80 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000ee80 != (HANDLE)0x0) goto LAB_180005620;
  }
  else {
    DAT_18000ee80 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000ee78);
    bVar7 = 0x40 - ((byte)DAT_18000d028 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000ee88 = DAT_18000d028 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000ee90 = DAT_18000d028 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180005620:
    uVar6 = FUN_180005068(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180005690);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180005682:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180005690(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  if (DAT_18000ee80 != (HANDLE)0x0) {
    CloseHandle(DAT_18000ee80);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000d014 = DAT_18000d014 + 1;
  *param_1 = DAT_18000d014;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000d014;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000579c:
                    /* WARNING: Could not recover jumptable at 0x0001800057a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000d014;
      goto LAB_18000579c;
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
  
  if (DAT_18000ee80 != (HANDLE)0x0) {
    SetEvent(DAT_18000ee80);
                    /* WARNING: Could not recover jumptable at 0x0001800057f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000ee80);
    return;
  }
  bVar1 = (byte)DAT_18000d028 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000d028 ^ _DAT_18000ee90) >> bVar1 |
            (DAT_18000d028 ^ _DAT_18000ee90) << 0x40 - bVar1))(&DAT_18000ee78);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000ee80 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
    WaitForSingleObjectEx(DAT_18000ee80,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180005870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000ee50);
    return;
  }
  bVar1 = (byte)DAT_18000d028 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000d028 ^ _DAT_18000ee88) >> bVar1 |
            (DAT_18000d028 ^ _DAT_18000ee88) << 0x40 - bVar1))
            (&DAT_18000ee78,&DAT_18000ee50,param_1);
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
  if ((_StackCookie == DAT_18000d028) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_1800059b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800059bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000eea0);
  return;
}




void FUN_1800059c4(void)

{
  __std_type_info_destroy_list(&DAT_18000eea0);
  return;
}




undefined8 * FUN_1800059d0(undefined8 *param_1,ulonglong param_2)

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
  IStorageDevice *pIVar12;
  undefined7 uVar13;
  
  if (param_2 == 0) {
    pIVar12 = (IStorageDevice *)CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_18000eeb4 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000eeb4 = DAT_18000eeb4 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000e898 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_1800059c4();
      FID_conflict__RTC_Initialize();
      DAT_18000e898 = 0;
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
    if (DAT_18000e898 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000e898 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800059b4();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180007220,&DAT_180007230);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180007210,&DAT_180007218);
        DAT_18000e898 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180006300();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000eeb4 = DAT_18000eeb4 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180005cc4) */
/* WARNING: Removing unreachable block (ram,0x000180005c53) */
/* WARNING: Removing unreachable block (ram,0x000180005d07) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000eeb4 < 1)) {
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




undefined8 * FUN_180005d74(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180005db4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180005dd4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180005e14(undefined8 *param_1)

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




undefined8 * FUN_180005e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005ec4(void)

{
  undefined8 local_28 [5];
  
  FUN_180005db4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000b570);
}




void FUN_180005ee4(void)

{
  undefined8 local_28 [5];
  
  FUN_180005e14(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000b5f8);
}




char * FUN_180005f04(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x000180005fee) */
/* WARNING: Removing unreachable block (ram,0x000180005f6c) */
/* WARNING: Removing unreachable block (ram,0x000180005f47) */
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
  
  DAT_18000d034 = 2;
  _DAT_18000d030 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000d038 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000eeb8 = DAT_18000eeb8 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000eeb8 = DAT_18000eeb8 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000d030 = 2;
    DAT_18000d034 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000d034 = 0xe;
      _DAT_18000d030 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000d030 = 5;
        DAT_18000d034 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000609c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000d040 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800060b0(void)

{
  _DAT_18000eebc = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800060eb;
  FUN_1800060b0();
  *(undefined8 *)(puVar4 + -8) = 0x1800060fc;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180006106;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180006120;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180006161;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180006193;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800061b5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800061d6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800061e1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800061f1;
    FUN_1800060b0();
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
  
  if (DAT_18000d028 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000d028 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000d028 == 0x2b992ddfa232) {
      DAT_18000d028 = 0x2b992ddfa233;
    }
  }
  DAT_18000d020 = ~DAT_18000d028;
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




undefined * FUN_1800062d4(void)

{
  return &DAT_18000eec0;
}




undefined * FUN_1800062dc(void)

{
  return &DAT_18000eec8;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800062d4();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800062dc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180006300(void)

{
  return &DAT_18000eed0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180009ed8; puVar1 < &DAT_180009ed8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180009ee8; puVar1 < &DAT_180009ee8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180006430(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180006450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined * Catch_180006460(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800032e0();
  lVar2 = __RTtypeid(*(undefined8 *)(param_2 + 0x50));
  __std_type_info_name(lVar2 + 8,&DAT_18000eea0);
  FUN_1800035c0(0xfffffff6);
  return &DAT_18000102e;
}




undefined * Catch_1800064f3(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800032e0();
  FUN_1800035c0(0xfffffff5);
  return &DAT_18000102e;
}




void Catch_180006570(undefined8 param_1,longlong param_2)

{
  FUN_180003c90(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800065a0(undefined8 param_1,longlong param_2)

{
  FUN_180001d30(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_1800065b0(undefined8 param_1,longlong param_2)

{
  FUN_180001c90(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_1800065c0(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_1800065d0(undefined8 param_1,longlong param_2)

{
  FUN_180003b60(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006620(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_180006630(undefined8 param_1,longlong param_2)

{
  FUN_180003bb0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180006660(undefined8 param_1,longlong param_2)

{
  FUN_180003bb0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006690(undefined8 param_1,longlong param_2)

{
  FUN_180001c90(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1800066a0(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1800066b0(undefined8 param_1,longlong param_2)

{
  FUN_180001c40((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_1800066c0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_1800066d0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1800066e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001b30(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_1800066f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001d00((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_180006700(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001bf0(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_180006710(undefined8 param_1,longlong param_2)

{
  FUN_180001c20(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_180006720(undefined8 param_1,longlong param_2)

{
  FUN_180001b70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006730(undefined8 param_1,longlong param_2)

{
  FUN_180004660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006740(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001bf0(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180006750(undefined8 param_1,longlong param_2)

{
  FUN_180001c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006760(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180006770(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180006790(undefined8 param_1,longlong param_2)

{
  FUN_180001b10(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800067a0(undefined8 param_1,longlong param_2)

{
  FUN_180001b70(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800067b0(undefined8 param_1,longlong param_2)

{
  FUN_180004660(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800067c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1800067e0(undefined8 param_1,longlong param_2)

{
  FUN_180001b10(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1800067f0(undefined8 param_1,longlong param_2)

{
  FUN_180001b70(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180006800(undefined8 param_1,longlong param_2)

{
  FUN_180004660(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180006810(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180006830(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180006850(undefined8 param_1,longlong param_2)

{
  FUN_180001b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001b30(0x18000e1e8,param_2,param_3,param_4);
  return;
}




void Unwind_180006870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001d00(&DAT_18000e1f8,param_2,param_3,param_4);
  return;
}




void Unwind_180006880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001b30(0x18000e210,param_2,param_3,param_4);
  return;
}




void Unwind_180006890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001d00(&DAT_18000e220,param_2,param_3,param_4);
  return;
}




void Unwind_1800068a0(undefined8 param_1,longlong param_2)

{
  FUN_180001c90((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1800068b0(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1800068c0(undefined8 param_1,longlong param_2)

{
  FUN_180001b90((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800068d0(undefined8 param_1,longlong param_2)

{
  FUN_180001bc0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800068e0(undefined8 param_1,longlong param_2)

{
  FUN_180001bd0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1800068f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180006910(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001bd0((undefined8 *)(param_2 + 0x60));
  }
  return;
}




void Unwind_180006940(undefined8 param_1,longlong param_2)

{
  FUN_180001bd0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_180006950(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180006970(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180001bd0((undefined8 *)(param_2 + 0x60));
  }
  return;
}




undefined8 Catch_1800069a0(void)

{
  return 0x180002ebc;
}




void Unwind_1800069c0(undefined8 param_1,longlong param_2)

{
  FUN_180001bd0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1800069d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Unwind_1800069f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001bd0((undefined8 *)(param_2 + 0x88));
  }
  return;
}




void Unwind_180006a20(undefined8 param_1,longlong param_2)

{
  FUN_180001bd0((undefined8 *)(*(longlong *)(param_2 + 0x88) + 8));
  return;
}




void Unwind_180006a30(undefined8 param_1,longlong param_2)

{
  FUN_180001c90((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180006a40(void)

{
  _Init_thread_abort(&DAT_18000e1e0);
  return;
}




void Unwind_180006a50(void)

{
  _Init_thread_abort(&DAT_18000e208);
  return;
}




void Unwind_180006a60(undefined8 param_1,longlong param_2)

{
  FUN_180001d80((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180006a70(void)

{
  _Init_thread_abort(&DAT_18000e230);
  return;
}




void Unwind_180006a80(void)

{
  _Init_thread_abort(&DAT_18000e1b8);
  return;
}




void Catch_180006a90(undefined8 param_1,longlong param_2)

{
  FUN_180004350(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180006ac0(undefined8 param_1,longlong param_2)

{
  FUN_180004350(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006af0(undefined8 param_1,longlong param_2)

{
  FUN_180001c90(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180006b00(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_180006b10(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180006b30(undefined8 param_1,longlong param_2)

{
  FUN_180001bd0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_180006b40(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Catch_180006b60(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180006b90(undefined8 param_1,longlong param_2)

{
  FUN_180004810(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006bc0(undefined8 param_1,longlong param_2)

{
  FUN_180004550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_180006bd0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x58),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006c00(undefined8 param_1,longlong param_2)

{
  FUN_1800045f0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180006c10(undefined8 param_1,longlong param_2)

{
  FUN_180004580((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180006c20(undefined8 param_1,longlong param_2)

{
  FUN_180004550((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_180006c30(undefined8 param_1,longlong param_2)

{
  FUN_180004530((undefined8 *)(param_2 + 0x48));
  return;
}




undefined * Catch_180006c40(void)

{
  return &DAT_180004df7;
}




void Unwind_180006c60(undefined8 param_1,longlong param_2)

{
  FUN_1800045f0((longlong *)(param_2 + 0x28));
  return;
}




void FUN_180006c84(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180006c9b(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180006cb7(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180006cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003f40((longlong *)&DAT_18000e1f8,param_2,param_3,param_4);
  free(DAT_18000e1f8);
  return;
}




void FUN_180006d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003f40((longlong *)&DAT_18000e220,param_2,param_3,param_4);
  free(DAT_18000e220);
  return;
}



