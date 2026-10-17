
undefined1 FUN_1800019b5(void)

{
  return 1;
}




void FUN_1800025a0(void)

{
  CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl((CMFCFilterChunkValueImpl *)&DAT_1800228e0);
  atexit(FUN_180017d20);
  return;
}




void FUN_1800025d0(void)

{
  HANDLE in_R9;
  
  thunk_FUN_18000e090((longlong *)&DAT_180022988,0x1800228e0,0x180022930,in_R9);
  atexit(FUN_180017d40);
  return;
}




void FUN_180002610(void)

{
  thunk_FUN_18000e110((undefined8 *)&DAT_180022930);
  atexit(FUN_180017d60);
  return;
}




int FUN_180003bb0(uint param_1,int param_2,longlong *param_3)

{
  int local_18;
  
  if (param_3 == (longlong *)0x0) {
    local_18 = 0x2704c09;
  }
  else {
    local_18 = 0;
    if (param_1 < 0x10001) {
      if (param_2 == 0x4c00) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x104) < DAT_1800226f0) &&
           (_Init_thread_header(&DAT_1800226f0), DAT_1800226f0 == -1)) {
          thunk_FUN_180005400((undefined8 *)&DAT_1800226e0,0x4c00);
          atexit(FUN_180017ce0);
          _Init_thread_footer(&DAT_1800226f0);
        }
        *param_3 = (longlong)&DAT_1800226e0;
      }
      else if (param_2 == 0x4c01) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x104) < DAT_1800226d8) &&
           (_Init_thread_header(&DAT_1800226d8), DAT_1800226d8 == -1)) {
          thunk_FUN_180005450((undefined8 *)&DAT_1800226c8,0x4c01);
          atexit(FUN_180017d00);
          _Init_thread_footer(&DAT_1800226d8);
        }
        *param_3 = (longlong)&DAT_1800226c8;
      }
      else {
        local_18 = 0x2a04c06;
      }
      if ((local_18 == 0) && (*param_3 == 0)) {
        local_18 = 0x2a04c08;
      }
      if (local_18 == 0) {
        LOCK();
        DAT_1800226c0 = DAT_1800226c0 + 1;
        UNLOCK();
      }
    }
    else {
      local_18 = 0x2704c02;
    }
  }
  return local_18;
}




CResetPropExchange * FUN_180003d40(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CBurn::vftable;
  memset(param_1 + 0xc,0,8);
  thunk_FUN_180008cb0();
  return param_1;
}




uint FUN_180003da0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1a) {
    *(char *)(param_1 + 0xc) = (char)param_2 + 'A';
    uVar1 = thunk_FUN_1800083b0((char)param_2);
  }
  else {
    uVar1 = 0x2e04c09;
  }
  return uVar1;
}




undefined4 FUN_180003e10(void)

{
  return 0;
}




undefined4 FUN_180003e40(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007db0();
  return uVar1;
}




undefined4 FUN_180003e70(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180008320();
  return uVar1;
}




uint FUN_180003ea0(undefined8 param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  longlong *local_18;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  local_28 = thunk_FUN_180008190(&local_20,&local_1c,&local_24,local_10);
  if ((local_28 & 0xfff) == 0) {
    *param_2 = local_20;
    *param_3 = local_1c;
    *param_4 = local_24;
    *param_5 = local_10[0];
    local_28 = thunk_FUN_180004b40(param_1,*param_4,&DAT_180022000);
    local_18 = (longlong *)thunk_FUN_180005150();
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x30))
                (local_18,1,0x4c00,L"CBurn DiscInfo DiscType = %d LenPerWrite = %d",local_24,
                 DAT_180022000);
    }
  }
  return local_28;
}




undefined4
FUN_180003fc0(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007f60(param_2,param_3,param_4,param_5);
  return uVar1;
}




undefined4 FUN_180004020(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_1800080f0();
  return uVar1;
}




undefined4 FUN_180004070(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007e40();
  return uVar1;
}




undefined4 FUN_1800040a0(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007ed0();
  return uVar1;
}




void FUN_1800040d0(undefined8 param_1,LPWSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  CHAR *pCVar4;
  undefined1 auStackY_278 [32];
  CHAR local_238 [272];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_278;
  pCVar4 = local_238;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  pCVar4 = local_128;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  uVar1 = thunk_FUN_180007c20(local_238,local_128);
  if (((uVar1 & 0xfff) == 0) &&
     (iVar2 = MultiByteToWideChar(0,0,local_238,-1,param_2,param_3), iVar2 != 0)) {
    MultiByteToWideChar(0,0,local_128,-1,param_4,param_5);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_278);
  return;
}




undefined4 FUN_180004210(undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  longlong *local_18;
  
  local_1c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = thunk_FUN_180007ad0(&local_28,&local_24,&local_20);
  local_18 = (longlong *)thunk_FUN_180005150();
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x30))
              (local_18,1,0x4c00,
               L"CBurn bIsTaoSupported : %d, bIsDaoSupported : %d, bIsSaoSupported : %d",local_28,
               local_24,local_20);
  }
  *param_2 = local_28;
  *param_3 = local_24;
  *param_4 = local_20;
  return local_1c;
}




undefined4 FUN_180004300(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007a40();
  return uVar1;
}




undefined4 FUN_180004330(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_180007450();
  return uVar1;
}




undefined4 FUN_180004360(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_1800085d0((char *)(param_1 + 0xc),param_2);
  return uVar1;
}




void FUN_1800043b0(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  longlong *plVar3;
  longlong lVar4;
  CHAR *pCVar5;
  undefined1 auStackY_178 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_178;
  sVar2 = wcslen(param_2);
  if ((uint)sVar2 < 0x104) {
    pCVar5 = local_128;
    for (lVar4 = 0x104; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pCVar5 = '\0';
      pCVar5 = pCVar5 + 1;
    }
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      thunk_FUN_180008670((char *)(param_1 + 0xc),local_128);
      plVar3 = (longlong *)thunk_FUN_180005150();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x4c00,L"CBurn RealTimeWrite_Begin Result : %d");
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return;
}




void FUN_1800044f0(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  longlong *plVar3;
  longlong lVar4;
  CHAR *pCVar5;
  undefined1 auStackY_178 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_178;
  sVar2 = wcslen(param_2);
  if ((uint)sVar2 < 0x104) {
    pCVar5 = local_128;
    for (lVar4 = 0x104; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pCVar5 = '\0';
      pCVar5 = pCVar5 + 1;
    }
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      thunk_FUN_180008710((char *)(param_1 + 0xc),local_128);
    }
    plVar3 = (longlong *)thunk_FUN_180005150();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1,0x4c00,L"CBurn RealTimeWrite_CreateFile Ret : %d");
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return;
}




uint FUN_180004630(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_24 = 0;
  local_28 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_24 = 0x14804c09;
  }
  else {
    uVar1 = param_3 / DAT_180022000;
    for (local_20 = 0; local_20 < uVar1; local_20 = local_20 + 1) {
      local_24 = thunk_FUN_1800087b0(param_1 + 0xc,param_2 + (ulonglong)local_28,DAT_180022000,
                                     param_4);
      if ((local_24 & 0xfff) != 0) {
        return local_24;
      }
      Sleep(DAT_180022004);
      local_28 = local_28 + DAT_180022000;
    }
    if (param_3 % DAT_180022000 != 0) {
      local_24 = thunk_FUN_1800087b0(param_1 + 0xc,param_2 + (ulonglong)local_28,
                                     param_3 % DAT_180022000,param_4);
      Sleep(DAT_180022004);
    }
  }
  return local_24;
}




undefined4 FUN_180004770(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = thunk_FUN_180008850((char *)(param_1 + 0xc));
  plVar2 = (longlong *)thunk_FUN_180005150();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,1,0x4c00,L"CBurn RealTimeWrite_CloseFile Ret : %d",uVar1);
  }
  return uVar1;
}




undefined4 FUN_180004800(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = thunk_FUN_1800088e0((char *)(param_1 + 0xc));
  plVar2 = (longlong *)thunk_FUN_180005150();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,1,0x4c00,L"CBurn RealTimeWrite_End Result : %d",uVar1);
  }
  return uVar1;
}




undefined4 FUN_180004890(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = thunk_FUN_180008970((char *)(param_1 + 0xc),local_10);
  *param_2 = local_10[0];
  return uVar1;
}




void FUN_1800048f0(undefined8 param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  longlong *plVar3;
  longlong lVar4;
  CHAR *pCVar5;
  undefined1 auStackY_178 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_178;
  sVar2 = wcslen(param_2);
  if ((uint)sVar2 < 0x104) {
    pCVar5 = local_128;
    for (lVar4 = 0x104; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pCVar5 = '\0';
      pCVar5 = pCVar5 + 1;
    }
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      thunk_FUN_1800074f0(local_128,param_3);
      plVar3 = (longlong *)thunk_FUN_180005150();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x4c00,L"CBurn WriteImageToCD Result : %d");
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return;
}




void FUN_180004a30(undefined8 param_1,LPWSTR param_2)

{
  uint uVar1;
  longlong lVar2;
  CHAR *pCVar3;
  undefined1 auStackY_168 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_168;
  pCVar3 = local_128;
  for (lVar2 = 0x104; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pCVar3 = '\0';
    pCVar3 = pCVar3 + 1;
  }
  uVar1 = thunk_FUN_180007380(local_128);
  if ((uVar1 & 0xfff) == 0) {
    MultiByteToWideChar(0,0,local_128,-1,param_2,0x104);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_168);
  return;
}




uint FUN_180004b00(void)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_180007590();
  return uVar1;
}




undefined4 FUN_180004b40(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_24;
  
  local_24 = 0;
  *param_3 = 0x200000;
  DAT_180022004 = 600;
  if (param_2 < 0x44) {
    if (0x3f < param_2) {
      *param_3 = 0x200000;
      return 0;
    }
    switch(param_2) {
    case 8:
    case 9:
    case 10:
      *param_3 = 0x80000;
      DAT_180022004 = 0x244;
      break;
    default:
      goto switchD_180004bcf_caseD_b;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
switchD_180004bcf_caseD_10:
      *param_3 = 0x200000;
      break;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x2a:
    case 0x2b:
      *param_3 = 0x200000;
    }
  }
  else {
    if (0x4f < param_2) {
      if (((param_2 < 0x54) || (param_2 == 0x58)) || (param_2 == 0x5a)) {
        *param_3 = 0x200000;
        return 0;
      }
      if (param_2 == 0x1314) goto switchD_180004bcf_caseD_10;
    }
switchD_180004bcf_caseD_b:
    local_24 = 0x20d04c43;
  }
  return local_24;
}




void FUN_180004c90(undefined8 *param_1)

{
  *param_1 = CBurn::vftable;
  thunk_FUN_180008cf0();
  thunk_FUN_180005540(param_1);
  return;
}




bool FUN_180004cd0(void)

{
  return DAT_1800226c0 == 0;
}




