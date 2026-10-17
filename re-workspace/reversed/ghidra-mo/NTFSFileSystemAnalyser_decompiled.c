
/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x10c0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x10c0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x10c0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x10d0  8  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x10d0  9  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x10d0  10  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x10d0  11  ??4IObject@@QEAAAEAU0@AEBU0@@Z
                       0x10d0  12  ??4IStorageDevice@@QEAAAEAU0@$$QEAU0@@Z
                       0x10d0  13  ??4IStorageDevice@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x10e0  17  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x0001800010e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x10f0  23  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x0001800010f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1100  25  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x1110  7  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




bool FUN_180001120(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_20 [6];
  
  FUN_180004af0(local_20,param_1,param_2,'\0');
  bVar1 = FUN_180004d40((longlong)local_20);
  if (bVar1) {
    lVar3 = FUN_180004c10(local_20,0x10,0);
    if (lVar3 != 0) {
      uVar2 = FUN_180005160(lVar3);
      if (((byte)uVar2 & 6) == 6) {
        lVar3 = FUN_180004c10(local_20,0x30,0);
        if (lVar3 != 0) {
          uVar4 = FUN_180004f80(lVar3,(ushort *)L"$Volume");
          bVar1 = (char)uVar4 != '\0';
          goto LAB_1800011a4;
        }
      }
    }
  }
  bVar1 = false;
LAB_1800011a4:
  FUN_180004bd0((longlong)local_20);
  return bVar1;
}




