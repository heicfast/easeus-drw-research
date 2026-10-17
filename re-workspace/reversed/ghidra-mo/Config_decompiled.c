
undefined8 * FUN_180001010(undefined8 *param_1,longlong param_2)

{
  *param_1 = CConfigSection::vftable;
  FUN_180001080(param_1 + 1,(longlong *)(param_2 + 8));
  FUN_1800023f0(param_1 + 3,(undefined8 *)(param_2 + 0x18));
  *param_1 = CMomObject<class_CConfigSection>::vftable;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}




longlong * FUN_180001080(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180005290();
  *param_1 = lVar1;
  local_res8 = SUB81(param_1,0);
  FUN_180001600(param_1,param_2,local_res8);
  return param_1;
}




void FUN_1800010d0(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(param_2 + 0x10);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  FUN_180001e00(param_1,param_2,*puVar1);
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1800010f0(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar4 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar4 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) {
    if (*(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) < 2) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) + -1;
    }
    lVar3 = *(longlong *)param_1;
    iVar6 = 4;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_1800011f1:
      iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2);
      if (iVar2 == -1) {
        iVar5 = iVar6;
      }
      for (; (iVar5 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar5 = iVar6;
        }
      }
    }
    else {
      while (iVar5 == 0) {
        if (lVar4 < 1) {
          lVar3 = *(longlong *)param_1;
          goto LAB_1800011f1;
        }
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar5 = iVar6;
        }
        lVar4 = lVar4 + -1;
      }
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1800012d0(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  __int64 _Var4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar6 < 1) || (lVar6 <= lVar7)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - lVar7;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar3 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar3 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) {
    lVar3 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_18000141b;
      }
      lVar3 = *(longlong *)param_1;
    }
    _Var4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2,lVar7);
    if (_Var4 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_18000141b;
      }
    }
    else {
LAB_18000141b:
      iVar5 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




void FUN_1800014b0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_1800014f0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




longlong FUN_180001530(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180005310(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_1800023f0((undefined8 *)(lVar1 + 0x20),param_2);
  FUN_180002620((ulonglong *)(lVar1 + 0x40),param_2 + 4);
  return lVar1;
}




longlong FUN_180001590(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1800052d0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_180002050(param_1,(undefined8 *)(lVar1 + 0x20),param_2,param_3);
  return lVar1;
}




void FUN_180001600(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *param_1;
  puVar7 = FUN_1800016b0(param_1,*(undefined8 **)(*param_2 + 8),lVar2,param_3);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x19);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar2;
  return;
}




undefined8 *
FUN_1800016b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_180001530(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_1800016b0(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_1800016b0(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 *
FUN_180001750(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
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
  
  if (0x1fffffffffffffd < (ulonglong)param_1[1]) {
    FUN_180005350(param_1,param_6,param_3,param_4);
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
    if ((char)param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1800017cf;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_1800017cf;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_1800017cf:
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
        goto LAB_180001975;
      }
LAB_1800018e6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_1800018e6;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180005a70(param_1,plVar2);
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
LAB_180001975:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_1800019d0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    FUN_180001750(param_1,param_2,CONCAT71((int7)((ulonglong)param_3 >> 8),1),(undefined8 *)*param_1
                  ,param_4,param_5);
    return param_2;
  }
  plVar6 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar6) {
    plVar6 = param_3;
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_180001750(param_1,param_2,CONCAT71((int7)((ulonglong)plVar6 >> 8),1),param_3,param_4,
                    param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar6) {
    puVar5 = (undefined8 *)plVar6[2];
    uVar2 = FUN_180006070(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_180001750(param_1,param_2,0,puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    plVar6 = param_3;
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180003490((longlong *)&local_38);
      uVar2 = FUN_180006070((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_180001750(param_1,param_2,0,local_38,param_4,param_5);
          return param_2;
        }
        FUN_180001750(param_1,param_2,CONCAT71((int7)((ulonglong)plVar6 >> 8),1),param_3,param_4,
                      param_5);
        return param_2;
      }
    }
    uVar2 = FUN_180006070(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180003420((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_180006070(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_180001750(param_1,param_2,0,param_3,param_4,param_5);
        return param_2;
      }
      FUN_180001750(param_1,param_2,CONCAT71((int7)((ulonglong)plVar6 >> 8),1),plVar3,param_4,
                    param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180001c00(param_1,local_28,0,param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180001c00(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  char cVar9;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  cVar9 = (char)param_3;
  uVar8 = 1;
  plVar6 = (longlong *)((longlong *)*param_1)[1];
  plVar7 = (longlong *)*param_1;
  puVar4 = param_4;
  while (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    if (cVar9 == '\0') {
      uVar3 = FUN_180006070(param_4,plVar6 + 4);
    }
    else {
      uVar3 = FUN_180006070(plVar6 + 4,param_4);
      uVar3 = ~uVar3;
    }
    uVar8 = uVar3 >> 0x1f;
    plVar7 = plVar6;
    if ((int)uVar3 < 0) {
      plVar6 = (longlong *)*plVar6;
    }
    else {
      plVar6 = (longlong *)plVar6[2];
    }
  }
  plVar6 = plVar7;
  if ((char)uVar8 != '\0') {
    if (plVar7 == *(longlong **)*param_1) {
      puVar4 = FUN_180001750(param_1,&local_48,CONCAT71((int7)((ulonglong)param_3 >> 8),1),plVar7,
                             param_4,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar1 = plVar7;
      plVar2 = (longlong *)*plVar7;
      if (*(char *)(*plVar7 + 0x19) == '\0') {
        do {
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar6[2];
        } while (*(char *)(plVar6[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (longlong *)plVar6[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar6 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar1;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  puVar5 = param_4;
  uVar3 = FUN_180006070(plVar6 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_180001750(param_1,&local_48,(ulonglong)uVar8,plVar7,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_40 = param_5 + 8;
    local_48 = param_5 + 4;
    FUN_180003050((longlong)local_40,puVar5,param_3,puVar4);
    FUN_180002df0(param_5 + 4);
    local_38 = 0x80;
    free(param_5);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180001e00(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2,
             ulonglong param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  uVar4 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar4 < 1) || (uVar4 <= param_3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar4 - param_3;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  lVar3 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar3 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) {
    lVar3 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) {
          iVar5 = 4;
          goto LAB_180001ef0;
        }
      }
      lVar3 = *(longlong *)param_1;
    }
    uVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2,param_3);
    if (uVar4 == param_3) {
LAB_180001ef0:
      do {
        if (lVar6 == 0) goto LAB_180001f18;
        iVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar5 = 4;
LAB_180001f18:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




undefined8 *
FUN_180001fd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != param_3) {
    do {
      FUN_1800023f0(param_4,param_2);
      param_4 = param_4 + 4;
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return param_4;
}




void FUN_180002050(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_1800023f0(param_2,(undefined8 *)*param_4);
  puVar1 = param_2 + 4;
  *puVar1 = CConfigSection::vftable;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar2 = FUN_180005290();
  param_2[5] = uVar2;
  param_2[9] = 0;
  param_2[10] = 0xf;
  *(undefined1 *)(param_2 + 7) = 0;
  *puVar1 = CMomObject<class_CConfigSection>::vftable;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *puVar1 = CMomCloneObject<class_CConfigSection>::vftable;
  *puVar1 = CMomStackObject<class_CMomCloneObject<class_CConfigSection>_>::vftable;
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1800020f0(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




_Facet_base * FUN_180002130(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  _Lockit local_res8 [8];
  _Facet_base *local_res10;
  _Facet_base *local_res18;
  undefined8 local_30 [3];
  
  std::_Lockit::_Lockit(local_res8,0);
  local_res10 = DAT_18001be80;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1800021f5;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_1800021a2:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1800021f5;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_1800021a2;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,struct__Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_180002a50(local_30);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_30,(ThrowInfo *)&DAT_180017f78);
    }
    local_res18 = local_res10;
    std::_Facet_Register(local_res10);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_18001be80 = local_res10;
    local_res18 = (_Facet_base *)0x0;
    p_Var4 = local_res10;
  }
LAB_1800021f5:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}




basic_iostream<char,struct_std::char_traits<char>_> *
FUN_180002230(basic_iostream<char,struct_std::char_traits<char>_> *param_1,char *param_2,int param_3
             ,int param_4,int param_5)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  _Facet_base *this_00;
  undefined8 *puVar4;
  longlong *local_20;
  
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_180010408;
    *(undefined **)(param_1 + 0x10) = &DAT_180010410;
    *(code **)(param_1 + 0xb8) = _vftable__exref;
    *(code **)(param_1 + 0xb8) = _vftable__exref;
  }
  this = (basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 0x18);
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>(param_1,this);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_fstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb8;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(this);
  *(undefined ***)this = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  param_1[0x94] = (basic_iostream<char,struct_std::char_traits<char>_>)0x0;
  param_1[0x89] = (basic_iostream<char,struct_std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x8c) = DAT_18001be78;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if ((*(longlong *)(param_1 + 0x98) != 0) ||
     (p_Var2 = std::_Fiopen(param_2,param_3,param_4), p_Var2 == (_iobuf *)0x0)) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
    return param_1;
  }
  FUN_180005920(this,(longlong)p_Var2,1);
  plVar3 = (locale *)std::basic_streambuf<char,struct_std::char_traits<char>_>::getloc(this);
  this_00 = FUN_180002130(plVar3);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    *(_Facet_base **)(param_1 + 0x80) = this_00;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  }
  if (local_20 == (longlong *)0x0) {
    return param_1;
  }
  puVar4 = (undefined8 *)(**(code **)(*local_20 + 0x10))();
  if (puVar4 == (undefined8 *)0x0) {
    return param_1;
  }
  (**(code **)*puVar4)(puVar4,1);
  return param_1;
}




undefined8 * FUN_1800023f0(undefined8 *param_1,undefined8 *param_2)

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




longlong * FUN_1800024d0(longlong *param_1,void *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = 0xffffffffffffffff;
  *(undefined1 *)param_1 = 0;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180005c80(param_1,param_2,sVar1);
  return param_1;
}




basic_iostream<char,struct_std::char_traits<char>_> *
FUN_180002510(basic_iostream<char,struct_std::char_traits<char>_> *param_1,uint param_2,int param_3)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *this;
  uint uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    *(undefined **)param_1 = &DAT_180010368;
    *(undefined **)(param_1 + 0x10) = &DAT_180010370;
    *(code **)(param_1 + 0x98) = _vftable__exref;
    *(code **)(param_1 + 0x98) = _vftable__exref;
  }
  this = (basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 0x18);
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>(param_1,this);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(this);
  *(undefined ***)this =
       std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::vftable
  ;
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar2 = (~param_2 & 1) << 2;
  uVar1 = uVar2 | 2;
  if ((param_2 & 2) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 8;
  if ((param_2 & 8) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x10;
  if ((param_2 & 4) == 0) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x88) = uVar1;
  return param_1;
}




ulonglong * FUN_180002620(ulonglong *param_1,longlong *param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pvVar3 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = param_2[1] - *param_2 >> 5;
  if (uVar7 != 0) {
    if (0x7ffffffffffffff < uVar7) {
      FUN_180005be0();
      pcVar1 = (code *)swi(3);
      puVar5 = (ulonglong *)(*pcVar1)();
      return puVar5;
    }
    uVar7 = uVar7 * 0x20;
    if (uVar7 < 0x1000) {
      if (uVar7 != 0) {
        pvVar3 = operator_new(uVar7);
      }
    }
    else {
      uVar6 = uVar7 + 0x27;
      if (uVar6 <= uVar7) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar2 = operator_new(uVar6);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *param_1 = (ulonglong)pvVar3;
    param_1[1] = (ulonglong)pvVar3;
    param_1[2] = (ulonglong)((longlong)pvVar3 + uVar7);
    puVar4 = FUN_180001fd0(param_1,(undefined8 *)*param_2,(undefined8 *)param_2[1],
                           (undefined8 *)*param_1);
    param_1[1] = (ulonglong)puVar4;
  }
  return param_1;
}




void FUN_180002710(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  longlong *plVar3;
  undefined1 auStackY_3c8 [32];
  basic_iostream<char,struct_std::char_traits<char>_> local_388 [16];
  basic_ostream<char,struct_std::char_traits<char>_> local_378 [240];
  basic_iostream<char,struct_std::char_traits<char>_> local_288 [152];
  longlong local_1f0;
  longlong local_168 [4];
  longlong *local_148;
  undefined2 local_13c;
  longlong local_128;
  int local_120;
  char local_11c;
  ulonglong local_28;
  
  local_28 = DAT_18001a018 ^ (ulonglong)auStackY_3c8;
  *param_1 = CConfig::vftable;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  param_1[2] = 0;
  local_148 = plVar3;
  lVar1 = FUN_180005250();
  *plVar3 = lVar1;
  FUN_180002230(local_288,param_2,3,0x40,1);
  if (local_1f0 == 0) {
    FUN_180002510(local_388,3,1);
    pbVar2 = FUN_1800012d0(local_378,"open config file:");
    FUN_1800012d0(pbVar2,param_2);
    plVar3 = FUN_180006df0((longlong)local_388,local_168);
    FUN_180002b20(&local_148,plVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_148,(ThrowInfo *)&DAT_180017f40);
  }
  std::basic_istream<char,struct_std::char_traits<char>_>::getline
            ((basic_istream<char,struct_std::char_traits<char>_> *)local_288,(char *)&local_128,
             0x100);
  local_148 = (longlong *)0x69666e6f63756523;
  local_13c = 0x30;
  if (((local_128 == 0x69666e6f63756523) && (local_120 == 0x2e312d67)) && (local_11c == '0')) {
    FUN_1800049b0(param_2,(basic_istream<char,struct_std::char_traits<char>_> *)local_288,plVar3);
    FUN_180003820((longlong *)local_288);
    __security_check_cookie(local_28 ^ (ulonglong)auStackY_3c8);
    return;
  }
  FUN_180002510(local_388,3,1);
  pbVar2 = FUN_1800012d0(local_378,param_2);
  FUN_1800012d0(pbVar2," format error.");
  plVar3 = FUN_180006df0((longlong)local_388,local_168);
  FUN_180002980(&local_148,plVar3);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_148,(ThrowInfo *)&DAT_180017eb0);
}




undefined8 * FUN_180002920(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  *param_1 = ConfigFormatError::vftable;
  return param_1;
}




undefined8 * FUN_180002980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  undefined1 local_18;
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  *param_1 = ConfigFormatError::vftable;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x29f0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x29f0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x29f0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




undefined8 * FUN_180002a50(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_180002a90(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




undefined8 * FUN_180002b20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  undefined1 local_18;
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




void FUN_180002b90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180002bb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180002bd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180002bf0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_180002c10(longlong *param_1)

{
  undefined8 local_res10 [3];
  
  FUN_1800061b0(param_1,local_res10,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180002c50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180005510(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}




void FUN_180002cb0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002cd0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002cf0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_180002df0(plVar2);
  }
  return;
}




void FUN_180002d30(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,struct_std::char_traits<char>_>)0x0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1800053b0((longlong *)param_1);
      fclose(*(FILE **)(param_1 + 0x80));
    }
    param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x74) = DAT_18001be78;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180002de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




void FUN_180002df0(longlong *param_1)

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




void FUN_180002e60(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  *(undefined ***)param_1 =
       std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::vftable
  ;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar2 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar2 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(lVar2 - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x000180002f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




void FUN_180002f30(longlong *param_1)

{
  undefined8 local_res10 [3];
  
  FUN_1800061b0(param_1,local_res10,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180002f70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180005510(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  free((void *)*param_1);
  return;
}




void FUN_180002fd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050((longlong)(param_1 + 4),param_2,param_3,param_4);
  FUN_180002df0(param_1);
  return;
}




void FUN_180003010(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180003020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}




void FUN_180003030(longlong *param_1)

{
  FUN_180005b10(param_1);
  return;
}




void FUN_180003050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_180002df0((longlong *)(param_1 + 0x18));
  lVar2 = *plVar1;
  FUN_180005510(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  free((void *)*plVar1);
  return;
}




void FUN_1800030f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_180003120(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180003150(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180003180(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800031b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}




void FUN_1800031c0(longlong *param_1)

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




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x3210  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x3210  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




bool FUN_180003220(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180003250(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180003280(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800032b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_1800032e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180003330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180003380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800033c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_1800033d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




longlong * FUN_180003420(longlong *param_1)

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




longlong * FUN_180003490(longlong *param_1)

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




undefined8 * FUN_180003520(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *puVar2 = CConfigSection::vftable;
    FUN_180001080(puVar2 + 1,(longlong *)(param_3 + 8));
    FUN_1800023f0(puVar2 + 3,(undefined8 *)(param_3 + 0x18));
    *puVar2 = CMomObject<class_CConfigSection>::vftable;
    *(undefined4 *)(puVar2 + 7) = 0;
    *puVar2 = CMomAggObject<class_CConfigSection>::vftable;
    puVar2[8] = CMomAggObject<class_CConfigSection>::vftable;
    puVar2[9] = uVar1;
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    puVar2[8] = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    *(undefined4 *)(puVar2 + 7) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180003600(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    FUN_180001010(puVar2,param_3);
    *puVar2 = CMomAggObject<class_CConfigSection>::vftable;
    puVar2[8] = CMomAggObject<class_CConfigSection>::vftable;
    puVar2[9] = uVar1;
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    puVar2[8] = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    *(undefined4 *)(puVar2 + 7) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_1800036a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CConfigSection::vftable;
    FUN_180001080(puVar1 + 1,(longlong *)(param_2 + 8));
    FUN_1800023f0(puVar1 + 3,(undefined8 *)(param_2 + 0x18));
    *puVar1 = CMomObject<class_CConfigSection>::vftable;
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
    *puVar1 = CMomAggObject<class_CConfigSection>::vftable;
    puVar1[8] = CMomAggObject<class_CConfigSection>::vftable;
    puVar1[9] = *(undefined8 *)(param_2 + 0x48);
    *puVar1 = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    puVar1[8] = CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>::vftable;
    *(undefined4 *)(puVar1 + 7) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180003770(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180001010(puVar1,param_2);
    *puVar1 = CMomCloneObject<class_CConfigSection>::vftable;
    *(undefined4 *)(puVar1 + 7) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void FUN_1800037e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800037f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_180003800(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000380e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_180003820(longlong *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x17);
  *(undefined ***)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xb8) =
       std::basic_fstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xbc) = *(int *)(*param_1 + 4) + -0xb8;
  FUN_180002d30((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 3));
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_1 + 4));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}




void FUN_1800038c0(longlong *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x13);
  *(undefined ***)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0x98) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0x9c) = *(int *)(*param_1 + 4) + -0x98;
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 3));
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_1 + 4));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}




void FUN_18000394c(longlong param_1,uint param_2)

{
  FUN_1800039b0(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}




void FUN_180003958(longlong param_1,uint param_2)

{
  FUN_180003a30(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180003970(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180002d30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_1800039b0(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0xb8);
  FUN_180003820(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1800039f0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180002e60(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_180003a30(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0x98);
  FUN_1800038c0(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}




undefined8 * FUN_180003a70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003ad0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180003b90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  return;
}




undefined4 FUN_180003ba0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x38);
}




undefined8 FUN_180003bb0(void)

{
  return 0;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x3bc0  7  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180003bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




void FUN_180003bd0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStackY_1a8 [32];
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160 [3];
  basic_iostream<char,struct_std::char_traits<char>_> local_148 [16];
  basic_ostream<char,struct_std::char_traits<char>_> local_138 [240];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_168 = 0xfffffffffffffffe;
  local_28 = DAT_18001a018 ^ (ulonglong)auStackY_1a8;
  plVar2 = (longlong *)*param_1;
  plVar4 = plVar2;
  plVar5 = (longlong *)plVar2[1];
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    do {
      plVar4 = plVar5;
      uVar1 = FUN_180006070(plVar4 + 4,param_2);
      if ((int)uVar1 < 0) {
        plVar5 = (longlong *)plVar4[2];
        plVar4 = plVar2;
      }
      else {
        plVar5 = (longlong *)*plVar4;
      }
      plVar2 = plVar4;
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    plVar2 = (longlong *)*param_1;
  }
  if ((plVar4 != plVar2) && (uVar1 = FUN_180006070(param_2,plVar4 + 4), -1 < (int)uVar1)) {
    FUN_180002510(local_148,3,1);
    pbVar3 = FUN_1800012d0(local_138,"section is repeated:");
    FUN_1800010d0(pbVar3,(char *)param_2);
    plVar2 = FUN_180006df0((longlong)local_148,local_48);
    FUN_180002980(local_160,plVar2);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_160,(ThrowInfo *)&DAT_180017eb0);
  }
  plVar4 = plVar2;
  plVar5 = (longlong *)plVar2[1];
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    do {
      plVar4 = plVar5;
      uVar1 = FUN_180006070(plVar4 + 4,param_2);
      if ((int)uVar1 < 0) {
        plVar5 = (longlong *)plVar4[2];
        plVar4 = plVar2;
      }
      else {
        plVar5 = (longlong *)*plVar4;
      }
      plVar2 = plVar4;
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    if ((plVar4 != (longlong *)*param_1) &&
       (uVar1 = FUN_180006070(param_2,plVar4 + 4), -1 < (int)uVar1)) goto LAB_180003ce3;
  }
  local_170 = param_2;
  plVar2 = (longlong *)FUN_180001590(param_1,&DAT_18000f480,&local_170);
  FUN_1800019d0(param_1,&local_170,plVar4,plVar2 + 4,plVar2);
  plVar4 = local_170;
LAB_180003ce3:
  if (plVar4 + 0xb != param_2) {
    plVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar2 = (longlong *)*param_2;
    }
    FUN_180005c80(plVar4 + 0xb,plVar2,param_2[2]);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_1a8);
  return;
}




undefined4 FUN_180003d90(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + -8);
}




IObject * FUN_180003da0(longlong param_1,IObject *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  IObject *pIVar3;
  IObject *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (IObject *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1 + -0x40;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_1800014b0(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1 + -0x40;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_1800014b0(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (IObject *)0x8;
    free(_Memory);
  }
  if (pIVar3 == (IObject *)0x0) {
    return (IObject *)0x0;
  }
  pIVar3 = IObject::operator=(pIVar3,param_2);
  return pIVar3;
}




IObject * FUN_180003f30(undefined8 param_1,IObject *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  IObject *pIVar3;
  IObject *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (IObject *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_1800014f0(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_1800014b0(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (IObject *)0x8;
    free(_Memory);
  }
  if (pIVar3 == (IObject *)0x0) {
    return (IObject *)0x0;
  }
  pIVar3 = IObject::operator=(pIVar3,param_2);
  return pIVar3;
}




void FUN_1800040b0(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18001a018 ^ (ulonglong)auStack_138;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '*') {
      FUN_1800086f0(param_1 + -0x40,param_2);
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
        FUN_1800086f0(param_1 + -0x40,&local_118);
      }
      else {
        (**(code **)*puVar1)(puVar1,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




int FUN_180004170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  
  _Memory = (void *)(param_1 + -0x40);
  LOCK();
  piVar1 = (int *)(param_1 + -8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + -8);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  if (_Memory != (void *)0x0) {
    FUN_180003050((longlong)_Memory,param_2,param_3,param_4);
    free(_Memory);
  }
  return iVar2;
}




undefined8 FUN_1800041d0(undefined *param_1,undefined8 param_2)

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




void FUN_180004200(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180004207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
  return;
}




void FUN_180004210(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180004213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}




longlong FUN_180004220(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x40;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000180004238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  return lVar1;
}




undefined8 FUN_180004250(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  if (DAT_18001c0a0 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18001c0a0 = &DAT_18001bfa0;
    pcVar2 = (char *)__std_type_info_name(0x18001a120,&DAT_18001cb30);
    FUN_180004910(pcVar2,DAT_18001c0a0,local_res10);
  }
  cVar1 = *pcVar3;
  cVar5 = *DAT_18001c0a0;
  pcVar2 = DAT_18001c0a0;
  if (cVar1 == cVar5) {
    do {
      if ((cVar1 == '\0') || (cVar5 == '\0')) break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      cVar5 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == cVar5);
  }
  uVar4 = 0;
  if (cVar1 == *pcVar2) {
    uVar4 = param_1;
  }
  return uVar4;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x4340  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180004343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




char * FUN_180004350(void)

{
  return "CConfig";
}




longlong *
FUN_180004360(longlong *param_1,basic_istream<char,struct_std::char_traits<char>_> *param_2)

{
  basic_istream<char,struct_std::char_traits<char>_> bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_120;
  undefined *local_118 [2];
  undefined *local_108;
  undefined **local_100;
  basic_iostream<char,struct_std::char_traits<char>_> local_f8 [96];
  undefined8 local_98;
  undefined4 local_90;
  code *local_80 [13];
  
  local_120 = 0xfffffffffffffffe;
  local_118[0] = &DAT_180010368;
  local_108 = &DAT_180010370;
  local_80[0] = _vftable__exref;
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)local_118,
             (basic_streambuf<char,struct_std::char_traits<char>_> *)&local_100);
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4) + -4) =
       *(int *)(local_118[0] + 4) + -0x98;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>
            ((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_100);
  local_100 = std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              vftable;
  local_98 = 0;
  local_90 = 0;
  uVar4 = std::basic_istream<char,struct_std::char_traits<char>_>::get(param_2);
  bVar2 = (byte)uVar4;
  bVar1 = param_2[(longlong)*(int *)(*(longlong *)param_2 + 4) + 0x10];
  while ((((byte)bVar1 & 1) == 0 &&
         ((bVar2 = (byte)uVar4, 0xd < bVar2 || ((0x2401U >> (uVar4 & 0x1f) & 1) == 0))))) {
    if (bVar2 == 0x23) goto LAB_180004486;
    FUN_1800010f0((basic_ostream<char,struct_std::char_traits<char>_> *)&local_108,bVar2);
    uVar4 = std::basic_istream<char,struct_std::char_traits<char>_>::get(param_2);
    bVar2 = (byte)uVar4;
    bVar1 = param_2[(longlong)*(int *)(*(longlong *)param_2 + 4) + 0x10];
  }
  if (bVar2 == 0x23) {
LAB_180004486:
    iVar5 = std::basic_istream<char,struct_std::char_traits<char>_>::get(param_2);
    cVar3 = (char)iVar5;
    while ((cVar3 != '\r' && ((char)iVar5 != '\n'))) {
      iVar5 = std::basic_istream<char,struct_std::char_traits<char>_>::get(param_2);
      cVar3 = (char)iVar5;
    }
  }
  FUN_180006df0((longlong)local_118,param_1);
  *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4) + -4) =
       *(int *)(local_118[0] + 4) + -0x98;
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)&local_100);
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>(local_f8);
  local_80[0] = _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)local_80);
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180004540(longlong param_1,void *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulonglong _Size;
  ulonglong _Size_00;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_18001a018 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0xf;
  local_50[0]._0_1_ = 0;
  sVar11 = 0xffffffffffffffff;
  do {
    sVar11 = sVar11 + 1;
  } while (*(char *)((longlong)param_2 + sVar11) != '\0');
  FUN_180005c80(local_50,param_2,sVar11);
  uVar5 = local_38;
  _Size_00 = local_40;
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined1 *)CONCAT71(local_50[0]._1_7_,(undefined1)local_50[0]);
  cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
  puVar10 = puVar9;
  puVar4 = (undefined8 *)puVar9[1];
  do {
    if (cVar1 != '\0') {
      if (puVar10 != puVar9) {
        puVar9 = puVar10 + 4;
        if (0xf < (ulonglong)puVar10[7]) {
          puVar9 = (undefined8 *)puVar10[4];
        }
        puVar8 = (undefined1 *)local_50;
        if (0xf < uVar5) {
          puVar8 = puVar3;
        }
        if ((ulonglong)puVar10[6] < _Size_00) {
          _Size_00 = puVar10[6];
        }
        memcmp(puVar8,puVar9,_Size_00);
      }
      if (0xf < uVar5) {
        puVar8 = puVar3;
        if ((0xfff < uVar5 + 1) &&
           (puVar8 = *(undefined1 **)(puVar3 + 0xfffffffffffffff8),
           (undefined1 *)0x1f < puVar3 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(puVar8);
      }
      local_40 = 0;
      local_38 = 0xf;
      local_50[0]._0_1_ = 0;
      __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
      return;
    }
    puVar8 = (undefined1 *)local_50;
    if (0xf < uVar5) {
      puVar8 = puVar3;
    }
    puVar7 = puVar4 + 4;
    if (0xf < (ulonglong)puVar4[7]) {
      puVar7 = (undefined8 *)puVar4[4];
    }
    uVar2 = puVar4[6];
    _Size = uVar2;
    if (_Size_00 < uVar2) {
      _Size = _Size_00;
    }
    iVar6 = memcmp(puVar7,puVar8,_Size);
    if (iVar6 == 0) {
      if (_Size_00 <= uVar2) goto LAB_180004620;
LAB_1800046ae:
      puVar7 = (undefined8 *)puVar4[2];
    }
    else {
      if (iVar6 < 0) goto LAB_1800046ae;
LAB_180004620:
      puVar7 = (undefined8 *)*puVar4;
      puVar10 = puVar4;
    }
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
    puVar4 = puVar7;
  } while( true );
}




void FUN_180004720(void)

{
  code *pcVar1;
  char *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  uint local_138 [2];
  undefined8 local_130;
  CHAR local_128 [2];
  char cStack_126;
  CHAR aCStack_125 [269];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_18001a018 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001be68) {
    while (_Init_thread_header(&DAT_18001be68), DAT_18001be68 == -1) {
      puVar4 = (undefined8 *)0x0;
      pcVar2 = "Error";
      puVar6 = puVar4;
      do {
        pcVar5 = pcVar2;
        if (0xff < (longlong)puVar6) goto LAB_1800048e1;
        local_128[(longlong)puVar6] = *pcVar5;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        pcVar2 = pcVar5 + 1;
      } while (pcVar5[1] != '\0');
      if (pcVar5 + -0x180010203 < (char *)0x104) {
        local_128[(longlong)(pcVar5 + -0x180010203)] = '.';
        (pcVar5 + -0x18001032a)[(longlong)&stack0x00000000] = 'm';
        (pcVar5 + -0x180010329)[(longlong)&stack0x00000000] = 'o';
        if ((char *)0x103 < pcVar5 + -0x180010200) {
          __report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_128[(longlong)(pcVar5 + -0x180010200)] = '\0';
        hModule = LoadLibraryA(local_128);
        if (hModule != (HMODULE)0x0) {
          pFVar3 = GetProcAddress(hModule,"GetModule");
          if (pFVar3 == (FARPROC)0x0) {
            FreeLibrary(hModule);
          }
          else {
            puVar4 = (undefined8 *)FUN_1800041d0(pFVar3,hModule);
          }
        }
LAB_1800048e1:
        DAT_18001be60 = puVar4;
        _Init_thread_footer(&DAT_18001be68);
        break;
      }
      __report_rangecheckfailure();
    }
  }
  if (DAT_18001be60 == (undefined8 *)0x0) {
LAB_1800047f6:
    if (DAT_18001be70 == (longlong *)0x0) goto LAB_180004805;
  }
  else if (DAT_18001be70 == (longlong *)0x0) {
    if (DAT_18001bf90 == (undefined1 *)0x0) {
      DAT_18001bf90 = &DAT_18001be90;
      local_138[0] = 0x100;
      pcVar2 = (char *)__std_type_info_name(0x18001a0f8,&DAT_18001cb30);
      FUN_180004910(pcVar2,DAT_18001bf90,local_138);
    }
    DAT_18001be70 = (longlong *)(**(code **)*DAT_18001be60)(DAT_18001be60,DAT_18001bf90);
    goto LAB_1800047f6;
  }
  (**(code **)(*DAT_18001be70 + 0x28))();
LAB_180004805:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




ulonglong FUN_180004910(char *param_1,undefined1 *param_2,uint *param_3)

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




/* WARNING: Type propagation algorithm not settling */

void FUN_1800049b0(char *param_1,basic_istream<char,struct_std::char_traits<char>_> *param_2,
                  longlong *param_3)

{
  code *pcVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_144;
  longlong *local_140;
  char *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120 [3];
  longlong local_108 [2];
  size_t local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_128 = 0xfffffffffffffffe;
  local_48 = DAT_18001a018 ^ (ulonglong)auStack_168;
  lVar7 = 0;
  local_148 = 0;
  local_130 = 0;
  iVar12 = 1;
  local_140 = param_3;
  local_138 = param_1;
  do {
    while( true ) {
      if (((byte)param_2[(longlong)*(int *)(*(longlong *)param_2 + 4) + 0x10] & 1) != 0) {
        __security_check_cookie(local_48 ^ (ulonglong)auStack_168);
        return;
      }
      FUN_180004360(local_108,param_2);
      iVar12 = iVar12 + 1;
      local_144 = iVar12;
      if (local_f8 != 0) break;
      if (0xf < local_f0) {
        pvVar2 = (void *)CONCAT71(local_108[0]._1_7_,(char)local_108[0]);
        pvVar5 = pvVar2;
        if ((0xfff < local_f0 + 1) &&
           (pvVar5 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar5);
      }
      local_f8 = 0;
      local_f0 = 0xf;
      local_108[0]._0_1_ = '\0';
    }
    pcVar3 = (char *)CONCAT71(local_108[0]._1_7_,(char)local_108[0]);
    pcVar4 = (char *)local_108;
    if (0xf < local_f0) {
      pcVar4 = pcVar3;
    }
    if (*pcVar4 == '<') {
      pcVar4 = (char *)local_108;
      if (0xf < local_f0) {
        pcVar4 = pcVar3;
      }
      if (((local_f8 == 0) || (pvVar5 = memchr(pcVar4,0x3e,local_f8), pvVar5 == (void *)0x0)) ||
         ((longlong)pvVar5 - (longlong)pcVar4 == -1)) {
        FUN_180004f00(param_1,iVar12,(char *)local_108);
        FUN_1800024d0(local_68,"ParseConfigFile()");
        FUN_180002980(local_120,local_68);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_120,(ThrowInfo *)&DAT_180017eb0);
      }
      plVar6 = FUN_180006eb0(local_108,local_68,1,((longlong)pvVar5 - (longlong)pcVar4) - 1);
      lVar7 = FUN_180003bd0(param_3,plVar6);
      local_130 = lVar7;
      FUN_180002df0(local_68);
    }
    else {
      pcVar4 = (char *)local_108;
      if (0xf < local_f0) {
        pcVar4 = pcVar3;
      }
      if ((local_f8 == 0) || (pvVar5 = memchr(pcVar4,0x3d,local_f8), pvVar5 == (void *)0x0)) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        uVar9 = (longlong)pvVar5 - (longlong)pcVar4;
      }
      param_3 = local_140;
      if ((uVar9 != 0xffffffffffffffff) && (lVar7 != 0)) {
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = 0;
        uVar10 = uVar9;
        if (local_f8 < uVar9) {
          uVar10 = local_f8;
        }
        puVar8 = (undefined1 *)local_108;
        if (0xf < local_f0) {
          puVar8 = (undefined1 *)CONCAT71(local_108[0]._1_7_,(char)local_108[0]);
        }
        FUN_180005c80((longlong *)&local_e8,puVar8,uVar10);
        local_148 = 1;
        FUN_180005120((longlong *)&local_88,(undefined8 *)&local_e8);
        local_148 = 0;
        if (0xf < local_d0) {
          pvVar2 = (void *)CONCAT71(uStack_e7,local_e8);
          pvVar5 = pvVar2;
          if ((0xfff < local_d0 + 1) &&
             (pvVar5 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
        }
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = 0;
        uVar10 = uVar9 + 1;
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = 0;
        if (local_f8 < uVar10) {
          FUN_180005c00();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar11 = local_f8 - uVar9;
        if (local_f8 - uVar10 < local_f8 - uVar9) {
          uVar11 = local_f8 - uVar10;
        }
        puVar8 = (undefined1 *)local_108;
        if (0xf < local_f0) {
          puVar8 = (undefined1 *)CONCAT71(local_108[0]._1_7_,(char)local_108[0]);
        }
        FUN_180005c80((longlong *)&local_c8,puVar8 + uVar10,uVar11);
        local_148 = 2;
        FUN_180005120((longlong *)&local_a8,(undefined8 *)&local_c8);
        local_148 = 0;
        if (0xf < local_b0) {
          pvVar2 = (void *)CONCAT71(uStack_c7,local_c8);
          pvVar5 = pvVar2;
          if ((0xfff < local_b0 + 1) &&
             (pvVar5 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
        }
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = 0;
        FUN_180007eb0(lVar7,(undefined8 *)&local_88,(undefined8 *)&local_a8);
        if (0xf < local_90) {
          pvVar2 = (void *)CONCAT71(uStack_a7,local_a8);
          pvVar5 = pvVar2;
          if ((0xfff < local_90 + 1) &&
             (pvVar5 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
        }
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = 0;
        if (0xf < local_70) {
          pvVar2 = (void *)CONCAT71(uStack_87,local_88);
          pvVar5 = pvVar2;
          if ((0xfff < local_70 + 1) &&
             (pvVar5 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar5);
        }
        local_78 = 0;
        local_70 = 0xf;
        local_88 = 0;
        param_3 = local_140;
      }
    }
    if (0xf < local_f0) {
      pvVar2 = (void *)CONCAT71(local_108[0]._1_7_,(char)local_108[0]);
      pvVar5 = pvVar2;
      if ((0xfff < local_f0 + 1) &&
         (pvVar5 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar5);
    }
    local_f8 = 0;
    local_f0 = 0xf;
    local_108[0]._0_1_ = '\0';
  } while( true );
}




void FUN_180004f00(char *param_1,int param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  pbVar2 = FUN_1800012d0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,"Config: "
                        );
  pbVar2 = FUN_1800012d0(pbVar2,"");
  pbVar2 = FUN_1800012d0(pbVar2,"/");
  pbVar2 = FUN_1800012d0(pbVar2,param_1);
  pbVar2 = FUN_1800012d0(pbVar2,":");
  pbVar2 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,param_2);
  pbVar2 = FUN_1800012d0(pbVar2,":");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  pbVar2 = FUN_180001e00(pbVar2,param_3,*puVar1);
                    /* WARNING: Could not recover jumptable at 0x000180004fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar2,FUN_1800020f0);
  return;
}




undefined8 FUN_180004fc0(undefined8 param_1,char *param_2)

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
    if (DAT_18001c0a0 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18001c0a0 = &DAT_18001bfa0;
      pcVar1 = (char *)__std_type_info_name(0x18001a120,&DAT_18001cb30);
      FUN_180004910(pcVar1,DAT_18001c0a0,local_res10);
    }
    cVar2 = *pcVar3;
    cVar4 = *DAT_18001c0a0;
    pcVar1 = DAT_18001c0a0;
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




void FUN_1800050a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800050a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
  return;
}




int FUN_1800050b0(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x38);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)((longlong)param_1 + 0x38);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  FUN_180003050((longlong)param_1,param_2,param_3,param_4);
  free(param_1);
  return iVar2;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x5110  9  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180005113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




longlong * FUN_180005120(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_180005c80(param_1,&DAT_1800101f1,0);
    return param_1;
  }
  uVar4 = param_2[3];
  do {
    puVar2 = param_2;
    if (0xf < uVar4) {
      puVar2 = (undefined8 *)*param_2;
    }
    if (*(char *)((longlong)puVar2 + uVar6) != ' ') {
      puVar2 = param_2;
      if (0xf < uVar4) {
        puVar2 = (undefined8 *)*param_2;
      }
      if (*(char *)((longlong)puVar2 + uVar6) != '\t') {
        do {
          do {
            lVar3 = lVar3 + -1;
            puVar2 = param_2;
            if (0xf < uVar4) {
              puVar2 = (undefined8 *)*param_2;
            }
          } while (*(char *)((longlong)puVar2 + lVar3) == ' ');
          puVar2 = param_2;
          if (0xf < uVar4) {
            puVar2 = (undefined8 *)*param_2;
          }
        } while (*(char *)((longlong)puVar2 + lVar3) == '\t');
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        if ((ulonglong)param_2[2] < uVar6) {
          FUN_180005c00();
          pcVar1 = (code *)swi(3);
          plVar5 = (longlong *)(*pcVar1)();
          return plVar5;
        }
        uVar4 = (lVar3 - uVar6) + 1;
        uVar7 = param_2[2] - uVar6;
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        if (0xf < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        FUN_180005c80(param_1,(void *)((longlong)param_2 + uVar6),uVar4);
        return param_1;
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}




void FUN_180005250(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x80);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180005290(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_1800052d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180005310(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180005350(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050((longlong)param_2 + 0x40,param_2,param_3,param_4);
  FUN_180002df0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_1800053b0(longlong *param_1)

{
  int iVar1;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001a018 ^ (ulonglong)auStackY_68;
  if (((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x71) != '\0')) &&
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff), iVar1 != -1)) {
    iVar1 = std::codecvt<char,char,struct__Mbstatet>::unshift
                      ((codecvt<char,char,struct__Mbstatet> *)param_1[0xd],
                       (_Mbstatet *)((longlong)param_1 + 0x74),local_30,(char *)&local_10,&local_38)
    ;
    if (iVar1 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) goto LAB_18000545e;
    if ((longlong)local_38 - (longlong)local_30 != 0) {
      fwrite(local_30,1,(longlong)local_38 - (longlong)local_30,(FILE *)param_1[0x10]);
    }
  }
LAB_18000545e:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




void FUN_180005480(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    plVar3 = (longlong *)param_2[2];
    FUN_180005480(param_1,plVar3,param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180003050((longlong)(param_2 + 8),plVar3,param_3,param_4);
    FUN_180002df0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_180005510(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180005510(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180005b10(param_2 + 8);
    FUN_180002df0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




longlong * FUN_1800055a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)param_2[2];
  plVar5 = param_2 + 2;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar4 = *(char *)(*plVar3 + 0x19);
    plVar6 = (longlong *)*plVar3;
    while (cVar4 == '\0') {
      cVar4 = *(char *)(*plVar6 + 0x19);
      plVar3 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
  }
  else {
    cVar4 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((plVar3 = plVar7, cVar4 == '\0' && (plVar6 == (longlong *)plVar3[2]))) {
      cVar4 = *(char *)(plVar3[1] + 0x19);
      plVar7 = (longlong *)plVar3[1];
      plVar6 = plVar3;
    }
  }
  plVar6 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar5;
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (plVar7 = plVar6, *(char *)(*plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar3[2], plVar3 != param_2)) {
    plVar6[1] = (longlong)plVar3;
    *plVar3 = *param_2;
    plVar6 = plVar3;
    if (plVar3 != (longlong *)*plVar5) {
      plVar6 = (longlong *)plVar3[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar7;
      plVar3[2] = *plVar5;
      *(longlong **)(*plVar5 + 8) = plVar3;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar3;
    }
    else {
      plVar5 = (longlong *)param_2[1];
      if ((longlong *)*plVar5 == param_2) {
        *plVar5 = (longlong)plVar3;
      }
      else {
        plVar5[2] = (longlong)plVar3;
      }
    }
    plVar3[1] = param_2[1];
    cVar4 = (char)plVar3[3];
    *(char *)(plVar3 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = cVar4;
  }
  else {
    plVar6 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar7;
    }
    else {
      plVar6[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar5 = plVar6;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar4 = *(char *)(*plVar7 + 0x19);
        plVar3 = (longlong *)*plVar7;
        plVar5 = plVar7;
        while (plVar2 = plVar3, cVar4 == '\0') {
          plVar3 = (longlong *)*plVar2;
          cVar4 = *(char *)((longlong)plVar3 + 0x19);
          plVar5 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar5;
    }
    lVar1 = *param_1;
    if (*(longlong **)(lVar1 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
        *(longlong **)(lVar1 + 0x10) = plVar6;
        cVar4 = (char)param_2[3];
        goto LAB_180005744;
      }
      cVar4 = *(char *)(plVar7[2] + 0x19);
      plVar5 = (longlong *)plVar7[2];
      plVar3 = plVar7;
      while (plVar2 = plVar5, cVar4 == '\0') {
        plVar5 = (longlong *)plVar2[2];
        cVar4 = *(char *)((longlong)plVar5 + 0x19);
        plVar3 = plVar2;
      }
      *(longlong **)(lVar1 + 0x10) = plVar3;
    }
    cVar4 = (char)param_2[3];
  }
LAB_180005744:
  if (cVar4 == '\x01') {
    if (plVar7 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar5 = plVar6;
        if ((char)plVar7[3] != '\x01') break;
        plVar3 = (longlong *)*plVar5;
        if (plVar7 == plVar3) {
          plVar3 = (longlong *)plVar5[2];
          if ((char)plVar3[3] == '\0') {
            *(undefined1 *)(plVar3 + 3) = 1;
            plVar3 = (longlong *)plVar5[2];
            *(undefined1 *)(plVar5 + 3) = 0;
            plVar5[2] = *plVar3;
            if (*(char *)(*plVar3 + 0x19) == '\0') {
              *(longlong **)(*plVar3 + 8) = plVar5;
            }
            plVar3[1] = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar3;
            }
            else {
              plVar6 = (longlong *)plVar5[1];
              if (plVar5 == (longlong *)*plVar6) {
                *plVar6 = (longlong)plVar3;
              }
              else {
                plVar6[2] = (longlong)plVar3;
              }
            }
            *plVar3 = (longlong)plVar5;
            plVar5[1] = (longlong)plVar3;
            plVar3 = (longlong *)plVar5[2];
          }
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            if ((*(char *)(*plVar3 + 0x18) != '\x01') || (*(char *)(plVar3[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar3[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar3 + 0x18) = 1;
                *(undefined1 *)(plVar3 + 3) = 0;
                FUN_180005a70(param_1,plVar3);
                plVar3 = (longlong *)plVar5[2];
              }
              *(char *)(plVar3 + 3) = (char)plVar5[3];
              *(undefined1 *)(plVar5 + 3) = 1;
              *(undefined1 *)(plVar3[2] + 0x18) = 1;
              FUN_1800059e0(param_1,(longlong)plVar5);
              break;
            }
LAB_18000586d:
            *(undefined1 *)(plVar3 + 3) = 0;
          }
        }
        else {
          if ((char)plVar3[3] == '\0') {
            *(undefined1 *)(plVar3 + 3) = 1;
            *(undefined1 *)(plVar5 + 3) = 0;
            FUN_180005a70(param_1,plVar5);
            plVar3 = (longlong *)*plVar5;
          }
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            if ((*(char *)(plVar3[2] + 0x18) == '\x01') && (*(char *)(*plVar3 + 0x18) == '\x01'))
            goto LAB_18000586d;
            if (*(char *)(*plVar3 + 0x18) == '\x01') {
              *(undefined1 *)(plVar3[2] + 0x18) = 1;
              *(undefined1 *)(plVar3 + 3) = 0;
              FUN_1800059e0(param_1,(longlong)plVar3);
              plVar3 = (longlong *)*plVar5;
            }
            *(char *)(plVar3 + 3) = (char)plVar5[3];
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(*plVar3 + 0x18) = 1;
            FUN_180005a70(param_1,plVar5);
            break;
          }
        }
        plVar6 = (longlong *)plVar5[1];
        plVar7 = plVar5;
      } while (plVar5 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}




void FUN_180005900(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180005910(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180005920(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong param_2,
                  int param_3)

{
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
  param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)(param_3 == 1);
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  if (param_2 != 0) {
    local_res8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    _get_stream_buffer_pointers(param_2,&local_res8,local_res10,&local_res20);
    *(undefined8 *)(param_1 + 0x18) = local_res8;
    *(undefined8 *)(param_1 + 0x20) = local_res8;
    *(undefined8 *)(param_1 + 0x38) = local_res10[0];
    *(undefined8 *)(param_1 + 0x40) = local_res10[0];
    *(undefined8 *)(param_1 + 0x50) = local_res20;
    *(undefined8 *)(param_1 + 0x58) = local_res20;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_18001be78;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




void FUN_1800059c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800059cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file();
    return;
  }
  return;
}




void FUN_1800059e0(longlong *param_1,longlong param_2)

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




/* Library Function - Single Match
    private: void __cdecl std::basic_filebuf<char,struct std::char_traits<char> >::_Reset_back(void)
   __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back
          (basic_filebuf<char,struct_std::char_traits<char>_> *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((basic_filebuf<char,struct_std::char_traits<char>_> *)**(longlong **)(this + 0x18) ==
      this + 0x70) {
    lVar1 = *(longlong *)(this + 0x88);
    uVar2 = *(undefined8 *)(this + 0x90);
    **(longlong **)(this + 0x18) = lVar1;
    **(longlong **)(this + 0x38) = lVar1;
    **(int **)(this + 0x50) = (int)uVar2 - (int)lVar1;
  }
  return;
}




void FUN_180005a70(longlong *param_1,longlong *param_2)

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




void FUN_180005ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180005510(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_180005b10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        FUN_180002df0(plVar1);
        plVar1 = plVar1 + 4;
      } while (plVar1 != plVar2);
      plVar1 = (longlong *)*param_1;
    }
    plVar2 = plVar1;
    if ((0xfff < (param_1[2] - (longlong)plVar1 & 0xffffffffffffffe0U)) &&
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




void FUN_180005ba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180005bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}




void FUN_180005bc0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180005be0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180005c00(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void * FUN_180005c20(undefined8 param_1,ulonglong param_2)

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




longlong * FUN_180005c80(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180005bc0();
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
      if (pvVar3 == (void *)0x0) goto LAB_180005dc3;
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
LAB_180005dc3:
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




void FUN_180005dd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180005e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180005e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_180005e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_180005e90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180005f10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180005f90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfigSection>_>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180006000(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfigSection>*___ptr64___cdecl(class_CMomCloneObject<class_CConfigSection>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




uint FUN_180006070(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1800060e0(undefined8 param_1,void *param_2,ulonglong param_3)

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




void FUN_180006120(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 7)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




void FUN_180006170(undefined8 param_1,void *param_2,longlong param_3)

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




undefined8 *
FUN_1800061b0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_180005480(param_1,(longlong *)plVar6[1],param_3,param_4);
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
        plVar7 = (longlong *)plVar6[2];
        bVar1 = *(byte *)((longlong)plVar7 + 0x19);
        uVar8 = (ulonglong)bVar1;
        if (bVar1 == 0) {
          cVar2 = *(char *)(*plVar7 + 0x19);
          param_3 = plVar7;
          plVar5 = (longlong *)*plVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar2 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6;
          while ((param_3 = plVar4, cVar2 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar2 = *(char *)(param_3[1] + 0x19);
            plVar4 = (longlong *)param_3[1];
            plVar5 = param_3;
          }
        }
        if (bVar1 == 0) {
          plVar5 = (longlong *)*plVar7;
          cVar2 = *(char *)((longlong)plVar5 + 0x19);
          while (cVar2 == '\0') {
            plVar5 = (longlong *)*plVar5;
            cVar2 = *(char *)((longlong)plVar5 + 0x19);
          }
        }
        else {
          cVar2 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar5 = plVar6;
          while ((plVar3 = plVar4, cVar2 == '\0' && (plVar5 == (longlong *)plVar3[2]))) {
            cVar2 = *(char *)(plVar3[1] + 0x19);
            plVar4 = (longlong *)plVar3[1];
            plVar5 = plVar3;
          }
        }
        plVar5 = FUN_1800055a0(param_1,plVar6);
        FUN_180003050((longlong)(plVar5 + 8),plVar6,plVar7,uVar8);
        FUN_180002df0(plVar5 + 4);
        free(plVar5);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




void FUN_180006320(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_180002130(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x000180006369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  return;
}




void FUN_180006370(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  size_t _Count;
  char cVar7;
  undefined1 auStackY_88 [32];
  char local_48;
  char local_47 [7];
  char *local_40;
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001a018 ^ (ulonglong)auStackY_88;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    cVar7 = (char)param_2;
    if ((uVar1 == 0) || ((longlong)**(int **)(param_1 + 0x58) + uVar1 <= uVar1)) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18)
            == param_1 + 0x70) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          lVar3 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar3;
          **(longlong **)(param_1 + 0x38) = lVar3;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar3;
        }
        if (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68) ==
            (codecvt<char,char,struct__Mbstatet> *)0x0) {
          fputc((int)cVar7,*(FILE **)(param_1 + 0x80));
        }
        else {
          local_48 = cVar7;
          iVar4 = std::codecvt<char,char,struct__Mbstatet>::out
                            (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),&local_48,local_47,&local_38,local_30,
                             (char *)&local_10,&local_40);
          if (-1 < iVar4) {
            if (iVar4 < 2) {
              _Count = (longlong)local_40 - (longlong)local_30;
              if ((_Count == 0) ||
                 (sVar6 = fwrite(local_30,1,_Count,*(FILE **)(param_1 + 0x80)), _Count == sVar6)) {
                param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x1;
              }
            }
            else if (iVar4 == 3) {
              fputc((int)local_48,*(FILE **)(param_1 + 0x80));
            }
          }
        }
      }
    }
    else {
      pcVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
      *pcVar5 = cVar7;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
  return;
}




int FUN_180006510(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

{
  void *_Src;
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong _Size;
  longlong lVar5;
  
  if (((byte)param_1[0x70] & 2) != 0) {
    return -1;
  }
  if (param_2 != -1) {
    uVar4 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar4 != 0) && (uVar4 < (longlong)**(int **)(param_1 + 0x58) + uVar4)) {
      pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
      *pcVar3 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar4 + 1;
      return param_2;
    }
    _Src = (void *)**(undefined8 **)(param_1 + 0x18);
    _Size = ((longlong)**(int **)(param_1 + 0x58) + uVar4) - (longlong)_Src;
    if (uVar4 == 0) {
      _Size = 0;
    }
    if (_Size < 0x20) {
      uVar4 = 0x20;
    }
    else if (_Size < 0x3fffffff) {
      uVar4 = _Size * 2;
    }
    else {
      uVar4 = 0x7fffffff;
      if (0x7ffffffe < _Size) {
        return -1;
      }
    }
    _Dst = FUN_180005c20(param_1 + 0x74,uVar4);
    memcpy(_Dst,_Src,_Size);
    lVar5 = _Size + (longlong)_Dst;
    *(longlong *)(param_1 + 0x68) = lVar5 + 1;
    **(undefined8 **)(param_1 + 0x20) = _Dst;
    **(longlong **)(param_1 + 0x40) = lVar5;
    **(int **)(param_1 + 0x58) = ((int)_Dst - (int)lVar5) + (int)uVar4;
    if (((byte)param_1[0x70] & 4) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      lVar5 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)_Dst;
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(longlong **)(param_1 + 0x38) = lVar5;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar5;
    }
    else {
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(undefined8 **)(param_1 + 0x38) = 0;
      **(int **)(param_1 + 0x50) = (int)_Dst;
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    if ((uVar2 & 1) != 0) {
      FUN_1800060e0(param_1 + 0x74,_Src,_Size);
      uVar2 = *(uint *)(param_1 + 0x70);
    }
    *(uint *)(param_1 + 0x70) = uVar2 | 1;
    pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
    *pcVar3 = (char)param_2;
    return param_2;
  }
  return 0;
}




uint FUN_1800066c0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (undefined1 *)(param_1 + 0x70);
    if ((undefined1 *)**(longlong **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (undefined1 *)**(longlong **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(undefined1 **)(param_1 + 0x88) = puVar3;
        *(longlong *)(param_1 + 0x90) =
             (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}




int FUN_1800067b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x70) & 2) == 0)))))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}




void FUN_180006810(undefined8 *param_1,undefined1 param_2)

{
  ulonglong _Size;
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  void *_Dst;
  
  _Size = param_1[2];
  uVar1 = param_1[3];
  if (_Size < uVar1) {
    param_1[2] = _Size + 1;
    if (0xf < uVar1) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + _Size) = param_2;
    *(undefined1 *)((longlong)param_1 + _Size + 1) = 0;
    return;
  }
  if (_Size == 0x7fffffffffffffff) {
    FUN_180005bc0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = _Size + 1 | 0xf;
  uVar6 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
     (uVar5 = (uVar1 >> 1) + uVar1, uVar6 = uVar4, uVar4 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar4 = uVar6 + 1;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar5 = uVar6 + 0x28;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar5);
    if (pvVar3 == (void *)0x0) goto LAB_180006954;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar6;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_2;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    pvVar3 = (void *)*param_1;
    memcpy(_Dst,pvVar3,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_2;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    _Memory = pvVar3;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180006954:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return;
}




fpos_t * FUN_1800069a0(basic_filebuf<char,struct_std::char_traits<char>_> *param_1,fpos_t *param_2,
                      longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  fpos_t fVar3;
  fpos_t local_res8;
  
  if ((((basic_filebuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x38) ==
        param_1 + 0x70) && (param_4 == 1)) && (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_1800053b0((longlong *)param_1);
    if (cVar1 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4);
        if (iVar2 != 0) goto LAB_180006a3d;
      }
      iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar2 == 0) {
        std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back(param_1);
        fVar3 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_180006a46;
      }
    }
  }
LAB_180006a3d:
  *param_2 = -1;
  fVar3 = 0;
LAB_180006a46:
  param_2[1] = 0;
  param_2[2] = fVar3;
  return param_2;
}




ulonglong *
FUN_180006a70(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = **(longlong **)(param_1 + 0x38);
  uVar4 = **(ulonglong **)(param_1 + 0x40);
  if ((uVar4 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar4)) {
    *(ulonglong *)(param_1 + 0x68) = uVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar9 = lVar5 - lVar6;
  uVar8 = 0;
  if (param_4 == 0) {
LAB_180006b20:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar9) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar4 != 0)))))))) {
      lVar1 = lVar6 + uVar8;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar4 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar7 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar6;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_180006b90;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar4 != 0 || (lVar6 == 0)))) {
          uVar8 = uVar4 - lVar6;
          goto LAB_180006b20;
        }
      }
      else if ((lVar3 != 0) || (lVar6 == 0)) {
        uVar8 = lVar3 - lVar6;
        goto LAB_180006b20;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_180006b20;
  }
  *param_2 = 0xffffffffffffffff;
LAB_180006b90:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




longlong * FUN_180006bc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar2 = FUN_1800053b0(param_1);
    if (cVar2 != '\0') {
      iVar3 = fsetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar3 == 0) {
        lVar4 = param_3[2];
        *(longlong *)((longlong)param_1 + 0x74) = lVar4;
        if (*(longlong **)param_1[3] == param_1 + 0xe) {
          lVar4 = param_1[0x11];
          lVar1 = param_1[0x12];
          *(longlong *)param_1[3] = lVar4;
          *(longlong *)param_1[7] = lVar4;
          *(int *)param_1[10] = (int)lVar1 - (int)lVar4;
          lVar4 = *(longlong *)((longlong)param_1 + 0x74);
        }
        *param_2 = local_res8;
        param_2[1] = 0;
        param_2[2] = lVar4;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




ulonglong * FUN_180006ca0(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar8 = param_3[1] + *param_3;
  uVar3 = **(ulonglong **)(param_1 + 0x40);
  lVar4 = **(longlong **)(param_1 + 0x38);
  if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar3)) {
    *(ulonglong *)(param_1 + 0x68) = uVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  if (((ulonglong)(lVar5 - lVar6) < uVar8) ||
     ((uVar8 != 0 &&
      ((((param_4 & 1) != 0 && (lVar4 == 0)) || (((param_4 & 2) != 0 && (uVar3 == 0)))))))) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = lVar6 + uVar8;
    if (((param_4 & 1) != 0) && (lVar4 != 0)) {
      **(longlong **)(param_1 + 0x38) = lVar1;
      **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
    }
    if (((param_4 & 2) != 0) && (uVar3 != 0)) {
      iVar2 = **(int **)(param_1 + 0x58);
      uVar7 = **(undefined8 **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x20) = lVar6;
      **(longlong **)(param_1 + 0x40) = lVar1;
      **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
    }
    *param_2 = uVar8;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180006d90(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
             size_t param_3)

{
  int iVar1;
  
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((param_2 == (char *)0x0) && (param_3 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar1,param_3);
    if (iVar1 == 0) {
      FUN_180005920(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}




longlong * FUN_180006df0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong *puVar3;
  size_t sVar4;
  ulonglong local_20 [2];
  longlong *local_10;
  
  local_20[1] = 0xfffffffffffffffe;
  local_10 = param_2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (((*(uint *)(param_1 + 0x88) & 2) == 0) &&
     (uVar1 = **(ulonglong **)(param_1 + 0x58), uVar1 != 0)) {
    pvVar2 = (void *)**(longlong **)(param_1 + 0x38);
    local_20[0] = uVar1;
    puVar3 = local_20;
    if (uVar1 < *(ulonglong *)(param_1 + 0x80)) {
      puVar3 = (ulonglong *)(param_1 + 0x80);
    }
    sVar4 = *puVar3 - (longlong)pvVar2;
  }
  else {
    if ((*(uint *)(param_1 + 0x88) & 4) != 0) {
      return param_2;
    }
    if (**(longlong **)(param_1 + 0x50) == 0) {
      return param_2;
    }
    pvVar2 = (void *)**(longlong **)(param_1 + 0x30);
    sVar4 = ((longlong)**(int **)(param_1 + 0x68) - (longlong)pvVar2) +
            **(longlong **)(param_1 + 0x50);
  }
  FUN_180005c80(param_2,pvVar2,sVar4);
  return param_2;
}




longlong * FUN_180006eb0(undefined8 *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (param_3 <= (ulonglong)param_1[2]) {
    uVar2 = param_1[2] - param_3;
    if (uVar2 < param_4) {
      param_4 = uVar2;
    }
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_180005c80(param_2,(void *)((longlong)param_1 + param_3),param_4);
    return param_2;
  }
  FUN_180005c00();
  pcVar1 = (code *)swi(3);
  plVar3 = (longlong *)(*pcVar1)();
  return plVar3;
}




undefined8 FUN_180006f20(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}




void FUN_180006f70(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  void *_Memory;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStackY_98 [32];
  char local_58;
  char local_57 [7];
  char *local_50;
  char *local_48;
  undefined8 local_40;
  char local_38;
  undefined7 uStack_37;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18001a018 ^ (ulonglong)auStackY_98;
  uVar7 = **(ulonglong **)(param_1 + 0x38);
  if ((uVar7 == 0) || ((longlong)**(int **)(param_1 + 0x50) + uVar7 <= uVar7)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
          param_1 + 0x70) {
        uVar1 = *(undefined8 *)(param_1 + 0x90);
        lVar2 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_28 = 0;
        local_20 = 0xf;
        local_38 = '\0';
        iVar4 = fgetc(*(FILE **)(param_1 + 0x80));
        while( true ) {
          if (iVar4 == -1) goto LAB_180007143;
          FUN_180006810((undefined8 *)&local_38,(char)iVar4);
          pcVar5 = &local_38;
          if (0xf < local_20) {
            pcVar5 = (char *)CONCAT71(uStack_37,local_38);
          }
          pcVar6 = &local_38;
          if (0xf < local_20) {
            pcVar6 = (char *)CONCAT71(uStack_37,local_38);
          }
          iVar4 = std::codecvt<char,char,struct__Mbstatet>::in
                            (*(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),pcVar6,pcVar5 + local_28,&local_50,
                             &local_58,local_57,&local_48);
          if ((iVar4 < 0) || (1 < iVar4)) goto LAB_180007143;
          if (local_48 != &local_58) break;
          pcVar5 = &local_38;
          if (0xf < local_20) {
            pcVar5 = (char *)CONCAT71(uStack_37,local_38);
          }
          uVar7 = (longlong)local_50 - (longlong)pcVar5;
          if (local_28 < (ulonglong)((longlong)local_50 - (longlong)pcVar5)) {
            uVar7 = local_28;
          }
          pcVar5 = &local_38;
          if (0xf < local_20) {
            pcVar5 = (char *)CONCAT71(uStack_37,local_38);
          }
          local_28 = local_28 - uVar7;
          memmove(pcVar5,pcVar5 + uVar7,local_28 + 1);
          iVar4 = fgetc(*(FILE **)(param_1 + 0x80));
        }
        pcVar5 = &local_38;
        if (0xf < local_20) {
          pcVar5 = (char *)CONCAT71(uStack_37,local_38);
        }
        pcVar5 = pcVar5 + (local_28 - (longlong)local_50);
        while (0 < (longlong)pcVar5) {
          pcVar5 = pcVar5 + -1;
          ungetc((int)pcVar5[(longlong)local_50],*(FILE **)(param_1 + 0x80));
        }
LAB_180007143:
        if (0xf < local_20) {
          pvVar3 = (void *)CONCAT71(uStack_37,local_38);
          _Memory = pvVar3;
          if ((0xfff < local_20 + 1) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        local_28 = 0;
        local_20 = 0xf;
        local_38 = '\0';
        goto LAB_1800071ff;
      }
      fgetc(*(FILE **)(param_1 + 0x80));
    }
  }
  else {
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gninc(param_1);
  }
LAB_1800071ff:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




ulonglong FUN_180007230(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}




ulonglong FUN_1800072a0(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  pbVar4 = (byte *)*puVar1;
  if (pbVar4 != (byte *)0x0) {
    if (pbVar4 < pbVar4 + **(int **)(param_1 + 0x50)) {
LAB_1800072fa:
      return (ulonglong)*pbVar4;
    }
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar2 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar2) {
        pbVar5 = pbVar2;
      }
      if (pbVar4 < pbVar5) {
        *(byte **)(param_1 + 0x68) = pbVar5;
        uVar3 = *puVar1;
        *puVar1 = uVar3;
        **(int **)(param_1 + 0x50) = (int)pbVar5 - (int)uVar3;
        pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x38);
        goto LAB_1800072fa;
      }
    }
  }
  return 0xffffffff;
}




char * FUN_180007310(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




longlong FUN_180007330(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180007360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsgetn
                      (param_1,param_2,param_3);
    return _Var1;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x38) == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x50);
  }
  _Count = param_3;
  if (0 < (longlong)param_3) {
    if (0 < iVar3) {
      sVar2 = (longlong)iVar3;
      if ((longlong)param_3 < (longlong)iVar3) {
        sVar2 = param_3;
      }
      memcpy(param_2,(void *)**(undefined8 **)(param_1 + 0x38),sVar2);
      param_2 = param_2 + sVar2;
      _Count = param_3 - sVar2;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)sVar2;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)sVar2;
    }
    if ((0 < (longlong)_Count) && (*(longlong *)(param_1 + 0x80) != 0)) {
      std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back
                ((basic_filebuf<char,struct_std::char_traits<char>_> *)param_1);
      sVar2 = fread(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar2;
    }
  }
  return param_3 - _Count;
}




longlong FUN_180007420(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180007450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsputn
                      (param_1,param_2,param_3);
    return _Var1;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x40) == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x58);
  }
  _Count = param_3;
  if (0 < (longlong)param_3) {
    if (0 < iVar3) {
      sVar2 = (longlong)iVar3;
      if ((longlong)param_3 < (longlong)iVar3) {
        sVar2 = param_3;
      }
      memcpy((void *)**(undefined8 **)(param_1 + 0x40),param_2,sVar2);
      param_2 = param_2 + sVar2;
      _Count = param_3 - sVar2;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)sVar2;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)(int)sVar2;
    }
    if ((0 < (longlong)_Count) && (*(FILE **)(param_1 + 0x80) != (FILE *)0x0)) {
      sVar2 = fwrite(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar2;
    }
  }
  return param_3 - _Count;
}




longlong FUN_180007500(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180005310(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_1800023f0((undefined8 *)(lVar1 + 0x20),(undefined8 *)*param_3);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return lVar1;
}




undefined8 *
FUN_180007760(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_180008810(param_1,param_6);
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
      goto LAB_1800077df;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_1800077df;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_1800077df:
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
        goto LAB_180007985;
      }
LAB_1800078f6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_1800078f6;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180005a70(param_1,plVar2);
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
LAB_180007985:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_1800079e0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_180007760(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_180007760(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_180006070(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_180007760(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180003490((longlong *)&local_38);
      uVar2 = FUN_180006070((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_180007760(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_180007760(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_180006070(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180003420((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_180006070(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_180007760(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_180007760(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180007c10(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180007c10(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_180006070(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_180006070(plVar5 + 4,param_4);
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
      puVar4 = FUN_180007760(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_180006070(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_180007760(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_180003030(param_5 + 8);
    FUN_180002df0(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 * FUN_180007e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    do {
      param_3[2] = 0;
      param_3[3] = 0;
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}




void FUN_180007e80(longlong *param_1)

{
  FUN_180003030(param_1 + 4);
  FUN_180002df0(param_1);
  return;
}




undefined8 * FUN_180007eb0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *local_res8;
  undefined8 *local_res20;
  
  plVar8 = *(longlong **)(param_1 + 8);
  cVar2 = *(char *)(plVar8[1] + 0x19);
  plVar16 = plVar8;
  plVar14 = (longlong *)plVar8[1];
  while (cVar2 == '\0') {
    uVar5 = FUN_180006070(plVar14 + 4,param_2);
    if ((int)uVar5 < 0) {
      plVar15 = (longlong *)plVar14[2];
      plVar14 = plVar16;
    }
    else {
      plVar15 = (longlong *)*plVar14;
    }
    plVar16 = plVar14;
    plVar14 = plVar15;
    cVar2 = *(char *)((longlong)plVar15 + 0x19);
  }
  if ((plVar16 == plVar8) || (uVar5 = FUN_180006070(param_2,plVar16 + 4), (int)uVar5 < 0)) {
    local_res20 = param_2;
    plVar8 = (longlong *)FUN_180007500((longlong *)(param_1 + 8),&DAT_180010883,&local_res20);
    FUN_1800079e0((longlong *)(param_1 + 8),&local_res8,plVar16,plVar8 + 4,plVar8);
    plVar16 = local_res8;
  }
  puVar9 = (undefined8 *)plVar16[9];
  if ((undefined8 *)plVar16[10] != puVar9) {
    puVar9 = FUN_1800023f0(puVar9,param_3);
    plVar16[9] = plVar16[9] + 0x20;
    return puVar9;
  }
  plVar8 = plVar16 + 8;
  lVar3 = *plVar8;
  lVar19 = plVar16[9] - lVar3 >> 5;
  local_res8 = plVar8;
  if (lVar19 == 0x7ffffffffffffff) {
    FUN_180005be0();
    pcVar4 = (code *)swi(3);
    puVar9 = (undefined8 *)(*pcVar4)();
    return puVar9;
  }
  puVar20 = (undefined8 *)(lVar19 + 1);
  uVar10 = plVar16[10] - lVar3 >> 5;
  puVar6 = puVar20;
  if ((uVar10 <= 0x7ffffffffffffff - (uVar10 >> 1)) &&
     (puVar6 = (undefined8 *)((uVar10 >> 1) + uVar10), puVar6 < puVar20)) {
    puVar6 = puVar20;
  }
  uVar10 = (longlong)puVar6 * 0x20;
  local_res20 = puVar6;
  if (puVar6 < (undefined8 *)0x800000000000000) {
    if (uVar10 < 0x1000) {
      if (uVar10 == 0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        puVar17 = (undefined8 *)operator_new(uVar10);
      }
      goto LAB_18000766f;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
  }
  uVar11 = uVar10 + 0x27;
  if (uVar11 <= uVar10) {
    uVar11 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new(uVar11);
  if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  puVar17 = (undefined8 *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
  puVar17[-1] = pvVar7;
LAB_18000766f:
  puVar1 = (undefined8 *)(((longlong)puVar9 - lVar3 & 0xffffffffffffffe0U) + (longlong)puVar17);
  FUN_1800023f0(puVar1,param_3);
  puVar13 = (undefined8 *)plVar16[9];
  puVar12 = (undefined8 *)*plVar8;
  puVar18 = puVar17;
  if (puVar9 != puVar13) {
    FUN_180007e00((undefined8 *)*plVar8,puVar9,puVar17);
    puVar13 = (undefined8 *)plVar16[9];
    puVar12 = puVar9;
    puVar18 = puVar1 + 4;
  }
  FUN_180007e00(puVar12,puVar13,puVar18);
  plVar14 = (longlong *)*plVar8;
  if (plVar14 != (longlong *)0x0) {
    plVar15 = (longlong *)plVar16[9];
    if (plVar14 != plVar15) {
      do {
        FUN_180002df0(plVar14);
        plVar14 = plVar14 + 4;
      } while (plVar14 != plVar15);
      plVar14 = (longlong *)*plVar8;
    }
    plVar15 = plVar14;
    if ((0xfff < (plVar16[10] - (longlong)plVar14 & 0xffffffffffffffe0U)) &&
       (plVar15 = (longlong *)plVar14[-1],
       0x1f < (ulonglong)((longlong)plVar14 + (-8 - (longlong)plVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar15);
  }
  *plVar8 = (longlong)puVar17;
  plVar16[9] = (longlong)(puVar17 + (longlong)puVar20 * 4);
  plVar16[10] = (longlong)(puVar17 + (longlong)puVar6 * 4);
  return puVar1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180007fa0(longlong param_1,void *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulonglong _Size;
  ulonglong _Size_00;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_18001a018 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0xf;
  local_50[0]._0_1_ = 0;
  sVar11 = 0xffffffffffffffff;
  do {
    sVar11 = sVar11 + 1;
  } while (*(char *)((longlong)param_2 + sVar11) != '\0');
  FUN_180005c80(local_50,param_2,sVar11);
  uVar5 = local_38;
  _Size_00 = local_40;
  puVar9 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined1 *)CONCAT71(local_50[0]._1_7_,(undefined1)local_50[0]);
  cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
  puVar10 = puVar9;
  puVar4 = (undefined8 *)puVar9[1];
  do {
    if (cVar1 != '\0') {
      if (puVar10 != puVar9) {
        puVar9 = puVar10 + 4;
        if (0xf < (ulonglong)puVar10[7]) {
          puVar9 = (undefined8 *)puVar10[4];
        }
        puVar8 = (undefined1 *)local_50;
        if (0xf < uVar5) {
          puVar8 = puVar3;
        }
        if ((ulonglong)puVar10[6] < _Size_00) {
          _Size_00 = puVar10[6];
        }
        memcmp(puVar8,puVar9,_Size_00);
      }
      if (0xf < uVar5) {
        puVar8 = puVar3;
        if ((0xfff < uVar5 + 1) &&
           (puVar8 = *(undefined1 **)(puVar3 + 0xfffffffffffffff8),
           (undefined1 *)0x1f < puVar3 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(puVar8);
      }
      local_40 = 0;
      local_38 = 0xf;
      local_50[0]._0_1_ = 0;
      __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
      return;
    }
    puVar8 = (undefined1 *)local_50;
    if (0xf < uVar5) {
      puVar8 = puVar3;
    }
    puVar7 = puVar4 + 4;
    if (0xf < (ulonglong)puVar4[7]) {
      puVar7 = (undefined8 *)puVar4[4];
    }
    uVar2 = puVar4[6];
    _Size = uVar2;
    if (_Size_00 < uVar2) {
      _Size = _Size_00;
    }
    iVar6 = memcmp(puVar7,puVar8,_Size);
    if (iVar6 == 0) {
      if (_Size_00 <= uVar2) goto LAB_180008080;
LAB_18000810e:
      puVar7 = (undefined8 *)puVar4[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000810e;
LAB_180008080:
      puVar7 = (undefined8 *)*puVar4;
      puVar10 = puVar4;
    }
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
    puVar4 = puVar7;
  } while( true );
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180008180(undefined ***param_1,void *param_2,int param_3,__int64 param_4)

{
  char cVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  basic_istream<char,struct_std::char_traits<char>_> *this;
  undefined **ppuVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined **ppuVar13;
  size_t sVar14;
  undefined *puVar15;
  undefined1 auStack_1a8 [32];
  __int64 local_188;
  int local_180;
  undefined4 local_17c;
  undefined ***local_178;
  undefined8 local_170;
  undefined *local_168 [2];
  undefined *local_158;
  undefined **local_150 [13];
  undefined8 local_e8;
  undefined4 local_e0;
  basic_ios<char,struct_std::char_traits<char>_> local_d0 [104];
  longlong local_68 [2];
  undefined *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_170 = 0xfffffffffffffffe;
  local_48 = DAT_18001a018 ^ (ulonglong)auStack_1a8;
  local_17c = 0;
  local_188 = param_4;
  local_180 = param_3;
  local_178 = param_1;
  if (param_3 < 0) goto LAB_18000847b;
  local_58 = (undefined *)0x0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar14 = 0xffffffffffffffff;
  do {
    sVar14 = sVar14 + 1;
  } while (*(char *)((longlong)param_2 + sVar14) != '\0');
  FUN_180005c80(local_68,param_2,sVar14);
  uVar4 = local_50;
  puVar6 = local_58;
  ppuVar2 = param_1[1];
  puVar5 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  cVar1 = *(char *)((longlong)ppuVar2[1] + 0x19);
  ppuVar13 = ppuVar2;
  ppuVar11 = (undefined **)ppuVar2[1];
  while (cVar1 == '\0') {
    puVar9 = (undefined1 *)local_68;
    if (0xf < uVar4) {
      puVar9 = puVar5;
    }
    ppuVar8 = ppuVar11 + 4;
    if ((undefined *)0xf < ppuVar11[7]) {
      ppuVar8 = (undefined **)ppuVar11[4];
    }
    puVar3 = ppuVar11[6];
    puVar15 = puVar3;
    if (puVar6 < puVar3) {
      puVar15 = puVar6;
    }
    iVar7 = memcmp(ppuVar8,puVar9,(size_t)puVar15);
    if (iVar7 == 0) {
      if (puVar6 <= puVar3) goto LAB_18000826f;
LAB_1800082fc:
      ppuVar8 = (undefined **)ppuVar11[2];
    }
    else {
      if (iVar7 < 0) goto LAB_1800082fc;
LAB_18000826f:
      ppuVar8 = (undefined **)*ppuVar11;
      ppuVar13 = ppuVar11;
    }
    ppuVar11 = ppuVar8;
    param_3 = local_180;
    cVar1 = *(char *)((longlong)ppuVar8 + 0x19);
  }
  if (ppuVar13 == ppuVar2) {
LAB_1800082c1:
    ppuVar13 = ppuVar2;
  }
  else {
    ppuVar11 = ppuVar13 + 4;
    if ((undefined *)0xf < ppuVar13[7]) {
      ppuVar11 = (undefined **)ppuVar13[4];
    }
    puVar9 = (undefined1 *)local_68;
    if (0xf < uVar4) {
      puVar9 = puVar5;
    }
    puVar3 = ppuVar13[6];
    puVar15 = puVar6;
    if (puVar3 < puVar6) {
      puVar15 = puVar3;
    }
    iVar7 = memcmp(puVar9,ppuVar11,(size_t)puVar15);
    if (iVar7 == 0) {
      if (puVar6 < puVar3) goto LAB_1800082c1;
      if (puVar6 <= puVar3) goto LAB_1800082bf;
    }
    else {
LAB_1800082bf:
      if (iVar7 < 0) goto LAB_1800082c1;
    }
  }
  if (0xf < uVar4) {
    puVar9 = puVar5;
    if ((0xfff < uVar4 + 1) &&
       (puVar9 = *(undefined1 **)(puVar5 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar5 + (-8 - (longlong)puVar9))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar9);
  }
  local_58 = (undefined *)0x0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  if ((local_178[1] == ppuVar13) ||
     ((ulonglong)((longlong)ppuVar13[9] - (longlong)ppuVar13[8] >> 5) <=
      (ulonglong)(longlong)param_3)) goto LAB_18000847b;
  local_168[0] = &DAT_180010368;
  local_158 = &DAT_180010370;
  std::basic_ios<char,struct_std::char_traits<char>_>::
  basic_ios<char,struct_std::char_traits<char>_>(local_d0);
  local_17c = 1;
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)local_168,
             (basic_streambuf<char,struct_std::char_traits<char>_> *)local_150);
  *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4) + -4) =
       *(int *)(local_168[0] + 4) + -0x98;
  local_178 = local_150;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>
            ((basic_streambuf<char,struct_std::char_traits<char>_> *)local_150);
  local_150[0] = std::
                 basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 vftable;
  local_e8 = 0;
  local_e0 = 0;
  pcVar12 = ppuVar13[8] + (longlong)param_3 * 0x20;
  pcVar10 = pcVar12;
  if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
    pcVar10 = *(char **)pcVar12;
  }
  FUN_180001e00((basic_ostream<char,struct_std::char_traits<char>_> *)&local_158,pcVar10,
                *(ulonglong *)(pcVar12 + 0x10));
  if (*(ulonglong *)(pcVar12 + 0x10) < 3) {
LAB_180008459:
    this = (basic_istream<char,struct_std::char_traits<char>_> *)local_168;
  }
  else {
    uVar4 = *(ulonglong *)(pcVar12 + 0x18);
    pcVar10 = pcVar12;
    if (0xf < uVar4) {
      pcVar10 = *(char **)pcVar12;
    }
    if (*pcVar10 != '0') goto LAB_180008459;
    pcVar10 = pcVar12;
    if (0xf < uVar4) {
      pcVar10 = *(char **)pcVar12;
    }
    if (pcVar10[1] != 'x') {
      if (0xf < uVar4) {
        pcVar12 = *(char **)pcVar12;
      }
      if (pcVar12[1] != 'X') goto LAB_180008459;
    }
    this = std::basic_istream<char,struct_std::char_traits<char>_>::operator>>
                     ((basic_istream<char,struct_std::char_traits<char>_> *)local_168,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_1800088b0);
  }
  std::basic_istream<char,struct_std::char_traits<char>_>::operator>>(this,&local_188);
  FUN_1800038c0((longlong *)local_168);
LAB_18000847b:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1a8);
  return;
}




char * FUN_1800084b0(void)

{
  return "CConfigSection";
}




longlong * FUN_1800084c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800084d0(longlong param_1,void *param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulonglong _Size;
  ulonglong _Size_00;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_18001a018 ^ (ulonglong)auStack_88;
  local_68 = param_3;
  local_60 = param_1;
  if (-1 < param_3) {
    local_40 = 0;
    local_38 = 0xf;
    local_50[0]._0_1_ = 0;
    sVar11 = 0xffffffffffffffff;
    do {
      sVar11 = sVar11 + 1;
    } while (*(char *)((longlong)param_2 + sVar11) != '\0');
    FUN_180005c80(local_50,param_2,sVar11);
    uVar5 = local_38;
    _Size_00 = local_40;
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar3 = (undefined1 *)CONCAT71(local_50[0]._1_7_,(undefined1)local_50[0]);
    cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
    puVar10 = puVar9;
    puVar4 = (undefined8 *)puVar9[1];
    while (cVar1 == '\0') {
      puVar8 = (undefined1 *)local_50;
      if (0xf < uVar5) {
        puVar8 = puVar3;
      }
      puVar7 = puVar4 + 4;
      if (0xf < (ulonglong)puVar4[7]) {
        puVar7 = (undefined8 *)puVar4[4];
      }
      uVar2 = puVar4[6];
      _Size = uVar2;
      if (_Size_00 < uVar2) {
        _Size = _Size_00;
      }
      iVar6 = memcmp(puVar7,puVar8,_Size);
      if (iVar6 == 0) {
        if (_Size_00 <= uVar2) goto LAB_1800085d0;
LAB_18000865e:
        puVar7 = (undefined8 *)puVar4[2];
      }
      else {
        if (iVar6 < 0) goto LAB_18000865e;
LAB_1800085d0:
        puVar7 = (undefined8 *)*puVar4;
        puVar10 = puVar4;
      }
      puVar4 = puVar7;
      cVar1 = *(char *)((longlong)puVar7 + 0x19);
    }
    if (puVar10 != puVar9) {
      puVar9 = puVar10 + 4;
      if (0xf < (ulonglong)puVar10[7]) {
        puVar9 = (undefined8 *)puVar10[4];
      }
      puVar8 = (undefined1 *)local_50;
      if (0xf < uVar5) {
        puVar8 = puVar3;
      }
      if ((ulonglong)puVar10[6] < _Size_00) {
        _Size_00 = puVar10[6];
      }
      memcmp(puVar8,puVar9,_Size_00);
    }
    if (0xf < uVar5) {
      puVar8 = puVar3;
      if ((0xfff < uVar5 + 1) &&
         (puVar8 = *(undefined1 **)(puVar3 + 0xfffffffffffffff8),
         (undefined1 *)0x1f < puVar3 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(puVar8);
    }
    local_40 = 0;
    local_38 = 0xf;
    local_50[0]._0_1_ = 0;
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_88);
  return;
}




undefined8 FUN_1800086f0(undefined8 param_1,char *param_2)

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
    if (DAT_18001c1b0 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18001c1b0 = &DAT_18001c0b0;
      pcVar1 = (char *)__std_type_info_name(0x18001a788,&DAT_18001cb30);
      FUN_180004910(pcVar1,DAT_18001c1b0,local_res10);
    }
    cVar2 = *pcVar3;
    cVar4 = *DAT_18001c1b0;
    pcVar1 = DAT_18001c1b0;
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




void FUN_1800087d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180002df0(param_2);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180008810(undefined8 param_1,void *param_2)

{
  FUN_180003030((longlong *)((longlong)param_2 + 0x40));
  FUN_180002df0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_180008860(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 5)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




longlong * FUN_1800088d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180005250();
  *param_1 = lVar1;
  local_res8 = SUB81(param_1,0);
  FUN_180008a80(param_1,param_2,local_res8);
  return param_1;
}




void FUN_180008920(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180008960(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




longlong FUN_1800089a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1800052d0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_180009520(param_1,(undefined8 *)(lVar1 + 0x20),param_2);
  return lVar1;
}




void FUN_180008a00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180005310(param_1);
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




void FUN_180008a80(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *param_1;
  puVar7 = FUN_180008b30(param_1,*(undefined8 **)(*param_2 + 8),lVar2,param_3);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x19);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar2;
  return;
}




undefined8 *
FUN_180008b30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_1800089a0(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_180008b30(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_180008b30(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




longlong * FUN_180008bd0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180005be0();
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
      goto LAB_180008cc5;
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
LAB_180008cc5:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180009590(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180009470((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180009470(plVar9,plVar10,plVar13);
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
FUN_180008dd0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000b4b0(param_1,param_6);
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
      goto LAB_180008e4f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_180008e4f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_180008e4f:
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
        goto LAB_180008ff5;
      }
LAB_180008f66:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180008f66;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180005a70(param_1,plVar2);
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
LAB_180008ff5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180009050(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_180008dd0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_180008dd0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_180006070(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_180008dd0(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_180006070(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_180003490((longlong *)&local_38);
      uVar2 = FUN_180006070((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_180008dd0(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_180008dd0(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_180006070(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180003420((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_180006070(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_180008dd0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_180008dd0(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180009280(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180009280(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_180006070(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_180006070(plVar5 + 4,param_4);
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
      puVar4 = FUN_180008dd0(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_180006070(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_180008dd0(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_18000b5b0(param_5 + 8);
    FUN_180002df0(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_180009470(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001a000);
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




void FUN_180009520(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  FUN_1800023f0(param_2,param_3);
  puVar1 = param_2 + 4;
  FUN_180001010(puVar1,(longlong)(param_3 + 4));
  *puVar1 = CMomCloneObject<class_CConfigSection>::vftable;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *puVar1 = CMomStackObject<class_CMomCloneObject<class_CConfigSection>_>::vftable;
  return;
}




void FUN_180009590(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001a000,param_3,param_4,0xfffffffffffffffe);
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




undefined8 * FUN_180009600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CConfigModule>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_180005290();
  param_1[2] = uVar1;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CConfigModule>_>_>::
             vftable;
  return param_1;
}




void FUN_180009660(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1800061b0(plVar1,local_res10,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  return;
}




void FUN_1800096b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000b660((longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x10));
  return;
}




void FUN_1800096f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1800061b0(plVar1,local_res10,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  return;
}




void FUN_180009740(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180009770(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000977b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180009780(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000b660(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_1800097b0(undefined8 *param_1)

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




void FUN_180009800(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000b660(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180009830(longlong *param_1)

{
  FUN_18000b5b0(param_1 + 4);
  FUN_180002df0(param_1);
  return;
}




void FUN_180009860(longlong *param_1)

{
  FUN_18000b5b0(param_1);
  return;
}




void FUN_180009880(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1800061b0(plVar1,local_res10,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  return;
}




void FUN_1800098d0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




bool FUN_1800098f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180009920(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180009950(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180009980(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800099b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800099e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_180009a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180009a60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180009ab0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180009b00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180009b50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180009ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




undefined8 * FUN_180009bf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    FUN_180002710(puVar2,(char *)*param_3);
    *puVar2 = CMomObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *puVar2 = CMomAggObject<class_CConfig>::vftable;
    puVar2[4] = CMomAggObject<class_CConfig>::vftable;
    puVar2[5] = uVar1;
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    puVar2[4] = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180009ca0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *puVar2 = CConfig::vftable;
    FUN_1800088d0(puVar2 + 1,(longlong *)(param_3 + 8));
    *puVar2 = CMomObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *puVar2 = CMomAggObject<class_CConfig>::vftable;
    puVar2[4] = CMomAggObject<class_CConfig>::vftable;
    puVar2[5] = uVar1;
    *puVar2 = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    puVar2[4] = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180009d70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CConfig::vftable;
    FUN_1800088d0(puVar1 + 1,(longlong *)(param_2 + 8));
    *puVar1 = CMomObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *puVar1 = CMomAggObject<class_CConfig>::vftable;
    puVar1[4] = CMomAggObject<class_CConfig>::vftable;
    puVar1[5] = *(undefined8 *)(param_2 + 0x28);
    *puVar1 = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    puVar1[4] = CMomCloneObject<class_CMomAggObject<class_CConfig>_>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180009e30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180002710(puVar1,(char *)*param_2);
    *puVar1 = CMomObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = CMomCloneObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180009eb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CConfig::vftable;
    FUN_1800088d0(puVar1 + 1,(longlong *)(param_2 + 8));
    *puVar1 = CMomObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *puVar1 = CMomCloneObject<class_CConfig>::vftable;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void * FUN_180009f40(void *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 local_res18;
  
  plVar1 = (longlong *)((longlong)param_1 + 8);
  FUN_1800061b0(plVar1,&local_res18,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_180009fc0(void *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 local_res18;
  
  plVar1 = (longlong *)((longlong)param_1 + 8);
  FUN_1800061b0(plVar1,&local_res18,*(longlong **)*plVar1,(longlong *)*plVar1);
  free((void *)*plVar1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_18000a040(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_18001a018 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_180005c80(local_68,param_2,sVar13);
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
      if (uVar3 <= uVar2) goto LAB_18000a117;
LAB_18000a178:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000a178;
LAB_18000a117:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000a3ac;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_180005c80(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_18000a287;
LAB_18000a2d7:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000a2d7;
LAB_18000a287:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000a2df:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_180008a00(plVar11,&DAT_180010a27,local_a8);
    FUN_180009050(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000a2df;
    }
    else if (iVar6 < 0) goto LAB_18000a2df;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_18000b5b0(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_18000b5b0(&local_88);
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
LAB_18000a3ac:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18001a000);
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
    FUN_180008bd0(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18001a000);
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




void FUN_18000a490(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000a497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  return;
}




undefined4 FUN_18000a4a0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_18000a4b0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x1c);
}




undefined4 FUN_18000a4c0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + -4) = *(int *)(param_1 + -4) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + -4);
}




IObject * FUN_18000a4d0(longlong param_1,IObject *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  IObject *pIVar3;
  IObject *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (IObject *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1 + -0x20;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_180008920(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1 + -0x20;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_180008920(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (IObject *)0x8;
    free(_Memory);
  }
  if (pIVar3 == (IObject *)0x0) {
    return (IObject *)0x0;
  }
  pIVar3 = IObject::operator=(pIVar3,param_2);
  return pIVar3;
}




IObject * FUN_18000a660(undefined8 param_1,IObject *param_2)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  IObject *pIVar3;
  IObject *local_res10;
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10 = param_2;
  if (param_2 == (IObject *)0x0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>,1>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_180008960(&local_res18);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>
                ::vftable;
    }
    local_res20 = plVar1;
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>,2>
                 ::vftable;
      local_res18 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
      _Memory[3] = param_1;
    }
    local_res18 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      param_2 = (IObject *)0x8;
      free(plVar1);
    }
    pIVar3 = (IObject *)FUN_180008920(&local_res18);
  }
  if (_Memory != (undefined8 *)0x0) {
    param_2 = (IObject *)0x8;
    free(_Memory);
  }
  if (pIVar3 == (IObject *)0x0) {
    return (IObject *)0x0;
  }
  pIVar3 = IObject::operator=(pIVar3,param_2);
  return pIVar3;
}




void FUN_18000a7e0(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18001a018 ^ (ulonglong)auStack_138;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '*') {
      FUN_180004fc0(param_1 + -0x20,param_2);
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
        FUN_180004fc0(param_1 + -0x20,&local_118);
      }
      else {
        (**(code **)*puVar1)(puVar1,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




int FUN_18000a8a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res10;
  
  LOCK();
  piVar1 = (int *)(param_1 + -4);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = *(int *)(param_1 + -4);
  if (*piVar1 < 0) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) {
    return iVar3;
  }
  if ((void *)(param_1 + -0x20) != (void *)0x0) {
    plVar2 = (longlong *)(param_1 + -0x18);
    FUN_1800061b0(plVar2,&local_res10,*(longlong **)*plVar2,(longlong *)*plVar2);
    free((void *)*plVar2);
    free((void *)(param_1 + -0x20));
  }
  return iVar3;
}




void FUN_18000a940(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_18000b500(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_18000a990(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000a997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
  return;
}




void FUN_18000a9a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000a9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




undefined8 FUN_18000a9b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *_Memory;
  undefined8 uVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>
                ::vftable;
    }
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>,1>
                 ::vftable;
      local_res20 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res10;
    }
    local_res20 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      free(plVar1);
    }
    uVar2 = FUN_180008960(&local_res20);
  }
  else {
    plVar1 = (longlong *)operator_new(8);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      *plVar1 = (longlong)
                dnc::
                ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>
                ::vftable;
    }
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>,2>
                 ::vftable;
      local_res20 = _Memory;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      _Memory[1] = uVar2;
      _Memory[2] = &local_res18;
      _Memory[3] = &local_res10;
    }
    local_res20 = _Memory;
    if (plVar1 != (longlong *)0x0) {
      free(plVar1);
    }
    uVar2 = FUN_180008920(&local_res20);
  }
  if (_Memory != (undefined8 *)0x0) {
    free(_Memory);
  }
  return uVar2;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_18000ab30(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_18001a018 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_180005c80(local_68,param_2,sVar12);
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
      if (uVar5 <= uVar3) goto LAB_18000ac10;
LAB_18000ac9f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_18000ac9f;
LAB_18000ac10:
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
      if (uVar5 < uVar3) goto LAB_18000ac64;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_18000ac67;
    }
    if (-1 < iVar7) goto LAB_18000ac67;
  }
LAB_18000ac64:
  puVar11 = puVar2;
LAB_18000ac67:
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




undefined8 FUN_18000ad20(void)

{
  return DAT_18001c1b8;
}




longlong FUN_18000ad30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x20;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000ad48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
  return lVar1;
}




char * FUN_18000ad70(void)

{
  return "Config";
}




char * FUN_18000ad80(void)

{
  return "CConfigModule";
}




undefined * FUN_18000ada0(void)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  uint local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_18001c1c0 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18001c1d0) && (_Init_thread_header(&DAT_18001c1d0), DAT_18001c1d0 == -1)) {
      DAT_18001c1c8 = (undefined8 *)FUN_18000b100("Thread");
      _Init_thread_footer(&DAT_18001c1d0);
    }
    if (DAT_18001c1c8 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_18001c1f8) && (_Init_thread_header(&DAT_18001c1f8), DAT_18001c1f8 == -1)) {
        FUN_180009600((undefined8 *)&DAT_18001c1d8);
        atexit(FUN_18000e9d0);
        _Init_thread_footer(&DAT_18001c1f8);
        DAT_18001c1c0 = &DAT_18001c1d8;
      }
      else {
        DAT_18001c1c0 = &DAT_18001c1d8;
      }
    }
    else {
      if (DAT_18001c550 == (undefined1 *)0x0) {
        DAT_18001c550 = &DAT_18001c450;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18001b268,&DAT_18001cb30);
        FUN_180004910(pcVar2,DAT_18001c550,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_18001c1c8)(DAT_18001c1c8,DAT_18001c550);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))
                          (plVar3,0xffffffff,*plVar3,in_R9,uVar5,plVar3,0xffffffff);
        if (DAT_18001c1c0 == (undefined *)0x0) {
          if ((*piVar4 < DAT_18001c220) &&
             (_Init_thread_header(&DAT_18001c220), DAT_18001c220 == -1)) {
            FUN_180009600((undefined8 *)&DAT_18001c200);
            atexit(FUN_18000ea10);
            _Init_thread_footer(&DAT_18001c220);
          }
          DAT_18001c1c0 = &DAT_18001c200;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_18001c1c0;
}




undefined4 FUN_18000aff0(undefined4 param_1)

{
  char *pcVar1;
  uint local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001be68) && (_Init_thread_header(&DAT_18001be68), DAT_18001be68 == -1)) {
    DAT_18001be60 = (undefined8 *)FUN_18000b100("Error");
    _Init_thread_footer(&DAT_18001be68);
  }
  if (DAT_18001be60 != (undefined8 *)0x0) {
    if (DAT_18001be70 != (longlong *)0x0) goto LAB_18000b0ae;
    if (DAT_18001bf90 == (undefined1 *)0x0) {
      DAT_18001bf90 = &DAT_18001be90;
      local_18[0] = 0x100;
      pcVar1 = (char *)__std_type_info_name(0x18001a0f8,&DAT_18001cb30);
      FUN_180004910(pcVar1,DAT_18001bf90,local_18);
    }
    DAT_18001be70 = (longlong *)(**(code **)*DAT_18001be60)(DAT_18001be60,DAT_18001bf90);
  }
  if (DAT_18001be70 == (longlong *)0x0) {
    return param_1;
  }
LAB_18000b0ae:
  (**(code **)(*DAT_18001be70 + 0x28))();
  return param_1;
}




void FUN_18000b100(char *param_1)

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
  
  local_18 = DAT_18001a018 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_18000b1f5:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_18000b1f5;
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
          FUN_1800041d0(pFVar3,hModule);
        }
      }
      goto LAB_18000b1f5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_18000b220(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  uint local_res10 [6];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] != '1') {
    if (DAT_18001c330 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18001c330 = &DAT_18001c230;
      pcVar2 = (char *)__std_type_info_name(0x18001b220,&DAT_18001cb30);
      FUN_180004910(pcVar2,DAT_18001c330,local_res10);
    }
    cVar1 = *pcVar3;
    cVar4 = *DAT_18001c330;
    pcVar2 = DAT_18001c330;
    pcVar5 = pcVar3;
    if (cVar1 == cVar4) {
      do {
        if ((cVar1 == '\0') || (cVar4 == '\0')) break;
        cVar1 = pcVar5[1];
        cVar4 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar4);
    }
    if (cVar1 != *pcVar2) {
      if (DAT_18001c440 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_18001c440 = &DAT_18001c340;
        pcVar2 = (char *)__std_type_info_name(0x18001b248,&DAT_18001cb30);
        FUN_180004910(pcVar2,DAT_18001c440,local_res10);
      }
      cVar1 = *pcVar3;
      cVar4 = *DAT_18001c440;
      pcVar2 = DAT_18001c440;
      if (cVar1 == cVar4) {
        do {
          if ((cVar1 == '\0') || (cVar4 == '\0')) break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
          cVar4 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
        } while (cVar1 == cVar4);
      }
      if (cVar1 != *pcVar2) {
        return 0;
      }
    }
  }
  return param_1;
}




void FUN_18000b390(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  return;
}




int FUN_18000b3a0(void *param_1)

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




int FUN_18000b3d0(void *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res10;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x1c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = *(int *)((longlong)param_1 + 0x1c);
  if (*piVar1 < 0) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) {
    return iVar3;
  }
  plVar2 = (longlong *)((longlong)param_1 + 8);
  FUN_1800061b0(plVar2,&local_res10,*(longlong **)*plVar2,(longlong *)*plVar2);
  free((void *)*plVar2);
  free(param_1);
  return iVar3;
}




void FUN_18000b460(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_18000b4b0(undefined8 param_1,void *param_2)

{
  FUN_18000b5b0((longlong *)((longlong)param_2 + 0x40));
  FUN_180002df0((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_18000b500(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18000b500(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_18000b5b0(param_2 + 8);
    FUN_180002df0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_18000b590(longlong *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_1800061b0(param_1,local_res8,*(longlong **)*param_1,(longlong *)*param_1);
  return;
}




void FUN_18000b5b0(longlong *param_1)

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




void FUN_18000b660(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_18000b500(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_18000b6b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_18000b6e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_18000b710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_18000b740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_18000b770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_18000b7a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_18000b7d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,char_const*___ptr64_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_18000b850(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_18000b8d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,class_CMomCloneObject<class_CConfig>_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_18000b950(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>*___ptr64___cdecl(class_CMomCloneObject<class_CMomAggObject<class_CConfig>_>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_18000b9c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(char_const*___ptr64_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_18000ba30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomCloneObject<class_CConfig>*___ptr64___cdecl(class_CMomCloneObject<class_CConfig>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
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
  DAT_18001c1b8 = param_1;
                    /* 0xbaf0  10  GetModule */
  FUN_18000ada0();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  while (_Memory = DAT_18001c560, DAT_18001c560 != (undefined8 *)0x0) {
    puVar1 = DAT_18001c560 + 1;
    DAT_18001c560 = (undefined8 *)*DAT_18001c560;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,in_R8,in_R9,uVar2);
    }
    free(_Memory);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_18001c560;
    puVar1[1] = param_1;
  }
  DAT_18001c560 = puVar1;
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
    FUN_18000cc28();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000cc08();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
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
                    /* WARNING: Could not recover jumptable at 0x00018000bc65. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18000bc96;
  capture_previous_context((PCONTEXT)&DAT_18001c610);
  _DAT_18001c580 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18001c6a8 = puVar3 + 0x40;
  _DAT_18001c690 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18001c570 = 0xc0000409;
  _DAT_18001c574 = 1;
  _DAT_18001c588 = 1;
  DAT_18001c590 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18001a018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18001a010;
  *(undefined8 *)(puVar3 + -8) = 0x18000bd38;
  DAT_18001c708 = _DAT_18001c580;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180011670);
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
  *(undefined8 *)(puVar3 + -8) = 0x18000bd7e;
  capture_current_context((PCONTEXT)&DAT_18001c610);
  _DAT_18001c580 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18001c6a8 = puVar3 + 0x30;
  _DAT_18001c570 = 0xc0000409;
  _DAT_18001c574 = 1;
  _DAT_18001c588 = 1;
  DAT_18001c590 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18000bdea;
  DAT_18001c708 = _DAT_18001c580;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180011670);
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

undefined8 FUN_18000bed4(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18001cae0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18000c026;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18001cb10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18001cb10 != (HANDLE)0x0) goto LAB_18000bfc4;
  }
  else {
    DAT_18001cb10 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18001cb08);
    bVar7 = 0x40 - ((byte)DAT_18001a018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18001cb18 = DAT_18001a018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18001cb20 = DAT_18001a018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18000bfc4:
    uVar6 = FUN_18000c554(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18000c034);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18000c026:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_18000c034(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  if (DAT_18001cb10 != (HANDLE)0x0) {
    CloseHandle(DAT_18001cb10);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001a004 = DAT_18001a004 + 1;
  *param_1 = DAT_18001a004;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001a004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000c140:
                    /* WARNING: Could not recover jumptable at 0x00018000c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001a004;
      goto LAB_18000c140;
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
  
  if (DAT_18001cb10 != (HANDLE)0x0) {
    SetEvent(DAT_18001cb10);
                    /* WARNING: Could not recover jumptable at 0x00018000c19d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18001cb10);
    return;
  }
  bVar1 = (byte)DAT_18001a018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001a018 ^ _DAT_18001cb20) >> bVar1 |
            (DAT_18001a018 ^ _DAT_18001cb20) << 0x40 - bVar1))(&DAT_18001cb08);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18001cb10 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
    WaitForSingleObjectEx(DAT_18001cb10,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018000c214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001cae0);
    return;
  }
  bVar1 = (byte)DAT_18001a018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001a018 ^ _DAT_18001cb18) >> bVar1 |
            (DAT_18001a018 ^ _DAT_18001cb18) << 0x40 - bVar1))
            (&DAT_18001cb08,&DAT_18001cae0,param_1);
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
  if ((_StackCookie == DAT_18001a018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_18000c354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000c35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18001cb30);
  return;
}




void FUN_18000c364(void)

{
  __std_type_info_destroy_list(&DAT_18001cb30);
  return;
}




undefined8 * FUN_18000c370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
LAB_18000c3ca:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18001cb50 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18001cb50;
        pvVar1 = DAT_18001cb50;
      }
      DAT_18001cb50 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000c3ca;
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
    uVar3 = FUN_18000cf20();
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
  
  uVar1 = FUN_18000c554(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18000d164();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000d164();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000d164();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18000d164();
  FUN_18000d164();
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
    _execute_onexit_table(&DAT_18001cb60);
    return;
  }
  uVar2 = FUN_180003bb0();
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
  FUN_18000d164();
  FUN_18000d164();
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
    DAT_18001cb58 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18000d164();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000d164();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000d164();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000c554(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18001cb59 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18001a018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18001a018;
      _DAT_18001cb60 = in_RAX;
      uRam000000018001cb68 = in_RAX;
      _DAT_18001cb70 = in_RAX;
      _DAT_18001cb78 = in_RAX;
      uRam000000018001cb80 = in_RAX;
      _DAT_18001cb88 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18001cb60);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18001cb78), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18001cb59 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000c6ba) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_18000c6a3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000c6a3:
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
    DAT_18001cb50 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18001cb58 == '\0') || (param_2 == '\0')) {
    FUN_18000d164();
    FUN_18000d164();
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
  
  bVar2 = (byte)DAT_18001a018 & 0x3f;
  if (((DAT_18001a018 ^ _DAT_18001cb60) >> bVar2 | (DAT_18001a018 ^ _DAT_18001cb60) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18001cb60,_Func);
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
    if (DAT_18001cb90 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18001cb90 = DAT_18001cb90 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18001cb48 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_18000c364();
      FID_conflict__RTC_Initialize();
      DAT_18001cb48 = 0;
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
    if (DAT_18001cb48 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18001cb48 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18000c354();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000f438,&DAT_18000f448);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000f420,&DAT_18000f430);
        DAT_18001cb48 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_18000d030();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18001cb90 = DAT_18001cb90 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000ca40) */
/* WARNING: Removing unreachable block (ram,0x00018000c9cf) */
/* WARNING: Removing unreachable block (ram,0x00018000ca83) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18001cb90 < 1)) {
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




undefined8 * FUN_18000caf0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000cb30(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000cb50(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000cb90(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000cbc4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000cc08(void)

{
  undefined8 local_28 [5];
  
  FUN_18000cb30(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180017fd8);
}




void FUN_18000cc28(void)

{
  undefined8 local_28 [5];
  
  FUN_18000cb90(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180018038);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000cc50(void)

{
  _DAT_18001cb94 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18000cc8b;
  FUN_18000cc50();
  *(undefined8 *)(puVar4 + -8) = 0x18000cc9c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000cca6;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000ccc0;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000cd01;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000cd33;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000cd55;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000cd76;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000cd81;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000cd91;
    FUN_18000cc50();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000ce72) */
/* WARNING: Removing unreachable block (ram,0x00018000cdf0) */
/* WARNING: Removing unreachable block (ram,0x00018000cdcb) */
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
  
  DAT_18001a02c = 2;
  _DAT_18001a028 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18001a030 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001cb98 = DAT_18001cb98 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18001cb98 = DAT_18001cb98 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18001a028 = 2;
    DAT_18001a02c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001a02c = 0xe;
      _DAT_18001a028 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18001a028 = 5;
        DAT_18001a02c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000cf20(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18001a040 != 0;
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
  
  if (DAT_18001a018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18001a018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18001a018 == 0x2b992ddfa232) {
      DAT_18001a018 = 0x2b992ddfa233;
    }
  }
  DAT_18001a010 = ~DAT_18001a018;
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




undefined * FUN_18000d004(void)

{
  return &DAT_18001cba0;
}




undefined * FUN_18000d00c(void)

{
  return &DAT_18001cba8;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000d004();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18000d00c();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_18000d030(void)

{
  return &DAT_18001cbb0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180014400; puVar1 < &DAT_180014400; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180014410; puVar1 < &DAT_180014410; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_18000d164(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018000d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18000d190(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000d1a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002f70((longlong *)(*(longlong *)(param_2 + 0x40) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18000d1b0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_18000d1c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002c50(*(longlong **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Catch_18000d1d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005ad0(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_18000d200(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_180001247;
}




void Unwind_18000d240(undefined8 param_1,longlong param_2)

{
  FUN_1800031c0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18000d250(undefined8 param_1,longlong param_2)

{
  FUN_1800030f0((longlong *)(param_2 + 0x38));
  return;
}




undefined * Catch_18000d260(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_180001436;
}




undefined *
Catch_18000d2a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = *(void **)(param_2 + 0x20);
  if (_Memory != (void *)0x0) {
    *(void **)(param_2 + 0x58) = _Memory;
    FUN_180003050((longlong)_Memory,param_2,param_3,param_4);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_18000ada0();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_18001cb30);
  FUN_180004720();
  return &DAT_1800014de;
}




undefined *
Catch_18000d30b(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  
  _Memory = *(void **)(param_2 + 0x20);
  if (_Memory != (void *)0x0) {
    *(void **)(param_2 + 0x58) = _Memory;
    FUN_180003050((longlong)_Memory,param_2,param_3,param_4);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_18000ada0();
  FUN_180004720();
  return &DAT_1800014de;
}




void Unwind_18000d360(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




void Unwind_18000d370(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




void Unwind_18000d380(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




undefined *
Catch_18000d390(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = *(void **)(param_2 + 0x20);
  if (_Memory != (void *)0x0) {
    *(void **)(param_2 + 0x58) = _Memory;
    FUN_180003050((longlong)_Memory,param_2,param_3,param_4);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_18000ada0();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_18001cb30);
  FUN_180004720();
  return &DAT_18000151e;
}




undefined *
Catch_18000d3fb(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Memory;
  
  _Memory = *(void **)(param_2 + 0x20);
  if (_Memory != (void *)0x0) {
    *(void **)(param_2 + 0x58) = _Memory;
    FUN_180003050((longlong)_Memory,param_2,param_3,param_4);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_18000ada0();
  FUN_180004720();
  return &DAT_18000151e;
}




void Catch_18000d450(undefined8 param_1,longlong param_2)

{
  FUN_180005910(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000d480(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x68));
  return;
}




void Unwind_18000d490(undefined8 param_1,longlong param_2)

{
  FUN_180003030((longlong *)(*(longlong *)(param_2 + 0x68) + 0x20));
  return;
}




void Catch_18000d4a0(undefined8 param_1,longlong param_2)

{
  FUN_180005900(*(undefined8 *)(param_2 + 0x60),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000d4d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005510(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68),param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000d500(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005350(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90),param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000d530(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005350(*(undefined8 *)(param_2 + 0x90),*(void **)(param_2 + 0xb0),param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000d560(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000d570(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bd0(*(longlong *)(param_2 + 0x40) + 0x20,param_2,param_3,param_4);
  return;
}




void Unwind_18000d580(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000d590(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000d5a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




undefined * Catch_18000d5b0(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_180001f62;
}




void Unwind_18000d5f0(undefined8 param_1,longlong param_2)

{
  FUN_180002cf0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000d600(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002fd0(*(longlong **)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000d610(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_18000d620(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bd0(*(longlong *)(param_2 + 0x60) + 0x20,param_2,param_3,param_4);
  return;
}




void Unwind_18000d630(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002f70((longlong *)(*(longlong *)(param_2 + 0x58) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18000d640(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(*(longlong *)(param_2 + 0x58) + 0x18));
  return;
}




void Unwind_18000d650(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002c50(*(longlong **)(param_2 + 0x68),param_2,param_3,param_4);
  return;
}




void Unwind_18000d660(undefined8 param_1,longlong param_2)

{
  FUN_180002cd0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_18000d670(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x60));
  return;
}




void Unwind_18000d680(undefined8 param_1,longlong param_2)

{
  FUN_180003010((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_18000d690(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x60) + 0xb8));
  }
  return;
}




void Unwind_18000d6c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d6cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x20));
  return;
}




void Unwind_18000d6e0(undefined8 param_1,longlong param_2)

{
  FUN_180002d30((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x60) + 0x18));
  return;
}




void Unwind_18000d6f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x30));
  return;
}




void Unwind_18000d700(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x30));
  return;
}




void Unwind_18000d710(undefined8 param_1,longlong param_2)

{
  FUN_180003180(param_2 + 0x30);
  return;
}




void Unwind_18000d720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x40) + 0x98));
  }
  return;
}




void Unwind_18000d750(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000d770(undefined8 param_1,longlong param_2)

{
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_18000d780(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x58));
  return;
}




void Unwind_18000d790(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x58));
  return;
}




void Catch_18000d7a0(undefined8 param_1,longlong param_2)

{
  FUN_180005b10(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000d7d0(undefined8 param_1,longlong param_2)

{
  FUN_180003820((longlong *)(param_2 + 0x140));
  return;
}




void Unwind_18000d7e0(undefined8 param_1,longlong param_2)

{
  FUN_1800038c0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18000d7f0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x260));
  return;
}




void Unwind_18000d800(undefined8 param_1,longlong param_2)

{
  FUN_180002c10(*(longlong **)(param_2 + 0x280));
  return;
}




void Unwind_18000d810(undefined8 param_1,longlong param_2)

{
  FUN_180002cb0(*(undefined8 **)(param_2 + 0x280));
  return;
}




void Unwind_18000d820(undefined8 param_1,longlong param_2)

{
  FUN_180003120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000d830(undefined8 param_1,longlong param_2)

{
  FUN_180003150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000d840(undefined8 param_1,longlong param_2)

{
  FUN_180003120(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18000d850(undefined8 param_1,longlong param_2)

{
  FUN_180003150(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_18000d860(undefined8 param_1,longlong param_2)

{
  FUN_180003150(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_18000d870(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000d880(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000d890(undefined8 param_1,longlong param_2)

{
  FUN_180002cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000d8a0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_18000d8b0(undefined8 param_1,longlong param_2)

{
  FUN_180002c10(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000d8c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002c50(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000d8d0(undefined8 param_1,longlong param_2)

{
  FUN_1800030f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000d8e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18000d900(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x28),param_2,param_3,param_4);
  return;
}




void Unwind_18000d910(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x28),param_2,param_3,param_4);
  return;
}




void Unwind_18000d920(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x28),param_2,param_3,param_4);
  return;
}




void Unwind_18000d930(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002f70((longlong *)(*(longlong *)(param_2 + 0x28) + 8),param_2,param_3,param_4);
  return;
}




void Unwind_18000d940(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(*(longlong *)(param_2 + 0x28) + 0x18));
  return;
}




void Unwind_18000d950(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002c50(*(longlong **)(param_2 + 0x30),param_2,param_3,param_4);
  return;
}




void Unwind_18000d960(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18000d980(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002c50(*(longlong **)(param_2 + 0x28),param_2,param_3,param_4);
  return;
}




void Unwind_18000d990(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18000d9b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_18000d9c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + -0x98));
  return;
}




void Unwind_18000d9e0(undefined8 param_1,longlong param_2)

{
  FUN_180002d30((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x40) + -0xa0));
  return;
}




void Unwind_18000da00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000da07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_18000da10(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000da22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + -0x78));
  return;
}




void Unwind_18000da30(undefined8 param_1,longlong param_2)

{
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x40) + -0x80));
  return;
}




void Unwind_18000da50(undefined8 param_1,longlong param_2)

{
  FUN_1800038c0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_18000da60(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x160));
  return;
}




void Unwind_18000da70(undefined8 param_1,longlong param_2)

{
  FUN_180002bf0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_18000da80(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_18000daa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002bf0((undefined8 *)(param_2 + 0x60));
  }
  return;
}




void Unwind_18000dad0(undefined8 param_1,longlong param_2)

{
  FUN_180002bf0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_18000dae0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_18000db00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180002bf0((undefined8 *)(param_2 + 0x60));
  }
  return;
}




undefined8 Catch_18000db30(void)

{
  return 0x1800041ec;
}




void Unwind_18000db50(undefined8 param_1,longlong param_2)

{
  FUN_1800038c0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000db60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002df0(*(longlong **)(param_2 + 0x150));
  }
  return;
}




void Unwind_18000db90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)(param_2 + 200));
  }
  return;
}




void Unwind_18000dbc0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000dbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_18000dbe0(undefined8 param_1,longlong param_2)

{
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_2 + 0x48));
  return;
}




void Unwind_18000dbf0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000dbf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x158));
  return;
}




void Unwind_18000dc00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000dc07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x158));
  return;
}




void Unwind_18000dc10(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000dc22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x158) + -0x78));
  return;
}




void Unwind_18000dc30(undefined8 param_1,longlong param_2)

{
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x158) + -0x80));
  return;
}




void Unwind_18000dc50(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000dc60(void)

{
  _Init_thread_abort(&DAT_18001be68);
  return;
}




void Catch_18000dc70(undefined8 param_1,longlong param_2)

{
  FUN_180004f00(*(char **)(param_2 + 0x30),*(int *)(param_2 + 0x24),(char *)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000dcc0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_18000dcd0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x100));
  return;
}




void Unwind_18000dce0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0xe0));
  return;
}




void Unwind_18000dcf0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_18000dd00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002df0((longlong *)(param_2 + 0x80));
  }
  return;
}




void Unwind_18000dd30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180002df0((longlong *)(param_2 + 0xa0));
  }
  return;
}




void Unwind_18000dd60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002df0(*(longlong **)(param_2 + 0x40));
  }
  return;
}




void Unwind_18000dd90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180002df0(*(longlong **)(param_2 + 0x40));
  }
  return;
}




