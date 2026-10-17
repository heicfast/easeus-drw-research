
basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180001020(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

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
        if (iVar2 == -1) goto LAB_18000116b;
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
        if (iVar2 == -1) goto LAB_18000116b;
      }
    }
    else {
LAB_18000116b:
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




undefined8 * FUN_180001200(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  lVar2 = *param_1;
  lVar15 = param_1[1] - lVar2 >> 5;
  if (lVar15 == 0x7ffffffffffffff) {
    FUN_180001980();
    pcVar3 = (code *)swi(3);
    puVar13 = (undefined8 *)(*pcVar3)();
    return puVar13;
  }
  uVar16 = lVar15 + 1;
  uVar7 = param_1[2] - lVar2 >> 5;
  uVar5 = uVar16;
  if ((uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar16))
  {
    uVar5 = uVar16;
  }
  uVar7 = uVar5 * 0x20;
  if (uVar5 < 0x800000000000000) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13 = (undefined8 *)operator_new(uVar7);
      }
      goto LAB_1800012ff;
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
  puVar13 = (undefined8 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  puVar13[-1] = pvVar6;
LAB_1800012ff:
  puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar13);
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar4 = param_3[1];
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  uVar4 = param_3[3];
  puVar1[2] = param_3[2];
  puVar1[3] = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar10 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar14 = puVar13;
  if (param_2 != puVar10) {
    FUN_180001420((undefined8 *)*param_1,param_2,puVar13);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = param_2;
    puVar14 = puVar1 + 4;
  }
  FUN_180001420(puVar9,puVar10,puVar14);
  plVar11 = (longlong *)*param_1;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[1];
    if (plVar11 != plVar12) {
      do {
        FUN_180001530(plVar11);
        plVar11 = plVar11 + 4;
      } while (plVar11 != plVar12);
      plVar11 = (longlong *)*param_1;
    }
    plVar12 = plVar11;
    if ((0xfff < (param_1[2] - (longlong)plVar11 & 0xffffffffffffffe0U)) &&
       (plVar12 = (longlong *)plVar11[-1],
       0x1f < (ulonglong)((longlong)plVar11 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar12);
  }
  *param_1 = (longlong)puVar13;
  param_1[1] = (longlong)(puVar13 + uVar16 * 4);
  param_1[2] = (longlong)(puVar13 + uVar5 * 4);
  return puVar1;
}




undefined8 * FUN_180001420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_1800014a0(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x14e0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x14e0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x14e0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_1800014f0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_180001530(plVar2);
  }
  return;
}




void FUN_180001530(longlong *param_1)

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