longlong FUN_180005150(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_18 [3];
  
  lVar3 = DAT_1800226f8;
  if (DAT_1800226f8 == 0) {
    local_18[0] = (undefined8 *)0x0;
    iVar1 = thunk_FUN_180005250("CodeLog",0x1800,local_18);
    if (iVar1 == 0) {
      plVar2 = (longlong *)
               __RTDynamicCast(local_18[0],0,&ITbCreator::RTTI_Type_Descriptor,
                               &CTbBaseCreator<class_ILog>::RTTI_Type_Descriptor,0);
      if ((plVar2 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x1800)) {
        DAT_1800226f8 = (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      (**(code **)*local_18[0])(local_18[0]);
      lVar3 = DAT_1800226f8;
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}




undefined4 FUN_180005250(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x104) < DAT_180022714) {
    _Init_thread_header(&DAT_180022714);
    if (DAT_180022714 == -1) {
      DAT_180022708 = (code *)thunk_FUN_180005b70(param_1,&local_20);
      _Init_thread_footer(&DAT_180022714);
    }
  }
  if (DAT_180022708 == (code *)0x0) {
    uVar1 = 0x12404c02;
  }
  else {
    uVar1 = (*DAT_180022708)(0x10000,param_2,param_3);
  }
  return uVar1;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  thunk_FUN_1800054a0((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_IBurn>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 * FUN_180005380(undefined8 *param_1)

{
  thunk_FUN_180005500(param_1);
  *param_1 = CTbBaseCreator<class_IBurn>::vftable;
  return param_1;
}




undefined8 * FUN_1800053c0(undefined8 *param_1)

{
  thunk_FUN_180005500(param_1);
  *param_1 = CTbBaseCreator<class_ITbFile>::vftable;
  return param_1;
}




undefined8 * FUN_180005400(undefined8 *param_1,undefined4 param_2)

{
  thunk_FUN_180005380(param_1);
  *param_1 = CTbCreator<class_IBurn,class_CBurn>::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  return param_1;
}




undefined8 * FUN_180005450(undefined8 *param_1,undefined4 param_2)

{
  thunk_FUN_1800053c0(param_1);
  *param_1 = CTbCreator<class_ITbFile,class_CBurnFile>::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  return param_1;
}




undefined8 * FUN_1800054a0(undefined8 *param_1)

{
  thunk_FUN_1800054e0(param_1);
  *param_1 = IBurn::vftable;
  return param_1;
}




undefined8 * FUN_1800054e0(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return param_1;
}




undefined8 * FUN_180005500(undefined8 *param_1)

{
  thunk_FUN_1800054e0(param_1);
  *param_1 = ITbCreator::vftable;
  return param_1;
}




void FUN_180005540(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_IBurn>::vftable;
  thunk_FUN_180005610(param_1);
  return;
}




void FUN_180005570(undefined8 *param_1)

{
  *param_1 = CTbBaseCreator<class_IBurn>::vftable;
  thunk_FUN_180005660(param_1);
  return;
}




void FUN_1800055a0(undefined8 *param_1)

{
  *param_1 = CTbBaseCreator<class_ITbFile>::vftable;
  thunk_FUN_180005660(param_1);
  return;
}




void FUN_1800055d0(undefined8 *param_1)

{
  thunk_FUN_180005570(param_1);
  return;
}




void FUN_1800055f0(undefined8 *param_1)

{
  thunk_FUN_1800055a0(param_1);
  return;
}




void FUN_180005610(undefined8 *param_1)

{
  *param_1 = IBurn::vftable;
  thunk_FUN_180005640(param_1);
  return;
}




void FUN_180005640(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return;
}




void FUN_180005660(undefined8 *param_1)

{
  *param_1 = ITbCreator::vftable;
  thunk_FUN_180005640(param_1);
  return;
}




undefined8 * FUN_180005690(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180005540(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800056e0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180005570(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005730(undefined8 *param_1,uint param_2)

{
  thunk_FUN_1800055a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005780(undefined8 *param_1,uint param_2)

{
  thunk_FUN_1800055d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800057d0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_1800055f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005820(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180004c90(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005870(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180005610(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800058c0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180005640(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180005910(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180005660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180005960(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180005990(void)

{
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_1800059b0(void)

{
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_1800059d0(void)

{
  return 0;
}




undefined8 FUN_1800059e0(void)

{
  return 0;
}




CResetPropExchange * FUN_1800059f0(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_38;
  
  pCVar1 = (CResetPropExchange *)operator_new(0x14);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_38 = (CResetPropExchange *)0x0;
  }
  else {
    local_38 = thunk_FUN_180003d40(pCVar1);
  }
  if (local_38 != (CResetPropExchange *)0x0) {
    LOCK();
    DAT_1800226c0 = DAT_1800226c0 + 1;
    UNLOCK();
  }
  return local_38;
}




CResetPropExchange * FUN_180005ab0(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_38;
  
  pCVar1 = (CResetPropExchange *)operator_new(0x18);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_38 = (CResetPropExchange *)0x0;
  }
  else {
    local_38 = thunk_FUN_180005e80(pCVar1);
  }
  if (local_38 != (CResetPropExchange *)0x0) {
    LOCK();
    DAT_1800226c0 = DAT_1800226c0 + 1;
    UNLOCK();
  }
  return local_38;
}




void FUN_180005b70(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_158 [32];
  HMODULE local_138;
  FARPROC local_130;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStack_158;
  local_130 = (FARPROC)0x0;
  pcVar2 = local_128;
  for (lVar1 = 0x104; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  strcpy_s(local_128,0x104,param_1);
  strcat_s(local_128,0x104,".dll");
  local_138 = (HMODULE)0x0;
  local_138 = LoadLibraryA(local_128);
  if (local_138 != (HMODULE)0x0) {
    local_130 = GetProcAddress(local_138,"TBCreateObject");
    if (local_130 == (FARPROC)0x0) {
      FreeLibrary(local_138);
    }
    else if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_138;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




undefined8 FUN_180005cb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x2d04c0a;
  }
  else {
    uVar1 = 0x2f04c06;
  }
  return uVar1;
}




undefined8 FUN_180005ce0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x4304c0a;
  }
  else {
    uVar1 = 0x4404c06;
  }
  return uVar1;
}




undefined8 FUN_180005d10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x4304c0a;
  }
  else {
    uVar1 = 0x4404c06;
  }
  return uVar1;
}




undefined8 FUN_180005d40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + -1;
  UNLOCK();
  plVar2 = param_1 + 1;
  LOCK();
  lVar1 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if (((int)lVar1 + -1 < 1) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,1);
  }
  return 0;
}




undefined8 FUN_180005de0(void)

{
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + -1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180005e00(void)

{
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + -1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180005e20(void)

{
  return 0;
}




undefined8 FUN_180005e30(void)

{
  return 0;
}




undefined4 FUN_180005e40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_180005e60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




CResetPropExchange * FUN_180005e80(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CBurnFile::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}




uint FUN_180005ec0(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint local_24;
  int local_20;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = thunk_FUN_180006520(0x4c00);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0x3704c02;
    }
  }
  uVar1 = *param_2;
  if ((uVar1 < 0x41) || (0x5a < uVar1)) {
    local_20 = uVar1 - 0x61;
  }
  else {
    local_20 = uVar1 - 0x41;
  }
  local_24 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                       (*(undefined8 *)(param_1 + 0x10),local_20);
  if ((local_24 & 0xfff) == 0) {
    local_24 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                         (*(undefined8 *)(param_1 + 0x10),param_2 + 2);
  }
  return local_24;
}




uint FUN_180005ff0(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0x5504c05;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(undefined8 *)(param_1 + 0x10));
  }
  return uVar1;
}




undefined4 FUN_180006060(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0x6804c05;
  }
  else {
    uVar1 = 0x6704c06;
  }
  return uVar1;
}




uint FUN_1800060b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                    (*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  if (((uVar1 & 0xfff) == 0) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = param_3;
  }
  return uVar1;
}




undefined4 FUN_180006130(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0x8b04c05;
  }
  else {
    uVar1 = 0x8a04c06;
  }
  return uVar1;
}




undefined4 FUN_180006180(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0x9704c05;
  }
  else {
    uVar1 = 0x9604c06;
  }
  return uVar1;
}




undefined4 FUN_1800061c0(void)

{
  return 0;
}




undefined4 FUN_1800061f0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0xb304c05;
  }
  else {
    uVar1 = 0xb204c06;
  }
  return uVar1;
}




uint FUN_180006240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0xc504c05;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                      (*(undefined8 *)(param_1 + 0x10),param_3,param_4);
    if (((uVar1 & 0xfff) == 0) && (param_5 != (undefined4 *)0x0)) {
      *param_5 = param_4;
    }
  }
  return uVar1;
}




undefined4 FUN_1800062e0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0xd504c05;
  }
  else {
    uVar1 = 0xd404c06;
  }
  return uVar1;
}




undefined4 FUN_180006330(void)

{
  return 0;
}




void FUN_180006360(undefined8 *param_1)

{
  *param_1 = CBurnFile::vftable;
  if (param_1[2] != 0) {
    (*(code *)**(undefined8 **)param_1[2])(param_1[2]);
    param_1[2] = 0;
  }
  thunk_FUN_180006700(param_1);
  return;
}




undefined8 FUN_180006520(int param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = TBCreateObject(0x10000,param_1,(longlong *)&local_28);
  if (iVar1 == 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(local_28,0,&ITbCreator::RTTI_Type_Descriptor,
                             &CTbBaseCreator<class_IBurn>::RTTI_Type_Descriptor,0);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), param_1 == iVar1)) {
      local_18 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)*local_28)(local_28);
  }
  else {
    local_20 = (longlong *)thunk_FUN_180005150();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x4c00,L"Failed to Load lib Err=0x%x InterfaceNo=%x",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  thunk_FUN_1800066c0((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_ITbFile>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 * FUN_1800066c0(undefined8 *param_1)

{
  thunk_FUN_1800054e0(param_1);
  *param_1 = ITbFile::vftable;
  return param_1;
}




void FUN_180006700(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_ITbFile>::vftable;
  thunk_FUN_180006730(param_1);
  return;
}




void FUN_180006730(undefined8 *param_1)

{
  *param_1 = ITbFile::vftable;
  thunk_FUN_180005640(param_1);
  return;
}




undefined8 * FUN_180006760(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180006700(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800067b0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180006360(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180006800(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180006730(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180006850(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180006880(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x2d04c0a;
  }
  else {
    uVar1 = 0x2f04c06;
  }
  return uVar1;
}




undefined8 FUN_1800068b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  DAT_1800226c0 = DAT_1800226c0 + -1;
  UNLOCK();
  plVar2 = param_1 + 1;
  LOCK();
  lVar1 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if (((int)lVar1 + -1 < 1) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,1);
  }
  return 0;
}




undefined8 FUN_180006950(void)

{
  return 1;
}




void FUN_180006cb0(void)

{
  int iVar1;
  
  iVar1 = (*DAT_180022858)();
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180006d30(void)

{
  int iVar1;
  
  iVar1 = (*DAT_180022850)();
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180007010(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_1800227f0)(param_1);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180007090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_180022800)(param_1,param_2,param_3,param_4,0);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180007120(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_180022830)(param_1,param_2,param_3,param_4,0);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180007270(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_180022820)(param_1);
  thunk_FUN_180008d00(iVar1);
  return;
}




undefined4 FUN_180007380(void *param_1)

{
  int iVar1;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = 0;
  thunk_FUN_18000e1c0(local_28,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_28,&local_48,"fun_WriteGetCurrBurnFileName");
  if (iVar1 == 0) {
    local_38 = (int *)thunk_FUN_180009f50(local_18);
    if (local_38 == (int *)0x0) {
      local_40 = 0x2d804c14;
      thunk_FUN_18000e490((longlong)local_28);
      local_44 = local_40;
    }
    else {
      local_38 = (int *)thunk_FUN_18000a050(local_38,param_1);
      local_3c = thunk_FUN_180008d00(local_48);
      thunk_FUN_18000e490((longlong)local_28);
      local_44 = local_3c;
    }
  }
  else {
    local_44 = 0x2d304c35;
    thunk_FUN_18000e490((longlong)local_28);
  }
  return local_44;
}




undefined4 FUN_180007450(void)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_34 = 0;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_WriteGetProgress");
  if (iVar1 == 0) {
    local_34 = local_38;
    local_2c = local_38;
    thunk_FUN_18000e490((longlong)local_20);
    local_30 = local_2c;
  }
  else {
    local_30 = 0x2b104c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_30;
}




undefined4 FUN_1800074f0(char *param_1,int param_2)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000bed0(local_20,&local_38,"fun_WriteImageToCD",param_1,param_2);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x2a004c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180007590(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_WriteClose");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x29004c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




void FUN_1800077f0(void)

{
  int iVar1;
  
  iVar1 = (*DAT_1800227b0)();
  thunk_FUN_180008d00(iVar1);
  return;
}




undefined4 FUN_180007a40(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_AbortWrite");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x1f804c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180007ad0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_40 = 0;
  thunk_FUN_18000e1c0(local_28,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_28,&local_40,"fun_GetSupportedWriteModes");
  if (iVar1 == 0) {
    piVar2 = (int *)thunk_FUN_180009f50(local_18);
    if (piVar2 == (int *)0x0) {
      local_38 = 0x1e404c14;
      thunk_FUN_18000e490((longlong)local_28);
      local_3c = local_38;
    }
    else {
      piVar2 = (int *)thunk_FUN_18000b740(piVar2,param_1);
      if (piVar2 == (int *)0x0) {
        local_34 = 0x1e604c14;
        thunk_FUN_18000e490((longlong)local_28);
        local_3c = local_34;
      }
      else {
        piVar2 = (int *)thunk_FUN_18000b740(piVar2,param_2);
        if (piVar2 == (int *)0x0) {
          local_30 = 0x1e804c14;
          thunk_FUN_18000e490((longlong)local_28);
          local_3c = local_30;
        }
        else {
          thunk_FUN_18000b740(piVar2,param_3);
          local_2c = thunk_FUN_180008d00(local_40);
          thunk_FUN_18000e490((longlong)local_28);
          local_3c = local_2c;
        }
      }
    }
  }
  else {
    local_3c = 0x1df04c35;
    thunk_FUN_18000e490((longlong)local_28);
  }
  return local_3c;
}




undefined4 FUN_180007c20(void *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_28 [2];
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_40 = 0;
  thunk_FUN_18000e1c0(local_28,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_28,&local_40,"fun_GetVendorProductStrings");
  if (iVar1 == 0) {
    piVar2 = (int *)thunk_FUN_180009f50(local_18);
    if (piVar2 == (int *)0x0) {
      local_38 = 0x1cb04c14;
      thunk_FUN_18000e490((longlong)local_28);
      local_3c = local_38;
    }
    else {
      piVar2 = (int *)thunk_FUN_18000a050(piVar2,param_1);
      if (piVar2 == (int *)0x0) {
        local_34 = 0x1cd04c14;
        thunk_FUN_18000e490((longlong)local_28);
        local_3c = local_34;
      }
      else {
        thunk_FUN_18000a050(piVar2,param_2);
        local_30 = thunk_FUN_180008d00(local_40);
        thunk_FUN_18000e490((longlong)local_28);
        local_3c = local_30;
      }
    }
  }
  else {
    local_3c = 0x1c704c35;
    thunk_FUN_18000e490((longlong)local_28);
  }
  return local_3c;
}




undefined4 FUN_180007db0(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_IsDeviceReady");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x1a504c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180007e40(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_Load");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x19504c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180007ed0(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_Unload");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x18504c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4
FUN_180007f60(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  int *piVar2;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  longlong local_30 [2];
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_50 = 0;
  thunk_FUN_18000e1c0(local_30,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_30,&local_50,"GetCdSpeeds");
  if (iVar1 == 0) {
    piVar2 = (int *)thunk_FUN_180009f50(local_20);
    if (piVar2 == (int *)0x0) {
      local_48 = 0x16e04c14;
      thunk_FUN_18000e490((longlong)local_30);
      local_4c = local_48;
    }
    else {
      piVar2 = (int *)thunk_FUN_18000b6b0(piVar2,param_1);
      if (piVar2 == (int *)0x0) {
        local_44 = 0x17004c14;
        thunk_FUN_18000e490((longlong)local_30);
        local_4c = local_44;
      }
      else {
        piVar2 = (int *)thunk_FUN_18000b6b0(piVar2,param_2);
        if (piVar2 == (int *)0x0) {
          local_40 = 0x17204c14;
          thunk_FUN_18000e490((longlong)local_30);
          local_4c = local_40;
        }
        else {
          piVar2 = (int *)thunk_FUN_18000b6b0(piVar2,param_3);
          if (piVar2 == (int *)0x0) {
            local_3c = 0x17404c14;
            thunk_FUN_18000e490((longlong)local_30);
            local_4c = local_3c;
          }
          else {
            thunk_FUN_18000b6b0(piVar2,param_4);
            local_38 = thunk_FUN_180008d00(local_50);
            thunk_FUN_18000e490((longlong)local_30);
            local_4c = local_38;
          }
        }
      }
    }
  }
  else {
    local_4c = 0x16a04c35;
    thunk_FUN_18000e490((longlong)local_30);
  }
  return local_4c;
}




undefined4 FUN_1800080f0(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000bb50(local_20,&local_38,"fun_SetCdSpeeds",0,0);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x15a04c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180008190(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  longlong local_30 [2];
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_50 = 0;
  thunk_FUN_18000e1c0(local_30,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_30,&local_50,"fun_GetDiscInfoEx");
  if (iVar1 == 0) {
    piVar2 = (int *)thunk_FUN_180009f50(local_20);
    if (piVar2 == (int *)0x0) {
      local_48 = 0x14304c14;
      thunk_FUN_18000e490((longlong)local_30);
      local_4c = local_48;
    }
    else {
      piVar2 = (int *)thunk_FUN_18000b740(piVar2,param_1);
      if (piVar2 == (int *)0x0) {
        local_44 = 0x14504c14;
        thunk_FUN_18000e490((longlong)local_30);
        local_4c = local_44;
      }
      else {
        piVar2 = (int *)thunk_FUN_18000b740(piVar2,param_2);
        if (piVar2 == (int *)0x0) {
          local_40 = 0x14704c14;
          thunk_FUN_18000e490((longlong)local_30);
          local_4c = local_40;
        }
        else {
          piVar2 = (int *)thunk_FUN_18000b740(piVar2,param_3);
          if (piVar2 == (int *)0x0) {
            local_3c = 0x14904c14;
            thunk_FUN_18000e490((longlong)local_30);
            local_4c = local_3c;
          }
          else {
            thunk_FUN_18000b7d0(piVar2,param_4);
            local_38 = thunk_FUN_180008d00(local_50);
            thunk_FUN_18000e490((longlong)local_30);
            local_4c = local_38;
          }
        }
      }
    }
  }
  else {
    local_4c = 0x13f04c35;
    thunk_FUN_18000e490((longlong)local_30);
  }
  return local_4c;
}




undefined4 FUN_180008320(void)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000a540(local_20,&local_38,"fun_BlankDisc");
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x12f04c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_1800083b0(undefined1 param_1)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000b9b0(local_20,&local_38,"fun_SetDevice",param_1);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x10c04c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




void FUN_180008440(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_180022730)(param_1);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_1800084c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_180022810)(param_1,param_2,param_3,param_4,0);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180008550(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_180022818)(param_1);
  thunk_FUN_180008d00(iVar1);
  return;
}




undefined4 FUN_1800085d0(char *param_1,undefined8 param_2)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000c2b0(local_20,&local_38,"fun_RealTimeWrite_SetEstimateTotalWriteSize",
                              param_1,param_2);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x43704c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180008670(char *param_1,char *param_2)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000c0c0(local_20,&local_38,"fun_RealTimeWrite_Begin",param_1,param_2);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x44704c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180008710(char *param_1,char *param_2)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000c0c0(local_20,&local_38,"fun_RealTimeWrite_CreateFile",param_1,param_2);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x45804c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




void FUN_1800087b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_1800228a0)(param_1,param_2,param_3,param_4,0);
  thunk_FUN_180008d00(iVar1);
  return;
}




undefined4 FUN_180008850(char *param_1)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000bd30(local_20,&local_38,"fun_RealTimeWrite_CloseFile",param_1);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x47904c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_1800088e0(char *param_1)

{
  int iVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0;
  thunk_FUN_18000e1c0(local_20,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000bd30(local_20,&local_38,"fun_RealTimeWrite_End",param_1);
  if (iVar1 == 0) {
    local_30 = thunk_FUN_180008d00(local_38);
    thunk_FUN_18000e490((longlong)local_20);
    local_34 = local_30;
  }
  else {
    local_34 = 0x48904c35;
    thunk_FUN_18000e490((longlong)local_20);
  }
  return local_34;
}




undefined4 FUN_180008970(char *param_1,undefined8 *param_2)

{
  int iVar1;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = 0;
  thunk_FUN_18000e1c0(local_28,&DAT_1800228e0,&DAT_180022930);
  iVar1 = thunk_FUN_18000bd30(local_28,&local_48,"fun_RealTimeWrite_GetDiscRemainCapacity",param_1);
  if (iVar1 == 0) {
    local_38 = (int *)thunk_FUN_180009f50(local_18);
    if (local_38 == (int *)0x0) {
      local_40 = 0x49d04c14;
      thunk_FUN_18000e490((longlong)local_28);
      local_44 = local_40;
    }
    else {
      local_38 = (int *)thunk_FUN_18000b7d0(local_38,param_2);
      local_3c = thunk_FUN_180008d00(local_48);
      thunk_FUN_18000e490((longlong)local_28);
      local_44 = local_3c;
    }
  }
  else {
    local_44 = 0x49904c35;
    thunk_FUN_18000e490((longlong)local_28);
  }
  return local_44;
}




void FUN_180008ba0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_1800228d0)(param_1);
  thunk_FUN_180008d00(iVar1);
  return;
}




void FUN_180008c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_1800228d8)(param_1,param_2,param_3,param_4,0);
  thunk_FUN_180008d00(iVar1);
  return;
}




undefined4 FUN_180008cb0(void)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0x5f04d10;
  iVar1 = thunk_FUN_18000f3c0(0x180022988);
  if (iVar1 != 0) {
    local_18 = 0;
  }
  return local_18;
}




undefined8 FUN_180008cf0(void)

{
  return 0;
}




undefined4 FUN_180008d00(int param_1)

{
  longlong *plVar1;
  
  if (param_1 < -0x130) {
    if (param_1 == -0x131) {
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xdf04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Read track info error.");
      return 0xdf04c47;
    }
    switch(param_1) {
    case -0x25b:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xf704c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Conv file start error.");
      return 0xf704c47;
    case -0x25a:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xf304c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Conv file error.");
      return 0xf304c47;
    case -0x259:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xef04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Conv file initialization error.");
      return 0xef04c47;
    case -0x200:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xeb04c4f;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Oversize file.");
      return 0xeb04c4f;
    case -0x1ff:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xe704c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn CD error in ready burning.");
      return 0xe704c47;
    case -0x1fe:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xe304c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Decode music file error.");
      return 0xe304c47;
    }
  }
  else if (param_1 < -0x2b) {
    if (param_1 == -0x2c) {
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0x9f04c41;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Check empty CD error.");
      return 0x9f04c41;
    }
    switch(param_1) {
    case -0x130:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xdb04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Read CD error.");
      return 0xdb04c47;
    case -0x12d:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xd704c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Not write CD.");
      return 0xd704c47;
    case -0xa2:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xd304c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn File format error in copy CD.");
      return 0xd304c47;
    case -0xa1:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xcf04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Not find temp file in copy CD.");
      return 0xcf04c47;
    case -0xa0:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xcb04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Create temp file error in copy CD.");
      return 0xcb04c47;
    case -0x9f:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xc704c47;
      }
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x4c00,L"CBurn Not enough space for save tmep file by disk.");
      return 0xc704c47;
    case -0x9e:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xc304c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Not enough space.");
      return 0xc304c47;
    case -0x9d:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xbf04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Not Can burn DVD.");
      return 0xbf04c47;
    case -0x9c:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xbb04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Not identify image file.");
      return 0xbb04c47;
    case -0x90:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xb704c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Error track type.");
      return 0xb704c47;
    case -0x7c:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xb304c4f;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Data break bounds.");
      return 0xb304c4f;
    case -0x71:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xaf04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Write CD error.");
      return 0xaf04c47;
    case -0x6d:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xab04c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Create file fail.");
      return 0xab04c47;
    case -100:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xa704c29;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn User cancel operator.");
      return 0xa704c29;
    case -0x32:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 == (longlong *)0x0) {
        return 0xa304c47;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn This is empty CD.");
      return 0xa304c47;
    }
  }
  else {
    switch(param_1) {
    case 0:
      return 0x8404c01;
    case 1:
      return 0;
    case -0xf:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Driver Busy.");
        return 0x9b04c42;
      }
      return 0x9b04c42;
    case -10:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Error operator command.");
        return 0x9704c47;
      }
      return 0x9704c47;
    case -8:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Error driver no.");
        return 0x9304c50;
      }
      return 0x9304c50;
    case -7:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Error command request.");
        return 0x8f04c47;
      }
      return 0x8f04c47;
    case -6:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Send burn command fail.");
        return 0x8b04c47;
      }
      return 0x8b04c47;
    case -5:
      plVar1 = (longlong *)thunk_FUN_180005150();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Send operate command fail.");
        return 0x8704c47;
      }
      return 0x8704c47;
    }
  }
  plVar1 = (longlong *)thunk_FUN_180005150();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,0x4c00,L"CBurn Other Error. ret = 0x%x",param_1);
  }
  return 0xfb04c47;
}




