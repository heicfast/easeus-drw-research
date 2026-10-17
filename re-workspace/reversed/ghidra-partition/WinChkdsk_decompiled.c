
basic_ostream<char,struct_std::char_traits<char>_> *
FUN_140001010(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

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
        if (iVar2 == -1) goto LAB_14000115b;
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
        if (iVar2 == -1) goto LAB_14000115b;
      }
    }
    else {
LAB_14000115b:
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




basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_1400011f0(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2)

{
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *this;
  bool bVar1;
  ushort uVar2;
  longlong lVar3;
  __int64 _Var4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != L'\0');
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
      (this = *(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> **)
               (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x50),
      this != (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0)) && (this != param_1)
     ) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(this);
    lVar3 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) {
    lVar3 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        uVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) goto LAB_14000133d;
      }
      lVar3 = *(longlong *)param_1;
    }
    _Var4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputn
                      (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                        (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2,lVar7);
    if (_Var4 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        uVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) goto LAB_14000133d;
      }
    }
    else {
LAB_14000133d:
      iVar5 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




void FUN_1400013d0(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140003750(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = *param_2;
  return;
}




undefined8 *
FUN_140001410(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined4 *param_5)

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
  
  if (0x7fffffffffffffd < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar4 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar4)();
    return puVar6;
  }
  plVar5 = (longlong *)FUN_1400013d0(param_1,param_5);
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
        goto LAB_140001655;
      }
LAB_1400015c6:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(longlong **)(*plVar9 + 8);
    }
    else {
      if ((char)plVar8[3] == '\0') goto LAB_1400015c6;
      if (plVar11 == (longlong *)*plVar2) {
        FUN_140003ad0(param_1,plVar2);
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
LAB_140001655:
      plVar9[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}




undefined8 * FUN_1400016a0(longlong *param_1,undefined8 *param_2,char param_3,uint *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *local_res8;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar3 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < *(uint *)((longlong)plVar4 + 0x1c);
    }
    else {
      bVar5 = *param_4 <= *(uint *)((longlong)plVar4 + 0x1c);
    }
    plVar3 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  local_res8 = plVar3;
  if (bVar5 != false) {
    if (plVar3 == (longlong *)*plVar1) {
      puVar2 = FUN_140001410(param_1,&local_res8,'\x01',plVar3,param_4);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    FUN_1400026c0((longlong *)&local_res8);
  }
  if (*(uint *)((longlong)local_res8 + 0x1c) < *param_4) {
    puVar2 = FUN_140001410(param_1,&local_res8,bVar5,plVar3,param_4);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = local_res8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_1400017c0(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
             ulonglong param_3)

{
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *this;
  bool bVar1;
  ushort uVar2;
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
      (this = *(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> **)
               (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x50),
      this != (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0)) && (this != param_1)
     ) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(this);
    lVar3 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x10) == 0) {
    lVar3 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar3 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        uVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) {
          iVar5 = 4;
          goto LAB_1400018c0;
        }
      }
      lVar3 = *(longlong *)param_1;
    }
    uVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputn
                      (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                        (param_1 + (longlong)*(int *)(lVar3 + 4) + 0x48),param_2,param_3);
    if (uVar4 == param_3) {
LAB_1400018c0:
      do {
        if (lVar6 == 0) goto LAB_1400018e9;
        uVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           *(wchar_t *)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58));
        if (uVar2 == 0xffff) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar5 = 4;
LAB_1400018e9:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar5 = 4;
  }
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1400019b0(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_1400019f0(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  
  wVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::widen
                    ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::put(param_1,wVar1);
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(param_1);
  return param_1;
}




_Facet_base * FUN_140001a30(locale *param_1)

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
  local_res10 = DAT_14000f4c8;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_140001af5;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_140001aa2:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_140001af5;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_140001aa2;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,struct__Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_140002120(local_30);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_30,(ThrowInfo *)&DAT_14000c840);
    }
    local_res18 = local_res10;
    std::_Facet_Register(local_res10);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_14000f4c8 = local_res10;
    local_res18 = (_Facet_base *)0x0;
    p_Var4 = local_res10;
  }
LAB_140001af5:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}




_Facet_base * FUN_140001b30(locale *param_1)

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
  local_res10 = DAT_14000f4c0;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_140001bf5;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_140001ba2:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_140001bf5;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_140001ba2;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<wchar_t,char,struct__Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_140002120(local_30);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_30,(ThrowInfo *)&DAT_14000c840);
    }
    local_res18 = local_res10;
    std::_Facet_Register(local_res10);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_14000f4c0 = local_res10;
    local_res18 = (_Facet_base *)0x0;
    p_Var4 = local_res10;
  }
LAB_140001bf5:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_140001c30(basic_ostream<char,struct_std::char_traits<char>_> *param_1,wchar_t *param_2,
             uint param_3,int param_4,int param_5)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *this;
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  _Facet_base *this_00;
  undefined8 *puVar4;
  longlong *local_20;
  
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_140009d48;
    *(code **)(param_1 + 0xa8) = _vftable__exref;
    *(code **)(param_1 + 0xa8) = _vftable__exref;
  }
  this = (basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 8);
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  basic_ostream<char,struct_std::char_traits<char>_>(param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(this);
  *(undefined ***)this = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  param_1[0x84] = (basic_ostream<char,struct_std::char_traits<char>_>)0x0;
  param_1[0x79] = (basic_ostream<char,struct_std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x7c) = DAT_14000f4b8;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((*(longlong *)(param_1 + 0x88) != 0) ||
     (p_Var2 = std::_Fiopen(param_2,param_3 | 2,param_4), p_Var2 == (_iobuf *)0x0)) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
    return param_1;
  }
  FUN_1400039a0(this,(longlong)p_Var2,1);
  plVar3 = (locale *)std::basic_streambuf<char,struct_std::char_traits<char>_>::getloc(this);
  this_00 = FUN_140001a30(plVar3);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    *(_Facet_base **)(param_1 + 0x70) = this_00;
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




basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140001df0(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
             uint param_3,int param_4,int param_5)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *this;
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  _Facet_base *this_00;
  undefined8 *puVar4;
  longlong *local_20;
  
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_140009cb0;
    *(code **)(param_1 + 0xa8) = _vftable__exref;
    *(code **)(param_1 + 0xa8) = _vftable__exref;
  }
  this = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 8);
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>(param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(this);
  *(undefined ***)this = std::basic_filebuf<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  param_1[0x84] = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
  param_1[0x7a] = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x7c) = DAT_14000f4b0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((*(longlong *)(param_1 + 0x88) != 0) ||
     (p_Var2 = std::_Fiopen(param_2,param_3 | 2,param_4), p_Var2 == (_iobuf *)0x0)) {
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
    return param_1;
  }
  param_1[0x84] = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>)0x1;
  param_1[0x7a] = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(this);
  *(_iobuf **)(param_1 + 0x88) = p_Var2;
  *(undefined8 *)(param_1 + 0x7c) = DAT_14000f4b0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  plVar3 = (locale *)std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::getloc(this);
  this_00 = FUN_140001b30(plVar3);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this_00);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    *(_Facet_base **)(param_1 + 0x70) = this_00;
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(this);
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




undefined8 * FUN_140001fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140005420(param_1);
  FUN_140005420(param_1 + 3);
  FUN_140005420(param_1 + 6);
  FUN_140005420(param_1 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_140003710();
  param_1[0xc] = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 7;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 7;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_140001df0((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x19),
                L"LogVss.txt",2,0x40,1);
  FUN_140001c30((basic_ostream<char,struct_std::char_traits<char>_> *)(param_1 + 0x3a),L"LogMsg.txt"
                ,2,0x40,1);
  return param_1;
}




undefined8 * FUN_1400020d0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_140002120(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_140002160(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




void FUN_1400021a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  _Memory = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)_Memory + 0x19) == '\0') {
    do {
      FUN_140003930(param_1,(longlong *)_Memory[2]);
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
  free((void *)*param_1);
  return;
}




void FUN_140002250(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_140002270(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

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
      FUN_140003790((longlong *)param_1);
      fclose(*(FILE **)(param_1 + 0x80));
    }
    param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x74) = DAT_14000f4b8;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140002320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




void FUN_140002330(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)**(longlong **)(param_1 + 0x18)
      == param_1 + 0x70)) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar1 - lVar2 >> 1);
  }
  if (param_1[0x7c] != (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_140003860((longlong *)param_1);
      fclose(*(FILE **)(param_1 + 0x80));
    }
    param_1[0x7c] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
    param_1[0x72] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x74) = DAT_14000f4b0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400023e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(param_1);
  return;
}




void FUN_1400023f0(longlong *param_1)

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




void FUN_140002460(longlong *param_1)

{
  FUN_140003b30(param_1);
  return;
}




void FUN_140002480(longlong *param_1)

{
  FUN_1400021a0(param_1);
  return;
}




void FUN_1400024a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400024b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}




void FUN_1400024c0(undefined8 *param_1)