void FUN_1800015a0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_1800015d0(longlong *param_1)

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
                    /* 0x1620  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1620  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1630  7  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




undefined8 FUN_180001640(undefined *param_1,undefined8 param_2)

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




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1670  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




void FUN_180001680(void)

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
  local_18 = DAT_18001e0e8 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001ebf8) {
    while (_Init_thread_header(&DAT_18001ebf8), DAT_18001ebf8 == -1) {
      puVar4 = (undefined8 *)0x0;
      pcVar2 = "Error";
      puVar6 = puVar4;
      do {
        pcVar5 = pcVar2;
        if (0xff < (longlong)puVar6) goto LAB_180001841;
        local_128[(longlong)puVar6] = *pcVar5;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        pcVar2 = pcVar5 + 1;
      } while (pcVar5[1] != '\0');
      if (pcVar5 + -0x18001567b < (char *)0x104) {
        local_128[(longlong)(pcVar5 + -0x18001567b)] = '.';
        (pcVar5 + -0x1800157a2)[(longlong)&stack0x00000000] = 'm';
        (pcVar5 + -0x1800157a1)[(longlong)&stack0x00000000] = 'o';
        if ((char *)0x103 < pcVar5 + -0x180015678) {
          __report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_128[(longlong)(pcVar5 + -0x180015678)] = '\0';
        hModule = LoadLibraryA(local_128);
        if (hModule != (HMODULE)0x0) {
          pFVar3 = GetProcAddress(hModule,"GetModule");
          if (pFVar3 == (FARPROC)0x0) {
            FreeLibrary(hModule);
          }
          else {
            puVar4 = (undefined8 *)FUN_180001640(pFVar3,hModule);
          }
        }
LAB_180001841:
        DAT_18001ebf0 = puVar4;
        _Init_thread_footer(&DAT_18001ebf8);
        break;
      }
      __report_rangecheckfailure();
    }
  }
  if (DAT_18001ebf0 == (undefined8 *)0x0) {
LAB_180001756:
    if (DAT_18001ec00 == (longlong *)0x0) goto LAB_180001765;
  }
  else if (DAT_18001ec00 == (longlong *)0x0) {
    if (DAT_18001ed10 == (undefined1 *)0x0) {
      DAT_18001ed10 = &DAT_18001ec10;
      local_138[0] = 0x100;
      pcVar2 = (char *)__std_type_info_name(0x18001e128,&DAT_180025b30);
      FUN_180001870(pcVar2,DAT_18001ed10,local_138);
    }
    DAT_18001ec00 = (longlong *)(**(code **)*DAT_18001ebf0)(DAT_18001ebf0,DAT_18001ed10);
    goto LAB_180001756;
  }
  (**(code **)(*DAT_18001ec00 + 0x28))();
LAB_180001765:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




ulonglong FUN_180001870(char *param_1,undefined1 *param_2,uint *param_3)

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




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1910  9  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




void FUN_180001920(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180001530(param_2);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180001960(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180001980(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_1800019a0(longlong *param_1,void *param_2,size_t param_3)

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
      FUN_180001960();
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
      if (pvVar3 == (void *)0x0) goto LAB_180001ae3;
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
LAB_180001ae3:
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




void FUN_180001af0(undefined8 param_1,void *param_2,longlong param_3)

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




undefined * FUN_180001b40(void)

{
  return &DAT_18001ebe8;
}




int FUN_180001b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180001b40();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 FUN_180001bd0(ushort *param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar5 = uVar3;
  if (uVar4 <= uVar3) {
    uVar5 = uVar4;
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      bVar1 = *(byte *)(uVar7 + *(longlong *)(param_1 + 4));
      bVar2 = *(byte *)(uVar7 + *(longlong *)(param_2 + 4));
      uVar6 = bVar1 - 0x20;
      if (0x19 < (byte)(bVar1 + 0x9f)) {
        uVar6 = (uint)bVar1;
      }
      uVar9 = bVar2 - 0x20;
      uVar10 = bVar1 - 0x20;
      if (0x19 < (byte)(bVar2 + 0x9f)) {
        uVar9 = (uint)bVar2;
      }
      if ((int)uVar6 < (int)uVar9) goto LAB_180001c65;
      uVar6 = bVar2 - 0x20;
      if (0x19 < (byte)(bVar2 + 0x9f)) {
        uVar6 = (uint)bVar2;
      }
      if (0x19 < (byte)(bVar1 + 0x9f)) {
        uVar10 = (uint)bVar1;
      }
      if ((int)uVar6 < (int)uVar10) goto LAB_180001c6e;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar5);
  }
  if (uVar3 < uVar4) {
LAB_180001c65:
    uVar8 = 0xffffffff;
  }
  else if (uVar4 < uVar3) {
LAB_180001c6e:
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}




void FUN_180001c90(longlong param_1,char param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  
  *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 2);
  *(undefined2 *)((longlong)param_4 + 2) = *(undefined2 *)(param_1 + 4);
  uVar2 = *param_4 * *(int *)(DAT_180026208 + 0x18);
  *param_4 = uVar2;
  uVar2 = (uint)*(byte *)(param_1 + 1) * *(int *)(DAT_180026208 + 0x18) + uVar2;
  *param_4 = uVar2;
  *param_3 = uVar2 & 0x7ff;
  *(undefined2 *)param_5 = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)((longlong)param_5 + 2) = *(undefined2 *)(param_1 + 0xc);
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x18);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *param_5 + 0x7ff + *param_3 & 0xfffff800;
    *param_5 = uVar2;
    *param_5 = uVar2 - *param_3;
  }
  return;
}




undefined8 FUN_180001dc0(char *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  char *_Src;
  uint uVar2;
  undefined8 uVar3;
  byte local_res18 [8];
  ushort local_28;
  undefined6 uStack_26;
  char *pcStack_20;
  ushort local_18;
  undefined6 uStack_16;
  char *pcStack_10;
  
  DAT_180026200 = (uint *)(&DAT_180023e20 + (ulonglong)*param_3 * 0x70);
  DAT_180026208 = (undefined4 *)(&DAT_180023e30)[(ulonglong)*param_3 * 0xe];
  FUN_1800043d0((short *)&local_18,param_1);
  local_res18[0] = 1;
  bVar1 = true;
  DAT_180026208[3] = *DAT_180026208;
  DAT_180026208[4] = DAT_180026208[1];
  DAT_180026208[5] = DAT_180026208[2];
  if (local_18 != 0) {
    do {
      if (local_res18[0] == 0) break;
      if (*pcStack_10 == '\\') {
        pcStack_10 = pcStack_10 + 1;
        local_18 = local_18 - 1;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        do {
          if (pcStack_10[uVar2] == '\\') break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_18);
      }
      local_18 = local_18 - (short)uVar2;
      _local_28 = CONCAT62(uStack_16,(short)uVar2);
      *(char *)(DAT_180026200 + 8) = (char)(uVar2 & 0xffff);
      pcStack_20 = pcStack_10;
      _Src = pcStack_10;
      pcStack_10 = pcStack_10 + uVar2;
      memmove((undefined1 *)((longlong)DAT_180026200 + 0x21),_Src,(ulonglong)(uVar2 & 0xffff));
      uVar3 = FUN_1800021a0(&local_28,local_res18);
      if ((int)uVar3 == 2) {
        bVar1 = false;
        break;
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    } while (local_18 != 0);
    if (local_18 != 0) {
      return 0x14;
    }
  }
  if (bVar1) {
    if ((local_res18[0] != 0) && (-1 < param_2)) {
      if (param_2 < 7) {
        return 0x15;
      }
      if (param_2 == 7) {
        DAT_180026200[0x13] = DAT_180026208[5];
        DAT_180026200[0x12] = DAT_180026208[4];
        *(undefined1 *)(DAT_180026200 + 0x14) = 1;
        *DAT_180026200 = *DAT_180026200 | 1;
        *DAT_180026200 = *DAT_180026200 | 2;
        DAT_180026200[2] = 0;
        DAT_180026200[3] = 0;
        return 0;
      }
      if (param_2 == 8) {
        return 0xd;
      }
    }
    if (param_2 == 0) {
      DAT_180026200[0x13] = DAT_180026208[5];
      DAT_180026200[0x12] = DAT_180026208[4];
      *(undefined1 *)(DAT_180026200 + 0x14) = 0;
      *DAT_180026200 = *DAT_180026200 | 1;
      *DAT_180026200 = *DAT_180026200 | 2;
      DAT_180026200[2] = 0;
      DAT_180026200[3] = 0;
      return 0;
    }
    if (0 < param_2) {
      if (param_2 < 7) {
LAB_180001fdc:
        return 0x1e;
      }
      if (param_2 < 9) {
        return 0x14;
      }
    }
  }
  switch(param_2) {
  default:
    return 2;
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
    goto LAB_180001fdc;
  }
}




void FUN_1800021a0(ushort *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStackY_9b8 [32];
  uint local_988;
  uint local_984;
  undefined8 *local_980;
  int local_978 [2];
  ushort *local_970;
  ushort local_968;
  ushort local_966;
  byte *local_960;
  byte *local_958;
  undefined1 auStack_949 [2305];
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStackY_9b8;
  bVar4 = false;
  bVar3 = false;
  uVar15 = *(uint *)(DAT_180026208 + 0xc);
  puVar11 = (undefined8 *)(ulonglong)((int)auStack_949 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  iVar16 = *(int *)(DAT_180026208 + 0x10) - uVar15;
  local_988 = 0;
  local_980 = puVar11;
  local_970 = param_1;
  local_958 = param_2;
  if ((*param_1 == 1) && (**(char **)(param_1 + 4) == '\\')) {
    *param_2 = 1;
  }
  else {
    uVar14 = 0x800 - uVar15;
    lVar13 = DAT_180026208;
    if (*(int *)(DAT_180026208 + 0x14) != 0) {
      do {
        uVar7 = uVar14;
        if (uVar14 < 0x21) {
          iVar16 = iVar16 + 0x800;
          uVar15 = 0;
          bVar3 = false;
          uVar14 = 0x800;
        }
        else {
          if (!bVar3) {
            local_978[1] = 0;
            uVar2 = *(uint *)(DAT_180026200 + 4);
            local_978[0] = iVar16;
            uVar8 = FUN_180004290(uVar2,(longlong *)local_978,0);
            if ((((int)uVar8 != 0) ||
                (iVar6 = FUN_1800040b0(uVar2,local_980,0x800,&local_984), iVar6 != 0)) ||
               (local_984 != 0x800)) break;
            bVar3 = true;
            puVar11 = local_980;
            lVar13 = DAT_180026208;
          }
          pbVar1 = (byte *)((ulonglong)uVar15 + (longlong)puVar11);
          bVar5 = *(byte *)((ulonglong)uVar15 + (longlong)puVar11);
          if (bVar5 == 0) {
            iVar16 = iVar16 + 0x800;
            uVar15 = 0;
            bVar3 = false;
            uVar14 = 0x800;
          }
          else {
            if (uVar14 < bVar5) break;
            if (bVar4) {
              if (*(char *)(lVar13 + 0x20) == '\0') {
                bVar5 = pbVar1[0x18];
              }
              else {
                bVar5 = pbVar1[0x19];
              }
              if (-1 < (char)bVar5) {
                bVar4 = true;
              }
            }
            else {
              if (*(char *)(lVar13 + 0x20) == '\0') {
                bVar5 = pbVar1[0x18];
              }
              else {
                bVar5 = pbVar1[0x19];
              }
              if ((char)bVar5 < '\0') {
                bVar4 = true;
              }
              else {
                bVar5 = pbVar1[0x20];
                if ((bVar5 != 1) || (1 < pbVar1[0x21])) {
                  uVar10 = (ulonglong)bVar5;
                  pbVar12 = pbVar1 + uVar10 + 0x20;
                  local_968 = (ushort)bVar5;
                  uVar9 = uVar10;
                  if (bVar5 != 0) {
                    do {
                      uVar7 = (int)uVar9 - 1;
                      uVar9 = (ulonglong)uVar7;
                      if (*pbVar12 == 0x3b) {
                        local_968 = (ushort)uVar7;
                        uVar10 = (ulonglong)local_968;
                        break;
                      }
                      pbVar12 = pbVar12 + -1;
                    } while (uVar7 != 0);
                  }
                  local_966 = (ushort)uVar10;
                  pbVar12 = pbVar1 + uVar10 + 0x20;
                  uVar7 = (uint)uVar10;
                  uVar9 = uVar10;
                  while (uVar7 != 0) {
                    local_966 = (ushort)uVar9;
                    uVar7 = (int)uVar10 - 1;
                    uVar10 = (ulonglong)uVar7;
                    if (*pbVar12 != 0x2e) break;
                    pbVar12 = pbVar12 + -1;
                    local_966 = (ushort)uVar7;
                    uVar9 = (ulonglong)(uVar7 & 0xffff);
                    local_968 = local_966;
                  }
                  local_960 = pbVar1 + 0x21;
                  uVar8 = FUN_180001bd0(&local_968,local_970);
                  if ((int)uVar8 == 0) {
                    FUN_180001c90((longlong)pbVar1,*(char *)(lVar13 + 0x20),(uint *)(lVar13 + 0xc),
                                  (uint *)(lVar13 + 0x10),(uint *)(lVar13 + 0x14));
                    if (*(char *)(DAT_180026208 + 0x20) == '\0') {
                      *local_958 = pbVar1[0x18] >> 1 & 1;
                    }
                    else {
                      *local_958 = pbVar1[0x19] >> 1 & 1;
                    }
                    break;
                  }
                  puVar11 = local_980;
                  if ((int)uVar8 == 1) break;
                }
              }
            }
            bVar5 = *pbVar1;
            uVar7 = (uint)bVar5;
            uVar15 = uVar15 + bVar5;
            uVar14 = uVar14 - bVar5;
          }
        }
        local_988 = local_988 + uVar7;
      } while (local_988 < *(uint *)(lVar13 + 0x14));
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_9b8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002500(uint param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  undefined1 auStackY_9a8 [32];
  uint local_978;
  uint local_974;
  int local_970 [2];
  ushort local_968 [4];
  longlong local_960;
  ushort local_958 [4];
  longlong local_950 [289];
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStackY_9a8;
  DAT_180026208 = param_2;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  pbVar15 = (byte *)(ulonglong)((int)local_950 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  local_974 = param_1;
  FUN_1800043d0((short *)local_968,"CD001");
  FUN_1800043d0((short *)local_958,"CDROM");
  iVar14 = 0x8000;
  do {
    local_970[1] = 0;
    local_970[0] = iVar14;
    uVar6 = FUN_180004290(param_1,(longlong *)local_970,0);
    if ((((int)uVar6 != 0) ||
        (iVar3 = FUN_1800040b0(param_1,(undefined8 *)pbVar15,0x800,&local_978), iVar3 != 0)) ||
       (local_978 != 0x800)) goto LAB_180002854;
    if (local_968[0] < 6) {
      uVar12 = (uint)local_968[0];
      if (local_968[0] != 0) goto LAB_1800025fa;
    }
    else {
      uVar12 = 5;
LAB_1800025fa:
      uVar11 = 0;
      pbVar13 = pbVar15;
      do {
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar13;
        bVar7 = *(byte *)(uVar11 + local_960);
        uVar9 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          uVar9 = (uint)bVar1;
        }
        uVar4 = (uint)bVar7;
        uVar10 = bVar7 - 0x20;
        if (0x19 < (byte)(bVar7 + 0x9f)) {
          uVar10 = (uint)bVar7;
        }
        if ((int)uVar9 < (int)uVar10) goto LAB_180002669;
        uVar9 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          uVar9 = (uint)bVar1;
        }
        if ((byte)(bVar7 + 0x9f) < 0x1a) {
          uVar4 = uVar4 - 0x20;
        }
        if ((int)uVar4 < (int)uVar9) {
          uVar12 = 1;
          goto LAB_180002681;
        }
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
      } while (uVar9 < uVar12);
    }
    if (local_968[0] < 6) {
      uVar12 = (uint)(local_968[0] < 5);
    }
    else {
LAB_180002669:
      uVar12 = 0xffffffff;
    }
LAB_180002681:
    if (uVar12 == 0) {
      bVar1 = *pbVar15;
      bVar7 = pbVar15[6];
    }
    else {
      pbVar13 = pbVar15 + 9;
      if (local_958[0] < 6) {
        uVar9 = (uint)local_958[0];
        if (local_958[0] != 0) goto LAB_1800026aa;
      }
      else {
        uVar9 = 5;
LAB_1800026aa:
        uVar11 = 0;
        do {
          bVar1 = *pbVar13;
          bVar7 = *(byte *)(uVar11 + local_950[0]);
          uVar10 = bVar1 - 0x20;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            uVar10 = (uint)bVar1;
          }
          uVar5 = (uint)bVar7;
          uVar4 = bVar7 - 0x20;
          if (0x19 < (byte)(bVar7 + 0x9f)) {
            uVar4 = uVar5;
          }
          if ((int)uVar10 < (int)uVar4) goto LAB_180002854;
          uVar10 = bVar1 - 0x20;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            uVar10 = (uint)bVar1;
          }
          if ((byte)(bVar7 + 0x9f) < 0x1a) {
            uVar5 = uVar5 - 0x20;
          }
          if ((int)uVar5 < (int)uVar10) goto LAB_180002854;
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          pbVar13 = pbVar13 + 1;
        } while (uVar10 < uVar9);
      }
      if (local_958[0] != 5) goto LAB_180002854;
      bVar1 = pbVar15[8];
      bVar7 = pbVar15[0xe];
    }
    if ((bVar7 != 1) || (bVar1 == 0xff)) goto LAB_180002854;
    if (bVar1 == 1) {
      *(bool *)(DAT_180026208 + 8) = uVar12 == 0;
      if (uVar12 == 0) {
        uVar2 = *(ushort *)(pbVar15 + 0x80);
      }
      else {
        uVar2 = *(ushort *)(pbVar15 + 0x88);
      }
      DAT_180026208[6] = (uint)uVar2;
      if (uVar12 == 0) {
        uVar9 = *(uint *)(pbVar15 + 0x50);
      }
      else {
        uVar9 = *(uint *)(pbVar15 + 0x58);
      }
      DAT_180026208[7] = uVar9;
      lVar8 = 0x9c;
      if (uVar12 != 0) {
        lVar8 = 0xb4;
      }
      FUN_180001c90((longlong)(pbVar15 + lVar8),uVar12 == 0,DAT_180026208,DAT_180026208 + 1,
                    DAT_180026208 + 2);
      _DAT_1800261b0 = FUN_180001dc0;
      _DAT_1800261a0 = &LAB_180001bb0;
      _DAT_1800261b8 = &LAB_1800020a0;
      _DAT_1800261c8 = &LAB_1800024b0;
      _DAT_1800261d0 = &LAB_1800024f0;
      _DAT_1800261d8 = &LAB_180001d30;
      _DAT_1800261e0 = &LAB_1800024f0;
      _DAT_1800261f8 = &DAT_1800156b0;
LAB_180002854:
      __security_check_cookie(local_48 ^ (ulonglong)auStackY_9a8);
      return;
    }
    iVar14 = iVar14 + 0x800;
    param_1 = local_974;
  } while( true );
}




undefined8 * FUN_180002880(undefined8 *param_1)

{
  *param_1 = CheckVersionI::vftable;
  *param_1 = CheckVersion::vftable;
  return param_1;
}




void FUN_1800028b0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800028c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,1);
    return;
  }
  return;
}




void FUN_1800028d0(longlong *param_1)

{
  FUN_180003330(param_1);
  return;
}




void FUN_1800028f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        FUN_180001530(plVar1);
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




void FUN_180002990(undefined8 *param_1)

{
  *param_1 = CheckVersionI::vftable;
  return;
}




void FUN_1800029a0(undefined8 *param_1)

{
  *param_1 = FindPartitionPredicatorI::vftable;
  return;
}




void FUN_1800029b0(undefined8 *param_1)

{
  *param_1 = IsWindowsServerInstalled::vftable;
  *param_1 = FindPartitionPredicatorI::vftable;
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800029e0(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  short *psVar8;
  wchar_t *pwVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  char *pcVar19;
  longlong lVar20;
  uint *puVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_1508 [32];
  undefined4 local_14e8;
  uint local_14d8;
  undefined4 local_14d4;
  int local_14d0 [4];
  longlong *local_14c0;
  longlong *local_14b8;
  undefined8 local_14b0;
  longlong *local_14a8;
  longlong *local_14a0;
  undefined2 local_1498;
  undefined6 uStack_1496;
  ulonglong local_1488;
  ulonglong local_1480;
  uint local_1478 [1035];
  char cStack_449;
  char local_448 [512];
  undefined1 local_248 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1800029fe;
  local_14b0 = 0xfffffffffffffffe;
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_1508;
  uVar23 = 0;
  lVar20 = **(longlong **)(param_1 + 8);
  uVar24 = uVar23;
  if ((*(longlong **)(param_1 + 8))[1] - lVar20 >> 5 != 0) {
    do {
      plVar17 = (longlong *)(uVar23 + lVar20);
      if (0xf < (ulonglong)plVar17[3]) {
        plVar17 = (longlong *)*plVar17;
      }
      FUN_180001b50(local_248,"%s\\System32\\config\\system",plVar17,lVar20);
      uVar3 = (**(code **)*param_2)(param_2);
      uVar14 = (ulonglong)uVar3;
      puVar21 = &local_14d8;
      uVar18 = 0;
      puVar11 = local_248;
      iVar4 = FUN_1800047b0(uVar3,puVar11,0,puVar21);
      if (iVar4 == 0) {
        thunk_FUN_18000bbb0(uVar14,puVar11,uVar18,puVar21);
        FUN_180001680();
        FUN_180008ae0(local_14d0,&LAB_180004700,local_14d8);
        FUN_18000fbc0((undefined8 *)local_1478,local_14d8);
        builtin_strncpy(local_448,"\\$$$PROTO.HIV",0xe);
        pcVar19 = &cStack_449;
        do {
          pcVar22 = pcVar19;
          pcVar19 = pcVar22 + 1;
        } while (*pcVar19 != '\0');
        builtin_strncpy(pcVar22 + 1,"\\SELECT\\CURRENT",0x10);
        local_14d4 = 1;
        pcVar19 = local_448;
        plVar5 = (longlong *)FUN_180010140(local_1478,&local_14c0,pcVar19,puVar21);
        plVar17 = (longlong *)*plVar5;
        *plVar5 = 0;
        local_14a8 = plVar17;
        if (local_14c0 != (longlong *)0x0) {
          (**(code **)(*local_14c0 + 0x38))(local_14c0,1);
        }
        puVar12 = &local_14d4;
        plVar5 = plVar17;
        cVar2 = (**(code **)(*plVar17 + 0x18))();
        if (cVar2 == '\0') {
          thunk_FUN_18000bbb0(plVar5,puVar12,pcVar19,puVar21);
          FUN_180001680();
        }
        local_14e8 = local_14d4;
        pcVar22 = "\\CONTROLSET00";
        FUN_180001b50(local_448,"%s%s%d","\\$$$PROTO.HIV","\\CONTROLSET00");
        pcVar19 = &cStack_449;
        do {
          pcVar7 = pcVar19;
          pcVar19 = pcVar7 + 1;
        } while (*pcVar19 != '\0');
        builtin_strncpy(pcVar7 + 1,"\\CONTROL\\PRODUCTOPTIONS\\PRODUCTTYPE",0x24);
        pcVar19 = local_448;
        plVar6 = (longlong *)FUN_180010140(local_1478,&local_14b8,pcVar19,(undefined4 *)pcVar22);
        plVar5 = (longlong *)*plVar6;
        *plVar6 = 0;
        local_14a0 = plVar5;
        if (local_14b8 != (longlong *)0x0) {
          (**(code **)(*local_14b8 + 0x38))(local_14b8,1);
        }
        local_1488 = 0;
        local_1480 = 7;
        local_1498 = 0;
        puVar13 = &local_1498;
        plVar6 = plVar5;
        cVar2 = (**(code **)(*plVar5 + 0x20))();
        if (cVar2 == '\0') {
          thunk_FUN_18000bbb0(plVar6,puVar13,pcVar19,pcVar22);
          FUN_180001680();
          if (7 < local_1480) {
            pvVar1 = (void *)CONCAT62(uStack_1496,local_1498);
            pvVar10 = pvVar1;
            if ((0xfff < local_1480 * 2 + 2) &&
               (pvVar10 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar10);
          }
        }
        else {
          puVar13 = (undefined2 *)CONCAT62(uStack_1496,local_1498);
          puVar16 = &local_1498;
          if (7 < local_1480) {
            puVar16 = puVar13;
          }
          uVar14 = local_1488;
          if (5 < local_1488) {
            uVar14 = 5;
          }
          psVar8 = &DAT_180015920;
          if (uVar14 != 0) {
            do {
              if (*(short *)((longlong)(puVar16 + -0xc000ac90) + (longlong)psVar8) != *psVar8)
              goto LAB_180002d25;
              psVar8 = psVar8 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (local_1488 != 5) {
LAB_180002d25:
            puVar16 = &local_1498;
            if (7 < local_1480) {
              puVar16 = puVar13;
            }
            uVar14 = local_1488;
            if (8 < local_1488) {
              uVar14 = 8;
            }
            pwVar9 = L"ServerNT";
            if (uVar14 != 0) {
              uVar15 = uVar14;
              do {
                if (*(wchar_t *)((longlong)(puVar16 + -0xc000ac98) + (longlong)pwVar9) != *pwVar9)
                goto LAB_180002d7e;
                pwVar9 = pwVar9 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (local_1488 != 8) {
LAB_180002d7e:
              puVar16 = &local_1498;
              if (7 < local_1480) {
                puVar16 = puVar13;
              }
              pwVar9 = L"LanmanNT";
              if (uVar14 != 0) {
                do {
                  if (*(wchar_t *)((longlong)(puVar16 + -0xc000aca4) + (longlong)pwVar9) != *pwVar9)
                  goto LAB_180002dbd;
                  pwVar9 = pwVar9 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              if (local_1488 != 8) {
LAB_180002dbd:
                if (7 < local_1480) {
                  pvVar1 = (void *)CONCAT62(uStack_1496,local_1498);
                  pvVar10 = pvVar1;
                  if ((0xfff < local_1480 * 2 + 2) &&
                     (pvVar10 = *(void **)((longlong)pvVar1 + -8),
                     0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  goto LAB_180002df9;
                }
                goto LAB_180002e00;
              }
            }
            if (7 < local_1480) {
              pvVar1 = (void *)CONCAT62(uStack_1496,local_1498);
              pvVar10 = pvVar1;
              if ((0xfff < local_1480 * 2 + 2) &&
                 (pvVar10 = *(void **)((longlong)pvVar1 + -8),
                 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar10);
            }
            local_1488 = 0;
            local_1480 = 7;
            local_1498 = 0;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,1);
            }
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x38))(plVar17,1);
            }
            FUN_18000fe40((undefined8 *)local_1478);
            FUN_180008af0(local_14d0);
            break;
          }
          if (7 < local_1480) {
            pvVar1 = (void *)CONCAT62(uStack_1496,local_1498);
            pvVar10 = pvVar1;
            if ((0xfff < local_1480 * 2 + 2) &&
               (pvVar10 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)
                      ((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
LAB_180002df9:
            free(pvVar10);
          }
        }
LAB_180002e00:
        local_1488 = 0;
        local_1480 = 7;
        local_1498 = 0;
        (**(code **)(*plVar5 + 0x38))(plVar5,1);
        (**(code **)(*plVar17 + 0x38))(plVar17,1);
        FUN_18000fe40((undefined8 *)local_1478);
        FUN_180008af0(local_14d0);
      }
      else {
        thunk_FUN_18000bbb0(uVar14,puVar11,uVar18,puVar21);
        FUN_180001680();
      }
      uVar24 = uVar24 + 1;
      uVar23 = uVar23 + 0x20;
      lVar20 = **(longlong **)(param_1 + 8);
    } while (uVar24 < (ulonglong)((*(longlong **)(param_1 + 8))[1] - lVar20 >> 5));
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1508);
  return;
}




undefined8 * FUN_180002f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CheckVersion::vftable;
  *param_1 = CheckVersionI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002f90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CheckVersionI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002fc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FindPartitionPredicatorI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180002ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IsWindowsServerInstalled::vftable;
  *param_1 = FindPartitionPredicatorI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined1 FUN_180003040(void)

{
  FUN_180004730();
  return 1;
}




void FUN_180003050(void)

{
  void *pvVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong in_R9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  undefined **local_80;
  longlong **local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  longlong lStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_60 = 0xfffffffffffffffe;
  local_18 = DAT_18001e0e8 ^ (ulonglong)auStack_b8;
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = 0;
  FUN_1800019a0((longlong *)&local_58,"\\winnt",6);
  if (local_88 == plStack_90) {
    FUN_180001200((longlong *)&local_98,plStack_90,(undefined8 *)&local_58);
  }
  else {
    plStack_90[2] = 0;
    plStack_90[3] = 0;
    *plStack_90 = CONCAT71(uStack_57,local_58);
    plStack_90[1] = lStack_50;
    plStack_90[2] = local_48;
    plStack_90[3] = uStack_40;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = 0;
    plStack_90 = plStack_90 + 4;
  }
  if (0xf < uStack_40) {
    pvVar1 = (void *)CONCAT71(uStack_57,local_58);
    pvVar3 = pvVar1;
    if ((0xfff < uStack_40 + 1) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = 0;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  puVar5 = (undefined8 *)0x8;
  FUN_1800019a0((longlong *)&local_38,"\\windows",8);
  if (local_88 == plStack_90) {
    puVar5 = (undefined8 *)&local_38;
    FUN_180001200((longlong *)&local_98,plStack_90,puVar5);
  }
  else {
    plStack_90[2] = 0;
    plStack_90[3] = 0;
    *plStack_90 = CONCAT71(uStack_37,local_38);
    plStack_90[1] = lStack_30;
    plStack_90[2] = local_28;
    plStack_90[3] = uStack_20;
    local_28 = 0;
    uStack_20 = 0xf;
    local_38 = 0;
    plStack_90 = plStack_90 + 4;
  }
  if (0xf < uStack_20) {
    pvVar1 = (void *)CONCAT71(uStack_37,local_38);
    pvVar3 = pvVar1;
    if ((0xfff < uStack_20 + 1) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  local_80 = IsWindowsServerInstalled::vftable;
  local_78 = &local_98;
  FUN_1800033a0(local_70);
  FUN_180003720((longlong)local_70);
  FUN_180003580(local_70,&local_80,puVar5,in_R9);
  FUN_1800033e0(local_70);
  plVar2 = plStack_90;
  local_80 = FindPartitionPredicatorI::vftable;
  plVar4 = local_98;
  if (local_98 != (longlong *)0x0) {
    for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
      FUN_180001530(plVar4);
    }
    plVar4 = local_98;
    if ((0xfff < ((longlong)local_88 - (longlong)local_98 & 0xffffffffffffffe0U)) &&
       (plVar4 = (longlong *)local_98[-1],
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)plVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar4);
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_b8);
  return;
}




undefined8 FUN_180003310(void)

{
  undefined8 uVar1;
  
  FUN_180004690(0);
  uVar1 = FUN_180003ba0();
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




void FUN_180003330(longlong *param_1)

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




undefined8 * FUN_1800033a0(undefined8 *param_1)

{
  *param_1 = DiskContainerI::vftable;
  *param_1 = DiskContainer::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}




void FUN_1800033e0(undefined8 *param_1)

{
  *param_1 = DiskContainer::vftable;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = DiskContainerI::vftable;
  return;
}




void FUN_180003420(undefined8 *param_1)

{
  *param_1 = DiskContainerI::vftable;
  return;
}




void FUN_180003430(undefined8 *param_1)

{
  *param_1 = Partition::vftable;
  *param_1 = PartitionI::vftable;
  return;
}




void FUN_180003460(undefined8 *param_1)

{
  *param_1 = PartitionI::vftable;
  return;
}




undefined8 * FUN_180003470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = DiskContainer::vftable;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = DiskContainerI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800034c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = DiskContainerI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800034f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Partition::vftable;
  *param_1 = PartitionI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = PartitionI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined1 FUN_180003570(void)

{
  return 0;
}




void FUN_180003580(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auStack_278 [32];
  uint local_258 [2];
  undefined **local_250;
  uint local_248;
  int local_240 [4];
  undefined8 local_230;
  char local_228 [512];
  ulonglong local_28;
  
  local_230 = 0xfffffffffffffffe;
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStack_278;
  local_250 = Partition::vftable;
  local_248 = 0xffffffff;
  uVar6 = 0;
  do {
    FUN_180001b50(local_228,"multi(0)disk(0)rdisk(%d)partition(1)",(ulonglong)uVar6,param_4);
    puVar7 = local_258;
    uVar4 = 0;
    pcVar3 = local_228;
    iVar2 = FUN_180003bb0(pcVar3,0,puVar7);
    if (iVar2 != 0) {
      thunk_FUN_18000bbb0(pcVar3,uVar4,puVar7,param_4);
      FUN_180001680();
      break;
    }
    FUN_180003aa0((ushort)local_258[0]);
    uVar5 = 1;
    do {
      param_4 = (ulonglong)uVar5;
      FUN_180001b50(local_228,"multi(0)disk(0)rdisk(%d)partition(%d)",(ulonglong)uVar6,param_4);
      puVar7 = local_258;
      uVar4 = 0;
      pcVar3 = local_228;
      iVar2 = FUN_180003bb0(pcVar3,0,puVar7);
      if (iVar2 == 0) {
        thunk_FUN_18000bbb0(pcVar3,uVar4,puVar7,param_4);
        FUN_180001680();
        FUN_180008ae0(local_240,FUN_180003aa0,local_258[0]);
        local_248 = local_258[0];
        cVar1 = (**(code **)*param_2)(param_2,&local_250);
        if (cVar1 != '\0') {
          FUN_180008af0(local_240);
          goto LAB_1800036ca;
        }
        FUN_180008af0(local_240);
      }
      else {
        thunk_FUN_18000bbb0(pcVar3,uVar4,puVar7,param_4);
        FUN_180001680();
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x21);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x20);
LAB_1800036ca:
  local_250 = PartitionI::vftable;
  __security_check_cookie(local_28 ^ (ulonglong)auStack_278);
  return;
}




undefined1 FUN_180003700(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return 1;
}




undefined4 FUN_180003710(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined1 FUN_180003720(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return 1;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180003740(uint param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  int _FileHandle;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_348 [32];
  undefined1 local_328 [438];
  undefined4 local_172;
  undefined1 local_16a [4];
  undefined1 local_166 [4];
  uint local_162 [14];
  undefined2 local_12a;
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStack_348;
  if (param_1 < 0x20) {
    uVar8 = (ulonglong)param_1;
    puVar5 = &DAT_180021020;
    if (param_2 == 0) {
      puVar5 = &DAT_18001ed20;
    }
    piVar6 = (int *)(puVar5 + uVar8 * 0x118);
    if (*piVar6 != 1) {
      builtin_strncpy(local_128,"\\\\.\\PhysicalDrive",0x12);
      if (param_2 == 0) {
        puVar5 = &DAT_180023323 + uVar8 * 0x23;
        lVar7 = (longlong)&local_12a + 1;
        do {
          pcVar1 = (char *)(lVar7 + 1);
          lVar7 = lVar7 + 1;
        } while (*pcVar1 != '\0');
        lVar9 = 0;
        do {
          cVar2 = puVar5[lVar9];
          *(char *)(lVar7 + lVar9) = cVar2;
          lVar9 = lVar9 + 1;
        } while (cVar2 != '\0');
      }
      else {
        puVar5 = &DAT_180023794 + uVar8 * 0x34;
        lVar7 = (longlong)&local_12a + 1;
        do {
          pcVar1 = (char *)(lVar7 + 1);
          lVar7 = lVar7 + 1;
        } while (*pcVar1 != '\0');
        lVar9 = 0;
        do {
          cVar2 = puVar5[lVar9];
          *(char *)(lVar7 + lVar9) = cVar2;
          lVar9 = lVar9 + 1;
        } while (cVar2 != '\0');
      }
      _FileHandle = _open(local_128,0x8000);
      if (_FileHandle == -1) {
        FUN_180004420("open %s failed!\n",local_128,puVar5,param_4);
      }
      else {
        FUN_180004420("open %s\n",local_128,puVar5,param_4);
        piVar6[2] = _FileHandle;
        *piVar6 = 1;
        memset(local_328,0,0x200);
        iVar3 = _read(_FileHandle,local_328,0x200);
        if ((iVar3 == 0x200) && (local_12a == -0x55ab)) {
          lVar7 = 0;
          piVar6[3] = 0;
          piVar6[4] = -1;
          if (param_2 != 0) {
            (&DAT_180023790)[uVar8 * 0xd] = local_172;
          }
          puVar4 = local_162;
          lVar9 = lVar7;
          do {
            cVar2 = (char)puVar4[-1];
            if (cVar2 == '\0') break;
            if ((cVar2 != '\x05') && (cVar2 != '\x0f')) {
              if (((char)puVar4[-2] == -0x80) && (piVar6[4] == -1)) {
                piVar6[4] = piVar6[3];
              }
              *(ulonglong *)(piVar6 + (ulonglong)(uint)piVar6[3] * 2 + 6) = (ulonglong)*puVar4 << 9;
              piVar6[3] = piVar6[3] + 1;
            }
            lVar9 = lVar9 + 1;
            puVar4 = puVar4 + 4;
          } while (lVar9 < 4);
          puVar4 = local_162;
          do {
            cVar2 = (char)puVar4[-1];
            if (cVar2 == '\0') break;
            if ((cVar2 == '\x05') || (cVar2 == '\x0f')) {
              FUN_180003990((longlong)piVar6,_FileHandle,*puVar4,0);
            }
            lVar7 = lVar7 + 1;
            puVar4 = puVar4 + 4;
          } while (lVar7 < 4);
        }
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_348);
  return;
}




void FUN_180003990(longlong param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong _Offset;
  int *piVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248 [450];
  undefined1 local_86 [4];
  int local_82 [14];
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_268;
  memset(local_248,0,0x200);
  _Offset = (ulonglong)(uint)(param_4 + param_3) << 9;
  lVar3 = _lseeki64(param_2,_Offset,0);
  if (((_Offset == lVar3) && (iVar2 = _read(param_2,local_248,0x200), iVar2 == 0x200)) &&
     (local_4a == -0x55ab)) {
    piVar4 = local_82;
    lVar3 = 0;
    do {
      cVar1 = (char)piVar4[-1];
      if (cVar1 == '\0') break;
      if ((cVar1 == '\x05') || (cVar1 == '\x0f')) {
        FUN_180003990(param_1,param_2,param_3,*piVar4);
      }
      else {
        *(ulonglong *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0xc) * 8) =
             (ulonglong)(uint)(*piVar4 + param_4 + param_3) << 9;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (lVar3 < 4);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_268);
  return;
}




undefined8 FUN_180003aa0(ushort param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  if (0x1f < param_1 >> 8) {
    return 0x16;
  }
  puVar1 = &DAT_180021020;
  if ((char)param_1 == '\0') {
    puVar1 = &DAT_18001ed20;
  }
  piVar2 = (int *)(puVar1 + (ulonglong)(param_1 >> 8) * 0x118);
  *(char *)(piVar2 + 1) = (char)piVar2[1] + -1;
  if (((char)piVar2[1] < '\x01') && (*piVar2 == 1)) {
    _close(piVar2[2]);
    piVar2[2] = 0;
    *piVar2 = 0;
    *(undefined1 *)(piVar2 + 1) = 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180003b10(void)

{
  tm *ptVar1;
  __time64_t local_res8 [4];
  
  local_res8[0] = _time64((__time64_t *)0x0);
  ptVar1 = _localtime64(local_res8);
  _DAT_180023e08 = (short)ptVar1->tm_year + -300;
  _DAT_180023e0a = (short)ptVar1->tm_mon + 1;
  _DAT_180023e0c = (short)ptVar1->tm_mday;
  _DAT_180023e0e = (short)ptVar1->tm_hour;
  _DAT_180023e10 = (short)ptVar1->tm_min;
  _DAT_180023e12 = (short)ptVar1->tm_sec;
  _DAT_180023e14 = 0;
  _DAT_180023e16 = (short)ptVar1->tm_wday;
  return &DAT_180023e08;
}




undefined8 FUN_180003ba0(void)

{
  return 0;
}




void FUN_180003bb0(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  ulonglong uVar18;
  char *pcVar19;
  char cVar20;
  ulonglong uVar21;
  undefined1 auStack_148 [32];
  int local_128 [2];
  uint *local_120;
  byte local_118 [128];
  char local_98 [80];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_148;
  cVar20 = *param_1;
  pcVar19 = param_1;
  pcVar16 = param_1;
  local_120 = param_3;
  if (cVar20 == '\0') goto LAB_180003ebe;
  do {
    pcVar19 = pcVar19 + 1;
    pcVar7 = pcVar19;
    if (cVar20 != ')') {
      pcVar7 = pcVar16;
    }
    cVar20 = *pcVar19;
    pcVar16 = pcVar7;
  } while (cVar20 != '\0');
  if (pcVar7 == param_1) goto LAB_180003ebe;
  pcVar16 = local_98;
  uVar18 = 0;
  uVar11 = 0;
  uVar12 = (longlong)pcVar7 - (longlong)param_1;
  if (pcVar7 < param_1) {
    uVar12 = uVar18;
  }
  pcVar17 = param_1;
  if (uVar12 != 0) {
    do {
      cVar20 = *pcVar17;
      if ((cVar20 == ')') && (pcVar16[-1] == '(')) {
        *pcVar16 = '0';
        pcVar16 = pcVar16 + 1;
      }
      iVar4 = tolower((int)cVar20);
      *pcVar16 = (char)iVar4;
      pcVar17 = pcVar17 + 1;
      pcVar16 = pcVar16 + 1;
    } while ((longlong)pcVar17 - (longlong)param_1 != uVar12);
  }
  *pcVar16 = '\0';
  if ((*pcVar7 == '\0') && (2 < param_2)) goto LAB_180003ebe;
  pcVar16 = strstr(local_98,"multi");
  if (pcVar16 == (char *)0x0) {
    pcVar16 = strstr(local_98,"scsi");
    uVar12 = uVar18;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = strstr(local_98,"signature");
      if ((pcVar16 != (char *)0x0) &&
         (pcVar16 = strstr(local_98,"signature"), pcVar16 != (char *)0x0)) {
        pbVar14 = (byte *)(pcVar16 + 10);
        pbVar15 = local_118;
        uVar21 = uVar18;
        do {
          uVar11 = (uint)uVar21;
          if (*pbVar14 == 0x29) break;
          *pbVar15 = *pbVar14;
          uVar11 = uVar11 + 1;
          uVar21 = (ulonglong)uVar11;
          pbVar15 = pbVar15 + 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar11 < 0x80);
        if (uVar11 < 0x80) {
          if (0x7f < (ulonglong)(longlong)(int)uVar11) {
            __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pbVar15 = (byte *)local_128;
          local_118[(int)uVar11] = 0;
          iVar4 = sscanf((char *)local_118,"%08x");
          if (iVar4 != -1) {
            piVar13 = &DAT_180023790;
            do {
              if (*piVar13 == local_128[0]) goto LAB_180003f94;
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
              piVar13 = piVar13 + 0xd;
            } while (uVar11 < 0x20);
          }
        }
      }
    }
    else {
      pcVar16 = strstr(local_98,"scsi");
      if (pcVar16 != (char *)0x0) {
        pbVar14 = (byte *)(pcVar16 + 5);
        pbVar15 = local_118;
        uVar21 = uVar18;
        do {
          uVar11 = (uint)uVar21;
          if (*pbVar14 == 0x29) break;
          *pbVar15 = *pbVar14;
          uVar11 = uVar11 + 1;
          uVar21 = (ulonglong)uVar11;
          pbVar15 = pbVar15 + 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar11 < 0x80);
        if (uVar11 < 0x80) {
          if (0x7f < (ulonglong)(longlong)(int)uVar11) {
            __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_118[(int)uVar11] = 0;
          iVar4 = atoi((char *)local_118);
          pcVar16 = strstr(local_98,"disk");
          if (pcVar16 != (char *)0x0) {
            pbVar14 = (byte *)(pcVar16 + 5);
            pbVar15 = local_118;
            uVar21 = uVar18;
            do {
              uVar11 = (uint)uVar21;
              if (*pbVar14 == 0x29) break;
              *pbVar15 = *pbVar14;
              uVar11 = uVar11 + 1;
              uVar21 = (ulonglong)uVar11;
              pbVar15 = pbVar15 + 1;
              pbVar14 = pbVar14 + 1;
            } while (uVar11 < 0x80);
            if (uVar11 < 0x80) {
              if (0x7f < (ulonglong)(longlong)(int)uVar11) {
                __report_rangecheckfailure();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_118[(int)uVar11] = 0;
              iVar6 = atoi((char *)local_118);
              pcVar16 = strstr(local_98,"rdisk");
              if (pcVar16 != (char *)0x0) {
                pbVar14 = (byte *)(pcVar16 + 6);
                pbVar15 = local_118;
                uVar21 = uVar18;
                do {
                  uVar11 = (uint)uVar21;
                  if (*pbVar14 == 0x29) break;
                  *pbVar15 = *pbVar14;
                  uVar11 = uVar11 + 1;
                  uVar21 = (ulonglong)uVar11;
                  pbVar15 = pbVar15 + 1;
                  pbVar14 = pbVar14 + 1;
                } while (uVar11 < 0x80);
                if (uVar11 < 0x80) {
                  if (0x7f < (ulonglong)(longlong)(int)uVar11) {
                    __report_rangecheckfailure();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_118[(int)uVar11] = 0;
                  iVar5 = atoi((char *)local_118);
                  piVar13 = &DAT_180023788;
                  do {
                    if (((piVar13[-1] == iVar4) && (*piVar13 == iVar6)) && (piVar13[1] == iVar5))
                    goto LAB_180003f94;
                    uVar11 = (int)uVar12 + 1;
                    uVar12 = (ulonglong)uVar11;
                    piVar13 = piVar13 + 0xd;
                  } while (uVar11 < 0x20);
                }
              }
            }
          }
        }
      }
    }
    goto LAB_180003ebe;
  }
  pcVar16 = strstr(local_98,"rdisk");
  if (pcVar16 == (char *)0x0) goto LAB_180003ebe;
  pbVar8 = (byte *)(pcVar16 + 6);
  pbVar14 = local_118;
  uVar12 = uVar18;
  do {
    uVar10 = (uint)uVar12;
    bVar2 = *pbVar8;
    pbVar15 = (byte *)(ulonglong)bVar2;
    if (bVar2 == 0x29) break;
    *pbVar14 = bVar2;
    uVar10 = uVar10 + 1;
    uVar12 = (ulonglong)uVar10;
    pbVar14 = pbVar14 + 1;
    pbVar8 = pbVar8 + 1;
  } while (uVar10 < 0x80);
  if (0x7f < uVar10) goto LAB_180003ebe;
  if (0x7f < (ulonglong)(longlong)(int)uVar10) {
    __report_rangecheckfailure();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_118[(int)uVar10] = 0;
  uVar10 = atoi((char *)local_118);
  uVar12 = (ulonglong)uVar10;
  uVar21 = uVar18;
  goto LAB_180003f9f;
LAB_180003f94:
  uVar21 = 0x118;
  uVar11 = 1;
LAB_180003f9f:
  pcVar16 = strstr(local_98,"partition");
  if (pcVar16 != (char *)0x0) {
    pbVar8 = (byte *)(pcVar16 + 10);
    pbVar14 = local_118;
    do {
      uVar10 = (uint)uVar18;
      if (*pbVar8 == 0x29) break;
      *pbVar14 = *pbVar8;
      uVar10 = uVar10 + 1;
      uVar18 = (ulonglong)uVar10;
      pbVar14 = pbVar14 + 1;
      pbVar8 = pbVar8 + 1;
    } while (uVar10 < 0x80);
    if (uVar10 < 0x80) {
      if (0x7f < (ulonglong)(longlong)(int)uVar10) {
        __report_rangecheckfailure();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_118[(int)uVar10] = 0;
      iVar4 = atoi((char *)local_118);
      uVar10 = (uint)uVar12;
      iVar6 = FUN_180003740(uVar10,uVar11,pbVar15,pcVar19);
      if (iVar6 != 0) {
        if (uVar11 == 0) {
          uVar1 = *(uint *)(&DAT_18001ed2c + uVar12 * 0x118);
        }
        else {
          uVar1 = *(uint *)(&DAT_18002102c + uVar12 * 0x118);
        }
        if (iVar4 - 1U < uVar1) {
          *local_120 = ((iVar4 - 1U & 0xffff) << 8 | uVar10 & 0xff) << 8 | uVar11;
          puVar9 = &DAT_180021024;
          if (uVar10 == 0) {
            puVar9 = &DAT_18001ed24;
          }
          puVar9[uVar21] = puVar9[uVar21] + '\x01';
        }
      }
    }
  }
LAB_180003ebe:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_148);
  return;
}




void FUN_1800040b0(uint param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ushort uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined *puVar13;
  longlong lVar14;
  char cVar15;
  undefined1 auStack_288 [32];
  uint *local_268;
  undefined8 local_258 [64];
  ulonglong local_58;
  
  local_58 = DAT_18001e0e8 ^ (ulonglong)auStack_288;
  uVar6 = (ushort)param_1 >> 8;
  local_268 = param_4;
  if (uVar6 < 0x20) {
    puVar9 = &DAT_18002102c;
    lVar14 = (ulonglong)uVar6 * 0x118;
    cVar15 = (char)param_1;
    if (cVar15 == '\0') {
      puVar9 = &DAT_18001ed2c;
    }
    if (param_1 >> 0x10 < *(uint *)(puVar9 + lVar14)) {
      uVar12 = param_3 >> 9;
      puVar9 = &DAT_180021028;
      if (param_3 >> 9 != 0) {
        puVar13 = &DAT_180021028;
        if (cVar15 == '\0') {
          puVar13 = &DAT_18001ed28;
        }
        do {
          memset(local_258,0,0x200);
          iVar7 = _read(*(int *)(puVar13 + lVar14),local_258,0x200);
          if (iVar7 != 0x200) goto LAB_180004264;
          lVar11 = 4;
          puVar8 = local_258;
          puVar10 = param_2;
          do {
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *puVar10 = *puVar8;
            puVar10[1] = uVar1;
            uVar1 = puVar8[4];
            uVar4 = puVar8[5];
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            uVar2 = puVar8[6];
            uVar3 = puVar8[7];
            puVar10[4] = uVar1;
            puVar10[5] = uVar4;
            uVar1 = puVar8[8];
            uVar4 = puVar8[9];
            puVar10[6] = uVar2;
            puVar10[7] = uVar3;
            uVar2 = puVar8[10];
            uVar3 = puVar8[0xb];
            puVar10[8] = uVar1;
            puVar10[9] = uVar4;
            uVar1 = puVar8[0xc];
            uVar4 = puVar8[0xd];
            puVar10[10] = uVar2;
            puVar10[0xb] = uVar3;
            uVar2 = puVar8[0xe];
            uVar3 = puVar8[0xf];
            puVar10[0xc] = uVar1;
            puVar10[0xd] = uVar4;
            puVar10[0xe] = uVar2;
            puVar10[0xf] = uVar3;
            lVar11 = lVar11 + -1;
            puVar8 = puVar8 + 0x10;
            puVar10 = puVar10 + 0x10;
          } while (lVar11 != 0);
          param_2 = param_2 + 0x40;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar5 = local_268;
      if ((param_3 & 0x1ff) != 0) {
        memset(local_258,0,0x200);
        if (cVar15 == '\0') {
          puVar9 = &DAT_18001ed28;
        }
        iVar7 = _read(*(int *)(puVar9 + lVar14),local_258,0x200);
        if (iVar7 != 0x200) goto LAB_180004264;
        memcpy(param_2,local_258,(ulonglong)(param_3 & 0x1ff));
      }
      *puVar5 = param_3;
    }
  }
LAB_180004264:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_288);
  return;
}




undefined8 FUN_180004290(uint param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  undefined *puVar5;
  int _Origin;
  
  _Origin = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      _Origin = 1;
    }
    else if (param_3 == 2) {
      _Origin = 2;
    }
  }
  uVar3 = (ushort)param_1 >> 8;
  if (uVar3 < 0x20) {
    puVar5 = &DAT_180021020;
    if ((char)param_1 == '\0') {
      puVar5 = &DAT_18001ed20;
    }
    if (param_1 >> 0x10 < *(uint *)(puVar5 + (ulonglong)uVar3 * 0x118 + 0xc)) {
      lVar1 = *(longlong *)
               (puVar5 + (ulonglong)(param_1 >> 0x10) * 8 + (ulonglong)uVar3 * 0x118 + 0x18);
      lVar2 = *param_2;
      lVar4 = _lseeki64(*(int *)(puVar5 + (ulonglong)uVar3 * 0x118 + 8),lVar1 + lVar2,_Origin);
      if (lVar1 + lVar2 == lVar4) {
        return 0;
      }
    }
  }
  return 0x16;
}




undefined8 FUN_180004330(uint param_1,void *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  size_t sVar2;
  undefined *puVar3;
  longlong lVar4;
  
  uVar1 = (ushort)param_1 >> 8;
  if (uVar1 < 0x20) {
    puVar3 = &DAT_18002102c;
    lVar4 = (ulonglong)uVar1 * 0x118;
    if ((char)param_1 == '\0') {
      puVar3 = &DAT_18001ed2c;
    }
    if (param_1 >> 0x10 < *(uint *)(puVar3 + lVar4)) {
      puVar3 = &DAT_180021028;
      if ((char)param_1 == '\0') {
        puVar3 = &DAT_18001ed28;
      }
      sVar2 = fwrite(param_2,(ulonglong)param_3,1,(FILE *)(ulonglong)*(uint *)(puVar3 + lVar4));
      if (sVar2 == 1) {
        *param_4 = param_3;
        return 0;
      }
    }
  }
  return 0x16;
}




void FUN_1800043d0(short *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  
  sVar2 = 0;
  *(char **)(param_1 + 4) = param_2;
  *param_1 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      sVar2 = *param_1 + 1;
      *param_1 = sVar2;
      cVar1 = *param_2;
    }
    sVar2 = sVar2 + 1;
  }
  param_1[1] = sVar2;
  return;
}




undefined * FUN_180004410(void)

{
  return &DAT_180023e00;
}




void FUN_180004420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar2 = (undefined8 *)FUN_180001b40();
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0,&local_res10);
  return;
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
  puVar2 = (undefined8 *)FUN_180004410();
  iVar1 = __stdio_common_vsscanf(*puVar2,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar1;
}




undefined8 * FUN_1800044e0(longlong *param_1,void *param_2,undefined8 *param_3)

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
    FUN_180001980();
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
      goto LAB_1800045d3;
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
LAB_1800045d3:
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




void * FUN_180004690(uint param_1)

{
  void *pvVar1;
  void *local_res10 [3];
  
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = operator_new((ulonglong)param_1);
    if (DAT_180024c38 == DAT_180024c30) {
      local_res10[0] = pvVar1;
      FUN_1800044e0(&DAT_180024c28,DAT_180024c30,local_res10);
    }
    else {
      *DAT_180024c30 = pvVar1;
      DAT_180024c30 = DAT_180024c30 + 1;
    }
  }
  return pvVar1;
}




void FUN_180004730(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (DAT_180024c30 - DAT_180024c28 >> 3 != 0) {
    do {
      free(*(void **)(DAT_180024c28 + uVar1 * 8));
      *(undefined8 *)(DAT_180024c28 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(DAT_180024c30 - DAT_180024c28 >> 3));
  }
  DAT_180024c30 = DAT_180024c28;
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800047b0(uint param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined *puVar3;
  void *_Dst;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_12d8 [32];
  uint local_12b8 [1176];
  ulonglong local_58;
  
  local_58 = DAT_18001e0e8 ^ (ulonglong)auStack_12d8;
  pbVar1 = &DAT_180023e20;
  uVar5 = 0;
  do {
    if ((*pbVar1 & 1) == 0) {
      lVar2 = FUN_1800088a0(param_1,(short *)local_12b8);
      uVar4 = (ulonglong)uVar5;
      (&DAT_180023e38)[uVar4 * 0xe] = lVar2;
      if (lVar2 == 0) {
        lVar2 = FUN_180008620(param_1,(short *)local_12b8);
        (&DAT_180023e38)[uVar4 * 0xe] = lVar2;
        if (lVar2 == 0) {
          lVar2 = FUN_1800094c0(param_1,local_12b8);
          (&DAT_180023e38)[uVar4 * 0xe] = lVar2;
          if (lVar2 == 0) {
            puVar3 = FUN_18000db50(param_1,local_12b8);
            (&DAT_180023e38)[uVar4 * 0xe] = puVar3;
            if (puVar3 == (undefined *)0x0) {
              lVar2 = FUN_180002500(param_1,local_12b8);
              (&DAT_180023e38)[uVar4 * 0xe] = lVar2;
              if (lVar2 == 0) break;
              uVar6 = 0x24;
            }
            else {
              uVar6 = 0x1260;
            }
          }
          else {
            uVar6 = 0x150;
          }
        }
        else {
          uVar6 = 0x9e0;
        }
      }
      else {
        uVar6 = 0x880;
      }
      _Dst = FUN_180004690(uVar6);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_12b8,(ulonglong)uVar6);
        (&DAT_180023e30)[uVar4 * 0xe] = _Dst;
        *param_4 = uVar5;
        (&DAT_180023e24)[uVar4 * 0x1c] = param_1;
        (**(code **)((&DAT_180023e38)[uVar4 * 0xe] + 0x10))(param_2,param_3,param_4);
      }
      break;
    }
    uVar5 = uVar5 + 1;
    pbVar1 = pbVar1 + 0x70;
  } while (uVar5 < 0x20);
  __security_check_cookie(local_58 ^ (ulonglong)auStack_12d8);
  return;
}




undefined8 FUN_180004930(uint param_1)

{
  undefined8 uVar1;
  
  if (((byte)*(undefined4 *)(&DAT_180023e20 + (ulonglong)param_1 * 0x70) & 3) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00018000494d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DAT_180023e38)[(ulonglong)param_1 * 0xe] + 0x18))();
    return uVar1;
  }
  return 0xd;
}




undefined8 FUN_180004960(uint param_1)

{
  undefined8 uVar1;
  
  if (((&DAT_180023e20)[(ulonglong)param_1 * 0x70] & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180004979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((&DAT_180023e38)[(ulonglong)param_1 * 0xe] + 0x28))();
    return uVar1;
  }
  return 0xd;
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




void * FUN_1800049e0(int param_1)

{
  void *pvVar1;
  
  pvVar1 = FUN_180004690(param_1 + DAT_18001e020 + -1);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = (void *)(ulonglong)((int)pvVar1 + -1 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  }
  return pvVar1;
}




undefined8 FUN_180004a50(uint param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint local_res18 [4];
  longlong local_18 [2];
  
  if (param_3 != 0) {
    local_18[0] = param_2;
    uVar1 = FUN_180004290(param_1,local_18,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1800040b0(param_1,param_4,param_3,local_res18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (param_3 != local_res18[0]) {
      return 5;
    }
  }
  return 0;
}




ulonglong FUN_180004dc0(uint param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int local_res18 [2];
  
  uVar5 = (ulonglong)param_1;
  puVar3 = (ushort *)(&DAT_180023e30)[uVar5 * 0xe];
  uVar8 = (&DAT_180023e24)[uVar5 * 0x1c];
  *(uint *)(puVar3 + 0x16) = param_1;
  lVar7 = (ulonglong)(byte)puVar3[1] * (ulonglong)*puVar3;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  if (param_3 != '\0') {
    uVar8 = param_1;
  }
  local_res18[0] =
       CONCAT22(*(undefined2 *)(&DAT_180023e84 + uVar5 * 0x70),
                *(undefined2 *)(&DAT_180023e8a + uVar5 * 0x70));
  if (local_res18[0] == 0) {
    uVar5 = 0;
  }
  else if (local_res18[0] + 0xf0000010U < 7) {
    uVar5 = 1;
  }
  else if (local_res18[0] == 0xffffff7) {
    uVar5 = 2;
  }
  else {
    uVar5 = (ulonglong)((7 < local_res18[0] + 0xf0000008U) + 3);
  }
  iVar4 = (int)uVar5;
  for (lVar6 = lVar7; lVar6 < param_2; lVar6 = lVar6 + lVar7) {
    if ((int)uVar5 != 4) goto LAB_180005042;
    uVar5 = FUN_180005060(puVar3,uVar8,local_res18[0],local_res18,param_3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_res18[0] != 0) {
      if (local_res18[0] + 0xf0000010U < 7) {
        uVar5 = 1;
      }
      else if (local_res18[0] == 0xffffff7) {
        uVar5 = 2;
      }
      else {
        uVar5 = (ulonglong)((7 < local_res18[0] + 0xf0000008U) + 3);
      }
    }
    iVar4 = (int)uVar5;
  }
  if (iVar4 == 4) {
    puVar3[0x18] = 1;
    puVar3[0x19] = 0;
    *(longlong *)(puVar3 + 0x1c) = lVar6 - lVar7;
    uVar1 = *puVar3;
    *(longlong *)(puVar3 + 0x20) = lVar6;
    *(ulonglong *)(puVar3 + 0xc0) =
         (ulonglong)((uint)(byte)puVar3[1] * (uint)uVar1) * (ulonglong)(local_res18[0] - 2) +
         (ulonglong)(*(int *)(puVar3 + 0xe) * (uint)uVar1) * (ulonglong)(byte)puVar3[3] +
         (longlong)(int)((uint)puVar3[2] * (uint)uVar1);
    uVar5 = FUN_180005060(puVar3,uVar8,local_res18[0],local_res18,param_3);
    iVar4 = (int)uVar5;
    while (iVar4 == 0) {
      if ((((local_res18[0] == 0) || (local_res18[0] + 0xf0000010U < 7)) ||
          (local_res18[0] == 0xffffff7)) || (local_res18[0] + 0xf0000008U < 8)) goto LAB_180005042;
      uVar1 = *puVar3;
      uVar2 = *(uint *)(puVar3 + 0x18);
      uVar5 = (ulonglong)uVar2;
      lVar6 = (ulonglong)((uint)(byte)puVar3[1] * (uint)uVar1) * (ulonglong)(local_res18[0] - 2) +
              (ulonglong)(*(int *)(puVar3 + 0xe) * (uint)uVar1) * (ulonglong)(byte)puVar3[3] +
              (longlong)(int)((uint)puVar3[2] * (uint)uVar1);
      if ((*(longlong *)(puVar3 + (ulonglong)(uVar2 - 1) * 4 + 0xc0) -
          *(longlong *)(puVar3 + (ulonglong)(uVar2 - 1) * 4 + 0x1c)) +
          *(longlong *)(puVar3 + uVar5 * 4 + 0x1c) == lVar6) {
        *(longlong *)(puVar3 + uVar5 * 4 + 0x1c) = *(longlong *)(puVar3 + uVar5 * 4 + 0x1c) + lVar7;
      }
      else {
        if (0x28 < uVar2 + 1) goto LAB_180005042;
        *(uint *)(puVar3 + 0x18) = uVar2 + 1;
        *(longlong *)(puVar3 + uVar5 * 4 + 0xc0) = lVar6;
        *(longlong *)(puVar3 + (ulonglong)*(uint *)(puVar3 + 0x18) * 4 + 0x1c) =
             *(longlong *)(puVar3 + (ulonglong)(*(uint *)(puVar3 + 0x18) - 1) * 4 + 0x1c) + lVar7;
      }
      uVar5 = FUN_180005060(puVar3,uVar8,local_res18[0],local_res18,param_3);
      iVar4 = (int)uVar5;
    }
  }
  else {
LAB_180005042:
    uVar5 = 0;
  }
  return uVar5;
}




undefined8 FUN_180005060(ushort *param_1,uint param_2,int param_3,undefined4 *param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_res18 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x16c);
  uVar3 = (ulonglong)(uint)(param_3 * 4);
  if (((lVar4 == 0) || (lVar5 = *(longlong *)(param_1 + 0x168), (longlong)uVar3 < lVar5)) ||
     (lVar5 + 0x600 < (longlong)((ulonglong)(uint)(param_3 * 4) + 1))) {
    puVar2 = (undefined8 *)(ulonglong)(DAT_18001e020 + 0x2df + (int)param_1 & ~(DAT_18001e020 - 1U))
    ;
    *(undefined8 **)(param_1 + 0x16c) = puVar2;
    if ((param_5 == '\0') && ((char)param_1[0x164] != '\0')) {
      *(undefined1 *)(param_1 + 0x164) = 0;
    }
    lVar4 = (uVar3 / 0x600) * 0x600;
    local_res8 = (ulonglong)param_1[2] * (ulonglong)*param_1 + lVar4;
    *(longlong *)(param_1 + 0x168) = lVar4;
    uVar1 = FUN_180004290(param_2,&local_res8,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1800040b0(param_2,puVar2,0x600,local_res18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (local_res18[0] != 0x600) {
      return 5;
    }
    lVar4 = *(longlong *)(param_1 + 0x16c);
    lVar5 = *(longlong *)(param_1 + 0x168);
  }
  *param_4 = *(undefined4 *)((lVar4 - lVar5) + uVar3);
  return 0;
}




void FUN_180005190(char *param_1,int param_2,uint *param_3)

{
  ushort *puVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  uint *puVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_a8 [32];
  ushort local_68 [4];
  char *local_60;
  uint local_58;
  char local_50 [8];
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_18001e0e8 ^ (ulonglong)auStackY_a8;
  uVar6 = (ulonglong)*param_3;
  lVar9 = uVar6 * 0x70;
  puVar10 = (uint *)(&DAT_180023e20 + lVar9);
  local_58 = (&DAT_180023e24)[uVar6 * 0x1c];
  puVar1 = (ushort *)(&DAT_180023e30)[uVar6 * 0xe];
  FUN_1800043d0((short *)local_68,param_1);
  bVar2 = true;
  *(longlong *)(&DAT_180023e68 + lVar9) = 0;
  bVar13 = 1;
  *(undefined8 *)(&DAT_180023e28 + lVar9) = 0;
  iVar12 = *(int *)(puVar1 + 0x12);
  bVar11 = bVar13;
  if (local_68[0] != 0) {
    do {
      uVar6 = 0;
      if (bVar13 == 0) break;
      if (*local_60 == '\\') {
        local_60 = local_60 + 1;
        local_68[0] = local_68[0] - 1;
      }
      (&DAT_180023e40)[lVar9] = 0;
      if (local_68[0] != 0) {
        uVar7 = 0;
        do {
          if (local_60[uVar7] == '\\') break;
          *(char *)(uVar7 + 0x21 + (longlong)puVar10) = local_60[uVar7];
          bVar3 = (&DAT_180023e40)[lVar9] + 1;
          uVar7 = (ulonglong)bVar3;
          (&DAT_180023e40)[lVar9] = bVar3;
        } while (bVar3 < local_68[0]);
      }
      builtin_strncpy(local_50,"        ",8);
      local_48 = 0x2020;
      local_46 = 0x20;
      uVar15 = (uint)local_68[0];
      if (local_68[0] != 0) {
        do {
          cVar8 = local_60[uVar6];
          if ((cVar8 == '\\') || (cVar8 == '.')) break;
          if ((uint)uVar6 < 8) {
            if ((byte)(cVar8 + 0x9fU) < 0x1a) {
              cVar8 = cVar8 + -0x20;
            }
            local_50[uVar6] = cVar8;
          }
          uVar4 = (uint)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 < uVar15);
      }
      uVar4 = (uint)uVar6;
      if ((uVar4 < uVar15) && (local_60[uVar6] == '.')) {
        uVar14 = 8;
        while( true ) {
          uVar4 = uVar4 + 1;
          uVar6 = (ulonglong)uVar4;
          if ((uVar15 <= uVar4) || (cVar8 = local_60[uVar6], cVar8 == '\\')) break;
          if (uVar14 < 0xb) {
            if ((byte)(cVar8 + 0x9fU) < 0x1a) {
              cVar8 = cVar8 + -0x20;
            }
            uVar6 = (ulonglong)uVar14;
            uVar14 = uVar14 + 1;
            local_50[uVar6] = cVar8;
          }
        }
      }
      cVar8 = local_50[0];
      if (local_50[0] == -0x1b) {
        cVar8 = '\x05';
      }
      local_60 = local_60 + uVar6;
      local_50[0] = cVar8;
      local_68[0] = local_68[0] - (short)uVar6;
      iVar5 = FUN_180005750(puVar1,local_58,iVar12,local_50,&DAT_180023e70 + lVar9,
                            (longlong *)(&DAT_180023e68 + lVar9),'\0');
      if (iVar5 == 2) {
        bVar2 = false;
        break;
      }
      if (iVar5 != 0) goto switchD_180005421_default;
      bVar11 = (&DAT_180023e7b)[lVar9] & 1;
      bVar13 = (byte)(&DAT_180023e7b)[lVar9] >> 4 & 1;
      if (bVar13 != 0) {
        iVar12 = CONCAT22(*(undefined2 *)(&DAT_180023e84 + lVar9),
                          *(undefined2 *)(&DAT_180023e8a + lVar9));
      }
    } while (local_68[0] != 0);
    if (local_68[0] == 0) goto LAB_1800053d7;
switchD_180005421_caseD_7:
    goto switchD_180005421_default;
  }
LAB_1800053d7:
  if (!bVar2) {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 7:
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
switchD_180005421_caseD_5:
    }
    goto switchD_180005421_default;
  }
  if ((bVar13 == 0) || (param_2 < 0)) {
code_r0x000180005413:
    switch(param_2) {
    case 0:
switchD_180005421_caseD_0:
      *puVar10 = *puVar10 | 3;
      break;
    case 1:
      if (bVar11 == 0) {
        *puVar10 = *puVar10 | 5;
      }
      break;
    case 2:
      if (bVar11 == 0) {
        *puVar10 = *puVar10 | 7;
      }
      break;
    case 3:
    case 4:
      goto switchD_180005421_caseD_3;
    case 5:
    case 6:
      goto switchD_180005421_caseD_5;
    case 7:
    case 8:
      goto switchD_180005421_caseD_7;
    }
  }
  else {
    if (param_2 < 7) goto switchD_180005421_default;
    if (param_2 == 7) goto switchD_180005421_caseD_0;
    if (param_2 != 8) goto code_r0x000180005413;
switchD_180005421_caseD_3:
  }
switchD_180005421_default:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_a8);
  return;
}




void FUN_180005680(uint param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  ushort local_40 [8];
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_18001e0e8 ^ (ulonglong)auStack_68;
  FUN_1800043d0((short *)local_40,param_2);
  lVar3 = (ulonglong)param_1 * 0x70;
  uVar1 = (&DAT_180023e24)[(ulonglong)param_1 * 0x1c];
  FUN_1800067d0(local_40,(char *)&local_30);
  FUN_180008150((undefined1 *)&local_30,&DAT_180023e6c + lVar3,(&DAT_180023e77)[lVar3]);
  local_30._0_4_ = *(undefined4 *)(&DAT_180023e68 + lVar3);
  local_30._4_4_ = 0;
  uVar2 = FUN_180004290(uVar1,&local_30,0);
  if ((int)uVar2 == 0) {
    FUN_180004330(uVar1,&DAT_180023e6c + lVar3,0x20,local_48);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180005750(ushort *param_1,uint param_2,int param_3,char *param_4,undefined1 *param_5,
                  longlong *param_6,char param_7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_398 [32];
  int local_368;
  uint local_364;
  longlong *local_360;
  longlong local_358;
  undefined1 *local_350 [97];
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_398;
  local_350[0] = param_5;
  local_360 = param_6;
  puVar7 = (undefined8 *)(ulonglong)((int)local_350 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar9 = (ulonglong)*param_1 * (ulonglong)(byte)param_1[1];
  local_368 = param_3;
  if (((param_3 != 0) && (local_368 = param_3, 6 < param_3 + 0xf0000010U)) &&
     (local_368 = param_3, param_3 != 0xffffff7)) {
    uVar2 = param_3 + 0xf0000008;
    while (local_368 = param_3, 7 < uVar2) {
      uVar1 = *param_1;
      uVar8 = 0;
      lVar10 = (ulonglong)((uint)(byte)param_1[1] * (uint)uVar1) * (ulonglong)(param_3 - 2) +
               (ulonglong)((uint)uVar1 * *(int *)(param_1 + 0xe)) * (ulonglong)(byte)param_1[3] +
               (longlong)(int)((uint)param_1[2] * (uint)uVar1);
      if (uVar9 != 0) {
        do {
          local_358 = uVar8 + lVar10;
          *local_360 = local_358;
          uVar4 = FUN_180004290(param_2,&local_358,0);
          if ((((int)uVar4 != 0) ||
              (iVar3 = FUN_1800040b0(param_2,puVar7,0x200,&local_364), iVar3 != 0)) ||
             (local_364 != 0x200)) goto LAB_180005ad2;
          pcVar5 = (char *)((longlong)puVar7 + 2);
          uVar2 = 0;
          do {
            if ((((pcVar5[-2] == *param_4) && (pcVar5[-1] == param_4[1])) &&
                (((*pcVar5 == param_4[2] &&
                  (((pcVar5[1] == param_4[3] && (pcVar5[2] == param_4[4])) &&
                   (pcVar5[3] == param_4[5])))) &&
                 ((pcVar5[4] == param_4[6] && (pcVar5[5] == param_4[7])))))) &&
               ((pcVar5[6] == param_4[8] &&
                ((pcVar5[7] == param_4[9] && (pcVar5[8] == param_4[10])))))) {
              uVar9 = (ulonglong)uVar2;
              lVar6 = uVar9 * 0x20;
              *local_350[0] = *(undefined1 *)(puVar7 + uVar9 * 4);
              local_350[0][1] = *(undefined1 *)(lVar6 + 1 + (longlong)puVar7);
              local_350[0][2] = *(undefined1 *)(lVar6 + 2 + (longlong)puVar7);
              local_350[0][3] = *(undefined1 *)(lVar6 + 3 + (longlong)puVar7);
              local_350[0][4] = *(undefined1 *)(lVar6 + 4 + (longlong)puVar7);
              local_350[0][5] = *(undefined1 *)(lVar6 + 5 + (longlong)puVar7);
              local_350[0][6] = *(undefined1 *)(lVar6 + 6 + (longlong)puVar7);
              local_350[0][7] = *(undefined1 *)(lVar6 + 7 + (longlong)puVar7);
              local_350[0][8] = *(undefined1 *)(puVar7 + uVar9 * 4 + 1);
              local_350[0][9] = *(undefined1 *)(lVar6 + 9 + (longlong)puVar7);
              local_350[0][10] = *(undefined1 *)(lVar6 + 10 + (longlong)puVar7);
              local_350[0][0xb] = *(undefined1 *)(lVar6 + 0xb + (longlong)puVar7);
              local_350[0][0xc] = *(undefined1 *)(lVar6 + 0xc + (longlong)puVar7);
              local_350[0][0xd] = *(undefined1 *)(lVar6 + 0xd + (longlong)puVar7);
              local_350[0][0xe] = *(undefined1 *)(lVar6 + 0xe + (longlong)puVar7);
              local_350[0][0xf] = *(undefined1 *)(lVar6 + 0xf + (longlong)puVar7);
              local_350[0][0x10] = *(undefined1 *)(puVar7 + uVar9 * 4 + 2);
              local_350[0][0x11] = *(undefined1 *)(lVar6 + 0x11 + (longlong)puVar7);
              local_350[0][0x12] = *(undefined1 *)(lVar6 + 0x12 + (longlong)puVar7);
              local_350[0][0x13] = *(undefined1 *)(lVar6 + 0x13 + (longlong)puVar7);
              local_350[0][0x14] = *(undefined1 *)(lVar6 + 0x14 + (longlong)puVar7);
              local_350[0][0x15] = *(undefined1 *)(lVar6 + 0x15 + (longlong)puVar7);
              local_350[0][0x16] = *(undefined1 *)(lVar6 + 0x16 + (longlong)puVar7);
              local_350[0][0x17] = *(undefined1 *)(lVar6 + 0x17 + (longlong)puVar7);
              local_350[0][0x18] = *(undefined1 *)(puVar7 + uVar9 * 4 + 3);
              local_350[0][0x19] = *(undefined1 *)(lVar6 + 0x19 + (longlong)puVar7);
              local_350[0][0x1a] = *(undefined1 *)(lVar6 + 0x1a + (longlong)puVar7);
              local_350[0][0x1b] = *(undefined1 *)(lVar6 + 0x1b + (longlong)puVar7);
              local_350[0][0x1c] = *(undefined1 *)(lVar6 + 0x1c + (longlong)puVar7);
              local_350[0][0x1d] = *(undefined1 *)(lVar6 + 0x1d + (longlong)puVar7);
              local_350[0][0x1e] = *(undefined1 *)(lVar6 + 0x1e + (longlong)puVar7);
              local_350[0][0x1f] = *(undefined1 *)(lVar6 + 0x1f + (longlong)puVar7);
              *local_360 = uVar8 + lVar6 + lVar10;
              goto LAB_180005ad2;
            }
            if (pcVar5[-2] == '\0') goto LAB_180005ad2;
            uVar2 = uVar2 + 1;
            pcVar5 = pcVar5 + 0x20;
          } while (uVar2 < 0x10);
          uVar8 = (ulonglong)((int)uVar8 + 0x200);
        } while (uVar8 < uVar9);
      }
      uVar4 = FUN_180005060(param_1,param_2,param_3,&local_368,param_7);
      if (((((int)uVar4 != 0) || (local_368 == 0)) || (local_368 + 0xf0000010U < 7)) ||
         (local_368 == 0xffffff7)) break;
      param_3 = local_368;
      uVar2 = local_368 + 0xf0000008;
    }
  }
LAB_180005ad2:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_398);
  return;
}




void FUN_180005b40(uint param_1,byte param_2,byte param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  ushort local_68 [2];
  uint local_64;
  int local_60;
  undefined4 local_5c;
  char local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_18001e0e8 ^ (ulonglong)auStack_98;
  uVar14 = (ulonglong)param_1;
  lVar12 = uVar14 * 0x70;
  puVar5 = (ushort *)(&DAT_180023e30)[uVar14 * 0xe];
  uVar4 = (&DAT_180023e24)[uVar14 * 0x1c];
  bVar1 = (&DAT_180023e77)[lVar12];
  if (*(int *)(&DAT_180023e68 + lVar12) != 0) {
    if ((param_2 & param_3 & 0x20) == 0) {
      bVar13 = param_3 & 1 | 2;
      if ((param_3 & 2) == 0) {
        bVar13 = param_3 & 1;
      }
      bVar11 = bVar13 | 4;
      if ((param_3 & 4) == 0) {
        bVar11 = bVar13;
      }
      bVar13 = bVar11 | 0x20;
      if ((param_3 & 8) == 0) {
        bVar13 = bVar11;
      }
      bVar11 = param_2 & 1 | 2;
      if ((param_2 & 2) == 0) {
        bVar11 = param_2 & 1;
      }
      bVar10 = bVar11 | 4;
      if ((param_2 & 4) == 0) {
        bVar10 = bVar11;
      }
      bVar11 = bVar10 | 0x20;
      if ((param_2 & 8) == 0) {
        bVar11 = bVar10;
      }
      local_5c = 0;
      (&DAT_180023e77)[lVar12] = bVar11 & bVar13 | ~bVar13 & bVar1;
      local_60 = *(int *)(&DAT_180023e68 + lVar12);
      uVar9 = FUN_180004290(uVar4,(longlong *)&local_60,0);
      if ((int)uVar9 == 0) {
        FUN_180004330(uVar4,&DAT_180023e6c + lVar12,0x20,&local_64);
      }
    }
    else if ((bVar1 & 1) == 0) {
      if ((bVar1 & 0x10) != 0) {
        uVar2 = *(ushort *)(&DAT_180023e86 + lVar12);
        uVar6 = puVar5[1];
        uVar3 = *puVar5;
        local_68[0] = uVar2;
        uVar9 = FUN_180006e20(puVar5,uVar2);
        iVar7 = (int)uVar9;
        iVar8 = local_60;
        while (iVar7 == 4) {
          local_60 = ((uVar2 - 2) * (uint)(byte)puVar5[1] + (uint)puVar5[7] * (uint)(byte)puVar5[3]
                     + (uint)puVar5[2]) * (uint)*puVar5 + (uint)puVar5[4] * 0x20;
          if ((uint)uVar3 * (uint)(byte)uVar6 != 0) {
            local_5c = 0;
            uVar9 = FUN_180004290(uVar4,(longlong *)&local_60,0);
            if (((((int)uVar9 != 0) ||
                 (iVar8 = FUN_1800040b0(uVar4,(undefined8 *)local_58,0x20,&local_64), iVar8 != 0))
                || (local_64 != 0x20)) || (iVar8 = local_60, local_58[0] != '\0'))
            goto LAB_180005e05;
          }
          local_60 = iVar8;
          uVar9 = FUN_180007140(puVar5,uVar4,uVar2,local_68,'\0');
          uVar2 = local_68[0];
          if ((int)uVar9 != 0) goto LAB_180005e05;
          uVar9 = FUN_180006e20(puVar5,local_68[0]);
          iVar8 = local_60;
          iVar7 = (int)uVar9;
        }
      }
      (&DAT_180023e6c)[lVar12] = 0xe5;
      local_60 = *(int *)(&DAT_180023e68 + lVar12);
      local_5c = 0;
      uVar9 = FUN_180004290(uVar4,(longlong *)&local_60,0);
      if ((((int)uVar9 == 0) &&
          (uVar9 = FUN_180004330(uVar4,&DAT_180023e6c + lVar12,0x20,&local_64), (int)uVar9 == 0)) &&
         (local_64 == 0x20)) {
        FUN_180008430(uVar14,0);
      }
    }
  }
LAB_180005e05:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_98);
  return;
}




void FUN_180006080(ushort *param_1,uint param_2,uint param_3,ushort param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  undefined1 auStack_2a8 [32];
  ushort local_274 [2];
  uint local_270;
  uint local_26c;
  int local_268;
  undefined4 local_264;
  ushort *local_260;
  ulonglong local_258;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_2a8;
  local_260 = param_5;
  if (param_1[5] == 0) {
    uVar11 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar11 = (uint)param_1[5];
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (((ulonglong)uVar11 - SUB128((ZEXT212(param_1[4]) << 5) / ZEXT212(*param_1),0)) -
                 (ulonglong)(byte)param_1[3] * (ulonglong)param_1[7]) - (ulonglong)param_1[2];
  auVar4 = auVar4 / ZEXT116((byte)param_1[1]);
  uVar7 = auVar4._0_8_;
  uVar14 = (uint)(byte)param_1[1] * (uint)*param_1;
  local_26c = param_3;
  local_258 = uVar7;
  memset(local_248,0,0x200);
  uVar11 = 0;
  uVar10 = 0;
  uVar12 = 0;
  if (auVar4._0_4_ != 0) {
    do {
      if (param_3 <= uVar12) break;
      uVar13 = (short)((ulonglong)((param_4 - 2) + uVar11) % (uVar7 & 0xffffffff)) + 2;
      uVar8 = FUN_180007140(param_1,param_2,uVar13,local_274,'\0');
      if ((int)uVar8 != 0) break;
      uVar8 = FUN_180006e20(param_1,local_274[0]);
      if ((int)uVar8 == 0) {
        if (uVar10 == 0) {
          *local_260 = uVar13;
        }
        else {
          uVar8 = FUN_180008250(param_1,param_2,uVar10,uVar13);
          if ((int)uVar8 != 0) break;
        }
        uVar8 = FUN_180008250(param_1,param_2,uVar13,0xffff);
        if ((int)uVar8 != 0) break;
        uVar5 = param_1[1];
        uVar6 = param_1[3];
        uVar10 = param_1[7];
        uVar1 = param_1[2];
        uVar9 = 0;
        uVar2 = *param_1;
        uVar3 = param_1[4];
        if (uVar14 != 0) {
          do {
            local_264 = 0;
            local_268 = uVar9 + ((uVar13 - 2) * (uint)(byte)uVar5 + (uint)(byte)uVar6 * (uint)uVar10
                                + (uint)uVar1) * (uint)uVar2 + (uint)uVar3 * 0x20;
            uVar8 = FUN_180004290(param_2,(longlong *)&local_268,0);
            if ((((int)uVar8 != 0) ||
                (uVar8 = FUN_180004330(param_2,local_248,0x200,&local_270), (int)uVar8 != 0)) ||
               (local_270 != 0x200)) goto LAB_18000629e;
            uVar9 = uVar9 + 0x200;
          } while (uVar9 < uVar14);
        }
        uVar12 = uVar12 + 1;
        uVar7 = local_258;
        uVar10 = uVar13;
      }
      uVar11 = uVar11 + 1;
      param_3 = local_26c;
    } while (uVar11 < (uint)uVar7);
  }
LAB_18000629e:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_2a8);
  return;
}




undefined8 FUN_1800062d0(uint param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  puVar2 = (ushort *)(&DAT_180023e30)[uVar4 * 0xe];
  uVar1 = (&DAT_180023e24)[uVar4 * 0x1c];
  *(uint *)(&DAT_180023e20 + uVar4 * 0x70) = *(uint *)(&DAT_180023e20 + uVar4 * 0x70) & 0xfffffffe;
  if (((char)puVar2[0xb6] != '\0') && (uVar3 = FUN_1800068d0(puVar2,uVar1), (int)uVar3 != 0)) {
    return uVar3;
  }
  if (*(uint *)(puVar2 + 0xe) == param_1) {
    puVar2[0xe] = 0x20;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
  }
  return 0;
}




void FUN_180006330(ushort *param_1,uint param_2,ushort param_3,void *param_4,uint *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 auStackY_c8 [32];
  uint local_98 [2];
  uint *local_90;
  uint local_88 [3];
  undefined4 local_7c;
  void *local_78;
  char local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_18001e0e8 ^ (ulonglong)auStackY_c8;
  local_90 = param_5;
  local_78 = param_4;
  if (param_3 == 0) {
    uVar6 = param_1[4];
    uVar4 = ((uint)param_1[7] * (uint)(byte)param_1[3] + (uint)param_1[2]) * (uint)*param_1;
    uVar3 = uVar4;
    if (uVar6 != 0) {
      do {
        *local_90 = uVar3;
        local_88[1] = 0;
        local_88[0] = uVar3;
        uVar2 = FUN_180004290(param_2,(longlong *)local_88,0);
        if ((((int)uVar2 != 0) ||
            (iVar1 = FUN_1800040b0(param_2,(undefined8 *)local_70,0x20,local_98), iVar1 != 0)) ||
           (local_98[0] != 0x20)) break;
        if ((local_70[0] == -0x1b) || (local_70[0] == '\0')) {
          local_90 = (uint *)(ulonglong)*local_90;
          uVar2 = FUN_180004290(param_2,(longlong *)&local_90,0);
          if ((int)uVar2 == 0) {
            FUN_180004330(param_2,param_4,0x20,local_98);
          }
          break;
        }
        uVar3 = uVar3 + 0x20;
      } while (uVar3 - uVar4 < (uint)uVar6 << 5);
    }
  }
  else {
    uVar3 = (uint)*param_1 * (uint)(byte)param_1[1];
    local_98[0] = CONCAT22(local_98[0]._2_2_,param_3);
    do {
      do {
        uVar6 = param_3;
        uVar5 = ((uVar6 - 2) * (uint)(byte)param_1[1] + (uint)param_1[7] * (uint)(byte)param_1[3] +
                (uint)param_1[2]) * (uint)*param_1 + (uint)param_1[4] * 0x20;
        uVar4 = uVar5;
        if (uVar3 != 0) {
          do {
            *local_90 = uVar4;
            local_7c = 0;
            local_88[2] = uVar4;
            uVar2 = FUN_180004290(param_2,(longlong *)(local_88 + 2),0);
            if ((((int)uVar2 != 0) ||
                (iVar1 = FUN_1800040b0(param_2,(undefined8 *)local_70,0x20,local_88), iVar1 != 0))
               || (local_88[0] != 0x20)) goto LAB_18000644a;
            if ((local_70[0] == -0x1b) || (local_70[0] == '\0')) {
              local_7c = 0;
              local_88[2] = *local_90;
              uVar2 = FUN_180004290(param_2,(longlong *)(local_88 + 2),0);
              if ((int)uVar2 == 0) {
                FUN_180004330(param_2,local_78,0x20,local_88);
              }
              goto LAB_18000644a;
            }
            uVar4 = uVar4 + 0x20;
          } while (uVar4 - uVar5 < uVar3);
        }
        uVar2 = FUN_180007140(param_1,param_2,uVar6,(ushort *)local_98,'\0');
        if ((int)uVar2 != 0) goto LAB_18000644a;
        param_3 = (ushort)local_98[0];
        uVar2 = FUN_180006e20(param_1,(ushort)local_98[0]);
      } while ((int)uVar2 == 4);
      iVar1 = FUN_180006080(param_1,param_2,1,uVar6,(ushort *)local_98);
      if (iVar1 != 0) break;
      param_3 = (ushort)local_98[0];
      uVar2 = FUN_180008250(param_1,param_2,uVar6,(ushort)local_98[0]);
    } while ((int)uVar2 == 0);
  }
LAB_18000644a:
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_180006620(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  char *pcVar5;
  
  bVar1 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  bVar4 = *(byte *)(param_1 + 0xb);
  if ((bVar4 & 0x10) != 0) {
    *(undefined1 *)((longlong)param_2 + 4) = 0x10;
    bVar1 = 0x10;
    bVar4 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar4 & 1) != 0) {
    *(byte *)((longlong)param_2 + 4) = bVar1 | 1;
  }
  uVar3 = 0;
  pcVar5 = (char *)((longlong)param_2 + 5);
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  *(undefined8 *)((longlong)param_2 + 0xd) = 0;
  *(undefined8 *)((longlong)param_2 + 0x15) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d) = 0;
  do {
    if (pcVar5[(param_1 - (longlong)param_2) + -5] == ' ') break;
    *pcVar5 = pcVar5[(param_1 - (longlong)param_2) + -5];
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    pcVar5 = pcVar5 + 1;
  } while (uVar2 < 8);
  pcVar5 = (char *)(param_1 + 8);
  if (*(char *)(param_1 + 8) != ' ') {
    *(undefined1 *)(uVar3 + 5 + (longlong)param_2) = 0x2e;
    uVar2 = 8;
    uVar3 = (ulonglong)((int)uVar3 + 1);
    do {
      if (*pcVar5 == ' ') break;
      *(char *)(uVar3 + 5 + (longlong)param_2) = *pcVar5;
      uVar2 = uVar2 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      pcVar5 = pcVar5 + 1;
    } while (uVar2 < 0xb);
  }
  *(int *)param_2 = (int)uVar3;
  return;
}




undefined8 FUN_1800066d0(uint param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint local_res18 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 0) {
    local_14 = 0;
    local_18 = param_2;
    uVar1 = FUN_180004290(param_1,(longlong *)&local_18,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1800040b0(param_1,param_4,param_3,local_res18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (param_3 != local_res18[0]) {
      return 5;
    }
  }
  return 0;
}




undefined8 FUN_180006750(uint param_1,undefined4 param_2,uint param_3,void *param_4)

{
  undefined8 uVar1;
  uint local_res18 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 0) {
    local_14 = 0;
    local_18 = param_2;
    uVar1 = FUN_180004290(param_1,(longlong *)&local_18,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180004330(param_1,param_4,param_3,local_res18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (param_3 != local_res18[0]) {
      return 5;
    }
  }
  return 0;
}




void FUN_1800067d0(ushort *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  
  builtin_strncpy(param_2,"           ",0xb);
  uVar4 = 0;
  uVar7 = *param_1;
  uVar3 = (uint)uVar7;
  if (uVar7 != 0) {
    do {
      uVar3 = (uint)uVar7;
      cVar1 = *(char *)(uVar4 + *(longlong *)(param_1 + 4));
      if ((cVar1 == '\\') || (cVar1 == '.')) break;
      if ((uint)uVar4 < 8) {
        cVar6 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar6 = cVar1;
        }
        param_2[uVar4] = cVar6;
      }
      uVar7 = *param_1;
      uVar3 = (uint)uVar7;
      uVar2 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < uVar7);
  }
  if (((uint)uVar4 < uVar3) && (*(char *)(uVar4 + *(longlong *)(param_1 + 4)) == '.')) {
    uVar2 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
    uVar8 = 8;
    if (uVar2 < uVar3) {
      do {
        cVar1 = *(char *)(uVar4 + *(longlong *)(param_1 + 4));
        if (cVar1 == '\\') break;
        if (uVar8 < 0xb) {
          cVar6 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar6 = cVar1;
          }
          uVar5 = (ulonglong)uVar8;
          uVar8 = uVar8 + 1;
          param_2[uVar5] = cVar6;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *param_1);
    }
  }
  if (*param_2 == -0x1b) {
    *param_2 = '\x05';
  }
  *param_1 = *param_1 - (short)uVar4;
  *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar4;
  return;
}




undefined8 FUN_1800068d0(ushort *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  int local_res18 [4];
  
  uVar6 = (uint)param_1[7] * (uint)*param_1;
  uVar2 = uVar6 - *(int *)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xb8) + 0x600U <= uVar6) {
    uVar2 = 0x600;
  }
  uVar5 = 0;
  if ((char)param_1[3] != '\0') {
    iVar4 = 0;
    do {
      pvVar1 = *(void **)(param_1 + 0xbc);
      if (uVar2 != 0) {
        local_res18[1] = 0;
        local_res18[0] = (uint)param_1[2] * (uint)*param_1 + iVar4 + *(int *)(param_1 + 0xb8);
        uVar3 = FUN_180004290(param_2,(longlong *)local_res18,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_180004330(param_2,pvVar1,uVar2,local_res8);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (uVar2 != local_res8[0]) {
          return 5;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + uVar6;
    } while (uVar5 < (byte)param_1[3]);
  }
  *(undefined1 *)(param_1 + 0xb6) = 0;
  return 0;
}




undefined8 FUN_180006c80(ulonglong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  uint local_res8 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar4 = param_1 & 0xffffffff;
  lVar9 = uVar4 * 0x70;
  puVar3 = (ushort *)(&DAT_180023e30)[uVar4 * 0xe];
  uVar2 = (&DAT_180023e24)[uVar4 * 0x1c];
  uVar6 = (uint)(byte)puVar3[1] * (uint)*puVar3;
  if (*(int *)(&DAT_180023e68 + lVar9) == 0) {
    if ((uint)puVar3[4] << 5 < param_2) {
      return 0x1c;
    }
  }
  else {
    uVar1 = *(ushort *)(&DAT_180023e86 + lVar9);
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar1);
    uVar6 = ((param_2 - 1) + uVar6) / uVar6;
    uVar5 = FUN_180006e20(puVar3,uVar1);
    uVar8 = 0;
    uVar10 = 2;
    if (uVar6 != 0) {
      do {
        uVar7 = uVar1;
        if ((int)uVar5 != 4) {
          if (uVar6 <= uVar8) {
            return 0;
          }
          uVar5 = FUN_180006080(puVar3,uVar2,uVar6 - uVar8,uVar10,(ushort *)local_res8);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (*(short *)(&DAT_180023e86 + lVar9) != (short)uVar5) {
            uVar5 = FUN_180008250(puVar3,uVar2,uVar10,(ushort)local_res8[0]);
            if ((int)uVar5 == 0) {
              return 0;
            }
            return uVar5;
          }
          *(ushort *)(&DAT_180023e86 + lVar9) = (ushort)local_res8[0];
          local_res18 = *(undefined4 *)(&DAT_180023e68 + lVar9);
          local_res1c = 0;
          uVar5 = FUN_180004290(uVar2,(longlong *)&local_res18,0);
          if ((int)uVar5 == 0) {
            uVar5 = FUN_180004330(uVar2,&DAT_180023e6c + lVar9,0x20,local_res8);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            if (local_res8[0] == 0x20) {
              return 0;
            }
            return 5;
          }
          return uVar5;
        }
        uVar5 = FUN_180007140(puVar3,uVar2,uVar7,(ushort *)local_res8,'\0');
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        uVar1 = (ushort)local_res8[0];
        uVar5 = FUN_180006e20(puVar3,(ushort)local_res8[0]);
        uVar8 = uVar8 + 1;
        uVar10 = uVar7;
      } while (uVar8 < uVar6);
    }
  }
  return 0;
}




undefined8 FUN_180006e20(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1[5];
  if (param_1[5] == 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  if (((((ulonglong)uVar3 - (ulonglong)param_1[7] * (ulonglong)(byte)param_1[3]) -
       SUB168((ZEXT216(param_1[4]) << 5) / ZEXT216(*param_1),0)) - (ulonglong)param_1[2]) /
      (ulonglong)(byte)param_1[1] < 0xff7) {
    param_2 = param_2 & 0xfff;
    if (param_2 == 0) {
      return 0;
    }
    if ((ushort)(param_2 - 0xff0) < 7) {
      return 1;
    }
    if (param_2 == 0xff7) {
      return 2;
    }
    uVar1 = 0xff8;
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if ((ushort)(param_2 + 0x10) < 7) {
      return 1;
    }
    if (param_2 == 0xfff7) {
      return 2;
    }
    uVar1 = 0xfff8;
  }
  uVar2 = 3;
  if (param_2 < uVar1) {
    uVar2 = 4;
  }
  return uVar2;
}




undefined8 FUN_180006ef0(uint param_1,uint param_2,char param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ushort local_res18 [8];
  
  uVar7 = (ulonglong)param_1;
  puVar2 = (ushort *)(&DAT_180023e30)[uVar7 * 0xe];
  uVar5 = (&DAT_180023e24)[uVar7 * 0x1c];
  uVar8 = (uint)(byte)puVar2[1] * (uint)*puVar2;
  *(uint *)(puVar2 + 0xe) = param_1;
  if (param_3 != '\0') {
    uVar5 = param_1;
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  if (*(int *)(&DAT_180023e68 + uVar7 * 0x70) == 0) {
    puVar2[0x10] = 1;
    puVar2[0x11] = 0;
    *(uint *)(puVar2 + 100) =
         ((uint)puVar2[7] * (uint)(byte)puVar2[3] + (uint)puVar2[2]) * (uint)*puVar2;
    *(uint *)(puVar2 + 0x14) = (uint)puVar2[4] << 5;
    return 0;
  }
  uVar1 = *(ushort *)(&DAT_180023e86 + uVar7 * 0x70);
  local_res18[0] = uVar1;
  uVar3 = FUN_180006e20(puVar2,uVar1);
  iVar4 = (int)uVar3;
  for (uVar6 = uVar8; uVar6 < param_2; uVar6 = uVar6 + uVar8) {
    if ((int)uVar3 != 4) goto LAB_18000711e;
    uVar3 = FUN_180007140(puVar2,uVar5,uVar1,local_res18,param_3);
    uVar1 = local_res18[0];
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180006e20(puVar2,local_res18[0]);
    iVar4 = (int)uVar3;
  }
  if (iVar4 == 4) {
    puVar2[0x10] = 1;
    puVar2[0x11] = 0;
    *(uint *)(puVar2 + 0x12) = uVar6 - uVar8;
    *(uint *)(puVar2 + 0x14) = uVar6;
    *(uint *)(puVar2 + 100) =
         ((uVar1 - 2) * (uint)(byte)puVar2[1] + (uint)puVar2[7] * (uint)(byte)puVar2[3] +
         (uint)puVar2[2]) * (uint)*puVar2 + (uint)puVar2[4] * 0x20;
    uVar3 = FUN_180007140(puVar2,uVar5,uVar1,local_res18,param_3);
    iVar4 = (int)uVar3;
    uVar1 = local_res18[0];
    while (iVar4 == 0) {
      local_res18[0] = uVar1;
      uVar3 = FUN_180006e20(puVar2,uVar1);
      if ((int)uVar3 != 4) goto LAB_18000711e;
      uVar6 = *(uint *)(puVar2 + 0x10);
      uVar7 = (ulonglong)uVar6;
      iVar4 = ((uVar1 - 2) * (uint)(byte)puVar2[1] + (uint)puVar2[7] * (uint)(byte)puVar2[3] +
              (uint)puVar2[2]) * (uint)*puVar2 + (uint)puVar2[4] * 0x20;
      if ((*(int *)(puVar2 + (ulonglong)(uVar6 - 1) * 2 + 100) -
          *(int *)(puVar2 + (ulonglong)(uVar6 - 1) * 2 + 0x12)) +
          *(int *)(puVar2 + uVar7 * 2 + 0x12) == iVar4) {
        *(uint *)(puVar2 + uVar7 * 2 + 0x12) = *(int *)(puVar2 + uVar7 * 2 + 0x12) + uVar8;
      }
      else {
        if (0x28 < uVar6 + 1) goto LAB_18000711e;
        *(uint *)(puVar2 + 0x10) = uVar6 + 1;
        *(int *)(puVar2 + uVar7 * 2 + 100) = iVar4;
        *(uint *)(puVar2 + (ulonglong)*(uint *)(puVar2 + 0x10) * 2 + 0x12) =
             *(int *)(puVar2 + (ulonglong)(*(uint *)(puVar2 + 0x10) - 1) * 2 + 0x12) + uVar8;
      }
      uVar3 = FUN_180007140(puVar2,uVar5,uVar1,local_res18,param_3);
      uVar1 = local_res18[0];
      iVar4 = (int)uVar3;
    }
  }
  else {
LAB_18000711e:
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_180007140(ushort *param_1,uint param_2,ushort param_3,ushort *param_4,char param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint local_res8 [2];
  int local_38 [4];
  
  uVar2 = (uint)param_1[5];
  if (param_1[5] == 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  uVar3 = ((((ulonglong)uVar2 - (ulonglong)param_1[7] * (ulonglong)(byte)param_1[3]) -
           SUB168((ZEXT216(param_1[4]) << 5) / ZEXT216(*param_1),0)) - (ulonglong)param_1[2]) /
          (ulonglong)(byte)param_1[1];
  if (uVar3 < 0xff7) {
    uVar2 = (int)((uint)param_3 + (uint)param_3 * 2) >> 1;
  }
  else {
    uVar2 = (uint)param_3 + (uint)param_3;
  }
  lVar8 = *(longlong *)(param_1 + 0xbc);
  if (((lVar8 == 0) || (uVar6 = *(uint *)(param_1 + 0xb8), uVar2 < uVar6)) ||
     (uVar6 + 0x600 < uVar2 + 1)) {
    *(ulonglong *)(param_1 + 0xbc) =
         (ulonglong)(DAT_18001e020 + 0x17f + (int)param_1 & ~(DAT_18001e020 - 1U));
    if (((param_5 == '\0') && ((char)param_1[0xb6] != '\0')) &&
       (uVar4 = FUN_1800068d0(param_1,param_2), (int)uVar4 != 0)) {
      return uVar4;
    }
    puVar1 = *(undefined8 **)(param_1 + 0xbc);
    local_38[1] = 0;
    iVar7 = (uVar2 / 0x600) * 0x600;
    local_38[0] = (uint)*param_1 * (uint)param_1[2] + iVar7;
    *(int *)(param_1 + 0xb8) = iVar7;
    uVar4 = FUN_180004290(param_2,(longlong *)local_38,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1800040b0(param_2,puVar1,0x600,local_res8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (local_res8[0] != 0x600) {
      return 5;
    }
    uVar6 = *(uint *)(param_1 + 0xb8);
    lVar8 = *(longlong *)(param_1 + 0xbc);
  }
  uVar5 = *(ushort *)((ulonglong)(uVar2 - uVar6) + lVar8);
  *param_4 = uVar5;
  if (uVar3 < 0xff7) {
    if ((param_3 & 1) != 0) {
      uVar5 = uVar5 >> 4;
    }
    *param_4 = uVar5 & 0xfff;
  }
  return 0;
}




void FUN_180007300(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  undefined1 auStackY_d8 [32];
  uint local_98 [2];
  uint *local_90;
  ushort local_88 [4];
  char *local_80;
  ushort *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  char local_50 [8];
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_18001e0e8 ^ (ulonglong)auStackY_d8;
  uVar7 = (ulonglong)*param_3;
  lVar13 = uVar7 * 0x70;
  puVar14 = (uint *)(&DAT_180023e20 + lVar13);
  local_78 = (ushort *)(&DAT_180023e30)[uVar7 * 0xe];
  local_98[0] = (&DAT_180023e24)[uVar7 * 0x1c];
  local_90 = param_3;
  FUN_1800043d0((short *)local_88,param_1);
  puVar1 = (uint *)(&DAT_180023e68 + lVar13);
  uVar7 = 0;
  bVar3 = true;
  *puVar1 = 0;
  uVar12 = 0;
  *(undefined8 *)(&DAT_180023e28 + lVar13) = 0;
  bVar11 = 1;
  if ((*local_80 != '\\') || (local_88[0] != 1)) {
    bVar17 = bVar11;
    if (local_88[0] == 0) {
LAB_180007570:
      if (!bVar3) {
        switch(param_2) {
        case 0:
        case 1:
        case 2:
        case 7:
          break;
        case 3:
        case 5:
          *(undefined8 *)(&DAT_180023e6c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e74 + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e7c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e84 + lVar13) = 0;
          FUN_180008150(local_50,&DAT_180023e6c + lVar13,0);
          iVar6 = FUN_180006330(local_78,local_98[0],uVar12,&DAT_180023e6c + lVar13,puVar1);
          if (iVar6 == 0) {
            *puVar14 = *puVar14 | 5;
          }
          break;
        case 4:
        case 6:
          *(undefined8 *)(&DAT_180023e6c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e74 + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e7c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e84 + lVar13) = 0;
          FUN_180008150(local_50,&DAT_180023e6c + lVar13,0);
          iVar6 = FUN_180006330(local_78,local_98[0],uVar12,&DAT_180023e6c + lVar13,puVar1);
          if (iVar6 == 0) {
            *puVar14 = *puVar14 | 7;
          }
          break;
        case 8:
          *(undefined8 *)(&DAT_180023e6c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e74 + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e7c + lVar13) = 0;
          *(undefined8 *)(&DAT_180023e84 + lVar13) = 0;
          FUN_180008150(local_50,&DAT_180023e6c + lVar13,0x10);
          uVar16 = local_98[0];
          iVar6 = FUN_180006330(local_78,local_98[0],uVar12,&DAT_180023e6c + lVar13,puVar1);
          puVar1 = local_90;
          if ((iVar6 == 0) && (uVar9 = FUN_180006c80((ulonglong)*local_90,0x40), (int)uVar9 == 0)) {
            uVar5 = *puVar1;
            local_64 = 0;
            uStack_5c = 0;
            local_54 = 0;
            local_70 = 0x20202020;
            local_6c = 0x20202020;
            local_68 = 0x10202020;
            lVar2 = (&DAT_180023e30)[(ulonglong)uVar5 * 0xe];
            if ((((uVar5 == *(uint *)(lVar2 + 0x1c)) &&
                 ((*(int *)(lVar2 + 0x24) == 0 &&
                  (*(int *)(lVar2 + 0x24 + (ulonglong)*(uint *)(lVar2 + 0x20) * 4) != 0)))) ||
                (uVar9 = FUN_180006ef0(uVar5,0,'\0'), (int)uVar9 == 0)) &&
               (uVar5 = *(uint *)(lVar2 + 0x20), uVar8 = uVar7, uVar5 != 0)) {
              do {
                uVar15 = (int)uVar8 + 1;
                if (*(int *)(lVar2 + 0x24 + (ulonglong)uVar15 * 4) != 0) {
                  local_90 = (uint *)(ulonglong)
                                     (uint)(*(int *)(lVar2 + 200 + uVar8 * 4) -
                                           *(int *)(lVar2 + 0x24 + uVar8 * 4));
                  local_70 = CONCAT31(local_70._1_3_,0x2e);
                  uStack_5c = CONCAT26(*(undefined2 *)(&DAT_180023e86 + lVar13),
                                       (undefined6)uStack_5c);
                  uVar9 = FUN_180004290(uVar16,(longlong *)&local_90,0);
                  if ((((int)uVar9 == 0) &&
                      (uVar9 = FUN_180004330(uVar16,&local_70,0x20,local_98), (int)uVar9 == 0)) &&
                     (local_98[0] == 0x20)) {
                    uVar5 = *puVar1;
                    lVar13 = (&DAT_180023e30)[(ulonglong)uVar5 * 0xe];
                    if (((((uVar5 == *(uint *)(lVar13 + 0x1c)) && (*(uint *)(lVar13 + 0x24) < 0x21))
                         && (0x20 < *(uint *)(lVar13 + 0x24 +
                                             (ulonglong)*(uint *)(lVar13 + 0x20) * 4))) ||
                        (uVar9 = FUN_180006ef0(uVar5,0x20,'\0'), (int)uVar9 == 0)) &&
                       (uVar5 = *(uint *)(lVar13 + 0x20), uVar5 != 0)) goto LAB_180007860;
                  }
                  break;
                }
                uVar8 = (ulonglong)uVar15;
              } while (uVar15 < uVar5);
            }
          }
        }
        goto switchD_1800075bf_default;
      }
      if (bVar11 != 0) goto LAB_18000757c;
      goto LAB_1800075ab;
    }
    do {
      if (bVar11 == 0) break;
      if (*local_80 == '\\') {
        local_80 = local_80 + 1;
        local_88[0] = local_88[0] - 1;
      }
      (&DAT_180023e40)[lVar13] = 0;
      if (local_88[0] != 0) {
        uVar8 = 0;
        do {
          if (local_80[uVar8] == '\\') break;
          *(char *)(uVar8 + 0x21 + (longlong)puVar14) = local_80[uVar8];
          bVar4 = (&DAT_180023e40)[lVar13] + 1;
          uVar8 = (ulonglong)bVar4;
          (&DAT_180023e40)[lVar13] = bVar4;
        } while (bVar4 < local_88[0]);
      }
      builtin_strncpy(local_50,"        ",8);
      local_48 = 0x2020;
      local_46 = 0x20;
      uVar16 = (uint)local_88[0];
      uVar8 = uVar7;
      if (local_88[0] != 0) {
        do {
          cVar10 = local_80[uVar8];
          if ((cVar10 == '\\') || (cVar10 == '.')) break;
          if ((uint)uVar8 < 8) {
            if ((byte)(cVar10 + 0x9fU) < 0x1a) {
              cVar10 = cVar10 + -0x20;
            }
            local_50[uVar8] = cVar10;
          }
          uVar5 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar5;
        } while (uVar5 < uVar16);
      }
      uVar5 = (uint)uVar8;
      if ((uVar5 < uVar16) && (local_80[uVar8] == '.')) {
        uVar15 = 8;
        while( true ) {
          uVar5 = uVar5 + 1;
          uVar8 = (ulonglong)uVar5;
          if ((uVar16 <= uVar5) || (cVar10 = local_80[uVar8], cVar10 == '\\')) break;
          if (uVar15 < 0xb) {
            if ((byte)(cVar10 + 0x9fU) < 0x1a) {
              cVar10 = cVar10 + -0x20;
            }
            uVar8 = (ulonglong)uVar15;
            uVar15 = uVar15 + 1;
            local_50[uVar8] = cVar10;
          }
        }
      }
      cVar10 = local_50[0];
      if (local_50[0] == -0x1b) {
        cVar10 = '\x05';
      }
      local_80 = local_80 + uVar8;
      local_50[0] = cVar10;
      local_88[0] = local_88[0] - (short)uVar8;
      iVar6 = FUN_180007ad0(local_78,local_98[0],uVar12,local_50,&DAT_180023e6c + lVar13,puVar1,'\0'
                           );
      if (iVar6 == 2) {
        bVar3 = false;
        goto LAB_18000755f;
      }
      if (iVar6 != 0) goto switchD_1800075bf_default;
      bVar17 = (&DAT_180023e77)[lVar13] & 1;
      bVar11 = (byte)(&DAT_180023e77)[lVar13] >> 4 & 1;
      if (bVar11 != 0) {
        uVar12 = *(ushort *)(&DAT_180023e86 + lVar13);
      }
    } while (local_88[0] != 0);
    bVar3 = true;
LAB_18000755f:
    if (local_88[0] == 0) goto LAB_180007570;
switchD_1800075bf_caseD_7:
    goto switchD_1800075bf_default;
  }
  (&DAT_180023e40)[lVar13] = 1;
  local_88[0] = 0;
  (&DAT_180023e41)[lVar13] = *local_80;
  *(undefined8 *)(&DAT_180023e6c + lVar13) = 0;
  bVar17 = 0;
  *(undefined8 *)(&DAT_180023e74 + lVar13) = 0;
  *(undefined8 *)(&DAT_180023e7c + lVar13) = 0;
  *(undefined8 *)(&DAT_180023e84 + lVar13) = 0;
  (&DAT_180023e77)[lVar13] = 0x10;
  *puVar1 = 0;
LAB_18000757c:
  if (-1 < param_2) {
    if (param_2 < 7) goto switchD_1800075bf_default;
    if (param_2 != 7) {
      if (param_2 != 8) goto LAB_1800075ab;
      goto switchD_1800075bf_caseD_3;
    }
switchD_1800075bf_caseD_0:
    *puVar14 = *puVar14 | 3;
    goto switchD_1800075bf_default;
  }
LAB_1800075ab:
  switch(param_2) {
  case 0:
    goto switchD_1800075bf_caseD_0;
  case 1:
    if (bVar17 == 0) {
      *puVar14 = *puVar14 | 5;
    }
    break;
  case 2:
    if (bVar17 == 0) {
      *puVar14 = *puVar14 | 7;
    }
    break;
  case 3:
  case 4:
switchD_1800075bf_caseD_3:
    break;
  case 5:
    goto joined_r0x00018000760f;
  case 6:
joined_r0x00018000760f:
    if ((bVar17 == 0) && (uVar9 = FUN_180008430((ulonglong)*local_90,0), (int)uVar9 == 0)) {
      *puVar14 = *puVar14 | 7;
    }
    break;
  case 7:
  case 8:
    goto switchD_1800075bf_caseD_7;
  }
switchD_1800075bf_default:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_d8);
  return;
  while (uVar7 = (ulonglong)uVar15, uVar15 < uVar5) {
LAB_180007860:
    uVar15 = (int)uVar7 + 1;
    if (0x20 < *(uint *)(lVar13 + 0x24 + (ulonglong)uVar15 * 4)) {
      local_70._0_2_ = CONCAT11(0x2e,(undefined1)local_70);
      uStack_5c = CONCAT26(uVar12,(undefined6)uStack_5c);
      uVar9 = FUN_180006750(uVar16,(*(int *)(lVar13 + 200 + uVar7 * 4) -
                                   *(int *)(lVar13 + 0x24 + uVar7 * 4)) + 0x20,0x20,&local_70);
      if ((int)uVar9 == 0) {
        *puVar14 = *puVar14 | 3;
      }
      break;
    }
  }
  goto switchD_1800075bf_default;
}




void FUN_180007ad0(ushort *param_1,uint param_2,ushort param_3,char *param_4,undefined1 *param_5,
                  uint *param_6,char param_7)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 auStack_3a8 [32];
  uint local_374;
  uint local_370;
  undefined4 local_36c;
  uint *local_368;
  uint local_360;
  undefined4 local_35c;
  undefined1 *local_358;
  undefined1 auStack_349 [769];
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_3a8;
  local_358 = param_5;
  local_368 = param_6;
  puVar12 = (undefined8 *)(ulonglong)((int)auStack_349 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  if (param_3 == 0) {
    uVar9 = 0;
    uVar1 = param_1[4];
    uVar8 = ((uint)param_1[7] * (uint)(byte)param_1[3] + (uint)param_1[2]) * (uint)*param_1;
    uVar10 = uVar8;
    if (uVar1 != 0) {
      while( true ) {
        *local_368 = uVar10;
        local_36c = 0;
        local_370 = uVar10;
        uVar3 = FUN_180004290(param_2,(longlong *)&local_370,0);
        if ((((int)uVar3 != 0) ||
            (iVar2 = FUN_1800040b0(param_2,puVar12,0x200,&local_374), iVar2 != 0)) ||
           (local_374 != 0x200)) break;
        uVar6 = 0;
        pcVar4 = (char *)((longlong)puVar12 + 1);
        do {
          if ((((((((pcVar4[10] & 8U) == 0) && (pcVar4[-1] == *param_4)) && (*pcVar4 == param_4[1]))
                && ((pcVar4[1] == param_4[2] && (pcVar4[2] == param_4[3])))) &&
               ((pcVar4[3] == param_4[4] && ((pcVar4[4] == param_4[5] && (pcVar4[5] == param_4[6])))
                ))) && (pcVar4[6] == param_4[7])) &&
             (((pcVar4[7] == param_4[8] && (pcVar4[8] == param_4[9])) && (pcVar4[9] == param_4[10]))
             )) {
            lVar5 = uVar6 * 0x20;
            *local_358 = *(undefined1 *)(puVar12 + uVar6 * 4);
            local_358[1] = *(undefined1 *)(lVar5 + 1 + (longlong)puVar12);
            local_358[2] = *(undefined1 *)(lVar5 + 2 + (longlong)puVar12);
            local_358[3] = *(undefined1 *)(lVar5 + 3 + (longlong)puVar12);
            local_358[4] = *(undefined1 *)(lVar5 + 4 + (longlong)puVar12);
            local_358[5] = *(undefined1 *)(lVar5 + 5 + (longlong)puVar12);
            local_358[6] = *(undefined1 *)(lVar5 + 6 + (longlong)puVar12);
            local_358[7] = *(undefined1 *)(lVar5 + 7 + (longlong)puVar12);
            local_358[8] = *(undefined1 *)(puVar12 + uVar6 * 4 + 1);
            local_358[9] = *(undefined1 *)(lVar5 + 9 + (longlong)puVar12);
            local_358[10] = *(undefined1 *)(lVar5 + 10 + (longlong)puVar12);
            local_358[0xb] = *(undefined1 *)(lVar5 + 0xb + (longlong)puVar12);
            local_358[0xc] = *(undefined1 *)(lVar5 + 0xc + (longlong)puVar12);
            local_358[0xd] = *(undefined1 *)(lVar5 + 0xd + (longlong)puVar12);
            local_358[0xe] = *(undefined1 *)(lVar5 + 0xe + (longlong)puVar12);
            local_358[0xf] = *(undefined1 *)(lVar5 + 0xf + (longlong)puVar12);
            local_358[0x10] = *(undefined1 *)(puVar12 + uVar6 * 4 + 2);
            local_358[0x11] = *(undefined1 *)(lVar5 + 0x11 + (longlong)puVar12);
            local_358[0x12] = *(undefined1 *)(lVar5 + 0x12 + (longlong)puVar12);
            local_358[0x13] = *(undefined1 *)(lVar5 + 0x13 + (longlong)puVar12);
            local_358[0x14] = *(undefined1 *)(lVar5 + 0x14 + (longlong)puVar12);
            local_358[0x15] = *(undefined1 *)(lVar5 + 0x15 + (longlong)puVar12);
            local_358[0x16] = *(undefined1 *)(lVar5 + 0x16 + (longlong)puVar12);
            local_358[0x17] = *(undefined1 *)(lVar5 + 0x17 + (longlong)puVar12);
            local_358[0x18] = *(undefined1 *)(puVar12 + uVar6 * 4 + 3);
            local_358[0x19] = *(undefined1 *)(lVar5 + 0x19 + (longlong)puVar12);
            local_358[0x1a] = *(undefined1 *)(lVar5 + 0x1a + (longlong)puVar12);
            local_358[0x1b] = *(undefined1 *)(lVar5 + 0x1b + (longlong)puVar12);
            local_358[0x1c] = *(undefined1 *)(lVar5 + 0x1c + (longlong)puVar12);
            local_358[0x1d] = *(undefined1 *)(lVar5 + 0x1d + (longlong)puVar12);
            local_358[0x1e] = *(undefined1 *)(lVar5 + 0x1e + (longlong)puVar12);
            local_358[0x1f] = *(undefined1 *)(lVar5 + 0x1f + (longlong)puVar12);
            *local_368 = (int)uVar6 * 0x20 + uVar9 + uVar8;
            goto LAB_180007f95;
          }
          if (pcVar4[-1] == '\0') goto LAB_180007f95;
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
          pcVar4 = pcVar4 + 0x20;
        } while (uVar7 < 0x10);
        uVar9 = uVar9 + 0x200;
        uVar10 = uVar10 + 0x200;
        if ((uint)uVar1 << 5 <= uVar9) break;
      }
    }
  }
  else {
    uVar10 = (uint)(byte)param_1[1] * (uint)*param_1;
    local_374 = CONCAT22(local_374._2_2_,param_3);
    uVar3 = FUN_180006e20(param_1,param_3);
    iVar2 = (int)uVar3;
    while (iVar2 == 4) {
      uVar7 = 0;
      uVar9 = ((param_3 - 2) * (uint)(byte)param_1[1] + (uint)param_1[7] * (uint)(byte)param_1[3] +
              (uint)param_1[2]) * (uint)*param_1 + (uint)param_1[4] * 0x20;
      uVar8 = uVar9;
      if (uVar10 != 0) {
        do {
          local_35c = 0;
          *local_368 = uVar8;
          local_360 = uVar8;
          uVar3 = FUN_180004290(param_2,(longlong *)&local_360,0);
          if ((((int)uVar3 != 0) ||
              (iVar2 = FUN_1800040b0(param_2,puVar12,0x200,&local_370), iVar2 != 0)) ||
             (local_370 != 0x200)) goto LAB_180007f95;
          pcVar4 = (char *)((longlong)puVar12 + 2);
          uVar11 = 0;
          do {
            if (((((pcVar4[-2] == *param_4) && (pcVar4[-1] == param_4[1])) &&
                 ((*pcVar4 == param_4[2] && ((pcVar4[1] == param_4[3] && (pcVar4[2] == param_4[4])))
                  ))) && ((pcVar4[3] == param_4[5] &&
                          (((pcVar4[4] == param_4[6] && (pcVar4[5] == param_4[7])) &&
                           (pcVar4[6] == param_4[8])))))) &&
               ((pcVar4[7] == param_4[9] && (pcVar4[8] == param_4[10])))) {
              uVar6 = (ulonglong)uVar11;
              lVar5 = uVar6 * 0x20;
              *local_358 = *(undefined1 *)(puVar12 + uVar6 * 4);
              local_358[1] = *(undefined1 *)(lVar5 + 1 + (longlong)puVar12);
              local_358[2] = *(undefined1 *)(lVar5 + 2 + (longlong)puVar12);
              local_358[3] = *(undefined1 *)(lVar5 + 3 + (longlong)puVar12);
              local_358[4] = *(undefined1 *)(lVar5 + 4 + (longlong)puVar12);
              local_358[5] = *(undefined1 *)(lVar5 + 5 + (longlong)puVar12);
              local_358[6] = *(undefined1 *)(lVar5 + 6 + (longlong)puVar12);
              local_358[7] = *(undefined1 *)(lVar5 + 7 + (longlong)puVar12);
              local_358[8] = *(undefined1 *)(puVar12 + uVar6 * 4 + 1);
              local_358[9] = *(undefined1 *)(lVar5 + 9 + (longlong)puVar12);
              local_358[10] = *(undefined1 *)(lVar5 + 10 + (longlong)puVar12);
              local_358[0xb] = *(undefined1 *)(lVar5 + 0xb + (longlong)puVar12);
              local_358[0xc] = *(undefined1 *)(lVar5 + 0xc + (longlong)puVar12);
              local_358[0xd] = *(undefined1 *)(lVar5 + 0xd + (longlong)puVar12);
              local_358[0xe] = *(undefined1 *)(lVar5 + 0xe + (longlong)puVar12);
              local_358[0xf] = *(undefined1 *)(lVar5 + 0xf + (longlong)puVar12);
              local_358[0x10] = *(undefined1 *)(puVar12 + uVar6 * 4 + 2);
              local_358[0x11] = *(undefined1 *)(lVar5 + 0x11 + (longlong)puVar12);
              local_358[0x12] = *(undefined1 *)(lVar5 + 0x12 + (longlong)puVar12);
              local_358[0x13] = *(undefined1 *)(lVar5 + 0x13 + (longlong)puVar12);
              local_358[0x14] = *(undefined1 *)(lVar5 + 0x14 + (longlong)puVar12);
              local_358[0x15] = *(undefined1 *)(lVar5 + 0x15 + (longlong)puVar12);
              local_358[0x16] = *(undefined1 *)(lVar5 + 0x16 + (longlong)puVar12);
              local_358[0x17] = *(undefined1 *)(lVar5 + 0x17 + (longlong)puVar12);
              local_358[0x18] = *(undefined1 *)(puVar12 + uVar6 * 4 + 3);
              local_358[0x19] = *(undefined1 *)(lVar5 + 0x19 + (longlong)puVar12);
              local_358[0x1a] = *(undefined1 *)(lVar5 + 0x1a + (longlong)puVar12);
              local_358[0x1b] = *(undefined1 *)(lVar5 + 0x1b + (longlong)puVar12);
              local_358[0x1c] = *(undefined1 *)(lVar5 + 0x1c + (longlong)puVar12);
              local_358[0x1d] = *(undefined1 *)(lVar5 + 0x1d + (longlong)puVar12);
              local_358[0x1e] = *(undefined1 *)(lVar5 + 0x1e + (longlong)puVar12);
              local_358[0x1f] = *(undefined1 *)(lVar5 + 0x1f + (longlong)puVar12);
              *local_368 = uVar11 * 0x20 + uVar7 + uVar9;
              goto LAB_180007f95;
            }
            if (pcVar4[-2] == '\0') goto LAB_180007f95;
            uVar11 = uVar11 + 1;
            pcVar4 = pcVar4 + 0x20;
          } while (uVar11 < 0x10);
          uVar7 = uVar7 + 0x200;
          uVar8 = uVar8 + 0x200;
        } while (uVar7 < uVar10);
      }
      uVar3 = FUN_180007140(param_1,param_2,param_3,(ushort *)&local_374,param_7);
      if ((int)uVar3 != 0) break;
      param_3 = (ushort)local_374;
      uVar3 = FUN_180006e20(param_1,(ushort)local_374);
      iVar2 = (int)uVar3;
    }
  }
LAB_180007f95:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_3a8);
  return;
}




void FUN_180008150(undefined1 *param_1,undefined1 *param_2,byte param_3)

{
  short *psVar1;
  ushort uVar2;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xb] = param_3 | 0x20;
  psVar1 = (short *)FUN_180003b10();
  *(ushort *)(param_2 + 0x16) =
       *(ushort *)(param_2 + 0x16) ^ (psVar1[5] / 2 ^ *(ushort *)(param_2 + 0x16)) & 0x1f;
  uVar2 = (psVar1[4] << 5 ^ *(ushort *)(param_2 + 0x16)) & 0x7e0 ^ *(ushort *)(param_2 + 0x16);
  *(ushort *)(param_2 + 0x16) = uVar2;
  *(ushort *)(param_2 + 0x16) = psVar1[3] << 0xb | uVar2 & 0x7ff;
  *(ushort *)(param_2 + 0x18) =
       *(ushort *)(param_2 + 0x18) ^ (psVar1[2] ^ *(ushort *)(param_2 + 0x18)) & 0x1f;
  uVar2 = (psVar1[1] << 5 ^ *(ushort *)(param_2 + 0x18)) & 0x1e0 ^ *(ushort *)(param_2 + 0x18);
  *(ushort *)(param_2 + 0x18) = uVar2;
  *(ushort *)(param_2 + 0x18) = (*psVar1 + -0x3c) * 0x200 | uVar2 & 0x1ff;
  return;
}




undefined8 FUN_180008250(ushort *param_1,uint param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint local_res8 [2];
  int local_38 [4];
  
  uVar3 = (uint)param_1[5];
  if (param_1[5] == 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  uVar4 = ((((ulonglong)uVar3 - (ulonglong)param_1[7] * (ulonglong)(byte)param_1[3]) -
           SUB168((ZEXT216(param_1[4]) << 5) / ZEXT216(*param_1),0)) - (ulonglong)param_1[2]) /
          (ulonglong)(byte)param_1[1];
  if (uVar4 < 0xff7) {
    uVar3 = (int)((uint)param_3 + (uint)param_3 * 2) >> 1;
  }
  else {
    uVar3 = (uint)param_3 + (uint)param_3;
  }
  lVar6 = *(longlong *)(param_1 + 0xbc);
  if (((lVar6 == 0) || (uVar3 < *(uint *)(param_1 + 0xb8))) ||
     (*(uint *)(param_1 + 0xb8) + 0x600 < uVar3 + 1)) {
    *(ulonglong *)(param_1 + 0xbc) =
         (ulonglong)(DAT_18001e020 + 0x17f + (int)param_1 & ~(DAT_18001e020 - 1U));
    if (((char)param_1[0xb6] != '\0') && (uVar5 = FUN_1800068d0(param_1,param_2), (int)uVar5 != 0))
    {
      return uVar5;
    }
    puVar2 = *(undefined8 **)(param_1 + 0xbc);
    local_38[1] = 0;
    iVar7 = (uVar3 / 0x600) * 0x600;
    local_38[0] = (uint)param_1[2] * (uint)*param_1 + iVar7;
    *(int *)(param_1 + 0xb8) = iVar7;
    uVar5 = FUN_180004290(param_2,(longlong *)local_38,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_1800040b0(param_2,puVar2,0x600,local_res8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_res8[0] != 0x600) {
      return 5;
    }
    lVar6 = *(longlong *)(param_1 + 0xbc);
  }
  if (uVar4 < 0xff7) {
    lVar6 = *(longlong *)(param_1 + 0xbc);
    uVar1 = *(ushort *)((ulonglong)(uVar3 - *(int *)(param_1 + 0xb8)) + lVar6);
    if ((param_3 & 1) == 0) {
      param_4 = (param_4 ^ uVar1) & 0xfff ^ uVar1;
    }
    else {
      param_4 = uVar1 & 0xf | param_4 << 4;
    }
  }
  *(ushort *)((ulonglong)(uVar3 - *(int *)(param_1 + 0xb8)) + lVar6) = param_4;
  *(undefined1 *)(param_1 + 0xb6) = 1;
  return 0;
}




undefined8 FUN_180008430(ulonglong param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  ushort local_res8 [4];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  
  uVar4 = param_1 & 0xffffffff;
  lVar10 = uVar4 * 0x70;
  puVar2 = (ushort *)(&DAT_180023e30)[uVar4 * 0xe];
  uVar1 = (&DAT_180023e24)[uVar4 * 0x1c];
  uVar7 = (uint)(byte)puVar2[1] * (uint)*puVar2;
  if (*(int *)(&DAT_180023e68 + lVar10) == 0) {
    return 0;
  }
  uVar9 = *(ushort *)(&DAT_180023e86 + lVar10);
  uVar7 = (param_2 + -1 + uVar7) / uVar7;
  local_res8[0] = uVar9;
  uVar5 = FUN_180006e20(puVar2,uVar9);
  iVar3 = (int)uVar5;
  uVar11 = 0;
  if (uVar7 != 0) {
    do {
      uVar8 = uVar9;
      if ((int)uVar5 != 4) {
        return 0;
      }
      uVar5 = FUN_180007140(puVar2,uVar1,uVar8,local_res8,'\0');
      uVar9 = local_res8[0];
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = FUN_180006e20(puVar2,local_res8[0]);
      uVar11 = uVar11 + 1;
      iVar3 = (int)uVar5;
    } while (uVar11 < uVar7);
    if (uVar8 != 0) {
      if ((iVar3 != 3) && (uVar5 = FUN_180008250(puVar2,uVar1,uVar8,0xffff), (int)uVar5 != 0)) {
        return uVar5;
      }
      goto joined_r0x000180008514;
    }
  }
  if (*(short *)(&DAT_180023e86 + lVar10) != 0) {
    puVar12 = &DAT_180023e6c + lVar10;
    FUN_180008150(puVar12,puVar12,0);
    local_res20 = *(undefined4 *)(&DAT_180023e68 + lVar10);
    *(undefined2 *)(&DAT_180023e86 + lVar10) = 0;
    *(undefined4 *)(&DAT_180023e88 + lVar10) = 0;
    local_res24 = 0;
    uVar5 = FUN_180004290(uVar1,(longlong *)&local_res20,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_180004330(uVar1,puVar12,0x20,local_res18);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_res18[0] != 0x20) {
      return 5;
    }
  }
joined_r0x000180008514:
  while( true ) {
    if (iVar3 != 4) {
      return 0;
    }
    uVar5 = FUN_180007140(puVar2,uVar1,uVar9,local_res8,'\0');
    uVar8 = local_res8[0];
    if ((int)uVar5 != 0) break;
    uVar5 = FUN_180006e20(puVar2,local_res8[0]);
    uVar6 = FUN_180008250(puVar2,uVar1,uVar9,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    iVar3 = (int)uVar5;
    uVar9 = uVar8;
  }
  return uVar5;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008620(uint param_1,short *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 auStack_1a8 [32];
  uint local_188 [2];
  longlong local_180 [43];
  ulonglong local_28;
  
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStack_1a8;
  memset(param_2,0,0x9e0);
  local_180[0] = 0;
  pcVar10 = (char *)(ulonglong)((int)local_180 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar9 = FUN_180004290(param_1,local_180,0);
  if ((((int)uVar9 == 0) &&
      (iVar8 = FUN_1800040b0(param_1,(undefined8 *)pcVar10,0x4e,local_188), iVar8 == 0)) &&
     (local_188[0] == 0x4e)) {
    sVar3 = *(short *)(pcVar10 + 0xb);
    *param_2 = sVar3;
    bVar1 = pcVar10[0xd];
    *(byte *)(param_2 + 1) = bVar1;
    sVar4 = *(short *)(pcVar10 + 0xe);
    param_2[2] = sVar4;
    cVar2 = pcVar10[0x10];
    *(char *)(param_2 + 3) = cVar2;
    sVar5 = *(short *)(pcVar10 + 0x11);
    param_2[4] = sVar5;
    sVar6 = *(short *)(pcVar10 + 0x13);
    param_2[5] = sVar6;
    *(char *)(param_2 + 6) = pcVar10[0x15];
    sVar7 = *(short *)(pcVar10 + 0x16);
    param_2[7] = sVar7;
    param_2[8] = *(short *)(pcVar10 + 0x18);
    param_2[9] = *(short *)(pcVar10 + 0x1a);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(pcVar10 + 0x1c);
    iVar8 = *(int *)(pcVar10 + 0x20);
    *(int *)(param_2 + 0xc) = iVar8;
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(pcVar10 + 0x24);
    param_2[0x10] = *(short *)(pcVar10 + 0x28);
    param_2[0x11] = *(short *)(pcVar10 + 0x2a);
    *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(pcVar10 + 0x2c);
    param_2[0x14] = *(short *)(pcVar10 + 0x30);
    param_2[0x15] = *(short *)(pcVar10 + 0x32);
    if (((((*pcVar10 + 0x17U & 0xfd) == 0) &&
         (((sVar3 == 0x80 || (sVar3 == 0x100)) || ((sVar3 == 0x200 || (sVar3 == 0x400)))))) &&
        ((((byte)(bVar1 - 1) < 0x40 &&
          ((0x800000008000808bU >> ((ulonglong)(bVar1 - 1) & 0x3f) & 1) != 0)) || (bVar1 == 0x80))))
       && (((((sVar4 != 0 && (cVar2 != '\0')) && (sVar5 == 0)) && ((sVar6 == 0 && (iVar8 != 0)))) &&
           ((sVar7 == 0 && (*(int *)(param_2 + 0xe) != 0)))))) {
      _DAT_180026150 = FUN_180005190;
      _DAT_180026140 = &LAB_180004a10;
      _DAT_180026158 = &LAB_1800054e0;
      _DAT_180026168 = &LAB_180005b00;
      _DAT_180026170 = &LAB_180005e30;
      _DAT_180026178 = &LAB_180004d10;
      _DAT_180026180 = FUN_180005b40;
      _DAT_180026188 = FUN_180005680;
      _DAT_180026190 = &LAB_180004ad0;
      _DAT_180026198 = L"fat32";
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1a8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800088a0(uint param_1,short *param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 auStack_198 [32];
  uint local_178 [2];
  longlong local_170 [41];
  ulonglong local_28;
  
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStack_198;
  memset(param_2,0,0x880);
  pcVar11 = (char *)(ulonglong)((int)local_170 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  local_170[0] = 0;
  uVar10 = FUN_180004290(param_1,local_170,0);
  if ((((int)uVar10 == 0) &&
      (iVar9 = FUN_1800040b0(param_1,(undefined8 *)pcVar11,0x3e,local_178), iVar9 == 0)) &&
     (local_178[0] == 0x3e)) {
    sVar3 = *(short *)(pcVar11 + 0xb);
    *param_2 = sVar3;
    cVar1 = pcVar11[0xd];
    *(char *)(param_2 + 1) = cVar1;
    sVar4 = *(short *)(pcVar11 + 0xe);
    param_2[2] = sVar4;
    cVar2 = pcVar11[0x10];
    *(char *)(param_2 + 3) = cVar2;
    sVar5 = *(short *)(pcVar11 + 0x11);
    param_2[4] = sVar5;
    sVar6 = *(short *)(pcVar11 + 0x13);
    param_2[5] = sVar6;
    *(char *)(param_2 + 6) = pcVar11[0x15];
    sVar7 = *(short *)(pcVar11 + 0x16);
    param_2[7] = sVar7;
    param_2[8] = *(short *)(pcVar11 + 0x18);
    param_2[9] = *(short *)(pcVar11 + 0x1a);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(pcVar11 + 0x1c);
    iVar9 = *(int *)(pcVar11 + 0x20);
    *(int *)(param_2 + 0xc) = iVar9;
    if (((((*pcVar11 + 0x17U & 0xfd) == 0) &&
         (((sVar3 == 0x80 || (sVar3 == 0x100)) || ((sVar3 == 0x200 || (sVar3 == 0x400)))))) &&
        ((((byte)(cVar1 - 1U) < 0x40 &&
          ((0x800000008000808bU >> ((ulonglong)(byte)(cVar1 - 1U) & 0x3f) & 1) != 0)) ||
         (cVar1 == -0x80)))) && (((sVar4 != 0 && (cVar2 != '\0')) && (sVar5 != 0)))) {
      if (sVar6 == 0) {
        if (iVar9 == 0) goto LAB_1800089fb;
      }
      else if (iVar9 != 0) goto LAB_1800089fb;
      if (((sVar7 != 0) && (bVar8 = (char)param_2[6] + 0x10, bVar8 < 0x10)) &&
         ((0xf301U >> (bVar8 & 0x1f) & 1) != 0)) {
        _DAT_180026150 = FUN_180007300;
        _DAT_180026140 = FUN_1800062d0;
        _DAT_180026158 = &LAB_180007920;
        _DAT_180026168 = &LAB_180008110;
        _DAT_180026170 = &LAB_180005e30;
        _DAT_180026178 = &LAB_180006bd0;
        _DAT_180026180 = FUN_180005b40;
        _DAT_180026188 = FUN_180005680;
        _DAT_180026190 = &LAB_1800069b0;
        _DAT_180026198 = L"fastfat";
      }
    }
  }
LAB_1800089fb:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_198);
  return;
}




undefined4 * FUN_180008ae0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = param_2;
  return param_1;
}




void FUN_180008af0(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(param_1 + 2))();
    *param_1 = 0;
  }
  return;
}




void FUN_180008bc0(int param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auStack_658 [32];
  uint local_638 [2];
  int local_630;
  undefined4 local_62c [192];
  undefined1 auStack_329 [769];
  ulonglong local_28;
  
  lVar2 = DAT_180026128;
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStack_658;
  uVar9 = 0;
  local_630 = param_1 << 9;
  uVar8 = *(uint *)(DAT_180026120 + 4);
  local_62c[0] = 0;
  piVar10 = (int *)(ulonglong)((int)local_62c + 3 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  piVar11 = (int *)(ulonglong)((int)auStack_329 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar5 = FUN_180004290(uVar8,(longlong *)&local_630,0);
  if (((((int)uVar5 == 0) &&
       (iVar3 = FUN_1800040b0(uVar8,(undefined8 *)piVar10,0x200,local_638), iVar3 == 0)) &&
      (local_638[0] == 0x200)) && (*piVar10 == -0x81bf552)) {
    piVar12 = piVar10 + 0xe;
    puVar13 = (uint *)(piVar10 + 0x10);
    local_638[0] = 0x200;
    cVar1 = (char)*piVar12;
    puVar14 = puVar13;
    while (cVar1 < '\0') {
      uVar6 = uVar9;
      puVar7 = puVar14;
      if (*(byte *)((longlong)piVar12 + 5) != 0) {
        do {
          if (param_2 < *puVar7) {
            local_62c[0] = 0;
            local_630 = puVar14[uVar6 * 2 + 1] << 9;
            uVar5 = FUN_180004290(uVar8,(longlong *)&local_630,0);
            if ((((int)uVar5 != 0) ||
                (iVar3 = FUN_1800040b0(uVar8,(undefined8 *)piVar11,0x200,local_638), iVar3 != 0)) ||
               ((local_638[0] != 0x200 || (*piVar11 != 0x37e40aae)))) goto LAB_180008d6a;
            puVar13 = (uint *)(piVar11 + 5);
            piVar12 = piVar11 + 3;
            puVar14 = puVar13;
            break;
          }
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
          puVar7 = puVar7 + 2;
        } while (uVar4 < *(byte *)((longlong)piVar12 + 5));
      }
      cVar1 = (char)*piVar12;
    }
    *(uint *)(lVar2 + 4) = (uint)*(byte *)((longlong)piVar12 + 5);
    if (*(char *)((longlong)piVar12 + 5) != '\0') {
      do {
        puVar14 = puVar13 + uVar9 * 3;
        *(uint *)(lVar2 + 8 + uVar9 * 4) = puVar13[uVar9 * 3];
        *(uint *)(lVar2 + 0xac + uVar9 * 4) = puVar14[2];
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *(uint *)(lVar2 + 8 + uVar9 * 4) = puVar14[1] + *puVar14;
      } while (uVar8 < *(byte *)((longlong)piVar12 + 5));
    }
  }
LAB_180008d6a:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_658);
  return;
}




void FUN_180008da0(char *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined1 auStackY_398 [32];
  byte local_368 [4];
  uint local_364 [3];
  ushort local_358;
  undefined6 uStack_356;
  char *pcStack_350;
  longlong local_348 [2];
  undefined8 local_338;
  char *apcStack_330 [97];
  ulonglong local_28;
  
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStackY_398;
  uVar7 = (ulonglong)*param_3;
  local_348[0] = 0x2000;
  DAT_180026120 = (uint *)(&DAT_180023e20 + uVar7 * 0x70);
  DAT_180026128 = (uint *)(&DAT_180023e30)[uVar7 * 0xe];
  uVar1 = (&DAT_180023e24)[uVar7 * 0x1c];
  piVar9 = (int *)(ulonglong)((int)apcStack_330 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar8 = FUN_180004290(uVar1,local_348,0);
  pcVar3 = apcStack_330[0];
  if (((((int)uVar8 == 0) &&
       (iVar5 = FUN_1800040b0(uVar1,(undefined8 *)piVar9,0x200,local_364), pcVar3 = apcStack_330[0],
       iVar5 == 0)) && (local_364[0] == 0x200)) &&
     ((*piVar9 == -0x66a17b7 && (piVar9[1] == -0x5ac163b)))) {
    uVar1 = piVar9[3];
    local_364[0] = uVar1;
    FUN_1800043d0((short *)&local_358,param_1);
    pcVar4 = pcStack_350;
    pcVar3 = apcStack_330[0];
    do {
      apcStack_330[0] = pcVar4;
      pcStack_350 = apcStack_330[0];
      if (local_358 == 0) goto LAB_180008ff4;
      *(undefined1 *)(DAT_180026120 + 8) = 0;
      bVar2 = (byte)DAT_180026120[8];
      while (bVar2 < local_358) {
        if (apcStack_330[0][bVar2] == '\\') break;
        *(char *)((ulonglong)bVar2 + 0x21 + (longlong)DAT_180026120) = apcStack_330[0][bVar2];
        *(char *)(DAT_180026120 + 8) = (char)DAT_180026120[8] + '\x01';
        bVar2 = (byte)DAT_180026120[8];
      }
      if (*apcStack_330[0] == '\\') {
        apcStack_330[0] = apcStack_330[0] + 1;
        local_358 = local_358 - 1;
      }
      uVar7 = 0;
      if (local_358 != 0) {
        do {
          if (apcStack_330[0][uVar7] == '\\') break;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < local_358);
      }
      local_358 = local_358 - (short)uVar7;
      pcStack_350 = apcStack_330[0] + uVar7;
      local_338 = CONCAT62(uStack_356,(short)uVar7);
      iVar5 = FUN_1800091d0(uVar1,(ushort *)&local_338,local_368,local_364,(undefined4 *)local_348);
      uVar1 = local_364[0];
      pcVar3 = apcStack_330[0];
      if (iVar5 != 0) goto LAB_180008ff4;
      pcVar4 = pcStack_350;
    } while (local_368[0] != 0);
    if ((local_358 == 0) &&
       (iVar5 = FUN_180008bc0(local_364[0],0), pcVar3 = apcStack_330[0], iVar5 == 0)) {
      *DAT_180026128 = uVar1;
      DAT_180026120[0x12] = (uint)local_348[0];
      *DAT_180026120 = *DAT_180026120 | 1;
      *DAT_180026120 = *DAT_180026120 | 2;
      DAT_180026120[2] = 0;
      DAT_180026120[3] = 0;
    }
  }
LAB_180008ff4:
  apcStack_330[0] = pcVar3;
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_398);
  return;
}




undefined8 FUN_180009020(ulonglong param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  uint local_res20 [2];
  
  uVar4 = param_1 & 0xffffffff;
  DAT_180026120 = &DAT_180023e20 + uVar4 * 0x70;
  DAT_180026128 = (int *)(&DAT_180023e30)[uVar4 * 0xe];
  uVar1 = (&DAT_180023e24)[uVar4 * 0x1c];
  *param_4 = 0;
  puVar6 = DAT_180026120;
  if (param_3 == 0) {
LAB_1800091b4:
    uVar5 = 0;
  }
  else {
    while( true ) {
      piVar2 = DAT_180026128;
      uVar7 = *(uint *)(puVar6 + 8) >> 9;
      if (((uVar7 < (uint)DAT_180026128[2]) ||
          ((uint)DAT_180026128[(ulonglong)(uint)DAT_180026128[1] + 2] <= uVar7)) &&
         (uVar5 = FUN_180008bc0(*DAT_180026128,uVar7), puVar6 = DAT_180026120, (int)uVar5 != 0)) {
        return uVar5;
      }
      uVar4 = 0;
      if (piVar2[1] == 0) break;
      while( true ) {
        uVar10 = (int)uVar4 + 1;
        if (uVar7 < (uint)piVar2[(ulonglong)uVar10 + 2]) break;
        uVar4 = (ulonglong)uVar10;
        if ((uint)piVar2[1] <= uVar10) goto LAB_1800090d7;
      }
      iVar9 = (piVar2[uVar4 + 0x2b] - piVar2[uVar4 + 2]) + uVar7;
      uVar7 = (piVar2[(ulonglong)uVar10 + 2] - uVar7) * 0x200 - (*(uint *)(puVar6 + 8) & 0x1ff);
      while (uVar7 != 0) {
        uVar10 = *(uint *)(puVar6 + 8);
        uVar3 = 0x8000;
        if (param_3 < 0x8000) {
          uVar3 = param_3;
        }
        uVar8 = uVar7;
        if (uVar3 < uVar7) {
          uVar8 = uVar3;
        }
        if ((*(uint *)(puVar6 + 0x48) <= uVar10 + uVar8) &&
           (uVar8 = *(uint *)(puVar6 + 0x48) - uVar10, param_3 = uVar8, uVar8 == 0))
        goto LAB_1800091b4;
        if (uVar8 != 0) {
          local_res20[1] = 0;
          local_res20[0] = uVar10 & 0x1ff | iVar9 << 9;
          uVar5 = FUN_180004290(uVar1,(longlong *)local_res20,0);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          uVar5 = FUN_1800040b0(uVar1,param_2,uVar8,local_res8);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          puVar6 = DAT_180026120;
          if (uVar8 != local_res8[0]) goto LAB_1800090d7;
        }
        *(uint *)(puVar6 + 8) = *(int *)(puVar6 + 8) + uVar8;
        *param_4 = *param_4 + uVar8;
        uVar7 = uVar7 - uVar8;
        iVar9 = iVar9 + (uVar8 >> 9);
        param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar8);
        param_3 = param_3 - uVar8;
        puVar6 = DAT_180026120;
        if (param_3 == 0) goto LAB_1800091b4;
      }
    }
LAB_1800090d7:
    uVar5 = 5;
  }
  return uVar5;
}




void FUN_1800091d0(int param_1,ushort *param_2,byte *param_3,undefined4 *param_4,undefined4 *param_5
                  )

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  int *piVar11;
  ushort uVar12;
  uint uVar13;
  int *piVar14;
  byte bVar15;
  ushort *puVar16;
  undefined1 auStack_ca8 [32];
  uint local_c88 [2];
  int local_c80 [4];
  ushort *local_c70;
  int *local_c68;
  byte *local_c60;
  undefined4 *local_c58;
  undefined4 *local_c50 [96];
  undefined1 auStack_949 [2305];
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_ca8;
  local_c80[0] = param_1 << 9;
  local_c50[0] = param_5;
  piVar14 = (int *)(ulonglong)((int)auStack_949 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar13 = *(uint *)(DAT_180026120 + 4);
  piVar11 = (int *)(ulonglong)((int)local_c50 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  local_c80[1] = 0;
  local_c80[2] = uVar13;
  local_c70 = param_2;
  local_c68 = piVar14;
  local_c60 = param_3;
  local_c58 = param_4;
  uVar7 = FUN_180004290(uVar13,(longlong *)local_c80,0);
  if (((((int)uVar7 == 0) &&
       (iVar4 = FUN_1800040b0(uVar13,(undefined8 *)piVar11,0x200,local_c88), iVar4 == 0)) &&
      (local_c88[0] == 0x200)) && (*piVar11 == -0x81bf552)) {
    iVar4 = piVar11[0x12];
    while( true ) {
      local_c80[1] = 0;
      local_c80[0] = iVar4 << 9;
      uVar7 = FUN_180004290(uVar13,(longlong *)local_c80,0);
      if ((((int)uVar7 != 0) ||
          (iVar5 = FUN_1800040b0(uVar13,(undefined8 *)piVar14,0x800,local_c88), iVar5 != 0)) ||
         ((local_c88[0] != 0x800 || (*piVar14 != 0x77e40aae)))) break;
      uVar2 = *param_2;
      puVar16 = (ushort *)(piVar14 + 5);
      bVar3 = false;
      do {
        uVar12 = (ushort)(byte)puVar16[0xf];
        uVar13 = (uint)uVar2;
        if (uVar12 <= uVar2) {
          uVar13 = (uint)(byte)puVar16[0xf];
        }
        uVar8 = 0;
        if (uVar13 != 0) {
          do {
            bVar10 = *(byte *)(uVar8 + 0x1f + (longlong)puVar16);
            bVar1 = *(byte *)(uVar8 + *(longlong *)(param_2 + 4));
            bVar15 = bVar10 - 0x20;
            if (0x19 < (byte)(bVar10 + 0x9f)) {
              bVar15 = bVar10;
            }
            bVar9 = bVar1 - 0x20;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              bVar9 = bVar1;
            }
            if (bVar9 < bVar15) goto LAB_1800093f4;
            bVar15 = bVar10 - 0x20;
            if (0x19 < (byte)(bVar10 + 0x9f)) {
              bVar15 = bVar10;
            }
            bVar10 = bVar1 - 0x20;
            if (0x19 < (byte)(bVar1 + 0x9f)) {
              bVar10 = bVar1;
            }
            if (bVar15 < bVar10) goto LAB_180009407;
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar6;
          } while (uVar6 < uVar13);
        }
        if (uVar2 < uVar12) {
LAB_1800093f4:
          if ((puVar16[1] & 4) == 0) goto LAB_180009456;
          bVar3 = true;
          iVar4 = *(int *)(((ulonglong)*puVar16 - 4) + (longlong)puVar16);
        }
        else if (uVar2 <= uVar12) {
          *local_c60 = *(byte *)((longlong)puVar16 + 3) >> 4 & 1;
          *local_c58 = *(undefined4 *)(puVar16 + 2);
          *local_c50[0] = *(undefined4 *)(puVar16 + 6);
          goto LAB_180009456;
        }
LAB_180009407:
        puVar16 = (ushort *)((longlong)puVar16 + (ulonglong)*puVar16);
        piVar14 = local_c68;
        param_2 = local_c70;
        uVar13 = local_c80[2];
      } while (!bVar3);
    }
  }
LAB_180009456:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_ca8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800094c0(uint param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_648 [32];
  uint local_628 [2];
  longlong local_620 [96];
  undefined1 auStack_319 [769];
  ulonglong local_18;
  
  local_18 = DAT_18001e0e8 ^ (ulonglong)auStack_648;
  DAT_180026128 = param_2;
  memset(param_2,0,0x150);
  local_620[0] = 0x2000;
  piVar4 = (int *)(ulonglong)((int)local_620 + 7 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  piVar3 = (int *)(ulonglong)((int)auStack_319 + DAT_18001e020 & ~(DAT_18001e020 - 1U));
  uVar2 = FUN_180004290(param_1,local_620,0);
  if ((((int)uVar2 == 0) &&
      (iVar1 = FUN_1800040b0(param_1,(undefined8 *)piVar4,0x200,local_628), iVar1 == 0)) &&
     (local_628[0] == 0x200)) {
    local_620[0] = 0x2200;
    uVar2 = FUN_180004290(param_1,local_620,0);
    if ((((((int)uVar2 == 0) &&
          (iVar1 = FUN_1800040b0(param_1,(undefined8 *)piVar3,0x200,local_628), iVar1 == 0)) &&
         ((local_628[0] == 0x200 && ((*piVar4 == -0x66a17b7 && (piVar4[1] == -0x5ac163b)))))) &&
        (*piVar3 == -0x66ee7b7)) && (piVar3[1] == -0x5add63b)) {
      _DAT_1800260d0 = FUN_180008da0;
      _DAT_1800260c0 = &LAB_180001bb0;
      _DAT_1800260d8 = FUN_180009020;
      _DAT_1800260e8 = &LAB_180009480;
      _DAT_1800260f0 = &LAB_1800024f0;
      _DAT_1800260f8 = &LAB_180008b20;
      _DAT_180026100 = &LAB_1800024f0;
      _DAT_180026118 = u_pinball_18001e028;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_648);
  return;
}




undefined1 * FUN_180009680(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_180025440 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_180025440 = &DAT_180025340;
    pcVar1 = (char *)__std_type_info_name(0x18001e550,&DAT_180025b30);
    FUN_180001870(pcVar1,DAT_180025440,local_res10);
  }
  return DAT_180025440;
}




void FUN_1800096e0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180009720(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_18000c4f0(param_1);
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




longlong * FUN_1800097a0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    FUN_180001980();
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
      goto LAB_180009895;
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
LAB_180009895:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_18000a0f0(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_18000a040((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_18000a040(plVar9,plVar10,plVar13);
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
FUN_1800099a0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
    FUN_18000c580(param_1,param_6);
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
      goto LAB_180009a1f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_180009a1f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_180009a1f:
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
        goto LAB_180009bc5;
      }
LAB_180009b36:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180009b36;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_18000c830(param_1,plVar2);
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
LAB_180009bc5:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180009c20(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
    FUN_1800099a0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_18000ca50(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_1800099a0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_18000ca50(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_1800099a0(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_18000ca50(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_18000abe0((longlong *)&local_38);
      uVar2 = FUN_18000ca50((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_1800099a0(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_1800099a0(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_18000ca50(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_18000ab70((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_18000ca50(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1800099a0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_1800099a0(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180009e50(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180009e50(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
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
      uVar3 = FUN_18000ca50(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_18000ca50(plVar5 + 4,param_4);
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
      puVar4 = FUN_1800099a0(param_1,&local_38,'\x01',plVar6,param_4,param_5);
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
  uVar3 = FUN_18000ca50(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_1800099a0(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_18000c890(param_5 + 8);
    FUN_180001530(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




longlong * FUN_18000a040(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001e038);
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




void FUN_18000a0f0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18001e038,param_3,param_4,0xfffffffffffffffe);
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




_Facet_base * FUN_18000a160(locale *param_1)

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
  local_res10 = DAT_180024ef8;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_18000a225;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_18000a1d2:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_18000a225;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_18000a1d2;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,struct__Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      FUN_18000a550(local_30);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_30,(ThrowInfo *)&DAT_18001b9b0);
    }
    local_res18 = local_res10;
    std::_Facet_Register(local_res10);
    (**(code **)(*(longlong *)p_Var4 + 8))(p_Var4);
    DAT_180024ef8 = local_res10;
    local_res18 = (_Facet_base *)0x0;
    p_Var4 = local_res10;
  }
LAB_18000a225:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}




undefined8 * FUN_18000a260(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = CCheckVersionModule::vftable;
  puVar2 = (undefined8 *)0x0;
  param_1[1] = 0;
  FUN_18000a340((basic_ostream<char,struct_std::char_traits<char>_> *)(param_1 + 2),
                "checkversion.log",2,0x40,1);
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = FUN_180002880(puVar1);
  }
  param_1[0x23] = puVar2;
  *param_1 = CModuleImpl<class_CCheckVersionModule>::vftable;
  *param_1 = CMomObject<class_CModuleImpl<class_CCheckVersionModule>_>::vftable;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CCheckVersionModule>_>::vftable;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  uVar3 = FUN_18000c4b0();
  param_1[0x25] = uVar3;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CCheckVersionModule>_>_>
             ::vftable;
  return param_1;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_18000a340(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2,uint param_3
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
    *(undefined **)param_1 = &DAT_180016718;
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
  *(undefined8 *)(param_1 + 0x7c) = DAT_180024ef0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((*(longlong *)(param_1 + 0x88) != 0) ||
     (p_Var2 = std::_Fiopen(param_2,param_3 | 2,param_4), p_Var2 == (_iobuf *)0x0)) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
    return param_1;
  }
  FUN_18000c740(this,(longlong)p_Var2,1);
  plVar3 = (locale *)std::basic_streambuf<char,struct_std::char_traits<char>_>::getloc(this);
  this_00 = FUN_18000a160(plVar3);
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




undefined8 * FUN_18000a500(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_18000a550(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_18000a590(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




void FUN_18000a5d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000a5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_18000c960(param_1 + 0x25,param_2,param_3,param_4);
  uVar1 = 0x58;
  free((void *)param_1[0x25]);
  FUN_18000a8e0(param_1,uVar1,param_3,param_4);
  return;
}




void FUN_18000a640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000a660(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_18000a690(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000a69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_18000a6a0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_18000a6c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c960(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_18000a6f0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_18000a710(undefined8 *param_1)

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




void FUN_18000a760(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}




void FUN_18000a780(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

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
      FUN_18000c5d0((longlong *)param_1);
      fclose(*(FILE **)(param_1 + 0x80));
    }
    param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x74) = DAT_180024ef0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




void FUN_18000a840(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000c960(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_18000a870(longlong *param_1)

{
  FUN_18000c890(param_1 + 4);
  FUN_180001530(param_1);
  return;
}




void FUN_18000a8a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}




void FUN_18000a8c0(longlong *param_1)

{
  FUN_18000c890(param_1);
  return;
}




void FUN_18000a8e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong *plVar3;
  uint local_res10 [2];
  
  *param_1 = CCheckVersionModule::vftable;
  puVar1 = (undefined8 *)FUN_18000bf20("Error");
  if (DAT_180025220 == (undefined1 *)0x0) {
    DAT_180025220 = &DAT_180025120;
    local_res10[0] = 0x100;
    pcVar2 = (char *)__std_type_info_name(0x18001e4f8,&DAT_180025b30);
    FUN_180001870(pcVar2,DAT_180025220,local_res10);
  }
  plVar3 = (longlong *)(**(code **)*puVar1)(puVar1,DAT_180025220);
  (**(code **)(*plVar3 + 0x30))(plVar3,param_1[1]);
  plVar3 = (longlong *)param_1[0x23];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
  }
  FUN_18000acf0(param_1 + 2);
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return;
}




void FUN_18000a9d0(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




void FUN_18000a9f0(undefined8 *param_1)

{
  *param_1 = CMomError::vftable;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 8))();
  }
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_18000aa40(undefined8 *param_1)

{
  *param_1 = CMyErrorProc::vftable;
  return;
}




void FUN_18000aa50(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_18000aa80(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_18000aab0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000aae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}




bool FUN_18000aaf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_18000ab20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000ab61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




longlong * FUN_18000ab70(longlong *param_1)

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




longlong * FUN_18000abe0(longlong *param_1)

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




undefined8 * FUN_18000ac70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CMyErrorProc::vftable;
    puVar1[1] = param_2;
    *puVar1 = CMomObject<class_CMyErrorProc>::vftable;
    *(undefined4 *)(puVar1 + 2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void FUN_18000acd0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000acde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_18000acf0(longlong *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x15);
  *(undefined ***)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xa8) =
       std::basic_ofstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(piVar1 + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_18000a780((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 1));
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)(param_1 + 2));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}




void FUN_18000ad84(longlong param_1,uint param_2)

{
  FUN_18000afb0(param_1 - *(int *)(param_1 + -4),param_2);
  return;
}




undefined8 *
FUN_18000ad90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_18000ade0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_18000c960(param_1 + 0x25,param_2,param_3,param_4);
  uVar1 = 0x58;
  free((void *)param_1[0x25]);
  FUN_18000a8e0(param_1,uVar1,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_18000ae60(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000aeb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CMyErrorProc::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 *
FUN_18000aef0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_18000c960(param_1 + 0x25,param_2,param_3,param_4);
  uVar1 = 0x58;
  free((void *)param_1[0x25]);
  FUN_18000a8e0(param_1,uVar1,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_18000af70(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_18000a780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18000afb0(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0xa8);
  FUN_18000acf0(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}




undefined8 *
FUN_18000aff0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000b030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CMomError::vftable;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 8))();
  }
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000b0b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CMyErrorProc::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000b0e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000b140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000b190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *local_res8;
  longlong *local_res10;
  
  puVar2 = (undefined8 *)FUN_18000bf20("Error");
  if (DAT_180025220 == (undefined1 *)0x0) {
    DAT_180025220 = &DAT_180025120;
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,0x100);
    pcVar3 = (char *)__std_type_info_name(0x18001e4f8,&DAT_180025b30);
    FUN_180001870(pcVar3,DAT_180025220,(uint *)&local_res8);
  }
  plVar4 = (longlong *)(**(code **)*puVar2)(puVar2,DAT_180025220);
  plVar5 = (longlong *)operator_new(8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *plVar5 = (longlong)
              dnc::
              ConstructFunction<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>
              ::vftable;
  }
  local_res10 = plVar5;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>,1>
              ::vftable;
    local_res8 = puVar2;
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
    puVar2[1] = uVar6;
    puVar2[2] = param_1 + 0x10;
  }
  local_res8 = puVar2;
  if (plVar5 != (longlong *)0x0) {
    free(plVar5);
  }
  plVar5 = (longlong *)FUN_1800096e0(&local_res8);
  if (puVar2 != (undefined8 *)0x0) {
    free(puVar2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != plVar5) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    if (plVar5 != (longlong *)0x0) {
      puVar7 = FUN_180009680();
      lVar8 = (**(code **)*plVar5)(plVar5,puVar7);
      *(longlong *)(param_1 + 8) = lVar8;
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      else {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018000b337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined8 *)(param_1 + 8),0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_18000b340(longlong param_1,void *param_2,longlong *param_3)

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
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_1800019a0(local_68,param_2,sVar13);
  uVar15 = local_50;
  uVar3 = local_58;
  local_98 = (longlong *)(param_1 + 0x128);
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
      if (uVar3 <= uVar2) goto LAB_18000b427;
LAB_18000b488:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000b488;
LAB_18000b427:
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
  if (plVar10 != (longlong *)*local_98) goto LAB_18000b6bc;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_1800019a0(local_68,param_2,sVar13);
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
      if (uVar2 <= uVar15) goto LAB_18000b597;
LAB_18000b5e7:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_18000b5e7;
LAB_18000b597:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_18000b5ef:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_180009720(plVar11,&DAT_180015c80,local_a8);
    FUN_180009c20(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
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
      if (uVar2 < uVar3) goto LAB_18000b5ef;
    }
    else if (iVar6 < 0) goto LAB_18000b5ef;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_18000c890(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_18000c890(&local_88);
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
LAB_18000b6bc:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18001e038);
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
    FUN_1800097a0(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18001e038);
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




undefined4 FUN_18000b7a0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x120);
}




undefined4 FUN_18000b7b0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_18000b7c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x128);
  lVar2 = *plVar1;
  FUN_18000c6a0(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x130) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_18000b810(longlong param_1,void *param_2,undefined4 *param_3)

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
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_1800019a0(local_68,param_2,sVar12);
  uVar6 = local_50;
  uVar5 = local_58;
  puVar2 = *(undefined8 **)(param_1 + 0x128);
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
      if (uVar5 <= uVar3) goto LAB_18000b8f0;
LAB_18000b97f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_18000b97f;
LAB_18000b8f0:
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
      if (uVar5 < uVar3) goto LAB_18000b944;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_18000b947;
    }
    if (-1 < iVar7) goto LAB_18000b947;
  }
LAB_18000b944:
  puVar11 = puVar2;
LAB_18000b947:
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
  if (puVar11 == *(undefined8 **)(param_1 + 0x128)) {
    *param_3 = 0;
  }
  else {
    *param_3 = (int)((longlong)(puVar11[9] - puVar11[8]) >> 3);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_98);
  return;
}




undefined8 FUN_18000ba00(void)

{
  return DAT_180024c40;
}




undefined8 FUN_18000ba20(undefined8 param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2 + (*param_2 == '*');
    if (*pcVar3 == '1') {
      return param_1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_180024ee8) && (_Init_thread_header(&DAT_180024ee8), DAT_180024ee8 == -1)) {
      DAT_180024ee0 = FUN_180009680();
      _Init_thread_footer(&DAT_180024ee8);
    }
    cVar1 = *pcVar3;
    cVar2 = *DAT_180024ee0;
    pcVar5 = DAT_180024ee0;
    if (cVar1 == cVar2) {
      do {
        if ((cVar1 == '\0') || (cVar2 == '\0')) break;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar3;
        cVar2 = *pcVar5;
      } while (cVar1 == cVar2);
    }
    if (cVar1 == *pcVar5) {
      uVar4 = param_1;
    }
  }
  return uVar4;
}




char * FUN_18000bb10(void)

{
  return "CheckVersion";
}




char * FUN_18000bb20(void)

{
  return "CCheckVersionModule";
}




char * FUN_18000bb30(void)

{
  return "CMomObjectImpl";
}




undefined1 FUN_18000bb40(longlong param_1)

{
  undefined1 uVar1;
  
  (**(code **)**(undefined8 **)(param_1 + 0x118))();
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x118) + 8))();
  return uVar1;
}




undefined *
FUN_18000bbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  uint local_res8 [2];
  
  if (DAT_180024c48 == (undefined *)0x0) {
    uVar4 = 4;
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar5 < DAT_180024c58) && (_Init_thread_header(&DAT_180024c58), DAT_180024c58 == -1)) {
      DAT_180024c50 = (undefined8 *)FUN_18000bf20("Thread");
      _Init_thread_footer(&DAT_180024c58);
    }
    if (DAT_180024c50 == (undefined8 *)0x0) {
      if ((*piVar5 < DAT_180024d98) && (_Init_thread_header(&DAT_180024d98), DAT_180024d98 == -1)) {
        FUN_18000a260((undefined8 *)&DAT_180024c60);
        atexit(FUN_180014390);
        _Init_thread_footer(&DAT_180024d98);
        DAT_180024c48 = &DAT_180024c60;
        FUN_18000b190(0x180024c60,uVar4,param_3,param_4);
      }
      else {
        DAT_180024c48 = &DAT_180024c60;
        FUN_18000b190(0x180024c60,uVar4,param_3,param_4);
      }
    }
    else {
      if (DAT_180025330 == (undefined1 *)0x0) {
        DAT_180025330 = &DAT_180025230;
        local_res8[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18001e528,&DAT_180025b30);
        FUN_180001870(pcVar2,DAT_180025330,local_res8);
      }
      plVar3 = (longlong *)(**(code **)*DAT_180024c50)(DAT_180024c50,DAT_180025330);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        lVar6 = *plVar3;
        uVar4 = 0xffffffff;
        iVar1 = (**(code **)(lVar6 + 0x28))(plVar3);
        if (DAT_180024c48 == (undefined *)0x0) {
          if ((*piVar5 < DAT_180024ed8) &&
             (_Init_thread_header(&DAT_180024ed8), DAT_180024ed8 == -1)) {
            FUN_18000a260((undefined8 *)&DAT_180024da0);
            atexit(FUN_1800143e0);
            _Init_thread_footer(&DAT_180024ed8);
          }
          DAT_180024c48 = &DAT_180024da0;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
          FUN_18000b190((longlong)DAT_180024c48,uVar4,lVar6,param_4);
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_180024c48;
}




undefined4 FUN_18000be10(undefined4 param_1)

{
  char *pcVar1;
  uint local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001ebf8) && (_Init_thread_header(&DAT_18001ebf8), DAT_18001ebf8 == -1)) {
    DAT_18001ebf0 = (undefined8 *)FUN_18000bf20("Error");
    _Init_thread_footer(&DAT_18001ebf8);
  }
  if (DAT_18001ebf0 != (undefined8 *)0x0) {
    if (DAT_18001ec00 != (longlong *)0x0) goto LAB_18000bece;
    if (DAT_18001ed10 == (undefined1 *)0x0) {
      DAT_18001ed10 = &DAT_18001ec10;
      local_18[0] = 0x100;
      pcVar1 = (char *)__std_type_info_name(0x18001e128,&DAT_180025b30);
      FUN_180001870(pcVar1,DAT_18001ed10,local_18);
    }
    DAT_18001ec00 = (longlong *)(**(code **)*DAT_18001ebf0)(DAT_18001ebf0,DAT_18001ed10);
  }
  if (DAT_18001ec00 == (longlong *)0x0) {
    return param_1;
  }
LAB_18000bece:
  (**(code **)(*DAT_18001ec00 + 0x28))();
  return param_1;
}




void FUN_18000bf20(char *param_1)

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
  
  local_18 = DAT_18001e0e8 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_18000c015:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_18000c015;
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
          FUN_180001640(pFVar3,hModule);
        }
      }
      goto LAB_18000c015;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined8 FUN_18000c040(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  longlong *plVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  undefined8 uVar9;
  longlong **local_res8;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38[0] = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    if (DAT_180025550 == (undefined1 *)0x0) {
      DAT_180025550 = &DAT_180025450;
      local_res8 = (longlong **)CONCAT44(local_res8._4_4_,0x100);
      pcVar4 = (char *)__std_type_info_name
                                 (0x18001e578,&DAT_180025b30,param_3,param_4,0xfffffffffffffffe,
                                  CMomError::vftable);
      FUN_180001870(pcVar4,DAT_180025550,(uint *)&local_res8);
    }
    local_38[0] = (longlong *)(**(code **)*param_3)(param_3,DAT_180025550);
    if (local_38[0] == (longlong *)0x0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      (**(code **)(*param_3 + 8))(param_3);
    }
    else {
      (**(code **)(*param_3 + 0x10))();
    }
  }
  plVar1 = local_38[0];
  this = *(basic_ostream<char,struct_std::char_traits<char>_> **)(param_1 + 8);
  lVar5 = (**(code **)(*local_38[0] + 0x38))(local_38[0]);
  if (lVar5 == 0) {
    iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
    pbVar8 = FUN_180001020(this,"error:");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar8,iVar3);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*plVar1 + 0x60))();
    pcVar4 = (char *)(**(code **)(*plVar6 + 0x28))(plVar6);
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    iVar3 = (**(code **)(*plVar1 + 0x50))(plVar1);
    pcVar7 = (char *)(**(code **)(*plVar1 + 0x38))(plVar1);
    pbVar8 = FUN_180001020(this,pcVar7);
    pbVar8 = FUN_180001020(pbVar8,"(");
    pbVar8 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar8,iVar3);
    pbVar8 = FUN_180001020(pbVar8,") : error C");
    pbVar8 = std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(pbVar8,uVar2);
    pbVar8 = FUN_180001020(pbVar8,": ");
    FUN_180001020(pbVar8,pcVar4);
    pcVar4 = (char *)(**(code **)(*plVar1 + 0x40))(plVar1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = ".Unknown";
      pbVar8 = this;
    }
    else {
      pbVar8 = FUN_180001020(this,".");
    }
    FUN_180001020(pbVar8,pcVar4);
    pcVar4 = (char *)(**(code **)(*plVar1 + 0x48))(plVar1);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = ".Unknown";
      pbVar8 = this;
    }
    else {
      pbVar8 = FUN_180001020(this,".");
    }
    FUN_180001020(pbVar8,pcVar4);
    pcVar4 = (char *)(**(code **)(*plVar1 + 0x28))(plVar1);
    pbVar8 = FUN_180001020(this,": ");
    FUN_180001020(pbVar8,pcVar4);
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(this,FUN_1800014a0);
  local_res8 = local_38;
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 8))();
  }
  uVar9 = __std_exception_destroy(&local_48);
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}




undefined8 FUN_18000c2d0(undefined8 param_1,char *param_2)

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
    if (DAT_180025000 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_180025000 = &DAT_180024f00;
      pcVar2 = (char *)__std_type_info_name(0x18001e4a8,&DAT_180025b30);
      FUN_180001870(pcVar2,DAT_180025000,local_res10);
    }
    cVar1 = *pcVar3;
    cVar4 = *DAT_180025000;
    pcVar2 = DAT_180025000;
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
      if (DAT_180025110 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_180025110 = &DAT_180025010;
        pcVar2 = (char *)__std_type_info_name(0x18001e4d8,&DAT_180025b30);
        FUN_180001870(pcVar2,DAT_180025110,local_res10);
      }
      cVar1 = *pcVar3;
      cVar4 = *DAT_180025110;
      pcVar2 = DAT_180025110;
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




int FUN_18000c440(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = param_1 + 0x24;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar2 = (int)param_1[0x24];
  if ((int)*plVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  (**(code **)(*param_1 + 0x50))(param_1,1);
  return iVar2;
}




int FUN_18000c480(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = param_1 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar2 = (int)param_1[2];
  if ((int)*plVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return iVar2;
}




void FUN_18000c4b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_18000c4f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_18000c530(undefined8 param_1,longlong *param_2,longlong *param_3)

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




void FUN_18000c580(undefined8 param_1,void *param_2)

{
  FUN_18000c890((longlong *)((longlong)param_2 + 0x40));
  FUN_180001530((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_18000c5d0(longlong *param_1)

{
  int iVar1;
  undefined1 auStackY_68 [32];
  char *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001e0e8 ^ (ulonglong)auStackY_68;
  if (((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x71) != '\0')) &&
     (iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff), iVar1 != -1)) {
    iVar1 = std::codecvt<char,char,struct__Mbstatet>::unshift
                      ((codecvt<char,char,struct__Mbstatet> *)param_1[0xd],
                       (_Mbstatet *)((longlong)param_1 + 0x74),local_30,(char *)&local_10,&local_38)
    ;
    if (iVar1 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) goto LAB_18000c67e;
    if ((longlong)local_38 - (longlong)local_30 != 0) {
      fwrite(local_30,1,(longlong)local_38 - (longlong)local_30,(FILE *)param_1[0x10]);
    }
  }
LAB_18000c67e:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




void FUN_18000c6a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18000c6a0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_18000c890(param_2 + 8);
    FUN_180001530(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_18000c730(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_18000c740(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong param_2,
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
  *(undefined8 *)(param_1 + 0x74) = DAT_180024ef0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




void FUN_18000c7e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000c7ec. Too many branches */
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