undefined8 * FUN_180009a20(undefined8 *param_1)

{
  *param_1 = CBurnSDK::vftable;
  return param_1;
}




void FUN_180009a40(undefined8 *param_1)

{
  *param_1 = CBurnSDK::vftable;
  return;
}




longlong FUN_180009a60(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    DebugBreak();
  }
  sVar1 = strlen(param_1);
  return sVar1 + 1;
}




longlong FUN_180009a90(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    DebugBreak();
  }
  sVar1 = strlen(param_1);
  return sVar1 + 1;
}




longlong FUN_180009ac0(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    DebugBreak();
  }
  sVar1 = strlen(param_1);
  return sVar1 + 1;
}




longlong FUN_180009af0(char *param_1)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    DebugBreak();
  }
  sVar1 = strlen(param_1);
  return sVar1 + 1;
}




undefined8 FUN_180009b20(longlong param_1)

{
  if (param_1 == 0) {
    DebugBreak();
  }
  return 8;
}




undefined8 FUN_180009b50(longlong param_1)

{
  if (param_1 == 0) {
    DebugBreak();
  }
  return 4;
}




undefined8 FUN_180009b80(longlong param_1)

{
  if (param_1 == 0) {
    DebugBreak();
  }
  return 4;
}




longlong FUN_180009bb0(int *param_1,char *param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180009a60(param_2);
  *param_1 = (int)lVar1;
  strcpy((char *)(param_1 + 1),param_2);
  return (longlong)(char *)((longlong)(param_1 + 1) + (longlong)*param_1);
}




longlong FUN_180009c10(int *param_1,char *param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180009af0(param_2);
  *param_1 = (int)lVar1;
  strcpy((char *)(param_1 + 1),param_2);
  return (longlong)(char *)((longlong)(param_1 + 1) + (longlong)*param_1);
}




longlong FUN_180009c70(int *param_1,char *param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180009a90(param_2);
  *param_1 = (int)lVar1;
  strcpy((char *)(param_1 + 1),param_2);
  return (longlong)(char *)((longlong)(param_1 + 1) + (longlong)*param_1);
}




longlong FUN_180009cd0(int *param_1,char *param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180009ac0(param_2);
  *param_1 = (int)lVar1;
  strcpy((char *)(param_1 + 1),param_2);
  return (longlong)(char *)((longlong)(param_1 + 1) + (longlong)*param_1);
}




longlong FUN_180009d30(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180009b20((longlong)param_2);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 1) = *param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




longlong FUN_180009da0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180009b50((longlong)param_2);
  *param_1 = (int)uVar1;
  param_1[1] = *param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




longlong FUN_180009e10(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180009b80((longlong)param_2);
  *param_1 = (int)uVar1;
  param_1[1] = *param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




void FUN_180009e80(void *param_1,size_t param_2,undefined4 param_3,char *param_4)

{
  memset(param_1,0,param_2);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  thunk_FUN_180009c70((int *)((longlong)param_1 + 0x18),param_4);
  return;
}




undefined8 FUN_180009ee0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 1;
}




longlong FUN_180009f10(longlong param_1)

{
  return param_1 + 0x18;
}




longlong FUN_180009f50(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_180009f10(param_1);
  return (longlong)piVar1 + (longlong)*piVar1 + 4;
}




longlong FUN_180009fa0(int *param_1,void *param_2)

{
  longlong local_18;
  
  local_18 = 0;
  if (0 < *param_1) {
    memcpy(param_2,param_1 + 1,(longlong)*param_1);
    local_18 = (longlong)param_1 + (longlong)*param_1 + 4;
  }
  return local_18;
}




void FUN_18000a020(int *param_1,void *param_2)

{
  thunk_FUN_180009fa0(param_1,param_2);
  return;
}




void FUN_18000a050(int *param_1,void *param_2)

{
  thunk_FUN_180009fa0(param_1,param_2);
  return;
}




void FUN_18000a080(undefined8 *param_1,undefined8 param_2)

{
  thunk_FUN_18000db40(param_2,L"reclib_func_tick_%I64x_P_%p",*param_1,param_1[1]);
  return;
}