{
  FUN_140002750(param_1 + 0x3a);
  FUN_1400027f0(param_1 + 0x19);
  FUN_140003b30(param_1 + 0x12);
  FUN_140003b30(param_1 + 0xe);
  FUN_1400021a0(param_1 + 0xc);
  FUN_1400054c0(param_1 + 9);
  FUN_1400054c0(param_1 + 6);
  FUN_1400054c0(param_1 + 3);
  FUN_1400054c0(param_1);
  return;
}




void FUN_140002550(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_140002580(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_1400025b0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_1400025e0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140002611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}




void FUN_140002620(longlong *param_1)

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




void FUN_140002670(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




longlong * FUN_1400026c0(longlong *param_1)

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




void FUN_140002750(longlong *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x15);
  *(undefined ***)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xa8) =
       std::basic_ofstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_140002270((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)(param_1 + 2));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}




void FUN_1400027f0(longlong *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x15);
  *(undefined ***)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xa8) =
       std::basic_ofstream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_140002330((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 1));
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 2));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}




void FUN_140002884(longlong param_1,uint param_2)

{
  FUN_140002920(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}




void FUN_140002890(longlong param_1,uint param_2)

{
  FUN_140002960(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1400028a0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_140002270(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_1400028e0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,uint param_2)

{
  FUN_140002330(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_140002920(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0xa8);
  FUN_140002750(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}




longlong * FUN_140002960(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0xa8);
  FUN_1400027f0(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}




undefined8 * FUN_1400029a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_140002a00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140002a50(longlong param_1)

{
  ulonglong uVar1;
  HMODULE pHVar2;
  HMODULE pHVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar7;
  wchar_t *pwVar8;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar9;
  short *psVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_618 [32];
  longlong local_5f8;
  undefined8 local_5f0 [2];
  longlong local_5e0 [4];
  longlong local_5c0 [4];
  undefined8 local_5a0;
  undefined1 local_598 [672];
  longlong local_2f8 [90];
  ulonglong local_28;
  
  local_5a0 = 0xfffffffffffffffe;
  local_28 = DAT_14000f008 ^ (ulonglong)auStack_618;
  pHVar2 = (HMODULE)FUN_140005630(param_1);
  FUN_140005aa0(local_598,pHVar2);
  pHVar2 = (HMODULE)FUN_140005630(param_1);
  FUN_140005bd0(local_5c0,pHVar2);
  pHVar2 = (HMODULE)FUN_140005630(param_1 + 0x30);
  pHVar3 = (HMODULE)FUN_140005630(param_1 + 0x18);
  FUN_140005a50(local_5f0,pHVar3,pHVar2);
  pHVar2 = (HMODULE)FUN_140005630(param_1 + 0x48);
  FUN_140005b40(local_5e0,pHVar2);
  pwVar8 = (wchar_t *)(param_1 + 0x70);
  FUN_140006980((longlong)local_598);
  lVar4 = FUN_140005630(param_1 + 0x30);
  lVar5 = FUN_140005630(param_1 + 0x18);
  pHVar2 = (HMODULE)FUN_140005630(param_1);
  FUN_140005740(local_2f8,pHVar2,lVar5,lVar4);
  FUN_140006900((longlong)local_5c0);
  FUN_140006910((longlong)local_5c0);
  FUN_140006920(local_5c0);
  FUN_140006980((longlong)local_2f8);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  local_5f8 = 0;
  puVar6 = FUN_140006930(local_5e0,local_598,&local_5f8);
  if ((char)puVar6 == '\0') {
    pbVar9 = FUN_1400011f0((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
                           (param_1 + 200),L"Call GetVolumeSnapshot Failed!: ");
    pwVar12 = pwVar8;
    if (7 < *(ulonglong *)(param_1 + 0x88)) {
      pwVar12 = *(wchar_t **)pwVar8;
    }
    pbVar9 = FUN_1400017c0(pbVar9,pwVar12,*(ulonglong *)(param_1 + 0x80));
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar9,FUN_1400019f0);
    if (7 < *(ulonglong *)(param_1 + 0x88)) {
      pwVar8 = *(wchar_t **)pwVar8;
    }
    pwVar8[1] = L'?';
  }
  else {
    if (7 < *(ulonglong *)(param_1 + 0x88)) {
      pwVar8 = *(wchar_t **)pwVar8;
    }
    pbVar9 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 200);
    pbVar7 = FUN_1400011f0(pbVar9,L"Call GetVolumeSnapshot() on Volume: ");
    pbVar7 = FUN_1400011f0(pbVar7,pwVar8);
    pbVar7 = FUN_1400011f0(pbVar7,L" Successful!");
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar7,FUN_1400019f0);
    pwVar8 = (wchar_t *)FUN_1400068f0((longlong)local_5e0,local_5f8);
    if (pwVar8 != (wchar_t *)0x0) {
      pbVar7 = FUN_1400011f0(pbVar9,L"Volume Snapshot name: ");
      pbVar7 = FUN_1400011f0(pbVar7,pwVar8);
      std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<
                (pbVar7,FUN_1400019f0);
    }
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(pbVar9);
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::clear
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               ((longlong)*(int *)(*(longlong *)pbVar9 + 4) + 200 + param_1),0,false);
  }
  FUN_140006980((longlong)local_598);
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush
            ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 200));
  puVar13 = (undefined8 *)(param_1 + 0x90);
  puVar15 = puVar13;
  if (7 < *(ulonglong *)(param_1 + 0xa8)) {
    puVar15 = (undefined8 *)*puVar13;
  }
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar14 = uVar1;
  if (4 < uVar1) {
    uVar14 = 4;
  }
  psVar10 = &DAT_140009f68;
  if (uVar14 != 0) {
    do {
      if (*(short *)((longlong)(puVar15 + -0x280013ed) + (longlong)psVar10) != *psVar10)
      goto LAB_140002d32;
      psVar10 = psVar10 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (uVar1 == 4) {
    iVar11 = 0;
  }
  else {
LAB_140002d32:
    if (7 < *(ulonglong *)(param_1 + 0xa8)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    uVar14 = uVar1;
    if (3 < uVar1) {
      uVar14 = 3;
    }
    psVar10 = &DAT_140009f78;
    if (uVar14 != 0) {
      do {
        if (*(short *)((longlong)(puVar13 + -0x280013ef) + (longlong)psVar10) != *psVar10)
        goto LAB_140002d92;
        psVar10 = psVar10 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (uVar1 != 3) goto LAB_140002d92;
    iVar11 = 1;
  }
  FUN_140005d60(local_5f0,iVar11,local_598,local_2f8);
LAB_140002d92:
  if (local_5f8 != 0) {
    FUN_140006ad0(local_5e0,local_5f8);
  }
  FUN_140005cb0((longlong)local_2f8);
  FUN_140005d30(local_5e0);
  _guard_check_icall();
  _guard_check_icall();
  FUN_140005d00((longlong)local_598);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_618);
  return;
}




undefined4 FUN_140003150(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}




void FUN_140003160(longlong param_1,void *param_2,void *param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  DWORD DVar3;
  UINT UVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  LPSTR lpReturnedString;
  undefined1 auStackY_248 [32];
  uint local_210 [2];
  undefined8 local_208;
  char local_200;
  CHAR local_1f8 [191];
  char cStack_139;
  uint local_138 [3];
  char local_12a [258];
  ulonglong local_28;
  
  local_28 = DAT_14000f008 ^ (ulonglong)auStackY_248;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (*(short *)((longlong)param_2 + uVar9 * 2) != 0);
  FUN_140003c60((longlong *)(param_1 + 0x70),param_2,uVar9);
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (*(short *)((longlong)param_3 + uVar9 * 2) != 0);
  FUN_140003c60((longlong *)(param_1 + 0x90),param_3,uVar9);
  *(undefined8 *)(param_1 + 0xb0) = param_4;
  cVar2 = FUN_140005640(param_1,0x140009d80);
  if ((((cVar2 != '\0') && (cVar2 = FUN_140005640(param_1 + 0x18,0x140009d90), cVar2 != '\0')) &&
      (cVar2 = FUN_140005640(param_1 + 0x30,0x140009da0), cVar2 != '\0')) &&
     (cVar2 = FUN_140005640(param_1 + 0x48,0x140009db0), cVar2 != '\0')) {
    pcVar12 = FUN_140003450;
    puVar10 = &DAT_140003140;
    FUN_140006ab0(param_1,&DAT_140003700,&DAT_140003140,FUN_140003450);
    puVar7 = local_138;
    DVar3 = GetCurrentDirectoryA(0x104,(LPSTR)puVar7);
    if (DVar3 == 0) {
      FUN_140005300("GetCurrentDirectory failed!\n",puVar7,puVar10,pcVar12);
    }
    else {
      if (0x103 < (ulonglong)DVar3) {
LAB_14000343b:
        __report_rangecheckfailure();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      *(undefined1 *)((longlong)local_138 + (ulonglong)DVar3) = 0;
      pcVar1 = &cStack_139;
      do {
        pcVar6 = pcVar1;
        pcVar1 = pcVar6 + 1;
      } while (pcVar6[1] != '\0');
      puVar7 = local_138;
      builtin_strncpy(pcVar6 + 1,"\\WinChkdsk.ini",0xf);
      UVar4 = GetPrivateProfileIntA("GlobalSettings","Debug",-1,(LPCSTR)puVar7);
      if (UVar4 == 1) {
        *(undefined1 *)(param_1 + 0xbc) = 1;
      }
      local_1f8[0] = '\0';
      local_1f8[1] = '\0';
      local_1f8[2] = '\0';
      local_1f8[3] = '\0';
      local_1f8[4] = '\0';
      local_1f8[5] = '\0';
      local_1f8[6] = '\0';
      local_1f8[7] = '\0';
      local_1f8[8] = '\0';
      local_1f8[9] = '\0';
      local_1f8[10] = '\0';
      local_1f8[0xb] = '\0';
      local_1f8[0xc] = '\0';
      local_1f8[0xd] = '\0';
      local_1f8[0xe] = '\0';
      local_1f8[0xf] = '\0';
      local_1f8[0x10] = '\0';
      local_1f8[0x11] = '\0';
      local_1f8[0x12] = '\0';
      local_1f8[0x13] = '\0';
      local_1f8[0x14] = '\0';
      local_1f8[0x15] = '\0';
      local_1f8[0x16] = '\0';
      local_1f8[0x17] = '\0';
      local_1f8[0x18] = '\0';
      local_1f8[0x19] = '\0';
      local_1f8[0x1a] = '\0';
      local_1f8[0x1b] = '\0';
      local_1f8[0x1c] = '\0';
      local_1f8[0x1d] = '\0';
      local_1f8[0x1e] = '\0';
      local_1f8[0x1f] = '\0';
      local_1f8[0x20] = '\0';
      local_1f8[0x21] = '\0';
      local_1f8[0x22] = '\0';
      local_1f8[0x23] = '\0';
      local_1f8[0x24] = '\0';
      local_1f8[0x25] = '\0';
      local_1f8[0x26] = '\0';
      local_1f8[0x27] = '\0';
      local_1f8[0x28] = '\0';
      local_1f8[0x29] = '\0';
      local_1f8[0x2a] = '\0';
      local_1f8[0x2b] = '\0';
      local_1f8[0x2c] = '\0';
      local_1f8[0x2d] = '\0';
      local_1f8[0x2e] = '\0';
      local_1f8[0x2f] = '\0';
      local_1f8[0x30] = '\0';
      local_1f8[0x31] = '\0';
      local_1f8[0x32] = '\0';
      local_1f8[0x33] = '\0';
      local_1f8[0x34] = '\0';
      local_1f8[0x35] = '\0';
      local_1f8[0x36] = '\0';
      local_1f8[0x37] = '\0';
      local_1f8[0x38] = '\0';
      local_1f8[0x39] = '\0';
      local_1f8[0x3a] = '\0';
      local_1f8[0x3b] = '\0';
      local_1f8[0x3c] = '\0';
      local_1f8[0x3d] = '\0';
      local_1f8[0x3e] = '\0';
      local_1f8[0x3f] = '\0';
      memset(local_1f8 + 0x40,0,0x80);
      uVar8 = 0;
      do {
        FUN_140005360(local_1f8,"ErrorID%d",(ulonglong)uVar8,puVar7);
        lpReturnedString = local_1f8 + 0x40;
        DVar3 = GetPrivateProfileStringA
                          ("AddErrorMsgIDs",local_1f8,"0xFFFFFFFF",lpReturnedString,0x80,
                           (LPCSTR)local_138);
        if (0x7f < (ulonglong)DVar3) goto LAB_14000343b;
        local_1f8[(ulonglong)DVar3 + 0x40] = '\0';
        iVar5 = strcmp("0xFFFFFFFF",local_1f8 + 0x40);
        if (iVar5 == 0) break;
        iVar5 = sscanf(local_1f8 + 0x40,"0x%08x");
        if (iVar5 == -1) {
          FUN_140005300("Invalid MsgID string : %s=%s\n",local_1f8,local_1f8 + 0x40,lpReturnedString
                       );
          break;
        }
        puVar7 = local_210;
        uVar11 = 0;
        FUN_1400016a0((longlong *)(param_1 + 0x60),&local_208,'\0',puVar7);
        if (local_200 == '\0') {
          FUN_140005300("Conflict MsgID : %s\n",local_1f8 + 0x40,uVar11,puVar7);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 1000);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_248);
  return;
}




undefined1 FUN_140003450(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  HANDLE pvVar2;
  undefined7 uVar3;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  DWORD local_res8 [4];
  DWORD local_res18 [4];
  
  if (*(int *)(param_1 + 0xb8) == 0xbda) {
    *param_2 = 0;
    local_res18[0] = 0;
    pvVar2 = GetStdHandle(0xfffffff5);
    lpNumberOfBytesWritten = local_res18;
    lpBuffer = &DAT_140009f88;
    uVar1 = (char)pvVar2;
    uVar3 = (int7)((ulonglong)pvVar2 >> 8);
  }
  else {
    *param_2 = 1;
    local_res8[0] = 0;
    pvVar2 = GetStdHandle(0xfffffff5);
    lpNumberOfBytesWritten = local_res8;
    lpBuffer = &DAT_140009f8c;
    uVar1 = (char)pvVar2;
    uVar3 = (int7)((ulonglong)pvVar2 >> 8);
  }
  WriteFile((HANDLE)CONCAT71(uVar3,uVar1),lpBuffer,4,lpNumberOfBytesWritten,(LPOVERLAPPED)0x0);
  return 0;
}




void FUN_140003710(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_140003750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_140003790(longlong *param_1)

{
  int iVar1;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14000f008 ^ (ulonglong)auStackY_68;
  if (((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x71) != '\0')) &&
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff), iVar1 != -1)) {
    iVar1 = std::codecvt<char,char,struct__Mbstatet>::unshift
                      ((codecvt<char,char,struct__Mbstatet> *)param_1[0xd],
                       (_Mbstatet *)((longlong)param_1 + 0x74),local_30,(char *)&local_10,&local_38)
    ;
    if (iVar1 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) goto LAB_14000383e;
    if ((longlong)local_38 - (longlong)local_30 != 0) {
      fwrite(local_30,1,(longlong)local_38 - (longlong)local_30,(FILE *)param_1[0x10]);
    }
  }
LAB_14000383e:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




void FUN_140003860(longlong *param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14000f008 ^ (ulonglong)auStackY_68;
  if (((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x72) != '\0')) &&
     (sVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffff), sVar1 != -1)) {
    iVar2 = std::codecvt<wchar_t,char,struct__Mbstatet>::unshift
                      ((codecvt<wchar_t,char,struct__Mbstatet> *)param_1[0xd],
                       (_Mbstatet *)((longlong)param_1 + 0x74),local_30,(char *)&local_10,&local_38)
    ;
    if (iVar2 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    }
    else if (iVar2 != 1) goto LAB_140003914;
    if ((longlong)local_38 - (longlong)local_30 != 0) {
      fwrite(local_30,1,(longlong)local_38 - (longlong)local_30,(FILE *)param_1[0x10]);
    }
  }
LAB_140003914:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




void FUN_140003930(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_140003930(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_140003990(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1400039a0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong param_2,
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
  *(undefined8 *)(param_1 + 0x74) = DAT_14000f4b8;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




void FUN_140003a40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140003a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file();
    return;
  }
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




/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl std::basic_filebuf<unsigned short,struct std::char_traits<unsigned short>
   >::_Reset_back(void) __ptr64
    private: void __cdecl std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Reset_back(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void Reset_back(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar1 >> 1);
  }
  return;
}




void FUN_140003ad0(longlong *param_1,longlong *param_2)

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




void FUN_140003b30(longlong *param_1)

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




void FUN_140003ba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140003bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}




void FUN_140003bc0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_140003be0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 2;
  if (param_2 < 0x8000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new(uVar3);
  if (pvVar2 != (void *)0x0) {
    *(void **)(((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0) - 8) = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




longlong * FUN_140003c60(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Dst;
  longlong *plVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      FUN_140003bc0();
      pcVar4 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar4)();
      return plVar5;
    }
    uVar6 = param_3 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    _Dst = (void *)FUN_140003be0(param_1,uVar7 + 1);
    param_1[3] = uVar7;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar5 = param_1;
    if (7 < uVar2) {
      plVar5 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar5,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar5) = 0;
  }
  return param_1;
}




void FUN_140003d90(undefined8 param_1,void *param_2,longlong param_3)

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




void FUN_140003e00(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_140001a30(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x000140003e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  return;
}




void FUN_140003e50(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_140001b30(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x000140003e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(param_1);
  return;
}




void FUN_140003ea0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

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
  
  local_10 = DAT_14000f008 ^ (ulonglong)auStackY_88;
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




void FUN_140004040(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  wchar_t param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  size_t _Count;
  undefined1 auStackY_98 [32];
  wchar_t local_58;
  wchar_t local_56 [3];
  char *local_50;
  wchar_t *local_48;
  char local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14000f008 ^ (ulonglong)auStackY_98;
  if (param_2 != L'\xffff') {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar1 == 0) || (uVar1 + (longlong)**(int **)(param_1 + 0x58) * 2 <= uVar1)) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if ((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
            **(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          lVar2 = *(longlong *)(param_1 + 0x90);
          lVar3 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar3;
          **(longlong **)(param_1 + 0x38) = lVar3;
          **(undefined4 **)(param_1 + 0x50) = (int)(lVar2 - lVar3 >> 1);
        }
        if (*(codecvt<wchar_t,char,struct__Mbstatet> **)(param_1 + 0x68) !=
            (codecvt<wchar_t,char,struct__Mbstatet> *)0x0) {
          local_58 = param_2;
          iVar4 = std::codecvt<wchar_t,char,struct__Mbstatet>::out
                            (*(codecvt<wchar_t,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),&local_58,local_56,&local_48,local_40,
                             (char *)&local_20,&local_50);
          if (iVar4 < 0) goto LAB_1400041bb;
          if (iVar4 < 2) {
            _Count = (longlong)local_50 - (longlong)local_40;
            if ((_Count == 0) ||
               (sVar6 = fwrite(local_40,1,_Count,*(FILE **)(param_1 + 0x80)), _Count == sVar6)) {
              param_1[0x72] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x1;
            }
            goto LAB_1400041bb;
          }
          param_2 = local_58;
          if (iVar4 != 3) goto LAB_1400041bb;
        }
        fputwc(param_2,*(FILE **)(param_1 + 0x80));
      }
    }
    else {
      pwVar5 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Pninc(param_1);
      *pwVar5 = param_2;
    }
  }
LAB_1400041bb:
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_98);
  return;
}




uint FUN_1400041e0(longlong param_1,uint param_2)

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




wint_t FUN_1400042d0(longlong param_1,wint_t param_2)

{
  wint_t *pwVar1;
  ulonglong uVar2;
  wint_t *pwVar3;
  wint_t wVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffff || (*(wint_t *)(uVar2 - 2) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
    if (param_2 == 0xffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (wVar4 = ungetwc(param_2,*(FILE **)(param_1 + 0x80)), wVar4 != 0xffff)) {
      return param_2;
    }
    pwVar1 = (wint_t *)(param_1 + 0x70);
    if ((wint_t *)**(longlong **)(param_1 + 0x38) != pwVar1) {
      *pwVar1 = param_2;
      pwVar3 = (wint_t *)**(longlong **)(param_1 + 0x18);
      if (pwVar3 != pwVar1) {
        *(wint_t **)(param_1 + 0x88) = pwVar3;
        *(longlong *)(param_1 + 0x90) =
             **(longlong **)(param_1 + 0x38) + (longlong)**(int **)(param_1 + 0x50) * 2;
      }
      **(longlong **)(param_1 + 0x18) = (longlong)pwVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)pwVar1;
      **(undefined4 **)(param_1 + 0x50) = (int)((param_1 - (longlong)pwVar1) + 0x72 >> 1);
      return param_2;
    }
  }
  return 0xffff;
}




void FUN_1400043e0(undefined8 *param_1,undefined1 param_2)

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
    FUN_140003bc0();
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
    if (pvVar3 == (void *)0x0) goto LAB_140004524;
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
LAB_140004524:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return;
}




fpos_t * FUN_140004570(basic_filebuf<char,struct_std::char_traits<char>_> *param_1,fpos_t *param_2,
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
    cVar1 = FUN_140003790((longlong *)param_1);
    if (cVar1 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4);
        if (iVar2 != 0) goto LAB_14000460d;
      }
      iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar2 == 0) {
        std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back(param_1);
        fVar3 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_140004616;
      }
    }
  }