void FUN_18000c830(longlong *param_1,longlong *param_2)

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




void FUN_18000c890(longlong *param_1)

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




void FUN_18000c940(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000c94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}




void FUN_18000c960(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_18000c6a0(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_18000c9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_18000c9e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMyErrorProc>*___ptr64___cdecl(class_std::basic_ofstream<char,struct_std::char_traits<char>_>_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




uint FUN_18000ca50(undefined8 *param_1,undefined8 *param_2)

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




void FUN_18000cac0(undefined8 param_1,void *param_2,longlong param_3)

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




void FUN_18000cb00(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_18000a160(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x00018000cb49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  return;
}




void FUN_18000cb50(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

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
  
  local_10 = DAT_18001e0e8 ^ (ulonglong)auStackY_88;
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




uint FUN_18000ccf0(longlong param_1,uint param_2)

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




void FUN_18000cde0(undefined8 *param_1,undefined1 param_2)

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
    FUN_180001960();
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
    if (pvVar3 == (void *)0x0) goto LAB_18000cf24;
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
LAB_18000cf24:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return;
}




fpos_t * FUN_18000cf70(basic_filebuf<char,struct_std::char_traits<char>_> *param_1,fpos_t *param_2,
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
    cVar1 = FUN_18000c5d0((longlong *)param_1);
    if (cVar1 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4);
        if (iVar2 != 0) goto LAB_18000d00d;
      }
      iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar2 == 0) {
        std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back(param_1);
        fVar3 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_18000d016;
      }
    }
  }
LAB_18000d00d:
  *param_2 = -1;
  fVar3 = 0;
LAB_18000d016:
  param_2[1] = 0;
  param_2[2] = fVar3;
  return param_2;
}