void FUN_18000a0c0(undefined8 *param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStack_248;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  thunk_FUN_18000a080(param_1,local_228);
  CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




void FUN_18000a140(undefined8 *param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_258 [32];
  BOOL local_238;
  HANDLE local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  thunk_FUN_18000a080(param_1,local_228);
  local_230 = OpenEventW(0x1f0003,0,local_228);
  if (local_230 != (HANDLE)0x0) {
    local_238 = SetEvent(local_230);
    CloseHandle(local_230);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




undefined8 * FUN_18000a1f0(undefined8 *param_1,void *param_2)

{
  void *_Dst;
  int local_58;
  int local_54;
  int *local_48;
  undefined8 local_30 [3];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  thunk_FUN_18000df90(local_30);
  if (param_2 != (void *)0x0) {
    local_58 = 0;
    local_48 = (int *)((longlong)param_2 + 0x18);
    for (local_54 = 0; local_54 < *(int *)((longlong)param_2 + 0x14); local_54 = local_54 + 1) {
      local_58 = local_58 + 4 + *local_48;
      local_48 = (int *)((longlong)local_48 + (longlong)*local_48 + 4);
    }
    thunk_FUN_180011800(local_30,(longlong)local_58 + 0x18U);
    _Dst = (void *)thunk_FUN_1800114b0(local_30);
    memcpy(_Dst,param_2,(longlong)local_58 + 0x18U);
  }
  basic_string<>(param_1,local_30);
  thunk_FUN_18000e2e0(local_30);
  return param_1;
}




undefined4 FUN_18000a330(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  HANDLE hHandle;
  undefined4 local_4c;
  undefined8 local_28 [3];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_4c = 0;
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_2 != (undefined8 *)0x0)) &&
     (param_3 != (undefined8 *)0x0)) {
    *param_2 = *param_3;
    param_2[1] = param_3;
    hHandle = (HANDLE)thunk_FUN_18000a0c0(param_2);
    if (hHandle != (HANDLE)0x0) {
      thunk_FUN_18000a1f0(local_28,param_2);
      iVar3 = (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1,local_28);
      if (iVar3 == 0) {
        thunk_FUN_18000e2e0(local_28);
      }
      else {
        bVar2 = false;
        do {
          iVar3 = (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
          if (iVar3 != 0) break;
          bVar1 = false;
          DVar4 = WaitForSingleObject(hHandle,100);
          if (DVar4 == 0) {
            bVar2 = true;
            bVar1 = true;
          }
          else if (DVar4 != 0x102) {
            bVar1 = true;
          }
        } while (!bVar1);
        CloseHandle(hHandle);
        if (bVar2) {
          local_4c = (**(code **)(*(longlong *)param_1[1] + 8))(param_1[1],param_2,param_1 + 2);
          thunk_FUN_18000e2e0(local_28);
        }
        else {
          thunk_FUN_18000e2e0(local_28);
        }
      }
    }
  }
  return local_4c;
}




undefined4 FUN_18000a540(longlong *param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *_Memory;
  undefined8 uVar3;
  undefined4 local_34;
  ULONGLONG local_18;
  undefined8 *local_10;
  
  local_34 = 0xffffffff;
  local_18 = GetTickCount64();
  lVar2 = thunk_FUN_180009a90(param_3);
  _Memory = (undefined8 *)operator_new(lVar2 + 0x21U);
  if (_Memory != (undefined8 *)0x0) {
    thunk_FUN_180009e80(_Memory,lVar2 + 0x21U,1,param_3);
    iVar1 = thunk_FUN_18000a330(param_1,_Memory,&local_18);
    if ((iVar1 != 0) && (uVar3 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar3 != 0)) {
      local_34 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_10 = _Memory;
    free(_Memory);
  }
  return local_34;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2015 Release */

undefined8 * _Compressed_pair<><>(undefined8 *param_1)

{
  thunk_FUN_18000ddd0(param_1);
  thunk_FUN_18000dd50(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2015 Release */

undefined8 * _Compressed_pair<><>(undefined8 *param_1)

{
  thunk_FUN_18000dde0(param_1);
  thunk_FUN_18000dd90(param_1);
  return param_1;
}




undefined8 FUN_18000b600(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_18000b620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_18000db00(param_3);
  thunk_FUN_18000dd50(param_1);
  return param_1;
}




undefined8 * FUN_18000b660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = thunk_FUN_18000db00(param_2);
  thunk_FUN_18000b620(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




longlong FUN_18000b6b0(int *param_1,undefined2 *param_2)

{
  longlong local_28;
  
  local_28 = 0;
  if (*param_1 == 2) {
    *param_2 = (short)param_1[1];
    local_28 = (longlong)param_1 + (longlong)*param_1 + 4;
  }
  return local_28;
}




longlong FUN_18000b740(int *param_1,int *param_2)

{
  longlong local_28;
  
  local_28 = 0;
  if (*param_1 == 4) {
    *param_2 = param_1[1];
    local_28 = (longlong)param_1 + (longlong)*param_1 + 4;
  }
  return local_28;
}




longlong FUN_18000b7d0(int *param_1,undefined8 *param_2)

{
  longlong local_28;
  
  local_28 = 0;
  if (*param_1 == 8) {
    *param_2 = *(undefined8 *)(param_1 + 1);
    local_28 = (longlong)param_1 + (longlong)*param_1 + 4;
  }
  return local_28;
}




longlong FUN_18000b860(int *param_1,undefined1 param_2)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




longlong FUN_18000b8d0(int *param_1,int param_2)

{
  *param_1 = 4;
  param_1[1] = param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




longlong FUN_18000b940(int *param_1,undefined8 param_2)

{
  *param_1 = 8;
  *(undefined8 *)(param_1 + 1) = param_2;
  return (longlong)param_1 + (longlong)*param_1 + 4;
}




undefined4 FUN_18000b9b0(longlong *param_1,undefined4 *param_2,char *param_3,undefined1 param_4)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *_Memory;
  int *piVar5;
  undefined8 uVar6;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_18000c4a0();
  _Var1 = lVar3 + lVar4 + 0x25;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar5 = (int *)thunk_FUN_180009e80(_Memory,_Var1,2,param_3);
    thunk_FUN_18000b860(piVar5,param_4);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar6 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar6 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined4
FUN_18000bb50(longlong *param_1,undefined4 *param_2,char *param_3,int param_4,int param_5)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *_Memory;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_18000c4b0();
  lVar5 = thunk_FUN_18000c4b0();
  _Var1 = lVar3 + lVar4 + lVar5 + 0x29;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar6 = (int *)thunk_FUN_180009e80(_Memory,_Var1,3,param_3);
    piVar6 = (int *)thunk_FUN_18000b8d0(piVar6,param_4);
    thunk_FUN_18000b8d0(piVar6,param_5);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar7 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar7 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined4 FUN_18000bd30(longlong *param_1,undefined4 *param_2,char *param_3,char *param_4)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *_Memory;
  int *piVar5;
  undefined8 uVar6;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_180009a60(param_4);
  _Var1 = lVar3 + lVar4 + 0x25;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar5 = (int *)thunk_FUN_180009e80(_Memory,_Var1,2,param_3);
    thunk_FUN_180009bb0(piVar5,param_4);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar6 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar6 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined4
FUN_18000bed0(longlong *param_1,undefined4 *param_2,char *param_3,char *param_4,int param_5)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *_Memory;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_180009a60(param_4);
  lVar5 = thunk_FUN_18000c4b0();
  _Var1 = lVar3 + lVar4 + lVar5 + 0x29;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar6 = (int *)thunk_FUN_180009e80(_Memory,_Var1,3,param_3);
    piVar6 = (int *)thunk_FUN_180009bb0(piVar6,param_4);
    thunk_FUN_18000b8d0(piVar6,param_5);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar7 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar7 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined4
FUN_18000c0c0(longlong *param_1,undefined4 *param_2,char *param_3,char *param_4,char *param_5)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *_Memory;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_180009a60(param_4);
  lVar5 = thunk_FUN_180009a60(param_5);
  _Var1 = lVar3 + lVar4 + lVar5 + 0x29;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar6 = (int *)thunk_FUN_180009e80(_Memory,_Var1,3,param_3);
    piVar6 = (int *)thunk_FUN_180009bb0(piVar6,param_4);
    thunk_FUN_180009bb0(piVar6,param_5);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar7 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar7 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined4
FUN_18000c2b0(longlong *param_1,undefined4 *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  __uint64 _Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *_Memory;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_44;
  ULONGLONG local_20;
  undefined8 *local_18;
  
  local_44 = 0xffffffff;
  local_20 = GetTickCount64();
  lVar3 = thunk_FUN_180009a90(param_3);
  lVar4 = thunk_FUN_180009a60(param_4);
  lVar5 = thunk_FUN_18000c4c0();
  _Var1 = lVar3 + lVar4 + lVar5 + 0x29;
  _Memory = (undefined8 *)operator_new(_Var1);
  if (_Memory != (undefined8 *)0x0) {
    piVar6 = (int *)thunk_FUN_180009e80(_Memory,_Var1,3,param_3);
    piVar6 = (int *)thunk_FUN_180009bb0(piVar6,param_4);
    thunk_FUN_18000b940(piVar6,param_5);
    iVar2 = thunk_FUN_18000a330(param_1,_Memory,&local_20);
    if ((iVar2 != 0) && (uVar7 = thunk_FUN_180009ee0(param_1[2],param_2), (int)uVar7 != 0)) {
      local_44 = 0;
    }
  }
  if (_Memory != (undefined8 *)0x0) {
    local_18 = _Memory;
    free(_Memory);
  }
  return local_44;
}




undefined8 FUN_18000c4a0(void)

{
  return 1;
}




undefined8 FUN_18000c4b0(void)

{
  return 4;
}




undefined8 FUN_18000c4c0(void)

{
  return 8;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl std::_Allocate<16,struct std::_Default_allocate_traits,0>(unsigned
   __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Allocate<16,struct_std::_Default_allocate_traits,0>(__uint64 param_1)

{
  void *pvVar1;
  
  if (param_1 < 0x1000) {
    if (param_1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)thunk_FUN_1800100b0(param_1);
    }
  }
  else {
    pvVar1 = (void *)thunk_FUN_18000c520(param_1);
  }
  return pvVar1;
}




ulonglong FUN_18000c520(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = thunk_FUN_1800100b0(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined8 FUN_18000c5d0(undefined8 param_1)

{
  return param_1;
}




longlong FUN_18000c5e0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<8,0>(void * __ptr64,unsigned __int64)
    void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Deallocate<>(void *param_1,ulonglong param_2)

{
  void *local_res8;
  ulonglong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (0xfff < param_2) {
    thunk_FUN_18000ffe0((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




void FUN_18000c6c0(void)

{
  return;
}




void FUN_18000c6e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x18) {
    pvVar1 = (void *)thunk_FUN_18000d410(local_res8);
    destroy<>(param_3,pvVar1);
  }
  return;
}




void FUN_18000c750(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_18000c6c0();
  return;
}




void FUN_18000c7b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_18000c6e0(param_1,param_2,param_3);
  return;
}




void FUN_18000c810(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_18000db10(param_2);
  uVar2 = thunk_FUN_18000d410(*(undefined8 *)(param_1 + 8));
  thunk_FUN_18000d9d0(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}




void FUN_18000c890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = thunk_FUN_18000daf0(param_2);
  puVar2 = (undefined8 *)thunk_FUN_180010c80(param_1);
  uVar3 = thunk_FUN_18000d410(*puVar2);
  uVar4 = thunk_FUN_180010870(param_1);
  thunk_FUN_18000d970(uVar4,uVar3,uVar1);
  thunk_FUN_180010c80(param_1);
  thunk_FUN_180010c80(param_1);
  thunk_FUN_180010d70();
  thunk_FUN_180010c80(param_1);
  plVar5 = (longlong *)thunk_FUN_180010c80(param_1);
  *plVar5 = *plVar5 + 0x18;
  return;
}




longlong FUN_18000c980(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)thunk_FUN_180010be0(param_1);
  lVar2 = (param_2 - *plVar1) / 0x18;
  this = (allocator<struct_std::_Container_proxy> *)thunk_FUN_180010870(param_1);
  _Var3 = thunk_FUN_1800118c0(param_1);
  _Var4 = thunk_FUN_180011770(param_1);
  if (_Var3 == _Var4) {
    thunk_FUN_180011260();
  }
  uVar5 = thunk_FUN_1800102c0(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  uVar7 = thunk_FUN_18000d410(p_Var6 + lVar2 * 0x18);
  uVar8 = thunk_FUN_18000daf0(param_3);
  thunk_FUN_18000d970(this,uVar7,uVar8);
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)thunk_FUN_180010c80(param_1);
    puVar10 = (undefined8 *)thunk_FUN_180010be0(param_1);
    thunk_FUN_1800111d0(param_1,*puVar10,*puVar9,p_Var6);
  }
  else {
    puVar9 = (undefined8 *)thunk_FUN_180010be0(param_1);
    thunk_FUN_180011070(param_1,*puVar9,param_2,p_Var6);
    puVar9 = (undefined8 *)thunk_FUN_180010c80(param_1);
    thunk_FUN_180011070(param_1,param_2,*puVar9,p_Var6 + lVar2 * 0x18 + 0x18);
  }
  thunk_FUN_1800104d0(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)thunk_FUN_180010be0(param_1);
  return lVar2 * 0x18 + *plVar1;
}




undefined8 FUN_18000cc70(undefined8 param_1)

{
  return param_1;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x18;
  if (0xaaaaaaaaaaaaaaa < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




undefined8 FUN_18000cce0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000ccf0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000cd00(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000cd20(undefined8 param_1)

{
  return param_1;
}




longlong FUN_18000cd40(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1;
}




longlong FUN_18000cd70(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x18;
}




void FUN_18000cdb0(longlong *param_1,longlong *param_2)

{
  thunk_FUN_18000cd40(param_1,param_2);
  return;
}




void FUN_18000cdf0(longlong *param_1,longlong *param_2)

{
  thunk_FUN_18000cd70(param_1,param_2);
  return;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}




/* Library Function - Multiple Matches With Same Base Name
    class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > * __ptr64 __cdecl
   std::_Move<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *
   __ptr64,class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *
   __ptr64>(class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *
   __ptr64,class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *
   __ptr64,class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *
   __ptr64,struct std::_Nonscalar_ptr_iterator_tag)
    class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64 __cdecl
   std::_Move<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState * __ptr64> > > *
   __ptr64,class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64>(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > > * __ptr64,struct
   std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

longlong _Move<>(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 local_res18;
  
  local_res18 = param_3;
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x18) {
    uVar1 = thunk_FUN_18000db30(local_res8);
    thunk_FUN_18000e540(local_res18,uVar1);
    local_res18 = local_res18 + 0x18;
  }
  return local_res18;
}




void FUN_18000cf10(longlong param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_18000d020();
  _Move<>(param_1,param_2,param_3);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64)
   
   Library: Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  _Pocma<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64,struct std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64,struct
   std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64,struct std::integral_constant<bool,1>)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_18000db20(param_2);
  return;
}




undefined8 FUN_18000cfe0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000d000(undefined8 param_1)

{
  return param_1;
}




undefined1 FUN_18000d020(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return local_18[0];
}




void FUN_18000d060(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar1 = thunk_FUN_180011870(param_1);
  uVar2 = thunk_FUN_180011360(param_1);
  if (uVar2 < param_2) {
    _Var3 = thunk_FUN_180011710(param_1);
    if (_Var3 < param_2) {
      thunk_FUN_180011240();
    }
    uVar2 = thunk_FUN_180010200(param_1,param_2);
    uVar4 = thunk_FUN_180010810(param_1);
    lVar5 = allocate(uVar4,uVar2);
    thunk_FUN_18000e760(local_res18,(void *)(lVar5 + uVar1),param_2 - uVar1);
    puVar6 = (undefined8 *)thunk_FUN_180010c20(param_1);
    puVar7 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    thunk_FUN_180011160(param_1,*puVar7,*puVar6,lVar5);
    thunk_FUN_180010380(param_1,lVar5,param_2,uVar2);
  }
  else if (uVar1 < param_2) {
    puVar6 = (undefined8 *)thunk_FUN_180010c20(param_1);
    uVar4 = thunk_FUN_18000e760(local_res18,(void *)*puVar6,param_2 - uVar1);
    puVar6 = (undefined8 *)thunk_FUN_180010c20(param_1);
    *puVar6 = uVar4;
    thunk_FUN_180010d50();
  }
  else if (param_2 != uVar1) {
    plVar8 = (longlong *)thunk_FUN_180010ba0(param_1);
    lVar5 = *plVar8;
    thunk_FUN_180010c20(param_1);
    thunk_FUN_180010d50();
    thunk_FUN_180010c20(param_1);
    thunk_FUN_180010630(param_1);
    plVar8 = (longlong *)thunk_FUN_180010c20(param_1);
    *plVar8 = lVar5 + param_2;
  }
  return;
}




void FUN_18000d380(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_18000d3a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_18000d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010810(param_1);
  thunk_FUN_18000d430(param_2,param_3,param_4,uVar1);
  return;
}




undefined8 FUN_18000d410(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000d420(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_18000d430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  void *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)thunk_FUN_18000cce0(param_1);
  local_10[0] = thunk_FUN_18000cce0(param_2);
  thunk_FUN_18000cdb0((longlong *)&local_20,local_10);
  local_18 = (void *)thunk_FUN_18000cd00(local_res18);
  thunk_FUN_18000cfe0(local_28);
  uVar1 = thunk_FUN_18000d510(local_20,local_10[0],local_18);
  thunk_FUN_18000d380(&local_res18,uVar1);
  return local_res18;
}




void FUN_18000d510(void *param_1,longlong param_2,void *param_3)

{
  thunk_FUN_18000c5e0(param_1,param_2,param_3);
  return;
}




undefined8
FUN_18000d550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  void *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)thunk_FUN_18000cce0(param_1);
  local_10[0] = thunk_FUN_18000cce0(param_2);
  thunk_FUN_18000cdb0((longlong *)&local_20,local_10);
  local_18 = (void *)thunk_FUN_18000cd00(local_res18);
  thunk_FUN_18000d000(local_28);
  uVar1 = thunk_FUN_18000d740(local_20,local_10[0],local_18);
  thunk_FUN_18000d380(&local_res18,uVar1);
  return local_res18;
}




undefined8
FUN_18000d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_37 [7];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = thunk_FUN_18000ccf0(param_1);
  local_20 = thunk_FUN_18000ccf0(param_2);
  thunk_FUN_18000cdf0(&local_30,&local_20);
  local_28 = thunk_FUN_18000cd20(local_res18);
  local_18 = local_37;
  thunk_FUN_18000d020();
  thunk_FUN_18000b600(local_18);
  uVar1 = thunk_FUN_18000d780(local_30,local_20,local_28,local_res20);
  thunk_FUN_18000d3a0(&local_res18,uVar1);
  return local_res18;
}




void FUN_18000d740(void *param_1,longlong param_2,void *param_3)

{
  thunk_FUN_18000c5e0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_18000d780(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  thunk_FUN_18000dc10(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x18) {
    uVar1 = thunk_FUN_18000db30(local_res8);
    thunk_FUN_18000c810((longlong)local_28,uVar1);
  }
  uVar1 = thunk_FUN_180010d90(local_28);
  thunk_FUN_18000e290(local_28);
  return uVar1;
}




void FUN_18000d840(void *param_1,longlong param_2)

{
  thunk_FUN_18000d8f0(param_1,(longlong)param_1 + param_2);
  return;
}




void FUN_18000d890(void *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_18000d840(param_1,param_2);
  return;
}




longlong FUN_18000d8f0(void *param_1,longlong param_2)

{
  memset(param_1,0,param_2 - (longlong)param_1);
  return param_2;
}




undefined8 FUN_18000d950(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000d960(undefined8 param_1)

{
  return param_1;
}




void FUN_18000d970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)thunk_FUN_18000e520(0x18,param_2);
  uVar2 = thunk_FUN_18000daf0(param_3);
  thunk_FUN_18000de90(puVar1,uVar2);
  return;
}




void FUN_18000d9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)thunk_FUN_18000e520(0x18,param_2);
  uVar2 = thunk_FUN_18000db10(param_3);
  basic_string<>(puVar1,uVar2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >::destroy<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >(class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> >::destroy<class std::_Func_impl<class <lambda_1187368b38821e05d57fc25412a6151f>,class
   std::allocator<int>,void,unsigned __int64 const & __ptr64> >(class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >::destroy<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >(class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_663e0bd7633808f1ab348a7d98e0888e>,class std::allocator<int>,void,class
   Concurrency::message<enum Concurrency::agent_status> * __ptr64> >::destroy<class
   std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64>
   >(class std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64> *
   __ptr64) __ptr64
     7 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void destroy<>(undefined8 param_1,void *param_2)

{
  thunk_FUN_18000e7a0(param_2,0);
  return;
}




void FUN_18000da60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = thunk_FUN_1800108d0(param_1);
  if (bVar1) {
    uVar2 = thunk_FUN_18000daf0(param_2);
    thunk_FUN_18000c890(param_1,uVar2);
  }
  else {
    uVar2 = thunk_FUN_18000daf0(param_2);
    plVar3 = (longlong *)thunk_FUN_180010c80(param_1);
    thunk_FUN_18000c980(param_1,*plVar3,uVar2);
  }
  return;
}




undefined8 FUN_18000daf0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000db00(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000db10(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000db20(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000db30(undefined8 param_1)

{
  return param_1;
}




void FUN_18000db40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  thunk_FUN_180011b40(param_1,0x104,param_2,&local_res18);
  return;
}




undefined8 * FUN_18000db90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




longlong * FUN_18000dbc0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    thunk_FUN_18000f3e0((LPCRITICAL_SECTION)*param_1);
  }
  return param_1;
}




undefined8 * FUN_18000dc10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




undefined8 * FUN_18000dc60(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




undefined8 * FUN_18000dc90(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




undefined8 * FUN_18000dcc0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  thunk_FUN_1800100a0();
  return param_1;
}




undefined8 * FUN_18000dd10(undefined8 *param_1,undefined8 param_2)

{
  thunk_FUN_18000dcc0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_18000dd50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_18000dd90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 FUN_18000ddd0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_18000dde0(undefined8 param_1)

{
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > && __ptr64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined8 * basic_string<>(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = thunk_FUN_180010810(param_2);
  uVar1 = thunk_FUN_18000db20(uVar1);
  thunk_FUN_18000b660(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = thunk_FUN_18000db30(param_2);
  thunk_FUN_1800109d0(param_1,uVar1);
  return param_1;
}




undefined8 * FUN_18000de90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  thunk_FUN_180010840(param_2);
  uVar1 = thunk_FUN_180011850(local_38);
  thunk_FUN_18000b660(param_1,uVar1);
  uVar2 = thunk_FUN_180011870(param_2);
  uVar2 = thunk_FUN_1800100d0(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    local_30 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    local_28 = (undefined8 *)thunk_FUN_180010c50(param_2);
    puVar3 = (undefined8 *)thunk_FUN_180010bc0(param_2);
    local_20 = thunk_FUN_18000d3c0(param_1,*puVar3,*local_28,*local_30);
    puVar3 = (undefined8 *)thunk_FUN_180010c20(param_1);
    *puVar3 = local_20;
  }
  return param_1;
}




undefined8 * FUN_18000df90(undefined8 *param_1)

{
  thunk_FUN_18000dc60(param_1);
  return param_1;
}




undefined8 * FUN_18000dfc0(undefined8 *param_1)

{
  thunk_FUN_18000dc90(param_1);
  return param_1;
}




LPCRITICAL_SECTION FUN_18000dff0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

CMFCFilterChunkValueImpl * __thiscall
CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl *this)

{
  thunk_FUN_18000e210((undefined8 *)this);
  *(undefined ***)this = CPipe::vftable;
  thunk_FUN_18000dff0((LPCRITICAL_SECTION)(this + 0x20));
  thunk_FUN_18000f550((longlong)this);
  return this;
}




longlong * FUN_18000e090(longlong *param_1,longlong param_2,longlong param_3,HANDLE param_4)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  thunk_FUN_18000f2d0(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined8 * FUN_18000e110(undefined8 *param_1)

{
  thunk_FUN_18000e230(param_1);
  *param_1 = CResultManager::vftable;
  thunk_FUN_18000dff0((LPCRITICAL_SECTION)(param_1 + 1));
  thunk_FUN_18000dfc0(param_1 + 8);
  param_1[7] = 0;
  param_1[6] = 0;
  thunk_FUN_180011410(param_1 + 8);
  return param_1;
}




undefined8 * FUN_18000e1c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_18000e210(undefined8 *param_1)

{
  *param_1 = IRecPipe::vftable;
  return param_1;
}




undefined8 * FUN_18000e230(undefined8 *param_1)

{
  *param_1 = IResultManager::vftable;
  return param_1;
}




void FUN_18000e250(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_18000fc30((LPCRITICAL_SECTION)*param_1);
  }
  return;
}




void FUN_18000e290(longlong *param_1)

{
  thunk_FUN_18000c7b0(*param_1,param_1[1],param_1[2]);
  return;
}




void FUN_18000e2e0(undefined8 param_1)

{
  thunk_FUN_180010e20(param_1);
  return;
}




void FUN_18000e310(undefined8 param_1)

{
  thunk_FUN_180010f20(param_1);
  return;
}




void FUN_18000e340(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void FUN_18000e370(undefined8 *param_1)

{
  *param_1 = CPipe::vftable;
  thunk_FUN_18000fb60((longlong)param_1);
  thunk_FUN_18000e340((LPCRITICAL_SECTION)(param_1 + 4));
  thunk_FUN_18000e4e0(param_1);
  return;
}




void FUN_18000e3e0(longlong *param_1)

{
  thunk_FUN_18000faa0(param_1);
  return;
}




/* Library Function - Single Match
    public: virtual __cdecl CSettingsStore::~CSettingsStore(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CSettingsStore::~CSettingsStore(CSettingsStore *this)

{
  *(undefined ***)this = CResultManager::vftable;
  thunk_FUN_18000fa00((longlong)this);
  thunk_FUN_18000e310(this + 0x40);
  thunk_FUN_18000e340((LPCRITICAL_SECTION)(this + 8));
  thunk_FUN_18000e500((undefined8 *)this);
  return;
}




void FUN_18000e490(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_18000e4e0(undefined8 *param_1)

{
  *param_1 = IRecPipe::vftable;
  return;
}




void FUN_18000e500(undefined8 *param_1)

{
  *param_1 = IResultManager::vftable;
  return;
}




undefined8 FUN_18000e520(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




longlong FUN_18000e540(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = thunk_FUN_18000d960(param_2);
  if (param_1 != lVar1) {
    thunk_FUN_180010e20(param_1);
    uVar2 = thunk_FUN_180010810(param_2);
    thunk_FUN_180010930(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = thunk_FUN_18000db30(param_2);
    thunk_FUN_180010970(param_1,uVar2);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator==(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator==(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  thunk_FUN_180010620();
  return *param_1 == *param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator!=(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator!=(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FID_conflict_operator__(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




undefined8 FUN_18000e6b0(undefined8 *param_1)

{
  return *param_1;
}




void FUN_18000e6d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_18000e6b0(param_1);
  thunk_FUN_18000c5d0(uVar1);
  return;
}




longlong * FUN_18000e700(longlong *param_1)

{
  *param_1 = *param_1 + 0x18;
  return param_1;
}




longlong * FUN_18000e730(longlong *param_1)

{
  thunk_FUN_18000e700(param_1);
  return param_1;
}




void FUN_18000e760(undefined8 *param_1,void *param_2,longlong param_3)

{
  thunk_FUN_180011020(*param_1,param_2,param_3);
  return;
}




void * FUN_18000e7a0(void *param_1,uint param_2)

{
  thunk_FUN_18000e2e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000e7f0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_180009a40(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000e840(undefined8 *param_1,uint param_2)

{
  thunk_FUN_18000e370(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




CSettingsStore * FUN_18000e890(CSettingsStore *param_1,uint param_2)

{
  CSettingsStore::~CSettingsStore(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000e8e0(undefined8 *param_1,uint param_2)

{
  thunk_FUN_18000e4e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000e930(undefined8 *param_1,uint param_2)

{
  thunk_FUN_18000e500(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000e980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HANDLE pvVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStackY_488 [32];
  int local_448;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_488;
  for (local_448 = 0; local_448 < 10; local_448 = local_448 + 1) {
    if (*(longlong *)(param_1 + 0x10) == -1) {
      pWVar3 = local_438;
      for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)pWVar3 = 0;
        pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
      }
      thunk_FUN_18000db40(local_438,L"\\\\.\\pipe\\reclib.dll_recv_param_%I64d",param_2,param_4);
      param_4 = 0;
      pvVar1 = CreateFileW(local_438,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      *(HANDLE *)(param_1 + 0x10) = pvVar1;
    }
    if (*(longlong *)(param_1 + 0x18) == -1) {
      pWVar3 = local_228;
      for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)pWVar3 = 0;
        pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
      }
      thunk_FUN_18000db40(local_228,L"\\\\.\\pipe\\reclib.dll_recv_return_%I64d",param_2,param_4);
      param_4 = 0;
      pvVar1 = CreateFileW(local_228,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      *(HANDLE *)(param_1 + 0x18) = pvVar1;
    }
    if ((*(longlong *)(param_1 + 0x10) != -1) && (*(longlong *)(param_1 + 0x18) != -1)) break;
    Sleep(1000);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_488);
  return;
}




void FUN_18000eb90(longlong param_1,undefined8 param_2,undefined8 param_3,HANDLE param_4)

{
  HANDLE pvVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined8 uVar4;
  undefined1 auStackY_4d8 [32];
  int local_498;
  int local_494;
  undefined4 local_490;
  undefined4 local_48c;
  DWORD local_488;
  DWORD local_484;
  _OVERLAPPED local_480;
  _OVERLAPPED local_460;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_4d8;
  local_48c = 0;
  pWVar3 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  thunk_FUN_18000db40(local_438,L"\\\\.\\pipe\\reclib.dll_recv_param_%I64d",param_2,param_4);
  uVar4 = 0xff;
  pvVar1 = CreateNamedPipeW(local_438,3,6,0xff,0x2800,0x2800,0,(LPSECURITY_ATTRIBUTES)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  if (*(longlong *)(param_1 + 0x10) != -1) {
    pWVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    thunk_FUN_18000db40(local_228,L"\\\\.\\pipe\\reclib.dll_recv_return_%I64d",param_2,uVar4);
    pvVar1 = CreateNamedPipeW(local_228,3,6,0xff,0x2800,0x2800,0,(LPSECURITY_ATTRIBUTES)0x0);
    *(HANDLE *)(param_1 + 0x18) = pvVar1;
    if (*(longlong *)(param_1 + 0x18) != -1) {
      local_480.Internal = 0;
      local_480.InternalHigh = 0;
      local_480.u.s.Offset = 0;
      local_480.u.s.OffsetHigh = 0;
      local_480.hEvent = (HANDLE)0x0;
      local_460.Internal = 0;
      local_460.InternalHigh = 0;
      local_460.u.s.Offset = 0;
      local_460.u.s.OffsetHigh = 0;
      local_460.hEvent = (HANDLE)0x0;
      local_498 = 0;
      local_494 = 0;
      local_480.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
      if (local_480.hEvent != (HANDLE)0x0) {
        local_460.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
        if (local_460.hEvent == (HANDLE)0x0) {
          CloseHandle(local_480.hEvent);
        }
        else {
          local_498 = ConnectNamedPipe(*(HANDLE *)(param_1 + 0x10),&local_480);
          local_488 = GetLastError();
          local_494 = ConnectNamedPipe(*(HANDLE *)(param_1 + 0x18),&local_460);
          local_484 = GetLastError();
          thunk_FUN_18000fc60(param_1,local_488,&local_498,*(HANDLE *)(param_1 + 0x10),&local_480);
          thunk_FUN_18000fc60(param_1,local_484,&local_494,*(HANDLE *)(param_1 + 0x18),&local_460);
          if ((local_498 == 0) || (local_494 == 0)) {
            local_490 = 0;
          }
          else {
            local_490 = 1;
          }
          local_48c = local_490;
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_4d8);
  return;
}




undefined4 FUN_18000ef60(longlong param_1,void *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  __uint64 _Var7;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  void *local_40;
  size_t local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_28 = 0xfffffffffffffffe;
  local_50 = 0;
  thunk_FUN_18000dbc0(&local_48,param_1 + 8);
  if (param_2 == (void *)0x0) {
    thunk_FUN_18000e250(&local_48);
  }
  else {
    thunk_FUN_1800112e0(param_1 + 0x40,&local_58);
    while( true ) {
      plVar3 = thunk_FUN_180011560(param_1 + 0x40,&local_20);
      bVar1 = FID_conflict_operator__(&local_58,plVar3);
      if (!bVar1) break;
      uVar4 = thunk_FUN_18000e6d0(&local_58);
      uVar5 = thunk_FUN_180011870(uVar4);
      if (0x10 < uVar5) {
        uVar4 = thunk_FUN_18000e6d0(&local_58);
        pvVar6 = (void *)thunk_FUN_1800114b0(uVar4);
        iVar2 = memcmp(pvVar6,param_2,0x10);
        if (iVar2 == 0) {
          uVar4 = thunk_FUN_18000e6d0(&local_58);
          _Var7 = thunk_FUN_180011870(uVar4);
          local_40 = operator_new(_Var7);
          *param_3 = local_40;
          uVar4 = thunk_FUN_18000e6d0(&local_58);
          local_38 = thunk_FUN_180011870(uVar4);
          uVar4 = thunk_FUN_18000e6d0(&local_58);
          pvVar6 = (void *)thunk_FUN_1800114b0(uVar4);
          memcpy((void *)*param_3,pvVar6,local_38);
          local_30 = local_58;
          thunk_FUN_1800115e0(param_1 + 0x40,local_18,local_58);
          local_50 = 1;
          break;
        }
      }
      thunk_FUN_18000e730(&local_58);
    }
    thunk_FUN_18000e250(&local_48);
  }
  return local_50;
}




undefined1 FUN_18000f1a0(undefined8 param_1,LPWSTR param_2)

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 local_18;
  
  local_18 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_180000000,param_2,0x104);
  if (DVar1 != 0) {
    param_2[0x103] = L'\0';
    lVar2 = thunk_FUN_180011990(param_2,L'\\');
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 2) = 0;
      local_18 = 1;
    }
  }
  return local_18;
}




undefined4 FUN_18000f250(longlong param_1,undefined4 param_2,undefined8 param_3,HANDLE param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = thunk_FUN_18000e980(param_1,param_3,param_3,param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  else {
    uVar1 = thunk_FUN_18000eb90(param_1,param_3,param_3,param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_18000f2d0(longlong *param_1,undefined8 param_2,undefined8 param_3,HANDLE param_4)

{
  int iVar1;
  ULONGLONG UVar2;
  
  if ((param_1[2] != 0) && (param_1[3] != 0)) {
    UVar2 = GetTickCount64();
    iVar1 = thunk_FUN_18000f690(param_1,UVar2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_18000f250(param_1[2],0,UVar2,param_4);
      if (iVar1 != 0) {
        iVar1 = thunk_FUN_18000f5d0((LPVOID)param_1[3],param_1[2]);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 1) = 1;
        }
      }
    }
  }
  return (int)param_1[1];
}




bool FUN_18000f380(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}




undefined4 FUN_18000f3c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_18000f3e0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}




undefined4 FUN_18000f410(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  LPVOID lpBuffer;
  DWORD local_18;
  undefined4 local_14;
  HANDLE local_10;
  
  local_14 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_10 = *(HANDLE *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0xc) != 0) {
      local_10 = *(HANDLE *)(param_1 + 0x10);
    }
    thunk_FUN_180011800(param_2,0x2800);
    local_18 = 0;
    lpBuffer = (LPVOID)thunk_FUN_1800114b0(param_2);
    BVar1 = ReadFile(local_10,lpBuffer,0x2800,&local_18,(LPOVERLAPPED)0x0);
    if ((BVar1 == 0) || (local_18 == 0)) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      thunk_FUN_180011800(param_2,(ulonglong)local_18);
      local_14 = 1;
    }
  }
  return local_14;
}




void FUN_18000f520(longlong param_1,undefined8 param_2)

{
  thunk_FUN_18000f410(param_1,param_2);
  return;
}




void FUN_18000f550(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  return;
}




void FUN_18000f5a0(longlong param_1,undefined8 param_2)

{
  thunk_FUN_18000fe80(param_1,param_2);
  return;
}




uint FUN_18000f5d0(LPVOID param_1,longlong param_2)

{
  HANDLE pvVar1;
  uint local_18;
  DWORD local_14 [5];
  
  local_18 = 0;
  if ((param_2 != 0) && (*(longlong *)((longlong)param_1 + 0x38) == 0)) {
    *(longlong *)((longlong)param_1 + 0x30) = param_2;
    local_14[0] = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_180001a23,
                          param_1,0,local_14);
    *(HANDLE *)((longlong)param_1 + 0x38) = pvVar1;
    local_18 = (uint)(*(longlong *)((longlong)param_1 + 0x38) != 0);
  }
  return local_18;
}




void FUN_18000f690(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  longlong lVar2;
  WCHAR *pWVar3;
  wchar_t *pwVar4;
  _STARTUPINFOW *p_Var5;
  _PROCESS_INFORMATION *p_Var6;
  undefined1 auStackY_808 [32];
  int local_7a8;
  HANDLE local_7a0;
  _PROCESS_INFORMATION local_798;
  _STARTUPINFOW local_778;
  wchar_t local_708 [104];
  WCHAR local_638 [264];
  wchar_t local_428 [520];
  ulonglong local_18;
  
  local_18 = DAT_180022028 ^ (ulonglong)auStackY_808;
  thunk_FUN_18000faa0(param_1);
  pWVar3 = local_638;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  thunk_FUN_18000f1a0(param_1,local_638);
  pwVar4 = local_428;
  for (lVar2 = 0x410; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar4 = 0;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  wcscpy_s(local_428,0x208,local_638);
  wcscat_s(local_428,0x208,L"reclib.exe");
  pwVar4 = local_708;
  for (lVar2 = 200; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar4 = 0;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  thunk_FUN_180011920(local_708,L"%I64d",param_2,param_4);
  wcscat_s(local_428,0x208,L" ");
  wcscat_s(local_428,0x208,local_708);
  p_Var5 = &local_778;
  for (lVar2 = 0x68; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var5->cb = 0;
    p_Var5 = (_STARTUPINFOW *)((longlong)&p_Var5->cb + 1);
  }
  local_778.cb = 0x68;
  local_778.dwFlags = 7;
  local_778.wShowWindow = 0;
  local_778.dwX = 0;
  local_778.dwY = 0;
  local_778.dwXSize = 0;
  local_778.dwYSize = 0;
  p_Var6 = &local_798;
  for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var6->hProcess = 0;
    p_Var6 = (_PROCESS_INFORMATION *)((longlong)&p_Var6->hProcess + 1);
  }
  local_7a0 = (HANDLE)0x0;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0xf01ff,&local_7a0);
  if ((BVar1 == 0) || (local_7a0 == (HANDLE)0x0)) {
    local_7a8 = CreateProcessW((LPCWSTR)0x0,local_428,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,local_638,&local_778,
                               &local_798);
  }
  else {
    local_7a8 = CreateProcessAsUserW
                          (local_7a0,(LPCWSTR)0x0,local_428,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,local_638,&local_778,
                           &local_798);
    CloseHandle(local_7a0);
  }
  if (local_7a8 != 0) {
    CloseHandle(local_798.hThread);
    *param_1 = (longlong)local_798.hProcess;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_808);
  return;
}




undefined8 FUN_18000fa00(longlong param_1)

{
  DWORD DVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),1000);
    if (DVar1 != 0) {
      TerminateThread(*(HANDLE *)(param_1 + 0x38),1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  thunk_FUN_180011410(param_1 + 0x40);
  return 1;
}




void FUN_18000faa0(longlong *param_1)

{
  DWORD DVar1;
  
  if (param_1[2] != 0) {
    thunk_FUN_18000fb60(param_1[2]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_18000fa00(param_1[3]);
  }
  if (*param_1 != 0) {
    DVar1 = WaitForSingleObject((HANDLE)*param_1,3000);
    if (DVar1 != 0) {
      TerminateProcess((HANDLE)*param_1,0xffffffff);
    }
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 FUN_18000fb60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != -1) {
    if (*(int *)(param_1 + 0xc) != 0) {
      DisconnectNamedPipe(*(HANDLE *)(param_1 + 0x10));
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0x18) != -1) {
    if (*(int *)(param_1 + 0xc) != 0) {
      DisconnectNamedPipe(*(HANDLE *)(param_1 + 0x18));
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  thunk_FUN_18000f550(param_1);
  return 1;
}




void FUN_18000fc30(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}




void FUN_18000fc60(undefined8 param_1,int param_2,int *param_3,HANDLE param_4,LPOVERLAPPED param_5)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_14 [5];
  
  if (*param_3 == 0) {
    if (param_2 == 0x217) {
      *param_3 = 1;
    }
    else if (param_2 == 0x3e5) {
      DVar1 = WaitForSingleObject(param_5->hEvent,60000);
      if (DVar1 == 0) {
        local_14[0] = 0;
        BVar2 = GetOverlappedResult(param_4,param_5,local_14,0);
        *param_3 = BVar2;
      }
      else {
        CancelIo(param_4);
      }
    }
  }
  CloseHandle(param_5->hEvent);
  return;
}




undefined8 FUN_18000fd50(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong local_38 [7];
  
  local_38[1] = 0xfffffffffffffffe;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    while( true ) {
      thunk_FUN_18000df90(local_38 + 2);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                        (*(undefined8 *)(param_1 + 0x30),local_38 + 2);
      if (iVar1 == 0) break;
      thunk_FUN_18000dbc0(local_38,param_1 + 8);
      thunk_FUN_1800117d0(param_1 + 0x40,local_38 + 2);
      puVar2 = (undefined8 *)thunk_FUN_1800114b0(local_38 + 2);
      thunk_FUN_18000a140(puVar2);
      thunk_FUN_18000e250(local_38);
      thunk_FUN_18000e2e0(local_38 + 2);
    }
    thunk_FUN_18000e2e0(local_38 + 2);
  }
  return 0;
}




undefined4 FUN_18000fe80(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong lVar2;
  LPCVOID lpBuffer;
  DWORD local_28;
  undefined4 local_24;
  HANDLE local_20;
  longlong local_18;
  longlong local_10;
  
  local_24 = 0;
  thunk_FUN_18000dbc0(&local_18,param_1 + 0x20);
  if (*(int *)(param_1 + 8) == 0) {
    thunk_FUN_18000e250(&local_18);
  }
  else {
    lVar2 = thunk_FUN_180011870(param_2);
    if (lVar2 == 0) {
      thunk_FUN_18000e250(&local_18);
    }
    else {
      local_20 = *(HANDLE *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0xc) != 0) {
        local_20 = *(HANDLE *)(param_1 + 0x18);
      }
      local_28 = 0;
      local_10 = thunk_FUN_180011870(param_2);
      lpBuffer = (LPCVOID)thunk_FUN_1800114b0(param_2);
      BVar1 = WriteFile(local_20,lpBuffer,(DWORD)local_10,&local_28,(LPOVERLAPPED)0x0);
      if ((BVar1 == 0) || (local_28 == 0)) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        FlushFileBuffers(local_20);
        local_24 = 1;
      }
      thunk_FUN_18000e250(&local_18);
    }
  }
  return local_24;
}




void FUN_18000ffe0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *param_2 + 0x27;
  uVar1 = *param_1 - *(longlong *)(*param_1 + -8);
  if ((7 < uVar1) && (uVar1 < 0x28)) {
    *param_1 = *(longlong *)(*param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void FUN_1800100a0(void)

{
  return;
}




void FUN_1800100b0(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




ulonglong FUN_1800100d0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  puVar2 = (undefined8 *)thunk_FUN_180010ba0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)thunk_FUN_180010c20(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)thunk_FUN_180010ae0(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = thunk_FUN_180011710(param_1);
    if (_Var4 < param_2) {
      thunk_FUN_180011240();
    }
    uVar5 = thunk_FUN_180010810(param_1);
    uVar5 = allocate(uVar5,param_2);
    puVar2 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    *puVar2 = uVar5;
    puVar2 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    puVar6 = (undefined8 *)thunk_FUN_180010c20(param_1);
    *puVar6 = *puVar2;
    plVar7 = (longlong *)thunk_FUN_180010ba0(param_1);
    lVar1 = *plVar7;
    plVar7 = (longlong *)thunk_FUN_180010ae0(param_1);
    *plVar7 = lVar1 + param_2;
    uVar3 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return uVar3;
}




ulonglong FUN_180010200(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = thunk_FUN_180011360(param_1);
  _Var2 = thunk_FUN_180011710(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




ulonglong FUN_1800102c0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = thunk_FUN_1800113b0(param_1);
  _Var2 = thunk_FUN_180011770(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180010380(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  thunk_FUN_180010ce0(param_1);
  plVar1 = (longlong *)thunk_FUN_180010ba0(param_1);
  if (*plVar1 != 0) {
    thunk_FUN_180010c20(param_1);
    thunk_FUN_180010ba0(param_1);
    thunk_FUN_180010630(param_1);
    uVar2 = thunk_FUN_180011360(param_1);
    puVar3 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    uVar4 = thunk_FUN_180010810(param_1);
    thunk_FUN_1800114f0(uVar4,(void *)*puVar3,uVar2);
  }
  plVar1 = (longlong *)thunk_FUN_180010ba0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)thunk_FUN_180010c20(param_1);
  *plVar1 = param_2 + param_3;
  plVar1 = (longlong *)thunk_FUN_180010ae0(param_1);
  *plVar1 = param_2 + param_4;
  return;
}




void FUN_1800104d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  thunk_FUN_180010d10(param_1);
  plVar1 = (longlong *)thunk_FUN_180010be0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
    plVar2 = (longlong *)thunk_FUN_180010be0(param_1);
    thunk_FUN_180010680(param_1,*plVar2,*plVar1);
    lVar3 = thunk_FUN_1800113b0(param_1);
    puVar4 = (undefined8 *)thunk_FUN_180010be0(param_1);
    uVar5 = thunk_FUN_180010870(param_1);
    thunk_FUN_180011520(uVar5,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)thunk_FUN_180010be0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  *plVar1 = param_2 + param_3 * 0x18;
  plVar1 = (longlong *)thunk_FUN_180010b40(param_1);
  *plVar1 = param_2 + param_4 * 0x18;
  return;
}




void FUN_180010620(void)

{
  return;
}




void FUN_180010630(undefined8 param_1)

{
  thunk_FUN_180010810(param_1);
  thunk_FUN_18000c750();
  return;
}




void FUN_180010680(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010870(param_1);
  thunk_FUN_18000c7b0(param_2,param_3,uVar1);
  return;
}




void FUN_1800106d0(undefined8 param_1)

{
  thunk_FUN_1800107d0(param_1);
  return;
}




void FUN_180010700(undefined8 param_1)

{
  thunk_FUN_1800107e0(param_1);
  return;
}




void FUN_180010730(undefined8 param_1)

{
  thunk_FUN_1800107f0(param_1);
  return;
}




void FUN_180010760(undefined8 param_1)

{
  thunk_FUN_180010800(param_1);
  return;
}




undefined8 FUN_180010790(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107a0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107b0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107c0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107d0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800107f0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_180010800(undefined8 param_1)

{
  return param_1;
}




void FUN_180010810(undefined8 param_1)

{
  thunk_FUN_180010790(param_1);
  return;
}




void FUN_180010840(undefined8 param_1)

{
  thunk_FUN_1800107a0(param_1);
  return;
}




void FUN_180010870(undefined8 param_1)

{
  thunk_FUN_1800107b0(param_1);
  return;
}




void FUN_1800108a0(undefined8 param_1)

{
  thunk_FUN_1800107c0(param_1);
  return;
}




bool FUN_1800108d0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)thunk_FUN_180010b70(param_1);
  plVar2 = (longlong *)thunk_FUN_180010cb0(param_1);
  return *plVar1 != *plVar2;
}




void FUN_180010930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010810(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




void FUN_180010970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = thunk_FUN_18000db30(param_2);
  thunk_FUN_1800109d0(param_1,uVar1);
  return;
}




void FUN_1800109d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  thunk_FUN_180010dc0(param_1,param_2);
  puVar1 = (undefined8 *)thunk_FUN_180010ba0(param_2);
  puVar2 = (undefined8 *)thunk_FUN_180010ba0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)thunk_FUN_180010c20(param_2);
  puVar2 = (undefined8 *)thunk_FUN_180010c20(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)thunk_FUN_180010ae0(param_2);
  puVar2 = (undefined8 *)thunk_FUN_180010ae0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)thunk_FUN_180010ba0(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)thunk_FUN_180010c20(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)thunk_FUN_180010ae0(param_2);
  *puVar1 = 0;
  return;
}




longlong FUN_180010ae0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1800106d0(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180010b10(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010700(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180010b40(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010730(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180010b70(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010760(param_1);
  return lVar1 + 0x10;
}




void FUN_180010ba0(undefined8 param_1)

{
  thunk_FUN_1800106d0(param_1);
  return;
}




void FUN_180010bc0(undefined8 param_1)

{
  thunk_FUN_180010700(param_1);
  return;
}




void FUN_180010be0(undefined8 param_1)

{
  thunk_FUN_180010730(param_1);
  return;
}




void FUN_180010c00(undefined8 param_1)

{
  thunk_FUN_180010760(param_1);
  return;
}




longlong FUN_180010c20(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1800106d0(param_1);
  return lVar1 + 8;
}




longlong FUN_180010c50(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010700(param_1);
  return lVar1 + 8;
}




longlong FUN_180010c80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010730(param_1);
  return lVar1 + 8;
}




longlong FUN_180010cb0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_180010760(param_1);
  return lVar1 + 8;
}




void FUN_180010ce0(undefined8 param_1)

{
  thunk_FUN_1800106d0(param_1);
  thunk_FUN_180010d40();
  return;
}




void FUN_180010d10(undefined8 param_1)

{
  thunk_FUN_180010730(param_1);
  thunk_FUN_180010d40();
  return;
}




void FUN_180010d40(void)

{
  return;
}




void FUN_180010d50(void)

{
  return;
}




void FUN_180010d70(void)

{
  return;
}




undefined8 FUN_180010d90(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void FUN_180010dc0(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1800106d0(param_2);
  thunk_FUN_1800106d0(param_1);
  thunk_FUN_180010e10();
  return;
}




void FUN_180010e10(void)

{
  return;
}




void FUN_180010e20(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  thunk_FUN_180010ce0(param_1);
  plVar1 = (longlong *)thunk_FUN_180010ba0(param_1);
  if (*plVar1 != 0) {
    thunk_FUN_180010c20(param_1);
    thunk_FUN_180010ba0(param_1);
    thunk_FUN_180010630(param_1);
    uVar2 = thunk_FUN_180011360(param_1);
    puVar3 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    uVar4 = thunk_FUN_180010810(param_1);
    thunk_FUN_1800114f0(uVar4,(void *)*puVar3,uVar2);
    puVar3 = (undefined8 *)thunk_FUN_180010ba0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)thunk_FUN_180010c20(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)thunk_FUN_180010ae0(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_180010f20(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  thunk_FUN_180010d10(param_1);
  plVar1 = (longlong *)thunk_FUN_180010be0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
    plVar2 = (longlong *)thunk_FUN_180010be0(param_1);
    thunk_FUN_180010680(param_1,*plVar2,*plVar1);
    lVar3 = thunk_FUN_1800113b0(param_1);
    puVar4 = (undefined8 *)thunk_FUN_180010be0(param_1);
    uVar5 = thunk_FUN_180010870(param_1);
    thunk_FUN_180011520(uVar5,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)thunk_FUN_180010be0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)thunk_FUN_180010c80(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)thunk_FUN_180010b40(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180011020(undefined8 param_1,void *param_2,longlong param_3)

{
  thunk_FUN_180010810(param_1);
  thunk_FUN_18000d890(param_2,param_3);
  return;
}




void FUN_180011070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010870(param_1);
  thunk_FUN_18000d630(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_1800110c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010810(param_1);
  thunk_FUN_18000d550(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180011110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_180010870(param_1);
  thunk_FUN_18000d630(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180011160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_1800110c0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800111d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_180011110(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180011240(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




void FUN_180011260(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,undefined8 param_2)

{
  __uint64 _Var1;
  
  _Var1 = thunk_FUN_18000cc70(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




undefined8 * FUN_1800112e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = thunk_FUN_180010730(param_1);
  thunk_FUN_18000d950(uVar1);
  puVar2 = (undefined8 *)thunk_FUN_180010be0(param_1);
  thunk_FUN_18000dd10(param_2,*puVar2);
  return param_2;
}




longlong FUN_180011360(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)thunk_FUN_180010b10(param_1);
  plVar2 = (longlong *)thunk_FUN_180010bc0(param_1);
  return *plVar1 - *plVar2;
}




longlong FUN_1800113b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)thunk_FUN_180010b70(param_1);
  plVar2 = (longlong *)thunk_FUN_180010c00(param_1);
  return (*plVar1 - *plVar2) / 0x18;
}




void FUN_180011410(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  thunk_FUN_180010d10(param_1);
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  plVar2 = (longlong *)thunk_FUN_180010be0(param_1);
  thunk_FUN_180010680(param_1,*plVar2,*plVar1);
  puVar3 = (undefined8 *)thunk_FUN_180010be0(param_1);
  puVar4 = (undefined8 *)thunk_FUN_180010c80(param_1);
  *puVar4 = *puVar3;
  return;
}




void FUN_1800114b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_180010ba0(param_1);
  thunk_FUN_18000d420(*puVar1);
  return;
}




void FUN_1800114f0(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




void FUN_180011520(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x18);
  return;
}




undefined8 * FUN_180011560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = thunk_FUN_180010730(param_1);
  thunk_FUN_18000d950(uVar1);
  puVar2 = (undefined8 *)thunk_FUN_180010c80(param_1);
  thunk_FUN_18000dd10(param_2,*puVar2);
  return param_2;
}




undefined8 * FUN_1800115e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  thunk_FUN_18000cf10(param_3 + 0x18,*plVar1,param_3);
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  pvVar2 = (void *)thunk_FUN_18000d410(*plVar1 + -0x18);
  uVar3 = thunk_FUN_180010870(param_1);
  destroy<>(uVar3,pvVar2);
  plVar1 = (longlong *)thunk_FUN_180010c80(param_1);
  *plVar1 = *plVar1 + -0x18;
  uVar3 = thunk_FUN_180010730(param_1);
  thunk_FUN_18000d950(uVar3);
  thunk_FUN_18000dd10(param_2,param_3);
  return param_2;
}




undefined8 FUN_1800116d0(void)

{
  return 0x7fffffffffffffff;
}




undefined8 FUN_1800116e0(void)

{
  return 0xffffffffffffffff;
}




undefined8 FUN_1800116f0(void)

{
  return 0xaaaaaaaaaaaaaaa;
}




__uint64 FUN_180011710(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  thunk_FUN_180010840(param_1);
  local_18 = thunk_FUN_1800116e0();
  local_10[0] = thunk_FUN_1800116d0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




__uint64 FUN_180011770(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  thunk_FUN_1800108a0(param_1);
  local_18 = thunk_FUN_1800116f0();
  local_10[0] = thunk_FUN_1800116d0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_1800117d0(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_18000da60(param_1,param_2);
  return;
}




void FUN_180011800(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_18 [3];
  
  thunk_FUN_18000db90(local_18,param_1);
  thunk_FUN_18000d060(param_1,param_2,local_18[0]);
  return;
}




undefined8 FUN_180011850(undefined8 param_1)

{
  return param_1;
}




longlong FUN_180011870(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)thunk_FUN_180010c50(param_1);
  plVar2 = (longlong *)thunk_FUN_180010bc0(param_1);
  return *plVar1 - *plVar2;
}




longlong FUN_1800118c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)thunk_FUN_180010cb0(param_1);
  plVar2 = (longlong *)thunk_FUN_180010c00(param_1);
  return (*plVar1 - *plVar2) / 0x18;
}




undefined4
FUN_180011920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = thunk_FUN_180011af0(param_1,0x7fffffff,param_2,&local_res18);
  return uVar1;
}




void FUN_180011990(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
}




undefined * FUN_1800119c0(void)

{
  return &DAT_180022a30;
}




int FUN_1800119d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)thunk_FUN_1800119c0();
  local_14 = __stdio_common_vswprintf(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_180011a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)thunk_FUN_1800119c0();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_180011af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_1800119d0(param_1,param_2,param_3,0,param_4);
  return;
}




void FUN_180011b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_180011a60(param_1,param_2,param_3,0,param_4);
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
    thunk_FUN_1800131ac();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  thunk_FUN_180013184();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




void FUN_180011d04(void)

{
  ulonglong uVar1;
  
  uVar1 = thunk_FUN_1800133d0();
  _configure_narrow_argv(uVar1 & 0xffffffff);
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
LAB_180011dfa:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180022a48 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180022a48;
        pvVar1 = DAT_180022a48;
      }
      DAT_180022a48 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180011dfa;
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
    uVar3 = thunk_FUN_1800133d0();
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
  
  uVar1 = thunk_FUN_180011ff0(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = thunk_FUN_180013f2c();
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_180013f2c();
    if (cVar1 != '\0') {
      return 1;
    }
    thunk_FUN_180013f30();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  thunk_FUN_180013f30();
  thunk_FUN_180013f30();
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
    _execute_onexit_table(&DAT_180022a58);
    return;
  }
  uVar2 = thunk_FUN_180013f3c();
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
  FUN_1800019b5();
  thunk_FUN_180013f38();
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
    DAT_180022a50 = 1;
  }
  __isa_available_init();
  cVar1 = thunk_FUN_180013f28();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_180013f28();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    thunk_FUN_180013f34();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180011ff0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180022a51 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180022028 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180022028;
      _DAT_180022a58 = in_RAX;
      uRam0000000180022a60 = in_RAX;
      _DAT_180022a68 = in_RAX;
      _DAT_180022a70 = in_RAX;
      uRam0000000180022a78 = in_RAX;
      _DAT_180022a80 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180022a58);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180022a70), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180022a51 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018001218e) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000370;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180012177;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180012177:
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
    DAT_180022a48 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180022a50 == '\0') || (param_2 == '\0')) {
    thunk_FUN_180013f34();
    thunk_FUN_180013f34();
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
  
  bVar2 = (byte)DAT_180022028 & 0x3f;
  if (((DAT_180022028 ^ _DAT_180022a58) >> bVar2 | (DAT_180022028 ^ _DAT_180022a58) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180022a58,_Func);
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

undefined8 FUN_1800122ec(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180022a98,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18001243e;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180022ac8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180022ac8 != (HANDLE)0x0) goto LAB_1800123dc;
  }
  else {
    DAT_180022ac8 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180022ac0);
    bVar7 = 0x40 - ((byte)DAT_180022028 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180022ad0 = DAT_180022028 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180022ad8 = DAT_180022028 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_1800123dc:
    uVar6 = thunk_FUN_180011ff0(0);
    if ((char)uVar6 != '\0') {
      atexit((_func_5014 *)&LAB_1800126b0);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18001243e:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180012528(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  HANDLE pvVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180022a98,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) {
    pvVar6 = (HANDLE)__scrt_fastfail(7);
LAB_180012651:
    __scrt_fastfail((int)pvVar6 + 7);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar3 == (FARPROC)0x0) || (pFVar4 == (FARPROC)0x0)) || (pFVar5 == (FARPROC)0x0)) {
    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    DAT_180022ac8 = pvVar6;
    if (pvVar6 == (HANDLE)0x0) goto LAB_180012651;
  }
  else {
    DAT_180022ac8 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180022ac0);
    bVar7 = 0x40 - ((byte)DAT_180022028 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180022ad0 = ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2) ^ DAT_180022028
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180022ad8 = ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7) ^ DAT_180022028
    ;
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  uVar1 = (ulonglong)_tls_index;
  DAT_180022010 = DAT_180022010 + 1;
  *param_1 = DAT_180022010;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x104) = DAT_180022010;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1800127ec:
                    /* WARNING: Could not recover jumptable at 0x0001800127f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x104) =
           DAT_180022010;
      goto LAB_1800127ec;
    }
    _Init_thread_wait(100);
  } while( true );
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_180022ac8 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_180022028 & 0x3f;
    (*(code *)((DAT_180022028 ^ _DAT_180022ad8) >> bVar1 |
              (DAT_180022028 ^ _DAT_180022ad8) << 0x40 - bVar1))(&DAT_180022ac0);
    return;
  }
  SetEvent(DAT_180022ac8);
                    /* WARNING: Could not recover jumptable at 0x000180012875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(DAT_180022ac8);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180022ac8 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_180022028 & 0x3f;
    (*(code *)((DAT_180022028 ^ _DAT_180022ad0) >> bVar1 |
              (DAT_180022028 ^ _DAT_180022ad0) << 0x40 - bVar1))
              (&DAT_180022ac0,&DAT_180022a98,param_1);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
  WaitForSingleObjectEx(DAT_180022ac8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180012914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180022a98);
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
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180022028) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180012a20(undefined8 *param_1,ulonglong param_2)

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
    if (DAT_180022af4 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180022af4 = DAT_180022af4 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180022a40 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      thunk_FUN_180013ce0();
      FID_conflict__RTC_Initialize();
      DAT_180022a40 = 0;
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
    if (DAT_180022a40 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180022a40 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      thunk_FUN_180013ccc();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180019340,&DAT_180019560);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180019000,&DAT_180019230);
        DAT_180022a40 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)thunk_FUN_180013d20();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180022af4 = DAT_180022af4 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180012da4) */
/* WARNING: Removing unreachable block (ram,0x000180012d33) */
/* WARNING: Removing unreachable block (ram,0x000180012de7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180022af4 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = thunk_FUN_180006950();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      thunk_FUN_180006950();
      dllmain_crt_dispatch(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}




/* Library Function - Single Match
    _DllMainCRTStartup
   
   Library: Visual Studio 2017 Release */

void _DllMainCRTStartup(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_180012ef0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180012f40(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180012f68(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180012fb8(undefined8 *param_1)

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




undefined8 * FUN_180013088(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800130dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180013130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180013184(void)

{
  undefined8 local_28 [5];
  
  thunk_FUN_180012f40(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800214f0);
}




void FUN_1800131ac(void)

{
  undefined8 local_28 [5];
  
  thunk_FUN_180012fb8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180021578);
}




char * FUN_1800131d4(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800132c2) */
/* WARNING: Removing unreachable block (ram,0x000180013240) */
/* WARNING: Removing unreachable block (ram,0x00018001321b) */
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
  
  DAT_18002203c = 2;
  _DAT_180022038 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180022040 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180022af8 = DAT_180022af8 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180022af8 = DAT_180022af8 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180022038 = 2;
    DAT_18002203c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18002203c = 0xe;
      _DAT_180022038 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180022038 = 5;
        DAT_18002203c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_1800133d0(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180022050 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800133e8(void)

{
  _DAT_180022afc = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180013427;
  thunk_FUN_1800133e8();
  *(undefined8 *)(puVar4 + -8) = 0x180013438;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180013442;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18001345c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18001349d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800134cf;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800134f1;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180013512;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18001351d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18001352d;
    thunk_FUN_1800133e8();
  }
  return;
}




void FUN_1800136ac(void)

{
  return;
}




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180013705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
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
  *(undefined8 *)(puVar3 + -8) = 0x180013746;
  capture_previous_context((PCONTEXT)&DAT_180022ba0);
  _DAT_180022b10 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180022c38 = puVar3 + 0x40;
  _DAT_180022c20 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180022b00 = 0xc0000409;
  _DAT_180022b04 = 1;
  _DAT_180022b18 = 1;
  DAT_180022b20 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180022028;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180022020;
  *(undefined8 *)(puVar3 + -8) = 0x1800137e8;
  DAT_180022c98 = _DAT_180022b10;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001d8a0);
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
  *(undefined8 *)(puVar3 + -8) = 0x180013866;
  capture_current_context((PCONTEXT)&DAT_180022ba0);
  _DAT_180022b10 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180022c38 = puVar3 + 0x30;
  _DAT_180022b00 = 0xc0000409;
  _DAT_180022b04 = 1;
  _DAT_180022b18 = 1;
  DAT_180022b20 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x1800138d2;
  DAT_180022c98 = _DAT_180022b10;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18001d8a0);
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




ulonglong FUN_180013b6c(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18 [2];
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res10);
  local_res8 = local_res10;
  DVar1 = GetCurrentThreadId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res18);
  return ((ulonglong)(uint)local_res18[0]._0_4_ << 0x20 ^
          CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
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
  
  if (DAT_180022028 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180022028 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180022028 == 0x2b992ddfa232) {
      DAT_180022028 = 0x2b992ddfa233;
    }
  }
  DAT_180022020 = ~DAT_180022028;
  return;
}




void FUN_180013ccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180013cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180023190);
  return;
}




void FUN_180013ce0(void)

{
  __std_type_info_destroy_list(&DAT_180023190);
  return;
}




undefined * FUN_180013cf0(void)

{
  return &DAT_1800231a8;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)thunk_FUN_1800119c0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)thunk_FUN_180013cf0();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180013d20(void)

{
  return &DAT_1800231b8;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18001ebb8; puVar1 < &DAT_18001ecc0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18001edd8; puVar1 < &DAT_18001eee0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180013f28(void)

{
  return 1;
}




undefined1 FUN_180013f2c(void)

{
  return 1;
}




undefined1 FUN_180013f30(void)

{
  return 1;
}




undefined1 FUN_180013f34(void)

{
  return 1;
}




undefined1 FUN_180013f38(void)

{
  return 1;
}




undefined8 FUN_180013f3c(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void FUN_1800152e0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001800152e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_1800162f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180005540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180016310(void)

{
  _Init_thread_abort(&DAT_180022714);
  return;
}




undefined8 Catch_All_180016340(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0x180005a78;
}




void Unwind_180016370(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




undefined8 Catch_All_1800163a0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0x180005b38;
}




void Unwind_1800163d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




undefined8 FUN_180016400(void)

{
  return 1;
}




undefined8 FUN_180016415(void)

{
  return 1;
}




undefined8 FUN_18001642a(void)

{
  return 1;
}




undefined8 FUN_18001643f(void)

{
  return 1;
}




undefined8 FUN_180016454(void)

{
  return 1;
}




undefined8 FUN_180016469(void)

{
  return 1;
}




undefined8 FUN_18001647e(void)

{
  return 1;
}




undefined8 FUN_180016493(void)

{
  return 1;
}




undefined8 FUN_1800164a8(void)

{
  return 1;
}




undefined8 FUN_1800164bd(void)

{
  return 1;
}




undefined8 FUN_1800164d2(void)

{
  return 1;
}




undefined8 FUN_1800164e7(void)

{
  return 1;
}




undefined8 FUN_1800164fc(void)

{
  return 1;
}




undefined8 FUN_180016511(void)

{
  return 1;
}




undefined8 FUN_180016526(void)

{
  return 1;
}




undefined8 FUN_18001653b(void)

{
  return 1;
}




undefined8 FUN_180016550(void)

{
  return 1;
}




void Unwind_180016565(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x40);
  return;
}




void Unwind_18001657d(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_180016595(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_1800165ad(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




undefined8 FUN_1800165da(void)

{
  return 1;
}




undefined8 FUN_1800165ef(void)

{
  return 1;
}




undefined8 FUN_180016604(void)

{
  return 1;
}




undefined8 FUN_180016619(void)

{
  return 1;
}




undefined8 FUN_18001662e(void)

{
  return 1;
}




undefined8 FUN_180016643(void)

{
  return 1;
}




void Unwind_180016658(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_180016670(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x40);
  return;
}




void Unwind_180016688(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x40);
  return;
}




void Unwind_1800166b5(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_1800166cd(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_1800166e5(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_1800166fd(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_180016715(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_18001672d(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_180016745(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_18001675d(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




undefined8 FUN_18001678a(void)

{
  return 1;
}




undefined8 FUN_18001679f(void)

{
  return 1;
}




void Unwind_1800167b4(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_1800167cc(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_1800167e4(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x48);
  return;
}




void Unwind_180016811(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_180016829(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x38);
  return;
}




void Unwind_180016841(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e490(param_2 + 0x40);
  return;
}




undefined8 FUN_18001686e(void)

{
  return 1;
}




undefined8 FUN_180016883(void)

{
  return 1;
}




undefined8 FUN_180016898(void)

{
  return 1;
}




void Unwind_1800168ad(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e2e0(param_2 + 0x48);
  return;
}




void Unwind_1800168c5(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e2e0(param_2 + 0x50);
  return;
}




void Catch_All_180016a20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180010680(*(undefined8 *)(param_2 + 0xa0),*(longlong *)(param_2 + 0x30),
                      *(longlong *)(param_2 + 0x50));
  thunk_FUN_180011520(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                      *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180016a80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_180010630(*(undefined8 *)(param_2 + 0x90));
  uVar1 = thunk_FUN_180010810(*(undefined8 *)(param_2 + 0x90));
  thunk_FUN_1800114f0(uVar1,*(void **)(param_2 + 0x28),*(ulonglong *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180016af0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e290((longlong *)(param_2 + 0x30));
  return;
}




void Catch_All_180016b10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180010e20(*(undefined8 *)(param_2 + 0x60));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180016b50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e4e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180016b70(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e340((LPCRITICAL_SECTION)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180016ba0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180016bc0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e250((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_180016be0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e2e0(param_2 + 0x40);
  return;
}




void Unwind_180016c00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_18000e250((longlong *)(param_2 + 0x30));
  return;
}




bool FUN_180016c1e(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




void FUN_180016c3c(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180016c58(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180016c7b(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180017ce0(void)

{
  thunk_FUN_1800055d0((undefined8 *)&DAT_1800226e0);
  return;
}




void FUN_180017d00(void)

{
  thunk_FUN_1800055f0((undefined8 *)&DAT_1800226c8);
  return;
}




void FUN_180017d20(void)

{
  thunk_FUN_18000e370((undefined8 *)&DAT_1800228e0);
  return;
}




void FUN_180017d40(void)

{
  thunk_FUN_18000e3e0((longlong *)&DAT_180022988);
  return;
}




void FUN_180017d60(void)

{
  CSettingsStore::~CSettingsStore((CSettingsStore *)&DAT_180022930);
  return;
}