LAB_14000460d:
  *param_2 = -1;
  fVar3 = 0;
LAB_140004616:
  param_2[1] = 0;
  param_2[2] = fVar3;
  return param_2;
}




fpos_t * FUN_140004640(longlong *param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  fpos_t fVar3;
  fpos_t local_res8;
  
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3 = param_3 + -2;
  }
  if (param_1[0x10] != 0) {
    cVar1 = FUN_140003860(param_1);
    if (cVar1 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64((FILE *)param_1[0x10],param_3,param_4);
        if (iVar2 != 0) goto LAB_1400046de;
      }
      iVar2 = fgetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar2 == 0) {
        Reset_back((longlong)param_1);
        fVar3 = *(fpos_t *)((longlong)param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_1400046e7;
      }
    }
  }
LAB_1400046de:
  *param_2 = -1;
  fVar3 = 0;
LAB_1400046e7:
  param_2[1] = 0;
  param_2[2] = fVar3;
  return param_2;
}




longlong * FUN_140004710(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar2 = FUN_140003790(param_1);
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




longlong * FUN_1400047f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar2 = FUN_140003860(param_1);
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
          *(int *)param_1[10] = (int)(lVar1 - lVar4 >> 1);
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




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1400048d0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
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
      FUN_1400039a0(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140004930(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,char *param_2,
             longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((param_2 == (char *)0x0) && (param_3 == 0)) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    iVar2 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar2,param_3 * 2);
    if (iVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      param_1[0x7c] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x1;
      param_1[0x72] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
      std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(param_1);
      *(undefined8 *)(param_1 + 0x80) = uVar1;
      *(undefined8 *)(param_1 + 0x74) = DAT_14000f4b0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
}




undefined8 FUN_1400049c0(longlong *param_1)

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




undefined8 FUN_140004a10(longlong *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[0x10] != 0) {
    sVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffff);
    if (sVar1 != -1) {
      iVar2 = fflush((FILE *)param_1[0x10]);
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}




void FUN_140004a70(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

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
  local_18 = DAT_14000f008 ^ (ulonglong)auStackY_98;
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
          if (iVar4 == -1) goto LAB_140004c43;
          FUN_1400043e0((undefined8 *)&local_38,(char)iVar4);
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
          if ((iVar4 < 0) || (1 < iVar4)) goto LAB_140004c43;
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
LAB_140004c43:
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
        goto LAB_140004cff;
      }
      fgetc(*(FILE **)(param_1 + 0x80));
    }
  }
  else {
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gninc(param_1);
  }