void Catch_18000ddc0(undefined8 param_1,longlong param_2)

{
  FUN_180006120(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000ddf0(undefined8 param_1,longlong param_2)

{
  FUN_180006170(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000de20(undefined8 param_1,longlong param_2)

{
  FUN_180006120(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000de50(undefined8 param_1,longlong param_2)

{
  FUN_180006170(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000de80(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_18000de90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bd0(*(longlong *)(param_2 + 0x58) + 0x20,param_2,param_3,param_4);
  return;
}




void Unwind_18000dea0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000deb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000dec0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000ded0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000dee0(undefined8 param_1,longlong param_2)

{
  FUN_180003030((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_18000def0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_18000df10(undefined8 param_1,longlong param_2)

{
  FUN_180002bf0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_18000df20(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_18000df40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x70),param_2,param_3,param_4);
  return;
}




void Unwind_18000df50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bb0(*(longlong *)(param_2 + 0x70),param_2,param_3,param_4);
  return;
}




void Unwind_18000df60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180003050(*(longlong *)(param_2 + 0x70),param_2,param_3,param_4);
  return;
}




void Unwind_18000df70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002df0(*(longlong **)(param_2 + 0x38));
  }
  return;
}




void Unwind_18000dfa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180002df0(*(longlong **)(param_2 + 0x38));
  }
  return;
}




void Unwind_18000dfd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002df0(*(longlong **)(param_2 + 0x48));
  }
  return;
}




void Catch_18000e000(undefined8 param_1,longlong param_2)

{
  FUN_180005910(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000e030(undefined8 param_1,longlong param_2)

{
  FUN_180007e80(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000e040(undefined8 param_1,longlong param_2)

{
  FUN_180002df0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000e050(undefined8 param_1,longlong param_2)

{
  FUN_180003030((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_18000e060(undefined8 param_1,longlong param_2)

{
  FUN_1800087d0(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x28));
  FUN_180008860(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
                *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000e0b0(undefined8 param_1,longlong param_2)

{
  FUN_180008810(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000e0e0(undefined8 param_1,longlong param_2)

{
  FUN_180008810(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000e110(undefined8 param_1,longlong param_2)

{
  FUN_180003030((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000e120(undefined8 param_1,longlong param_2)

{
  FUN_180002cf0((undefined8 *)(param_2 + 8));
  return;
}




void Unwind_18000e130(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x140));
  return;
}




void Unwind_18000e140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 1) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)(param_2 + 0xd8));
  }
  return;
}




void Unwind_18000e170(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e17b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_2 + 0x60));
  return;
}




void Unwind_18000e190(undefined8 param_1,longlong param_2)

{
  FUN_180002e60((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_2 + 0x58));
  return;
}




void Unwind_18000e1a0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x38));
  return;
}




void Catch_18000e1b0(undefined8 param_1,longlong param_2)

{
  FUN_18000b590(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_18000e1d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    FUN_180009f40(*(void **)(param_2 + 0x40),1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000ada0();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x50));
  __std_type_info_name(lVar1 + 8,&DAT_18001cb30);
  FUN_18000aff0(0xfffffff6);
  return &DAT_18000894e;
}




undefined * Catch_18000e25f(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    FUN_180009f40(*(void **)(param_2 + 0x40),1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000ada0();
  FUN_18000aff0(0xfffffff5);
  return &DAT_18000894e;
}




undefined * Catch_18000e2e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    FUN_180009fc0(*(void **)(param_2 + 0x40),1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000ada0();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x50));
  __std_type_info_name(lVar1 + 8,&DAT_18001cb30);
  FUN_18000aff0(0xfffffff6);
  return &DAT_18000898e;
}




undefined * Catch_18000e36f(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    FUN_180009fc0(*(void **)(param_2 + 0x40),1);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000ada0();
  FUN_18000aff0(0xfffffff5);
  return &DAT_18000898e;
}




void Catch_18000e3f0(undefined8 param_1,longlong param_2)

{
  FUN_180005900(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000e420(undefined8 param_1,longlong param_2)

{
  FUN_180005910(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000e450(undefined8 param_1,longlong param_2)

{
  FUN_180009830(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000e460(undefined8 param_1,longlong param_2)

{
  FUN_180009860((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_18000e470(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005480(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68),param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000e4a0(undefined8 param_1,longlong param_2)

{
  FUN_18000b460(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000e4f0(undefined8 param_1,longlong param_2)

{
  FUN_180009770(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_18000e500(undefined8 param_1,longlong param_2)

{
  FUN_18000b4b0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_18000e530(undefined8 param_1,longlong param_2)

{
  FUN_18000b4b0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18000e560(undefined8 param_1,longlong param_2)

{
  FUN_180009860((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000e570(undefined8 param_1,longlong param_2)

{
  FUN_1800097b0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000e580(undefined8 param_1,longlong param_2)

{
  FUN_180009770(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_18000e590(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002bd0(*(longlong *)(param_2 + 0x48) + 0x20,param_2,param_3,param_4);
  return;
}




void Unwind_18000e5a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002b90(*(longlong *)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_18000e5b0(undefined8 param_1,longlong param_2)

{
  FUN_180009770(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_18000e5c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800096b0(*(longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000e5d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009800((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10),param_2,param_3,param_4);
  return;
}




void Unwind_18000e5e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009780(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000e5f0(undefined8 param_1,longlong param_2)

{
  FUN_180002cd0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_18000e600(undefined8 param_1,longlong param_2)

{
  FUN_1800096f0(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18000e610(undefined8 param_1,longlong param_2)

{
  FUN_180009880(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18000e620(undefined8 param_1,longlong param_2)

{
  FUN_180002f30((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_18000e630(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009780(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000e640(undefined8 param_1,longlong param_2)

{
  FUN_180009770(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000e650(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18000e670(undefined8 param_1,longlong param_2)

{
  FUN_180009660(*(longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18000e680(undefined8 param_1,longlong param_2)

{
  FUN_1800096f0(*(longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18000e690(undefined8 param_1,longlong param_2)

{
  FUN_180009880(*(longlong *)(param_2 + 0x58));
  return;
}




void Unwind_18000e6a0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_18000e6c0(undefined8 param_1,longlong param_2)

{
  FUN_180009660(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000e6d0(undefined8 param_1,longlong param_2)

{
  FUN_1800096f0(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000e6e0(undefined8 param_1,longlong param_2)

{
  FUN_180009880(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000e6f0(undefined8 param_1,longlong param_2)

{
  FUN_180002f30((longlong *)(*(longlong *)(param_2 + 0x28) + 8));
  return;
}




void Unwind_18000e700(undefined8 param_1,longlong param_2)

{
  FUN_180002c10(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_18000e710(undefined8 param_1,longlong param_2)

{
  FUN_180002f30((longlong *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_18000e720(undefined8 param_1,longlong param_2)

{
  FUN_180002c10(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_18000e730(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_18000e750(undefined8 param_1,longlong param_2)

{
  FUN_1800096f0(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000e760(undefined8 param_1,longlong param_2)

{
  FUN_180009880(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000e770(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_18000e790(undefined8 param_1,longlong param_2)

{
  FUN_180009660(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18000e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800096b0(0x18001c1d8,param_2,param_3,param_4);
  return;
}




void Unwind_18000e7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009800(&DAT_18001c1e8,param_2,param_3,param_4);
  return;
}




void Unwind_18000e7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800096b0(0x18001c200,param_2,param_3,param_4);
  return;
}




void Unwind_18000e7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180009800(&DAT_18001c210,param_2,param_3,param_4);
  return;
}




void Unwind_18000e7e0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_18000e7f0(undefined8 param_1,longlong param_2)

{
  FUN_180009860((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000e800(undefined8 param_1,longlong param_2)

{
  FUN_180009740((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000e810(undefined8 param_1,longlong param_2)

{
  FUN_180009770((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000e820(undefined8 param_1,longlong param_2)

{
  FUN_180002bf0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18000e830(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_18000e850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002bf0((undefined8 *)(param_2 + 0x78));
  }
  return;
}




void Unwind_18000e880(undefined8 param_1,longlong param_2)

{
  FUN_180002bf0((undefined8 *)(*(longlong *)(param_2 + 0x78) + 8));
  return;
}




void Unwind_18000e890(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_18000e8b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180002bf0((undefined8 *)(param_2 + 0x78));
  }
  return;
}




void Unwind_18000e8e0(undefined8 param_1,longlong param_2)

{
  FUN_180002df0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000e8f0(void)

{
  _Init_thread_abort(&DAT_18001c1d0);
  return;
}




void Unwind_18000e900(void)

{
  _Init_thread_abort(&DAT_18001c1f8);
  return;
}




void Unwind_18000e910(undefined8 param_1,longlong param_2)

{
  FUN_1800098d0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_18000e920(void)

{
  _Init_thread_abort(&DAT_18001c220);
  return;
}




void Unwind_18000e930(undefined8 param_1,longlong param_2)

{
  FUN_180009860((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void FUN_18000e958(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18000e96f(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18000e98b(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_18000e9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000b660((longlong *)&DAT_18001c1e8,param_2,param_3,param_4);
  free(DAT_18001c1e8);
  return;
}




void FUN_18000ea10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000b660((longlong *)&DAT_18001c210,param_2,param_3,param_4);
  free(DAT_18001c210);
  return;
}