undefined8 * FUN_1800011c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = CNTFSVolumeAnalyser::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  puVar2 = (undefined8 *)(param_2 + 0xc);
  lVar4 = 10;
  puVar3 = (undefined8 *)((longlong)param_1 + 0xc);
  do {
    uVar1 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar1;
    uVar1 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar1;
    uVar1 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar1;
    uVar1 = puVar2[7];
    puVar3[6] = puVar2[6];
    puVar3[7] = uVar1;
    uVar1 = puVar2[9];
    puVar3[8] = puVar2[8];
    puVar3[9] = uVar1;
    uVar1 = puVar2[0xb];
    puVar3[10] = puVar2[10];
    puVar3[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    puVar3[0xc] = puVar2[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = puVar2[0xf];
    puVar3[0xe] = puVar2[0xe];
    puVar3[0xf] = uVar1;
    puVar2 = puVar2 + 0x10;
    lVar4 = lVar4 + -1;
    puVar3 = puVar3 + 0x10;
  } while (lVar4 != 0);
  param_1[0xa2] = *(undefined8 *)(param_2 + 0x510);
  *(undefined4 *)(param_1 + 0xa3) = *(undefined4 *)(param_2 + 0x518);
  param_1[0xa4] = *(undefined8 *)(param_2 + 0x520);
  *param_1 = CMomObject<class_CNTFSVolumeAnalyser>::vftable;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  return param_1;
}




void FUN_180001290(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_1800012d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180003ee0(param_1);
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




longlong * FUN_180001350(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180004190();
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
      goto LAB_180001445;
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
LAB_180001445:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180001ca0(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180001bf0((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180001bf0(plVar9,plVar10,plVar13);
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
FUN_180001550(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180003f70(param_1,param_6);
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
      goto LAB_1800015cf;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_1800015cf;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_1800015cf:
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
        goto LAB_180001775;
      }
LAB_1800016e6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_1800016e6;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180004060(param_1,plVar2);
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
LAB_180001775:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_1800017d0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_180001550(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_1800046a0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_180001550(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_1800046a0(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_180001550(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_1800046a0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180002310((longlong *)&local_38);
      uVar2 = FUN_1800046a0((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_180001550(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_180001550(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_1800046a0(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_1800022a0((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_1800046a0(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_180001550(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_180001550(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180001a00(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180001a00(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_1800046a0(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_1800046a0(plVar5 + 4,param_4);
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
      puVar4 = FUN_180001550(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_1800046a0(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_180001550(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_1800040c0(param_5 + 8);
    FUN_180001f10(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_180001bf0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000e0f0);
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




void FUN_180001ca0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000e0f0,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_180001d10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CNTFSFileSystemAnalyserModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_180003ea0();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CNTFSFileSystemAnalyserModule>_>_>
             ::vftable;
  return param_1;
}




/* public: __cdecl IStorageDevice::IStorageDevice(struct IStorageDevice && __ptr64) __ptr64 */

IStorageDevice * __thiscall
IStorageDevice::IStorageDevice(IStorageDevice *this,IStorageDevice *param_1)

{
                    /* 0x1d70  4  ??0IStorageDevice@@QEAA@$$QEAU0@@Z
                       0x1d70  5  ??0IStorageDevice@@QEAA@AEBU0@@Z
                       0x1d70  6  ??0IStorageDevice@@QEAA@XZ */
  *(undefined ***)this = vftable_for_IObject_;
  *(undefined ***)(this + 8) = vftable_for_IBlockDevice_;
  return this;
}




void FUN_180001d90(undefined8 *param_1)

{
  FUN_180005320(param_1);
  return;
}




void FUN_180001db0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004300((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_180001df0(undefined8 *param_1)

{
  FUN_180005320(param_1);
  return;
}




void FUN_180001e10(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180001e40(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180001e50(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_180001e70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004300(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180001ea0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180001ec0(undefined8 *param_1)

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




void FUN_180001f10(longlong *param_1)

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




void FUN_180001f80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004300(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180001fb0(longlong *param_1)

{
  FUN_1800040c0(param_1 + 4);
  FUN_180001f10(param_1);
  return;
}




void FUN_180001fe0(longlong *param_1)

{
  FUN_1800040c0(param_1);
  return;
}




void FUN_180002000(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




bool FUN_180002020(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180002050(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180002080(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800020b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800020e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_180002110(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180002151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180002160(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800021a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_1800021b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800021f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180002200(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180002241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180002250(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180002291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




longlong * FUN_1800022a0(longlong *param_1)

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




longlong * FUN_180002310(longlong *param_1)

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




undefined8 * FUN_1800023a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar3 = (undefined8 *)operator_new(0x540);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *puVar3 = CNTFSVolumeAnalyser::vftable;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_3 + 8);
    puVar4 = (undefined8 *)(param_3 + 0xc);
    lVar6 = 10;
    puVar5 = (undefined8 *)((longlong)puVar3 + 0xc);
    do {
      uVar2 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar2;
      uVar2 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar2;
      uVar2 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar2;
      uVar2 = puVar4[7];
      puVar5[6] = puVar4[6];
      puVar5[7] = uVar2;
      uVar2 = puVar4[9];
      puVar5[8] = puVar4[8];
      puVar5[9] = uVar2;
      uVar2 = puVar4[0xb];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = uVar2;
      uVar2 = puVar4[0xd];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = uVar2;
      uVar2 = puVar4[0xf];
      puVar5[0xe] = puVar4[0xe];
      puVar5[0xf] = uVar2;
      puVar4 = puVar4 + 0x10;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 0x10;
    } while (lVar6 != 0);
    puVar3[0xa2] = *(undefined8 *)(param_3 + 0x510);
    *(undefined4 *)(puVar3 + 0xa3) = *(undefined4 *)(param_3 + 0x518);
    puVar3[0xa4] = *(undefined8 *)(param_3 + 0x520);
    *puVar3 = CMomObject<class_CNTFSVolumeAnalyser>::vftable;
    *(undefined4 *)(puVar3 + 0xa5) = 0;
    *puVar3 = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar3[0xa6] = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar3[0xa7] = uVar1;
    *puVar3 = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    puVar3[0xa6] = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    *(undefined4 *)(puVar3 + 0xa5) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800024f0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x540);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    FUN_1800011c0(puVar2,param_3);
    *puVar2 = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar2[0xa6] = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar2[0xa7] = uVar1;
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    puVar2[0xa6] = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    *(undefined4 *)(puVar2 + 0xa5) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800025a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)operator_new(0x540);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = CNTFSVolumeAnalyser::vftable;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
    puVar3 = (undefined8 *)(param_2 + 0xc);
    lVar5 = 10;
    puVar4 = (undefined8 *)((longlong)puVar2 + 0xc);
    do {
      uVar1 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar1;
      uVar1 = puVar3[3];
      puVar4[2] = puVar3[2];
      puVar4[3] = uVar1;
      uVar1 = puVar3[5];
      puVar4[4] = puVar3[4];
      puVar4[5] = uVar1;
      uVar1 = puVar3[7];
      puVar4[6] = puVar3[6];
      puVar4[7] = uVar1;
      uVar1 = puVar3[9];
      puVar4[8] = puVar3[8];
      puVar4[9] = uVar1;
      uVar1 = puVar3[0xb];
      puVar4[10] = puVar3[10];
      puVar4[0xb] = uVar1;
      uVar1 = puVar3[0xd];
      puVar4[0xc] = puVar3[0xc];
      puVar4[0xd] = uVar1;
      uVar1 = puVar3[0xf];
      puVar4[0xe] = puVar3[0xe];
      puVar4[0xf] = uVar1;
      puVar3 = puVar3 + 0x10;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 0x10;
    } while (lVar5 != 0);
    puVar2[0xa2] = *(undefined8 *)(param_2 + 0x510);
    *(undefined4 *)(puVar2 + 0xa3) = *(undefined4 *)(param_2 + 0x518);
    puVar2[0xa4] = *(undefined8 *)(param_2 + 0x520);
    *puVar2 = CMomObject<class_CNTFSVolumeAnalyser>::vftable;
    *(undefined4 *)(puVar2 + 0xa5) = *(undefined4 *)(param_2 + 0x528);
    *puVar2 = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar2[0xa6] = CMomAggObject<class_CNTFSVolumeAnalyser>::vftable;
    puVar2[0xa7] = *(undefined8 *)(param_2 + 0x538);
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    puVar2[0xa6] = CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>::vftable;
    *(undefined4 *)(puVar2 + 0xa5) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800026e0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x530);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800052b0(puVar1,*param_2,*param_3);
    *puVar1 = CMomObject<class_CNTFSVolumeAnalyser>::vftable;
    *(undefined4 *)(puVar1 + 0xa5) = 0;
    *puVar1 = CMomCloneObject<class_CNTFSVolumeAnalyser>::vftable;
    *(undefined4 *)(puVar1 + 0xa5) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180002780(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x530);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800011c0(puVar1,param_2);
    *puVar1 = CMomCloneObject<class_CNTFSVolumeAnalyser>::vftable;
    *(undefined4 *)(puVar1 + 0xa5) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void FUN_1800027f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_180002810(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000281e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




undefined8 * FUN_180002830(undefined8 *param_1,uint param_2)

{
  FUN_180005320(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002880(undefined8 *param_1,uint param_2)

{
  FUN_180005320(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800028d0(undefined8 *param_1,uint param_2)

{
  FUN_180005320(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002920(undefined8 *param_1,uint param_2)

{
  FUN_180005320(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002970(undefined8 *param_1,uint param_2)

{
  FUN_180005320(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800029b0(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_18000e108 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_1800041b0(local_68,param_2,sVar13);
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
      if (uVar3 <= uVar2) goto LAB_180002a87;
LAB_180002ae8:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002ae8;
LAB_180002a87:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_180002d1c;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_1800041b0(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_180002bf7;
LAB_180002c47:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002c47;
LAB_180002bf7:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_180002c4f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_1800012d0(plVar11,&DAT_1800083d0,local_a8);
    FUN_1800017d0(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_180002c4f;
    }
    else if (iVar6 < 0) goto LAB_180002c4f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_1800040c0(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_1800040c0(&local_88);
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
LAB_180002d1c:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18000e0f0);
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
    FUN_180001350(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18000e0f0);
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
                    /* 0x2e00  26  ?ReleaseBitlocker@IStorageDevice@@UEAAXXZ */
  return;
}




void FUN_180002e10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180002e1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x538) + 0x10))();
  return;
}




undefined4 FUN_180002e20(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_180002e30(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x528);
}




/* public: virtual int __cdecl IStorageDevice::ConvertVolume(void) __ptr64 */

int __thiscall IStorageDevice::ConvertVolume(IStorageDevice *this)

{
                    /* 0x2e40  18  ?ConvertVolume@IStorageDevice@@UEAAHXZ
                       0x2e40  19  ?DeviceIoControl@IStorageDevice@@UEAAHKPEAXK0KPEAK@Z
                       0x2e40  20  ?GetBitlockerInfo@IStorageDevice@@UEAAPEAUBitlockerInfo@@XZ
                       0x2e40  22  ?GetInformationOffset@IStorageDevice@@UEAAHQEA_K@Z
                       0x2e40  24  ?IsBitlockerVolume@IStorageDevice@@UEAAHXZ
                       0x2e40  27  ?SetBitlockerEnable@IStorageDevice@@UEAAHH@Z
                       0x2e40  28  ?SetBitlockerInfo@IStorageDevice@@UEAAHPEAUBitlockerInfo@@@Z
                       0x2e40  29  ?SetMetaFilePos@IStorageDevice@@UEAAHQEA_K_K@Z */
  return 0;
}




undefined4 FUN_180002e50(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + -8);
}




CLogWriter * FUN_180002e60(longlong param_1,CLogWriter *param_2)

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
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1 + -0x530;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001290(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1 + -0x530;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (CLogWriter *)0x8;
      free(plVar1);
    }
    pCVar3 = (CLogWriter *)FUN_180001290(&local_res18);
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




CLogWriter * FUN_180002ff0(undefined8 param_1,CLogWriter *param_2)

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
                ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,1>
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
    pCVar3 = (CLogWriter *)FUN_180001290(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,2>
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
    pCVar3 = (CLogWriter *)FUN_180001290(&local_res18);
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




void FUN_180003170(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18000e108 ^ (ulonglong)auStack_138;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '*') {
      FUN_180005390(param_1 + -0x530,param_2);
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
        FUN_180005390(param_1 + -0x530,&local_118);
      }
      else {
        (**(code **)*puVar1)(puVar1,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




int FUN_180003230(longlong param_1)

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
  plVar2 = (longlong *)(param_1 + -0x530);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x98))(plVar2,1);
  }
  return iVar3;
}




undefined8 FUN_180003270(undefined *param_1,undefined8 param_2)

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




void FUN_1800032a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_180003fc0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_1800032f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800032fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x538) + 0x18))();
  return;
}




void FUN_180003300(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}




int FUN_180003310(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

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
              ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
              ::vftable;
    _Memory = plVar1;
  }
  plVar1 = (longlong *)operator_new(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
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
  lVar2 = FUN_180001290(&local_res20);
  *param_4 = lVar2;
  if (_Memory_00 != (longlong *)0x0) {
    free(_Memory_00);
  }
  return (*param_4 != 0) - 1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180003410(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_18000e108 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_1800041b0(local_68,param_2,sVar12);
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
      if (uVar5 <= uVar3) goto LAB_1800034f0;
LAB_18000357f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_18000357f;
LAB_1800034f0:
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
      if (uVar5 < uVar3) goto LAB_180003544;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_180003547;
    }
    if (-1 < iVar7) goto LAB_180003547;
  }
LAB_180003544:
  puVar11 = puVar2;
LAB_180003547:
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
                    /* 0x3600  21  ?GetBitlockerStatus@IStorageDevice@@UEAAHXZ */
  return -1;
}




undefined1 FUN_180003610(void)

{
  return 0;
}




undefined8 FUN_180003620(void)

{
  return DAT_18000f218;
}




longlong FUN_180003630(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x530;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000364e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x538))();
  return lVar1;
}




char * FUN_180003680(void)

{
  return "NTFSFileSystemAnalyser";
}




char * FUN_180003690(void)

{
  return "CNTFSFileSystemAnalyserModule";
}




undefined * FUN_1800036b0(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_18000f220 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000f230) && (_Init_thread_header(&DAT_18000f230), DAT_18000f230 == -1)) {
      DAT_18000f228 = (undefined8 *)FUN_180003aa0("Thread");
      _Init_thread_footer(&DAT_18000f230);
    }
    if (DAT_18000f228 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_18000f258) && (_Init_thread_header(&DAT_18000f258), DAT_18000f258 == -1)) {
        FUN_180001d10((undefined8 *)&DAT_18000f238);
        atexit(FUN_180007500);
        _Init_thread_footer(&DAT_18000f258);
        DAT_18000f220 = &DAT_18000f238;
      }
      else {
        DAT_18000f220 = &DAT_18000f238;
      }
    }
    else {
      if (DAT_18000f7d0 == (undefined1 *)0x0) {
        DAT_18000f7d0 = &DAT_18000f6d0;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18000e3d0,&DAT_18000ff00);
        FUN_1800038f0(pcVar2,DAT_18000f7d0,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_18000f228)(DAT_18000f228,DAT_18000f7d0);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_18000f220 == (undefined *)0x0) {
          if ((*piVar4 < DAT_18000f280) &&
             (_Init_thread_header(&DAT_18000f280), DAT_18000f280 == -1)) {
            FUN_180001d10((undefined8 *)&DAT_18000f260);
            atexit(FUN_180007540);
            _Init_thread_footer(&DAT_18000f280);
          }
          DAT_18000f220 = &DAT_18000f260;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_18000f220;
}




ulonglong FUN_1800038f0(char *param_1,undefined1 *param_2,uint *param_3)

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




undefined4 FUN_180003990(undefined4 param_1)

{
  char *pcVar1;
  uint local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18000f208) && (_Init_thread_header(&DAT_18000f208), DAT_18000f208 == -1)) {
    DAT_18000f200 = (undefined8 *)FUN_180003aa0("Error");
    _Init_thread_footer(&DAT_18000f208);
  }
  if (DAT_18000f200 != (undefined8 *)0x0) {
    if (DAT_18000f210 != (longlong *)0x0) goto LAB_180003a4e;
    if (DAT_18000f390 == (undefined1 *)0x0) {
      DAT_18000f390 = &DAT_18000f290;
      local_18[0] = 0x100;
      pcVar1 = (char *)__std_type_info_name(0x18000e328,&DAT_18000ff00);
      FUN_1800038f0(pcVar1,DAT_18000f390,local_18);
    }
    DAT_18000f210 = (longlong *)(**(code **)*DAT_18000f200)(DAT_18000f200,DAT_18000f390);
  }
  if (DAT_18000f210 == (longlong *)0x0) {
    return param_1;
  }
LAB_180003a4e:
  (**(code **)(*DAT_18000f210 + 0x28))();
  return param_1;
}




void FUN_180003aa0(char *param_1)

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
  
  local_18 = DAT_18000e108 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_180003b95:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_180003b95;
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
          FUN_180003270(pFVar3,hModule);
        }
      }
      goto LAB_180003b95;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_180003bc0(undefined8 param_1,char *param_2)

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
  if (DAT_18000f4a0 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000f4a0 = &DAT_18000f3a0;
    pcVar2 = (char *)__std_type_info_name(0x18000e350,&DAT_18000ff00);
    FUN_1800038f0(pcVar2,DAT_18000f4a0,local_res10);
  }
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000f4a0;
  pcVar2 = DAT_18000f4a0;
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
  if (DAT_18000f5b0 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000f5b0 = &DAT_18000f4b0;
    pcVar2 = (char *)__std_type_info_name(0x18000e388,&DAT_18000ff00);
    FUN_1800038f0(pcVar2,DAT_18000f5b0,local_res10);
  }
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000f5b0;
  pcVar2 = DAT_18000f5b0;
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
  if (DAT_18000f6c0 == (char *)0x0) {
    DAT_18000f6c0 = &DAT_18000f5c0;
    pcVar3 = (char *)__std_type_info_name(0x18000e3a8,&DAT_18000ff00);
    pcVar2 = DAT_18000f6c0;
    if (DAT_18000f6c0 != (char *)0x0) {
      *DAT_18000f6c0 = '\0';
      if (*pcVar3 == 'c') {
        lVar4 = 6;
      }
      else {
        if (*pcVar3 != 's') goto LAB_180003db3;
        lVar4 = 7;
      }
      pcVar3 = pcVar3 + lVar4;
      cVar1 = *pcVar3;
      uVar7 = uVar6;
      if (cVar1 != '\0') {
        do {
          uVar5 = (uint)uVar7;
          if (cVar1 == ':') {
            if (0xff < uVar5) goto LAB_180003db3;
            pcVar3 = pcVar3 + 1;
            cVar1 = '.';
          }
          else if (0xff < uVar5) goto LAB_180003db3;
          pcVar3 = pcVar3 + 1;
          uVar6 = (ulonglong)(uVar5 + 1);
          pcVar2[uVar7] = cVar1;
          cVar1 = *pcVar3;
          uVar7 = uVar6;
        } while (cVar1 != '\0');
        if (0xff < uVar5 + 1) goto LAB_180003db3;
      }
      pcVar2[uVar6] = '\0';
    }
  }
LAB_180003db3:
  cVar1 = *pcVar8;
  cVar9 = *DAT_18000f6c0;
  pcVar2 = DAT_18000f6c0;
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




void FUN_180003e20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x538) + 8))();
  return;
}




int FUN_180003e30(void *param_1)

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




int FUN_180003e60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = param_1 + 0xa5;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar2 = (int)param_1[0xa5];
  if ((int)*plVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return iVar2;
}




void FUN_180003ea0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180003ee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180003f20(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_180003f70(undefined8 param_1,void *param_2)

{
  FUN_1800040c0((longlong *)((longlong)param_2 + 0x40));
  FUN_180001f10((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_180003fc0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180003fc0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800040c0(param_2 + 8);
    FUN_180001f10(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180004050(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180004060(longlong *param_1,longlong *param_2)

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




void FUN_1800040c0(longlong *param_1)

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




void FUN_180004170(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180004190(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_1800041b0(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180004170();
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
      if (pvVar3 == (void *)0x0) goto LAB_1800042f3;
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
LAB_1800042f3:
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




void FUN_180004300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180003fc0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180004350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180004380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_1800043b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_1800043e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180004410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_180004440(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800044c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004540(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CNTFSVolumeAnalyser>_>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800045b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(struct_IStorageDevice*___ptr64_const&___ptr64,unsigned___int64_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004630(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CNTFSVolumeAnalyser>*___ptr64___cdecl(class_CMomCloneObject<class_CNTFSVolumeAnalyser>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




uint FUN_1800046a0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_180004710(undefined8 param_1,void *param_2,longlong param_3)

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
  DAT_18000f218 = param_1;
                    /* 0x47a0  30  GetModule */
  FUN_1800036b0();
  return;
}




uint FUN_1800047b0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = *param_1;
  iVar5 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    uVar4 = (int)cVar1 >> 0x1f & 0xf;
    uVar2 = (int)cVar1 + uVar4;
    uVar4 = (uVar2 & 0xf) - uVar4;
    uVar2 = (int)uVar2 >> 4;
    uVar3 = uVar4;
    if ((4 < (byte)uVar2) || (4 < (byte)uVar4)) break;
    uVar3 = uVar2 & 0xff;
    uVar2 = (uVar4 & 0xff) + uVar3;
    iVar5 = iVar5 + 1 + uVar2;
    if (param_2 <= iVar5) break;
    param_1 = param_1 + (ulonglong)uVar2 + 1;
    cVar1 = *param_1;
  }
  return uVar3 & 0xffffff00;
}




void * FUN_180004810(void *param_1)

{
  memset(param_1,0,0x200);
  return param_1;
}




int FUN_180004830(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  if ((char)bVar1 < '\0') {
    return 1 << (~bVar1 + 1 & 0x1f);
  }
  if (bVar1 == 0) {
    return 0x400;
  }
  return (uint)*(byte *)(param_1 + 0xd) * (uint)*(ushort *)(param_1 + 0xb) * (int)(char)bVar1;
}




int FUN_180004870(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x44);
  if ((char)bVar1 < '\0') {
    return 1 << (~bVar1 + 1 & 0x1f);
  }
  if (bVar1 == 0) {
    return 0x1000;
  }
  return (uint)*(byte *)(param_1 + 0xd) * (uint)*(ushort *)(param_1 + 0xb) * (uint)bVar1;
}




undefined8 FUN_1800048b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




uint FUN_1800048c0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  uVar2 = (uint)bVar1;
  if (0x80 < bVar1) {
    uVar2 = 1 << (-bVar1 & 0x1f);
  }
  return uVar2;
}




undefined8 FUN_1800048e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




undefined8 FUN_1800048f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_180004900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_218;
  undefined3 uStack_210;
  uint5 uStack_20d;
  undefined8 local_208;
  char local_1f8;
  char cStack_1f7;
  char cStack_1f6;
  char cStack_1f5;
  ulonglong local_18;
  
  local_18 = DAT_18000e108 ^ (ulonglong)&local_218;
  lVar7 = 4;
  lVar8 = 4;
  puVar5 = param_2;
  puVar6 = &local_218;
  do {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar8 = lVar8 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar8 != 0);
  if (((((CONCAT35(uStack_210,local_218._3_5_) == 0x202020205346544e) && ((uStack_20d & 0x1ff) == 0)
        ) && ((short)(uStack_20d >> 0x18) == 0)) &&
      ((((char)(uStack_20d >> 0x10) != '\0' && ((char)local_208 == '\0')) &&
       (((char)((ulonglong)local_208 >> 8) == '\0' &&
        (((char)((ulonglong)local_208 >> 0x10) == '\0' &&
         ((char)((ulonglong)local_208 >> 0x18) == '\0')))))))) &&
     (((char)((ulonglong)local_208 >> 0x20) == '\0' &&
      ((((((char)((ulonglong)local_208 >> 0x30) == '\0' &&
          ((char)((ulonglong)local_208 >> 0x38) == '\0')) && (local_1f8 == '\0')) &&
        ((cStack_1f7 == '\0' && (cStack_1f6 == '\0')))) && (cStack_1f5 == '\0')))))) {
    do {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      uVar1 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar1;
      uVar1 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar1;
      uVar1 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar1;
      uVar1 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar1;
      uVar1 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar1;
      uVar1 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar1;
      uVar1 = param_2[0xf];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar1;
      lVar7 = lVar7 + -1;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 0x10;
    } while (lVar7 != 0);
    __security_check_cookie(local_18 ^ (ulonglong)&local_218);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_218);
  return;
}




int * FUN_180004af0(int *param_1,int *param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  void *_Dst;
  longlong lVar2;
  short *psVar3;
  
  *param_1 = param_3;
  *(int **)(param_1 + 2) = param_2;
  *(char *)(param_1 + 4) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_180004d50(param_2,param_3);
    if ((char)uVar1 == '\0') {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if (param_4 == '\0') {
        *(int **)(param_1 + 2) = param_2;
      }
      else {
        _Dst = operator_new((longlong)param_3);
        *(void **)(param_1 + 2) = _Dst;
        memcpy(_Dst,param_2,(longlong)param_3);
        param_2 = *(int **)(param_1 + 2);
      }
      if (0 < (int)(*(ushort *)((longlong)param_2 + 6) - 1)) {
        psVar3 = (short *)((longlong)param_2 + 0x1fe);
        lVar2 = 0;
        do {
          if (*(short *)((ulonglong)*(ushort *)(param_2 + 1) + (longlong)param_2) != *psVar3) {
            return param_1;
          }
          lVar2 = lVar2 + 1;
          psVar3 = psVar3 + 0x100;
        } while (lVar2 < (longlong)((ulonglong)*(ushort *)((longlong)param_2 + 6) - 1));
        param_2 = *(int **)(param_1 + 2);
      }
      FUN_180004e40((longlong)param_2);
      *(undefined1 *)((longlong)param_1 + 0x11) = 1;
    }
  }
  return param_1;
}




void FUN_180004bd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x11) != '\0') {
      FUN_180004ce0(*(longlong *)(param_1 + 8));
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  return;
}




void FUN_180004c10(int *param_1,int param_2,int param_3)

{
  FUN_180004c30(*(longlong *)(param_1 + 2),*param_1,param_2,param_3);
  return;
}




int * FUN_180004c30(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x14);
  iVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  while( true ) {
    if (param_2 - 8U <= uVar3) {
      return (int *)0x0;
    }
    piVar2 = (int *)(uVar4 + param_1);
    if (0xfffffffd < *piVar2 - 1U) {
      return (int *)0x0;
    }
    iVar1 = FUN_180004f10(piVar2);
    if (param_3 == iVar1) {
      if (iVar5 == param_4) {
        return piVar2;
      }
      iVar5 = iVar5 + 1;
    }
    iVar1 = FUN_180004ee0((longlong)piVar2);
    if (iVar1 == 0) break;
    iVar1 = FUN_180004ee0((longlong)piVar2);
    uVar3 = (int)uVar4 + iVar1;
    uVar4 = (ulonglong)uVar3;
  }
  return (int *)0x0;
}




undefined8 FUN_180004ce0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  iVar1 = *(ushort *)(param_1 + 6) - 1;
  if (0 < iVar1) {
    lVar5 = 0;
    puVar3 = (undefined2 *)(param_1 + 0x1fe);
    do {
      iVar4 = iVar4 + 1;
      lVar2 = (ulonglong)*(ushort *)(param_1 + 4) + lVar5;
      lVar5 = lVar5 + 2;
      *(undefined2 *)(lVar2 + 2 + param_1) = *puVar3;
      *puVar3 = *(undefined2 *)((ulonglong)*(ushort *)(param_1 + 4) + param_1);
      iVar1 = *(ushort *)(param_1 + 6) - 1;
      puVar3 = puVar3 + 0x100;
    } while (iVar4 < iVar1);
  }
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




bool FUN_180004d40(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}




ulonglong FUN_180004d50(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_180005110(param_1,param_2);
  if ((char)uVar3 == '\0') {
LAB_180004e1b:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = FUN_180004e40((longlong)param_1);
    uVar6 = (ulonglong)*(ushort *)(param_1 + 5);
    cVar1 = (char)uVar3;
    uVar5 = (uint)*(ushort *)(param_1 + 5);
    while (uVar5 < param_2 - 8U) {
      piVar4 = (int *)(uVar6 + (longlong)param_1);
      uVar3 = (ulonglong)(*piVar4 - 1U);
      if (0xfffffffd < *piVar4 - 1U) break;
      uVar5 = param_2 - (int)uVar6;
      uVar3 = FUN_180004f20(piVar4,uVar5);
      if (((char)uVar3 == '\0') ||
         ((iVar2 = FUN_180004f10(piVar4), iVar2 == 0x30 &&
          (uVar3 = FUN_180005020(piVar4,uVar5), (char)uVar3 == '\0')))) goto LAB_180004e1b;
      iVar2 = FUN_180004ee0((longlong)piVar4);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) break;
      iVar2 = FUN_180004ee0((longlong)piVar4);
      uVar3 = CONCAT44(extraout_var_00,iVar2);
      uVar5 = (int)uVar6 + iVar2;
      uVar6 = (ulonglong)uVar5;
    }
    if (cVar1 != '\0') {
      uVar3 = FUN_180004ce0((longlong)param_1);
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}




undefined8 FUN_180004e40(longlong param_1)

{
  uint uVar1;
  short *in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  uVar4 = 0;
  iVar7 = *(ushort *)(param_1 + 6) - 1;
  if (0 < iVar7) {
    in_RAX = (short *)(param_1 + 0x1fe);
    uVar3 = uVar4;
    do {
      if (*(short *)((ulonglong)*(ushort *)(param_1 + 4) + param_1) != *in_RAX) {
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
      uVar3 = uVar3 + 1;
      in_RAX = in_RAX + 0x100;
    } while ((longlong)uVar3 < (longlong)((ulonglong)*(ushort *)(param_1 + 6) - 1));
    if (0 < iVar7) {
      uVar3 = uVar4;
      puVar6 = (undefined2 *)(param_1 + 0x1fe);
      do {
        lVar2 = *(ushort *)(param_1 + 4) + uVar4;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        uVar4 = uVar4 + 2;
        *puVar6 = *(undefined2 *)(lVar2 + 2 + param_1);
        uVar1 = *(ushort *)(param_1 + 6) - 1;
        in_RAX = (short *)(ulonglong)uVar1;
        puVar6 = puVar6 + 0x100;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined4 FUN_180004ee0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_180004ef0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined2 FUN_180004f00(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0x14);
}




undefined4 FUN_180004f10(undefined4 *param_1)

{
  return *param_1;
}




ulonglong FUN_180004f20(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  
  uVar3 = (ulonglong)param_2;
  if ((0xf < param_2) && (uVar2 = param_1[1], uVar2 <= param_2)) {
    if ((char)param_1[2] == '\0') {
      uVar3 = (ulonglong)((uint)*(ushort *)(param_1 + 5) + param_1[4]);
      if ((uint)*(ushort *)(param_1 + 5) + param_1[4] <= uVar2) goto LAB_180004f71;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 8);
      uVar3 = (ulonglong)uVar1;
      if (uVar1 <= uVar2) {
        if (*param_1 == 0x80) {
          uVar2 = FUN_1800047b0((char *)((ulonglong)uVar1 + (longlong)param_1),uVar2 - uVar1);
          uVar3 = CONCAT44(extraout_var,uVar2);
          if ((char)uVar2 == '\0') goto LAB_180004f46;
        }
LAB_180004f71:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
LAB_180004f46:
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_180004f80(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  uVar1 = *param_2;
  puVar3 = param_2;
  while (uVar1 != 0) {
    puVar3 = puVar3 + 1;
    uVar1 = *puVar3;
  }
  uVar6 = (ulonglong)*(byte *)((ulonglong)*(ushort *)(param_1 + 0x14) + 0x40 + param_1);
  uVar4 = (longlong)puVar3 - (longlong)param_2 >> 1;
  if (uVar4 != uVar6) {
LAB_18000500f:
    return uVar4 & 0xffffffffffffff00;
  }
  puVar7 = (ushort *)(param_1 + 0x42 + (ulonglong)*(ushort *)(param_1 + 0x14));
  uVar1 = *puVar7;
  puVar3 = puVar7;
  for (puVar5 = param_2;
      ((uVar1 != 0 && (uVar1 = *puVar5, uVar1 != 0)) &&
      ((ulonglong)((longlong)puVar5 - (longlong)param_2 >> 1) < uVar6)); puVar5 = puVar5 + 1) {
    uVar2 = *puVar3;
    uVar4 = (ulonglong)uVar2;
    if ((uVar1 < uVar2) || (uVar2 < uVar1)) goto LAB_18000500f;
    puVar3 = puVar3 + 1;
    uVar1 = *puVar3;
  }
  uVar4 = (longlong)puVar3 - (longlong)puVar7 >> 1;
  if (uVar4 < uVar6) {
    uVar1 = *puVar5;
    uVar4 = (ulonglong)uVar1;
    uVar2 = *puVar3;
    if ((uVar2 >= uVar1 && uVar2 != uVar1) || (uVar2 < uVar1)) goto LAB_18000500f;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}




ulonglong FUN_180005020(int *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  ushort *puVar5;
  
  uVar3 = FUN_180004f20(param_1,param_2);
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_180004f10(param_1);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0x30) {
      puVar5 = (ushort *)((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 5) + 0x42);
      iVar2 = 0;
      uVar4 = (ulonglong)*puVar5;
      if (*puVar5 != 0) {
        do {
          if ((int)(uint)*(byte *)((ulonglong)*(ushort *)(param_1 + 5) + 0x40 + (longlong)param_1)
              <= iVar2) break;
          uVar3 = 0;
          switch((int)uVar4) {
          case 0x22:
          case 0x2a:
          case 0x2f:
          case 0x3a:
          case 0x3c:
          case 0x3e:
          case 0x3f:
          case 0x5c:
          case 0x7c:
            goto switchD_180005088_caseD_22;
          }
          puVar1 = puVar5 + 1;
          uVar4 = (ulonglong)*puVar1;
          puVar5 = puVar5 + 1;
          iVar2 = iVar2 + 1;
        } while (*puVar1 != 0);
      }
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
switchD_180005088_caseD_22:
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_180005110(int *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if (*param_1 == 0x454c4946) {
    uVar1 = *(ushort *)((longlong)param_1 + 6);
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 < 0x11) &&
       (uVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1ffU)) >> 9, in_RAX = (ulonglong)uVar2,
       (int)(uVar1 - 1) <= (int)uVar2)) {
      uVar1 = (short)param_1[1] - 0x2a;
      in_RAX = (ulonglong)uVar1;
      if (uVar1 < 0xd7) {
        return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined4 FUN_180005160(longlong param_1)

{
  return *(undefined4 *)((ulonglong)*(ushort *)(param_1 + 0x14) + 0x20 + param_1);
}




undefined8 * FUN_180005170(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




ulonglong FUN_180005180(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int *_Memory;
  int *extraout_RAX;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar1 = (*(code *)**(undefined8 **)(*param_1 + 8))();
  uVar2 = FUN_180004830(param_3);
  uVar3 = FUN_1800048c0(param_3);
  lVar7 = FUN_1800048b0(param_3);
  uVar4 = FUN_180004830(param_3);
  uVar5 = (*(code *)**(undefined8 **)(*param_1 + 8))();
  iVar9 = (uVar4 * 10) / uVar5 + 1;
  iVar6 = (*(code *)**(undefined8 **)(*param_1 + 8))
                    ((undefined8 *)(*param_1 + 8),(ulonglong)(uVar4 * 10) % (ulonglong)uVar5);
  _Memory = (int *)operator_new((longlong)(iVar6 * iVar9));
  if (_Memory != (int *)0x0) {
    iVar6 = (**(code **)(*(longlong *)(*param_1 + 8) + 8))
                      ((longlong *)(*param_1 + 8),_Memory,
                       lVar7 * (ulonglong)uVar3 + (ulonglong)((uVar2 / uVar1) * 3) + param_2,iVar9);
    if (-1 < iVar6) {
      iVar6 = 0;
      piVar10 = _Memory;
      do {
        uVar8 = FUN_1800056a0(piVar10,param_4,uVar4);
        if ((char)uVar8 != '\0') {
          uVar11 = 1;
          break;
        }
        piVar10 = (int *)((longlong)piVar10 + (ulonglong)uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 10);
      free(_Memory);
      return uVar11;
    }
    free(_Memory);
    _Memory = extraout_RAX;
  }
  return (ulonglong)_Memory & 0xffffffffffffff00;
}




undefined8 * FUN_1800052b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 1) = 0xff;
  *param_1 = CNTFSVolumeAnalyser::vftable;
  param_1[0xa2] = 0;
  memset((void *)((longlong)param_1 + 0xc),0,0x500);
  FUN_180005470((longlong)param_1,param_2,param_3);
  return param_1;
}




void FUN_180005320(undefined8 *param_1)

{
  *param_1 = CNTFSVolumeAnalyser::vftable;
  return;
}




undefined4 FUN_180005330(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




longlong FUN_180005340(longlong param_1)

{
  return param_1 + 0xc;
}




char * FUN_180005350(void)

{
  return "CNTFSVolumeAnalyser";
}




undefined4 FUN_180005360(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x518);
}




undefined8 FUN_180005370(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x510);
}




undefined8 FUN_180005380(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x520);
}




undefined8 FUN_180005390(undefined8 param_1,char *param_2)

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
    if (DAT_18000f8e0 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18000f8e0 = &DAT_18000f7e0;
      pcVar1 = (char *)__std_type_info_name(0x18000ea40,&DAT_18000ff00);
      FUN_1800038f0(pcVar1,DAT_18000f8e0,local_res10);
    }
    cVar2 = *pcVar3;
    cVar4 = *DAT_18000f8e0;
    pcVar1 = DAT_18000f8e0;
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




void FUN_180005470(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *_Memory;
  undefined8 uVar4;
  void *_Buf2;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_278 [32];
  IStorageDevice local_258 [8];
  undefined8 local_250;
  IStorageDevice local_248 [512];
  ulonglong local_48;
  
  local_250 = 0xfffffffffffffffe;
  local_48 = DAT_18000e108 ^ (ulonglong)auStack_278;
  uVar2 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  _Memory = (undefined8 *)operator_new((ulonglong)uVar2);
  iVar3 = (**(code **)(*(longlong *)(param_2 + 8) + 8))(param_2 + 8,_Memory,param_3,1);
  if (iVar3 < 0) {
    free(_Memory);
    goto LAB_180005671;
  }
  FUN_180004810(local_248);
  cVar1 = FUN_180004900((undefined8 *)local_248,_Memory);
  if (cVar1 == '\0') {
LAB_18000565e:
    free(_Memory);
  }
  else {
    uVar2 = FUN_180004830((longlong)local_248);
    uVar2 = uVar2 & 0x800001ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
    }
    if (uVar2 != 0) goto LAB_18000565e;
    iVar3 = FUN_180004830((longlong)local_248);
    if (0x1000 < iVar3) goto LAB_18000565e;
    iVar3 = FUN_180004870((longlong)local_248);
    if (iVar3 == 0) goto LAB_18000565e;
    uVar2 = FUN_180004870((longlong)local_248);
    uVar2 = uVar2 & 0x80000fff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffff000) + 1;
    }
    if (uVar2 != 0) goto LAB_18000565e;
    *(undefined4 *)(param_1 + 8) = 4;
    uVar4 = FUN_1800048f0((longlong)local_248);
    *(undefined8 *)(param_1 + 0x510) = uVar4;
    uVar2 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
    _Buf2 = operator_new((ulonglong)uVar2);
    lVar6 = *(longlong *)(param_2 + 8);
    lVar5 = FUN_1800048f0((longlong)local_248);
    iVar3 = (**(code **)(lVar6 + 8))(param_2 + 8,_Buf2,lVar5 + 1,1);
    if (iVar3 < 0) {
LAB_1800055eb:
      lVar6 = FUN_1800048f0((longlong)local_248);
    }
    else {
      uVar2 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
      iVar3 = memcmp(_Memory,_Buf2,(ulonglong)uVar2);
      if (iVar3 != 0) goto LAB_1800055eb;
      lVar6 = FUN_1800048f0((longlong)local_248);
      lVar6 = lVar6 + 1;
    }
    *(longlong *)(param_1 + 0x510) = lVar6;
    uVar2 = FUN_1800048c0((longlong)local_248);
    *(uint *)(param_1 + 0x518) = uVar2;
    uVar4 = FUN_1800048e0((longlong)local_248);
    *(undefined8 *)(param_1 + 0x520) = uVar4;
    FUN_180005170((undefined8 *)local_258,param_2);
    FUN_180005180((longlong *)local_258,param_3,(longlong)local_248,param_1 + 0xc);
    free(_Memory);
    free(_Buf2);
    IStorageDevice::ReleaseBitlocker(local_258);
  }
  IStorageDevice::ReleaseBitlocker(local_248);
LAB_180005671:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_278);
  return;
}




undefined8 FUN_1800056a0(int *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  undefined7 extraout_var;
  undefined6 extraout_var_00;
  undefined8 uVar5;
  
  piVar4 = (int *)FUN_180004d50(param_1,param_3);
  if ((char)piVar4 != '\0') {
    bVar1 = thunk_FUN_180001120(param_1,param_3);
    piVar4 = (int *)CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      piVar4 = FUN_180004c30((longlong)param_1,param_3,0x60,0);
      if (piVar4 != (int *)0x0) {
        uVar2 = FUN_180004f00((longlong)piVar4);
        uVar3 = FUN_180004ef0((longlong)piVar4);
        uVar5 = (**(code **)(*DAT_18000f8e8 + 0x50))
                          (DAT_18000f8e8,
                           (longlong)piVar4 + (CONCAT62(extraout_var_00,uVar2) & 0xffffffff),
                           uVar3 >> 1,param_2,0x104);
        return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
    }
  }
  return (ulonglong)piVar4 & 0xffffffffffffff00;
}




undefined8 * FUN_18000574c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
  if ((_StackCookie == DAT_18000e108) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_1800067c4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800067a4();
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
LAB_1800058a6:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000f8f8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000f8f8;
        pvVar1 = DAT_18000f8f8;
      }
      DAT_18000f8f8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800058a6;
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
    uVar3 = FUN_18000697c();
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
  
  uVar1 = FUN_180005a30(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180006d10();
  if (cVar1 != '\0') {
    cVar1 = FUN_180006d10();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180006d10();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180006d10();
  FUN_180006d10();
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
    _execute_onexit_table(&DAT_18000f908);
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
  FUN_180006d10();
  FUN_180006d10();
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
    DAT_18000f900 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180006d10();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180006d10();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180006d10();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180005a30(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000f901 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000e108 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000e108;
      _DAT_18000f908 = in_RAX;
      uRam000000018000f910 = in_RAX;
      _DAT_18000f918 = in_RAX;
      _DAT_18000f920 = in_RAX;
      uRam000000018000f928 = in_RAX;
      _DAT_18000f930 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000f908);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000f920), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000f901 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180005b96) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180005b7f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180005b7f:
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
    DAT_18000f8f8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000f900 == '\0') || (param_2 == '\0')) {
    FUN_180006d10();
    FUN_180006d10();
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
  
  bVar2 = (byte)DAT_18000e108 & 0x3f;
  if (((DAT_18000e108 ^ _DAT_18000f908) >> bVar2 | (DAT_18000e108 ^ _DAT_18000f908) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000f908,_Func);
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
                    /* WARNING: Could not recover jumptable at 0x000180005c89. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180005cba;
  capture_previous_context((PCONTEXT)&DAT_18000f9e0);
  _DAT_18000f950 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000fa78 = puVar3 + 0x40;
  _DAT_18000fa60 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000f940 = 0xc0000409;
  _DAT_18000f944 = 1;
  _DAT_18000f958 = 1;
  DAT_18000f960 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000e108;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000e100;
  *(undefined8 *)(puVar3 + -8) = 0x180005d5c;
  DAT_18000fad8 = _DAT_18000f950;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800093b8);
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
  *(undefined8 *)(puVar3 + -8) = 0x180005da2;
  capture_current_context((PCONTEXT)&DAT_18000f9e0);
  _DAT_18000f950 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000fa78 = puVar3 + 0x30;
  _DAT_18000f940 = 0xc0000409;
  _DAT_18000f944 = 1;
  _DAT_18000f958 = 1;
  DAT_18000f960 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180005e0e;
  DAT_18000fad8 = _DAT_18000f950;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800093b8);
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

undefined8 FUN_180005ef8(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000feb0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18000604a;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000fee0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000fee0 != (HANDLE)0x0) goto LAB_180005fe8;
  }
  else {
    DAT_18000fee0 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000fed8);
    bVar7 = 0x40 - ((byte)DAT_18000e108 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000fee8 = DAT_18000e108 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000fef0 = DAT_18000e108 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180005fe8:
    uVar6 = FUN_180005a30(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180006058);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18000604a:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180006058(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  if (DAT_18000fee0 != (HANDLE)0x0) {
    CloseHandle(DAT_18000fee0);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000e114 = DAT_18000e114 + 1;
  *param_1 = DAT_18000e114;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000e114;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180006164:
                    /* WARNING: Could not recover jumptable at 0x000180006170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000e114;
      goto LAB_180006164;
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
  
  if (DAT_18000fee0 != (HANDLE)0x0) {
    SetEvent(DAT_18000fee0);
                    /* WARNING: Could not recover jumptable at 0x0001800061c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000fee0);
    return;
  }
  bVar1 = (byte)DAT_18000e108 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000e108 ^ _DAT_18000fef0) >> bVar1 |
            (DAT_18000e108 ^ _DAT_18000fef0) << 0x40 - bVar1))(&DAT_18000fed8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000fee0 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
    WaitForSingleObjectEx(DAT_18000fee0,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180006238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000feb0);
    return;
  }
  bVar1 = (byte)DAT_18000e108 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000e108 ^ _DAT_18000fee8) >> bVar1 |
            (DAT_18000e108 ^ _DAT_18000fee8) << 0x40 - bVar1))
            (&DAT_18000fed8,&DAT_18000feb0,param_1);
  return;
}




void FUN_1800062c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800062c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000ff00);
  return;
}




void FUN_1800062d0(void)

{
  __std_type_info_destroy_list(&DAT_18000ff00);
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
    if (DAT_18000ff14 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000ff14 = DAT_18000ff14 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000f8f0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pIVar12);
      FUN_1800062d0();
      FID_conflict__RTC_Initialize();
      DAT_18000f8f0 = 0;
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
    if (DAT_18000f8f0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000f8f0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800062c0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180008220,&DAT_180008230);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180008208,&DAT_180008218);
        DAT_18000f8f0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180006be0();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000ff14 = DAT_18000ff14 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001800065a4) */
/* WARNING: Removing unreachable block (ram,0x000180006533) */
/* WARNING: Removing unreachable block (ram,0x0001800065e7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000ff14 < 1)) {
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




undefined8 * FUN_180006654(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180006694(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800066b4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800066f4(undefined8 *param_1)

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




undefined8 * FUN_180006760(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800067a4(void)

{
  undefined8 local_28 [5];
  
  FUN_180006694(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000c380);
}




void FUN_1800067c4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800066f4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000c408);
}




char * FUN_1800067e4(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800068ce) */
/* WARNING: Removing unreachable block (ram,0x00018000684c) */
/* WARNING: Removing unreachable block (ram,0x000180006827) */
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
  
  DAT_18000e11c = 2;
  _DAT_18000e118 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000e120 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000ff18 = DAT_18000ff18 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000ff18 = DAT_18000ff18 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000e118 = 2;
    DAT_18000e11c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000e11c = 0xe;
      _DAT_18000e118 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000e118 = 5;
        DAT_18000e11c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000697c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000e130 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180006990(void)

{
  _DAT_18000ff1c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800069cb;
  FUN_180006990();
  *(undefined8 *)(puVar4 + -8) = 0x1800069dc;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800069e6;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180006a00;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180006a41;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180006a73;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180006a95;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180006ab6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180006ac1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180006ad1;
    FUN_180006990();
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
  
  if (DAT_18000e108 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000e108 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000e108 == 0x2b992ddfa232) {
      DAT_18000e108 = 0x2b992ddfa233;
    }
  }
  DAT_18000e100 = ~DAT_18000e108;
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




undefined * FUN_180006bb4(void)

{
  return &DAT_18000ff20;
}




undefined * FUN_180006bbc(void)

{
  return &DAT_18000ff28;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180006bb4();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180006bbc();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180006be0(void)

{
  return &DAT_18000ff30;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000af30; puVar1 < &DAT_18000af30; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000af40; puVar1 < &DAT_18000af40; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180006d10(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180006d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180006d40(undefined8 param_1,longlong param_2)

{
  FUN_180004bd0(param_2 + 0x28);
  return;
}




void Unwind_180006d50(undefined8 param_1,longlong param_2)

{
  FUN_180005320(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined * Catch_180006d60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800036b0();
  lVar2 = __RTtypeid(*(undefined8 *)(param_2 + 0x50));
  __std_type_info_name(lVar2 + 8,&DAT_18000ff00);
  FUN_180003990(0xfffffff6);
  return &DAT_1800012be;
}




undefined * Catch_180006df3(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_1800036b0();
  FUN_180003990(0xfffffff5);
  return &DAT_1800012be;
}




void Catch_180006e70(undefined8 param_1,longlong param_2)

{
  FUN_180004050(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006ea0(undefined8 param_1,longlong param_2)

{
  FUN_180001fb0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180006eb0(undefined8 param_1,longlong param_2)

{
  FUN_180001f10(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180006ec0(undefined8 param_1,longlong param_2)

{
  FUN_180001fe0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_180006ed0(undefined8 param_1,longlong param_2)

{
  FUN_180003f20(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006f20(undefined8 param_1,longlong param_2)

{
  FUN_180001e40(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_180006f30(undefined8 param_1,longlong param_2)

{
  FUN_180003f70(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180006f60(undefined8 param_1,longlong param_2)

{
  FUN_180003f70(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180006f90(undefined8 param_1,longlong param_2)

{
  FUN_180001f10(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180006fa0(undefined8 param_1,longlong param_2)

{
  FUN_180001fe0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180006fb0(undefined8 param_1,longlong param_2)

{
  FUN_180001ec0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180006fc0(undefined8 param_1,longlong param_2)

{
  FUN_180001e40(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_180006fd0(undefined8 param_1,longlong param_2)

{
  FUN_180001e40(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180006fe0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001db0(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180006ff0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001f80((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_180007000(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001e70(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_180007010(undefined8 param_1,longlong param_2)

{
  FUN_180001ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_180007020(undefined8 param_1,longlong param_2)

{
  FUN_180001df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007030(undefined8 param_1,longlong param_2)

{
  FUN_180005320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007040(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001e70(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180007050(undefined8 param_1,longlong param_2)

{
  FUN_180001ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007060(undefined8 param_1,longlong param_2)

{
  FUN_180001e40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180007070(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180007090(undefined8 param_1,longlong param_2)

{
  FUN_180001d90(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800070a0(undefined8 param_1,longlong param_2)

{
  FUN_180001df0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800070b0(undefined8 param_1,longlong param_2)

{
  FUN_180005320(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800070c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1800070e0(undefined8 param_1,longlong param_2)

{
  FUN_180001d90(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_1800070f0(undefined8 param_1,longlong param_2)

{
  FUN_180001df0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180007100(undefined8 param_1,longlong param_2)

{
  FUN_180005320(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180007110(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180007130(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180007150(undefined8 param_1,longlong param_2)

{
  FUN_180001d90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001db0(0x18000f238,param_2,param_3,param_4);
  return;
}




void Unwind_180007170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001f80(&DAT_18000f248,param_2,param_3,param_4);
  return;
}




void Unwind_180007180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001db0(0x18000f260,param_2,param_3,param_4);
  return;
}




void Unwind_180007190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001f80(&DAT_18000f270,param_2,param_3,param_4);
  return;
}




void Unwind_1800071a0(undefined8 param_1,longlong param_2)

{
  FUN_180001f10((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_1800071b0(undefined8 param_1,longlong param_2)

{
  FUN_180001fe0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1800071c0(undefined8 param_1,longlong param_2)

{
  FUN_180001e10((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800071d0(undefined8 param_1,longlong param_2)

{
  FUN_180001e40((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800071e0(undefined8 param_1,longlong param_2)

{
  FUN_180001e50((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1800071f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180007210(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001e50((undefined8 *)(param_2 + 0x60));
  }
  return;
}




void Unwind_180007240(undefined8 param_1,longlong param_2)

{
  FUN_180001e50((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_180007250(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_180007270(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180001e50((undefined8 *)(param_2 + 0x60));
  }
  return;
}




undefined8 Catch_1800072a0(void)

{
  return 0x18000328c;
}




void Unwind_1800072c0(undefined8 param_1,longlong param_2)

{
  FUN_180001e50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1800072d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Unwind_1800072f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001e50((undefined8 *)(param_2 + 0x88));
  }
  return;
}




void Unwind_180007320(undefined8 param_1,longlong param_2)

{
  FUN_180001e50((undefined8 *)(*(longlong *)(param_2 + 0x88) + 8));
  return;
}




void Unwind_180007330(undefined8 param_1,longlong param_2)

{
  FUN_180001f10((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180007340(void)

{
  _Init_thread_abort(&DAT_18000f230);
  return;
}




void Unwind_180007350(void)

{
  _Init_thread_abort(&DAT_18000f258);
  return;
}




void Unwind_180007360(undefined8 param_1,longlong param_2)

{
  FUN_180002000((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180007370(void)

{
  _Init_thread_abort(&DAT_18000f280);
  return;
}




void Unwind_180007380(void)

{
  _Init_thread_abort(&DAT_18000f208);
  return;
}




void Catch_180007390(undefined8 param_1,longlong param_2)

{
  FUN_180004710(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800073c0(undefined8 param_1,longlong param_2)

{
  FUN_180004710(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800073f0(undefined8 param_1,longlong param_2)

{
  FUN_180001f10(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180007400(undefined8 param_1,longlong param_2)

{
  FUN_180001fe0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_180007410(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180007430(undefined8 param_1,longlong param_2)

{
  FUN_180001e50((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_180007440(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180007460(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker((IStorageDevice *)(param_2 + 0x30));
  return;
}




void Unwind_180007470(undefined8 param_1,longlong param_2)

{
  IStorageDevice::ReleaseBitlocker((IStorageDevice *)(param_2 + 0x20));
  return;
}




void FUN_180007494(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800074ab(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800074c7(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180007500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004300((longlong *)&DAT_18000f248,param_2,param_3,param_4);
  free(DAT_18000f248);
  return;
}




void FUN_180007540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004300((longlong *)&DAT_18000f270,param_2,param_3,param_4);
  free(DAT_18000f270);
  return;
}