LAB_140004cff:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_140004d30(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  void *_Memory;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStackY_98 [32];
  wchar_t local_58;
  wchar_t local_56 [3];
  char *local_50;
  wchar_t *local_48;
  undefined8 local_40;
  char local_38;
  undefined7 uStack_37;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_14000f008 ^ (ulonglong)auStackY_98;
  uVar7 = **(ulonglong **)(param_1 + 0x38);
  if ((uVar7 == 0) || (uVar7 + (longlong)**(int **)(param_1 + 0x50) * 2 <= uVar7)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if ((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
          **(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar1 = *(longlong *)(param_1 + 0x90);
        lVar2 = *(longlong *)(param_1 + 0x88);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(undefined4 **)(param_1 + 0x50) = (int)(lVar1 - lVar2 >> 1);
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_28 = 0;
        local_20 = 0xf;
        local_38 = '\0';
        iVar4 = fgetc(*(FILE **)(param_1 + 0x80));
        while( true ) {
          if (iVar4 == -1) goto LAB_140004f03;
          FUN_1400043e0((undefined8 *)&local_38,(char)iVar4);
          pcVar5 = &local_38;
          if (0xf < local_20) {
            pcVar5 = (char *)CONCAT71(uStack_37,local_38);
          }
          pcVar6 = &local_38;
          if (0xf < local_20) {
            pcVar6 = (char *)CONCAT71(uStack_37,local_38);
          }
          iVar4 = std::codecvt<wchar_t,char,struct__Mbstatet>::in
                            (*(codecvt<wchar_t,char,struct__Mbstatet> **)(param_1 + 0x68),
                             (_Mbstatet *)(param_1 + 0x74),pcVar6,pcVar5 + local_28,&local_50,
                             &local_58,local_56,&local_48);
          if ((iVar4 < 0) || (1 < iVar4)) goto LAB_140004f03;
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
LAB_140004f03:
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
        goto LAB_140004fc0;
      }
      fgetwc(*(FILE **)(param_1 + 0x80));
    }
  }
  else {
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Gninc(param_1);
  }
LAB_140004fc0:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




ulonglong FUN_140004ff0(longlong *param_1)

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




short FUN_140005060(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  
  psVar1 = *(short **)param_1[7];
  if ((psVar1 != (short *)0x0) && (psVar1 < psVar1 + *(int *)param_1[10])) {
    return *psVar1;
  }
  sVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  sVar3 = -1;
  if (sVar2 != -1) {
    (**(code **)(*param_1 + 0x20))(param_1,sVar2);
    sVar3 = sVar2;
  }
  return sVar3;
}




char * FUN_1400050d0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




longlong FUN_1400050f0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140005120. Too many branches */
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




longlong FUN_1400051f0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140005220. Too many branches */
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




undefined * FUN_1400052e0(void)

{
  return &DAT_14000f4a0;
}




undefined * FUN_1400052f0(void)

{
  return &DAT_14000f4a8;
}




void FUN_140005300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_1400052e0();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
}




int FUN_140005360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_1400052e0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Single Match
    sscanf
   
   Library: Visual Studio 2019 Release */

int __cdecl sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_1400052f0();
  iVar1 = __stdio_common_vsscanf(*puVar2,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar1;
}




undefined8 * FUN_140005420(undefined8 *param_1)

{
  *param_1 = Dll::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = SystemDll::vftable;
  return param_1;
}




void FUN_140005460(undefined8 *param_1)

{
  *param_1 = Dll::vftable;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




void FUN_1400054c0(undefined8 *param_1)

{
  *param_1 = SystemDll::vftable;
  *param_1 = Dll::vftable;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




undefined8 * FUN_140005520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Dll::vftable;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1400055a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = SystemDll::vftable;
  *param_1 = Dll::vftable;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_140005630(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_140005640(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  HMODULE pHVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_148 [31];
  char cStack_129;
  CHAR local_128 [10];
  char local_11e [262];
  ulonglong local_18;
  
  local_18 = DAT_14000f008 ^ (ulonglong)auStack_148;
  memset(local_128,0,0x104);
  GetSystemWindowsDirectoryA(local_128,0x104);
  pcVar2 = &cStack_129;
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  builtin_strncpy(pcVar5 + 1,"\\System32\\",0xb);
  pcVar2 = &cStack_129;
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  lVar4 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar4);
    pcVar2[lVar4] = cVar1;
    lVar4 = lVar4 + 1;
  } while (cVar1 != '\0');
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pcVar2 = _strdup(local_128);
    *(char **)(param_1 + 0x10) = pcVar2;
    if (*(longlong *)(param_1 + 8) == 0) {
      pHVar3 = LoadLibraryA(pcVar2);
      *(HMODULE *)(param_1 + 8) = pHVar3;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
  return;
}




longlong * FUN_140005740(longlong *param_1,HMODULE param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  FARPROC pFVar5;
  __uint64 _Var6;
  void *pvVar7;
  longlong lVar8;
  FARPROC pFVar9;
  FARPROC pFVar10;
  longlong lVar11;
  longlong lVar12;
  
  memset(param_1,0,0x280);
  pFVar5 = GetProcAddress(param_2,"??0CHKDSK_MESSAGE@@QEAA@XZ");
  param_1[0x50] = (longlong)pFVar5;
  pFVar5 = GetProcAddress(param_2,"??1CHKDSK_MESSAGE@@UEAA@XZ");
  param_1[0x51] = (longlong)pFVar5;
  pFVar5 = GetProcAddress(param_2,"?Initialize@CHKDSK_MESSAGE@@QEAAEPEAVSTREAM@@00@Z");
  param_1[0x52] = (longlong)pFVar5;
  pFVar5 = GetProcAddress(param_2,"?Display@MESSAGE@@QEAAEPEBDZZ");
  param_1[0x55] = (longlong)pFVar5;
  FUN_140006b00("ulib.dll",(char *)pFVar5,FUN_140005dd0,param_3);
  FUN_140006b00("ulib.dll",(char *)param_1[0x55],FUN_140005dd0,param_4);
  pFVar5 = GetProcAddress(param_2,"?DisplayMsg@MESSAGE@@QEAAEKW4MESSAGE_TYPE@@KPEBDZZ");
  param_1[0x56] = (longlong)pFVar5;
  FUN_140006b00("ulib.dll",(char *)pFVar5,&LAB_140006110,param_3);
  FUN_140006b00("ulib.dll",(char *)param_1[0x56],&LAB_140006110,param_4);
  pFVar5 = GetProcAddress(param_2,"?DisplayMsg@MESSAGE@@QEAAEKPEBDZZ");
  param_1[0x57] = (longlong)pFVar5;
  FUN_140006b00("ulib.dll",(char *)pFVar5,&LAB_140006550,param_3);
  FUN_140006b00("ulib.dll",(char *)param_1[0x57],&LAB_140006550,param_4);
  pFVar5 = GetProcAddress(param_2,"?DisplayMsg@MESSAGE@@QAEEK@Z");
  param_1[0x58] = (longlong)pFVar5;
  FUN_140006b00("ulib.dll",(char *)pFVar5,&LAB_1400068d0,param_3);
  FUN_140006b00("ulib.dll",(char *)param_1[0x58],&LAB_1400068d0,param_4);
  pFVar5 = GetProcAddress(param_2,"?DisplayMsg@MESSAGE@@QAEEKW4MESSAGE_TYPE@@K@Z");
  param_1[0x59] = (longlong)pFVar5;
  FUN_140006b00("ulib.dll",(char *)pFVar5,&LAB_1400068e0,param_3);
  FUN_140006b00("ulib.dll",(char *)param_1[0x59],&LAB_1400068e0,param_4);
  if ((code *)param_1[0x50] != (code *)0x0) {
    (*(code *)param_1[0x50])(param_1);
  }
  plVar2 = (longlong *)*param_1;
  lVar12 = 0;
  lVar3 = *plVar2;
  lVar11 = lVar12;
  while (lVar3 != 0) {
    lVar11 = lVar11 + 1;
    lVar3 = plVar2[lVar11];
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = lVar11 + 1;
  _Var6 = SUB168(ZEXT816(8) * auVar4,0);
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    _Var6 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new(_Var6);
  lVar11 = *plVar2;
  lVar8 = lVar12;
  lVar3 = lVar12;
  while (lVar11 != 0) {
    lVar8 = lVar8 + 1;
    *(longlong *)(lVar3 + (longlong)pvVar7) = lVar11;
    lVar3 = lVar8 * 8;
    lVar11 = plVar2[lVar8];
  }
  *(undefined8 *)((longlong)pvVar7 + lVar8 * 8) = 0;
  pFVar9 = GetProcAddress(param_2,"?Set@CHKDSK_MESSAGE@@UEAAEKW4MESSAGE_TYPE@@K@Z");
  pFVar10 = GetProcAddress(param_2,"?IsYesResponse@CHKDSK_MESSAGE@@UEAAEE@Z");
  pFVar5 = (FARPROC)*plVar2;
  plVar1 = plVar2;
  lVar3 = lVar12;
  while (pFVar5 != (FARPROC)0x0) {
    if (pFVar5 == pFVar9) {
      *(code **)(lVar3 + (longlong)pvVar7) = FUN_1400069f0;
      param_1[0x54] = (longlong)pFVar9;
      pFVar5 = (FARPROC)*plVar1;
    }
    if (pFVar5 == pFVar10) {
      *(undefined1 **)(lVar3 + (longlong)pvVar7) = &LAB_140006990;
      param_1[0x53] = (longlong)pFVar10;
    }
    lVar12 = lVar12 + 1;
    lVar3 = lVar12 * 8;
    plVar1 = plVar2 + lVar12;
    pFVar5 = (FARPROC)plVar2[lVar12];
  }
  *param_1 = (longlong)pvVar7;
  return param_1;
}




undefined8 * FUN_140005a50(undefined8 *param_1,HMODULE param_2,HMODULE param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress(param_2,"Chkdsk");
  *param_1 = pFVar1;
  pFVar1 = GetProcAddress(param_3,"Chkdsk");
  param_1[1] = pFVar1;
  return param_1;
}




void * FUN_140005aa0(void *param_1,HMODULE param_2)

{
  FARPROC pFVar1;
  
  memset(param_1,0,0x280);
  pFVar1 = GetProcAddress(param_2,"??0FSTRING@@QEAA@XZ");
  *(FARPROC *)((longlong)param_1 + 0x280) = pFVar1;
  pFVar1 = GetProcAddress(param_2,"??1FSTRING@@UEAA@XZ");
  *(FARPROC *)((longlong)param_1 + 0x288) = pFVar1;
  pFVar1 = GetProcAddress(param_2,"?Initialize@FSTRING@@QEAAPEAVWSTRING@@PEAGK@Z");
  *(FARPROC *)((longlong)param_1 + 0x290) = pFVar1;
  pFVar1 = GetProcAddress(param_2,"?QuerySTR@WSTRING@@QEBAPEADKKPEADKE@Z");
  *(FARPROC *)((longlong)param_1 + 0x298) = pFVar1;
  if (*(code **)((longlong)param_1 + 0x280) != (code *)0x0) {
    (**(code **)((longlong)param_1 + 0x280))(param_1);
  }
  return param_1;
}




undefined8 * FUN_140005b40(undefined8 *param_1,HMODULE param_2)

{
  FARPROC pFVar1;
  undefined **ppuVar2;
  
  *param_1 = 0;
  param_1[2] = 0;
  ppuVar2 = &PTR_s__GetVolumeSnapshot_SNAPSHOT__SAE_14000a398;
  do {
    if (param_1[2] != 0) break;
    pFVar1 = GetProcAddress(param_2,*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
    param_1[2] = pFVar1;
  } while (*ppuVar2 != (undefined *)0x0);
  pFVar1 = GetProcAddress(param_2,"?ReleaseVolumeSnapshot@SNAPSHOT@@SAEPEAV1@@Z");
  param_1[3] = pFVar1;
  pFVar1 = GetProcAddress(param_2,"?GetSnapshotNtDeviceName@SNAPSHOT@@QEAAPEAGXZ");
  param_1[1] = pFVar1;
  return param_1;
}




longlong * FUN_140005bd0(longlong *param_1,HMODULE param_2)

{
  FARPROC pFVar1;
  undefined **ppuVar2;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ppuVar2 = &PTR_s__Get_Standard_Output_Stream__YAP_14000a350;
  do {
    if (*param_1 != 0) break;
    pFVar1 = GetProcAddress(param_2,*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
    *param_1 = (longlong)pFVar1;
  } while (*ppuVar2 != (undefined *)0x0);
  ppuVar2 = &PTR_s__Get_Standard_Input_Stream__YAPE_14000a380;
  do {
    if (param_1[2] != 0) break;
    pFVar1 = GetProcAddress(param_2,*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
    param_1[2] = (longlong)pFVar1;
  } while (*ppuVar2 != (undefined *)0x0);
  ppuVar2 = &PTR_s__Get_Standard_Error_Stream__YAPE_14000a368;
  do {
    if (param_1[1] != 0) break;
    pFVar1 = GetProcAddress(param_2,*ppuVar2);
    ppuVar2 = ppuVar2 + 1;
    param_1[1] = (longlong)pFVar1;
  } while (*ppuVar2 != (undefined *)0x0);
  pFVar1 = GetProcAddress(param_2,"?QueryResourceStringV@BASE_SYSTEM@@SAEPEAVWSTRING@@KPEBDPEAD@Z");
  param_1[3] = (longlong)pFVar1;
  return param_1;
}




void FUN_140005cb0(longlong param_1)

{
  if (*(code **)(param_1 + 0x288) != (code *)0x0) {
    (**(code **)(param_1 + 0x288))();
  }
  DAT_14000f4d0 = 0;
  DAT_14000f4d8 = 0;
  DAT_14000f4e0 = 0;
  DAT_14000f4e8 = 0;
  return;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_140005d00(longlong param_1)

{
  if (*(code **)(param_1 + 0x288) != (code *)0x0) {
    (**(code **)(param_1 + 0x288))();
  }
  return;
}




void FUN_140005d30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((code *)param_1[3] != (code *)0x0)) {
    *param_1 = 0;
    (*(code *)param_1[3])(lVar1);
  }
  return;
}




bool FUN_140005d60(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_res10 [6];
  
  puVar1 = param_1 + 1;
  if (param_2 != 0) {
    puVar1 = param_1;
  }
  if ((code *)*puVar1 == (code *)0x0) {
    return false;
  }
  (*(code *)*puVar1)(param_3,param_4,0,0,0,0,0,0,0,0,local_res10);
  return local_res10[0] == 0;
}




void FUN_140005dd0(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14000f008 ^ (ulonglong)auStack_e8;
  local_res18 = param_3;
  local_res20 = param_4;
  if (((DAT_14000f4e0 == (code *)0x0) ||
      (cVar1 = (*DAT_14000f4e0)(0,DAT_14000f4d0,param_2,&local_res18), cVar1 != '\0')) &&
     (*(longlong *)(param_1 + 0x2a8) != 0)) {
    FUN_140006c20(param_2,(longlong)&local_res18,local_88,(longlong)&local_78);
    switch(local_88[0]) {
    case 0:
      (**(code **)(param_1 + 0x2a8))(param_1,param_2);
      break;
    case 1:
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78);
      break;
    case 2:
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 3:
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 4:
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 5:
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 6:
      local_b0 = local_50;
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 7:
      local_a8 = local_48;
      local_b0 = local_50;
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 8:
      local_a0 = local_40;
      local_a8 = local_48;
      local_b0 = local_50;
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 9:
      local_98 = local_38;
      local_a0 = local_40;
      local_a8 = local_48;
      local_b0 = local_50;
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
      break;
    case 10:
      local_90 = local_30;
      local_98 = local_38;
      local_a0 = local_40;
      local_a8 = local_48;
      local_b0 = local_50;
      local_b8 = local_58;
      local_c0 = local_60;
      local_c8 = local_68;
      (**(code **)(param_1 + 0x2a8))(param_1,param_2,local_78,local_70);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_e8);
  return;
}




void FUN_1400068f0(longlong param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400068fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(param_2);
    return;
  }
  return;
}




void FUN_140006900(longlong param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140006909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}




void FUN_140006910(longlong param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140006919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}




void FUN_140006920(undefined8 *param_1)

{
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140006928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
  return;
}




undefined * FUN_140006930(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  
  pcVar1 = (code *)param_1[2];
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,param_3);
    lVar2 = *param_3;
    *param_1 = lVar2;
    return (undefined *)CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0);
  }
  return pcVar1;
}




void FUN_140006980(longlong param_1)

{
  if (*(code **)(param_1 + 0x290) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014000698c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x290))();
    return;
  }
  return;
}




undefined * FUN_1400069f0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((DAT_14000f4d8 != (code *)0x0) &&
     (uVar1 = (*DAT_14000f4d8)(DAT_14000f4d0), (char)uVar1 != '\x01')) {
    return (undefined *)CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  pcVar2 = *(code **)(param_1 + 0x2a0);
  if (pcVar2 != (code *)0x0) {
    pcVar2 = (code *)(*pcVar2)(param_1,param_2,param_3,param_4);
  }
  return pcVar2;
}




void FUN_140006a60(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140006a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
    return;
  }
  return;
}