longlong * FUN_18000d040(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    cVar2 = FUN_18000c5d0(param_1);
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




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_18000d120(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
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
      FUN_18000c740(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}




undefined8 FUN_18000d180(longlong *param_1)

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




void FUN_18000d1d0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

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
  local_18 = DAT_18001e0e8 ^ (ulonglong)auStackY_98;
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
          if (iVar4 == -1) goto LAB_18000d3a3;
          FUN_18000cde0((undefined8 *)&local_38,(char)iVar4);
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
          if ((iVar4 < 0) || (1 < iVar4)) goto LAB_18000d3a3;
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
LAB_18000d3a3:
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
        goto LAB_18000d45f;
      }
      fgetc(*(FILE **)(param_1 + 0x80));
    }
  }
  else {
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gninc(param_1);
  }
LAB_18000d45f:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




ulonglong FUN_18000d490(longlong *param_1)

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




void FUN_18000d500(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  return;
}




char * FUN_18000d510(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




longlong FUN_18000d530(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000d560. Too many branches */
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




longlong FUN_18000d620(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000d650. Too many branches */
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




void GetModule(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DAT_180024c40 = param_1;
                    /* 0xd700  10  GetModule */
  FUN_18000bbb0(param_1,param_2,param_3,param_4);
  return;
}




ulonglong switchD_18000db30::caseD_2
                    (byte *param_1,uint param_2,ushort *param_3,uint param_4,int *param_5)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  byte *_Dst;
  byte *_Dst_00;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int local_res20 [2];
  
  pbVar7 = param_1 + param_2;
  puVar5 = (ushort *)((ulonglong)param_4 + (longlong)param_3);
  if (((ulonglong)param_3 & 1) == 0) {
    uVar3 = *param_3;
  }
  else {
    uVar3 = *param_3;
  }
  uVar6 = (ulonglong)((uVar3 & 0xfff) + 3);
  puVar1 = (ushort *)(uVar6 + (longlong)param_3);
  _Dst_00 = param_1;
  do {
    if (puVar5 < puVar1) {
LAB_18000d8be:
      *param_5 = (int)param_3;
      return 0xc0000242;
    }
    if ((uVar3 & 0x8000) == 0) {
      local_res20[0] = 0x1000;
      if (pbVar7 < _Dst_00 + 0x1000) {
        local_res20[0] = (int)pbVar7 - (int)_Dst_00;
      }
      iVar4 = local_res20[0];
      if (puVar5 < (ushort *)((longlong)param_3 + (longlong)local_res20[0] + 2U))
      goto LAB_18000d8be;
      memcpy(_Dst_00,param_3 + 1,(longlong)local_res20[0]);
    }
    else {
      uVar2 = FUN_18000d900(_Dst_00,pbVar7,(byte *)(param_3 + 1),
                            (ushort *)(uVar6 + (longlong)param_3),local_res20);
      iVar4 = local_res20[0];
      if ((int)uVar2 < 0) {
        *param_5 = local_res20[0];
        return uVar2 & 0xffffffff;
      }
    }
    param_3 = (ushort *)((longlong)param_3 + uVar6);
    _Dst = _Dst_00 + iVar4;
    if ((_Dst == pbVar7) || (puVar5 + -1 < param_3)) {
LAB_18000d8a8:
      if (param_3 <= puVar5) {
        *param_5 = (int)_Dst - (int)param_1;
        return 0;
      }
      goto LAB_18000d8be;
    }
    if (((ulonglong)param_3 & 1) == 0) {
      uVar3 = *param_3;
    }
    else {
      uVar3 = *param_3;
    }
    if (uVar3 == 0) goto LAB_18000d8a8;
    _Dst_00 = _Dst;
    if (iVar4 < 0x1000) {
      _Dst_00 = _Dst + (0x1000 - iVar4);
      if (pbVar7 <= _Dst_00) goto LAB_18000d8a8;
      memset(_Dst,0,(longlong)(0x1000 - iVar4));
    }
    uVar6 = (ulonglong)((uVar3 & 0xfff) + 3);
    puVar1 = (ushort *)(uVar6 + (longlong)param_3);
  } while( true );
}




undefined8 FUN_18000d900(byte *param_1,byte *param_2,byte *param_3,ushort *param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar7;
  
  bVar11 = *param_3;
  puVar4 = (ushort *)(param_3 + 1);
  uVar7 = 0;
  pbVar8 = param_1;
  uVar10 = uVar7;
  if (param_1 < param_2) {
    do {
      if (param_4 <= puVar4) break;
      uVar6 = (&DAT_18001e068)[uVar10];
      while (iVar9 = (int)uVar10, param_1 + uVar6 < pbVar8) {
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar6 = (&DAT_18001e068)[uVar10];
      }
      if ((bVar11 & (byte)(1 << (sbyte)uVar7)) == 0) {
        *pbVar8 = (byte)*puVar4;
        pbVar8 = pbVar8 + 1;
        puVar4 = (ushort *)((longlong)puVar4 + 1);
      }
      else {
        puVar5 = puVar4;
        if (param_4 <= (ushort *)((longlong)puVar4 + 1U)) {
LAB_18000daaf:
          *param_5 = (int)puVar5;
          return 0xc0000242;
        }
        puVar5 = puVar4 + 1;
        uVar1 = *puVar4;
        uVar6 = (uint)uVar1;
        if (iVar9 == 0) {
          uVar2 = (uint)(uVar1 >> 0xc);
          uVar6 = uVar6 & 0xfff;
        }
        else if (iVar9 == 1) {
          uVar2 = (uint)(uVar1 >> 0xb);
          uVar6 = uVar6 & 0x7ff;
        }
        else if (iVar9 == 2) {
          uVar2 = (uint)(uVar1 >> 10);
          uVar6 = uVar6 & 0x3ff;
        }
        else if (iVar9 == 3) {
          uVar2 = (uint)(uVar1 >> 9);
          uVar6 = uVar6 & 0x1ff;
        }
        else if (iVar9 == 4) {
          uVar2 = (uint)(uVar1 >> 8);
          uVar6 = (uint)(byte)*puVar4;
        }
        else if (iVar9 == 5) {
          uVar2 = (uint)(uVar1 >> 7);
          uVar6 = uVar6 & 0x7f;
        }
        else if (iVar9 == 6) {
          uVar2 = (uint)(uVar1 >> 6);
          uVar6 = uVar6 & 0x3f;
        }
        else if (iVar9 == 7) {
          uVar2 = (uint)(uVar1 >> 5);
          uVar6 = uVar6 & 0x1f;
        }
        else {
          uVar2 = (uint)(uVar1 >> 4);
          uVar6 = uVar1 & 0xf;
        }
        uVar3 = (ulonglong)(uVar6 + 3);
        if ((longlong)pbVar8 - (longlong)param_1 <= (longlong)(ulonglong)uVar2) goto LAB_18000daaf;
        if (param_2 <= pbVar8 + uVar3) {
          uVar3 = (ulonglong)(uint)((int)param_2 - (int)pbVar8);
        }
        puVar4 = puVar5;
        if (0 < (int)uVar3) {
          do {
            uVar6 = (int)uVar3 - 1;
            uVar3 = (ulonglong)uVar6;
            *pbVar8 = pbVar8[~(ulonglong)uVar2];
            pbVar8 = pbVar8 + 1;
          } while (0 < (int)uVar6);
        }
      }
      uVar6 = (int)uVar7 + 1U & 7;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        if (param_4 <= puVar4) break;
        bVar11 = (byte)*puVar4;
        puVar4 = (ushort *)((longlong)puVar4 + 1);
      }
    } while (pbVar8 < param_2);
  }
  *param_5 = (int)pbVar8 - (int)param_1;
  return 0;
}




ulonglong FUN_18000dac0(byte param_1,byte *param_2,uint param_3,ushort *param_4,uint param_5,
                       int *param_6)

{
  ushort *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  byte *_Dst;
  byte *_Dst_00;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int aiStackX_20 [2];
  
  if (param_1 < 2) {
    return 0xc000000d;
  }
  if ((param_1 & 0xf0) != 0) {
    return 0xc000025f;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 2:
    break;
  default:
    return 0xc000025f;
  }
  pbVar7 = param_2 + param_3;
  puVar5 = (ushort *)((ulonglong)param_5 + (longlong)param_4);
  if (((ulonglong)param_4 & 1) == 0) {
    uVar3 = *param_4;
  }
  else {
    uVar3 = *param_4;
  }
  uVar6 = (ulonglong)((uVar3 & 0xfff) + 3);
  puVar1 = (ushort *)(uVar6 + (longlong)param_4);
  _Dst_00 = param_2;
  do {
    if (puVar5 < puVar1) {
LAB_18000d8be:
      *param_6 = (int)param_4;
      return 0xc0000242;
    }
    if ((uVar3 & 0x8000) == 0) {
      aiStackX_20[0] = 0x1000;
      if (pbVar7 < _Dst_00 + 0x1000) {
        aiStackX_20[0] = (int)pbVar7 - (int)_Dst_00;
      }
      iVar4 = aiStackX_20[0];
      if (puVar5 < (ushort *)((longlong)param_4 + (longlong)aiStackX_20[0] + 2U))
      goto LAB_18000d8be;
      memcpy(_Dst_00,param_4 + 1,(longlong)aiStackX_20[0]);
    }
    else {
      uVar2 = FUN_18000d900(_Dst_00,pbVar7,(byte *)(param_4 + 1),
                            (ushort *)(uVar6 + (longlong)param_4),aiStackX_20);
      iVar4 = aiStackX_20[0];
      if ((int)uVar2 < 0) {
        *param_6 = aiStackX_20[0];
        return uVar2 & 0xffffffff;
      }
    }
    param_4 = (ushort *)((longlong)param_4 + uVar6);
    _Dst = _Dst_00 + iVar4;
    if ((_Dst == pbVar7) || (puVar5 + -1 < param_4)) {
LAB_18000d8a8:
      if (param_4 <= puVar5) {
        *param_6 = (int)_Dst - (int)param_2;
        return 0;
      }
      goto LAB_18000d8be;
    }
    if (((ulonglong)param_4 & 1) == 0) {
      uVar3 = *param_4;
    }
    else {
      uVar3 = *param_4;
    }
    if (uVar3 == 0) goto LAB_18000d8a8;
    _Dst_00 = _Dst;
    if (iVar4 < 0x1000) {
      _Dst_00 = _Dst + (0x1000 - iVar4);
      if (pbVar7 <= _Dst_00) goto LAB_18000d8a8;
      memset(_Dst,0,(longlong)(0x1000 - iVar4));
    }
    uVar6 = (ulonglong)((uVar3 & 0xfff) + 3);
    puVar1 = (ushort *)(uVar6 + (longlong)param_4);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18000db50(uint param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  int *piVar14;
  uint uVar15;
  uint local_res10 [2];
  longlong local_res18;
  short local_res20;
  
  memset(param_2,0,0x1260);
  memset(&DAT_180025fe0,0,0x80);
  lVar11 = 8;
  puVar8 = &DAT_180025de0;
  do {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = 0xffffffffffffffff;
    puVar8[2] = 0xffffffffffffffff;
    puVar8[3] = 0xffffffffffffffff;
    puVar8[4] = 0xffffffffffffffff;
    puVar8[5] = 0xffffffffffffffff;
    puVar8[6] = 0xffffffffffffffff;
    puVar8[7] = 0xffffffffffffffff;
    lVar11 = lVar11 + -1;
    puVar8 = puVar8 + 8;
  } while (lVar11 != 0);
  uVar15 = 0;
  DAT_180025bb8 = 0;
  DAT_180025bb4 = 0;
  DAT_180025bb0 = 0;
  if (DAT_180025be0 == (undefined8 *)0x0) {
    DAT_180025be0 = (undefined8 *)FUN_1800049e0(0x1000);
  }
  puVar8 = DAT_180025be0;
  local_res18 = 0;
  uVar7 = FUN_180004290(param_1,&local_res18,0);
  if ((((int)uVar7 == 0) && (iVar6 = FUN_1800040b0(param_1,puVar8,0x210,local_res10), iVar6 == 0))
     && (local_res10[0] == 0x210)) {
    uVar3 = *(ushort *)((longlong)puVar8 + 0xb);
    bVar1 = *(byte *)((longlong)puVar8 + 0xd);
    sVar4 = *(short *)((longlong)puVar8 + 0xe);
    cVar2 = *(char *)((longlong)puVar8 + 0x15);
    iVar6 = *(int *)(puVar8 + 4);
    local_res10[0] = CONCAT31(2,*(undefined1 *)(puVar8 + 2));
    local_res18 = CONCAT62(local_res18._2_6_,*(undefined2 *)((longlong)puVar8 + 0x11));
    local_res20 = *(short *)((longlong)puVar8 + 0x13);
    sVar5 = *(short *)((longlong)puVar8 + 0x16);
    lVar11 = RtlCompareMemory((longlong)puVar8 + 3,"NTFS    ",8);
    if ((((((((lVar11 == 8) && (sVar4 == 0)) &&
            (((char)local_res10[0] == '\0' && (((short)local_res18 == 0 && (local_res20 == 0))))))
           && (sVar5 == 0)) &&
          (((iVar6 == 0 && (bVar13 = cVar2 + 0x10, bVar13 < 0x10)) &&
           ((0xf301U >> (bVar13 & 0x1f) & 1) != 0)))) &&
         (((uVar3 == 0x80 || (uVar3 == 0x100)) ||
          ((uVar3 == 0x200 || ((uVar3 == 0x400 || (uVar3 == 0x800)))))))) &&
        ((((byte)(bVar1 - 1) < 0x40 &&
          ((0x800000008000808bU >> ((ulonglong)(byte)(bVar1 - 1) & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)))) &&
       (((((puVar8[5] != 0 && (puVar8[6] != 0)) && (puVar8[7] != 0)) &&
         ((cVar2 = *(char *)(puVar8 + 8), cVar2 != '\0' &&
          (*(char *)((longlong)puVar8 + 0x44) != '\0')))) &&
        ((-1 < cVar2 || ((byte)(cVar2 + 0x1fU) < 0x17)))))) {
      uVar10 = (uint)bVar1 * (uint)uVar3;
      *param_2 = param_1;
      param_2[1] = uVar10;
      cVar2 = *(char *)(puVar8 + 8);
      if (cVar2 < '\x01') {
        uVar12 = 1 << (-cVar2 & 0x1fU);
      }
      else {
        uVar12 = (int)cVar2 * uVar10;
      }
      param_2[2] = uVar12;
      uVar7 = FUN_18000f040(param_1,(ulonglong)uVar10 * puVar8[6],uVar12,DAT_180025be0);
      if ((((int)uVar7 == 0) && (uVar7 = FUN_18000e100((longlong)DAT_180025be0), (int)uVar7 == 0))
         && ((*(byte *)((longlong)DAT_180025be0 + 0x16) & 1) != 0)) {
        piVar14 = (int *)(ulonglong)*(ushort *)((longlong)DAT_180025be0 + 0x14);
        puVar8 = DAT_180025be0;
        while( true ) {
          piVar14 = (int *)((longlong)piVar14 + (longlong)puVar8);
          if ((*piVar14 == 0x80) && (*(char *)((longlong)piVar14 + 9) == '\0')) break;
          if (*piVar14 == -1) {
            return (undefined *)0x0;
          }
          puVar8 = (undefined8 *)(ulonglong)(uint)piVar14[1];
        }
        if ((char)piVar14[2] == '\x01') {
          param_2[4] = 0x80;
          param_2[8] = 0;
          param_2[9] = 0;
          *(short *)(param_2 + 10) = (short)piVar14 - (short)DAT_180025be0;
          iVar6 = piVar14[2];
          *(bool *)((longlong)param_2 + 0x2a) = (char)iVar6 == '\0';
          if ((char)iVar6 == '\0') {
            uVar9 = (ulonglong)(uint)piVar14[4];
          }
          else {
            uVar9 = *(ulonglong *)(piVar14 + 0xc);
          }
          *(ulonglong *)(param_2 + 6) = uVar9;
          *(undefined2 *)(param_2 + 0xb) = 0;
          if ((char)piVar14[3] != '\0') {
            uVar10 = param_2[1];
            *(undefined2 *)(param_2 + 0xb) = 2;
            param_2[0xc] = uVar10;
            if (*(char *)((longlong)piVar14 + 0x22) != '\0') {
              do {
                uVar10 = uVar10 * 2;
                uVar15 = uVar15 + 1;
                param_2[0xc] = uVar10;
              } while (uVar15 < *(byte *)((longlong)piVar14 + 0x22));
            }
          }
          uVar7 = FUN_18000dfd0((longlong)param_2,param_2 + 0xe,0,(longlong)piVar14);
          if ((int)uVar7 == 0) {
            _DAT_180026060 = &LAB_180001bb0;
            _DAT_180026070 = FUN_18000eb50;
            _DAT_180026078 = FUN_18000ee40;
            _DAT_180026088 = &LAB_18000f7c0;
            _DAT_180026090 = &LAB_1800024f0;
            _DAT_180026098 = FUN_18000e150;
            _DAT_1800260a0 = &LAB_1800024f0;
            _DAT_1800260b8 = &DAT_18001e0d0;
            return &DAT_180026060;
          }
        }
      }
    }
  }
  return (undefined *)0x0;
}




undefined8 FUN_18000dfd0(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  char *_Src;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong _Size;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_res8;
  
  lVar7 = 0;
  uVar8 = (ulonglong)*(uint *)(param_1 + 4);
  pcVar3 = (char *)((ulonglong)*(ushort *)(param_4 + 0x20) + param_4);
  lVar4 = *(longlong *)(param_4 + 0x10);
  *param_2 = 0;
  cVar1 = *pcVar3;
  lVar4 = lVar4 * uVar8;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    pcVar3 = pcVar3 + 1;
    _Size = (ulonglong)((int)cVar1 & 0xf);
    local_res8 = 0;
    _Src = pcVar3 + _Size;
    uVar5 = (uint)(cVar1 >> 4);
    if (pcVar3[_Size - 1] < '\0') break;
    memmove(&local_res8,pcVar3,_Size);
    uVar2 = *param_2;
    lVar6 = lVar4 + uVar8 * local_res8;
    if (0xe < uVar2) {
      return 0;
    }
    pcVar3 = _Src;
    if (uVar5 != 0) {
      local_res8 = 0;
      pcVar3 = _Src + uVar5;
      if (pcVar3[-1] < '\0') {
        local_res8 = -1;
      }
      memmove(&local_res8,_Src,(ulonglong)uVar5);
      lVar7 = lVar7 + uVar8 * local_res8;
    }
    if (param_3 <= lVar6) {
      *(longlong *)(param_2 + (ulonglong)uVar2 * 2 + 2) = lVar4;
      lVar4 = 0;
      if (uVar5 != 0) {
        lVar4 = lVar7;
      }
      *(longlong *)(param_2 + (ulonglong)*param_2 * 2 + 0x22) = lVar4;
      *(longlong *)(param_2 + (ulonglong)(*param_2 + 1) * 2 + 2) = lVar6;
      *param_2 = *param_2 + 1;
    }
    cVar1 = *pcVar3;
    lVar4 = lVar6;
  }
  return 0x16;
}




undefined8 FUN_18000e100(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  
  uVar1 = *(ushort *)(param_1 + 6);
  uVar5 = 1;
  uVar2 = *(ushort *)(param_1 + 4);
  if (1 < uVar1) {
    puVar6 = (undefined2 *)(param_1 + 2 + (ulonglong)uVar2);
    do {
      uVar4 = uVar5 << 9;
      if (*(short *)(((ulonglong)uVar4 - 2) + param_1) != *(short *)((ulonglong)uVar2 + param_1)) {
        return 9;
      }
      uVar3 = *puVar6;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
      *(undefined2 *)(((ulonglong)uVar4 - 2) + param_1) = uVar3;
    } while (uVar5 < uVar1);
  }
  return 0;
}




void FUN_18000e150(ulonglong param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStackY_b8 [32];
  char local_88 [4];
  uint local_84;
  int local_80 [4];
  longlong local_70;
  ushort local_68;
  char local_66;
  undefined8 local_58 [4];
  uint local_38;
  ulonglong local_28;
  
  local_28 = DAT_18001e0e8 ^ (ulonglong)auStackY_b8;
  lVar6 = (param_1 & 0xffffffff) * 0x70;
  puVar1 = (uint *)(&DAT_180023e30)[(param_1 & 0xffffffff) * 0xe];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = *(undefined8 *)(&DAT_180023e70 + lVar6);
  param_2[2] = *(undefined8 *)(&DAT_180023e28 + lVar6);
  iVar2 = FUN_18000e710(puVar1,*(ulonglong *)(&DAT_180023e78 + lVar6),0x10,local_88,local_80);
  if ((iVar2 == 0) && (local_88[0] != '\0')) {
    if (local_66 == '\0') {
      uVar4 = FUN_18000f0c0(puVar1,local_80,0,0x30,local_58);
      if ((int)uVar4 != 0) goto LAB_18000e2f9;
    }
    else {
      uVar4 = FUN_18000eed0(puVar1,local_70,&local_84);
      if ((int)uVar4 != 0) goto LAB_18000e2f9;
      memmove(local_58,(void *)((ulonglong)
                                *(ushort *)((ulonglong)local_68 + (&DAT_180025be0)[local_84] + 0x14)
                               + (ulonglong)local_68 + (&DAT_180025be0)[local_84]),0x30);
      (&DAT_180025fe0)[local_84] = (&DAT_180025fe0)[local_84] + -1;
    }
    if ((local_38 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    }
    if ((local_38 >> 1 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
    }
    if ((local_38 >> 2 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
    }
    if ((local_38 >> 5 & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 8;
    }
    if ((local_38 >> 0x1c & 1) != 0) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
    }
    *(uint *)((longlong)param_2 + 0x1c) = (uint)(byte)(&DAT_180023e40)[lVar6];
    uVar5 = 0;
    if ((&DAT_180023e40)[lVar6] != '\0') {
      do {
        *(undefined *)((longlong)param_2 + uVar5 + 0x21) = (&DAT_180023e41)[uVar5 + lVar6];
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < (byte)(&DAT_180023e40)[lVar6]);
    }
  }
LAB_18000e2f9:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_b8);
  return;
}




void FUN_18000e320(longlong param_1,int *param_2,longlong param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_e8 [32];
  uint local_b8 [2];
  ulonglong local_b0;
  uint local_a8;
  longlong local_a0;
  uint *local_98;
  int local_90;
  ushort local_8c;
  char local_8a;
  longlong local_88;
  ulonglong local_80;
  int local_70 [2];
  ulonglong local_68;
  ulonglong local_60;
  short local_58;
  bool local_56 [2];
  undefined2 local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStackY_e8;
  uVar8 = *(uint *)(param_1 + 4);
  *param_4 = 0;
  local_a0 = param_3;
  local_98 = param_4;
  uVar3 = FUN_18000eed0((uint *)param_1,*(longlong *)(param_2 + 4),local_b8);
  if ((int)uVar3 == 0) {
    uVar11 = (ulonglong)uVar8;
    lVar9 = (ulonglong)*(ushort *)(param_2 + 6) + (&DAT_180025be0)[local_b8[0]];
    lVar4 = *(longlong *)(lVar9 + 0x10) * (ulonglong)uVar8;
    if ((lVar4 - param_3 == 0 || lVar4 < param_3) &&
       (param_3 <= (longlong)(*(longlong *)(lVar9 + 0x18) * uVar11))) {
      uVar3 = FUN_18000dfd0(param_1,param_4,param_3,lVar9);
      if ((int)uVar3 == 0) {
        (&DAT_180025fe0)[local_b8[0]] = (&DAT_180025fe0)[local_b8[0]] + -1;
      }
    }
    else {
      local_b0 = *(ulonglong *)((&DAT_180025be0)[local_b8[0]] + 0x20) & 0xffffffffffff;
      uVar6 = local_b0;
      (&DAT_180025fe0)[local_b8[0]] = (&DAT_180025fe0)[local_b8[0]] + -1;
      uVar3 = FUN_18000eed0((uint *)param_1,local_b0,local_b8);
      lVar4 = local_a0;
      if ((int)uVar3 == 0) {
        piVar10 = (int *)0x0;
        local_a8 = local_b8[0];
        uVar7 = (ulonglong)local_b8[0];
        piVar5 = (int *)((ulonglong)*(ushort *)((&DAT_180025be0)[local_b8[0]] + 0x14) +
                        (&DAT_180025be0)[local_b8[0]]);
        iVar1 = *piVar5;
        if (iVar1 != -1) {
          do {
            if (iVar1 == 0x20) {
              local_58 = (short)piVar5 - *(short *)(&DAT_180025be0 + uVar7);
              local_60 = uVar6;
              local_56[0] = (char)piVar5[2] == '\0';
              if ((char)piVar5[2] == '\0') {
                local_68 = (ulonglong)(uint)piVar5[4];
              }
              else {
                local_68 = *(ulonglong *)(piVar5 + 0xc);
              }
              piVar10 = local_70;
              local_54 = 0;
              local_70[0] = 0x20;
              if ((char)piVar5[3] != '\0') {
                local_50 = *(int *)(param_1 + 4);
                uVar8 = 0;
                local_54 = 2;
                if (*(char *)((longlong)piVar5 + 0x22) != '\0') {
                  do {
                    local_50 = local_50 * 2;
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < *(byte *)((longlong)piVar5 + 0x22));
                }
                piVar10 = local_70;
              }
            }
            piVar5 = (int *)((longlong)piVar5 + (ulonglong)(uint)piVar5[1]);
            iVar1 = *piVar5;
          } while (iVar1 != -1);
          if (piVar10 != (int *)0x0) {
            iVar1 = *param_2;
            local_a0 = uVar7 * 2;
            (&DAT_180025fe0)[uVar7] = (&DAT_180025fe0)[uVar7] + 1;
            uVar7 = 0;
            uVar6 = uVar7;
            if (0 < *(longlong *)(piVar10 + 2)) {
              do {
                if (*(char *)((longlong)piVar10 + 0x1a) == '\0') {
                  uVar3 = FUN_18000f0c0((uint *)param_1,piVar10,uVar7,0x20,(undefined8 *)&local_90);
                  iVar2 = (int)uVar3;
                }
                else {
                  uVar3 = FUN_18000f3f0(param_1,(longlong)piVar10,uVar7,0x20,&local_90);
                  iVar2 = (int)uVar3;
                }
                if (iVar2 != 0) goto LAB_18000e6f0;
                uVar12 = uVar6;
              } while (((local_90 != iVar1) ||
                       (((iVar1 == 0x80 && (local_8a != '\0')) ||
                        (uVar12 = uVar7, (longlong)(uVar11 * local_88) <= lVar4)))) &&
                      (uVar7 = uVar7 + local_8c, uVar6 = uVar12,
                      (longlong)uVar7 < *(longlong *)(piVar10 + 2)));
            }
            if (*(char *)((longlong)piVar10 + 0x1a) == '\0') {
              uVar3 = FUN_18000f0c0((uint *)param_1,piVar10,uVar6,0x20,(undefined8 *)&local_90);
              iVar2 = (int)uVar3;
            }
            else {
              uVar3 = FUN_18000f3f0(param_1,(longlong)piVar10,uVar6,0x20,&local_90);
              iVar2 = (int)uVar3;
            }
            if (iVar2 == 0) {
              if ((local_90 == iVar1) && ((iVar1 != 0x80 || (local_8a == '\0')))) {
                local_b0 = local_80 & 0xffffffffffff;
                (&DAT_180025fe0)[local_b8[0]] = (&DAT_180025fe0)[local_b8[0]] + -1;
                uVar3 = FUN_18000eed0((uint *)param_1,local_b0,local_b8);
                if ((int)uVar3 != 0) goto LAB_18000e6f0;
                uVar6 = (ulonglong)local_b8[0];
                piVar10 = (int *)((ulonglong)*(ushort *)((&DAT_180025be0)[uVar6] + 0x14) +
                                 (&DAT_180025be0)[uVar6]);
                iVar2 = *piVar10;
                while (iVar2 != -1) {
                  if (((((char)piVar10[2] == '\x01') && (iVar2 == iVar1)) &&
                      ((*(longlong *)(piVar10 + 4) * uVar11 - lVar4 == 0 ||
                        (longlong)(*(longlong *)(piVar10 + 4) * uVar11) < lVar4 &&
                       (lVar4 <= (longlong)(*(longlong *)(piVar10 + 6) * uVar11))))) &&
                     ((iVar1 != 0x80 || (*(char *)((longlong)piVar10 + 9) == '\0')))) {
                    uVar3 = FUN_18000dfd0(param_1,local_98,lVar4,(longlong)piVar10);
                    if ((int)uVar3 == 0) {
                      (&DAT_180025fe0)[local_b8[0]] = (&DAT_180025fe0)[local_b8[0]] + -1;
                      (&DAT_180025fe0)[local_a8] = (&DAT_180025fe0)[local_a8] + -1;
                    }
                    goto LAB_18000e6f0;
                  }
                  piVar10 = (int *)((longlong)piVar10 + (ulonglong)(uint)piVar10[1]);
                  iVar2 = *piVar10;
                }
              }
              else {
                uVar6 = (ulonglong)local_b8[0];
              }
              (&DAT_180025fe0)[uVar6] = (&DAT_180025fe0)[uVar6] + -1;
              *(short *)((longlong)&DAT_180025fe0 + local_a0) =
                   *(short *)((longlong)&DAT_180025fe0 + local_a0) + -1;
            }
            goto LAB_18000e6f0;
          }
        }
        (&DAT_180025fe0)[uVar7] = (&DAT_180025fe0)[uVar7] + -1;
      }
    }
  }
LAB_18000e6f0:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_e8);
  return;
}




void FUN_18000e710(uint *param_1,ulonglong param_2,int param_3,undefined1 *param_4,int *param_5)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined1 auStackY_d8 [32];
  uint local_a8 [2];
  ulonglong local_a0;
  ulonglong local_98;
  undefined1 *local_90;
  int local_88 [2];
  ulonglong local_80;
  ulonglong local_78;
  short local_70;
  bool local_6e [6];
  uint local_68;
  int local_60;
  ushort local_5c;
  char local_5a;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_18001e0e8 ^ (ulonglong)auStackY_d8;
  *param_4 = 0;
  local_90 = param_4;
  uVar1 = FUN_18000eed0(param_1,param_2,local_a8);
  if ((int)uVar1 == 0) {
    uVar9 = (ulonglong)local_a8[0];
    piVar8 = (int *)0x0;
    uVar5 = *(ulonglong *)((&DAT_180025be0)[uVar9] + 0x20);
    if (uVar5 != 0) {
      (&DAT_180025fe0)[uVar9] = (&DAT_180025fe0)[uVar9] + -1;
      local_a0 = uVar5 & 0xffffffffffff;
      param_2 = local_a0;
      uVar1 = FUN_18000eed0(param_1,local_a0,local_a8);
      if ((int)uVar1 != 0) goto LAB_18000ea14;
      uVar9 = (ulonglong)local_a8[0];
    }
    piVar2 = (int *)((ulonglong)*(ushort *)((&DAT_180025be0)[uVar9] + 0x14) +
                    (&DAT_180025be0)[uVar9]);
    iVar3 = *piVar2;
    piVar6 = piVar8;
    local_98 = uVar9;
    if (iVar3 != -1) {
      do {
        if ((iVar3 == param_3) && ((param_3 != 0x80 || (*(char *)((longlong)piVar2 + 9) == '\0'))))
        {
          *param_4 = 1;
          *param_5 = *piVar2;
          *(ulonglong *)(param_5 + 4) = param_2;
          *(short *)(param_5 + 6) = (short)piVar2 - *(short *)(&DAT_180025be0 + uVar9);
          iVar3 = piVar2[2];
          *(bool *)((longlong)param_5 + 0x1a) = (char)iVar3 == '\0';
          if ((char)iVar3 == '\0') {
            uVar5 = (ulonglong)(uint)piVar2[4];
          }
          else {
            uVar5 = *(ulonglong *)(piVar2 + 0xc);
          }
          *(ulonglong *)(param_5 + 2) = uVar5;
          *(undefined2 *)(param_5 + 7) = 0;
          if ((char)piVar2[3] != '\0') {
            *(undefined2 *)(param_5 + 7) = 2;
            uVar4 = param_1[1];
            param_5[8] = uVar4;
            if (*(char *)((longlong)piVar2 + 0x22) != '\0') {
              do {
                uVar4 = uVar4 * 2;
                uVar7 = (int)piVar8 + 1;
                piVar8 = (int *)(ulonglong)uVar7;
                param_5[8] = uVar4;
              } while (uVar7 < *(byte *)((longlong)piVar2 + 0x22));
            }
          }
          (&DAT_180025fe0)[uVar9] = (&DAT_180025fe0)[uVar9] + -1;
          goto LAB_18000ea14;
        }
        if (iVar3 == 0x20) {
          local_70 = (short)piVar2 - *(short *)(&DAT_180025be0 + uVar9);
          local_78 = param_2;
          local_6e[0] = (char)piVar2[2] == '\0';
          if ((char)piVar2[2] == '\0') {
            local_80 = (ulonglong)(uint)piVar2[4];
          }
          else {
            local_80 = *(ulonglong *)(piVar2 + 0xc);
          }
          piVar6 = local_88;
          local_6e[2] = false;
          local_6e[3] = false;
          local_88[0] = 0x20;
          if ((char)piVar2[3] != '\0') {
            local_68 = param_1[1];
            local_6e[2] = true;
            local_6e[3] = false;
            if (*(byte *)((longlong)piVar2 + 0x22) != 0) {
              uVar5 = (ulonglong)*(byte *)((longlong)piVar2 + 0x22);
              do {
                local_68 = local_68 * 2;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar6 = local_88;
          }
        }
        piVar2 = (int *)((longlong)piVar2 + (ulonglong)(uint)piVar2[1]);
        iVar3 = *piVar2;
      } while (iVar3 != -1);
      if ((piVar6 != (int *)0x0) && (piVar2 = piVar8, 0 < *(longlong *)(piVar6 + 2))) {
        do {
          if (*(char *)((longlong)piVar6 + 0x1a) == '\0') {
            uVar1 = FUN_18000f0c0(param_1,piVar6,(longlong)piVar2,0x20,(undefined8 *)&local_60);
            if ((int)uVar1 != 0) goto LAB_18000ea14;
          }
          else {
            uVar1 = FUN_18000eed0(param_1,*(longlong *)(piVar6 + 4),(uint *)&local_a0);
            if ((int)uVar1 != 0) goto LAB_18000ea14;
            uVar5 = local_a0 & 0xffffffff;
            memmove(&local_60,
                    (void *)(((ulonglong)piVar2 & 0xffffffff) +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(ushort *)(piVar6 + 6) + (&DAT_180025be0)[uVar5] + 0x14) +
                            (ulonglong)*(ushort *)(piVar6 + 6) + (&DAT_180025be0)[uVar5]),0x20);
            (&DAT_180025fe0)[uVar5] = (&DAT_180025fe0)[uVar5] + -1;
          }
          if (((local_60 == param_3) && (local_58 == 0)) &&
             ((param_3 != 0x80 || (local_5a == '\0')))) {
            local_a0 = local_50 & 0xffffffffffff;
            uVar5 = local_a0;
            (&DAT_180025fe0)[local_98] = (&DAT_180025fe0)[local_98] + -1;
            uVar1 = FUN_18000eed0(param_1,local_a0,local_a8);
            if ((int)uVar1 != 0) goto LAB_18000ea14;
            uVar9 = (ulonglong)local_a8[0];
            piVar6 = (int *)((ulonglong)*(ushort *)((&DAT_180025be0)[uVar9] + 0x14) +
                            (&DAT_180025be0)[uVar9]);
            iVar3 = *piVar6;
            goto joined_r0x00018000ea85;
          }
          piVar2 = (int *)((longlong)piVar2 + (ulonglong)local_5c);
        } while ((longlong)piVar2 < *(longlong *)(piVar6 + 2));
      }
    }
    (&DAT_180025fe0)[local_98] = (&DAT_180025fe0)[local_98] + -1;
  }
  goto LAB_18000ea14;
joined_r0x00018000ea85:
  if (iVar3 == -1) goto LAB_18000eaa8;
  if ((iVar3 == param_3) && ((param_3 != 0x80 || (*(char *)((longlong)piVar6 + 9) == '\0')))) {
    *local_90 = 1;
    *param_5 = *piVar6;
    *(ulonglong *)(param_5 + 4) = uVar5;
    *(short *)(param_5 + 6) = (short)piVar6 - *(short *)(&DAT_180025be0 + uVar9);
    iVar3 = piVar6[2];
    *(bool *)((longlong)param_5 + 0x1a) = (char)iVar3 == '\0';
    if ((char)iVar3 == '\0') {
      uVar5 = (ulonglong)(uint)piVar6[4];
    }
    else {
      uVar5 = *(ulonglong *)(piVar6 + 0xc);
    }
    *(ulonglong *)(param_5 + 2) = uVar5;
    *(undefined2 *)(param_5 + 7) = 0;
    if ((char)piVar6[3] != '\0') {
      *(undefined2 *)(param_5 + 7) = 2;
      uVar4 = param_1[1];
      param_5[8] = uVar4;
      if (*(char *)((longlong)piVar6 + 0x22) != '\0') {
        do {
          uVar4 = uVar4 * 2;
          uVar7 = (int)piVar8 + 1;
          piVar8 = (int *)(ulonglong)uVar7;
          param_5[8] = uVar4;
        } while (uVar7 < *(byte *)((longlong)piVar6 + 0x22));
      }
    }
    (&DAT_180025fe0)[uVar9] = (&DAT_180025fe0)[uVar9] + -1;
    goto LAB_18000ea14;
  }
  piVar6 = (int *)((longlong)piVar6 + (ulonglong)(uint)piVar6[1]);
  iVar3 = *piVar6;
  goto joined_r0x00018000ea85;
LAB_18000eaa8:
  (&DAT_180025fe0)[uVar9] = (&DAT_180025fe0)[uVar9] + -1;
LAB_18000ea14:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_d8);
  return;
}




void FUN_18000eb50(char *param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int *piVar12;
  undefined1 auStackY_138 [32];
  char local_f8;
  byte local_f7 [15];
  ushort local_e8;
  undefined6 uStack_e6;
  char *pcStack_e0;
  ulonglong local_d8 [2];
  short local_c8;
  undefined6 uStack_c6;
  char *pcStack_c0;
  int local_b8 [10];
  int local_90 [10];
  int local_68 [10];
  ulonglong local_40;
  
  local_40 = DAT_18001e0e8 ^ (ulonglong)auStackY_138;
  lVar10 = (ulonglong)*param_3 * 0x70;
  puVar11 = (uint *)(&DAT_180023e20 + lVar10);
  piVar1 = (int *)(&DAT_180023e68 + lVar10);
  puVar2 = (uint *)(&DAT_180023e30)[(ulonglong)*param_3 * 0xe];
  *(undefined8 *)(&DAT_180023e28 + lVar10) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(&DAT_180023e70 + lVar10) = 0;
  *(undefined8 *)(&DAT_180023e78 + lVar10) = 0;
  *(undefined8 *)(&DAT_180023e80 + lVar10) = 0;
  *(undefined8 *)(&DAT_180023e88 + lVar10) = 0;
  FUN_1800043d0((short *)&local_e8,param_1);
  local_d8[0] = 5;
  local_f7[0] = 1;
  if (local_e8 == 0) {
LAB_18000eda3:
    if (param_2 != 7) goto LAB_18000ee12;
    iVar6 = 0x90;
  }
  else {
    do {
      uVar3 = local_d8[0];
      if (local_f7[0] == 0) {
        if (local_e8 == 0) goto LAB_18000edc2;
        goto LAB_18000ee12;
      }
      if (*pcStack_e0 == '\\') {
        pcStack_e0 = pcStack_e0 + 1;
        local_e8 = local_e8 - 1;
      }
      (&DAT_180023e40)[lVar10] = 0;
      if (local_e8 != 0) {
        uVar9 = 0;
        do {
          if (pcStack_e0[uVar9] == '\\') break;
          *(char *)(uVar9 + 0x21 + (longlong)puVar11) = pcStack_e0[uVar9];
          bVar4 = (&DAT_180023e40)[lVar10] + 1;
          uVar9 = (ulonglong)bVar4;
          (&DAT_180023e40)[lVar10] = bVar4;
        } while (bVar4 < local_e8);
      }
      if (*pcStack_e0 == '\\') {
        pcStack_e0 = pcStack_e0 + 1;
        local_e8 = local_e8 - 1;
      }
      uVar5 = 0;
      piVar7 = (int *)0x0;
      if (local_e8 != 0) {
        do {
          uVar5 = (uint)piVar7;
          if (*(char *)((longlong)piVar7 + (longlong)pcStack_e0) == '\\') break;
          uVar5 = uVar5 + 1;
          piVar7 = (int *)(ulonglong)uVar5;
        } while (uVar5 < local_e8);
      }
      local_e8 = local_e8 - (short)uVar5;
      uStack_c6 = uStack_e6;
      local_c8 = (short)uVar5;
      pcStack_c0 = pcStack_e0;
      pcStack_e0 = pcStack_e0 + uVar5;
      iVar6 = FUN_18000e710(puVar2,local_d8[0],0x90,&local_f8,local_68);
      if ((iVar6 != 0) || (local_f8 == '\0')) goto LAB_18000ee12;
      iVar6 = FUN_18000e710(puVar2,uVar3,0xa0,&local_f8,local_b8);
      if (iVar6 != 0) goto LAB_18000ee12;
      piVar7 = local_b8;
      if (local_f8 == '\0') {
        piVar7 = (int *)0x0;
      }
      piVar12 = local_90;
      iVar6 = FUN_18000e710(puVar2,uVar3,0xb0,&local_f8,local_90);
      if (iVar6 != 0) goto LAB_18000ee12;
      if (local_f8 == '\0') {
        piVar12 = (int *)0x0;
      }
      uVar8 = FUN_18000f470(puVar2,(longlong)local_68,piVar7,piVar12,(undefined1 (*) [16])&local_c8,
                            &local_f8,local_d8,local_f7);
      if (((int)uVar8 != 0) || (local_f8 == (char)uVar8)) goto LAB_18000ee12;
    } while (local_e8 != 0);
    if (local_f7[0] != 0) goto LAB_18000eda3;
LAB_18000edc2:
    if (param_2 != 0) goto LAB_18000ee12;
    iVar6 = 0x80;
  }
  iVar6 = FUN_18000e710(puVar2,local_d8[0],iVar6,&local_f8,piVar1);
  if ((iVar6 == 0) && (local_f8 != '\0')) {
    *puVar11 = *puVar11 | 3;
  }
LAB_18000ee12:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_138);
  return;
}




undefined8 FUN_18000ee40(ulonglong param_1,undefined8 *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = (param_1 & 0xffffffff) * 0x70;
  puVar1 = (uint *)(&DAT_180023e30)[(param_1 & 0xffffffff) * 0xe];
  uVar4 = (uint)(*(longlong *)(&DAT_180023e70 + lVar3) - *(longlong *)(&DAT_180023e28 + lVar3));
  if ((longlong)(ulonglong)param_3 <=
      *(longlong *)(&DAT_180023e70 + lVar3) - *(longlong *)(&DAT_180023e28 + lVar3)) {
    uVar4 = param_3;
  }
  *param_4 = uVar4;
  if ((&DAT_180023e82)[lVar3] == '\0') {
    uVar2 = FUN_18000f0c0(puVar1,(int *)(&DAT_180023e68 + lVar3),
                          *(ulonglong *)(&DAT_180023e28 + lVar3),uVar4,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_18000f3f0(puVar1,(longlong)(&DAT_180023e68 + lVar3),
                          *(ulonglong *)(&DAT_180023e28 + lVar3),uVar4,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(ulonglong *)(&DAT_180023e28 + lVar3) =
       *(longlong *)(&DAT_180023e28 + lVar3) + (ulonglong)*param_4;
  return 0;
}




undefined8 FUN_18000eed0(uint *param_1,longlong param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = 0;
  *param_3 = 0;
  uVar8 = uVar5;
  do {
    if ((&DAT_180025be0)[uVar8] == 0) break;
    if ((&DAT_180025de0)[uVar8] == param_2) {
      (&DAT_180025fe0)[uVar8] = (&DAT_180025fe0)[uVar8] + 1;
      return 0;
    }
    uVar11 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar11;
    *param_3 = uVar11;
  } while (uVar11 < 0x40);
  *param_3 = 0;
  do {
    if ((&DAT_180025fe0)[uVar5] == 0) break;
    uVar11 = (int)uVar5 + 1;
    *param_3 = uVar11;
    uVar5 = (ulonglong)uVar11;
  } while (uVar11 < 0x40);
  if ((int)uVar5 == 0x40) {
    uVar7 = 7;
  }
  else {
    if ((&DAT_180025be0)[uVar5] == 0) {
      pvVar6 = FUN_1800049e0(0x1000);
      (&DAT_180025be0)[*param_3] = pvVar6;
      uVar5 = (ulonglong)*param_3;
    }
    (&DAT_180025fe0)[uVar5] = (&DAT_180025fe0)[uVar5] + 1;
    uVar7 = FUN_18000f0c0(param_1,(int *)(param_1 + 4),(ulonglong)param_1[2] * param_2,param_1[2],
                          (undefined8 *)(&DAT_180025be0)[*param_3]);
    if ((int)uVar7 == 0) {
      uVar8 = (ulonglong)*param_3;
      uVar11 = 1;
      lVar4 = (&DAT_180025be0)[uVar8];
      uVar1 = *(ushort *)(lVar4 + 6);
      uVar2 = *(ushort *)(lVar4 + 4);
      if (1 < uVar1) {
        puVar9 = (undefined2 *)(lVar4 + 2 + (ulonglong)uVar2);
        do {
          uVar10 = uVar11 << 9;
          if (*(short *)(((ulonglong)uVar10 - 2) + lVar4) != *(short *)((ulonglong)uVar2 + lVar4)) {
            return 9;
          }
          uVar3 = *puVar9;
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 1;
          *(undefined2 *)(((ulonglong)uVar10 - 2) + lVar4) = uVar3;
        } while (uVar11 < uVar1);
        uVar8 = (ulonglong)*param_3;
      }
      (&DAT_180025de0)[uVar8] = param_2;
      uVar7 = 0;
    }
  }
  return uVar7;
}




undefined8 FUN_18000f040(uint param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong local_res10;
  uint local_res18 [2];
  
  if (param_3 != 0) {
    local_res10 = param_2;
    uVar1 = FUN_180004290(param_1,&local_res10,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1800040b0(param_1,param_4,param_3,local_res18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (param_3 != local_res18[0]) {
      return 5;
    }
  }
  return 0;
}




undefined8
FUN_18000f0c0(uint *param_1,int *param_2,longlong param_3,uint param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  byte *_Dst;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  size_t _Size;
  uint uVar9;
  int *local_res10;
  uint local_68;
  uint local_64;
  int *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48 [2];
  
  if (param_4 != 0) {
    local_res10 = param_2;
    if ((short)param_2[7] == 0) {
      do {
        uVar2 = FUN_18000f800((longlong)param_1,param_2,param_3,(longlong *)&local_58,
                              (int *)&local_68);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        while (puVar7 = local_58, uVar9 = local_68, local_68 != 0) {
          uVar5 = 0x8000;
          if (param_4 < 0x8000) {
            uVar5 = param_4;
          }
          uVar6 = local_68;
          if (uVar5 < local_68) {
            uVar6 = uVar5;
          }
          if ((*(longlong *)(param_2 + 2) < (int)uVar6 + param_3) &&
             (param_4 = (int)*(longlong *)(param_2 + 2) - (int)param_3, uVar6 = param_4,
             (int)param_4 < 1)) {
            return 0;
          }
          local_48[0] = local_58;
          if (uVar6 != 0) {
            uVar5 = *param_1;
            uVar2 = FUN_180004290(uVar5,(longlong *)local_48,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1800040b0(uVar5,param_5,uVar6,&local_64);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            param_2 = local_res10;
            if (uVar6 != local_64) {
              return 5;
            }
          }
          lVar4 = (longlong)(int)uVar6;
          local_68 = uVar9 - uVar6;
          local_58 = (undefined8 *)((longlong)puVar7 + lVar4);
          param_3 = param_3 + lVar4;
          param_5 = (undefined8 *)((longlong)param_5 + lVar4);
          param_4 = param_4 - uVar6;
          if (param_4 == 0) {
            return 0;
          }
        }
      } while( true );
    }
    piVar8 = param_2 + 8;
    local_58 = param_5;
    do {
      lVar4 = *(longlong *)(param_2 + 4);
      uVar9 = (uint)param_3;
      local_60 = piVar8;
      if ((((DAT_180025bb8 != lVar4) || (DAT_180025bb4 != (short)param_2[6])) ||
          (uVar9 < DAT_180025bb0)) || (*piVar8 + DAT_180025bb0 <= uVar9)) {
        uVar3 = 0;
        DAT_180025bb4 = (short)param_2[6];
        DAT_180025bb0 = -param_2[8] & uVar9;
        DAT_180025bb8 = lVar4;
        if (param_2[8] != 0) {
          do {
            iVar1 = (int)uVar3;
            uVar2 = FUN_18000f800((longlong)param_1,param_2,(ulonglong)(iVar1 + DAT_180025bb0),
                                  (longlong *)&local_50,(int *)&local_res10);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            if (local_50 == (undefined8 *)0x0) break;
            uVar5 = param_2[8];
            uVar6 = (uint)local_res10;
            if (uVar5 < (uint)local_res10 + iVar1) {
              uVar6 = uVar5 - iVar1;
              local_res10 = (int *)CONCAT44(local_res10._4_4_,uVar6);
            }
            puVar7 = (undefined8 *)(uVar3 + (longlong)DAT_180025ba8);
            local_48[0] = local_50;
            if (uVar6 != 0) {
              uVar5 = *param_1;
              uVar2 = FUN_180004290(uVar5,(longlong *)local_48,0);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              uVar2 = FUN_1800040b0(uVar5,puVar7,uVar6,&local_64);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              if (uVar6 != local_64) {
                return 5;
              }
              uVar5 = param_2[8];
              uVar6 = (uint)local_res10;
            }
            uVar3 = (ulonglong)(iVar1 + uVar6);
          } while (iVar1 + uVar6 < uVar5);
        }
        piVar8 = local_60;
        uVar5 = param_2[8];
        _Size = (size_t)uVar5;
        uVar6 = (uint)uVar3;
        _Dst = DAT_180025ba0;
        if (uVar6 == 0) {
LAB_18000f2a3:
          memset(_Dst,0,_Size);
        }
        else if (uVar6 < uVar5) {
          uVar3 = FUN_18000dac0((byte)(short)param_2[7],DAT_180025ba0,uVar5,DAT_180025ba8,uVar6,
                                (int *)&local_res10);
          if ((int)uVar3 < 0) {
            return 0x16;
          }
          if ((uint)local_res10 < (uint)param_2[8]) {
            _Size = (size_t)(param_2[8] - (uint)local_res10);
            _Dst = DAT_180025ba0 + ((ulonglong)local_res10 & 0xffffffff);
            goto LAB_18000f2a3;
          }
        }
        else {
          memmove(DAT_180025ba0,DAT_180025ba8,_Size);
        }
      }
      puVar7 = local_58;
      uVar6 = (*piVar8 - uVar9) + DAT_180025bb0;
      uVar5 = param_4;
      if (uVar6 <= param_4) {
        uVar5 = uVar6;
      }
      local_res10 = (int *)CONCAT44(local_res10._4_4_,uVar5);
      memmove(local_58,DAT_180025ba0 + (uVar9 - DAT_180025bb0),(ulonglong)uVar5);
      local_58 = (undefined8 *)((longlong)puVar7 + ((ulonglong)local_res10 & 0xffffffff));
      param_3 = param_3 + ((ulonglong)local_res10 & 0xffffffff);
      param_4 = param_4 - (uint)local_res10;
    } while (param_4 != 0);
  }
  return 0;
}




undefined8
FUN_18000f3f0(uint *param_1,longlong param_2,ulonglong param_3,uint param_4,void *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  uint local_res10 [2];
  
  uVar1 = FUN_18000eed0(param_1,*(longlong *)(param_2 + 0x10),local_res10);
  if ((int)uVar1 == 0) {
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0x18) + (&DAT_180025be0)[local_res10[0]];
    memmove(param_5,(void *)((param_3 & 0xffffffff) + (ulonglong)*(ushort *)(lVar2 + 0x14) + lVar2),
            (ulonglong)param_4);
    (&DAT_180025fe0)[local_res10[0]] = (&DAT_180025fe0)[local_res10[0]] + -1;
    uVar1 = 0;
  }
  return uVar1;
}




undefined8
FUN_18000f470(uint *param_1,longlong param_2,int *param_3,int *param_4,undefined1 (*param_5) [16],
             undefined1 *param_6,undefined8 *param_7,byte *param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ushort *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  byte local_res10 [8];
  uint local_44;
  uint local_40 [2];
  undefined1 local_38 [16];
  
  *param_6 = 0;
  uVar7 = FUN_18000eed0(param_1,*(longlong *)(param_2 + 0x10),&local_44);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  lVar8 = (ulonglong)*(ushort *)(param_2 + 0x18) + (&DAT_180025be0)[local_44];
  puVar14 = (uint *)(lVar8 + 0x10 + (ulonglong)*(ushort *)(lVar8 + 0x14));
  uVar18 = 0;
  uVar5 = *(uint *)((ulonglong)*(ushort *)(lVar8 + 0x14) + 8 + lVar8);
  do {
    puVar17 = (undefined8 *)((ulonglong)*puVar14 + (longlong)puVar14);
    bVar1 = *(byte *)((longlong)puVar17 + 0xc);
    while ((bVar1 >> 1 & 1) == 0) {
      puVar15 = (ushort *)((longlong)puVar17 + 0x52);
      local_38 = *param_5;
      uVar16 = local_38._0_4_ & 0xffff;
      if (uVar16 * 2 == (uint)*(byte *)(puVar17 + 10) * 2) {
        if ((local_38 & (undefined1  [16])0xffff) == (undefined1  [16])0x0) {
LAB_18000f597:
          *param_6 = 1;
          *param_7 = *puVar17;
          *(undefined2 *)((longlong)param_7 + 6) = 0;
          *param_8 = (byte)((uint)*(undefined4 *)(puVar17 + 9) >> 0x1c) & 1;
          goto LAB_18000f5c8;
        }
        uVar13 = 0;
        while( true ) {
          bVar1 = *(byte *)((ulonglong)uVar13 + local_38._8_8_);
          uVar9 = (uint)bVar1;
          if ((byte)(bVar1 + 0x9f) < 0x1a) {
            uVar9 = bVar1 - 0x20;
          }
          uVar2 = *puVar15;
          uVar6 = (uint)uVar2;
          if ((ushort)(uVar2 - 0x61) < 0x1a) {
            uVar6 = uVar2 - 0x20;
          }
          if (uVar9 != uVar6) break;
          uVar13 = uVar13 + 1;
          puVar15 = puVar15 + 1;
          if (uVar16 <= uVar13) goto LAB_18000f597;
        }
      }
      puVar17 = (undefined8 *)((longlong)puVar17 + (ulonglong)*(ushort *)(puVar17 + 1));
      bVar1 = *(byte *)((longlong)puVar17 + 0xc);
    }
    if ((param_3 == (int *)0x0) || (param_4 == (int *)0x0)) {
LAB_18000f5c8:
      (&DAT_180025fe0)[local_44] = (&DAT_180025fe0)[local_44] + -1;
      return 0;
    }
    do {
      uVar12 = (ulonglong)(uVar5 * uVar18);
      if (*(longlong *)(param_3 + 2) <= (longlong)uVar12) {
        return 0;
      }
      bVar1 = (byte)uVar18;
      if (*(char *)((longlong)param_4 + 0x1a) == '\0') {
        uVar7 = FUN_18000f0c0(param_1,param_4,(ulonglong)(uVar18 >> 3),1,(undefined8 *)local_res10);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      else {
        uVar7 = FUN_18000eed0(param_1,*(longlong *)(param_4 + 4),local_40);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        uVar11 = (ulonglong)local_40[0];
        memmove(local_res10,
                (void *)((ulonglong)(uVar18 >> 3) +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(ushort *)(param_4 + 6) + (&DAT_180025be0)[uVar11] + 0x14) +
                        (ulonglong)*(ushort *)(param_4 + 6) + (&DAT_180025be0)[uVar11]),1);
        (&DAT_180025fe0)[uVar11] = (&DAT_180025fe0)[uVar11] + -1;
      }
      uVar18 = uVar18 + 1;
    } while ((local_res10[0] >> (bVar1 & 7) & 1) == 0);
    if (DAT_180025bc0 == (undefined8 *)0x0) {
      DAT_180025bc0 = (undefined8 *)FUN_1800049e0(uVar5);
    }
    if (*(char *)((longlong)param_3 + 0x1a) == '\0') {
      uVar7 = FUN_18000f0c0(param_1,param_3,uVar12,uVar5,DAT_180025bc0);
    }
    else {
      uVar7 = FUN_18000f3f0(param_1,(longlong)param_3,uVar12,uVar5,DAT_180025bc0);
    }
    puVar17 = DAT_180025bc0;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar16 = 1;
    uVar2 = *(ushort *)((longlong)DAT_180025bc0 + 6);
    uVar3 = *(ushort *)((longlong)DAT_180025bc0 + 4);
    if (1 < uVar2) {
      puVar10 = (undefined2 *)((longlong)DAT_180025bc0 + (ulonglong)uVar3 + 2);
      do {
        uVar13 = uVar16 << 9;
        if (*(short *)(((ulonglong)uVar13 - 2) + (longlong)puVar17) !=
            *(short *)((ulonglong)uVar3 + (longlong)puVar17)) {
          return 9;
        }
        uVar4 = *puVar10;
        uVar16 = uVar16 + 1;
        puVar10 = puVar10 + 1;
        *(undefined2 *)(((ulonglong)uVar13 - 2) + (longlong)puVar17) = uVar4;
      } while (uVar16 < uVar2);
    }
    puVar14 = (uint *)(DAT_180025bc0 + 3);
  } while( true );
}




undefined8
FUN_18000f800(longlong param_1,int *param_2,longlong param_3,longlong *param_4,int *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint *puVar6;
  short *psVar7;
  
  if (((param_2 != (int *)(param_1 + 0x10)) ||
      (puVar6 = (uint *)(param_1 + 0x38), param_3 < *(longlong *)(param_1 + 0x40))) ||
     (*(longlong *)(param_1 + 0x40 + (ulonglong)*puVar6 * 8) <= param_3)) {
    psVar7 = (short *)(param_1 + 0x1c0);
    uVar5 = 0;
    puVar6 = (uint *)(param_1 + 0x1e0);
    plVar4 = (longlong *)(param_1 + 0x140);
    do {
      if (((*(longlong *)(param_2 + 4) == *plVar4) && ((short)param_2[6] == *psVar7)) &&
         ((*(longlong *)(puVar6 + 2) <= param_3 &&
          (param_3 < *(longlong *)(puVar6 + (ulonglong)*puVar6 * 2 + 2))))) goto LAB_18000f8df;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 1;
      psVar7 = psVar7 + 1;
      puVar6 = puVar6 + 0x42;
    } while (uVar5 < 0x10);
    uVar5 = DAT_180025558 & 0xf;
    *(longlong *)(param_1 + 0x140 + (ulonglong)uVar5 * 8) = *(longlong *)(param_2 + 4);
    puVar6 = (uint *)(param_1 + 0x1e0 + (ulonglong)uVar5 * 0x108);
    *(short *)(param_1 + 0x1c0 + (ulonglong)(DAT_180025558 & 0xf) * 2) = (short)param_2[6];
    DAT_180025558 = DAT_180025558 + 1;
    uVar1 = FUN_18000e320(param_1,param_2,param_3,puVar6);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
LAB_18000f8df:
  uVar5 = 0;
  if (*puVar6 != 0) {
    do {
      uVar3 = uVar5 + 1;
      if (param_3 < *(longlong *)(puVar6 + (ulonglong)uVar3 * 2 + 2)) {
        lVar2 = *(longlong *)(puVar6 + (ulonglong)uVar5 * 2 + 0x22);
        if (lVar2 != 0) {
          lVar2 = (lVar2 - *(longlong *)(puVar6 + (ulonglong)uVar5 * 2 + 2)) + param_3;
        }
        *param_4 = lVar2;
        *param_5 = puVar6[(ulonglong)uVar3 * 2 + 2] - (int)param_3;
        return 0;
      }
      uVar5 = uVar3;
    } while (uVar3 < *puVar6);
  }
  return 0x16;
}




void FUN_18000f960(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *_Dst;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pvVar1 = (void *)param_1[1];
  lVar2 = *param_1;
  uVar6 = (longlong)pvVar1 - lVar2;
  uVar4 = param_1[2] - lVar2;
  if (param_2 <= uVar4) {
    if (param_2 <= uVar6) {
      if (param_2 != uVar6) {
        param_1[1] = lVar2 + param_2;
      }
      return;
    }
    memset(pvVar1,0,(param_2 + lVar2) - (longlong)pvVar1);
    param_1[1] = param_2 + lVar2;
    return;
  }
  if (0x7fffffffffffffff < param_2) {
    FUN_180001980();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = param_2;
  if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
     (uVar5 = (uVar4 >> 1) + uVar4, uVar5 < param_2)) {
    uVar5 = param_2;
  }
  _Dst = FUN_180011b40(param_1,uVar5);
  memset((void *)((longlong)_Dst + uVar6),0,
         (param_2 + (longlong)_Dst) - (longlong)((longlong)_Dst + uVar6));
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
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
  *param_1 = (longlong)_Dst;
  param_1[1] = param_2 + (longlong)_Dst;
  param_1[2] = (longlong)_Dst + uVar5;
  return;
}




undefined8 * FUN_18000fab0(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180001980();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar1)();
      return puVar3;
    }
    pvVar2 = FUN_180011b40(param_1,param_2);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (longlong)pvVar2 + param_2;
    pvVar2 = (void *)*param_1;
    memset(pvVar2,0,param_2);
    param_1[1] = (longlong)pvVar2 + param_2;
  }
  return param_1;
}




undefined8 * FUN_18000fb40(undefined8 *param_1,undefined4 param_2,void *param_3,ulonglong param_4)

{
  undefined8 *_Dst;
  
  *param_1 = RegValueI::vftable;
  *param_1 = RegValue::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_4;
  _Dst = param_1 + 4;
  param_1[3] = _Dst;
  if (0x20 < param_4) {
    _Dst = (undefined8 *)operator_new(param_4);
    param_1[3] = _Dst;
  }
  memcpy(_Dst,param_3,param_4);
  return param_1;
}




undefined8 * FUN_18000fbc0(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = RegistryI::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = RegistryReader::vftable;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  return param_1;
}




void FUN_18000fc10(undefined8 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_18000fc40(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong lVar3;
  
  lVar3 = param_1[4];
  while (lVar3 != 0) {
    FUN_180001530(*(longlong **)(param_1[1] + (param_1[2] - 1 & lVar3 + param_1[3] + -1) * 8));
    plVar1 = param_1 + 4;
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      param_1[3] = 0;
    }
    lVar3 = param_1[4];
  }
  lVar3 = param_1[2];
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    pvVar2 = *(void **)(param_1[1] + lVar3 * 8);
    if (pvVar2 != (void *)0x0) {
      free(pvVar2);
    }
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(param_1[2] * 8)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
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




void FUN_18000fd40(undefined8 *param_1)

{
  FUN_18000fc40(param_1);
  return;
}




void FUN_18000fd60(longlong *param_1)

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




void FUN_18000fdd0(undefined8 *param_1)

{
  *param_1 = RegValue::vftable;
  if (param_1 + 4 != (undefined8 *)param_1[3]) {
    free((undefined8 *)param_1[3]);
    param_1[3] = 0;
  }
  *param_1 = RegValueI::vftable;
  return;
}




void FUN_18000fe20(undefined8 *param_1)

{
  *param_1 = RegValueI::vftable;
  return;
}




void FUN_18000fe30(undefined8 *param_1)

{
  *param_1 = RegistryI::vftable;
  return;
}




void FUN_18000fe40(undefined8 *param_1)

{
  *param_1 = RegistryReader::vftable;
  *param_1 = RegistryI::vftable;
  return;
}




longlong * FUN_18000fe70(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  void *pvVar4;
  longlong lVar5;
  size_t _Size;
  
  if (param_2 != param_1) {
    uVar1 = (**(code **)*param_2)(param_2);
    *(undefined4 *)(param_1 + 1) = uVar1;
    if (param_1 + 4 != (longlong *)param_1[3]) {
      uVar2 = (**(code **)(*param_2 + 8))(param_2);
      if ((ulonglong)param_1[2] < uVar2) {
        free((void *)param_1[3]);
      }
    }
    uVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (0x20 < uVar2) {
      _Var3 = (**(code **)(*param_2 + 8))(param_2);
      pvVar4 = operator_new(_Var3);
      param_1[3] = (longlong)pvVar4;
    }
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    param_1[2] = lVar5;
    _Size = (**(code **)(*param_2 + 8))(param_2);
    pvVar4 = (void *)(**(code **)(*param_2 + 0x10))(param_2);
    memcpy((void *)param_1[3],pvVar4,_Size);
  }
  return param_1;
}




ulonglong FUN_18000ff30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *_Buf2;
  void *_Buf1;
  undefined4 extraout_var;
  
  iVar1 = (**(code **)*param_2)(param_2);
  uVar2 = (**(code **)*param_1)(param_1);
  if ((int)uVar2 == iVar1) {
    uVar3 = (**(code **)(*param_2 + 8))(param_2);
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (uVar2 == uVar3) {
      _Size = (**(code **)(*param_2 + 8))(param_2);
      _Buf2 = (void *)(**(code **)(*param_2 + 0x10))(param_2);
      _Buf1 = (void *)(**(code **)(*param_1 + 0x10))(param_1);
      iVar1 = memcmp(_Buf1,_Buf2,_Size);
      uVar2 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




bool FUN_18000ffe0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  return cVar1 == '\0';
}




undefined8 * FUN_180010000(undefined8 *param_1,uint param_2)

{
  *param_1 = RegValue::vftable;
  if (param_1 + 4 != (undefined8 *)param_1[3]) {
    free((undefined8 *)param_1[3]);
    param_1[3] = 0;
  }
  *param_1 = RegValueI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180010070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RegValueI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800100a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RegistryI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800100d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RegistryReader::vftable;
  *param_1 = RegistryI::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180010120(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_180010130(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180010140(uint *param_1,undefined8 *param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  longlong *plVar5;
  ulonglong uVar6;
  __uint64 _Var7;
  size_t _Size;
  void *_Src;
  int *_Dst;
  longlong ***_Src_00;
  longlong **pplVar8;
  undefined8 uVar9;
  undefined1 auStack_1118 [32];
  undefined4 local_10f8 [2];
  longlong **local_10f0;
  undefined4 local_10e8;
  longlong *local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 *local_10b0;
  uint local_10a8;
  uint uStack_10a4;
  uint uStack_10a0;
  uint uStack_109c;
  int local_1088 [6];
  uint local_1070;
  int local_1060;
  undefined **local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18001015d;
  local_10b8 = 0xfffffffffffffffe;
  local_48 = DAT_18001e0e8 ^ (ulonglong)auStack_1118;
  pplVar8 = (longlong **)0x0;
  local_10e8 = 0;
  local_88 = RegValue::vftable;
  local_80 = 0;
  local_78 = 0;
  local_70 = local_68;
  local_10f0 = &local_10e0;
  local_10e0 = (longlong *)0x0;
  uStack_10d8 = 0;
  local_10d0 = 0;
  local_10c8 = 0;
  local_10c0 = 0;
  local_10b0 = param_2;
  local_10e0 = (longlong *)operator_new(0x10);
  *local_10e0 = 0;
  local_10e0[1] = 0;
  *local_10e0 = (longlong)&local_10e0;
  cVar1 = FUN_180011580((ulonglong)param_1,param_3,(longlong)&local_10e0,param_4);
  if (cVar1 == '\0') goto LAB_18001037b;
  local_10f0 = (longlong **)0x0;
  uVar9 = 0;
  _Src_00 = &local_10f0;
  _Dst = (int *)(ulonglong)param_1[2];
  uVar3 = FUN_180004960(param_1[2]);
  if ((int)uVar3 == 0) {
    local_10f8[0] = 0;
    memset(param_1 + 4,0,0x1000);
    param_4 = local_10f8;
    uVar9 = 0x1000;
    _Src_00 = (longlong ***)(param_1 + 4);
    _Dst = (int *)(ulonglong)param_1[2];
    uVar3 = FUN_180004930(param_1[2]);
    if ((int)uVar3 == 0) {
      param_1[3] = 0;
      _Src_00 = (longlong ***)(param_1 + 4);
      uVar9 = 0x1000;
      _Dst = local_1088;
      memcpy(_Dst,_Src_00,0x1000);
      param_1[3] = 0x1000;
      if (local_1088[0] == 0x66676572) {
        param_1[0x404] = local_1070;
        param_1[0x405] = 0x1000;
        param_1[0x406] = local_1060 + 0x1000U;
        if (local_1060 + 0x1000U < 0x1001) goto LAB_18001037b;
        local_10f0 = (longlong **)0x1000;
        uVar9 = 0;
        _Src_00 = &local_10f0;
        _Dst = (int *)(ulonglong)param_1[2];
        uVar3 = FUN_180004960(param_1[2]);
        if ((int)uVar3 == 0) {
          local_10f8[0] = 0;
          memset(param_1 + 4,0,0x1000);
          param_4 = local_10f8;
          uVar9 = 0x1000;
          _Src_00 = (longlong ***)(param_1 + 4);
          _Dst = (int *)(ulonglong)param_1[2];
          uVar3 = FUN_180004930(param_1[2]);
          if ((int)uVar3 == 0) {
            param_1[3] = 0;
            local_10a8 = param_1[4];
            uStack_10a4 = param_1[5];
            uStack_10a0 = param_1[6];
            uStack_109c = param_1[7];
            param_1[3] = 0x20;
            if (local_10a8 == 0x6e696268) {
              param_1[0x408] = 0x1000;
              param_1[0x407] = 0x20;
              param_1[0x409] = uStack_10a0;
              FUN_1800104b0(param_1,(ulonglong *)&local_10e0,&local_88,param_4);
              goto LAB_18001037b;
            }
          }
        }
      }
    }
  }
  thunk_FUN_18000bbb0(_Dst,_Src_00,uVar9,param_4);
  FUN_180001680();
LAB_18001037b:
  pplVar4 = (longlong **)operator_new(0x40);
  if (pplVar4 != (longlong **)0x0) {
    *pplVar4 = (longlong *)RegValueI::vftable;
    *pplVar4 = (longlong *)RegValue::vftable;
    local_10f0 = pplVar4;
    uVar2 = (*(code *)*local_88)(&local_88);
    *(undefined4 *)(pplVar4 + 1) = uVar2;
    plVar5 = (longlong *)(*(code *)local_88[1])(&local_88);
    pplVar4[2] = plVar5;
    pplVar4[3] = (longlong *)(pplVar4 + 4);
    uVar6 = (*(code *)local_88[1])(&local_88);
    if (0x20 < uVar6) {
      _Var7 = (*(code *)local_88[1])(&local_88);
      plVar5 = (longlong *)operator_new(_Var7);
      pplVar4[3] = plVar5;
    }
    _Size = (*(code *)local_88[1])(&local_88);
    _Src = (void *)(*(code *)local_88[2])(&local_88);
    memcpy(pplVar4[3],_Src,_Size);
    pplVar8 = pplVar4;
  }
  local_10f0 = (longlong **)0x0;
  *param_2 = pplVar8;
  local_10e8 = 1;
  FUN_18000fc40(&local_10e0);
  local_88 = RegValue::vftable;
  if (local_68 != local_70) {
    free(local_70);
    local_70 = (undefined1 *)0x0;
  }
  local_88 = RegValueI::vftable;
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1118);
  return;
}




undefined1 FUN_1800104b0(uint *param_1,ulonglong *param_2,void **param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  void **ppvVar8;
  undefined4 local_res8 [2];
  ulonglong local_res20;
  uint local_50;
  void *local_40;
  undefined8 uStack_38;
  longlong local_30;
  
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  puVar6 = param_2;
  ppvVar8 = param_3;
  if (param_1[0x408] <= param_1[0x409]) {
    while( true ) {
      uVar4 = param_1[3] + 0xc;
      uVar3 = (ulonglong)uVar4;
      if (0x1000 < uVar4) break;
      uVar2 = *(undefined8 *)((ulonglong)param_1[3] + 0x10 + (longlong)param_1);
      param_1[3] = uVar4;
      local_50 = (uint)uVar2;
      if ((int)local_50 < 1) {
        puVar6 = (ulonglong *)(ulonglong)-local_50;
        param_1[0x40a] = -local_50;
        ppvVar8 = &local_40;
        FUN_18000f960((longlong *)&local_40,(ulonglong)puVar6);
        pvVar5 = local_40;
        uVar7 = param_1[3] - 0xc;
        uVar3 = (ulonglong)uVar7;
        param_1[3] = uVar7;
        uVar4 = param_1[0x40a];
        if (((local_40 == (void *)0x0) || (0x1000 < uVar4)) || (0x1000 < uVar7 + uVar4)) break;
        memcpy(local_40,(void *)((longlong)param_1 + (ulonglong)uVar7 + 0x10),(ulonglong)uVar4);
        param_1[3] = param_1[3] + uVar4;
        uVar3 = FUN_180010700(param_1,(longlong)pvVar5,param_1[0x40a],(longlong *)param_2,param_3);
        uVar1 = (undefined1)uVar3;
        goto LAB_180010695;
      }
      param_1[0x40a] = local_50;
      param_1[0x407] = param_1[0x407] + local_50;
      if (0xfff < uVar4) {
        uVar4 = param_1[0x408];
        do {
          if (param_1[0x409] <= uVar4) break;
          uVar7 = param_1[0x405];
          local_res20 = (ulonglong)(uVar7 + uVar4) & 0xfffff000;
          ppvVar8 = (void **)0x0;
          puVar6 = &local_res20;
          uVar3 = (ulonglong)param_1[2];
          uVar2 = FUN_180004960(param_1[2]);
          if ((int)uVar2 != 0) goto LAB_180010689;
          local_res8[0] = 0;
          memset(param_1 + 4,0,0x1000);
          param_4 = local_res8;
          ppvVar8 = (void **)0x1000;
          puVar6 = (ulonglong *)(param_1 + 4);
          uVar3 = (ulonglong)param_1[2];
          uVar2 = FUN_180004930(param_1[2]);
          if ((int)uVar2 != 0) goto LAB_180010689;
          uVar7 = uVar7 + uVar4 & 0xfff;
          param_1[3] = uVar7;
          param_1[0x408] = param_1[0x408] + 0x1000;
          uVar4 = param_1[0x408];
        } while (0xfff < uVar7);
      }
      if ((param_1[0x409] <= param_1[0x407]) || (param_1[0x409] < param_1[0x408]))
      goto LAB_180010693;
    }
LAB_180010689:
    thunk_FUN_18000bbb0(uVar3,puVar6,ppvVar8,param_4);
    FUN_180001680();
  }
LAB_180010693:
  uVar1 = 0;
LAB_180010695:
  if (local_40 != (void *)0x0) {
    pvVar5 = local_40;
    if ((0xfff < (ulonglong)(local_30 - (longlong)local_40)) &&
       (pvVar5 = *(void **)((longlong)local_40 + -8),
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar5);
  }
  return uVar1;
}




ulonglong FUN_180010700(uint *param_1,longlong param_2,uint param_3,longlong *param_4,void **param_5
                       )

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void **ppvVar4;
  
  lVar3 = 8;
  if (param_1[0x404] != 1) {
    lVar3 = 4;
  }
  ppvVar4 = (void **)(lVar3 + param_2);
  uVar1 = *(ushort *)ppvVar4;
  if ((uVar1 == 0x6b6e) && (0x54 < param_3)) {
    uVar2 = FUN_180010a00((ulonglong)param_1,ppvVar4,param_4,(int *)param_5);
    return uVar2;
  }
  if ((uVar1 == 0x6b76) && (0x18 < param_3)) {
    uVar2 = FUN_1800110f0(param_1,ppvVar4,param_4,param_5);
    return uVar2;
  }
  if (((uVar1 + 0x9994 & 0xfcff) == 0) && (uVar1 != 0x676c)) {
    uVar2 = FUN_1800107c0((longlong)param_1,(short *)ppvVar4,(undefined4 *)param_4,
                          (undefined4 *)param_5);
    return uVar2;
  }
  thunk_FUN_18000bbb0(param_1,(ulonglong)uVar1,0xfcff,param_4);
  uVar2 = FUN_180001680();
  return uVar2 & 0xffffffffffffff00;
}




ulonglong FUN_1800107c0(longlong param_1,short *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong *_Dst;
  uint uVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  undefined4 local_res18 [2];
  ulonglong local_68 [2];
  undefined8 local_58;
  void *local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_68[1] = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 8) == 0) {
    thunk_FUN_18000bbb0(param_1,param_2,param_3,param_4);
    uVar1 = FUN_180001680();
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    uVar1 = 0;
    local_38 = 0;
    puVar9 = param_4;
    if (param_2[1] != 0) {
      do {
        if ((*param_2 + 0x9994U & 0xfdff) == 0) {
          iVar4 = *(int *)(param_2 + uVar1 * 4 + 2);
        }
        else {
          iVar4 = *(int *)(param_2 + uVar1 * 2 + 2);
        }
        local_68[0] = (ulonglong)(iVar4 + 0x1000) & 0xfffff000;
        ppvVar8 = (void **)0x0;
        _Dst = local_68;
        uVar3 = (ulonglong)*(uint *)(param_1 + 8);
        uVar2 = FUN_180004960(*(uint *)(param_1 + 8));
        if ((int)uVar2 == 0) {
          local_res18[0] = 0;
          _Dst = (ulonglong *)(param_1 + 0x10);
          memset(_Dst,0,0x1000);
          puVar9 = local_res18;
          ppvVar8 = (void **)0x1000;
          uVar3 = (ulonglong)*(uint *)(param_1 + 8);
          uVar2 = FUN_180004930(*(uint *)(param_1 + 8));
          if ((int)uVar2 != 0) goto LAB_180010963;
          uVar7 = iVar4 + 0x1000U & 0xfff;
          *(uint *)(param_1 + 0xc) = uVar7;
          local_58 = 0;
          uVar5 = uVar7 + 0xc;
          uVar3 = (ulonglong)uVar5;
          if (0x1000 < uVar5) goto LAB_180010963;
          local_58 = *(undefined8 *)((ulonglong)uVar7 + 0x10 + param_1);
          *(uint *)(param_1 + 0xc) = uVar5;
          if ((int)local_58 < 1) {
            uVar7 = -(int)local_58;
            ppvVar8 = &local_48;
            _Dst = (ulonglong *)(ulonglong)uVar7;
            FUN_18000f960((longlong *)&local_48,(ulonglong)_Dst);
            pvVar6 = local_48;
            uVar5 = *(int *)(param_1 + 0xc) - 0xc;
            uVar3 = (ulonglong)uVar5;
            *(uint *)(param_1 + 0xc) = uVar5;
            if (((local_48 == (void *)0x0) || (0x1000 < uVar7)) || (0x1000 < uVar5 + uVar7))
            goto LAB_180010963;
            memcpy(local_48,(void *)(param_1 + 0x10 + (ulonglong)uVar5),(ulonglong)uVar7);
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar7;
            puVar9 = param_3;
            uVar3 = FUN_180010700((uint *)param_1,(longlong)pvVar6,uVar7,(longlong *)param_3,
                                  (void **)param_4);
            if ((char)uVar3 != '\0') {
              uVar1 = 1;
              goto LAB_180010981;
            }
          }
        }
        else {
LAB_180010963:
          thunk_FUN_18000bbb0(uVar3,_Dst,ppvVar8,puVar9);
          FUN_180001680();
        }
        uVar5 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar5;
      } while (uVar5 < (ushort)param_2[1]);
    }
    uVar1 = 0;
LAB_180010981:
    if (local_48 != (void *)0x0) {
      pvVar6 = local_48;
      if ((0xfff < (ulonglong)(local_38 - (longlong)local_48)) &&
         (pvVar6 = *(void **)((longlong)local_48 + -8),
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar6);
    }
  }
  return uVar1;
}




void FUN_180010a00(ulonglong param_1,void **param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *_Buf2;
  char *pcVar8;
  undefined8 *_Buf1;
  size_t *psVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  ulonglong local_160;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_18001e0e8 ^ (ulonglong)auStack_188;
  if (param_3[4] == 0) {
    thunk_FUN_18000bbb0(param_1,param_2,param_3,param_4);
    FUN_180001680();
  }
  else {
    lVar7 = 0;
    if ((longlong *)*param_3 != (longlong *)0x0) {
      lVar7 = *(longlong *)*param_3;
    }
    uVar1 = *(ushort *)((longlong)param_2 + 0x4c);
    uVar10 = (ulonglong)uVar1;
    _Buf1 = *(undefined8 **)
             (*(longlong *)(lVar7 + 8) + (*(longlong *)(lVar7 + 0x10) - 1U & param_3[3]) * 8);
    memcpy(local_158,param_2 + 10,uVar10);
    if (0xff < uVar1) {
      __report_rangecheckfailure();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar8 = local_158;
    local_158[uVar10] = '\0';
    uVar5 = (uint)uVar1;
    if (local_158 + uVar10 < local_158) {
      uVar5 = 0;
    }
    if ((ulonglong)uVar5 != 0) {
      do {
        iVar6 = toupper((int)*pcVar8);
        *pcVar8 = (char)iVar6;
        pcVar8 = pcVar8 + 1;
      } while ((longlong)pcVar8 - (longlong)local_158 != (ulonglong)uVar5);
      uVar10 = (ulonglong)*(ushort *)((longlong)param_2 + 0x4c);
    }
    uVar2 = _Buf1[2];
    uVar3 = _Buf1[3];
    local_160 = uVar10;
    local_168 = uVar2;
    psVar9 = &local_168;
    if (uVar10 < uVar2) {
      psVar9 = &local_160;
    }
    _Buf2 = _Buf1;
    if (0xf < uVar3) {
      _Buf2 = (undefined8 *)*_Buf1;
    }
    iVar6 = memcmp(local_158,_Buf2,*psVar9);
    if (iVar6 != 0) {
      if (0xf < uVar3) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      uVar10 = uVar2;
      if (0xc < uVar2) {
        uVar10 = 0xc;
      }
      iVar6 = memcmp(_Buf1,"$$$PROTO.HIV",uVar10);
      if (((iVar6 != 0) || (uVar2 != 0xc)) || (*(uint *)(param_1 + 0x1010) < 5)) goto LAB_180010b9b;
    }
    FUN_180011de0((longlong)param_3);
    if (param_3[4] == 1) {
      FUN_180010db0(param_1,(ulonglong *)param_2,(int *)param_3,param_4);
    }
    else {
      FUN_180010bf0(param_1,param_2,(longlong)param_3,param_4);
    }
  }
LAB_180010b9b:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_188);
  return;
}




ulonglong FUN_180010bf0(ulonglong param_1,void **param_2,longlong param_3,int *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_res18 [2];
  void *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = param_1;
  lVar7 = param_3;
  piVar8 = param_4;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    uVar6 = *(int *)((longlong)param_2 + 0x1c) + 0x1000;
    local_38 = (void *)((ulonglong)uVar6 & 0xfffff000);
    lVar7 = 0;
    param_2 = &local_38;
    uVar3 = (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = FUN_180004960(*(uint *)(param_1 + 8));
    if ((int)uVar2 == 0) {
      local_res18[0] = (int)uVar2;
      memset((void *)(param_1 + 0x10),0,0x1000);
      piVar8 = local_res18;
      lVar7 = 0x1000;
      param_2 = (void **)(param_1 + 0x10);
      uVar3 = (ulonglong)*(uint *)(param_1 + 8);
      uVar2 = FUN_180004930(*(uint *)(param_1 + 8));
      if ((int)uVar2 == 0) {
        uVar6 = uVar6 & 0xfff;
        *(uint *)(param_1 + 0xc) = uVar6;
        uVar4 = uVar6 + 0xc;
        uVar3 = (ulonglong)uVar4;
        if (uVar4 < 0x1001) {
          local_38 = *(void **)((ulonglong)uVar6 + 0x10 + param_1);
          uVar6 = *(uint *)((ulonglong)uVar6 + 0x18 + param_1);
          uVar3 = (ulonglong)uVar6;
          _uStack_30 = CONCAT44(uStack_2c,uVar6);
          *(uint *)(param_1 + 0xc) = uVar4;
          if ((int)local_38 < 1) {
            uVar6 = -(int)local_38;
            FUN_18000fab0(&local_38,(ulonglong)uVar6);
            pvVar1 = local_38;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0xc;
            uVar9 = 0;
            uVar3 = (ulonglong)uVar6;
            lVar7 = param_1 + 8;
            pvVar5 = local_38;
            uVar2 = FUN_180011480(lVar7,local_38,uVar6,0);
            if ((int)uVar2 == 0) {
              uVar3 = FUN_180010700((uint *)param_1,(longlong)pvVar1,uVar6,(longlong *)param_3,
                                    (void **)param_4);
              if ((char)uVar3 != '\0') {
                uVar3 = 1;
                goto LAB_180010d0a;
              }
            }
            else {
              thunk_FUN_18000bbb0(lVar7,pvVar5,uVar3,uVar9);
              FUN_180001680();
            }
            uVar3 = 0;
LAB_180010d0a:
            if (pvVar1 == (void *)0x0) {
              return uVar3;
            }
            pvVar5 = pvVar1;
            if ((0xfff < (ulonglong)(local_28 - (longlong)pvVar1)) &&
               (pvVar5 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar5);
            return uVar3;
          }
          goto LAB_180010d88;
        }
      }
    }
  }
  thunk_FUN_18000bbb0(uVar3,param_2,lVar7,piVar8);
  uVar3 = FUN_180001680();
LAB_180010d88:
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_180010db0(ulonglong param_1,ulonglong *param_2,int *param_3,int *param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  void *pvVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int local_94;
  undefined8 local_90;
  ulonglong local_80;
  ulonglong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  void *local_58 [2];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar4 = param_1;
  puVar7 = param_2;
  piVar10 = param_3;
  piVar12 = param_4;
  if (*(longlong *)(param_3 + 8) != 0) {
    uVar9 = (int)param_2[5] + 0x1000;
    local_80 = (ulonglong)uVar9 & 0xfffff000;
    piVar10 = (int *)0x0;
    puVar7 = &local_80;
    uVar4 = (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = FUN_180004960(*(uint *)(param_1 + 8));
    if ((int)uVar2 == 0) {
      local_94 = (int)uVar2;
      memset((void *)(param_1 + 0x10),0,0x1000);
      piVar12 = &local_94;
      piVar10 = (int *)0x1000;
      puVar7 = (ulonglong *)(param_1 + 0x10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 8);
      uVar2 = FUN_180004930(*(uint *)(param_1 + 8));
      if ((int)uVar2 == 0) {
        uVar9 = uVar9 & 0xfff;
        *(uint *)(param_1 + 0xc) = uVar9;
        uVar5 = uVar9 + 0xc;
        uVar4 = (ulonglong)uVar5;
        if (uVar5 < 0x1001) {
          local_90 = *(undefined8 *)((ulonglong)uVar9 + 0x10 + param_1);
          uVar4 = (ulonglong)*(uint *)((ulonglong)uVar9 + 0x18 + param_1);
          *(uint *)(param_1 + 0xc) = uVar5;
          if ((int)local_90 < 1) {
            uVar9 = -(int)local_90;
            FUN_18000fab0(local_58,(ulonglong)uVar9);
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0xc;
            piVar12 = (int *)0x0;
            uVar4 = (ulonglong)uVar9;
            lVar6 = param_1 + 8;
            pvVar8 = local_58[0];
            uVar2 = FUN_180011480(lVar6,local_58[0],uVar9,0);
            if ((int)uVar2 == 0) {
              local_60 = 8;
              if (*(int *)(param_1 + 0x1010) != 1) {
                local_60 = 4;
              }
              local_60 = local_60 + (longlong)local_58[0];
              local_78 = (ulonglong *)0x0;
              uStack_70 = 0;
              local_68 = 0;
              uVar4 = 0;
              if (*(int *)((longlong)param_2 + 0x24) != 0) {
                do {
                  uVar9 = *(int *)(local_60 + uVar4 * 4) + 0x1000;
                  local_80 = (ulonglong)uVar9 & 0xfffff000;
                  uVar11 = 0;
                  puVar7 = &local_80;
                  uVar3 = (ulonglong)*(uint *)(param_1 + 8);
                  uVar2 = FUN_180004960(*(uint *)(param_1 + 8));
                  if ((int)uVar2 == 0) {
                    puVar7 = (ulonglong *)(param_1 + 0x10);
                    local_94 = (int)uVar2;
                    memset(puVar7,0,0x1000);
                    piVar12 = &local_94;
                    uVar11 = 0x1000;
                    uVar3 = (ulonglong)*(uint *)(param_1 + 8);
                    uVar2 = FUN_180004930(*(uint *)(param_1 + 8));
                    if ((int)uVar2 != 0) goto LAB_180010fff;
                    uVar9 = uVar9 & 0xfff;
                    *(uint *)(param_1 + 0xc) = uVar9;
                    local_90 = 0;
                    uVar5 = uVar9 + 0xc;
                    uVar3 = (ulonglong)uVar5;
                    if (0x1000 < uVar5) goto LAB_180010fff;
                    local_90 = *(undefined8 *)((ulonglong)uVar9 + 0x10 + param_1);
                    *(uint *)(param_1 + 0xc) = uVar5;
                    if ((int)local_90 < 1) {
                      uVar9 = -(int)local_90;
                      FUN_18000f960((longlong *)&local_78,(ulonglong)uVar9);
                      puVar1 = local_78;
                      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0xc;
                      piVar12 = (int *)0x0;
                      uVar11 = (ulonglong)uVar9;
                      uVar3 = param_1 + 8;
                      puVar7 = local_78;
                      uVar2 = FUN_180011480(uVar3,local_78,uVar9,0);
                      if ((int)uVar2 != 0) goto LAB_180010fff;
                      piVar12 = param_3;
                      uVar3 = FUN_180010700((uint *)param_1,(longlong)puVar1,uVar9,
                                            (longlong *)param_3,(void **)param_4);
                      if ((char)uVar3 != '\0') {
                        uVar4 = 1;
                        goto LAB_18001101e;
                      }
                    }
                  }
                  else {
LAB_180010fff:
                    thunk_FUN_18000bbb0(uVar3,puVar7,uVar11,piVar12);
                    FUN_180001680();
                  }
                  uVar9 = (int)uVar4 + 1;
                  uVar4 = (ulonglong)uVar9;
                } while (uVar9 < *(uint *)((longlong)param_2 + 0x24));
              }
              uVar4 = 0;
LAB_18001101e:
              if (local_78 != (ulonglong *)0x0) {
                puVar7 = local_78;
                if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
                   (puVar7 = (ulonglong *)local_78[-1],
                   0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar7)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(puVar7);
                local_78 = (ulonglong *)0x0;
                uStack_70 = 0;
                local_68 = 0;
              }
            }
            else {
              thunk_FUN_18000bbb0(lVar6,pvVar8,uVar4,piVar12);
              FUN_180001680();
              uVar4 = 0;
            }
            if (local_58[0] == (void *)0x0) {
              return uVar4;
            }
            pvVar8 = local_58[0];
            if ((0xfff < (ulonglong)(local_48 - (longlong)local_58[0])) &&
               (pvVar8 = *(void **)((longlong)local_58[0] + -8),
               0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar8);
            return uVar4;
          }
          goto LAB_1800110c6;
        }
      }
    }
  }
  thunk_FUN_18000bbb0(uVar4,puVar7,piVar10,piVar12);
  uVar4 = FUN_180001680();
LAB_1800110c6:
  return uVar4 & 0xffffffffffffff00;
}




void FUN_1800110f0(uint *param_1,void **param_2,longlong *param_3,void **param_4)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *_Buf2;
  void **ppvVar8;
  void *pvVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_1f8 [40];
  void *local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  void **local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  undefined **local_198 [3];
  undefined1 *local_180;
  undefined1 local_178 [32];
  char local_158 [256];
  ulonglong local_58;
  uint *puVar7;
  
  local_1a8 = 0xfffffffffffffffe;
  local_58 = DAT_18001e0e8 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_4;
  if (*(int *)(param_2 + 1) == 0) goto LAB_18001114d;
  puVar7 = param_1;
  ppvVar8 = param_2;
  if (param_3[4] != 0) {
    uVar1 = *(ushort *)((longlong)param_2 + 2);
    pvVar12 = (void *)(ulonglong)uVar1;
    memcpy(local_158,(void *)((longlong)param_2 + 0x14),(ulonglong)(uint)uVar1);
    if (0xff < uVar1) {
      __report_rangecheckfailure();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_158[(longlong)pvVar12] = '\0';
    pcVar11 = local_158;
    uVar13 = (ulonglong)(uint)uVar1;
    if (local_158 + (longlong)pvVar12 < local_158) {
      uVar13 = 0;
    }
    if (uVar13 != 0) {
      do {
        iVar3 = toupper((int)*pcVar11);
        *pcVar11 = (char)iVar3;
        pcVar11 = pcVar11 + 1;
      } while ((longlong)pcVar11 - (longlong)local_158 != uVar13);
      pvVar12 = (void *)(ulonglong)*(ushort *)((longlong)param_2 + 2);
    }
    lVar14 = 0;
    if ((longlong *)*param_3 != (longlong *)0x0) {
      lVar14 = *(longlong *)*param_3;
    }
    _Buf2 = *(undefined8 **)
             (*(longlong *)(lVar14 + 8) + (*(longlong *)(lVar14 + 0x10) - 1U & param_3[3]) * 8);
    local_1d0 = pvVar12;
    local_1b0 = (void *)_Buf2[2];
    param_4 = &local_1d0;
    ppvVar8 = &local_1b0;
    if (pvVar12 < (void *)_Buf2[2]) {
      ppvVar8 = param_4;
    }
    if (0xf < (ulonglong)_Buf2[3]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    iVar3 = memcmp(local_158,_Buf2,(size_t)*ppvVar8);
    if (iVar3 != 0) goto LAB_18001114d;
    FUN_180011de0((longlong)param_3);
    if (0x7fffffff < *(uint *)((longlong)param_2 + 4)) {
      plVar4 = FUN_18000fb40(local_198,*(undefined4 *)((longlong)param_2 + 0xc),param_2 + 1,
                             (ulonglong)(*(uint *)((longlong)param_2 + 4) + 0x80000000));
      FUN_18000fe70((longlong *)local_1b8,plVar4);
      local_198[0] = RegValue::vftable;
      if (local_178 != local_180) {
        free(local_180);
        local_180 = (undefined1 *)0x0;
      }
      local_198[0] = RegValueI::vftable;
      goto LAB_18001114d;
    }
    local_1d0 = (void *)(ulonglong)(*(int *)(param_2 + 1) + 0x1000);
    param_3 = (longlong *)0x0;
    ppvVar8 = &local_1d0;
    puVar7 = param_1 + 2;
    uVar5 = FUN_1800114f0(puVar7,(uint *)ppvVar8);
    if ((int)uVar5 == 0) {
      uVar10 = param_1[3];
      uVar6 = uVar10 + 0xc;
      puVar7 = (uint *)(ulonglong)uVar6;
      if (uVar6 < 0x1001) {
        local_1d0 = *(void **)((ulonglong)uVar10 + 0x10 + (longlong)param_1);
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,
                              *(undefined4 *)((ulonglong)uVar10 + 0x18 + (longlong)param_1));
        param_1[3] = uVar6;
        if ((int)local_1d0 < 1) {
          uVar10 = -(int)local_1d0;
          FUN_18000fab0(&local_1d0,(ulonglong)uVar10);
          pvVar12 = local_1d0;
          param_1[3] = param_1[3] - 0xc;
          uVar15 = 0;
          uVar13 = (ulonglong)uVar10;
          puVar7 = param_1 + 2;
          pvVar9 = local_1d0;
          uVar5 = FUN_180011480((longlong)puVar7,local_1d0,uVar10,0);
          if ((int)uVar5 == 0) {
            lVar14 = 8;
            if (param_1[0x404] != 1) {
              lVar14 = 4;
            }
            plVar4 = FUN_18000fb40(local_198,*(undefined4 *)((longlong)param_2 + 0xc),
                                   (void *)(lVar14 + (longlong)pvVar12),
                                   (ulonglong)*(uint *)((longlong)param_2 + 4));
            FUN_18000fe70((longlong *)local_1b8,plVar4);
            local_198[0] = RegValue::vftable;
            if (local_178 != local_180) {
              free(local_180);
              local_180 = (undefined1 *)0x0;
            }
            local_198[0] = RegValueI::vftable;
            if (pvVar12 != (void *)0x0) {
              pvVar9 = pvVar12;
              if ((0xfff < (ulonglong)(local_1c0 - (longlong)pvVar12)) &&
                 (pvVar9 = *(void **)((longlong)pvVar12 + -8),
                 0x1f < (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar9);
              local_1d0 = (void *)0x0;
              uStack_1c8 = 0;
              local_1c0 = 0;
            }
          }
          else {
            thunk_FUN_18000bbb0(puVar7,pvVar9,uVar13,uVar15);
            FUN_180001680();
            if (pvVar12 != (void *)0x0) {
              pvVar9 = pvVar12;
              if ((0xfff < (ulonglong)(local_1c0 - (longlong)pvVar12)) &&
                 (pvVar9 = *(void **)((longlong)pvVar12 + -8),
                 0x1f < (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar9);
              local_1d0 = (void *)0x0;
              uStack_1c8 = 0;
              local_1c0 = 0;
            }
          }
        }
        goto LAB_18001114d;
      }
    }
  }
  thunk_FUN_18000bbb0(puVar7,ppvVar8,param_3,param_4);
  FUN_180001680();
LAB_18001114d:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_1f8);
  return;
}




undefined8 FUN_180011480(longlong param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_2 != (void *)0x0) && (param_3 + param_4 < 0x1001)) &&
     (*(uint *)(param_1 + 4) + param_3 < 0x1001)) {
    uVar1 = *(uint *)(param_1 + 4);
    if (param_4 != 0) {
      *(uint *)(param_1 + 4) = param_4;
      uVar1 = param_4;
    }
    memcpy(param_2,(void *)(param_1 + 8 + (ulonglong)uVar1),(ulonglong)param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
    return 0;
  }
  return 0x16;
}




undefined8 FUN_1800114f0(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180004960(*param_1);
  if ((int)uVar1 == 0) {
    memset(param_1 + 2,0,0x1000);
    uVar1 = FUN_180004930(*param_1);
    if ((int)uVar1 == 0) {
      param_1[1] = *param_2 & 0xfff;
      uVar1 = 0;
    }
  }
  return uVar1;
}




void FUN_180011580(ulonglong param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_18001e0e8 ^ (ulonglong)auStack_68;
  pcVar6 = param_2;
  lVar9 = param_3;
  if ((*param_2 == '\\') && (*(longlong *)(param_3 + 0x20) == 0)) {
    lVar10 = -1;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != '\0');
    pcVar7 = param_2;
    if (param_2 != param_2 + lVar8) {
      do {
        param_1 = (ulonglong)(uint)(int)*pcVar7;
        iVar3 = islower((int)*pcVar7);
        if (iVar3 != 0) break;
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != param_2 + lVar8);
    }
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != '\0');
    if (param_2 + lVar10 == pcVar7) {
      cVar1 = *param_2;
      while (cVar1 != '\0') {
        pcVar6 = param_2 + 1;
        cVar1 = *pcVar6;
        param_2 = pcVar6;
        while ((cVar1 != '\\' && (cVar1 != '\0'))) {
          param_2 = param_2 + 1;
          cVar1 = *param_2;
        }
        local_30 = 0;
        uStack_28 = 0xf;
        local_40 = 0;
        if (pcVar6 != param_2) {
          FUN_1800019a0((longlong *)&local_40,pcVar6,(longlong)param_2 - (longlong)pcVar6);
        }
        uVar5 = *(ulonglong *)(param_3 + 0x10);
        if (uVar5 <= *(longlong *)(param_3 + 0x20) + 1U) {
          FUN_1800118c0(param_3,1);
          uVar5 = *(ulonglong *)(param_3 + 0x10);
        }
        *(ulonglong *)(param_3 + 0x18) = *(ulonglong *)(param_3 + 0x18) & uVar5 - 1;
        lVar9 = (*(longlong *)(param_3 + 0x10) - 1U &
                *(longlong *)(param_3 + 0x18) + *(longlong *)(param_3 + 0x20)) * 8;
        lVar8 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(lVar8 + lVar9) == 0) {
          pvVar4 = operator_new(0x20);
          *(void **)(lVar9 + *(longlong *)(param_3 + 8)) = pvVar4;
          lVar8 = *(longlong *)(param_3 + 8);
        }
        puVar2 = *(undefined8 **)(lVar9 + lVar8);
        *puVar2 = CONCAT71(uStack_3f,local_40);
        puVar2[1] = uStack_38;
        puVar2[2] = local_30;
        puVar2[3] = uStack_28;
        *(longlong *)(param_3 + 0x20) = *(longlong *)(param_3 + 0x20) + 1;
        local_30 = 0;
        uStack_28 = 0xf;
        local_40 = 0;
        cVar1 = *param_2;
      }
      goto LAB_18001172d;
    }
  }
  thunk_FUN_18000bbb0(param_1,pcVar6,lVar9,param_4);
  FUN_180001680();
LAB_18001172d:
  __security_check_cookie(local_20 ^ (ulonglong)auStack_68);
  return;
}




undefined8 FUN_180011750(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x10))();
  if (uVar2 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (uVar2 == 4) {
      iVar1 = (**(code **)*param_1)(param_1);
      if (iVar1 != 4) {
        iVar1 = (**(code **)*param_1)(param_1);
        if (iVar1 != 5) {
          uVar2 = (**(code **)*param_1)(param_1);
          if ((int)uVar2 != 4) goto LAB_1800117bb;
        }
      }
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1);
      *param_2 = *puVar3;
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
  }
LAB_1800117bb:
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_1800117d0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  uVar4 = (**(code **)(*param_1 + 0x10))();
  if (uVar4 != 0) {
    iVar3 = (**(code **)*param_1)(param_1);
    if (iVar3 != 7) {
      uVar4 = (**(code **)*param_1)(param_1);
      if ((int)uVar4 != 1) goto LAB_1800118aa;
    }
    uVar4 = (**(code **)(*param_1 + 8))(param_1);
    uVar9 = 0;
    uVar4 = (uVar4 >> 1) - 1;
    if ((ulonglong)param_2[2] < uVar4) {
      FUN_180011c20(param_2,uVar4 - param_2[2],0);
    }
    else {
      param_2[2] = uVar4;
      plVar5 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar5 = (longlong *)*param_2;
      }
      *(undefined2 *)((longlong)plVar5 + uVar4 * 2) = 0;
    }
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar7 = uVar6;
    if (uVar4 != 0) {
      do {
        if ((ulonglong)param_2[2] <= uVar9) {
          FUN_180011b20();
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        plVar5 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          plVar5 = (longlong *)*param_2;
        }
        uVar1 = *(ushort *)(uVar6 + uVar9 * 2);
        uVar7 = (ulonglong)uVar1;
        *(ushort *)((longlong)plVar5 + uVar9 * 2) = uVar1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
    }
    return CONCAT71((int7)(uVar7 >> 8),1);
  }
LAB_1800118aa:
  return uVar4 & 0xffffffffffffff00;
}




void FUN_1800118c0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *_Memory;
  ulonglong uVar5;
  size_t sVar6;
  size_t sVar7;
  ulonglong uVar8;
  void *_Dst;
  
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 1;
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
  for (; (uVar8 = uVar4 - uVar5, uVar8 < param_2 || (uVar4 < 8)); uVar4 = uVar4 * 2) {
    if (0x7ffffffffffffff - uVar4 < uVar4) {
      FUN_180011b00();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = uVar4 * 8;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar4 < 0x2000000000000000) {
    if (0xfff < uVar5) goto LAB_180011943;
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
LAB_180011943:
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar4);
    if (pvVar3 == (void *)0x0) goto LAB_180011a85;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  sVar7 = uVar1 * 8;
  pvVar3 = (void *)(*(longlong *)(param_1 + 8) + sVar7);
  sVar6 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar3) + *(longlong *)(param_1 + 8);
  memmove((void *)(sVar7 + (longlong)_Dst),pvVar3,sVar6);
  pvVar3 = (void *)(sVar6 + (longlong)(sVar7 + (longlong)_Dst));
  if (uVar8 < uVar1) {
    sVar6 = uVar8 * 8;
    memmove(pvVar3,*(void **)(param_1 + 8),sVar6);
    pvVar3 = (void *)(sVar6 + *(longlong *)(param_1 + 8));
    sVar7 = (*(longlong *)(param_1 + 8) - (longlong)pvVar3) + sVar7;
    memmove(_Dst,pvVar3,sVar7);
    pvVar3 = (void *)(sVar7 + (longlong)_Dst);
  }
  else {
    memmove(pvVar3,*(void **)(param_1 + 8),sVar7);
    memset((void *)(sVar7 + (longlong)pvVar3),0,(uVar8 - uVar1) * 8);
    pvVar3 = _Dst;
    sVar6 = sVar7;
  }
  memset(pvVar3,0,sVar6);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    _Memory = pvVar3;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180011a85:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
  return;
}




void FUN_180011aa0(longlong *param_1)

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




void FUN_180011b00(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180011b20(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void * FUN_180011b40(undefined8 param_1,ulonglong param_2)

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




void FUN_180011ba0(undefined8 param_1,ulonglong param_2)

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




undefined8 * FUN_180011c20(undefined8 *param_1,ulonglong param_2,undefined2 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  size_t _Size;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  void *_Memory;
  ulonglong uVar9;
  undefined2 *puVar10;
  
  uVar4 = param_1[3];
  lVar5 = param_1[2];
  if (uVar4 - lVar5 < param_2) {
    if (0x7ffffffffffffffeU - lVar5 < param_2) {
      FUN_180001960();
      pcVar6 = (code *)swi(3);
      puVar7 = (undefined8 *)(*pcVar6)();
      return puVar7;
    }
    uVar2 = lVar5 + param_2;
    uVar8 = uVar2 | 7;
    uVar9 = 0x7ffffffffffffffe;
    if (((uVar8 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) &&
       (uVar3 = (uVar4 >> 1) + uVar4, uVar9 = uVar8, uVar8 < uVar3)) {
      uVar9 = uVar3;
    }
    _Dst = (void *)FUN_180011ba0(param_1,uVar9 + 1);
    param_1[3] = uVar9;
    _Size = lVar5 * 2;
    param_1[2] = uVar2;
    puVar10 = (undefined2 *)(_Size + (longlong)_Dst);
    if (uVar4 < 8) {
      memcpy(_Dst,param_1,_Size);
      if (param_2 != 0) {
        for (; param_2 != 0; param_2 = param_2 - 1) {
          *puVar10 = param_3;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined2 *)((longlong)_Dst + uVar2 * 2) = 0;
    }
    else {
      _Src = (void *)*param_1;
      memcpy(_Dst,_Src,_Size);
      if (param_2 != 0) {
        for (; param_2 != 0; param_2 = param_2 - 1) {
          *puVar10 = param_3;
          puVar10 = puVar10 + 1;
        }
      }
      *(undefined2 *)((longlong)_Dst + uVar2 * 2) = 0;
      _Memory = _Src;
      if ((0xfff < uVar4 * 2 + 2) &&
         (_Memory = *(void **)((longlong)_Src + -8),
         0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = _Dst;
  }
  else {
    lVar1 = lVar5 + param_2;
    param_1[2] = lVar1;
    puVar7 = param_1;
    if (7 < uVar4) {
      puVar7 = (undefined8 *)*param_1;
    }
    puVar10 = (undefined2 *)((longlong)puVar7 + lVar5 * 2);
    if (param_2 != 0) {
      for (; param_2 != 0; param_2 = param_2 - 1) {
        *puVar10 = param_3;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)((longlong)puVar7 + lVar1 * 2) = 0;
  }
  return param_1;
}




void FUN_180011da0(undefined8 param_1,void *param_2,ulonglong param_3)

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




void FUN_180011de0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180001530(*(longlong **)
                 (*(longlong *)(param_1 + 8) +
                 (*(longlong *)(param_1 + 0x10) - 1U & *(ulonglong *)(param_1 + 0x18)) * 8));
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
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
  while (_Memory = DAT_180025568, DAT_180025568 != (undefined8 *)0x0) {
    puVar1 = DAT_180025568 + 1;
    DAT_180025568 = (undefined8 *)*DAT_180025568;
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
    *puVar1 = DAT_180025568;
    puVar1[1] = param_1;
  }
  DAT_180025568 = puVar1;
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
    FUN_180012f90();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180012f70();
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
                    /* WARNING: Could not recover jumptable at 0x000180011f61. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180011f92;
  capture_previous_context((PCONTEXT)&DAT_180025610);
  _DAT_180025580 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800256a8 = puVar3 + 0x40;
  _DAT_180025690 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180025570 = 0xc0000409;
  _DAT_180025574 = 1;
  _DAT_180025588 = 1;
  DAT_180025590 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18001e0e8;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18001e0e0;
  *(undefined8 *)(puVar3 + -8) = 0x180012034;
  DAT_180025708 = _DAT_180025580;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180016f08);
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
  *(undefined8 *)(puVar3 + -8) = 0x18001207a;
  capture_current_context((PCONTEXT)&DAT_180025610);
  _DAT_180025580 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_1800256a8 = puVar3 + 0x30;
  _DAT_180025570 = 0xc0000409;
  _DAT_180025574 = 1;
  _DAT_180025588 = 1;
  DAT_180025590 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x1800120e6;
  DAT_180025708 = _DAT_180025580;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180016f08);
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

undefined8 FUN_1800121d0(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180025ae0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180012322;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180025b10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180025b10 != (HANDLE)0x0) goto LAB_1800122c0;
  }
  else {
    DAT_180025b10 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180025b08);
    bVar7 = 0x40 - ((byte)DAT_18001e0e8 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180025b18 = DAT_18001e0e8 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180025b20 = DAT_18001e0e8 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_1800122c0:
    uVar6 = FUN_1800128bc(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180012330);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180012322:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180012330(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  if (DAT_180025b10 != (HANDLE)0x0) {
    CloseHandle(DAT_180025b10);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001e0dc = DAT_18001e0dc + 1;
  *param_1 = DAT_18001e0dc;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001e0dc;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18001243c:
                    /* WARNING: Could not recover jumptable at 0x000180012448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001e0dc;
      goto LAB_18001243c;
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
  
  if (DAT_180025b10 != (HANDLE)0x0) {
    SetEvent(DAT_180025b10);
                    /* WARNING: Could not recover jumptable at 0x000180012499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180025b10);
    return;
  }
  bVar1 = (byte)DAT_18001e0e8 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x0001800134e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001e0e8 ^ _DAT_180025b20) >> bVar1 |
            (DAT_18001e0e8 ^ _DAT_180025b20) << 0x40 - bVar1))(&DAT_180025b08);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180025b10 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
    WaitForSingleObjectEx(DAT_180025b10,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180012510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180025ae0);
    return;
  }
  bVar1 = (byte)DAT_18001e0e8 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x0001800134e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001e0e8 ^ _DAT_180025b18) >> bVar1 |
            (DAT_18001e0e8 ^ _DAT_180025b18) << 0x40 - bVar1))
            (&DAT_180025b08,&DAT_180025ae0,param_1);
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
  if ((_StackCookie == DAT_18001e0e8) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_180012654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018001265b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180025b30);
  return;
}




void FUN_180012664(void)

{
  __std_type_info_destroy_list(&DAT_180025b30);
  return;
}




undefined8 * FUN_180012670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
LAB_180012732:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180025b50 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180025b50;
        pvVar1 = DAT_180025b50;
      }
      DAT_180025b50 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180012732;
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
    uVar3 = FUN_180013288();
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
  
  uVar1 = FUN_1800128bc(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800134c4();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800134c4();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800134c4();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800134c4();
  FUN_1800134c4();
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
    _execute_onexit_table(&DAT_180025b60);
    return;
  }
  uVar2 = FUN_180003ba0();
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
  FUN_1800134c4();
  FUN_1800134c4();
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
    DAT_180025b58 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800134c4();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800134c4();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800134c4();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800128bc(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180025b59 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18001e0e8 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18001e0e8;
      _DAT_180025b60 = in_RAX;
      uRam0000000180025b68 = in_RAX;
      _DAT_180025b70 = in_RAX;
      _DAT_180025b78 = in_RAX;
      uRam0000000180025b80 = in_RAX;
      _DAT_180025b88 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180025b60);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180025b78), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180025b59 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180012a22) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180012a0b;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180012a0b:
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
    DAT_180025b50 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180025b58 == '\0') || (param_2 == '\0')) {
    FUN_1800134c4();
    FUN_1800134c4();
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
  
  bVar2 = (byte)DAT_18001e0e8 & 0x3f;
  if (((DAT_18001e0e8 ^ _DAT_180025b60) >> bVar2 | (DAT_18001e0e8 ^ _DAT_180025b60) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180025b60,_Func);
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
    if (DAT_180025b90 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180025b90 = DAT_180025b90 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180025b48 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180012664();
      FID_conflict__RTC_Initialize();
      DAT_180025b48 = 0;
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
    if (DAT_180025b48 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180025b48 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180012654();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180015478,&DAT_180015488);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180015458,&DAT_180015470);
        DAT_180025b48 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180013388();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180025b90 = DAT_180025b90 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180012da8) */
/* WARNING: Removing unreachable block (ram,0x000180012d37) */
/* WARNING: Removing unreachable block (ram,0x000180012deb) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180025b90 < 1)) {
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




undefined8 * FUN_180012e58(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180012e98(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180012eb8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180012ef8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180012f2c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180012f70(void)

{
  undefined8 local_28 [5];
  
  FUN_180012e98(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001ba10);
}




void FUN_180012f90(void)

{
  undefined8 local_28 [5];
  
  FUN_180012ef8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001ba70);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012fb8(void)

{
  _DAT_180025b94 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180012ff3;
  FUN_180012fb8();
  *(undefined8 *)(puVar4 + -8) = 0x180013004;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18001300e;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180013028;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180013069;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18001309b;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800130bd;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800130de;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800130e9;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800130f9;
    FUN_180012fb8();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001800131da) */
/* WARNING: Removing unreachable block (ram,0x000180013158) */
/* WARNING: Removing unreachable block (ram,0x000180013133) */
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
  
  DAT_18001e0fc = 2;
  _DAT_18001e0f8 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18001e100 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180025b98 = DAT_180025b98 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180025b98 = DAT_180025b98 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18001e0f8 = 2;
    DAT_18001e0fc = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001e0fc = 0xe;
      _DAT_18001e0f8 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18001e0f8 = 5;
        DAT_18001e0fc = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180013288(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18001e110 != 0;
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
  
  if (DAT_18001e0e8 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18001e0e8 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18001e0e8 == 0x2b992ddfa232) {
      DAT_18001e0e8 = 0x2b992ddfa233;
    }
  }
  DAT_18001e0e0 = ~DAT_18001e0e8;
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




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001b40();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180004410();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180013388(void)

{
  return &DAT_180026210;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180018ba0; puVar1 < &DAT_180018ba0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180018bb0; puVar1 < &DAT_180018bb0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_1800134c4(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001800134e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined * Catch_1800134f0(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_180001186;
}




void Unwind_180013530(undefined8 param_1,longlong param_2)

{
  FUN_1800015d0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_180013540(undefined8 param_1,longlong param_2)

{
  FUN_1800015a0((longlong *)(param_2 + 0x38));
  return;
}




void Catch_180013550(undefined8 param_1,longlong param_2)

{
  FUN_180001920(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x28));
  FUN_180001af0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
                *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800135a0(undefined8 param_1,longlong param_2)

{
  FUN_1800014f0((undefined8 *)(param_2 + 8));
  return;
}




void Unwind_1800135b0(undefined8 param_1,longlong param_2)

{
  FUN_1800015a0(*(longlong **)(param_2 + 0x40));
  return;
}




undefined8 Catch_1800135c0(void)

{
  return 0x18000165c;
}




void Unwind_1800135e0(void)

{
  _Init_thread_abort(&DAT_18001ebf8);
  return;
}




void Unwind_1800135f0(undefined8 param_1,longlong param_2)

{
  FUN_180002990(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180013600(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180013610(undefined8 param_1,longlong param_2)

{
  FUN_180008af0((int *)(param_2 + 0x38));
  return;
}




void Unwind_180013620(undefined8 param_1,longlong param_2)

{
  FUN_18000fe40((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_180013630(undefined8 param_1,longlong param_2)

{
  FUN_1800028b0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180013640(undefined8 param_1,longlong param_2)

{
  FUN_1800028b0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_180013650(undefined8 param_1,longlong param_2)

{
  FUN_1800028b0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180013660(undefined8 param_1,longlong param_2)

{
  FUN_1800028b0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180013670(undefined8 param_1,longlong param_2)

{
  FUN_1800028d0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180013680(undefined8 param_1,longlong param_2)

{
  FUN_180002990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013690(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800136a0(undefined8 param_1,longlong param_2)

{
  FUN_1800028f0((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_1800136b0(undefined8 param_1,longlong param_2)

{
  FUN_180001530((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1800136c0(undefined8 param_1,longlong param_2)

{
  FUN_180001530((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1800136d0(undefined8 param_1,longlong param_2)

{
  FUN_1800029b0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1800136e0(undefined8 param_1,longlong param_2)

{
  FUN_1800033e0((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1800136f0(undefined8 param_1,longlong param_2)

{
  FUN_1800029a0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180013700(undefined8 param_1,longlong param_2)

{
  FUN_180003420(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180013710(undefined8 param_1,longlong param_2)

{
  FUN_180003460(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180013720(undefined8 param_1,longlong param_2)

{
  FUN_180003420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013730(undefined8 param_1,longlong param_2)

{
  FUN_180003460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013740(undefined8 param_1,longlong param_2)

{
  FUN_180003430((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013750(undefined8 param_1,longlong param_2)

{
  FUN_180003460((undefined8 *)(param_2 + 0x28));
  return;
}




void Catch_180013760(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x78),
             *(longlong *)(param_2 + 0x88));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_180013790(void)

{
  return &DAT_1800046e9;
}




undefined *
Catch_1800137b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  lVar2 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = 1;
    (**(code **)(*plVar1 + 0x40))();
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000bbb0(plVar1,lVar2,param_3,param_4);
  lVar2 = __RTtypeid(*(undefined8 *)(param_2 + 0x50));
  __std_type_info_name(lVar2 + 8,&DAT_180025b30);
  FUN_18000be10(0xfffffff6);
  return &DAT_18000970e;
}




undefined *
Catch_180013840(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  lVar2 = param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = 1;
    (**(code **)(*plVar1 + 0x40))();
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  FUN_18000bbb0(plVar1,lVar2,param_3,param_4);
  FUN_18000be10(0xfffffff5);
  return &DAT_18000970e;
}




void Catch_1800138c0(undefined8 param_1,longlong param_2)

{
  FUN_18000c730(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800138f0(undefined8 param_1,longlong param_2)

{
  FUN_18000a870(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180013900(undefined8 param_1,longlong param_2)

{
  FUN_180001530(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180013910(undefined8 param_1,longlong param_2)

{
  FUN_18000a8c0((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_180013920(undefined8 param_1,longlong param_2)

{
  FUN_18000c530(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180013970(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_180013980(undefined8 param_1,longlong param_2)

{
  FUN_18000c580(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800139b0(undefined8 param_1,longlong param_2)

{
  FUN_18000c580(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800139e0(undefined8 param_1,longlong param_2)

{
  FUN_180001530(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1800139f0(undefined8 param_1,longlong param_2)

{
  FUN_18000a8c0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180013a00(undefined8 param_1,longlong param_2)

{
  FUN_18000a710((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013a10(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_180013a20(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180013a30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x60));
  return;
}




void Unwind_180013a40(undefined8 param_1,longlong param_2)

{
  FUN_18000a8a0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180013a50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5f0(*(undefined8 **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180013a60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a640(*(undefined8 **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180013a70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a840((longlong *)(*(longlong *)(param_2 + 0x50) + 0x128),param_2,param_3,param_4);
  return;
}




void Unwind_180013a90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5d0(*(undefined8 **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180013aa0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(*(undefined8 **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180013ab0(undefined8 param_1,longlong param_2)

{
  FUN_18000a660((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_180013ac0(undefined8 param_1,longlong param_2)

{
  FUN_18000acf0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_180013ad0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180013af0(undefined8 param_1,longlong param_2)

{
  FUN_18000a760((longlong *)(*(longlong *)(param_2 + 0x50) + 0x118));
  return;
}




void Unwind_180013b10(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_180013b20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a6c0(*(longlong **)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




void Unwind_180013b30(undefined8 param_1,longlong param_2)

{
  FUN_18000a6f0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_180013b40(undefined8 param_1,longlong param_2)

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




void Unwind_180013b70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}




void Unwind_180013b90(undefined8 param_1,longlong param_2)

{
  FUN_18000a780((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_180013ba0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x30));
  return;
}




void Unwind_180013bb0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x30));
  return;
}




void Unwind_180013bc0(undefined8 param_1,longlong param_2)

{
  FUN_18000aab0(param_2 + 0x30);
  return;
}




void Unwind_180013bd0(undefined8 param_1,longlong param_2)

{
  FUN_18000aa80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013be0(undefined8 param_1,longlong param_2)

{
  FUN_18000aa80(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180013bf0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013c00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a640(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013c10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a840((longlong *)(*(longlong *)(param_2 + 0x40) + 0x128),param_2,param_3,param_4);
  return;
}




void Unwind_180013c30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a6c0(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_180013c40(undefined8 param_1,longlong param_2)

{
  FUN_18000a6f0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_180013c50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5d0(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013c60(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180013c70(undefined8 param_1,longlong param_2)

{
  FUN_18000a6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013c80(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_180013c90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a6c0(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013ca0(undefined8 param_1,longlong param_2)

{
  FUN_18000a660((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180013cb0(undefined8 param_1,longlong param_2)

{
  FUN_18000acf0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_180013cc0(undefined8 param_1,longlong param_2)

{
  FUN_18000a760((longlong *)(*(longlong *)(param_2 + 0x40) + 0x118));
  return;
}




void Unwind_180013ce0(undefined8 param_1,longlong param_2)

{
  FUN_18000a660((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_180013cf0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180013d10(undefined8 param_1,longlong param_2)

{
  FUN_18000aa40(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180013d20(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + -0x98));
  return;
}




void Unwind_180013d40(undefined8 param_1,longlong param_2)

{
  FUN_18000a780((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x40) + -0xa0));
  return;
}




void Unwind_180013d60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180013d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base(*(ios_base **)(param_2 + 0x40));
  return;
}




void Unwind_180013d70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a6c0(*(longlong **)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180013d80(undefined8 param_1,longlong param_2)

{
  FUN_18000a6f0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180013d90(undefined8 param_1,longlong param_2)

{
  FUN_18000aa40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180013da0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5f0(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180013db0(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_180013dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5f0((undefined8 *)&DAT_180024c60,param_2,param_3,param_4);
  return;
}




void Unwind_180013dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a640((undefined8 *)&DAT_180024c60,param_2,param_3,param_4);
  return;
}




void Unwind_180013de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a840(&DAT_180024d88,param_2,param_3,param_4);
  return;
}




void Unwind_180013e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5d0((undefined8 *)&DAT_180024c60,param_2,param_3,param_4);
  return;
}




void Unwind_180013e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0((undefined8 *)&DAT_180024c60,param_2,param_3,param_4);
  return;
}




void Unwind_180013e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5f0((undefined8 *)&DAT_180024da0,param_2,param_3,param_4);
  return;
}




void Unwind_180013e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a640((undefined8 *)&DAT_180024da0,param_2,param_3,param_4);
  return;
}




void Unwind_180013e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a840(&DAT_180024ec8,param_2,param_3,param_4);
  return;
}




void Unwind_180013e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a5d0((undefined8 *)&DAT_180024da0,param_2,param_3,param_4);
  return;
}




void Unwind_180013e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000a8e0((undefined8 *)&DAT_180024da0,param_2,param_3,param_4);
  return;
}




void Unwind_180013e80(undefined8 param_1,longlong param_2)

{
  FUN_18000a6a0((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_180013e90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18000a6a0((undefined8 *)(param_2 + 0x50));
  }
  return;
}




void Unwind_180013ec0(undefined8 param_1,longlong param_2)

{
  FUN_18000a6a0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_180013ed0(undefined8 param_1,longlong param_2)

{
  FUN_180001530((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180013ee0(undefined8 param_1,longlong param_2)

{
  FUN_18000a8c0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180013ef0(undefined8 param_1,longlong param_2)

{
  FUN_18000a660((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180013f00(undefined8 param_1,longlong param_2)

{
  FUN_18000a690((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180013f10(undefined8 param_1,longlong param_2)

{
  FUN_180001530((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180013f20(void)

{
  _Init_thread_abort(&DAT_180024ee8);
  return;
}




undefined1 *
Catch_180013f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000bbb0(param_1,param_2,param_3,param_4);
  FUN_18000be10(0xfffffff5);
  return &LAB_18000bb99;
}




void Unwind_180013f90(void)

{
  _Init_thread_abort(&DAT_180024c58);
  return;
}




void Unwind_180013fa0(void)

{
  _Init_thread_abort(&DAT_180024d98);
  return;
}




void Unwind_180013fb0(undefined8 param_1,longlong param_2)

{
  FUN_18000a9d0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013fc0(void)

{
  _Init_thread_abort(&DAT_180024ed8);
  return;
}




void Unwind_180013fd0(undefined8 param_1,longlong param_2)

{
  FUN_18000a9f0((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013fe0(undefined8 param_1,longlong param_2)

{
  FUN_18000aa80((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180013ff0(undefined8 param_1,longlong param_2)

{
  FUN_18000a660((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180014000(undefined8 param_1,longlong param_2)

{
  FUN_18000a690(*(longlong **)(param_2 + 0x90));
  return;
}




void Catch_180014010(undefined8 param_1,longlong param_2)

{
  FUN_18000cac0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180014040(undefined8 param_1,longlong param_2)

{
  FUN_18000cac0(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014070(undefined8 param_1,longlong param_2)

{
  FUN_180001530(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180014080(undefined8 param_1,longlong param_2)

{
  FUN_18000a8c0((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_180014090(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_1800140b0(undefined8 param_1,longlong param_2)

{
  FUN_18000a6a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Catch_1800140c0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  
  pIVar1 = IObject::operator=(*(IObject **)(param_2 + 0x60),param_2);
  FUN_180011da0(pIVar1,*(void **)(param_2 + 0x78),*(ulonglong *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180014120(undefined8 param_1,longlong param_2)

{
  FUN_18000fe30(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_180014130(undefined8 param_1,longlong param_2)

{
  FUN_18000fc10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180014140(undefined8 param_1,longlong param_2)

{
  FUN_18000fc40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180014150(undefined8 param_1,longlong param_2)

{
  FUN_18000fe30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180014160(undefined8 param_1,longlong param_2)

{
  FUN_18000fdd0((undefined8 *)(param_2 + 0x1090));
  return;
}




void Unwind_180014170(undefined8 param_1,longlong param_2)

{
  FUN_18000fd40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180014180(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




void Unwind_1800141a0(undefined8 param_1,longlong param_2)

{
  FUN_1800028b0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1800141b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800028b0(*(longlong **)(param_2 + 0x68));
  }
  return;
}




void Unwind_1800141e0(undefined8 param_1,longlong param_2)

{
  FUN_18000fe20((undefined8 *)(param_2 + 0x1090));
  return;
}




void Unwind_1800141f0(undefined8 param_1,longlong param_2)

{
  FUN_18000fc40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_180014200(undefined8 param_1,longlong param_2)

{
  FUN_18000fc10(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_180014210(undefined8 param_1,longlong param_2)

{
  FUN_18000fe20(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_180014220(undefined8 param_1,longlong param_2)

{
  FUN_18000fd60((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_180014230(undefined8 param_1,longlong param_2)

{
  FUN_18000fd60((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180014240(undefined8 param_1,longlong param_2)

{
  FUN_18000fd60((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180014250(undefined8 param_1,longlong param_2)

{
  FUN_18000fd60((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180014260(undefined8 param_1,longlong param_2)

{
  FUN_18000fdd0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_180014270(undefined8 param_1,longlong param_2)

{
  FUN_18000fd60((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_180014280(undefined8 param_1,longlong param_2)

{
  FUN_18000fe20((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_180014290(undefined8 param_1,longlong param_2)

{
  FUN_180001530((longlong *)(param_2 + 0x28));
  return;
}




void FUN_1800142b4(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800142cb(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800142e7(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180014320(void)

{
  void *_Memory;
  
  if (DAT_180024c28 != (void *)0x0) {
    _Memory = DAT_180024c28;
    if ((0xfff < (DAT_180024c38 - (longlong)DAT_180024c28 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)DAT_180024c28 + -8),
       0x1f < (ulonglong)((longlong)DAT_180024c28 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    DAT_180024c38 = 0;
    DAT_180024c28 = (void *)0x0;
    DAT_180024c30 = 0;
  }
  return;
}




void FUN_180014390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_18000c960((longlong *)&DAT_180024d88,param_2,param_3,param_4);
  uVar1 = 0x58;
  free(DAT_180024d88);
  FUN_18000a8e0((undefined8 *)&DAT_180024c60,uVar1,param_3,param_4);
  return;
}




void FUN_1800143e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_18000c960((longlong *)&DAT_180024ec8,param_2,param_3,param_4);
  uVar1 = 0x58;
  free(DAT_180024ec8);
  FUN_18000a8e0((undefined8 *)&DAT_180024da0,uVar1,param_3,param_4);
  return;
}




void FUN_180014424(void)

{
  std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t((_Fac_tidy_reg_t *)&DAT_180025560);
  return;
}