undefined8 FUN_140006a90(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x298) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140006aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x298))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}




void FUN_140006ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_14000f4d0 = param_1;
  DAT_14000f4d8 = param_2;
  DAT_14000f4e0 = param_3;
  DAT_14000f4e8 = param_4;
  return;
}




undefined * FUN_140006ad0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[3];
  if (pcVar1 != (code *)0x0) {
    *param_1 = 0;
    uVar2 = (*pcVar1)(param_2);
    return (undefined *)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return pcVar1;
}




void FUN_140006b00(LPCSTR param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  HANDLE hProcess;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_res18;
  undefined1 local_48 [8];
  _SYSTEM_INFO local_40;
  
  local_res18 = param_3;
  GetSystemInfo(&local_40);
  lVar4 = ImageDirectoryEntryToData(param_4,1,1,local_48);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    while ((uVar1 != 0 &&
           (iVar3 = lstrcmpiA((LPCSTR)((ulonglong)uVar1 + param_4),param_1), iVar3 != 0))) {
      uVar1 = *(uint *)(lVar4 + 0x20);
      lVar4 = lVar4 + 0x14;
    }
    if (*(int *)(lVar4 + 0xc) != 0) {
      plVar5 = (longlong *)((ulonglong)*(uint *)(lVar4 + 0x10) + param_4);
      pcVar2 = (char *)*plVar5;
      while (pcVar2 != (char *)0x0) {
        bVar7 = pcVar2 == param_2;
        plVar6 = plVar5;
        if (((!bVar7) && (local_40.lpMaximumApplicationAddress < pcVar2)) && (*pcVar2 == 'h')) {
          plVar6 = (longlong *)(pcVar2 + 1);
          bVar7 = (char *)*plVar6 == param_2;
        }
        if (bVar7) {
          hProcess = GetCurrentProcess();
          WriteProcessMemory(hProcess,plVar6,&local_res18,8,(SIZE_T *)0x0);
          return;
        }
        plVar6 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        pcVar2 = (char *)*plVar6;
      }
    }
  }
  return;
}




void FUN_140006c20(char *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  char *pcVar1;
  size_t sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_1[lVar3] != '\0');
  *param_3 = 0;
  pcVar1 = strchr(param_1,0x25);
  if (pcVar1 != (char *)0x0) {
    puVar4 = (undefined8 *)(param_2 + -8);
    do {
      if (9 < *param_3) {
        return;
      }
      sVar2 = strcspn(pcVar1 + 1,"cCdiouxXeEfgGaAnpsSWI");
      pcVar1 = pcVar1 + 1 + sVar2;
      if (pcVar1 < param_1 + lVar3) {
        switch(*pcVar1) {
        case 'A':
        case 'E':
        case 'G':
        case 'a':
        case 'e':
        case 'f':
        case 'g':
          puVar4 = puVar4 + 1;
          *(undefined8 *)(param_4 + *param_3 * 8) = *puVar4;
          *param_3 = *param_3 + 1;
          break;
        case 'C':
        case 'X':
        case 'c':
        case 'd':
        case 'i':
        case 'o':
        case 'u':
        case 'x':
          puVar4 = puVar4 + 1;
          *(undefined4 *)(param_4 + *param_3 * 8) = *(undefined4 *)puVar4;
          break;
        case 'I':
        case 'S':
        case 'W':
        case 'n':
        case 'p':
        case 's':
          puVar4 = puVar4 + 1;
          *(undefined8 *)(param_4 + *param_3 * 8) = *puVar4;
        }
      }
      *param_3 = *param_3 + 1;
      pcVar1 = strchr(pcVar1,0x25);
    } while (pcVar1 != (char *)0x0);
  }
  return;
}




void FUN_140006d80(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  size_t sVar5;
  HANDLE pvVar6;
  longlong lVar7;
  longlong lVar8;
  HANDLE hObject;
  HANDLE hObject_00;
  undefined8 uVar9;
  undefined8 *_ArgList;
  undefined1 auStackY_a68 [32];
  uint local_a38 [2];
  undefined8 local_a30;
  undefined8 local_a28 [92];
  undefined8 local_748 [92];
  HANDLE local_468;
  HANDLE local_460;
  HANDLE local_458;
  wchar_t local_448 [264];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_a30 = 0xfffffffffffffffe;
  local_28 = DAT_14000f008 ^ (ulonglong)auStackY_a68;
  SetConsoleOutputCP(0x1b5);
  pvVar4 = GetStdHandle(0xfffffff6);
  GetConsoleMode(pvVar4,local_a38);
  local_a38[0] = local_a38[0] & 0xfffffffb;
  SetConsoleMode(pvVar4,local_a38[0]);
  sVar5 = mbstowcs(local_238,*(char **)(param_2 + 8),0x104);
  if ((sVar5 == 0) || (sVar5 = mbstowcs(local_448,*(char **)(param_2 + 0x10),0x104), sVar5 == 0)) {
    uVar9 = 0x30;
LAB_1400070fa:
    FUN_140005300("Invalid argument! (%s, %d)\n",
                  "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.winchkdsk\\main.cpp",uVar9,
                  param_4);
  }
  else {
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 1;
      if ((*(char **)(param_2 + 0x18))[lVar7] != "DEBUG"[lVar7]) {
        if (param_1 != 6) {
          uVar9 = 0x4b;
          goto LAB_1400070fa;
        }
        lVar2 = atol(*(char **)(param_2 + 0x18));
        pvVar4 = (HANDLE)(longlong)lVar2;
        if (lVar2 == 0) {
          uVar9 = 0x53;
          goto LAB_1400070fa;
        }
        lVar2 = atol(*(char **)(param_2 + 0x20));
        hObject_00 = (HANDLE)(longlong)lVar2;
        if (lVar2 == 0) {
          CloseHandle(pvVar4);
          uVar9 = 0x5b;
          goto LAB_1400070fa;
        }
        lVar2 = atol(*(char **)(param_2 + 0x28));
        hObject = (HANDLE)(longlong)lVar2;
        if (lVar2 == 0) {
          CloseHandle(hObject_00);
          CloseHandle(pvVar4);
          uVar9 = 100;
          goto LAB_1400070fa;
        }
        FUN_140001fc0(local_a28);
        pvVar6 = hObject_00;
        cVar1 = FUN_140003160((longlong)local_a28,local_238,local_448,hObject_00);
        if (cVar1 == '\0') {
          CloseHandle(pvVar4);
          CloseHandle(hObject_00);
          CloseHandle(hObject);
          FUN_140005300("Chkdsk::Initialize failed! (%s, %d)\n",
                        "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.winchkdsk\\main.cpp",0x71
                        ,pvVar6);
          FUN_1400024c0(local_a28);
          goto LAB_140007112;
        }
        _ArgList = local_a28;
        pvVar6 = (HANDLE)_beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_140007140,_ArgList,4,
                                        (uint *)0x0);
        if (pvVar6 == (HANDLE)0x0) {
          uVar9 = 0x7e;
        }
        else {
          DVar3 = ResumeThread(pvVar6);
          if (DVar3 != 0xffffffff) {
            local_468 = pvVar4;
            local_460 = pvVar6;
            local_458 = hObject;
            DVar3 = WaitForMultipleObjects(3,&local_468,0,0xffffffff);
            if ((DVar3 & 0xfffffffd) == 0) {
              CloseHandle(pvVar4);
              CloseHandle(pvVar6);
              CloseHandle(hObject_00);
              CloseHandle(hObject);
                    /* WARNING: Subroutine does not return */
              ExitProcess(0xffffffff);
            }
            CloseHandle(pvVar4);
            CloseHandle(pvVar6);
            CloseHandle(hObject_00);
            CloseHandle(hObject);
            FUN_140003150((longlong)local_a28);
            FUN_1400024c0(local_a28);
            goto LAB_140007112;
          }
          uVar9 = 0x87;
        }
        FUN_140005300("Can\'t create work thread! (%s, %d)\n",
                      "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.winchkdsk\\main.cpp",uVar9,
                      _ArgList);
        CloseHandle(pvVar4);
        CloseHandle(hObject_00);
        CloseHandle(hObject);
        FUN_1400024c0(local_a28);
        goto LAB_140007112;
      }
      lVar7 = lVar8;
    } while (lVar8 != 6);
    FUN_140001fc0(local_748);
    uVar9 = 0;
    cVar1 = FUN_140003160((longlong)local_748,local_238,local_448,0);
    if (cVar1 == '\0') {
      FUN_140005300("Chkdsk::Initialize failed! (%s, %d)\n",
                    "i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.winchkdsk\\main.cpp",0x3f,
                    uVar9);
      FUN_1400024c0(local_748);
    }
    else {
      FUN_140002a50((longlong)local_748);
      FUN_140003150((longlong)local_748);
      FUN_1400024c0(local_748);
    }
  }
LAB_140007112:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_a68);
  return;
}




void FUN_140007150(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140006d80(param_1,param_2,param_3,param_4);
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
  while (_Memory = DAT_14000f4f8, DAT_14000f4f8 != (undefined8 *)0x0) {
    puVar1 = DAT_14000f4f8 + 1;
    DAT_14000f4f8 = (undefined8 *)*DAT_14000f4f8;
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
    *puVar1 = DAT_14000f4f8;
    puVar1[1] = param_1;
  }
  DAT_14000f4f8 = puVar1;
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
    FUN_140007d58();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_140007d38();
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
                    /* WARNING: Could not recover jumptable at 0x0001400072a9. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x1400072da;
  capture_previous_context((PCONTEXT)&DAT_14000f5a0);
  _DAT_14000f510 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14000f638 = puVar3 + 0x40;
  _DAT_14000f620 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14000f500 = 0xc0000409;
  _DAT_14000f504 = 1;
  _DAT_14000f518 = 1;
  DAT_14000f520 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_14000f008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_14000f000;
  *(undefined8 *)(puVar3 + -8) = 0x14000737c;
  DAT_14000f698 = _DAT_14000f510;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_14000a718);
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
  *(undefined8 *)(puVar3 + -8) = 0x1400073c2;
  capture_current_context((PCONTEXT)&DAT_14000f5a0);
  _DAT_14000f510 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_14000f638 = puVar3 + 0x30;
  _DAT_14000f500 = 0xc0000409;
  _DAT_14000f504 = 1;
  _DAT_14000f518 = 1;
  DAT_14000f520 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x14000742e;
  DAT_14000f698 = _DAT_14000f510;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_14000a718);
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




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14000f008) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_1400076c4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1400076f8(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_140007e38();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)__p__commode();
  uVar5 = FUN_140007e2c();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_1400079f4(1);
  if ((char)uVar5 != '\0') {
    FUN_140008084();
    atexit((_func_5014 *)&LAB_1400080c0);
    uVar7 = FUN_140007e30();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140007e40();
      bVar2 = FUN_140007e70();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140007e2c);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140007e2c();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140007e50();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140007e2c();
      uVar5 = thunk_FUN_140007e2c();
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

int FUN_1400077dc(void)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  
  iVar3 = (int)unaff_RBX;
  uVar4 = __scrt_initialize_crt(1);
  if ((char)uVar4 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar2 = false;
    uVar4 = __scrt_acquire_startup_lock();
    iVar3 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_14000fa70 != 1) {
      if (DAT_14000fa70 == 0) {
        DAT_14000fa70 = 1;
        iVar3 = _initterm_e(&DAT_1400095c0,&DAT_1400095d8);
        if (iVar3 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1400095a0,&DAT_1400095b8);
        DAT_14000fa70 = 2;
      }
      else {
        bVar2 = true;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar5 = (longlong *)FUN_140007e7c();
      if ((*plVar5 != 0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)*plVar5)(0,2);
      }
      plVar5 = (longlong *)FUN_140007e84();
      if ((*plVar5 != 0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)plVar5), (char)uVar6 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar5);
      }
      plVar5 = (longlong *)__p___argv();
      lVar1 = *plVar5;
      puVar7 = (uint *)__p___argc();
      uVar4 = _get_initial_narrow_environment();
      uVar8 = (ulonglong)*puVar7;
      iVar3 = FUN_140007150(*puVar7,lVar1,uVar4,in_R9);
      uVar6 = __scrt_is_managed_app();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return iVar3;
      }
      goto LAB_140007948;
    }
  }
  __scrt_fastfail(7);
LAB_140007948:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}




void entry(void)

{
  __security_init_cookie();
  FUN_1400077dc();
  return;
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
LAB_14000799a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_14000fa78 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_14000fa78;
        pvVar1 = DAT_14000fa78;
      }
      DAT_14000fa78 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_14000799a;
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
    DAT_14000fa80 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_140007e50();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_140007e50();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_140007e50();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400079f4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_14000fa81 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_14000f008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_14000f008;
      _DAT_14000fa88 = in_RAX;
      uRam000000014000fa90 = in_RAX;
      _DAT_14000fa98 = in_RAX;
      _DAT_14000faa0 = in_RAX;
      uRam000000014000faa8 = in_RAX;
      _DAT_14000fab0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14000fa88);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_14000faa0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_14000fa81 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000140007b5a) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140007b43;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140007b43:
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
    DAT_14000fa78 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_14000fa80 == '\0') || (param_2 == '\0')) {
    FUN_140007e50();
    FUN_140007e50();
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
  
  bVar2 = (byte)DAT_14000f008 & 0x3f;
  if (((DAT_14000f008 ^ _DAT_14000fa88) >> bVar2 | (DAT_14000f008 ^ _DAT_14000fa88) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14000fa88,_Func);
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




undefined8 * FUN_140007c20(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_140007c60(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_140007c80(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_140007cc0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_140007cf4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140007d38(void)

{
  undefined8 local_28 [5];
  
  FUN_140007c60(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14000c8a0);
}




void FUN_140007d58(void)

{
  undefined8 local_28 [5];
  
  FUN_140007cc0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14000c900);
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
  
  if (DAT_14000f008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_14000f008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_14000f008 == 0x2b992ddfa232) {
      DAT_14000f008 = 0x2b992ddfa233;
    }
  }
  DAT_14000f000 = ~DAT_14000f008;
  return;
}




undefined8 FUN_140007e2c(void)

{
  return 0;
}




undefined8 FUN_140007e30(void)

{
  return 1;
}




undefined8 FUN_140007e38(void)

{
  return 0x4000;
}




void FUN_140007e40(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140007e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_14000fac0);
  return;
}




undefined1 FUN_140007e50(void)

{
  return 1;
}




void FUN_140007e54(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1400052e0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1400052f0();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_140007e70(void)

{
  return DAT_14000f018 == 0;
}




undefined * FUN_140007e7c(void)

{
  return &DAT_14000fae0;
}




undefined * FUN_140007e84(void)

{
  return &DAT_14000fad8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007e8c(void)

{
  _DAT_14000fad0 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x140007ec7;
  FUN_140007e8c();
  *(undefined8 *)(puVar4 + -8) = 0x140007ed8;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140007ee2;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140007efc;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x140007f3d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140007f6f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140007f91;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x140007fb2;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x140007fbd;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x140007fcd;
    FUN_140007e8c();
  }
  return;
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




void FUN_14000803c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140008043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_14000804c);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140008084(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14000b580; puVar1 < &DAT_14000b580; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001400081ca) */
/* WARNING: Removing unreachable block (ram,0x000140008148) */
/* WARNING: Removing unreachable block (ram,0x000140008123) */
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
  
  DAT_14000f024 = 2;
  _DAT_14000f020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_14000f028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14000fad4 = DAT_14000fad4 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_14000fad4 = DAT_14000fad4 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_14000f020 = 2;
    DAT_14000f024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14000f024 = 0xe;
      _DAT_14000f020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_14000f020 = 5;
        DAT_14000f024 = 0x2e;
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
  return DAT_14000f030 != 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000140008390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined * Catch_1400083a0(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_140001176;
}




void Unwind_1400083e0(undefined8 param_1,longlong param_2)

{
  FUN_140002620((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1400083f0(undefined8 param_1,longlong param_2)

{
  FUN_140002550((longlong *)(param_2 + 0x38));
  return;
}




undefined * Catch_140008400(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +
             (longlong)*(longlong **)(param_2 + 0x80)),4,true);
  return &DAT_140001358;
}




void Unwind_140008440(undefined8 param_1,longlong param_2)

{
  FUN_140002670((longlong *)(param_2 + 0x38));
  return;
}




void Catch_140008450(undefined8 param_1,longlong param_2)

{
  FUN_140003990(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140008480(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_1400084a0(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x80) + 4) +
             (longlong)*(longlong **)(param_2 + 0x80)),4,true);
  return &DAT_140001933;
}




void Unwind_1400084e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001400084e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x60));
  return;
}




void Unwind_1400084f0(undefined8 param_1,longlong param_2)

{
  FUN_1400024a0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140008500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x60) + 0xa8));
  }
  return;
}




void Unwind_140008530(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014000853b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}




void Unwind_140008550(undefined8 param_1,longlong param_2)

{
  FUN_140002270((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_140008560(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x30));
  return;
}




void Unwind_140008570(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x30));
  return;
}




void Unwind_140008580(undefined8 param_1,longlong param_2)

{
  FUN_1400025e0(param_2 + 0x30);
  return;
}




void Unwind_140008590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               (*(longlong *)(param_2 + 0x60) + 0xa8));
  }
  return;
}




void Unwind_1400085c0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001400085cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}




void Unwind_1400085e0(undefined8 param_1,longlong param_2)

{
  FUN_140002330((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
                (*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_1400085f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001400085f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)(param_2 + 0x30));
  return;
}




void Unwind_140008600(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140008610(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_140008620(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x30));
  return;
}




void Unwind_140008630(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_140008640(undefined8 param_1,longlong param_2)

{
  FUN_140002480((longlong *)(*(longlong *)(param_2 + 0x50) + 0x60));
  return;
}




void Unwind_140008650(undefined8 param_1,longlong param_2)

{
  FUN_140002460((longlong *)(*(longlong *)(param_2 + 0x50) + 0x70));
  return;
}




void Unwind_140008660(undefined8 param_1,longlong param_2)

{
  FUN_140002460((longlong *)(*(longlong *)(param_2 + 0x50) + 0x90));
  return;
}




void Unwind_140008680(undefined8 param_1,longlong param_2)

{
  FUN_1400027f0((longlong *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_1400086a0(undefined8 param_1,longlong param_2)

{
  FUN_140002750((longlong *)(*(longlong *)(param_2 + 0x50) + 0x1d0));
  return;
}




void Unwind_1400086c0(undefined8 param_1,longlong param_2)

{
  FUN_1400021a0(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_1400086d0(undefined8 param_1,longlong param_2)

{
  FUN_140002250(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1400086e0(undefined8 param_1,longlong param_2)

{
  FUN_1400025b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1400086f0(undefined8 param_1,longlong param_2)

{
  FUN_1400025b0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140008700(undefined8 param_1,longlong param_2)

{
  FUN_140002250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140008710(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140008720(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)(param_2 + 0x40));
  return;
}




void Unwind_140008730(undefined8 param_1,longlong param_2)

{
  FUN_1400021a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140008740(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140008750(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140008760(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_140008770(undefined8 param_1,longlong param_2)

{
  FUN_1400054c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_140008780(undefined8 param_1,longlong param_2)

{
  FUN_140002480((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_140008790(undefined8 param_1,longlong param_2)

{
  FUN_140002460((longlong *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_1400087a0(undefined8 param_1,longlong param_2)

{
  FUN_140002460((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_1400087c0(undefined8 param_1,longlong param_2)

{
  FUN_1400027f0((longlong *)(*(longlong *)(param_2 + 0x40) + 200));
  return;
}




void Unwind_1400087e0(undefined8 param_1,longlong param_2)

{
  FUN_140002750((longlong *)(*(longlong *)(param_2 + 0x40) + 0x1d0));
  return;
}




void Unwind_140008800(undefined8 param_1,longlong param_2)

{
  FUN_1400021a0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140008810(undefined8 param_1,longlong param_2)

{
  FUN_140002550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140008820(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + -0x98));
  return;
}




void Unwind_140008840(undefined8 param_1,longlong param_2)

{
  FUN_140002270((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x40) + -0xa0));
  return;
}




void Unwind_140008860(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_140008870(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140008882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0x40) + -0x98));
  return;
}




void Unwind_140008890(undefined8 param_1,longlong param_2)

{
  FUN_140002330((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
                (*(longlong *)(param_2 + 0x40) + -0xa0));
  return;
}




void Unwind_1400088b0(undefined8 param_1,longlong param_2)

{
  FUN_140005d00(param_2 + 0x80);
  return;
}




void Unwind_1400088c0(void)

{
  _guard_check_icall();
  return;
}




void Unwind_1400088d0(void)

{
  _guard_check_icall();
  return;
}




void Unwind_1400088e0(undefined8 param_1,longlong param_2)

{
  FUN_140005d30((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_1400088f0(undefined8 param_1,longlong param_2)

{
  FUN_140005cb0(param_2 + 800);
  return;
}




void Unwind_140008900(undefined8 param_1,longlong param_2)

{
  FUN_140005d00(param_2 + 0x70);
  return;
}




void Unwind_140008910(void)

{
  _guard_check_icall();
  return;
}




void Catch_140008920(undefined8 param_1,longlong param_2)

{
  FUN_140003d90(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140008950(undefined8 param_1,longlong param_2)

{
  FUN_140003d90(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140008980(undefined8 param_1,longlong param_2)

{
  FUN_1400023f0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_140008990(undefined8 param_1,longlong param_2)

{
  FUN_140005460(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1400089a0(undefined8 param_1,longlong param_2)

{
  FUN_140005460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1400089b0(undefined8 param_1,longlong param_2)

{
  FUN_1400024c0((undefined8 *)(param_2 + 800));
  return;
}




void Unwind_1400089c0(undefined8 param_1,longlong param_2)

{
  FUN_1400024c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Catch_1400089d0(void)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xffffffff);
}



