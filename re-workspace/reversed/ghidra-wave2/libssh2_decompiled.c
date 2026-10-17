
undefined4 FUN_180001000(longlong *param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  char *pcVar4;
  HANDLE hObject;
  HANDLE pvVar5;
  LPCSTR lpFileName;
  undefined8 uVar6;
  
  lpFileName = (LPCSTR)param_1[0xc];
  if ((LPCSTR)param_1[0xc] == (LPCSTR)0x0) {
    pcVar4 = getenv("SSH_AUTH_SOCK");
    lpFileName = "\\\\.\\pipe\\openssh-ssh-agent";
    if (pcVar4 != (char *)0x0) {
      lpFileName = pcVar4;
    }
  }
  uVar6 = 0;
  hObject = CreateFileA(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x110000,(HANDLE)0x0);
  while( true ) {
    if (hObject != (HANDLE)0xffffffffffffffff) {
      BVar2 = SetHandleInformation(hObject,1,0);
      if (BVar2 == 0) {
        pcVar4 = "unable to set handle information of agent pipe";
      }
      else {
        uVar6 = 0;
        pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        if (pvVar5 != (HANDLE)0x0) {
          param_1[0x10] = (longlong)pvVar5;
          param_1[0x11] = (longlong)hObject;
          param_1[1] = 0;
          return 0;
        }
        pcVar4 = "unable to create async I/O event";
      }
      uVar3 = FUN_180018820(*param_1,0xffffffd6,(longlong)pcVar4,uVar6);
      if (hObject != (HANDLE)0xffffffffffffffff) {
        CloseHandle(hObject);
      }
      return uVar3;
    }
    DVar1 = GetLastError();
    if ((DVar1 != 0xe7) || (BVar2 = WaitNamedPipeA(lpFileName,1000), BVar2 == 0)) break;
    uVar6 = 0;
    hObject = CreateFileA(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x110000,(HANDLE)0x0)
    ;
  }
  uVar3 = FUN_180018820(*param_1,0xffffffd6,0x18002c7a0,uVar6);
  return uVar3;
}




undefined4 FUN_180001170(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined1 local_res10 [8];
  
  iVar1 = (int)param_2[4];
  if (iVar1 == 1) {
    FUN_180018d00(local_res10,(int)param_2[1]);
    puVar6 = (ulonglong *)(param_2 + 5);
    uVar4 = FUN_1800022a0((longlong)param_1,(longlong)local_res10,4,puVar6);
    if ((int)uVar4 == -0x25) {
      return 0xffffffdb;
    }
    if ((int)uVar4 < 0) goto LAB_1800011c7;
    *(undefined4 *)(param_2 + 4) = 2;
LAB_1800011fe:
    puVar6 = (ulonglong *)(param_2 + 5);
    uVar4 = FUN_1800022a0((longlong)param_1,*param_2,param_2[1],puVar6);
    if ((int)uVar4 == -0x25) {
      return 0xffffffdb;
    }
    if ((int)uVar4 < 0) {
LAB_1800011c7:
      uVar2 = FUN_180018820(*param_1,0xfffffff9,0x18002c818,puVar6);
      return uVar2;
    }
    *(undefined4 *)(param_2 + 4) = 3;
LAB_180001230:
    puVar6 = (ulonglong *)(param_2 + 5);
    uVar4 = FUN_1800021b0((longlong)param_1,(longlong)local_res10,4,puVar6);
    if ((int)uVar4 == -0x25) {
      return 0xffffffdb;
    }
    if ((int)uVar4 < 0) goto LAB_18000124f;
    uVar3 = FUN_180018ea0(local_res10);
    param_2[3] = (ulonglong)uVar3;
    lVar5 = (**(code **)(*param_1 + 8))((ulonglong)uVar3,*param_1);
    param_2[2] = lVar5;
    if (lVar5 == 0) {
      return 0xfffffffa;
    }
    *(undefined4 *)(param_2 + 4) = 4;
  }
  else {
    if (iVar1 == 2) goto LAB_1800011fe;
    if (iVar1 == 3) goto LAB_180001230;
    if (iVar1 != 4) {
      return 0;
    }
  }
  puVar6 = (ulonglong *)(param_2 + 5);
  uVar4 = FUN_1800021b0((longlong)param_1,param_2[2],param_2[3],puVar6);
  if ((int)uVar4 == -0x25) {
    return 0xffffffdb;
  }
  if (-1 < (int)uVar4) {
    *(undefined4 *)(param_2 + 4) = 5;
    return 0;
  }
LAB_18000124f:
  uVar2 = FUN_180018820(*param_1,0xffffffd5,0x18002c830,puVar6);
  return uVar2;
}




undefined4 FUN_1800012f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = CancelIo((HANDLE)param_1[0x11]);
  if (BVar1 == 0) {
    uVar2 = FUN_180018820(*param_1,0xfffffff3,0x18002c848,param_4);
    return uVar2;
  }
  BVar1 = CloseHandle((HANDLE)param_1[0x10]);
  if (BVar1 == 0) {
    uVar2 = FUN_180018820(*param_1,0xfffffff3,0x18002c878,param_4);
    return uVar2;
  }
  param_1[0x10] = 0;
  SleepEx(0,1);
  BVar1 = CloseHandle((HANDLE)param_1[0x11]);
  if (BVar1 == 0) {
    uVar2 = FUN_180018820(*param_1,0xfffffff3,0x18002c8a8,param_4);
    return uVar2;
  }
  param_1[0x11] = -1;
  param_1[1] = -1;
  return 0;
}




undefined4 FUN_1800013b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  HWND pHVar2;
  
  pHVar2 = FindWindowA("Pageant","Pageant");
  if (pHVar2 == (HWND)0x0) {
    uVar1 = FUN_180018820(*param_1,0xffffffd6,0x18002c8d0,param_4);
    return uVar1;
  }
  param_1[1] = 0;
  return 0;
}




undefined * FUN_180001690(void)

{
  return &DAT_18003b910;
}




void FUN_1800016a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180018d50((longlong)(param_1 + 10));
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_180018d70(puVar1);
    (**(code **)(*param_1 + 0x18))(puVar1[5],*param_1);
    (**(code **)(*param_1 + 0x18))(puVar1[7],*param_1);
    (**(code **)(*param_1 + 0x18))(puVar1,*param_1);
    puVar1 = puVar2;
  }
  FUN_180018d60(param_1 + 10);
  return;
}




int FUN_180001730(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *_Dst;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong _Size;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0xb;
  if ((int)param_1[7] == 0) {
    param_1[4] = 1;
    param_1[3] = (longlong)local_res8;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 7) = 1;
  }
  if (*(char *)param_1[3] != '\v') {
    iVar1 = FUN_180018820(*param_1,0xffffffd9,0x18002c9f8,param_4);
    return iVar1;
  }
  if (param_1[2] == 0) {
    iVar1 = FUN_180018820(*param_1,0xffffffd9,0x18002c9c8,param_4);
    return iVar1;
  }
  iVar1 = (**(code **)(param_1[2] + 8))(param_1,param_1 + 3);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1[5],*param_1);
    param_1[5] = 0;
    return iVar1;
  }
  param_1[3] = 0;
  if (param_1[6] + -1 < 0) {
    uVar8 = 0xffffffd6;
  }
  else {
    pcVar4 = (char *)param_1[5];
    if ((*pcVar4 == '\f') && (lVar5 = param_1[6] + -5, -1 < lVar5)) {
      uVar2 = FUN_180018ea0(pcVar4 + 1);
      pcVar4 = pcVar4 + 5;
      uVar9 = (ulonglong)uVar2;
      uVar8 = 0;
      if (uVar2 != 0) {
        do {
          uVar9 = uVar9 - 1;
          if (lVar5 + -4 < 0) {
            uVar8 = 0xffffffd6;
            break;
          }
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(0x40,*param_1);
          if (puVar3 == (undefined8 *)0x0) {
            uVar8 = 0xfffffffa;
            break;
          }
          uVar2 = FUN_180018ea0(pcVar4);
          pcVar4 = pcVar4 + 4;
          lVar6 = (lVar5 + -4) - (ulonglong)uVar2;
          puVar3[6] = (ulonglong)uVar2;
          lVar5 = *param_1;
          if (lVar6 < 0) {
            uVar8 = 0xffffffd6;
            (**(code **)(lVar5 + 0x18))(puVar3,lVar5);
            break;
          }
          _Dst = (void *)(**(code **)(lVar5 + 8))();
          puVar3[5] = _Dst;
          if (_Dst == (void *)0x0) {
            uVar8 = 0xfffffffa;
            (**(code **)(*param_1 + 0x18))(puVar3,*param_1);
            break;
          }
          memcpy(_Dst,pcVar4,puVar3[6]);
          uVar7 = lVar6 - 4;
          if ((longlong)uVar7 < 0) {
            uVar8 = 0xffffffd6;
LAB_18000192f:
            lVar6 = *param_1;
LAB_180001935:
            (**(code **)(lVar6 + 0x18))(puVar3[5],lVar6);
            (**(code **)(*param_1 + 0x18))(puVar3,*param_1);
            break;
          }
          pcVar4 = pcVar4 + puVar3[6];
          uVar2 = FUN_180018ea0(pcVar4);
          _Size = (ulonglong)uVar2;
          lVar6 = *param_1;
          if (uVar7 < _Size) {
            uVar8 = 0xffffffd6;
            goto LAB_180001935;
          }
          lVar5 = uVar7 - _Size;
          lVar6 = (**(code **)(lVar6 + 8))(_Size + 1,lVar6);
          puVar3[7] = lVar6;
          if (lVar6 == 0) {
            uVar8 = 0xfffffffa;
            goto LAB_18000192f;
          }
          *(undefined1 *)(lVar6 + _Size) = 0;
          memcpy((void *)puVar3[7],pcVar4 + 4,_Size);
          pcVar4 = pcVar4 + 4 + _Size;
          FUN_180018d20(param_1 + 10,puVar3);
        } while (uVar9 != 0);
      }
    }
    else {
      uVar8 = 0xffffffd6;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1[5],*param_1);
  param_1[5] = 0;
  iVar1 = FUN_180018820(*param_1,uVar8,0x18002ca10,param_4);
  return iVar1;
}




void FUN_1800019c0(longlong param_1,undefined8 *param_2,size_t *param_3,void *param_4,
                  ulonglong param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  size_t sVar7;
  void *_Dst_00;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char *pcVar11;
  void *pvVar12;
  
  uVar9 = 0;
  lVar2 = *param_6;
  plVar1 = (longlong *)(lVar2 + 0x18);
  pvVar12 = param_4;
  if (*(int *)(lVar2 + 0x38) == 0) {
    lVar10 = *(longlong *)(lVar2 + 0x48);
    param_6 = (longlong *)
              (**(code **)(param_1 + 8))(param_5 + 0xd + *(longlong *)(lVar10 + 0x30),param_1);
    *plVar1 = (longlong)param_6;
    if (*plVar1 == 0) {
      pcVar11 = "out of memory";
      iVar4 = -6;
      goto LAB_180001c7a;
    }
    *(undefined1 *)param_6 = 0xd;
    param_6 = (longlong *)((longlong)param_6 + 1);
    FUN_1800190c0((longlong *)&param_6,*(void **)(lVar10 + 0x28),*(ulonglong *)(lVar10 + 0x30));
    FUN_1800190c0((longlong *)&param_6,param_4,param_5);
    if (((*(longlong *)(param_1 + 0x11a50) != 0) &&
        (plVar3 = *(longlong **)(param_1 + 0x11a48), plVar3 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x11a50) == 0xc)) {
      if ((*plVar3 == 0x326168732d617372) && ((int)plVar3[1] == 0x3231352d)) {
        uVar9 = 4;
      }
      else {
        lVar10 = *plVar3 + -0x326168732d617372;
        if (lVar10 == 0) {
          lVar10 = (ulonglong)*(uint *)(plVar3 + 1) - 0x3635322d;
        }
        uVar9 = 0;
        if (lVar10 == 0) {
          uVar9 = 2;
        }
      }
    }
    FUN_180019150((longlong *)&param_6,uVar9);
    *(longlong *)(lVar2 + 0x20) = (longlong)param_6 - *plVar1;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined4 *)(lVar2 + 0x38) = 1;
  }
  if (*(char *)*plVar1 != '\r') {
    pcVar11 = "illegal request";
    iVar4 = -0x27;
    goto LAB_180001c7a;
  }
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    pcVar11 = "agent not connected";
    iVar4 = -0x27;
    goto LAB_180001c7a;
  }
  iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2,plVar1);
  if (iVar4 == 0) {
    (**(code **)(param_1 + 0x18))(*plVar1,param_1);
    lVar10 = *(longlong *)(lVar2 + 0x30);
    plVar3 = *(longlong **)(lVar2 + 0x28);
    *plVar1 = 0;
    param_6 = plVar3;
    if (((-1 < lVar10 + -1) && ((char)*plVar3 == '\x0e')) &&
       (param_6 = (longlong *)((longlong)plVar3 + 1), -1 < lVar10 + -5)) {
      param_6 = (longlong *)((longlong)plVar3 + 5);
      if (-1 < lVar10 + -9) {
        uVar5 = FUN_180018ea0((undefined1 *)param_6);
        param_6 = (longlong *)((longlong)param_6 + 4);
        uVar8 = (ulonglong)uVar5;
        lVar10 = (lVar10 + -9) - uVar8;
        if (-1 < lVar10) {
          _Dst = (void *)(**(code **)(param_1 + 8))(uVar8,param_1);
          if (_Dst == (void *)0x0) {
            iVar4 = -6;
            goto LAB_180001c53;
          }
          memcpy(_Dst,param_6,uVar8);
          param_6 = (longlong *)((longlong)param_6 + uVar8);
          sVar7 = FUN_180028fc0(*(char **)(param_1 + 0x11a48),*(size_t *)(param_1 + 0x11a50));
          if (((uVar8 == *(ulonglong *)(param_1 + 0x11a50)) || (uVar8 == sVar7)) &&
             (iVar6 = memcmp(_Dst,*(void **)(param_1 + 0x11a48),uVar8), iVar6 == 0)) {
            lVar10 = lVar10 + -4;
            if (-1 < lVar10) {
              uVar5 = FUN_180018ea0((undefined1 *)param_6);
              param_6 = (longlong *)((longlong)param_6 + 4);
              uVar8 = (ulonglong)uVar5;
              *param_3 = uVar8;
              if (-1 < (longlong)(lVar10 - uVar8)) {
                _Dst_00 = (void *)(**(code **)(param_1 + 8))(uVar8,param_1);
                *param_2 = _Dst_00;
                if (_Dst_00 == (void *)0x0) {
                  iVar4 = -6;
                }
                else {
                  memcpy(_Dst_00,param_6,*param_3);
                }
                goto LAB_180001c4a;
              }
            }
            iVar4 = -0x2a;
          }
          else {
            iVar4 = -0x33;
          }
LAB_180001c4a:
          (**(code **)(param_1 + 0x18))(_Dst,param_1);
          goto LAB_180001c53;
        }
      }
    }
    iVar4 = -0x2a;
  }
LAB_180001c53:
  (**(code **)(param_1 + 0x18))(*plVar1,param_1);
  *plVar1 = 0;
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(lVar2 + 0x28),param_1);
  pcVar11 = "agent sign failure";
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x38) = 0;
LAB_180001c7a:
  FUN_180018820(param_1,iVar4,(longlong)pcVar11,pvVar12);
  return;
}




int libssh2_agent_connect(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
                    /* 0x1ca0  1  libssh2_agent_connect */
  iVar2 = -1;
  if (PTR_s_Pageant_18003b030 != (undefined *)0x0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      puVar1 = *(undefined8 **)((longlong)&PTR_PTR_FUN_18003b038 + lVar3);
      *(undefined8 **)(param_1 + 0x10) = puVar1;
      iVar2 = (*(code *)*puVar1)(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar4 * 0x10;
    } while ((&PTR_s_Pageant_18003b030)[lVar4 * 2] != (undefined *)0x0);
  }
  return iVar2;
}




undefined8 libssh2_agent_disconnect(longlong param_1)

{
  undefined8 uVar1;
  
                    /* 0x1d20  2  libssh2_agent_disconnect */
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 8) != -1)) {
                    /* WARNING: Could not recover jumptable at 0x000180001d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))();
    return uVar1;
  }
  return 0;
}




void libssh2_agent_free(longlong *param_1)

{
                    /* 0x1d40  3  libssh2_agent_free */
  if ((param_1[1] != -1) && (param_1[2] != 0)) {
    (**(code **)(param_1[2] + 0x10))();
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1[0xc],*param_1);
  }
  FUN_1800016a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180001d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,*param_1);
  return;
}




undefined8 libssh2_agent_get_identity(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
                    /* 0x1d90  4  libssh2_agent_get_identity */
  if ((param_3 == 0) || (*(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    lVar1 = FUN_180018d50(param_1 + 0x50);
  }
  else {
    lVar1 = FUN_180018d70(*(undefined8 **)(param_3 + 8));
  }
  if (lVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(lVar1 + 0x18) = 0x3bdefed2;
  *(longlong *)(lVar1 + 0x20) = lVar1;
  *param_2 = (undefined4 *)(lVar1 + 0x18);
  return 0;
}




undefined8 libssh2_agent_get_identity_path(longlong param_1)

{
                    /* 0x1df0  5  libssh2_agent_get_identity_path */
  return *(undefined8 *)(param_1 + 0x60);
}




longlong *
libssh2_agent_init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
                    /* 0x1e00  6  libssh2_agent_init */
  plVar1 = (longlong *)FUN_180018690(param_1,0x98);
  if (plVar1 == (longlong *)0x0) {
    FUN_180018820(param_1,0xfffffffa,0x18002ca28,param_4);
    return (longlong *)0x0;
  }
  *plVar1 = param_1;
  plVar1[1] = -1;
  plVar1[0xc] = 0;
  FUN_180018d60(plVar1 + 10);
  plVar1[0x11] = -1;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  plVar1[0x10] = 0;
  *(undefined4 *)(plVar1 + 0x12) = 0;
  return plVar1;
}




void libssh2_agent_list_identities
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* 0x1e90  7  libssh2_agent_list_identities */
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1800016a0(param_1);
  FUN_180001730(param_1,param_2,param_3,param_4);
  return;
}




void libssh2_agent_set_identity_path(longlong *param_1,void *param_2)

{
  void *_Dst;
  ulonglong _Size;
  ulonglong uVar1;
  
                    /* 0x1ec0  8  libssh2_agent_set_identity_path */
  if (param_1[0xc] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1[0xc],*param_1);
    param_1[0xc] = 0;
  }
  if (param_2 != (void *)0x0) {
    _Size = 0xffffffffffffffff;
    do {
      uVar1 = _Size;
      _Size = uVar1 + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
    if (_Size < 0xfffffffffffffffe) {
      _Dst = (void *)(**(code **)(*param_1 + 8))(uVar1 + 2,*param_1);
      memcpy(_Dst,param_2,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      param_1[0xc] = (longlong)_Dst;
    }
  }
  return;
}




undefined4
libssh2_agent_sign(longlong *param_1,longlong param_2,undefined8 *param_3,size_t *param_4,
                  void *param_5,ulonglong param_6,void *param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *local_res8;
  
                    /* 0x1f50  9  libssh2_agent_sign */
  if (*(int *)(*param_1 + 0x11a20) == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = *(longlong *)(param_2 + 8);
  }
  if ((3 < *(ulonglong *)(param_2 + 0x18)) &&
     (local_res8 = param_1, uVar2 = FUN_180018ea0(*(undefined1 **)(param_2 + 0x10)),
     (ulonglong)uVar2 + 4 <= *(ulonglong *)(param_2 + 0x18))) {
    *(ulonglong *)(*param_1 + 0x11a50) = (ulonglong)param_8;
    uVar4 = (**(code **)(*param_1 + 8))((ulonglong)param_8,*param_1);
    *(undefined8 *)(*param_1 + 0x11a48) = uVar4;
    memcpy(*(void **)(*param_1 + 0x11a48),param_7,(ulonglong)uVar2);
    uVar3 = FUN_1800019c0(*param_1,param_3,param_4,param_5,param_6,(longlong *)&local_res8);
    lVar1 = *param_1;
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x11a48),lVar1);
    *(undefined8 *)(*param_1 + 0x11a48) = 0;
    *(undefined8 *)(*param_1 + 0x11a50) = 0;
    return uVar3;
  }
  return 0xffffffda;
}




void libssh2_agent_userauth(ulonglong *param_1,void *param_2,longlong param_3)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *local_res8;
  
                    /* 0x2070  10  libssh2_agent_userauth */
  if (*(int *)(*param_1 + 0x11a20) == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = *(ulonglong *)(param_3 + 8);
  }
  local_res8 = param_1;
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)param_2 + uVar3) != '\0');
    plVar4 = *(longlong **)(param_3 + 0x10);
    iVar1 = FUN_1800274f0(*param_1,param_2,uVar3,plVar4,*(ulonglong *)(param_3 + 0x18),FUN_1800019c0
                          ,&local_res8);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)(*param_1 + 0xac) == 0) {
      return;
    }
    iVar1 = FUN_18001e940(*param_1,_Var2,uVar3,plVar4);
  } while (iVar1 == 0);
  return;
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
  puVar2 = (ulonglong *)FUN_180001690();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




ulonglong FUN_1800021b0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  
  uVar3 = *param_4;
  uVar4 = uVar3;
  if (uVar3 < param_3) {
    do {
      if (*(int *)(param_1 + 0x90) == 0) {
        iVar1 = ReadFile(*(HANDLE *)(param_1 + 0x88),(LPVOID)(uVar3 + param_2),
                         (int)param_3 - (int)uVar4,local_res18,(LPOVERLAPPED)(param_1 + 0x68));
      }
      else {
        iVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x88),(LPOVERLAPPED)(param_1 + 0x68),
                                    local_res18,0);
      }
      *param_4 = *param_4 + (ulonglong)local_res18[0];
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        if (*(int *)(param_1 + 0x90) == 0) {
          if (DVar2 == 0x3e5) {
LAB_18000228f:
            *(undefined4 *)(param_1 + 0x90) = 1;
            return 0xffffffdb;
          }
        }
        else if (DVar2 == 0x3e4) goto LAB_18000228f;
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      uVar3 = *param_4;
      uVar4 = uVar3 & 0xffffffff;
    } while (uVar3 < param_3);
  }
  *param_4 = 0;
  return uVar4 & 0xffffffff;
}




ulonglong FUN_1800022a0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res18 [2];
  
  uVar3 = *param_4;
  uVar4 = uVar3;
  if (uVar3 < param_3) {
    do {
      if (*(int *)(param_1 + 0x90) == 0) {
        iVar1 = WriteFile(*(HANDLE *)(param_1 + 0x88),(LPCVOID)(uVar3 + param_2),
                          (int)param_3 - (int)uVar4,local_res18,(LPOVERLAPPED)(param_1 + 0x68));
      }
      else {
        iVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x88),(LPOVERLAPPED)(param_1 + 0x68),
                                    local_res18,0);
      }
      *param_4 = *param_4 + (ulonglong)local_res18[0];
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        if (*(int *)(param_1 + 0x90) == 0) {
          if (DVar2 == 0x3e5) {
LAB_18000237f:
            *(undefined4 *)(param_1 + 0x90) = 1;
            return 0xffffffdb;
          }
        }
        else if (DVar2 == 0x3e4) goto LAB_18000237f;
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x90) = 0;
      uVar3 = *param_4;
      uVar4 = uVar3 & 0xffffffff;
    } while (uVar3 < param_3);
  }
  *param_4 = 0;
  return uVar4 & 0xffffffff;
}




void FUN_180002390(longlong param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x1000) ^ *param_2;
  uVar6 = (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
           *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
          *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
          *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^ *(uint *)(param_1 + 0x1004)
          ^ *param_3;
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1008);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x100c);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1010);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1014);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1018);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x101c);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1020);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1024);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1028);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x102c);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1030);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1034);
  uVar7 = uVar7 ^ (*(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x1038);
  uVar6 = uVar6 ^ (*(int *)(param_1 + (ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) * 4) +
                   *(int *)(param_1 + (ulonglong)(uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + (ulonglong)((uVar7 >> 8 & 0xff) + 0x200) * 4)) +
                  *(int *)(param_1 + (ulonglong)((uVar7 & 0xff) + 0x300) * 4) ^
                  *(uint *)(param_1 + 0x103c);
  iVar1 = *(int *)(param_1 + (ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) * 4);
  iVar2 = *(int *)(param_1 + (ulonglong)(uVar6 >> 0x18) * 4);
  uVar3 = *(uint *)(param_1 + (ulonglong)((uVar6 >> 8 & 0xff) + 0x200) * 4);
  iVar4 = *(int *)(param_1 + (ulonglong)((uVar6 & 0xff) + 0x300) * 4);
  uVar5 = *(uint *)(param_1 + 0x1040);
  *param_2 = uVar6 ^ *(uint *)(param_1 + 0x1044);
  *param_3 = uVar7 ^ (iVar1 + iVar2 ^ uVar3) + iVar4 ^ uVar5;
  return;
}




void FUN_180002840(uint *param_1,longlong param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint local_res20 [2];
  uint local_28 [4];
  
  uVar12 = 0;
  uVar1 = 0;
  lVar8 = 4;
  lVar11 = 2;
  puVar9 = param_1 + 0x401;
  do {
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar5 = uVar12;
      if (uVar1 < param_3) {
        uVar5 = (ulonglong)uVar1;
      }
      uVar1 = (short)uVar5 + 1;
      uVar4 = (uint)*(byte *)(uVar5 + param_2) | (int)uVar6 << 8;
      uVar6 = (ulonglong)uVar4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[-1] = puVar9[-1] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *puVar9 = *puVar9 ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[1] = puVar9[1] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[2] = puVar9[2] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[3] = puVar9[3] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[4] = puVar9[4] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = uVar2;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[5] = puVar9[5] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = 0;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[6] = puVar9[6] ^ uVar4;
    lVar10 = 4;
    uVar6 = uVar12;
    do {
      uVar3 = 0;
      if (uVar1 < param_3) {
        uVar3 = uVar1;
      }
      uVar4 = (int)uVar6 << 8 | (uint)*(byte *)((ulonglong)uVar3 + param_2);
      uVar6 = (ulonglong)uVar4;
      uVar1 = uVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar9[7] = puVar9[7] ^ uVar4;
    puVar9 = puVar9 + 9;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_res20[0] = 0;
  lVar11 = 9;
  local_28[0] = 0;
  puVar9 = param_1 + 0x401;
  do {
    FUN_180002390((longlong)param_1,local_res20,local_28);
    puVar9[-1] = local_res20[0];
    *puVar9 = local_28[0];
    lVar11 = lVar11 + -1;
    puVar7 = param_1;
    puVar9 = puVar9 + 2;
  } while (lVar11 != 0);
  do {
    lVar11 = 0x80;
    do {
      FUN_180002390((longlong)param_1,local_res20,local_28);
      *puVar7 = local_res20[0];
      puVar7[1] = local_28[0];
      puVar7 = puVar7 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}




void FUN_180002af0(uint *param_1,longlong param_2,ushort param_3,longlong param_4,ushort param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint local_38;
  uint local_34 [3];
  
  uVar4 = 0;
  lVar5 = 2;
  puVar6 = param_1 + 0x401;
  puVar9 = puVar6;
  do {
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = 0;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[-1] = puVar9[-1] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = 0;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *puVar9 = *puVar9 ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar2 = 0;
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[1] = puVar9[1] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[2] = puVar9[2] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[3] = puVar9[3] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[4] = puVar9[4] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar2 = 0;
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[5] = puVar9[5] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[6] = puVar9[6] ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = uVar2;
      if (uVar4 < param_5) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_4) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar9[7] = puVar9[7] ^ uVar3;
    puVar9 = puVar9 + 9;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar4 = 0;
  local_38 = 0;
  local_34[0] = 0;
  lVar5 = 9;
  do {
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = 0;
      if (uVar4 < param_3) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_2) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_38 = local_38 ^ uVar3;
    uVar3 = 0;
    lVar7 = 4;
    do {
      uVar1 = 0;
      if (uVar4 < param_3) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 + 1;
      uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_2) | uVar3 << 8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_34[0] = local_34[0] ^ uVar3;
    FUN_180002390((longlong)param_1,&local_38,local_34);
    puVar6[-1] = local_38;
    *puVar6 = local_34[0];
    puVar6 = puVar6 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = 4;
  puVar6 = param_1;
  do {
    lVar7 = 0x80;
    do {
      uVar3 = 0;
      lVar8 = 4;
      do {
        uVar1 = 0;
        if (uVar4 < param_3) {
          uVar1 = uVar4;
        }
        uVar4 = uVar1 + 1;
        uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_2) | uVar3 << 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_38 = local_38 ^ uVar3;
      uVar3 = 0;
      lVar8 = 4;
      do {
        uVar1 = 0;
        if (uVar4 < param_3) {
          uVar1 = uVar4;
        }
        uVar4 = uVar1 + 1;
        uVar3 = (uint)*(byte *)((ulonglong)uVar1 + param_2) | uVar3 << 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_34[0] = local_34[0] ^ uVar3;
      FUN_180002390((longlong)param_1,&local_38,local_34);
      *puVar6 = local_38;
      puVar6[1] = local_34[0];
      puVar6 = puVar6 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180002eb0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined1 auStackY_10f8 [32];
  uint local_10c8 [1044];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58 [32];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x180002ece;
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_10f8;
  local_58[0] = 0x4f;
  local_58[1] = 0x78;
  local_58[2] = 0x79;
  local_58[3] = 99;
  local_58[4] = 0x68;
  local_58[5] = 0x72;
  local_58[6] = 0x6f;
  local_58[7] = 0x6d;
  local_58[8] = 0x61;
  local_58[9] = 0x74;
  local_58[10] = 0x69;
  local_58[0xb] = 99;
  local_58[0xc] = 0x42;
  local_58[0xd] = 0x6c;
  local_58[0xe] = 0x6f;
  local_58[0xf] = 0x77;
  local_58[0x10] = 0x66;
  local_58[0x11] = 0x69;
  local_58[0x12] = 0x73;
  local_58[0x13] = 0x68;
  local_58[0x14] = 0x53;
  local_58[0x15] = 0x77;
  local_58[0x16] = 0x61;
  local_58[0x17] = 0x74;
  local_58[0x18] = 0x44;
  local_58[0x19] = 0x79;
  local_58[0x1a] = 0x6e;
  local_58[0x1b] = 0x61;
  local_58[0x1c] = 0x6d;
  local_58[0x1d] = 0x69;
  local_58[0x1e] = 0x74;
  local_58[0x1f] = 0x65;
  memcpy(local_10c8,&DAT_18002ca60,0x1048);
  lVar3 = 0x40;
  FUN_180002af0(local_10c8,param_2,0x40,param_1,0x40);
  lVar4 = 0x40;
  do {
    FUN_180002840(local_10c8,param_2,0x40);
    FUN_180002840(local_10c8,param_1,0x40);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_78 = 0;
  uVar1 = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 + 1;
    local_78 = (uint)local_58[uVar2] | local_78 << 8;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_74 = 0;
  lVar4 = 4;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_74 = local_74 << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_70 = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_70 = local_70 << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_6c = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_6c = local_6c << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_68 = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_68 = local_68 << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_64 = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_64 = local_64 << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_60 = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_60 = local_60 << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 4;
  local_5c = 0;
  do {
    uVar2 = 0;
    if (uVar1 < 0x20) {
      uVar2 = uVar1;
    }
    local_5c = local_5c << 8 | (uint)local_58[uVar2];
    uVar1 = uVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  do {
    puVar7 = &local_78;
    lVar4 = 4;
    do {
      FUN_180002390((longlong)local_10c8,puVar7,puVar7 + 1);
      puVar7 = puVar7 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_3[3] = local_78._3_1_;
  param_3[2] = local_78._2_1_;
  param_3[1] = local_78._1_1_;
  *param_3 = (undefined1)local_78;
  param_3[7] = local_74._3_1_;
  param_3[6] = local_74._2_1_;
  param_3[5] = local_74._1_1_;
  param_3[4] = (undefined1)local_74;
  param_3[0xb] = local_70._3_1_;
  param_3[10] = local_70._2_1_;
  param_3[9] = local_70._1_1_;
  param_3[8] = (undefined1)local_70;
  param_3[0xf] = local_6c._3_1_;
  param_3[0xe] = local_6c._2_1_;
  param_3[0xd] = local_6c._1_1_;
  param_3[0xc] = (undefined1)local_6c;
  param_3[0x13] = local_68._3_1_;
  param_3[0x12] = local_68._2_1_;
  param_3[0x11] = local_68._1_1_;
  param_3[0x10] = (undefined1)local_68;
  param_3[0x17] = local_64._3_1_;
  param_3[0x16] = local_64._2_1_;
  param_3[0x15] = local_64._1_1_;
  param_3[0x14] = (undefined1)local_64;
  param_3[0x1b] = local_60._3_1_;
  param_3[0x1a] = local_60._2_1_;
  param_3[0x19] = local_60._1_1_;
  param_3[0x18] = (undefined1)local_60;
  param_3[0x1f] = local_5c._3_1_;
  param_3[0x1e] = local_5c._2_1_;
  param_3[0x1d] = local_5c._1_1_;
  param_3[0x1c] = (undefined1)local_5c;
  pbVar5 = local_58;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  puVar6 = &local_78;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((longlong)puVar6 + 1);
  }
  puVar7 = local_10c8;
  for (lVar3 = 0x1048; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (uint *)((longlong)puVar7 + 1);
  }
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_10f8);
  return;
}




void FUN_180003390(undefined1 *param_1,longlong param_2,void *param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,uint param_7)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_188 [32];
  longlong local_168;
  void *local_160;
  undefined1 *local_158;
  void *local_150;
  longlong local_148;
  size_t local_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  ulonglong local_78;
  
  local_78 = DAT_18003b280 ^ (ulonglong)auStack_188;
  local_158 = param_1;
  local_150 = param_3;
  local_148 = param_2;
  if ((((param_7 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
     ((param_6 - 1 < 0x400 && (param_4 < 0x100001)))) {
    local_140 = param_4 + 4;
    iVar6 = 1;
    local_160 = calloc(1,local_140);
    if (local_160 != (void *)0x0) {
      uVar8 = param_6 + 0x1f >> 5;
      memcpy(local_160,local_150,param_4);
      FUN_18000b970(&local_168);
      EVP_DigestUpdate(local_168,local_158,local_148);
      EVP_DigestFinal(local_168,local_b8,0);
      EVP_MD_CTX_free(local_168);
      local_158 = (undefined1 *)((longlong)local_160 + param_4);
      uVar5 = param_6;
      uVar3 = ((param_6 - 1) + uVar8) / uVar8;
      do {
        local_158[3] = (char)iVar6;
        *local_158 = (char)((uint)iVar6 >> 0x18);
        local_158[1] = (char)((uint)iVar6 >> 0x10);
        local_158[2] = (char)((uint)iVar6 >> 8);
        FUN_18000b970(&local_168);
        EVP_DigestUpdate(local_168,local_160,local_140);
        EVP_DigestFinal(local_168,local_f8,0);
        EVP_MD_CTX_free(local_168);
        FUN_180002eb0((longlong)local_b8,(longlong)local_f8,(undefined1 *)&local_138);
        local_118 = local_138;
        uStack_114 = uStack_134;
        uStack_110 = uStack_130;
        uStack_10c = uStack_12c;
        local_108 = local_128;
        uStack_104 = uStack_124;
        uStack_100 = uStack_120;
        uStack_fc = uStack_11c;
        if (1 < (ulonglong)param_7) {
          lVar9 = (ulonglong)param_7 - 1;
          uVar10 = local_128;
          uVar11 = uStack_124;
          uVar12 = uStack_120;
          uVar13 = uStack_11c;
          uVar14 = local_138;
          uVar15 = uStack_134;
          uVar16 = uStack_130;
          uVar17 = uStack_12c;
          do {
            FUN_18000b970(&local_168);
            EVP_DigestUpdate(local_168,&local_138,0x20);
            EVP_DigestFinal(local_168,local_f8,0);
            EVP_MD_CTX_free(local_168);
            FUN_180002eb0((longlong)local_b8,(longlong)local_f8,(undefined1 *)&local_138);
            uVar14 = uVar14 ^ local_138;
            uVar15 = uVar15 ^ uStack_134;
            uVar16 = uVar16 ^ uStack_130;
            uVar17 = uVar17 ^ uStack_12c;
            uVar10 = uVar10 ^ local_128;
            uVar11 = uVar11 ^ uStack_124;
            uVar12 = uVar12 ^ uStack_120;
            uVar13 = uVar13 ^ uStack_11c;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          local_108 = uVar10;
          uStack_104 = uVar11;
          uStack_100 = uVar12;
          uStack_fc = uVar13;
          local_118 = uVar14;
          uStack_114 = uVar15;
          uStack_110 = uVar16;
          uStack_10c = uVar17;
        }
        uVar2 = uVar5;
        if (uVar3 < uVar5) {
          uVar2 = uVar3;
        }
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar4 = (ulonglong)(iVar6 - 1);
          do {
            if (param_6 <= uVar4) break;
            puVar1 = (undefined1 *)((longlong)&local_118 + uVar3);
            uVar3 = uVar3 + 1;
            *(undefined1 *)(uVar4 + param_5) = *puVar1;
            uVar4 = uVar4 + uVar8;
          } while (uVar3 < uVar2);
        }
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 - uVar3;
        uVar3 = uVar2;
      } while (uVar5 != 0);
      puVar7 = &local_118;
      for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (uint *)((longlong)puVar7 + 1);
      }
      free(local_160);
    }
  }
  FUN_18002af30(local_78 ^ (ulonglong)auStack_188);
  return;
}




ulonglong FUN_180003670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar5 = *(ulonglong *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined4 *)(param_1 + 0x298) = 0;
    return 0;
  }
  uVar6 = 0;
  if (*(char *)(param_1 + 0x41) == '\0') {
    uVar4 = FUN_180004ca0(param_1);
    iVar2 = (int)uVar4;
    uVar6 = uVar4 & 0xffffffff;
    if (iVar2 != 0) {
      if (iVar2 == -0x25) {
        return uVar4;
      }
      FUN_180018820(uVar5,iVar2,0x18002e658,param_4);
    }
  }
  if (*(int *)(param_1 + 0x298) == 0) {
    *(undefined1 *)(param_1 + 0x29c) = 0x61;
    FUN_180018d00((undefined1 *)(param_1 + 0x29d),*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x298) = 2;
  }
  else if (*(int *)(param_1 + 0x298) != 2) goto LAB_18000375f;
  uVar7 = 0;
  uVar3 = FUN_180026710(uVar5,(void *)(param_1 + 0x29c),5,(void *)0x0,0);
  uVar6 = (ulonglong)uVar3;
  if (uVar3 == 0xffffffdb) {
    FUN_180018820(uVar5,0xffffffdb,0x18002e688,uVar7);
    return uVar6;
  }
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x298) = 3;
  }
  else {
    FUN_180018820(uVar5,uVar3,0x18002e6b0,uVar7);
  }
LAB_18000375f:
  uVar3 = (uint)uVar6;
  if (*(int *)(param_1 + 0x298) == 3) {
    cVar1 = *(char *)(param_1 + 0x54);
    while ((cVar1 == '\0' && (uVar3 = (uint)uVar6, uVar3 == 0))) {
      if (*(int *)(uVar5 + 600) == -1) goto LAB_180003792;
      uVar3 = FUN_1800261c0(uVar5);
      cVar1 = *(char *)(param_1 + 0x54);
      uVar6 = (ulonglong)uVar3;
    }
  }
  if (uVar3 != 0xffffffdb) {
LAB_180003792:
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (*(code **)(param_1 + 0x78) != (code *)0x0) {
      (**(code **)(param_1 + 0x78))(uVar5,uVar5,param_1,param_1 + 0x70);
    }
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  uVar5 = (ulonglong)uVar3;
  if (-1 < (int)uVar3) {
    uVar5 = 0;
  }
  return uVar5;
}




void FUN_1800037e0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x56) = param_2;
  }
  return;
}




undefined8 FUN_180003800(longlong *param_1,ulonglong param_2,char *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char *pcVar8;
  undefined8 uVar9;
  undefined1 *local_res8;
  ulonglong uVar7;
  
  uVar1 = param_1[3];
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(char *)(param_1[4] + uVar6) != '\0');
  pcVar8 = (char *)(uVar7 + 0x23);
  uVar9 = 0;
  if ((int)param_1[9] == 0) {
    puVar3 = (undefined1 *)(**(code **)(uVar1 + 8))(pcVar8,uVar1);
    if (puVar3 == (undefined1 *)0x0) {
      local_res8 = puVar3;
      FUN_180018820(uVar1,0xfffffffa,0x18002dd78,param_4);
      return 0xfffffffa;
    }
    *puVar3 = 0x50;
    local_res8 = puVar3 + 1;
    FUN_1800190c0((longlong *)&local_res8,"cancel-tcpip-forward",0x14);
    *local_res8 = 0;
    local_res8 = local_res8 + 1;
    FUN_1800190c0((longlong *)&local_res8,(void *)param_1[4],uVar6);
    FUN_180019150((longlong *)&local_res8,(int)param_1[5]);
    *(undefined4 *)(param_1 + 9) = 2;
  }
  else {
    puVar3 = (undefined1 *)param_1[10];
    if ((int)param_1[9] != 2) goto LAB_18000394b;
  }
  param_4 = 0;
  uVar2 = FUN_180026710(uVar1,puVar3,(size_t)pcVar8,(void *)0x0,0);
  if (uVar2 == 0xffffffdb) {
    FUN_180018820(uVar1,0xffffffdb,0x18002ded0,param_4);
    param_1[10] = (longlong)puVar3;
    return 0xffffffdb;
  }
  param_3 = pcVar8;
  if (uVar2 != 0) {
    param_3 = "Unable to send global-request packet for forward listen request";
    FUN_180018820(uVar1,0xfffffff9,0x18002de10,param_4);
    *(undefined4 *)(param_1 + 9) = 3;
    uVar9 = 0xfffffff9;
  }
  param_2 = uVar1;
  (**(code **)(uVar1 + 0x18))(puVar3);
  *(undefined4 *)(param_1 + 9) = 3;
LAB_18000394b:
  plVar4 = (longlong *)FUN_180018d50((longlong)(param_1 + 6));
  do {
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(uVar1 + 0x18))(param_1[4],uVar1);
      FUN_180018d80(param_1);
      (**(code **)(uVar1 + 0x18))(param_1,uVar1);
      return uVar9;
    }
    plVar5 = (longlong *)FUN_180018d70(plVar4);
    uVar6 = FUN_1800039c0(plVar4,param_2,param_3,param_4);
    plVar4 = plVar5;
  } while ((int)uVar6 != -0x25);
  return 0xffffffdb;
}




ulonglong FUN_1800039c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong local_res18;
  
  lVar1 = param_1[0xd];
  if (*(int *)((longlong)param_1 + 0x2ac) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2ac) = 2;
  }
  if (((char)param_1[8] == '\0') && (*(int *)(lVar1 + 600) == 0)) {
    uVar2 = FUN_180003670((longlong)param_1,param_2,param_3,param_4);
    if ((int)uVar2 == -0x25) {
      return uVar2;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x18))(param_1[5],lVar1);
  }
  FUN_180018d00(local_res8,(int)param_1[6]);
  do {
    uVar3 = FUN_180019d90(lVar1,'^',&local_res10,&local_res18,1,local_res8,4);
    if ((int)uVar3 < 0) {
      uVar3 = FUN_180019d90(lVar1,'_',&local_res10,&local_res18,1,local_res8,4);
      if ((int)uVar3 < 0) {
        if (param_1[3] != 0) {
          (**(code **)(lVar1 + 0x18))(param_1[3],lVar1);
        }
        FUN_180018d80(param_1);
        if (param_1[0x11] != 0) {
          (**(code **)(lVar1 + 0x18))(param_1[0x11],lVar1);
        }
        if (param_1[0x3f] != 0) {
          (**(code **)(lVar1 + 0x18))(param_1[0x3f],lVar1);
        }
        if (param_1[0x44] != 0) {
          (**(code **)(lVar1 + 0x18))(param_1[0x44],lVar1);
        }
        (**(code **)(lVar1 + 0x18))(param_1,lVar1);
        return 0;
      }
    }
    (**(code **)(lVar1 + 0x18))(local_res10,lVar1);
  } while( true );
}




undefined8 * FUN_180003b10(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar1 = (undefined8 *)FUN_180018d50(param_1 + 0x228); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)FUN_180018d70(puVar1)) {
    if (*(int *)(puVar1 + 6) == param_2) {
      return puVar1;
    }
  }
  puVar1 = (undefined8 *)FUN_180018d50(param_1 + 0x240);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    for (puVar2 = (undefined8 *)FUN_180018d50((longlong)(puVar1 + 6)); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)FUN_180018d70(puVar2)) {
      if (*(int *)(puVar2 + 6) == param_2) {
        return puVar2;
      }
    }
    puVar1 = (undefined8 *)FUN_180018d70(puVar1);
  } while( true );
}




uint FUN_180003ba0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x238);
  puVar2 = (undefined8 *)FUN_180018d50(param_1 + 0x228);
  while (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(uint *)(puVar2 + 6);
    if (*(uint *)(puVar2 + 6) <= uVar1) {
      uVar3 = uVar1;
    }
    puVar2 = (undefined8 *)FUN_180018d70(puVar2);
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x238) = uVar1 + 1;
  return uVar1;
}




undefined8
FUN_180003c00(ulonglong param_1,void *param_2,uint param_3,longlong *param_4,undefined4 param_5,
             longlong *param_6,size_t param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  longlong *local_res8;
  void *local_res10;
  undefined1 *local_48;
  longlong *local_40;
  
  uVar5 = SUB84(param_4,0);
  iVar6 = *(int *)(param_1 + 0x11ad8);
  plVar1 = (longlong *)(param_1 + 0x11af0);
  uVar10 = (ulonglong)param_3;
  plVar2 = (longlong *)(param_1 + 0x11b00);
  local_res10 = param_2;
  if (iVar6 == 0) {
    uVar4 = *(uint *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x11ae8) = 0;
    *plVar1 = 0;
    *plVar2 = 0;
    *(ulonglong *)(param_1 + 0x11af8) = (ulonglong)(param_3 + 0x11);
    puVar7 = (undefined8 *)FUN_180018d50(param_1 + 0x228);
    while (puVar7 != (undefined8 *)0x0) {
      uVar11 = *(uint *)(puVar7 + 6);
      if (*(uint *)(puVar7 + 6) <= uVar4) {
        uVar11 = uVar4;
      }
      puVar7 = (undefined8 *)FUN_180018d70(puVar7);
      uVar4 = uVar11;
    }
    *(uint *)(param_1 + 0x11b10) = uVar4;
    *(uint *)(param_1 + 0x238) = uVar4 + 1;
    *(undefined8 *)(param_1 + 0x11ae0) = 0;
    pvVar8 = FUN_180018690(param_1,0x310);
    *(void **)(param_1 + 0x11ae8) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      FUN_180018820(param_1,0xfffffffa,0x18002dac8,param_4);
      return 0;
    }
    *(uint *)((longlong)pvVar8 + 0x20) = param_3;
    uVar9 = (**(code **)(param_1 + 8))(uVar10,param_1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x11ae8) + 0x18) = uVar9;
    pvVar8 = *(void **)(*(longlong *)(param_1 + 0x11ae8) + 0x18);
    if (pvVar8 == (void *)0x0) {
      FUN_180018820(param_1,0xfffffffa,0x18002daf8,param_4);
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11ae8),param_1);
      *(undefined8 *)(param_1 + 0x11ae8) = 0;
      return 0;
    }
    memcpy(pvVar8,local_res10,uVar10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x30) = *(undefined4 *)(param_1 + 0x11b10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x4c) = uVar5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x48) = uVar5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x50) = param_5;
    *(ulonglong *)(*(longlong *)(param_1 + 0x11ae8) + 0x68) = param_1;
    FUN_180018d20((undefined8 *)(param_1 + 0x228),*(undefined8 **)(param_1 + 0x11ae8));
    local_48 = (undefined1 *)(**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x11af8),param_1);
    *plVar1 = (longlong)local_48;
    if (local_48 != (undefined1 *)0x0) {
      *local_48 = 0x5a;
      local_48 = local_48 + 1;
      FUN_1800190c0((longlong *)&local_48,local_res10,uVar10);
      FUN_180019150((longlong *)&local_48,*(undefined4 *)(param_1 + 0x11b10));
      FUN_180019150((longlong *)&local_48,uVar5);
      FUN_180019150((longlong *)&local_48,param_5);
      *(undefined4 *)(param_1 + 0x11ad8) = 2;
LAB_180003e50:
      local_res8 = plVar1;
      local_40 = plVar1;
      uVar4 = FUN_180026710(param_1,(void *)*plVar1,*(size_t *)(param_1 + 0x11af8),param_6,param_7);
      if (uVar4 == 0xffffffdb) {
        FUN_180018820(param_1,0xffffffdb,0x18002db58,param_6);
        return 0;
      }
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x11ad8) = 3;
        goto LAB_180003ecf;
      }
      pcVar12 = "Unable to send channel-open request";
      param_4 = param_6;
      goto LAB_180003e9d;
    }
    pcVar12 = "Unable to allocate temporary space for packet";
    uVar5 = 0xfffffffa;
    local_48 = (undefined1 *)0x0;
  }
  else {
    if (iVar6 == 2) goto LAB_180003e50;
    local_res8 = plVar1;
    local_40 = plVar1;
    if (iVar6 != 3) goto LAB_18000408b;
LAB_180003ecf:
    param_4 = (longlong *)(param_1 + 0x11b08);
    uVar10 = FUN_18001a320(param_1,"[\\",plVar2,param_4,1,(void *)(*local_res8 + 5 + uVar10),4,
                           (longlong *)(param_1 + 0x11ae0));
    uVar4 = (uint)uVar10;
    if (uVar4 == 0xffffffdb) {
      FUN_180018820(param_1,0xffffffdb,0x18002dbb0,param_4);
      return 0;
    }
    if (uVar4 != 0) {
      pcVar12 = "Unexpected error";
LAB_180003e9d:
      FUN_180018820(param_1,uVar4,(longlong)pcVar12,param_4);
      goto LAB_18000408b;
    }
    if (*(ulonglong *)(param_1 + 0x11b08) == 0) {
      FUN_180018820(param_1,0xfffffff2,0x18002dbd8,param_4);
      goto LAB_18000408b;
    }
    pcVar12 = (char *)*plVar2;
    if (*pcVar12 == '[') {
      if (0x10 < *(ulonglong *)(param_1 + 0x11b08)) {
        uVar5 = FUN_180018ea0(pcVar12 + 5);
        *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x44) = uVar5;
        uVar5 = FUN_180018ea0((undefined1 *)(*plVar2 + 9));
        *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x38) = uVar5;
        uVar5 = FUN_180018ea0((undefined1 *)(*plVar2 + 9));
        *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x34) = uVar5;
        uVar5 = FUN_180018ea0((undefined1 *)(*plVar2 + 0xd));
        plVar1 = local_40;
        *(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x3c) = uVar5;
        (**(code **)(param_1 + 0x18))(*local_40,param_1);
        lVar3 = *plVar2;
        *plVar1 = 0;
        (**(code **)(param_1 + 0x18))(lVar3,param_1);
        *plVar2 = 0;
        *(undefined4 *)(param_1 + 0x11ad8) = 0;
        return *(undefined8 *)(param_1 + 0x11ae8);
      }
      FUN_180018820(param_1,0xfffffff2,0x18002dbd8,param_4);
      goto LAB_18000408b;
    }
    if (*pcVar12 != '\\') goto LAB_18000408b;
    iVar6 = FUN_180018ea0(pcVar12 + 5);
    if (iVar6 == 1) {
      pcVar12 = "Channel open failure (administratively prohibited)";
    }
    else if (iVar6 == 2) {
      pcVar12 = "Channel open failure (connect failed)";
    }
    else {
      if (iVar6 != 3) {
        uVar5 = 0xffffffeb;
        if (iVar6 == 4) {
          pcVar12 = "Channel open failure (resource shortage)";
        }
        else {
          pcVar12 = "Channel open failure";
        }
        goto LAB_180004086;
      }
      pcVar12 = "Channel open failure (unknown channel type)";
    }
    uVar5 = 0xffffffeb;
  }
LAB_180004086:
  FUN_180018820(param_1,uVar5,(longlong)pcVar12,param_4);
LAB_18000408b:
  if (*plVar2 != 0) {
    (**(code **)(param_1 + 0x18))(*plVar2,param_1);
    *plVar2 = 0;
  }
  if (*plVar1 != 0) {
    (**(code **)(param_1 + 0x18))(*plVar1,param_1);
    *plVar1 = 0;
  }
  puVar7 = (undefined8 *)(param_1 + 0x11b00);
  if (*(longlong *)(param_1 + 0x11ae8) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(*(longlong *)(param_1 + 0x11ae8) + 0x18),param_1);
    FUN_180018d80(*(longlong **)(param_1 + 0x11ae8));
    FUN_180018d00((undefined1 *)&local_res8,*(undefined4 *)(*(longlong *)(param_1 + 0x11ae8) + 0x30)
                 );
    while ((uVar9 = FUN_180019d90(param_1,'^',puVar7,(longlong *)(param_1 + 0x11b08),1,&local_res8,4
                                 ), -1 < (int)uVar9 ||
           (uVar9 = FUN_180019d90(param_1,'_',puVar7,(longlong *)(param_1 + 0x11b08),1,&local_res8,4
                                 ), -1 < (int)uVar9))) {
      (**(code **)(param_1 + 0x18))(*puVar7,param_1);
      *puVar7 = 0;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11ae8),param_1);
    *(undefined8 *)(param_1 + 0x11ae8) = 0;
  }
  *(undefined4 *)(param_1 + 0x11ad8) = 0;
  return 0;
}




longlong FUN_1800041b0(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar4 = (undefined8 *)FUN_180018d50(*(longlong *)(param_1 + 0x68) + 0x218);
joined_r0x0001800041df:
  do {
    do {
      puVar2 = puVar4;
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      puVar4 = (undefined8 *)FUN_180018d70(puVar2);
    } while ((ulonglong)puVar2[4] < 5);
    iVar3 = FUN_180018ea0((undefined1 *)(puVar2[3] + 1));
    cVar1 = *(char *)puVar2[3];
    if (param_2 == 0) {
      if (cVar1 == '^') {
        bVar5 = *(int *)(param_1 + 0x30) == iVar3;
      }
      else {
        if ((cVar1 != '_') || (*(int *)(param_1 + 0x30) != iVar3)) goto joined_r0x0001800041df;
        bVar5 = *(char *)(param_1 + 0x56) == '\x02';
      }
    }
    else {
      if (((cVar1 != '_') || (*(int *)(param_1 + 0x30) != iVar3)) || ((ulonglong)puVar2[4] < 9))
      goto joined_r0x0001800041df;
      iVar3 = FUN_180018ea0((char *)puVar2[3] + 5);
      bVar5 = param_2 == iVar3;
    }
    if (bVar5) {
      return puVar2[4] - puVar2[5];
    }
  } while( true );
}




undefined4
FUN_180004270(longlong param_1,void *param_2,ulonglong param_3,longlong *param_4,size_t param_5)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 *local_res8;
  void *local_res10;
  longlong local_48;
  char *local_40;
  
  uVar3 = *(ulonglong *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x218);
  local_res10 = param_2;
  if (iVar2 == 0x11) {
    uVar4 = FUN_180018820(uVar3,0xffffffd9,0x18002e348,param_4);
    return uVar4;
  }
  plVar7 = (longlong *)(param_1 + 0x228);
  if (iVar2 == 0) {
    *plVar7 = param_3 + 10;
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (param_4 != (longlong *)0x0) {
      *plVar7 = *plVar7 + 4;
    }
    plVar9 = param_4;
    local_res8 = (undefined1 *)(**(code **)(uVar3 + 8))(*plVar7,uVar3);
    *(undefined1 **)(param_1 + 0x220) = local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      pcVar8 = "Unable to allocate memory for channel-process request";
      uVar5 = 0xfffffffa;
      local_res8 = (undefined1 *)0x0;
      param_4 = plVar9;
      goto LAB_1800044e5;
    }
    *local_res8 = 0x62;
    local_res8 = local_res8 + 1;
    FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
    FUN_1800190c0((longlong *)&local_res8,local_res10,param_3);
    *local_res8 = 1;
    local_res8 = local_res8 + 1;
    if (param_4 != (longlong *)0x0) {
      FUN_180019150((longlong *)&local_res8,(int)param_5);
    }
    *(undefined4 *)(param_1 + 0x218) = 2;
LAB_1800043c9:
    puVar10 = (undefined8 *)(param_1 + 0x220);
    uVar5 = FUN_180026710(uVar3,(void *)*puVar10,*(size_t *)(param_1 + 0x228),param_4,param_5);
    if (uVar5 == 0xffffffdb) {
      FUN_180018820(uVar3,0xffffffdb,0x18002e3a0,param_4);
      return 0xffffffdb;
    }
    (**(code **)(uVar3 + 0x18))(*puVar10,uVar3);
    *puVar10 = 0;
    if (uVar5 != 0) {
      *(undefined4 *)(param_1 + 0x218) = 0x11;
      pcVar8 = "Unable to send channel request";
      goto LAB_1800044e5;
    }
    FUN_180018d00((undefined1 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x218) = 3;
LAB_18000445b:
    param_4 = &local_48;
    uVar6 = FUN_18001a320(uVar3,"cd",&local_40,param_4,1,(void *)(param_1 + 0x230),4,
                          (longlong *)(param_1 + 0x238));
    uVar5 = (uint)uVar6;
    if (uVar5 == 0xffffffdb) {
      return 0xffffffdb;
    }
    if ((uVar5 != 0) || (local_48 == 0)) {
      *(undefined4 *)(param_1 + 0x218) = 0x11;
      pcVar8 = "Failed waiting for channel success";
      goto LAB_1800044e5;
    }
    cVar1 = *local_40;
    (**(code **)(uVar3 + 0x18))(local_40,uVar3);
    *(undefined4 *)(param_1 + 0x218) = 0x11;
    if (cVar1 == 'c') {
      return 0;
    }
  }
  else {
    if (iVar2 == 2) goto LAB_1800043c9;
    if (iVar2 == 3) goto LAB_18000445b;
  }
  pcVar8 = "Unable to complete request for channel-process-startup";
  uVar5 = 0xffffffea;
LAB_1800044e5:
  uVar4 = FUN_180018820(uVar3,uVar5,(longlong)pcVar8,param_4);
  return uVar4;
}




ulonglong FUN_180004510(longlong param_1,int param_2,longlong param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar6 = *(ulonglong *)(param_1 + 0x68);
  uVar11 = 0;
  if ((*(int *)(param_1 + 0x268) == 0xb) ||
     (uVar10 = param_4,
     (ulonglong)*(uint *)(param_1 + 0x4c) < (*(uint *)(param_1 + 0x48) >> 2) * 3 + param_4)) {
    uVar7 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x4c)) + (int)param_4;
    *(undefined4 *)(param_1 + 0x268) = 0xb;
    if (uVar7 < 0x400) {
      uVar7 = 0x400;
    }
    uVar10 = 0;
    iVar2 = FUN_180004770(param_1,uVar7,'\0',(undefined4 *)0x0);
    if (iVar2 != 0) {
      return (longlong)iVar2;
    }
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  do {
    iVar2 = FUN_1800261c0(uVar6);
  } while (0 < iVar2);
  if (((iVar2 + 0x80000000U & 0x80000000) == 0) && (iVar2 != -0x25)) {
    iVar2 = FUN_180018820(uVar6,iVar2,0x18002e500,uVar10);
    return (longlong)iVar2;
  }
  plVar4 = (longlong *)FUN_180018d50(uVar6 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    do {
      if (param_4 <= uVar11) break;
      plVar5 = (longlong *)FUN_180018d70(plVar4);
      if (4 < (ulonglong)plVar4[4]) {
        iVar3 = FUN_180018ea0((undefined1 *)(plVar4[3] + 1));
        *(int *)(param_1 + 0x26c) = iVar3;
        cVar1 = *(char *)plVar4[3];
        if (param_2 == 0) {
          if (cVar1 == '^') {
            if (*(int *)(param_1 + 0x30) == iVar3) {
LAB_18000469c:
              uVar8 = param_4 - uVar11;
              uVar9 = plVar4[4] - plVar4[5];
              _Size = uVar9;
              if (uVar8 < uVar9) {
                _Size = uVar8;
              }
              memcpy((void *)(param_3 + uVar11),(void *)(plVar4[3] + plVar4[5]),_Size);
              plVar4[5] = plVar4[5] + _Size;
              uVar11 = uVar11 + _Size;
              if (uVar9 <= uVar8) {
                FUN_180018d80(plVar4);
                (**(code **)(uVar6 + 0x18))(plVar4[3],uVar6);
                (**(code **)(uVar6 + 0x18))(plVar4,uVar6);
              }
            }
          }
          else if (((cVar1 == '_') && (*(int *)(param_1 + 0x30) == iVar3)) &&
                  (*(char *)(param_1 + 0x56) == '\x02')) goto LAB_18000469c;
        }
        else if (((cVar1 == '_') && (*(int *)(param_1 + 0x30) == iVar3)) &&
                ((8 < (ulonglong)plVar4[4] &&
                 (iVar3 = FUN_180018ea0((char *)plVar4[3] + 5), param_2 == iVar3))))
        goto LAB_18000469c;
      }
      plVar4 = plVar5;
    } while (plVar5 != (longlong *)0x0);
    if (uVar11 != 0) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) - uVar11;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)uVar11;
      return uVar11;
    }
  }
  if (((*(char *)(param_1 + 0x55) == '\0') && (*(char *)(param_1 + 0x54) == '\0')) &&
     (iVar2 == -0x25)) {
    iVar2 = FUN_180018820(uVar6,0xffffffdb,0x18002e510,uVar10);
    uVar6 = (ulonglong)iVar2;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}




undefined4 FUN_180004770(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 600) == 0) {
    if ((param_3 == '\0') && (uVar2 = *(int *)(param_1 + 0x58) + param_2, uVar2 < 0x400)) {
      *(uint *)(param_1 + 0x58) = uVar2;
      return 0;
    }
    if ((param_2 == 0) && (*(int *)(param_1 + 0x58) == 0)) {
      return 0;
    }
    param_2 = param_2 + *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x25c) = 0x5d;
    FUN_180018d00((undefined1 *)(param_1 + 0x25d),*(undefined4 *)(param_1 + 0x44));
    FUN_180018d00((undefined1 *)(param_1 + 0x261),param_2);
    *(undefined4 *)(param_1 + 600) = 2;
  }
  uVar3 = 0;
  uVar2 = FUN_180026710(*(ulonglong *)(param_1 + 0x68),(void *)(param_1 + 0x25c),9,(void *)0x0,0);
  if (uVar2 == 0xffffffdb) {
    FUN_180018820(*(longlong *)(param_1 + 0x68),0xffffffdb,0x18002e498,uVar3);
    return 0xffffffdb;
  }
  if (uVar2 == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
    *(undefined4 *)(param_1 + 600) = 0;
    return 0;
  }
  *(int *)(param_1 + 0x58) = param_2;
  uVar1 = FUN_180018820(*(longlong *)(param_1 + 0x68),0xfffffff9,0x18002e4c0,uVar3);
  return uVar1;
}




size_t FUN_180004890(longlong param_1,int param_2,void *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  size_t *psVar7;
  ulonglong uVar8;
  char *local_res8;
  
  uVar2 = *(ulonglong *)(param_1 + 0x68);
  uVar8 = 0x7fbc;
  if (param_4 < 0x7fbd) {
    uVar8 = param_4;
  }
  if (*(int *)(param_1 + 0x270) == 0) {
    local_res8 = (char *)(param_1 + 0x274);
    if (*(char *)(param_1 + 0x40) != '\0') {
      iVar3 = FUN_180018820(uVar2,0xffffffe6,0x18002e520,param_4);
      return (longlong)iVar3;
    }
    if (*(char *)(param_1 + 0x41) != '\0') {
      iVar3 = FUN_180018820(uVar2,0xffffffe5,0x18002e548,param_4);
      return (longlong)iVar3;
    }
    do {
      iVar3 = FUN_1800261c0(uVar2);
    } while (0 < iVar3);
    if (((iVar3 + 0x80000000U & 0x80000000) == 0) && (iVar3 != -0x25)) {
      iVar3 = FUN_180018820(*(longlong *)(param_1 + 0x68),iVar3,0x18002e580,param_4);
      return (longlong)iVar3;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar6 = 0;
      *(undefined4 *)(uVar2 + 0x25c) = 1;
      if (iVar3 == -0x25) {
        iVar6 = -0x25;
      }
      return (longlong)iVar6;
    }
    puVar1 = (ulonglong *)(param_1 + 0x290);
    *puVar1 = uVar8;
    *local_res8 = (param_2 != 0) + '^';
    local_res8 = local_res8 + 1;
    FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
    if (param_2 != 0) {
      FUN_180019150((longlong *)&local_res8,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0x38);
    uVar8 = *puVar1;
    if (uVar4 < uVar8) {
      *puVar1 = (ulonglong)uVar4;
      uVar8 = (ulonglong)uVar4;
    }
    uVar4 = *(uint *)(param_1 + 0x3c);
    if (uVar4 < uVar8) {
      *puVar1 = (ulonglong)uVar4;
      uVar8 = (ulonglong)uVar4;
    }
    FUN_180019150((longlong *)&local_res8,(int)uVar8);
    *(undefined4 *)(param_1 + 0x270) = 2;
    *(char **)(param_1 + 0x288) = local_res8 + (-0x274 - param_1);
  }
  else if (*(int *)(param_1 + 0x270) != 2) {
    return 0xffffffffffffffde;
  }
  psVar7 = (size_t *)(param_1 + 0x290);
  uVar4 = FUN_180026710(uVar2,(void *)(param_1 + 0x274),*(size_t *)(param_1 + 0x288),param_3,*psVar7
                       );
  if (uVar4 == 0xffffffdb) {
    iVar3 = FUN_180018820(uVar2,0xffffffdb,0x18002e5a8,param_3);
    sVar5 = (size_t)iVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (uVar4 == 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *(int *)psVar7;
      sVar5 = *psVar7;
    }
    else {
      iVar3 = FUN_180018820(uVar2,uVar4,0x18002e5a8,param_3);
      sVar5 = (size_t)iVar3;
    }
  }
  return sVar5;
}




undefined4 FUN_180004aa0(longlong param_1,void *param_2,int param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 *local_res8;
  char *local_res20;
  longlong local_48 [2];
  
  uVar3 = *(ulonglong *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x2b8);
  if (iVar2 == 0) {
    if (0x1a < param_3) {
      pcVar7 = "request_str length too large";
      uVar4 = 0xffffffde;
      goto LAB_180004c7b;
    }
    *(longlong *)(param_1 + 0x2e0) = (longlong)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined1 *)(param_1 + 700) = 0x62;
    local_res8 = (undefined1 *)(param_1 + 0x2bd);
    FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
    FUN_1800190c0((longlong *)&local_res8,param_2,(longlong)param_3);
    *local_res8 = 1;
    local_res8 = local_res8 + 1;
    *(undefined4 *)(param_1 + 0x2b8) = 2;
LAB_180004b7c:
    param_4 = (longlong *)0x0;
    uVar4 = FUN_180026710(uVar3,(void *)(param_1 + 700),*(size_t *)(param_1 + 0x2e0),(void *)0x0,0);
    if (uVar4 == 0xffffffdb) {
      FUN_180018820(uVar3,0xffffffdb,0x18002e0e8,param_4);
      return 0xffffffdb;
    }
    if (uVar4 != 0) {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      pcVar7 = "Unable to send auth-agent request";
      goto LAB_180004c7b;
    }
    FUN_180018d00((undefined1 *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x2b8) = 3;
LAB_180004bf5:
    param_4 = local_48;
    uVar6 = FUN_18001a320(uVar3,"cd",&local_res20,param_4,1,(void *)(param_1 + 0x2e8),4,
                          (longlong *)(param_1 + 0x2f0));
    if ((int)uVar6 == -0x25) {
      return 0xffffffdb;
    }
    if ((int)uVar6 != 0) {
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      pcVar7 = "Failed to request auth-agent";
      uVar4 = 0xfffffff2;
      goto LAB_180004c7b;
    }
    cVar1 = *local_res20;
    (**(code **)(uVar3 + 0x18))(local_res20,uVar3);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (cVar1 == 'c') {
      return 0;
    }
  }
  else {
    if (iVar2 == 2) goto LAB_180004b7c;
    if (iVar2 == 3) goto LAB_180004bf5;
  }
  pcVar7 = "Unable to complete request for auth-agent";
  uVar4 = 0xffffffea;
LAB_180004c7b:
  uVar5 = FUN_180018820(uVar3,uVar4,(longlong)pcVar7,param_4);
  return uVar5;
}




void FUN_180004ca0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStackY_48 [32];
  undefined1 local_18;
  undefined1 local_17 [7];
  ulonglong local_10;
  
  local_10 = DAT_18003b280 ^ (ulonglong)auStackY_48;
  uVar1 = *(ulonglong *)(param_1 + 0x68);
  local_18 = 0x60;
  FUN_180018d00(local_17,*(undefined4 *)(param_1 + 0x44));
  uVar3 = 0;
  uVar2 = FUN_180026710(uVar1,&local_18,5,(void *)0x0,0);
  if (uVar2 == 0xffffffdb) {
    FUN_180018820(uVar1,0xffffffdb,0x18002e5c8,uVar3);
  }
  else if (uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  else {
    FUN_180018820(uVar1,0xfffffff9,0x18002e5e0,uVar3);
  }
  FUN_18002af30(local_10 ^ (ulonglong)auStackY_48);
  return;
}




uint libssh2_channel_close(char *param_1,undefined8 param_2,char *param_3,char *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  __time64_t _Var4;
  
                    /* 0x4d50  13  libssh2_channel_close */
  if (param_1 == (char *)0x0) {
    return 0xffffffd9;
  }
  _Var4 = _time64((__time64_t *)0x0);
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (param_1[0x40] != '\0') {
      param_1[0x298] = '\0';
      param_1[0x299] = '\0';
      param_1[0x29a] = '\0';
      param_1[0x29b] = '\0';
      return 0;
    }
    uVar3 = 0;
    if ((param_1[0x41] == '\0') && (uVar3 = FUN_180004ca0((longlong)param_1), uVar3 != 0)) {
      if (uVar3 != 0xffffffdb) {
        param_3 = "Unable to send EOF, but closing channel anyway";
        FUN_180018820(uVar2,uVar3,0x18002e658,param_4);
        goto LAB_180004dce;
      }
    }
    else {
LAB_180004dce:
      if (*(int *)(param_1 + 0x298) == 0) {
        param_1[0x29c] = 'a';
        FUN_180018d00(param_1 + 0x29d,*(undefined4 *)(param_1 + 0x44));
        param_1[0x298] = '\x02';
        param_1[0x299] = '\0';
        param_1[0x29a] = '\0';
        param_1[0x29b] = '\0';
LAB_180004dff:
        param_4 = (char *)0x0;
        param_3 = (char *)0x5;
        uVar3 = FUN_180026710(uVar2,param_1 + 0x29c,5,(void *)0x0,0);
        if (uVar3 == 0xffffffdb) {
          param_3 = "Would block sending close-channel";
          FUN_180018820(uVar2,0xffffffdb,0x18002e688,param_4);
          goto LAB_180004ec0;
        }
        if (uVar3 == 0) {
          param_1[0x298] = '\x03';
          param_1[0x299] = '\0';
          param_1[0x29a] = '\0';
          param_1[0x29b] = '\0';
        }
        else {
          param_3 = "Unable to send close-channel request, but closing anyway";
          FUN_180018820(uVar2,uVar3,0x18002e6b0,param_4);
        }
      }
      else if (*(int *)(param_1 + 0x298) == 2) goto LAB_180004dff;
      if (*(int *)(param_1 + 0x298) == 3) {
        cVar1 = param_1[0x54];
        while ((cVar1 == '\0' && (uVar3 == 0))) {
          if (*(int *)(uVar2 + 600) == -1) goto LAB_180004e92;
          uVar3 = FUN_1800261c0(uVar2);
          cVar1 = param_1[0x54];
        }
      }
      if (uVar3 != 0xffffffdb) {
LAB_180004e92:
        param_1[0x40] = '\x01';
        if (*(code **)(param_1 + 0x78) != (code *)0x0) {
          param_4 = param_1 + 0x70;
          param_3 = param_1;
          (**(code **)(param_1 + 0x78))(uVar2,uVar2);
        }
        param_1[0x298] = '\0';
        param_1[0x299] = '\0';
        param_1[0x29a] = '\0';
        param_1[0x29b] = '\0';
      }
      if (-1 < (int)uVar3) {
        uVar3 = 0;
      }
      if (uVar3 != 0xffffffdb) {
        return uVar3;
      }
    }
LAB_180004ec0:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return uVar3;
    }
    uVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var4,param_3,param_4);
    if (uVar3 != 0) {
      return uVar3;
    }
  } while( true );
}




longlong libssh2_channel_direct_streamlocal_ex
                   (ulonglong param_1,void *param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  char *pcVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong lVar4;
  
                    /* 0x4f10  14  libssh2_channel_direct_streamlocal_ex */
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = param_4;
  _Var2 = _time64((__time64_t *)0x0);
  do {
    if (*(int *)(param_1 + 0x11b14) == 0) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (*(char *)((longlong)param_2 + lVar3) != '\0');
      *(longlong *)(param_1 + 0x11b20) = lVar3;
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(lVar3 + (longlong)param_3) != '\0');
      *(longlong *)(param_1 + 0x11b28) = lVar3;
      lVar3 = lVar3 + lVar4 + 0xd;
      *(longlong *)(param_1 + 0x11b30) = lVar3;
      local_res8 = (**(code **)(param_1 + 8))(lVar3,param_1);
      *(longlong *)(param_1 + 0x11b18) = local_res8;
      if (local_res8 != 0) {
        FUN_1800190c0(&local_res8,param_2,*(ulonglong *)(param_1 + 0x11b20));
        FUN_1800190c0(&local_res8,param_3,*(ulonglong *)(param_1 + 0x11b28));
        FUN_180019150(&local_res8,(int)param_4);
        goto LAB_180005016;
      }
      pcVar5 = "Unable to allocate memory for direct-streamlocal connection";
      FUN_180018820(param_1,0xfffffffa,0x18002dd10,uVar6);
      lVar3 = 0;
    }
    else {
LAB_180005016:
      uVar6 = 0x200000;
      pcVar5 = (char *)0x1e;
      lVar3 = FUN_180003c00(param_1,"direct-streamlocal@openssh.com",0x1e,(longlong *)0x200000,
                            0x8000,*(longlong **)(param_1 + 0x11b18),*(size_t *)(param_1 + 0x11b30))
      ;
      if ((lVar3 == 0) && (iVar1 = libssh2_session_last_errno(param_1), iVar1 == -0x25)) {
        *(undefined4 *)(param_1 + 0x11b14) = 2;
        lVar3 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x11b14) = 0;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11b18),param_1);
        *(undefined8 *)(param_1 + 0x11b18) = 0;
      }
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,pcVar5,uVar6);
    if (iVar1 != 0) {
      return 0;
    }
  } while( true );
}




longlong libssh2_channel_direct_tcpip_ex
                   (ulonglong param_1,void *param_2,undefined4 param_3,void *param_4,
                   undefined4 param_5)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  char *pcVar5;
  void *pvVar6;
  longlong local_res8;
  longlong lVar4;
  
                    /* 0x50e0  15  libssh2_channel_direct_tcpip_ex */
  if (param_1 == 0) {
    return 0;
  }
  pvVar6 = param_4;
  _Var2 = _time64((__time64_t *)0x0);
  do {
    if (*(int *)(param_1 + 0x11b14) == 0) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (*(char *)((longlong)param_2 + lVar3) != '\0');
      *(longlong *)(param_1 + 0x11b20) = lVar3;
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(lVar3 + (longlong)param_4) != '\0');
      *(longlong *)(param_1 + 0x11b28) = lVar3;
      lVar3 = lVar3 + lVar4 + 0x11;
      *(longlong *)(param_1 + 0x11b30) = lVar3;
      local_res8 = (**(code **)(param_1 + 8))(lVar3,param_1);
      *(longlong *)(param_1 + 0x11b18) = local_res8;
      if (local_res8 != 0) {
        FUN_1800190c0(&local_res8,param_2,*(ulonglong *)(param_1 + 0x11b20));
        FUN_180019150(&local_res8,param_3);
        FUN_1800190c0(&local_res8,param_4,*(ulonglong *)(param_1 + 0x11b28));
        FUN_180019150(&local_res8,param_5);
        goto LAB_180005203;
      }
      pcVar5 = "Unable to allocate memory for direct-tcpip connection";
      FUN_180018820(param_1,0xfffffffa,0x18002dcc8,pvVar6);
      lVar3 = 0;
    }
    else {
LAB_180005203:
      pvVar6 = (void *)0x200000;
      pcVar5 = (char *)0xc;
      lVar3 = FUN_180003c00(param_1,"direct-tcpip",0xc,(longlong *)0x200000,0x8000,
                            *(longlong **)(param_1 + 0x11b18),*(size_t *)(param_1 + 0x11b30));
      if ((lVar3 == 0) && (iVar1 = libssh2_session_last_errno(param_1), iVar1 == -0x25)) {
        *(undefined4 *)(param_1 + 0x11b14) = 2;
        lVar3 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x11b14) = 0;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11b18),param_1);
        *(undefined8 *)(param_1 + 0x11b18) = 0;
      }
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,pcVar5,pvVar6);
    if (iVar1 != 0) {
      return 0;
    }
  } while( true );
}




int libssh2_channel_eof(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
                    /* 0x52e0  16  libssh2_channel_eof */
  if (param_1 == 0) {
    return -0x27;
  }
  puVar3 = (undefined8 *)FUN_180018d50(*(longlong *)(param_1 + 0x68) + 0x218);
  do {
    puVar1 = puVar3;
    if (puVar1 == (undefined8 *)0x0) {
      return (int)*(char *)(param_1 + 0x55);
    }
    puVar3 = (undefined8 *)FUN_180018d70(puVar1);
  } while ((((puVar1[4] == 0) || (1 < (byte)(*(char *)puVar1[3] + 0xa2U))) ||
           ((ulonglong)puVar1[4] < 5)) ||
          (iVar2 = FUN_180018ea0((char *)puVar1[3] + 1), *(int *)(param_1 + 0x30) != iVar2));
  return 0;
}




int libssh2_channel_flush_ex(longlong param_1,int param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  __time64_t _Var6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong *local_res8;
  ulonglong uVar9;
  
                    /* 0x5390  17  libssh2_channel_flush_ex */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var6 = _time64((__time64_t *)0x0);
  do {
    local_res8 = (longlong *)(param_1 + 0x250);
    plVar12 = (longlong *)(param_1 + 0x248);
    plVar10 = (longlong *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x240) == 0) {
      plVar7 = (longlong *)FUN_180018d50(*plVar10 + 0x218);
      *plVar12 = 0;
      *local_res8 = 0;
joined_r0x000180005454:
      plVar4 = plVar7;
      if (plVar4 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_180018d70(plVar4);
        if (plVar4[4] != 0) {
          cVar1 = *(char *)plVar4[3];
          if ((((byte)(cVar1 + 0xa2U) < 2) && (4 < (ulonglong)plVar4[4])) &&
             (iVar5 = FUN_180018ea0((char *)plVar4[3] + 1), iVar5 == *(int *)(param_1 + 0x30))) {
            if (cVar1 == '^') {
              iVar5 = 0;
            }
            else {
              if ((ulonglong)plVar4[4] < 9) {
                param_3 = "Unexpected packet length";
                *(undefined4 *)(param_1 + 0x240) = 0;
                iVar5 = FUN_180018820(*plVar10,0xfffffff2,0x18002e448,param_4);
                goto LAB_180005695;
              }
              iVar5 = FUN_180018ea0((undefined1 *)(plVar4[3] + 5));
            }
            if (param_2 != -2) {
              if (cVar1 == '_') {
                if ((param_2 != -1) && (param_2 != iVar5)) goto joined_r0x000180005454;
              }
              else if ((cVar1 != '^') || (param_2 != 0)) goto joined_r0x000180005454;
            }
            lVar2 = plVar4[4];
            lVar3 = plVar4[5];
            *plVar12 = *plVar12 + lVar2 + -0xd;
            *local_res8 = *local_res8 + (lVar2 - lVar3);
            (**(code **)(*plVar10 + 0x18))(plVar4[3],*plVar10);
            FUN_180018d80(plVar4);
            (**(code **)(*plVar10 + 0x18))(plVar4,*plVar10);
          }
        }
        goto joined_r0x000180005454;
      }
      *(undefined4 *)(param_1 + 0x240) = 2;
    }
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x250);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - (int)*(longlong *)(param_1 + 0x250);
    uVar9 = *(ulonglong *)(param_1 + 0x248);
    if (uVar9 == 0) {
LAB_180005689:
      iVar5 = *(int *)(param_1 + 0x250);
      *(undefined4 *)(param_1 + 0x240) = 0;
LAB_180005695:
      if (iVar5 != -0x25) {
        return iVar5;
      }
    }
    else {
      if (*(int *)(param_1 + 600) == 0) {
        if (((int)uVar9 == 0) && (*(int *)(param_1 + 0x58) == 0)) goto LAB_180005689;
        uVar8 = (int)uVar9 + *(int *)(param_1 + 0x58);
        uVar9 = (ulonglong)uVar8;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x25c) = 0x5d;
        FUN_180018d00((undefined1 *)(param_1 + 0x25d),*(undefined4 *)(param_1 + 0x44));
        FUN_180018d00((undefined1 *)(param_1 + 0x261),uVar8);
        *(undefined4 *)(param_1 + 600) = 2;
      }
      puVar11 = (ulonglong *)(param_1 + 0x68);
      param_4 = 0;
      param_3 = (char *)0x9;
      uVar8 = FUN_180026710(*puVar11,(void *)(param_1 + 0x25c),9,(void *)0x0,0);
      if (uVar8 != 0xffffffdb) {
        if (uVar8 == 0) {
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (int)uVar9;
          *(undefined4 *)(param_1 + 600) = 0;
        }
        else {
          param_3 = "Unable to send transfer-window adjustment packet, deferring";
          *(int *)(param_1 + 0x58) = (int)uVar9;
          iVar5 = FUN_180018820(*puVar11,0xfffffff9,0x18002e4c0,param_4);
          if (iVar5 == -0x25) {
            iVar5 = -0x25;
            goto LAB_1800056a2;
          }
        }
        goto LAB_180005689;
      }
      param_3 = "Would block sending window adjust";
      FUN_180018820(*puVar11,0xffffffdb,0x18002e498,param_4);
      iVar5 = -0x25;
    }
LAB_1800056a2:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return iVar5;
    }
    iVar5 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var6,param_3,param_4);
    if (iVar5 != 0) {
      return iVar5;
    }
  } while( true );
}




longlong *
libssh2_channel_forward_accept(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
                    /* 0x56f0  18  libssh2_channel_forward_accept */
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    do {
      iVar1 = FUN_1800261c0(*(ulonglong *)(param_1 + 0x18));
    } while (0 < iVar1);
    lVar3 = FUN_180018d50(param_1 + 0x30);
    if (lVar3 == 0) {
      param_3 = "Would block waiting for packet";
      if (iVar1 != -0x25) {
        param_3 = "Channel not found";
      }
      uVar5 = 0xffffffdb;
      if (iVar1 != -0x25) {
        uVar5 = 0xffffffe9;
      }
      FUN_180018820(*(longlong *)(param_1 + 0x18),uVar5,(longlong)param_3,param_4);
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)FUN_180018d50(param_1 + 0x30);
      FUN_180018d80(plVar4);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      FUN_180018d20((undefined8 *)(plVar4[0xd] + 0x228),plVar4);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0xac) == 0) {
      return plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      return plVar4;
    }
    iVar1 = libssh2_session_last_errno(*(longlong *)(param_1 + 0x18));
    if (iVar1 != -0x25) break;
    iVar1 = FUN_18001e940(*(ulonglong *)(param_1 + 0x18),_Var2,param_3,param_4);
    if (iVar1 != 0) {
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}




int libssh2_channel_forward_cancel
              (longlong *param_1,ulonglong param_2,char *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char *pcVar10;
  undefined1 *local_res8;
  ulonglong uVar9;
  
                    /* 0x5800  19  libssh2_channel_forward_cancel */
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  uVar4 = _time64((__time64_t *)0x0);
  do {
    uVar1 = param_1[3];
    uVar8 = 0xffffffffffffffff;
    do {
      uVar9 = uVar8;
      uVar8 = uVar9 + 1;
    } while (*(char *)(param_1[4] + uVar8) != '\0');
    pcVar10 = (char *)(uVar9 + 0x23);
    if ((int)param_1[9] == 0) {
      puVar5 = (undefined1 *)(**(code **)(uVar1 + 8))(pcVar10,uVar1);
      if (puVar5 == (undefined1 *)0x0) {
        local_res8 = puVar5;
        FUN_180018820(uVar1,0xfffffffa,0x18002dd78,param_4);
        return -6;
      }
      *puVar5 = 0x50;
      local_res8 = puVar5 + 1;
      FUN_1800190c0((longlong *)&local_res8,"cancel-tcpip-forward",0x14);
      *local_res8 = 0;
      local_res8 = local_res8 + 1;
      FUN_1800190c0((longlong *)&local_res8,(void *)param_1[4],uVar8);
      FUN_180019150((longlong *)&local_res8,(int)param_1[5]);
      *(undefined4 *)(param_1 + 9) = 2;
LAB_1800058f9:
      param_4 = 0;
      uVar2 = FUN_180026710(uVar1,puVar5,(size_t)pcVar10,(void *)0x0,0);
      if (uVar2 != 0xffffffdb) {
        param_3 = pcVar10;
        iVar3 = 0;
        if (uVar2 != 0) {
          param_3 = "Unable to send global-request packet for forward listen request";
          FUN_180018820(uVar1,0xfffffff9,0x18002de10,param_4);
          *(undefined4 *)(param_1 + 9) = 3;
          iVar3 = -7;
        }
        param_2 = uVar1;
        (**(code **)(uVar1 + 0x18))(puVar5);
        *(undefined4 *)(param_1 + 9) = 3;
        goto LAB_18000598c;
      }
      param_3 = "Would block sending forward request";
      FUN_180018820(uVar1,0xffffffdb,0x18002ded0,param_4);
      param_1[10] = (longlong)puVar5;
    }
    else {
      puVar5 = (undefined1 *)param_1[10];
      iVar3 = 0;
      if ((int)param_1[9] == 2) goto LAB_1800058f9;
LAB_18000598c:
      plVar6 = (longlong *)FUN_180018d50((longlong)(param_1 + 6));
      do {
        if (plVar6 == (longlong *)0x0) {
          (**(code **)(uVar1 + 0x18))(param_1[4],uVar1);
          FUN_180018d80(param_1);
          (**(code **)(uVar1 + 0x18))(param_1,uVar1);
          return iVar3;
        }
        plVar7 = (longlong *)FUN_180018d70(plVar6);
        uVar8 = FUN_1800039c0(plVar6,param_2,param_3,param_4);
        plVar6 = plVar7;
      } while ((int)uVar8 != -0x25);
    }
    if (*(int *)(param_1[3] + 0xac) == 0) {
      return -0x25;
    }
    param_2 = uVar4;
    iVar3 = FUN_18001e940(param_1[3],uVar4,param_3,param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
  } while( true );
}




undefined8 *
libssh2_channel_forward_listen_ex
          (ulonglong param_1,char *param_2,char **param_3,ulonglong *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  __time64_t _Var4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  void *_Dst;
  undefined4 uVar8;
  char *_Src;
  char *_Size;
  ulonglong *puVar9;
  undefined1 *local_res8;
  char *local_38;
  ulonglong local_30;
  
                    /* 0x5a30  20  libssh2_channel_forward_listen_ex */
  if (param_1 == 0) {
    return (undefined8 *)0x0;
  }
  _Size = (char *)param_3;
  puVar9 = param_4;
  _Var4 = _time64((__time64_t *)0x0);
  _Src = "0.0.0.0";
  if (param_2 != (char *)0x0) {
    _Src = param_2;
  }
  do {
    iVar3 = *(int *)(param_1 + 0x11b38);
    iVar2 = (int)param_3;
    if (iVar3 == 0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (_Src[lVar5] != '\0');
      *(int *)(param_1 + 0x11b48) = (int)lVar5;
      *(int *)(param_1 + 0x11b4c) = (int)lVar5 + 0x1b;
      *(longlong *)(param_1 + 0x11b50) = 0;
      local_res8 = (undefined1 *)(**(code **)(param_1 + 8))(*(int *)(param_1 + 0x11b4c),param_1);
      *(undefined1 **)(param_1 + 0x11b40) = local_res8;
      if (local_res8 != (undefined1 *)0x0) {
        *local_res8 = 0x50;
        local_res8 = local_res8 + 1;
        FUN_1800190c0((longlong *)&local_res8,"tcpip-forward",0xd);
        *local_res8 = 1;
        local_res8 = local_res8 + 1;
        FUN_1800190c0((longlong *)&local_res8,_Src,(ulonglong)*(uint *)(param_1 + 0x11b48));
        FUN_180019150((longlong *)&local_res8,iVar2);
        *(undefined4 *)(param_1 + 0x11b38) = 2;
LAB_180005b88:
        puVar7 = (undefined8 *)(param_1 + 0x11b40);
        puVar9 = (ulonglong *)0x0;
        uVar1 = FUN_180026710(param_1,(void *)*puVar7,(ulonglong)*(uint *)(param_1 + 0x11b4c),
                              (void *)0x0,0);
        if (uVar1 != 0xffffffdb) {
          if (uVar1 == 0) {
            (**(code **)(param_1 + 0x18))(*puVar7,param_1);
            *puVar7 = 0;
            *(undefined4 *)(param_1 + 0x11b38) = 3;
            goto LAB_180005c07;
          }
          _Size = "Unable to send global-request packet for forward listen request";
          FUN_180018820(param_1,0xfffffff9,0x18002de10,puVar9);
          (**(code **)(param_1 + 0x18))(*puVar7,param_1);
          *puVar7 = 0;
          goto LAB_180005d86;
        }
        _Size = "Would block sending global-request packet for forward listen request";
        FUN_180018820(param_1,0xffffffdb,0x18002ddc0,puVar9);
        goto LAB_180005d8c;
      }
      _Size = "Unable to allocate memory for setenv packet";
      FUN_180018820(param_1,0xfffffffa,0x18002dd78,puVar9);
      puVar7 = (undefined8 *)0x0;
    }
    else {
      if (iVar3 == 2) goto LAB_180005b88;
      if (iVar3 == 3) {
LAB_180005c07:
        puVar9 = &local_30;
        _Size = (char *)&local_38;
        uVar6 = FUN_18001a320(param_1,"QR",(undefined8 *)_Size,(longlong *)puVar9,0,(void *)0x0,0,
                              (longlong *)(param_1 + 0x11b50));
        if ((int)uVar6 == -0x25) {
          _Size = "Would block";
          FUN_180018820(param_1,0xffffffdb,0x18002dbb0,puVar9);
          goto LAB_180005d8c;
        }
        if (((int)uVar6 == 0) && (local_30 != 0)) {
          if (*local_38 == 'Q') {
            puVar7 = (undefined8 *)FUN_180018690(param_1,0x60);
            if (puVar7 == (undefined8 *)0x0) {
              _Size = "Unable to allocate memory for listener queue";
              FUN_180018820(param_1,0xfffffffa,0x18002de58,puVar9);
            }
            else {
              _Dst = (void *)(**(code **)(param_1 + 8))(*(int *)(param_1 + 0x11b48) + 1,param_1);
              puVar7[4] = _Dst;
              if (_Dst == (void *)0x0) {
                _Size = "Unable to allocate memory for listener queue";
                FUN_180018820(param_1,0xfffffffa,0x18002de58,puVar9);
                (**(code **)(param_1 + 0x18))(puVar7,param_1);
                puVar7 = (undefined8 *)0x0;
              }
              else {
                puVar7[3] = param_1;
                _Size = (char *)(ulonglong)*(uint *)(param_1 + 0x11b48);
                memcpy(_Dst,_Src,(size_t)_Size);
                *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x11b48) + puVar7[4]) = 0;
                if ((4 < local_30) && (iVar2 == 0)) {
                  iVar2 = FUN_180018ea0(local_38 + 1);
                }
                *(int *)(puVar7 + 5) = iVar2;
                *(undefined4 *)((longlong)puVar7 + 0x44) = param_5;
                *(undefined4 *)(puVar7 + 8) = 0;
                FUN_180018d20((undefined8 *)(param_1 + 0x240),puVar7);
                if (param_4 != (ulonglong *)0x0) {
                  *(undefined4 *)param_4 = *(undefined4 *)(puVar7 + 5);
                }
              }
            }
            (**(code **)(param_1 + 0x18))(local_38,param_1);
            *(undefined4 *)(param_1 + 0x11b38) = 0;
            goto LAB_180005d8f;
          }
          if (*local_38 != 'R') goto LAB_180005d86;
          (**(code **)(param_1 + 0x18))(local_38,param_1);
          _Size = "Unable to complete request for forward-listen";
          uVar8 = 0xffffffe0;
        }
        else {
          _Size = "Unknown";
          uVar8 = 0xfffffff2;
        }
        FUN_180018820(param_1,uVar8,(longlong)_Size,puVar9);
      }
LAB_180005d86:
      *(undefined4 *)(param_1 + 0x11b38) = 0;
LAB_180005d8c:
      puVar7 = (undefined8 *)0x0;
    }
LAB_180005d8f:
    if ((((*(int *)(param_1 + 0xac) == 0) || (puVar7 != (undefined8 *)0x0)) ||
        (iVar3 = libssh2_session_last_errno(param_1), iVar3 != -0x25)) ||
       (iVar3 = FUN_18001e940(param_1,_Var4,_Size,puVar9), iVar3 != 0)) {
      return puVar7;
    }
  } while( true );
}




ulonglong libssh2_channel_free
                    (longlong *param_1,__time64_t param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong local_res18;
  
                    /* 0x5df0  21  libssh2_channel_free */
  if (param_1 == (longlong *)0x0) {
    return 0xffffffd9;
  }
  _Var3 = _time64((__time64_t *)0x0);
  do {
    lVar1 = param_1[0xd];
    if (*(int *)((longlong)param_1 + 0x2ac) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2ac) = 2;
    }
    if ((((char)param_1[8] != '\0') || (*(int *)(lVar1 + 600) != 0)) ||
       (uVar4 = FUN_180003670((longlong)param_1,param_2,param_3,param_4), (int)uVar4 != -0x25)) {
      *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
      if (param_1[5] != 0) {
        (**(code **)(lVar1 + 0x18))(param_1[5],lVar1);
      }
      FUN_180018d00(local_res8,(int)param_1[6]);
      while ((uVar5 = FUN_180019d90(lVar1,'^',&local_res10,&local_res18,1,local_res8,4),
             -1 < (int)uVar5 ||
             (uVar5 = FUN_180019d90(lVar1,'_',&local_res10,&local_res18,1,local_res8,4),
             -1 < (int)uVar5))) {
        (**(code **)(lVar1 + 0x18))(local_res10,lVar1);
      }
      if (param_1[3] != 0) {
        (**(code **)(lVar1 + 0x18))(param_1[3],lVar1);
      }
      FUN_180018d80(param_1);
      if (param_1[0x11] != 0) {
        (**(code **)(lVar1 + 0x18))(param_1[0x11],lVar1);
      }
      if (param_1[0x3f] != 0) {
        (**(code **)(lVar1 + 0x18))(param_1[0x3f],lVar1);
      }
      if (param_1[0x44] != 0) {
        (**(code **)(lVar1 + 0x18))(param_1[0x44],lVar1);
      }
      (**(code **)(lVar1 + 0x18))(param_1,lVar1);
      return 0;
    }
    if (*(int *)(param_1[0xd] + 0xac) == 0) {
      return uVar4 & 0xffffffff;
    }
    param_2 = _Var3;
    uVar2 = FUN_18001e940(param_1[0xd],_Var3,param_3,param_4);
  } while (uVar2 == 0);
  return (ulonglong)uVar2;
}




undefined4
libssh2_channel_get_exit_signal
          (longlong param_1,longlong *param_2,size_t *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  void *_Dst;
  size_t _Size;
  undefined8 *puVar4;
  size_t sVar3;
  
                    /* 0x5f80  22  libssh2_channel_get_exit_signal */
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      if (param_2 != (longlong *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (size_t *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      _Size = 0xffffffffffffffff;
      do {
        sVar3 = _Size;
        _Size = sVar3 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x28) + _Size) != '\0');
      if (param_2 != (longlong *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0x68);
        puVar4 = param_4;
        _Dst = (void *)(**(code **)(lVar1 + 8))(sVar3 + 2,lVar1);
        *param_2 = (longlong)_Dst;
        if (_Dst == (void *)0x0) {
          uVar2 = FUN_180018820(lVar1,0xfffffffa,0x18002e468,puVar4);
          return uVar2;
        }
        memcpy(_Dst,*(void **)(param_1 + 0x28),_Size);
        *(undefined1 *)(_Size + *param_2) = 0;
      }
      if (param_3 != (size_t *)0x0) {
        *param_3 = _Size;
      }
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
    }
  }
  return 0;
}




undefined4 libssh2_channel_get_exit_status(longlong param_1)

{
                    /* 0x6090  23  libssh2_channel_get_exit_status */
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x24);
}




void libssh2_channel_handle_extended_data(longlong param_1,undefined1 param_2)

{
                    /* 0x60a0  24  libssh2_channel_handle_extended_data */
  if (param_1 != 0) {
    _time64((__time64_t *)0x0);
    if (*(int *)(param_1 + 0x2b0) == 0) {
      *(undefined1 *)(param_1 + 0x56) = param_2;
    }
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  return;
}




undefined8 libssh2_channel_handle_extended_data2(longlong param_1,undefined1 param_2)

{
                    /* 0x60e0  25  libssh2_channel_handle_extended_data2 */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  _time64((__time64_t *)0x0);
  if (*(int *)(param_1 + 0x2b0) == 0) {
    *(undefined1 *)(param_1 + 0x56) = param_2;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  return 0;
}




longlong libssh2_channel_open_ex
                   (ulonglong param_1,void *param_2,uint param_3,ulonglong param_4,
                   undefined4 param_5,longlong *param_6,uint param_7)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
                    /* 0x6130  26  libssh2_channel_open_ex */
  if (param_1 == 0) {
    return 0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  do {
    plVar5 = (longlong *)(param_4 & 0xffffffff);
    uVar4 = (ulonglong)param_3;
    lVar3 = FUN_180003c00(param_1,param_2,param_3,plVar5,param_5,param_6,(ulonglong)param_7);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,uVar4,plVar5);
  } while (iVar1 == 0);
  return 0;
}




ulonglong libssh2_channel_process_startup
                    (longlong param_1,void *param_2,ulonglong param_3,longlong *param_4,uint param_5
                    )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined1 *local_res8;
  void *local_res10;
  longlong local_58;
  char *local_50;
  __time64_t local_48;
  
                    /* 0x6210  27  libssh2_channel_process_startup */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  plVar8 = param_4;
  local_res10 = param_2;
  local_48 = _time64((__time64_t *)0x0);
  do {
    iVar3 = *(int *)(param_1 + 0x218);
    uVar5 = *(ulonglong *)(param_1 + 0x68);
    if (iVar3 == 0x11) {
      pcVar7 = "Channel can not be reused";
      uVar2 = 0xffffffd9;
LAB_18000646c:
      iVar3 = FUN_180018820(uVar5,uVar2,(longlong)pcVar7,plVar8);
      uVar4 = CONCAT44(extraout_var,iVar3);
      if (iVar3 != -0x25) {
        return uVar4;
      }
    }
    else {
      if (iVar3 != 0) {
        if (iVar3 == 2) goto LAB_180006367;
        if (iVar3 == 3) {
LAB_1800063f5:
          plVar8 = &local_58;
          pcVar7 = (char *)&local_50;
          uVar4 = FUN_18001a320(uVar5,"cd",(undefined8 *)pcVar7,plVar8,1,(void *)(param_1 + 0x230),4
                                ,(longlong *)(param_1 + 0x238));
          uVar2 = (uint)uVar4;
          if (uVar2 == 0xffffffdb) goto LAB_180006479;
          if ((uVar2 != 0) || (local_58 == 0)) {
            *(undefined4 *)(param_1 + 0x218) = 0x11;
            pcVar7 = "Failed waiting for channel success";
            goto LAB_18000646c;
          }
          cVar1 = *local_50;
          (**(code **)(uVar5 + 0x18))(local_50,uVar5);
          *(undefined4 *)(param_1 + 0x218) = 0x11;
          if (cVar1 == 'c') {
            return 0;
          }
        }
        pcVar7 = "Unable to complete request for channel-process-startup";
        uVar2 = 0xffffffea;
        goto LAB_18000646c;
      }
      *(ulonglong *)(param_1 + 0x228) = (param_3 & 0xffffffff) + 10;
      *(undefined8 *)(param_1 + 0x238) = 0;
      if (param_4 != (longlong *)0x0) {
        *(longlong *)(param_1 + 0x228) = *(longlong *)(param_1 + 0x228) + 4;
      }
      local_res8 = (undefined1 *)(**(code **)(uVar5 + 8))(*(undefined8 *)(param_1 + 0x228),uVar5);
      *(undefined1 **)(param_1 + 0x220) = local_res8;
      if (local_res8 == (undefined1 *)0x0) {
        pcVar7 = "Unable to allocate memory for channel-process request";
        uVar2 = 0xfffffffa;
        local_res8 = (undefined1 *)0x0;
        goto LAB_18000646c;
      }
      *local_res8 = 0x62;
      local_res8 = local_res8 + 1;
      FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_res8,param_2,param_3 & 0xffffffff);
      *local_res8 = 1;
      local_res8 = local_res8 + 1;
      if (param_4 != (longlong *)0x0) {
        FUN_180019150((longlong *)&local_res8,param_5);
      }
      *(undefined4 *)(param_1 + 0x218) = 2;
LAB_180006367:
      puVar6 = (undefined8 *)(param_1 + 0x220);
      plVar8 = param_4;
      uVar2 = FUN_180026710(uVar5,(void *)*puVar6,*(size_t *)(param_1 + 0x228),param_4,
                            (ulonglong)param_5);
      if (uVar2 != 0xffffffdb) {
        (**(code **)(uVar5 + 0x18))(*puVar6,uVar5);
        *puVar6 = 0;
        if (uVar2 == 0) {
          FUN_180018d00((undefined1 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x30));
          *(undefined4 *)(param_1 + 0x218) = 3;
          goto LAB_1800063f5;
        }
        *(undefined4 *)(param_1 + 0x218) = 0x11;
        pcVar7 = "Unable to send channel request";
        goto LAB_18000646c;
      }
      pcVar7 = "Would block sending channel request";
      FUN_180018820(uVar5,0xffffffdb,0x18002e3a0,plVar8);
      uVar4 = 0xffffffdb;
    }
LAB_180006479:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return uVar4;
    }
    uVar5 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),local_48,pcVar7,plVar8);
    param_2 = local_res10;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  } while( true );
}




ulonglong libssh2_channel_read_ex(longlong param_1,int param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
                    /* 0x64e0  28  libssh2_channel_read_ex */
  if (param_1 == 0) {
    return 0xffffffffffffffd9;
  }
  if (param_4 <= *(uint *)(param_1 + 0x4c)) {
LAB_180006627:
    _Var2 = _time64((__time64_t *)0x0);
    while( true ) {
      lVar6 = param_3;
      uVar8 = param_4;
      uVar3 = FUN_180004510(param_1,param_2,param_3,param_4);
      if (uVar3 != 0xffffffffffffffdb) {
        return uVar3;
      }
      if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) break;
      iVar4 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var2,lVar6,uVar8);
      if ((longlong)iVar4 != 0) {
        return (longlong)iVar4;
      }
    }
    return 0xffffffffffffffdb;
  }
  _Var2 = _time64((__time64_t *)0x0);
  do {
    iVar4 = (int)param_4;
    if (*(int *)(param_1 + 600) == 0) {
      if ((iVar4 == 0) && (*(int *)(param_1 + 0x58) == 0)) goto LAB_180006627;
      iVar4 = iVar4 + *(int *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 0x25c) = 0x5d;
      FUN_180018d00((undefined1 *)(param_1 + 0x25d),*(undefined4 *)(param_1 + 0x44));
      FUN_180018d00((undefined1 *)(param_1 + 0x261),iVar4);
      *(undefined4 *)(param_1 + 600) = 2;
    }
    uVar7 = 0;
    uVar1 = FUN_180026710(*(ulonglong *)(param_1 + 0x68),(void *)(param_1 + 0x25c),9,(void *)0x0,0);
    if (uVar1 == 0xffffffdb) {
      pcVar5 = "Would block sending window adjust";
      FUN_180018820(*(longlong *)(param_1 + 0x68),0xffffffdb,0x18002e498,uVar7);
    }
    else {
      if (uVar1 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
        *(undefined4 *)(param_1 + 600) = 0;
        goto LAB_180006627;
      }
      pcVar5 = "Unable to send transfer-window adjustment packet, deferring";
      *(int *)(param_1 + 0x58) = iVar4;
      iVar4 = FUN_180018820(*(longlong *)(param_1 + 0x68),0xfffffff9,0x18002e4c0,uVar7);
      if (iVar4 != -0x25) goto LAB_180006627;
    }
    if ((*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) ||
       (iVar4 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var2,pcVar5,uVar7), iVar4 != 0))
    goto LAB_180006627;
  } while( true );
}




int libssh2_channel_receive_window_adjust(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  __time64_t _Var2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  
                    /* 0x6680  29  libssh2_channel_receive_window_adjust */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var2 = _time64((__time64_t *)0x0);
  while (iVar1 = *(int *)(param_1 + 0x4c), iVar4 = param_2, *(int *)(param_1 + 600) != 0) {
LAB_180006751:
    puVar5 = (ulonglong *)(param_1 + 0x68);
    uVar7 = 0;
    uVar3 = FUN_180026710(*puVar5,(void *)(param_1 + 0x25c),9,(void *)0x0,0);
    if (uVar3 == 0xffffffdb) {
      pcVar6 = "Would block sending window adjust";
      FUN_180018820(*puVar5,0xffffffdb,0x18002e498,uVar7);
      iVar4 = -0x25;
    }
    else {
      if (uVar3 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
        *(undefined4 *)(param_1 + 600) = 0;
        goto LAB_1800067db;
      }
      pcVar6 = "Unable to send transfer-window adjustment packet, deferring";
      *(int *)(param_1 + 0x58) = iVar4;
      iVar4 = FUN_180018820(*puVar5,0xfffffff9,0x18002e4c0,uVar7);
      if (iVar4 != -0x25) goto LAB_1800067dd;
    }
    if ((*(int *)(*puVar5 + 0xac) == 0) ||
       (iVar4 = FUN_18001e940(*puVar5,_Var2,pcVar6,uVar7), iVar4 != 0)) goto LAB_1800067dd;
  }
  if ((param_3 == '\0') && (uVar3 = *(int *)(param_1 + 0x58) + param_2, uVar3 < 0x400)) {
    *(uint *)(param_1 + 0x58) = uVar3;
  }
  else if ((param_2 != 0) || (*(int *)(param_1 + 0x58) != 0)) {
    iVar4 = *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar4 = iVar4 + param_2;
    *(undefined1 *)(param_1 + 0x25c) = 0x5d;
    FUN_180018d00((undefined1 *)(param_1 + 0x25d),*(undefined4 *)(param_1 + 0x44));
    FUN_180018d00((undefined1 *)(param_1 + 0x261),iVar4);
    *(undefined4 *)(param_1 + 600) = 2;
    goto LAB_180006751;
  }
LAB_1800067db:
  iVar4 = 0;
LAB_1800067dd:
  if (iVar4 != 0) {
    iVar1 = iVar4;
  }
  return iVar1;
}




int libssh2_channel_receive_window_adjust2
              (longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  __time64_t _Var1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
                    /* 0x6810  30  libssh2_channel_receive_window_adjust2 */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var1 = _time64((__time64_t *)0x0);
  do {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0x4c);
    }
    iVar3 = param_2;
    if (*(int *)(param_1 + 600) == 0) {
      if ((param_3 == '\0') && (uVar2 = *(int *)(param_1 + 0x58) + param_2, uVar2 < 0x400)) {
        *(uint *)(param_1 + 0x58) = uVar2;
        return 0;
      }
      if ((param_2 == 0) && (*(int *)(param_1 + 0x58) == 0)) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar3 = iVar3 + param_2;
      *(undefined1 *)(param_1 + 0x25c) = 0x5d;
      FUN_180018d00((undefined1 *)(param_1 + 0x25d),*(undefined4 *)(param_1 + 0x44));
      FUN_180018d00((undefined1 *)(param_1 + 0x261),iVar3);
      *(undefined4 *)(param_1 + 600) = 2;
    }
    uVar5 = 0;
    uVar2 = FUN_180026710(*(ulonglong *)(param_1 + 0x68),(void *)(param_1 + 0x25c),9,(void *)0x0,0);
    if (uVar2 == 0xffffffdb) {
      pcVar4 = "Would block sending window adjust";
      FUN_180018820(*(longlong *)(param_1 + 0x68),0xffffffdb,0x18002e498,uVar5);
      iVar3 = -0x25;
    }
    else {
      if (uVar2 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
        *(undefined4 *)(param_1 + 600) = 0;
        return 0;
      }
      pcVar4 = "Unable to send transfer-window adjustment packet, deferring";
      *(int *)(param_1 + 0x58) = iVar3;
      iVar3 = FUN_180018820(*(longlong *)(param_1 + 0x68),0xfffffff9,0x18002e4c0,uVar5);
      if (iVar3 != -0x25) {
        return iVar3;
      }
    }
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return iVar3;
    }
    iVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var1,pcVar4,uVar5);
  } while (iVar3 == 0);
  return iVar3;
}




int libssh2_channel_request_auth_agent
              (longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  
                    /* 0x6990  31  libssh2_channel_request_auth_agent */
  if (param_1 == 0) {
    return -0x27;
  }
  iVar1 = -0x17;
  if (*(int *)(param_1 + 0x2b4) == 0) {
    _Var2 = _time64((__time64_t *)0x0);
    do {
      uVar3 = 0x1a;
      iVar1 = FUN_180004aa0(param_1,"auth-agent-req@openssh.com",0x1a,param_4);
      if (iVar1 != -0x25) {
        if (iVar1 == 0) goto LAB_180006a18;
        break;
      }
      if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) goto LAB_180006a18;
      iVar1 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var2,uVar3,param_4);
    } while (iVar1 == 0);
    if (iVar1 != -0x25) {
      *(undefined4 *)(param_1 + 0x2b4) = 3;
    }
  }
LAB_180006a18:
  if (*(int *)(param_1 + 0x2b4) == 3) {
    _Var2 = _time64((__time64_t *)0x0);
    do {
      uVar3 = 0xe;
      iVar1 = FUN_180004aa0(param_1,"auth-agent-req",0xe,param_4);
      if (iVar1 != -0x25) {
        if (iVar1 == 0) goto LAB_180006a7c;
        break;
      }
      if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
        return -0x25;
      }
      iVar1 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var2,uVar3,param_4);
    } while (iVar1 == 0);
    if (iVar1 == -0x25) {
      return -0x25;
    }
    *(undefined4 *)(param_1 + 0x2b4) = 4;
  }
  if (iVar1 == 0) {
LAB_180006a7c:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  return iVar1;
}




ulonglong libssh2_channel_request_pty_ex
                    (longlong param_1,void *param_2,uint param_3,longlong *param_4,uint param_5,
                    undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  undefined4 extraout_var_00;
  ulonglong uVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined1 *local_res8;
  void *local_res10;
  longlong local_58;
  char *local_50;
  __time64_t local_48;
  
                    /* 0x6aa0  32  libssh2_channel_request_pty_ex */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  plVar8 = param_4;
  local_res10 = param_2;
  local_48 = _time64((__time64_t *)0x0);
  do {
    iVar2 = *(int *)(param_1 + 0xa8);
    uVar6 = *(ulonglong *)(param_1 + 0x68);
    if (iVar2 == 0) {
      if (0x100 < param_5 + param_3) {
        pcVar7 = "term + mode lengths too large";
        uVar3 = FUN_180018820(uVar6,0xffffffde,0x18002dff8,plVar8);
        uVar5 = CONCAT44(extraout_var,uVar3);
        goto LAB_180006d65;
      }
      *(ulonglong *)(param_1 + 0x1d8) = (ulonglong)(param_5 + param_3 + 0x29);
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)(param_1 + 0xac) = 0x62;
      local_res8 = (undefined1 *)(param_1 + 0xad);
      FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_res8,"pty-req",7);
      *local_res8 = 1;
      local_res8 = local_res8 + 1;
      FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)param_3);
      FUN_180019150((longlong *)&local_res8,param_6);
      FUN_180019150((longlong *)&local_res8,param_7);
      FUN_180019150((longlong *)&local_res8,param_8);
      FUN_180019150((longlong *)&local_res8,param_9);
      FUN_1800190c0((longlong *)&local_res8,param_4,(ulonglong)param_5);
      *(undefined4 *)(param_1 + 0xa8) = 2;
LAB_180006c6a:
      plVar8 = (longlong *)0x0;
      uVar4 = FUN_180026710(uVar6,(void *)(param_1 + 0xac),*(size_t *)(param_1 + 0x1d8),(void *)0x0,
                            0);
      if (uVar4 != 0xffffffdb) {
        if (uVar4 == 0) {
          FUN_180018d00((undefined1 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x30));
          *(undefined4 *)(param_1 + 0xa8) = 3;
          goto LAB_180006ceb;
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
        pcVar7 = "Unable to send pty-request packet";
        goto LAB_180006d5d;
      }
      pcVar7 = "Would block sending pty request";
      FUN_180018820(uVar6,0xffffffdb,0x18002e020,plVar8);
      uVar5 = 0xffffffdb;
    }
    else {
      if (iVar2 == 2) goto LAB_180006c6a;
      if (iVar2 == 3) {
LAB_180006ceb:
        plVar8 = &local_58;
        pcVar7 = (char *)&local_50;
        uVar5 = FUN_18001a320(uVar6,"cd",(undefined8 *)pcVar7,plVar8,1,(void *)(param_1 + 0x1e0),4,
                              (longlong *)(param_1 + 0x1e8));
        if ((int)uVar5 == -0x25) goto LAB_180006d6a;
        if (((int)uVar5 != 0) || (local_58 == 0)) {
          *(undefined4 *)(param_1 + 0xa8) = 0;
          pcVar7 = "Failed to require the PTY package";
          uVar4 = 0xfffffff2;
          goto LAB_180006d5d;
        }
        cVar1 = *local_50;
        (**(code **)(uVar6 + 0x18))(local_50,uVar6);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (cVar1 == 'c') {
          return 0;
        }
      }
      pcVar7 = "Unable to complete request for channel request-pty";
      uVar4 = 0xffffffea;
LAB_180006d5d:
      uVar3 = FUN_180018820(uVar6,uVar4,(longlong)pcVar7,plVar8);
      uVar5 = CONCAT44(extraout_var_00,uVar3);
LAB_180006d65:
      if ((int)uVar5 != -0x25) {
        return uVar5;
      }
    }
LAB_180006d6a:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return uVar5;
    }
    uVar6 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),local_48,pcVar7,plVar8);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  } while( true );
}




int libssh2_channel_request_pty_size_ex
              (longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4,
              undefined4 param_5)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 *local_res8;
  
                    /* 0x6de0  33  libssh2_channel_request_pty_size_ex */
  if (param_1 == 0) {
    return -0x27;
  }
  pcVar5 = param_3;
  uVar6 = param_4;
  _Var4 = _time64((__time64_t *)0x0);
  do {
    iVar3 = -0xe;
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0xa8) == 0) {
      *(size_t *)(param_1 + 0x1d8) = 0x27;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined1 *)(param_1 + 0xac) = 0x62;
      local_res8 = (undefined1 *)(param_1 + 0xad);
      FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_res8,"window-change",0xd);
      *local_res8 = 0;
      local_res8 = local_res8 + 1;
      FUN_180019150((longlong *)&local_res8,param_2);
      FUN_180019150((longlong *)&local_res8,(int)param_3);
      FUN_180019150((longlong *)&local_res8,(int)param_4);
      FUN_180019150((longlong *)&local_res8,param_5);
      *(undefined4 *)(param_1 + 0xa8) = 2;
LAB_180006eef:
      pcVar5 = *(char **)(param_1 + 0x1d8);
      uVar6 = 0;
      uVar2 = FUN_180026710(uVar1,(undefined1 *)(param_1 + 0xac),(size_t)pcVar5,(void *)0x0,0);
      if (uVar2 != 0xffffffdb) {
        if (uVar2 == 0) {
          FUN_180018d00((undefined1 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x30));
          iVar3 = 0;
          goto LAB_180006f58;
        }
        pcVar5 = "Unable to send window-change packet";
        *(undefined4 *)(param_1 + 0xa8) = 0;
        iVar3 = FUN_180018820(uVar1,uVar2,0x18002e1f8,uVar6);
        goto LAB_180006f69;
      }
      pcVar5 = "Would block sending window-change request";
      FUN_180018820(uVar1,0xffffffdb,0x18002e1c8,uVar6);
      iVar3 = -0x25;
    }
    else {
      if (*(int *)(param_1 + 0xa8) == 2) goto LAB_180006eef;
LAB_180006f58:
      *(undefined4 *)(param_1 + 0xa8) = 0;
LAB_180006f69:
      if (iVar3 != -0x25) {
        return iVar3;
      }
    }
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return iVar3;
    }
    iVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var4,pcVar5,uVar6);
    if (iVar3 != 0) {
      return iVar3;
    }
  } while( true );
}




void libssh2_channel_send_eof(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStackY_48 [32];
  undefined1 local_18;
  undefined1 local_17 [7];
  ulonglong local_10;
  
                    /* 0x6fb0  34  libssh2_channel_send_eof */
  local_10 = DAT_18003b280 ^ (ulonglong)auStackY_48;
  if (param_1 == 0) {
    FUN_18002af30(local_10 ^ (ulonglong)auStackY_48);
    return;
  }
  _Var4 = _time64((__time64_t *)0x0);
  do {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    local_18 = 0x60;
    FUN_180018d00(local_17,*(undefined4 *)(param_1 + 0x44));
    uVar6 = 0;
    uVar2 = FUN_180026710(uVar1,&local_18,5,(void *)0x0,0);
    if (uVar2 == 0xffffffdb) {
      pcVar5 = "Would block sending EOF";
      FUN_180018820(uVar1,0xffffffdb,0x18002e5c8,uVar6);
    }
    else {
      if (uVar2 == 0) {
        *(undefined1 *)(param_1 + 0x41) = 1;
LAB_180007090:
        FUN_18002af30(local_10 ^ (ulonglong)auStackY_48);
        return;
      }
      pcVar5 = "Unable to send EOF on channel";
      iVar3 = FUN_180018820(uVar1,0xfffffff9,0x18002e5e0,uVar6);
      if (iVar3 != -0x25) goto LAB_180007090;
    }
    if ((*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) ||
       (iVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var4,pcVar5,uVar6), iVar3 != 0))
    goto LAB_180007090;
  } while( true );
}




void libssh2_channel_set_blocking(longlong param_1,undefined4 param_2)

{
                    /* 0x70c0  35  libssh2_channel_set_blocking */
  if (param_1 != 0) {
    FUN_18001e930(*(longlong *)(param_1 + 0x68),param_2);
    return;
  }
  return;
}




ulonglong libssh2_channel_setenv_ex
                    (longlong param_1,void *param_2,uint param_3,longlong *param_4,uint param_5)

{
  size_t *psVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined1 *local_res8;
  void *local_res10;
  longlong local_48;
  char *local_40;
  
                    /* 0x70d0  36  libssh2_channel_setenv_ex */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  plVar10 = param_4;
  local_res10 = param_2;
  _Var5 = _time64((__time64_t *)0x0);
  do {
    iVar4 = *(int *)(param_1 + 0x80);
    uVar7 = *(ulonglong *)(param_1 + 0x68);
    psVar1 = (size_t *)(param_1 + 0x90);
    if (iVar4 == 0) {
      *psVar1 = (ulonglong)(param_5 + 0x15 + param_3);
      *(longlong *)(param_1 + 0xa0) = 0;
      local_res8 = (undefined1 *)(**(code **)(uVar7 + 8))(*psVar1,uVar7);
      *(undefined1 **)(param_1 + 0x88) = local_res8;
      if (local_res8 == (undefined1 *)0x0) {
        uVar2 = 0xfffffffa;
        pcVar9 = "Unable to allocate memory for setenv packet";
        local_res8 = (undefined1 *)0x0;
        goto LAB_18000734b;
      }
      *local_res8 = 0x62;
      local_res8 = local_res8 + 1;
      FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_res8,&DAT_18002df2c,3);
      *local_res8 = 1;
      local_res8 = local_res8 + 1;
      FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)param_3);
      FUN_1800190c0((longlong *)&local_res8,param_4,(ulonglong)param_5);
      *(undefined4 *)(param_1 + 0x80) = 2;
LAB_180007224:
      puVar8 = (undefined8 *)(param_1 + 0x88);
      plVar10 = (longlong *)0x0;
      uVar3 = FUN_180026710(uVar7,(void *)*puVar8,*psVar1,(void *)0x0,0);
      if (uVar3 != 0xffffffdb) {
        if (uVar3 == 0) {
          (**(code **)(uVar7 + 0x18))(*puVar8,uVar7);
          *puVar8 = 0;
          FUN_180018d00((undefined1 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x30));
          *(undefined4 *)(param_1 + 0x80) = 3;
          goto LAB_1800072c7;
        }
        (**(code **)(uVar7 + 0x18))();
        pcVar9 = "Unable to send channel-request packet for setenv request";
        *puVar8 = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        uVar2 = 0xfffffff9;
        goto LAB_18000734b;
      }
      pcVar9 = "Would block sending setenv request";
      FUN_180018820(uVar7,0xffffffdb,0x18002df30,plVar10);
      uVar6 = 0xffffffdb;
    }
    else {
      if (iVar4 == 2) goto LAB_180007224;
      if (iVar4 == 3) {
LAB_1800072c7:
        plVar10 = &local_48;
        pcVar9 = (char *)&local_40;
        uVar6 = FUN_18001a320(uVar7,"cd",(undefined8 *)pcVar9,plVar10,1,(void *)(param_1 + 0x98),4,
                              (longlong *)(param_1 + 0xa0));
        if ((int)uVar6 == -0x25) goto LAB_18000735a;
        if ((int)uVar6 == 0) {
          if (local_48 != 0) {
            if (*local_40 == 'c') {
              (**(code **)(uVar7 + 0x18))(local_40,uVar7);
              *(undefined4 *)(param_1 + 0x80) = 0;
              return 0;
            }
            (**(code **)(uVar7 + 0x18))();
            goto LAB_180007335;
          }
          uVar6 = 0xfffffff2;
          pcVar9 = "Unexpected packet size";
        }
        else {
          pcVar9 = "Failed getting response for channel-setenv";
        }
      }
      else {
LAB_180007335:
        uVar6 = 0xffffffea;
        pcVar9 = "Unable to complete request for channel-setenv";
      }
      uVar2 = (undefined4)uVar6;
      *(undefined4 *)(param_1 + 0x80) = 0;
LAB_18000734b:
      iVar4 = FUN_180018820(uVar7,uVar2,(longlong)pcVar9,plVar10);
      uVar6 = CONCAT44(extraout_var,iVar4);
      if (iVar4 != -0x25) {
        return uVar6;
      }
    }
LAB_18000735a:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return uVar6;
    }
    uVar7 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var5,pcVar9,plVar10);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  } while( true );
}




int libssh2_channel_signal_ex(longlong param_1,void *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  char *pcVar5;
  undefined1 *local_res8;
  
                    /* 0x73b0  37  libssh2_channel_signal_ex */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var4 = _time64((__time64_t *)0x0);
  do {
    uVar3 = *(uint *)(param_1 + 0x2f8);
    pcVar5 = (char *)(ulonglong)uVar3;
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    iVar2 = -0xe;
    if (uVar3 == 0) {
      *(size_t *)(param_1 + 0x308) = param_3 + 0x14;
      local_res8 = (undefined1 *)(**(code **)(uVar1 + 8))(param_3 + 0x14,uVar1);
      *(undefined1 **)(param_1 + 0x300) = local_res8;
      if (local_res8 == (undefined1 *)0x0) {
        pcVar5 = "Unable to allocate memory for signal request";
        iVar2 = FUN_180018820(uVar1,0xfffffffa,0x18002e738,param_4);
        goto LAB_18000752f;
      }
      *local_res8 = 0x62;
      local_res8 = local_res8 + 1;
      FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_res8,"signal",6);
      *local_res8 = 0;
      local_res8 = local_res8 + 1;
      FUN_1800190c0((longlong *)&local_res8,param_2,param_3);
      *(undefined4 *)(param_1 + 0x2f8) = 2;
LAB_1800074be:
      pcVar5 = *(char **)(param_1 + 0x308);
      param_4 = 0;
      uVar3 = FUN_180026710(uVar1,*(void **)(param_1 + 0x300),(size_t)pcVar5,(void *)0x0,0);
      if (uVar3 != 0xffffffdb) {
        (**(code **)(uVar1 + 0x18))(*(undefined8 *)(param_1 + 0x300));
        if (uVar3 == 0) {
          iVar2 = 0;
          goto LAB_180007525;
        }
        pcVar5 = "Unable to send signal packet";
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        iVar2 = FUN_180018820(uVar1,uVar3,0x18002e798,param_4);
        goto LAB_18000752f;
      }
      pcVar5 = "Would block sending signal request";
      FUN_180018820(uVar1,0xffffffdb,0x18002e770,param_4);
      iVar2 = -0x25;
    }
    else {
      if (uVar3 == 2) goto LAB_1800074be;
LAB_180007525:
      *(undefined4 *)(param_1 + 0x2f8) = 0;
LAB_18000752f:
      if (iVar2 != -0x25) {
        return iVar2;
      }
    }
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return iVar2;
    }
    iVar2 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var4,pcVar5,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
  } while( true );
}




int libssh2_channel_wait_closed
              (longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  
                    /* 0x7580  38  libssh2_channel_wait_closed */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var3 = _time64((__time64_t *)0x0);
  do {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x55) == '\0') {
      param_3 = "libssh2_channel_wait_closed() invoked when channel is not in EOF state";
      iVar2 = FUN_180018820(uVar1,0xffffffde,0x18002e6f0,param_4);
    }
    else {
      if (*(int *)(param_1 + 0x2a8) == 0) {
        *(undefined4 *)(param_1 + 0x2a8) = 2;
      }
      if (*(char *)(param_1 + 0x54) != '\0') {
LAB_180007634:
        *(undefined4 *)(param_1 + 0x2a8) = 0;
        return 0;
      }
      do {
        iVar2 = FUN_1800261c0(uVar1);
        if (*(char *)(param_1 + 0x54) != '\0') break;
      } while (0 < iVar2);
      if (-1 < iVar2) goto LAB_180007634;
    }
    if (iVar2 != -0x25) {
      return iVar2;
    }
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return -0x25;
    }
    iVar2 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var3,param_3,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
  } while( true );
}




int libssh2_channel_wait_eof(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  __time64_t _Var4;
  
                    /* 0x7650  39  libssh2_channel_wait_eof */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var4 = _time64((__time64_t *)0x0);
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x2a4) == 0) {
      *(undefined4 *)(param_1 + 0x2a4) = 2;
    }
    cVar1 = *(char *)(param_1 + 0x55);
    while( true ) {
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x2a4) = 0;
        return 0;
      }
      if (((ulonglong)*(uint *)(param_1 + 0x4c) == *(ulonglong *)(param_1 + 0x60)) &&
         (*(int *)(uVar2 + 0xac) != 0)) {
        iVar3 = -0x2f;
        param_3 = "Receiving channel window has been exhausted";
        goto LAB_180007710;
      }
      iVar3 = FUN_1800261c0(uVar2);
      if (iVar3 == -0x25) {
        iVar3 = -0x25;
        goto LAB_180007726;
      }
      if (iVar3 < 0) break;
      cVar1 = *(char *)(param_1 + 0x55);
    }
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    param_3 = "_libssh2_transport_read() bailed out!";
LAB_180007710:
    iVar3 = FUN_180018820(uVar2,iVar3,(longlong)param_3,param_4);
    if (iVar3 != -0x25) {
      return iVar3;
    }
LAB_180007726:
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return iVar3;
    }
    iVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var4,param_3,param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
  } while( true );
}




undefined4 libssh2_channel_window_read_ex(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  
                    /* 0x7750  40  libssh2_channel_window_read_ex */
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x48);
  }
  if (param_2 != (undefined4 *)0x0) {
    lVar5 = 0;
    uVar4 = 0;
    puVar2 = (undefined8 *)FUN_180018d50(*(longlong *)(param_1 + 0x68) + 0x218);
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_180018d70(puVar2);
      if ((((puVar2[4] != 0) && ((byte)(*(char *)puVar2[3] + 0xa2U) < 2)) &&
          (4 < (ulonglong)puVar2[4])) &&
         (iVar1 = FUN_180018ea0((char *)puVar2[3] + 1), iVar1 == *(int *)(param_1 + 0x30))) {
        lVar5 = lVar5 + (puVar2[4] - puVar2[5]);
      }
      uVar4 = (undefined4)lVar5;
      puVar2 = puVar3;
    }
    *param_2 = uVar4;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}




undefined4 libssh2_channel_window_write_ex(longlong param_1,undefined4 *param_2)

{
                    /* 0x7820  41  libssh2_channel_window_write_ex */
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
  }
  return *(undefined4 *)(param_1 + 0x38);
}




size_t libssh2_channel_write_ex(longlong param_1,int param_2,char *param_3,char *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  __time64_t _Var6;
  size_t sVar7;
  ulonglong uVar8;
  size_t *psVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *local_res8;
  
                    /* 0x7840  42  libssh2_channel_write_ex */
  if (param_1 == 0) {
    return 0xffffffffffffffd9;
  }
  pcVar10 = param_3;
  pcVar11 = param_4;
  _Var6 = _time64((__time64_t *)0x0);
  pcVar12 = (char *)0x7fbc;
  if (param_4 < (char *)0x7fbd) {
    pcVar12 = param_4;
  }
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x270) == 0) {
      local_res8 = (char *)(param_1 + 0x274);
      if (*(char *)(param_1 + 0x40) == '\0') {
        if (*(char *)(param_1 + 0x41) == '\0') {
          do {
            iVar3 = FUN_1800261c0(uVar2);
          } while (0 < iVar3);
          if (((iVar3 + 0x80000000U & 0x80000000) == 0) && (iVar3 != -0x25)) {
            pcVar10 = "Failure while draining incoming flow";
            iVar3 = FUN_180018820(*(longlong *)(param_1 + 0x68),iVar3,0x18002e580,pcVar11);
            sVar7 = (size_t)iVar3;
          }
          else {
            if (*(int *)(param_1 + 0x38) != 0) {
              puVar1 = (ulonglong *)(param_1 + 0x290);
              *puVar1 = (ulonglong)pcVar12;
              *local_res8 = (param_2 != 0) + '^';
              local_res8 = local_res8 + 1;
              FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x44));
              if (param_2 != 0) {
                FUN_180019150((longlong *)&local_res8,param_2);
              }
              uVar5 = *(uint *)(param_1 + 0x38);
              uVar8 = *puVar1;
              if (uVar5 < uVar8) {
                *puVar1 = (ulonglong)uVar5;
                uVar8 = (ulonglong)uVar5;
              }
              uVar5 = *(uint *)(param_1 + 0x3c);
              if (uVar5 < uVar8) {
                *puVar1 = (ulonglong)uVar5;
                uVar8 = (ulonglong)uVar5;
              }
              FUN_180019150((longlong *)&local_res8,(int)uVar8);
              *(undefined4 *)(param_1 + 0x270) = 2;
              *(char **)(param_1 + 0x288) = local_res8 + (-0x274 - param_1);
              goto LAB_1800079f4;
            }
            iVar4 = 0;
            *(undefined4 *)(uVar2 + 0x25c) = 1;
            if (iVar3 == -0x25) {
              iVar4 = -0x25;
            }
            sVar7 = (size_t)iVar4;
          }
        }
        else {
          pcVar10 = "EOF has already been received, data might be ignored";
          iVar3 = FUN_180018820(uVar2,0xffffffe5,0x18002e548,pcVar11);
          sVar7 = (size_t)iVar3;
        }
      }
      else {
        pcVar10 = "We have already closed this channel";
        iVar3 = FUN_180018820(uVar2,0xffffffe6,0x18002e520,pcVar11);
        sVar7 = (size_t)iVar3;
      }
    }
    else {
      if (*(int *)(param_1 + 0x270) != 2) {
        return 0xffffffffffffffde;
      }
LAB_1800079f4:
      psVar9 = (size_t *)(param_1 + 0x290);
      pcVar10 = *(char **)(param_1 + 0x288);
      pcVar11 = param_3;
      uVar5 = FUN_180026710(uVar2,(void *)(param_1 + 0x274),(size_t)pcVar10,param_3,*psVar9);
      if (uVar5 == 0xffffffdb) {
        pcVar10 = "Unable to send channel data";
        iVar3 = FUN_180018820(uVar2,0xffffffdb,0x18002e5a8,pcVar11);
        sVar7 = (size_t)iVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x270) = 0;
        if (uVar5 == 0) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *(int *)psVar9;
          sVar7 = *psVar9;
        }
        else {
          pcVar10 = "Unable to send channel data";
          iVar3 = FUN_180018820(uVar2,uVar5,0x18002e5a8,pcVar11);
          sVar7 = (size_t)iVar3;
        }
      }
    }
    if (sVar7 != 0xffffffffffffffdb) {
      return sVar7;
    }
    if (*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) {
      return 0xffffffffffffffdb;
    }
    iVar3 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var6,pcVar10,pcVar11);
    if ((longlong)iVar3 != 0) {
      return (longlong)iVar3;
    }
  } while( true );
}




void libssh2_channel_x11_req_ex
               (longlong param_1,int param_2,char *param_3,longlong *param_4,undefined4 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  __time64_t _Var5;
  size_t _Size;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStackY_c8 [32];
  undefined1 *local_88;
  int local_80;
  __time64_t local_78;
  longlong local_70;
  char *local_68;
  byte local_60 [24];
  ulonglong local_48;
  
                    /* 0x7ab0  43  libssh2_channel_x11_req_ex */
  local_48 = DAT_18003b280 ^ (ulonglong)auStackY_c8;
  local_80 = param_2;
  if (param_1 == 0) {
LAB_180007e4a:
    FUN_18002af30(local_48 ^ (ulonglong)auStackY_c8);
    return;
  }
  plVar10 = param_4;
  _Var5 = _time64((__time64_t *)0x0);
  local_78 = _Var5;
  do {
    uVar2 = *(ulonglong *)(param_1 + 0x68);
    if (param_3 == (char *)0x0) {
      uVar7 = 0x12;
    }
    else {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (param_3[uVar7] != '\0');
    }
    if (param_4 == (longlong *)0x0) {
      _Size = 0x20;
    }
    else {
      _Size = 0xffffffffffffffff;
      do {
        _Size = _Size + 1;
      } while (*(char *)((longlong)param_4 + _Size) != '\0');
    }
    iVar4 = *(int *)(param_1 + 0x1f0);
    if (iVar4 == 0) {
      *(ulonglong *)(param_1 + 0x200) = uVar7 + 0x1e + _Size;
      *(undefined8 *)(param_1 + 0x210) = 0;
      local_88 = (undefined1 *)(**(code **)(uVar2 + 8))(*(undefined8 *)(param_1 + 0x200),uVar2);
      *(undefined1 **)(param_1 + 0x1f8) = local_88;
      if (local_88 == (undefined1 *)0x0) {
        pcVar9 = "Unable to allocate memory for pty-request";
        uVar3 = 0xfffffffa;
        local_88 = (undefined1 *)0x0;
        goto LAB_180007deb;
      }
      *local_88 = 0x62;
      local_88 = local_88 + 1;
      FUN_180019150((longlong *)&local_88,*(undefined4 *)(param_1 + 0x44));
      FUN_1800190c0((longlong *)&local_88,"x11-req",7);
      *local_88 = 1;
      local_88[1] = param_2 != 0;
      local_88 = local_88 + 2;
      pcVar9 = "MIT-MAGIC-COOKIE-1";
      if (param_3 != (char *)0x0) {
        pcVar9 = param_3;
      }
      FUN_1800190c0((longlong *)&local_88,pcVar9,uVar7);
      FUN_180019150((longlong *)&local_88,(int)_Size);
      if (param_4 == (longlong *)0x0) {
        iVar4 = FUN_18000a010(local_60,0x10);
        if (iVar4 != 0) {
          pcVar9 = "Unable to get random bytes for x11-req cookie";
          uVar3 = 0xffffffcf;
          goto LAB_180007deb;
        }
        pbVar8 = local_60;
        lVar6 = 0;
        lVar11 = 0x10;
        do {
          snprintf(local_88 + lVar6,3,&DAT_18002e2a0,(ulonglong)*pbVar8);
          lVar6 = lVar6 + 2;
          pbVar8 = pbVar8 + 1;
          lVar11 = lVar11 + -1;
          _Var5 = local_78;
          param_2 = local_80;
        } while (lVar11 != 0);
      }
      else {
        memcpy(local_88,param_4,_Size);
      }
      local_88 = local_88 + _Size;
      FUN_180019150((longlong *)&local_88,param_5);
      *(undefined4 *)(param_1 + 0x1f0) = 2;
LAB_180007ce0:
      plVar10 = (longlong *)0x0;
      uVar3 = FUN_180026710(uVar2,*(void **)(param_1 + 0x1f8),*(size_t *)(param_1 + 0x200),
                            (void *)0x0,0);
      if (uVar3 != 0xffffffdb) {
        (**(code **)(uVar2 + 0x18))(*(undefined8 *)(param_1 + 0x1f8),uVar2);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        if (uVar3 == 0) {
          FUN_180018d00((undefined1 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x30));
          *(undefined4 *)(param_1 + 0x1f0) = 3;
          goto LAB_180007d70;
        }
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        pcVar9 = "Unable to send x11-req packet";
        goto LAB_180007deb;
      }
      pcVar9 = "Would block sending X11-req packet";
      FUN_180018820(uVar2,0xffffffdb,0x18002e2a8,plVar10);
    }
    else {
      if (iVar4 == 2) goto LAB_180007ce0;
      if (iVar4 == 3) {
LAB_180007d70:
        plVar10 = &local_70;
        pcVar9 = (char *)&local_68;
        uVar7 = FUN_18001a320(uVar2,"cd",(undefined8 *)pcVar9,plVar10,1,(void *)(param_1 + 0x208),4,
                              (longlong *)(param_1 + 0x210));
        uVar3 = (uint)uVar7;
        if (uVar3 == 0xffffffdb) goto LAB_180007df8;
        if ((uVar3 != 0) || (local_70 == 0)) {
          *(undefined4 *)(param_1 + 0x1f0) = 0;
          pcVar9 = "waiting for x11-req response packet";
          goto LAB_180007deb;
        }
        cVar1 = *local_68;
        (**(code **)(uVar2 + 0x18))(local_68,uVar2);
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        if (cVar1 == 'c') goto LAB_180007e4a;
      }
      pcVar9 = "Unable to complete request for channel x11-req";
      uVar3 = 0xffffffea;
LAB_180007deb:
      iVar4 = FUN_180018820(uVar2,uVar3,(longlong)pcVar9,plVar10);
      if (iVar4 != -0x25) goto LAB_180007e4a;
    }
LAB_180007df8:
    if ((*(int *)(*(ulonglong *)(param_1 + 0x68) + 0xac) == 0) ||
       (iVar4 = FUN_18001e940(*(ulonglong *)(param_1 + 0x68),_Var5,pcVar9,plVar10), iVar4 != 0))
    goto LAB_180007e4a;
  } while( true );
}




undefined8 libssh2_trace(void)

{
                    /* 0x7e70  123  libssh2_trace
                       0x7e70  124  libssh2_trace_sethandler */
  return 0;
}




undefined4 FUN_180007ea0(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = FUN_180018690(param_1,0x58);
  if (pvVar3 == (void *)0x0) {
    uVar1 = FUN_180018820(param_1,0xfffffffa,0x18002e870,param_4);
  }
  else {
    *(longlong *)((longlong)pvVar3 + 0x40) = param_1;
    *(undefined1 **)((longlong)pvVar3 + 0x30) = &LAB_180008260;
    *(code **)((longlong)pvVar3 + 0x38) = libssh2_free;
    if (param_2 == 0) {
      iVar2 = inflateInit_(pvVar3,"1.3.1",0x58);
    }
    else {
      iVar2 = deflateInit_(pvVar3,0xffffffff,"1.3.1",0x58);
    }
    if (iVar2 == 0) {
      *param_3 = pvVar3;
      uVar1 = 0;
    }
    else {
      (**(code **)(param_1 + 0x18))(pvVar3,param_1);
      uVar1 = 0xffffffd8;
    }
  }
  return uVar1;
}




undefined4
FUN_180007ff0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
             undefined8 param_5,ulonglong param_6,longlong *param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  puVar1 = (undefined8 *)*param_7;
  uVar7 = param_4;
  if (param_6 < 0x4000000000000000) {
    uVar7 = (ulonglong)(uint)((int)param_6 * 4);
  }
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = FUN_180018820(param_1,0xffffffd8,0x18002e8d0,param_4);
    return uVar3;
  }
  *(int *)(puVar1 + 1) = (int)param_6;
  if (uVar7 < 0x19) {
    uVar7 = 0x19;
  }
  *puVar1 = param_5;
  if (param_4 < uVar7) {
    uVar7 = param_4;
  }
  uVar10 = param_4;
  lVar5 = (**(code **)(param_1 + 8))(uVar7 & 0xffffffff,param_1);
  puVar1[2] = lVar5;
  *(int *)(puVar1 + 3) = (int)uVar7;
  if (lVar5 == 0) {
    pcVar9 = "Unable to allocate decompression buffer";
    uVar3 = 0xfffffffa;
  }
  else {
    iVar4 = inflate(puVar1,1);
    while (iVar4 == 0) {
      if (*(uint *)(puVar1 + 3) != 0) goto LAB_18000814b;
      if ((param_4 < uVar7) || (0x7fffffffffffffff < uVar7)) {
        (**(code **)(param_1 + 0x18))(lVar5,param_1);
        pcVar9 = "Excessive growth in decompression phase";
        goto LAB_180008197;
      }
      uVar2 = uVar7 * 2;
      lVar8 = uVar7 - *(uint *)(puVar1 + 3);
      if (lVar5 == 0) {
        lVar6 = (**(code **)(param_1 + 8))(uVar2,param_1);
      }
      else {
        lVar6 = (**(code **)(param_1 + 0x10))(lVar5,uVar2,param_1);
      }
      if (lVar6 == 0) {
        (**(code **)(param_1 + 0x18))(lVar5,param_1);
        pcVar9 = "Unable to expand decompression buffer";
        uVar3 = 0xfffffffa;
        goto LAB_18000819c;
      }
      puVar1[2] = lVar6 + lVar8;
      *(int *)(puVar1 + 3) = (int)uVar2 - (int)lVar8;
      iVar4 = inflate(puVar1,1);
      lVar5 = lVar6;
      uVar7 = uVar2;
    }
    if (iVar4 == -5) {
LAB_18000814b:
      *param_2 = lVar5;
      *param_3 = uVar7 - *(uint *)(puVar1 + 3);
      return 0;
    }
    (**(code **)(param_1 + 0x18))(lVar5,param_1);
    pcVar9 = "decompression failure";
LAB_180008197:
    uVar3 = 0xffffffe3;
  }
LAB_18000819c:
  uVar3 = FUN_180018820(param_1,uVar3,(longlong)pcVar9,uVar10);
  return uVar3;
}




undefined8 FUN_1800081d0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    if (param_2 == 0) {
      inflateEnd(lVar1);
    }
    else {
      deflateEnd();
    }
    (**(code **)(param_1 + 0x18))(lVar1,param_1);
    *param_3 = 0;
    return 0;
  }
  *param_3 = 0;
  return 0;
}




undefined ** FUN_180008240(longlong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_DAT_18003b080;
  if (*(int *)(param_1 + 0x88) != 0) {
    ppuVar1 = &PTR_PTR_DAT_18003b060;
  }
  return ppuVar1;
}




void libssh2_free(longlong param_1,undefined8 param_2)

{
                    /* 0x8270  46  libssh2_free */
                    /* WARNING: Could not recover jumptable at 0x00018000827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_2,param_1);
  return;
}




void FUN_180008330(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  uint param_5)

{
  int *piVar1;
  
  piVar1 = (int *)*param_4;
  FUN_1800084d0((undefined8 *)(piVar1 + 4),*(undefined1 **)(piVar1 + 2),*piVar1,param_2,param_3,
                param_5);
  return;
}




undefined ** FUN_1800084c0(void)

{
  return &PTR_PTR_s_aes256_gcm_openssh_com_18003b090;
}




void FUN_1800084d0(undefined8 *param_1,undefined1 *param_2,int param_3,longlong param_4,
                  longlong param_5,uint param_6)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_84 [4];
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  longlong local_70;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_18003b280 ^ (ulonglong)auStack_a8;
  iVar3 = 1;
  local_78 = param_3;
  local_70 = param_4;
  if ((param_2 == &LAB_18002abda) || (param_2 == &LAB_18002abf8)) {
    local_80 = 0x10;
    local_88 = 0x10;
    bVar1 = true;
    uVar4 = 0x10;
    if ((param_6 & 1) == 0) goto LAB_18000854f;
    local_80 = 0x10;
    local_74 = 0;
    if ((param_6 & 2) != 0) {
      local_74 = 0x10;
    }
    local_88 = 0x10;
    uVar4 = 4;
    iVar5 = ((int)param_5 - local_74) + -4;
LAB_180008571:
    local_7c = param_6 & 2;
    iVar3 = EVP_CIPHER_CTX_ctrl(*param_1,0x13,1,local_84);
  }
  else {
    local_80 = 0;
    uVar4 = 0;
    local_88 = 0;
    bVar1 = false;
LAB_18000854f:
    local_7c = param_6 & 2;
    local_74 = 0;
    if (local_7c != 0) {
      local_74 = uVar4;
    }
    uVar4 = 0;
    iVar5 = (int)param_5 - local_74;
    if ((param_6 & 1) == 0) goto LAB_1800085a6;
    iVar3 = 1;
    if (bVar1) goto LAB_180008571;
  }
  if (uVar4 != 0) {
    iVar3 = EVP_Cipher(*param_1,0,local_70,uVar4);
  }
LAB_1800085a6:
  lVar2 = local_70;
  if ((((param_6 & 2) != 0) && (bVar1)) && (local_78 == 0)) {
    iVar3 = EVP_CIPHER_CTX_ctrl(*param_1,0x11,local_88,(param_5 - (ulonglong)local_80) + local_70);
  }
  if (0 < iVar5) {
    iVar3 = EVP_Cipher(*param_1,local_60 + uVar4,(ulonglong)uVar4 + lVar2,iVar5);
  }
  if (iVar3 != -1) {
    if (((local_7c != 0) && (iVar3 = EVP_Cipher(*param_1,0,0,0), -1 < iVar3)) &&
       ((bVar1 && (local_78 != 0)))) {
      EVP_CIPHER_CTX_ctrl(*param_1,0x10,local_88,lVar2 + (param_5 - (ulonglong)local_74));
    }
    memcpy((void *)((ulonglong)uVar4 + lVar2),local_60 + uVar4,(longlong)iVar5);
  }
  FUN_18002af30(local_40 ^ (ulonglong)auStack_a8);
  return;
}




bool FUN_1800086f0(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if ((param_2 == &LAB_18002abda) || (bVar1 = false, param_2 == &LAB_18002abf8)) {
    bVar1 = true;
  }
  uVar3 = EVP_CIPHER_CTX_new();
  *param_1 = uVar3;
  uVar3 = (*(code *)param_2)();
  iVar2 = EVP_CipherInit(*param_1,uVar3,param_4,param_3,param_5);
  bVar4 = iVar2 == 0;
  if (bVar1) {
    iVar2 = EVP_CIPHER_CTX_ctrl(*param_1,0x12,0xffffffff,param_3);
    bVar4 = bVar4 || iVar2 == 0;
  }
  return bVar4;
}




void FUN_1800087a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_18003b280 ^ (ulonglong)auStack_78;
  local_58 = 0;
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (lVar2 = BN_CTX_new(), lVar2 != 0)) {
    lVar3 = EVP_PKEY_new_raw_public_key(0x40a,0,param_3,0x20);
    lVar4 = EVP_PKEY_new_raw_private_key(0x40a,0,param_2,0x20);
    if (lVar3 != 0) {
      if ((lVar4 != 0) && (lVar5 = EVP_PKEY_CTX_new(lVar4,0), lVar5 != 0)) {
        iVar1 = EVP_PKEY_derive_init(lVar5);
        if ((((0 < iVar1) &&
             ((iVar1 = EVP_PKEY_derive_set_peer(lVar5,lVar3), 0 < iVar1 &&
              (iVar1 = EVP_PKEY_derive(lVar5,0,&local_58), 0 < iVar1)))) && (local_58 == 0x20)) &&
           ((iVar1 = EVP_PKEY_derive(lVar5,local_50,&local_58), iVar1 == 1 && (local_58 == 0x20))))
        {
          BN_bin2bn(local_50,0x20,*param_1);
        }
        EVP_PKEY_CTX_free(lVar5);
      }
      EVP_PKEY_free(lVar3);
    }
    if (lVar4 != 0) {
      EVP_PKEY_free(lVar4);
    }
    BN_CTX_free(lVar2);
  }
  FUN_18002af30(local_30 ^ (ulonglong)auStack_78);
  return;
}




undefined8 FUN_180008920(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res20;
  longlong local_38;
  longlong local_30;
  
  local_res20 = 0;
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = 0xffffffff;
  lVar2 = EVP_PKEY_CTX_new_id(0x40a,0);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  iVar1 = EVP_PKEY_keygen_init(lVar2);
  if ((iVar1 == 1) && (iVar1 = EVP_PKEY_keygen(lVar2,&local_res20), iVar1 == 1)) {
    if (param_3 != (longlong *)0x0) {
      local_38 = 0x20;
      lVar3 = (**(code **)(param_1 + 8))(0x20,param_1);
      if (((lVar3 == 0) ||
          (iVar1 = EVP_PKEY_get_raw_private_key(local_res20,lVar3,&local_38), lVar4 = 0, iVar1 != 1)
          ) || (local_38 != 0x20)) goto LAB_180008a1f;
      *param_3 = lVar3;
    }
    if (param_2 != (longlong *)0x0) {
      local_30 = 0x20;
      lVar4 = (**(code **)(param_1 + 8))(0x20,param_1);
      lVar3 = 0;
      if (((lVar4 == 0) ||
          (iVar1 = EVP_PKEY_get_raw_public_key(local_res20,lVar4,&local_30), iVar1 != 1)) ||
         (local_30 != 0x20)) goto LAB_180008a1f;
      *param_2 = lVar4;
    }
    uVar5 = 0;
    lVar3 = 0;
    lVar4 = 0;
  }
LAB_180008a1f:
  EVP_PKEY_CTX_free(lVar2);
  if (local_res20 != 0) {
    EVP_PKEY_free();
  }
  if (lVar3 != 0) {
    (**(code **)(param_1 + 0x18))(lVar3,param_1);
  }
  if (lVar4 != 0) {
    (**(code **)(param_1 + 0x18))(lVar4,param_1);
  }
  return uVar5;
}




void FUN_180008a70(undefined8 *param_1)

{
  BN_clear_free(*param_1);
  *param_1 = 0;
  return;
}




void FUN_180008a90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = BN_new();
  *param_1 = uVar1;
  return;
}




undefined8
FUN_180008ab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6)

{
  BN_rand(*param_1,param_5 * 8 + -1,0,0xffffffff);
  BN_mod_exp(param_2,param_3,*param_1,param_4,param_6);
  return 0;
}




undefined8
FUN_180008b20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  BN_mod_exp(param_2,param_3,*param_1,param_4,param_5);
  return 0;
}




undefined8
FUN_180008b50(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,int param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar1 = BN_new();
  BN_bin2bn(param_2,param_3,uVar1);
  uVar2 = BN_new();
  BN_bin2bn(param_4,param_5,uVar2);
  uVar3 = BN_new();
  BN_bin2bn(param_6,param_7,uVar3);
  uVar4 = BN_new();
  BN_bin2bn(param_8,param_9,uVar4);
  if (param_11 != 0) {
    uVar5 = BN_new();
    BN_bin2bn(param_10,param_11,uVar5);
  }
  uVar6 = DSA_new();
  *param_1 = uVar6;
  DSA_set0_pqg(uVar6,uVar1,uVar2,uVar3);
  DSA_set0_key(*param_1,uVar4,uVar5);
  return 0;
}




int FUN_180008c50(longlong *param_1,longlong param_2,char *param_3,longlong **param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  FILE *_File;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *local_res8;
  longlong local_28 [2];
  
  pplVar8 = param_4;
  FUN_18000d910();
  lVar5 = 0;
  *param_1 = 0;
  lVar2 = BIO_new_file(param_3,&DAT_18002eeac);
  if (lVar2 != 0) {
    pplVar8 = param_4;
    lVar3 = PEM_read_bio_DSAPrivateKey(lVar2,0,FUN_18000d840);
    *param_1 = lVar3;
    BIO_free(lVar2);
    if (*param_1 != 0) {
      return (*param_1 != 0) - 1;
    }
  }
  local_28[0] = 0;
  local_res8 = (longlong *)0x0;
  if (param_2 == 0) {
    pcVar7 = "Session is required";
    param_2 = 0;
  }
  else {
    FUN_18000d910();
    _File = fopen(param_3,"r");
    if (_File == (FILE *)0x0) {
      pcVar7 = "Unable to open OpenSSH DSA private key file";
      uVar6 = 0xfffffff0;
      goto LAB_180008dd2;
    }
    pplVar8 = &local_res8;
    iVar1 = FUN_18001af50(param_2,(undefined1 *)param_4,_File,pplVar8);
    fclose(_File);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar4 = FUN_180018ad0(local_res8,local_28,(ulonglong *)0x0);
    if (((int)uVar4 == 0) && (local_28[0] != 0)) {
      do {
        pcVar7 = "ssh-dss" + lVar5;
        lVar5 = lVar5 + 1;
        if (*pcVar7 != *(char *)(local_28[0] + -1 + lVar5)) {
          iVar1 = -1;
          goto LAB_180008daf;
        }
      } while (lVar5 != 8);
      iVar1 = FUN_18000c070(param_2,local_res8,(undefined8 *)0x0,(undefined8 *)0x0,(undefined8 *)0x0
                            ,(longlong *)0x0,param_1);
LAB_180008daf:
      if (local_res8 == (longlong *)0x0) {
        return iVar1;
      }
      FUN_180019180(param_2,local_res8);
      return iVar1;
    }
    pcVar7 = "Public key type in decrypted key data not found";
  }
  uVar6 = 0xfffffff2;
LAB_180008dd2:
  FUN_180018820(param_2,uVar6,(longlong)pcVar7,pplVar8);
  return -1;
}




ulonglong FUN_180008e00(longlong *param_1,longlong param_2,longlong param_3,size_t *param_4,
                       undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18000d910();
  *param_1 = 0;
  lVar1 = BIO_new_mem_buf(param_3,(ulonglong)param_4 & 0xffffffff);
  if (lVar1 != 0) {
    lVar2 = PEM_read_bio_DSAPrivateKey(lVar1,0,FUN_18000d840);
    *param_1 = lVar2;
    BIO_free(lVar1);
    if (*param_1 != 0) {
      return (ulonglong)((*param_1 != 0) - 1);
    }
  }
  uVar3 = FUN_18000a7a0(param_2,param_1,"ssh-dsa",(size_t *)0x0,(size_t *)0x0,(longlong *)0x0,
                        (size_t *)0x0,param_3,param_4,param_5);
  return uVar3;
}




undefined8
FUN_180008ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = DSA_do_sign(param_2,0x14,param_1);
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  DSA_SIG_get0(lVar3,&local_18,&local_10);
  iVar1 = BN_num_bits(local_18);
  if (iVar1 - 1U < 0xa0) {
    iVar2 = BN_num_bits(local_10);
    if (iVar2 - 1U < 0xa0) {
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      BN_bn2bin(local_18,(longlong)(0x14 - ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3)) +
                         (longlong)param_4);
      BN_bn2bin(local_10,(longlong)(0x14 - ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3)) +
                         0x14 + (longlong)param_4);
      DSA_SIG_free(lVar3);
      return 0;
    }
  }
  DSA_SIG_free(lVar3);
  return 0xffffffff;
}




undefined8
FUN_180009110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Memory;
  undefined8 uVar5;
  size_t _Size;
  
  uVar5 = 0;
  lVar2 = BN_CTX_new();
  if ((lVar2 != 0) && (param_1 != (undefined8 *)0x0)) {
    uVar3 = EC_KEY_get0_group(param_2);
    lVar4 = EC_POINT_new(uVar3);
    if (lVar4 != 0) {
      iVar1 = EC_POINT_oct2point(uVar3,lVar4,param_3,param_4,lVar2);
      if (iVar1 == 1) {
        iVar1 = EC_GROUP_get_degree(uVar3);
        _Size = (size_t)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
        _Memory = malloc(_Size);
        if (_Memory != (void *)0x0) {
          iVar1 = ECDH_compute_key(_Memory,_Size,lVar4,param_2,0);
          if (iVar1 - 1U < 0x85) {
            BN_bin2bn(_Memory,iVar1,*param_1);
          }
          else {
            uVar5 = 0xffffffff;
          }
          EC_POINT_free(lVar4);
          BN_CTX_free(lVar2);
          free(_Memory);
          return uVar5;
        }
      }
      EC_POINT_free(lVar4);
      BN_CTX_free(lVar2);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}




void FUN_180009250(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong _Size;
  ulonglong uVar4;
  void *_Dst;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [144];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStack_128;
  lVar1 = BN_CTX_new();
  if (lVar1 == 0) goto LAB_180009386;
  uVar2 = EC_KEY_new_by_curve_name(param_5);
  uVar3 = EC_KEY_get0_group(uVar2);
  local_f0 = uVar3;
  EC_KEY_generate_key(uVar2);
  local_f8 = EC_KEY_get0_public_key(uVar2);
  local_108 = 0;
  local_100 = lVar1;
  _Size = EC_POINT_point2oct(uVar3,local_f8,4,0);
  if ((_Size < 0x86) &&
     (local_108 = _Size, local_100 = lVar1, uVar4 = EC_POINT_point2oct(local_f0,local_f8,4,local_e8)
     , uVar4 == _Size)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = uVar2;
    }
    if (param_3 != (undefined8 *)0x0) {
      _Dst = (void *)(**(code **)(param_1 + 8))(_Size,param_1);
      *param_3 = _Dst;
      if (_Dst == (void *)0x0) goto LAB_180009370;
      memcpy(_Dst,local_e8,_Size);
    }
    if (param_4 != (ulonglong *)0x0) {
      *param_4 = _Size;
    }
  }
LAB_180009370:
  BN_CTX_free(lVar1);
LAB_180009386:
  FUN_18002af30(local_58 ^ (ulonglong)auStack_128);
  return;
}




int FUN_1800093b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = 0;
  lVar2 = EC_KEY_new_by_curve_name(param_4);
  if (lVar2 != 0) {
    uVar3 = EC_KEY_get0_group(lVar2);
    lVar4 = EC_POINT_new(uVar3);
    EC_POINT_oct2point(uVar3,lVar4,param_2,param_3,0);
    iVar1 = EC_KEY_set_public_key(lVar2,lVar4);
    if (lVar4 != 0) {
      EC_POINT_free(lVar4);
    }
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar2;
    }
  }
  return -(uint)(iVar1 != 1);
}




void FUN_180009460(void)

{
  undefined8 uVar1;
  
  uVar1 = EC_KEY_get0_group();
  EC_GROUP_get_curve_name(uVar1);
  return;
}




uint FUN_180009480(longlong *param_1,longlong param_2,char *param_3,longlong **param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  FILE *_File;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  longlong **pplVar9;
  longlong *local_res8;
  char *local_28 [2];
  
  pplVar9 = param_4;
  FUN_18000d910();
  *param_1 = 0;
  lVar3 = BIO_new_file(param_3,&DAT_18002eeac);
  if (lVar3 != 0) {
    pplVar9 = param_4;
    lVar3 = PEM_read_bio_ECPrivateKey(lVar3,0,FUN_18000d840);
    *param_1 = lVar3;
    BIO_free();
    if (*param_1 != 0) {
      return 0;
    }
  }
  local_28[0] = (char *)0x0;
  local_res8 = (longlong *)0x0;
  if (param_2 == 0) {
    pcVar8 = "Session is required";
    param_2 = 0;
  }
  else {
    FUN_18000d910();
    _File = fopen(param_3,"r");
    if (_File == (FILE *)0x0) {
      pcVar8 = "Unable to open OpenSSH ECDSA private key file";
      uVar6 = 0xfffffff0;
      goto LAB_180009650;
    }
    pplVar9 = &local_res8;
    uVar1 = FUN_18001af50(param_2,(undefined1 *)param_4,_File,pplVar9);
    fclose(_File);
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar4 = FUN_180018ad0(local_res8,(longlong *)local_28,(ulonglong *)0x0);
    pcVar8 = local_28[0];
    if (((int)uVar4 == 0) && (local_28[0] != (char *)0x0)) {
      uVar1 = 0xffffffff;
      iVar7 = 0;
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (local_28[0][lVar3] != '\0');
      if (lVar3 == 0x13) {
        iVar2 = strcmp(local_28[0],"ecdsa-sha2-nistp256");
        if (iVar2 == 0) {
          uVar5 = 0x19f;
        }
        else {
          iVar2 = strcmp(pcVar8,"ecdsa-sha2-nistp384");
          if (iVar2 == 0) {
            uVar5 = 0x2cb;
          }
          else {
            iVar2 = strcmp(pcVar8,"ecdsa-sha2-nistp521");
            if (iVar2 == 0) {
              uVar5 = 0x2cc;
            }
            else {
              iVar7 = -1;
              uVar5 = (uint)local_res8;
            }
          }
        }
        if (iVar7 == 0) {
          uVar1 = FUN_18000c5c0(param_2,uVar5,local_res8,(undefined8 *)0x0,(size_t *)0x0,
                                (longlong *)0x0,(longlong *)0x0,param_1);
        }
      }
      if (local_res8 == (longlong *)0x0) {
        return uVar1;
      }
      FUN_180019180(param_2,local_res8);
      return uVar1;
    }
    pcVar8 = "Public key type in decrypted key data not found";
  }
  uVar6 = 0xfffffff2;
LAB_180009650:
  FUN_180018820(param_2,uVar6,(longlong)pcVar8,pplVar9);
  return 0xffffffff;
}




ulonglong FUN_180009680(longlong *param_1,longlong param_2,longlong param_3,size_t *param_4,
                       undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18000d910();
  *param_1 = 0;
  lVar1 = BIO_new_mem_buf(param_3,(ulonglong)param_4 & 0xffffffff);
  if (lVar1 != 0) {
    lVar2 = PEM_read_bio_ECPrivateKey(lVar1,0,FUN_18000d840);
    *param_1 = lVar2;
    BIO_free(lVar1);
    if (*param_1 != 0) {
      return (ulonglong)((*param_1 != 0) - 1);
    }
  }
  uVar3 = FUN_18000a7a0(param_2,param_1,"ssh-ecdsa",(size_t *)0x0,(size_t *)0x0,(longlong *)0x0,
                        (size_t *)0x0,param_3,param_4,param_5);
  return uVar3;
}




undefined8
FUN_180009760(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5,size_t *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 *_Src;
  undefined1 *puVar3;
  void *_Dst;
  undefined8 uVar4;
  int iVar5;
  size_t _Size;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar4 = 0;
  local_28 = 0;
  local_20 = 0;
  lVar2 = ECDSA_do_sign(param_3,param_4,param_2);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  ECDSA_SIG_get0(lVar2,&local_28,&local_20);
  iVar1 = BN_num_bits(local_28);
  iVar5 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
  iVar1 = BN_num_bits(local_20);
  iVar1 = ((int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3) + 1;
  _Src = (undefined1 *)malloc((longlong)(iVar5 + 9 + iVar1));
  if (_Src == (undefined1 *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    puVar3 = FUN_18000d8a0(_Src,local_28,iVar5 + 1);
    puVar3 = FUN_18000d8a0(puVar3,local_20,iVar1);
    _Size = (longlong)puVar3 - (longlong)_Src;
    _Dst = FUN_180018690(param_1,_Size);
    if (_Dst == (void *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      memcpy(_Dst,_Src,_Size);
      *param_5 = _Dst;
      *param_6 = _Size;
    }
    free(_Src);
  }
  ECDSA_SIG_free(lVar2);
  return uVar4;
}




void FUN_1800098a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStack_c8;
  local_a0 = param_6;
  uVar2 = EC_KEY_get0_group();
  local_a8 = EC_GROUP_get_curve_name(uVar2);
  lVar3 = ECDSA_SIG_new();
  uVar2 = BN_new();
  uVar4 = BN_new();
  BN_bin2bn(param_2,param_3,uVar2);
  BN_bin2bn(param_4,param_5,uVar4);
  ECDSA_SIG_set0(lVar3,uVar2,uVar4);
  if (local_a8 == 0x19f) {
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      uVar2 = EVP_get_digestbyname("sha256");
      iVar1 = EVP_DigestInit(lVar5,uVar2);
      if (iVar1 != 0) {
        EVP_DigestUpdate(lVar5,local_a0,param_7);
        EVP_DigestFinal(lVar5,local_98,0);
      }
      EVP_MD_CTX_free(lVar5);
    }
    uVar2 = 0x20;
  }
  else if (local_a8 == 0x2cb) {
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      uVar2 = EVP_get_digestbyname("sha384");
      iVar1 = EVP_DigestInit(lVar5,uVar2);
      if (iVar1 != 0) {
        EVP_DigestUpdate(lVar5,local_a0,param_7);
        EVP_DigestFinal(lVar5,local_98,0);
      }
      EVP_MD_CTX_free(lVar5);
    }
    uVar2 = 0x30;
  }
  else {
    if (local_a8 != 0x2cc) goto LAB_180009a80;
    lVar5 = EVP_MD_CTX_new();
    if (lVar5 != 0) {
      uVar2 = EVP_get_digestbyname("sha512");
      iVar1 = EVP_DigestInit(lVar5,uVar2);
      if (iVar1 != 0) {
        EVP_DigestUpdate(lVar5,local_a0,param_7);
        EVP_DigestFinal(lVar5,local_98,0);
      }
      EVP_MD_CTX_free(lVar5);
    }
    uVar2 = 0x40;
  }
  ECDSA_do_verify(local_98,uVar2,lVar3,param_1);
LAB_180009a80:
  if (lVar3 != 0) {
    ECDSA_SIG_free(lVar3);
  }
  FUN_18002af30(local_58 ^ (ulonglong)auStack_c8);
  return;
}




ulonglong FUN_180009ac0(longlong *param_1,longlong param_2,char *param_3,longlong **param_4)

{
  uint uVar1;
  int iVar2;
  FILE *_File;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *local_res10;
  longlong local_28;
  char *local_20;
  
  lVar6 = 0;
  local_res10 = (longlong *)0x0;
  local_28 = 0;
  if (param_2 == 0) {
    FUN_180018820(0,0xfffffff2,0x18002ef58,param_4);
    return 0xffffffff;
  }
  pplVar8 = param_4;
  FUN_18000d910();
  _File = fopen(param_3,"r");
  if (_File == (FILE *)0x0) {
    pcVar7 = "Unable to open ED25519 private key file";
    uVar5 = 0xfffffff0;
  }
  else {
    pplVar8 = &local_res10;
    uVar1 = FUN_18001af50(param_2,(undefined1 *)param_4,_File,pplVar8);
    fclose(_File);
    if (uVar1 != 0) {
      return (ulonglong)uVar1;
    }
    uVar3 = FUN_180018ad0(local_res10,(longlong *)&local_20,(ulonglong *)0x0);
    if (((int)uVar3 == 0) && (local_20 != (char *)0x0)) {
      iVar2 = strcmp("ssh-ed25519",local_20);
      if (iVar2 == 0) {
        uVar4 = FUN_18000c7c0(param_2,local_res10,(undefined8 *)0x0,(undefined8 *)0x0,
                              (undefined8 *)0x0,(undefined8 *)0x0,&local_28);
        uVar4 = uVar4 & 0xffffffff;
        lVar6 = local_28;
      }
      else {
        uVar4 = 0xffffffff;
      }
      if (local_res10 != (longlong *)0x0) {
        FUN_180019180(param_2,local_res10);
      }
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (param_1 != (longlong *)0x0) {
        *param_1 = lVar6;
        return uVar4;
      }
      if (lVar6 == 0) {
        return uVar4;
      }
      EVP_PKEY_free(lVar6);
      return uVar4;
    }
    pcVar7 = "Public key type in decrypted key data not found";
    uVar5 = 0xfffffff2;
  }
  FUN_180018820(param_2,uVar5,(longlong)pcVar7,pplVar8);
  return 0xffffffff;
}




ulonglong FUN_180009c40(longlong *param_1,longlong param_2,longlong param_3,size_t *param_4,
                       undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  undefined1 *puVar6;
  
  FUN_18000d910();
  lVar3 = BIO_new_mem_buf(param_3,(ulonglong)param_4 & 0xffffffff);
  if (lVar3 != 0) {
    puVar6 = param_5;
    lVar4 = PEM_read_bio_PrivateKey(lVar3,0,FUN_18000d840);
    BIO_free(lVar3);
    if (lVar4 != 0) {
      iVar1 = EVP_PKEY_get_id(lVar4);
      if (iVar1 != 0x43f) {
        EVP_PKEY_free(lVar4);
        uVar2 = FUN_180018820(param_2,0xfffffff2,0x18002f1f8,puVar6);
        return CONCAT44(extraout_var,uVar2);
      }
      *param_1 = lVar4;
      return 0;
    }
  }
  uVar5 = FUN_18000a7a0(param_2,param_1,"ssh-ed25519",(size_t *)0x0,(size_t *)0x0,(longlong *)0x0,
                        (size_t *)0x0,param_3,param_4,param_5);
  return uVar5;
}




undefined4 FUN_180009d40(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  lVar2 = EVP_PKEY_new_raw_public_key(0x43f,0);
  if (lVar2 == 0) {
    uVar1 = FUN_180018820(param_2,0xfffffff2,0x18002f220,param_4);
    return uVar1;
  }
  *param_1 = lVar2;
  return 0;
}




int FUN_180009db0(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong local_20;
  
  iVar2 = -1;
  lVar3 = EVP_MD_CTX_new();
  pvVar4 = (void *)0x0;
  local_20 = 0;
  iVar1 = -1;
  if (lVar3 == 0) {
LAB_180009e90:
    iVar2 = iVar1;
    *param_4 = 0;
    *param_3 = 0;
    (**(code **)(param_2 + 0x18))(pvVar4,param_2);
    if (lVar3 == 0) goto LAB_180009eac;
  }
  else {
    iVar1 = EVP_DigestSignInit(lVar3,0,0,0,param_1);
    if ((((iVar1 == 1) && (iVar1 = EVP_DigestSign(lVar3,0,&local_20,param_5,param_6), iVar1 == 1))
        && (local_20 == 0x40)) && (pvVar4 = FUN_180018690(param_2,0x40), pvVar4 != (void *)0x0)) {
      iVar2 = EVP_DigestSign(lVar3,pvVar4,&local_20,param_5,param_6);
      iVar1 = iVar2;
      if (iVar2 != 1) goto LAB_180009e90;
      *param_3 = pvVar4;
      *param_4 = local_20;
    }
  }
  EVP_MD_CTX_free(lVar3);
LAB_180009eac:
  return -(uint)(iVar2 != 1);
}




int FUN_180009ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = EVP_DigestVerifyInit(lVar2,0,0,0,param_1);
    if (iVar1 == 1) {
      iVar1 = EVP_DigestVerify(lVar2,param_2,param_3,param_4,param_5);
    }
    EVP_MD_CTX_free(lVar2);
    iVar1 = -(uint)(iVar1 != 1);
  }
  return iVar1;
}




undefined8 FUN_180009f80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname(&DAT_18002f288);
    iVar1 = EVP_DigestInit(*param_1,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_MD_CTX_free(*param_1);
    *param_1 = 0;
  }
  return 0;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180009ff0(void)

{
  ENGINE_load_builtin_engines();
  ENGINE_register_all_complete();
  return;
}




int FUN_18000a010(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  
  if (0x7fffffff < param_2) {
    return -1;
  }
  iVar1 = RAND_bytes();
  return -(uint)(iVar1 != 1);
}




undefined4
FUN_18000a040(longlong param_1,longlong **param_2,longlong **param_3,longlong *param_4,
             longlong *param_5,char *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  plVar6 = param_4;
  lVar4 = BIO_new_file(param_6,&DAT_18002eeac);
  if (lVar4 == 0) {
    uVar1 = FUN_180018820(param_1,0xfffffff0,0x18002f380,plVar6);
  }
  else {
    BIO_ctrl(lVar4,1,0,0);
    puVar7 = param_7;
    lVar5 = PEM_read_bio_PrivateKey(lVar4,0,0);
    BIO_free(lVar4);
    if (lVar5 == 0) {
      uVar2 = FUN_18000a480(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (uVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_180018820(param_1,0xfffffff0,0x18002f3e0,param_4);
      }
    }
    else {
      iVar3 = EVP_PKEY_get_id(lVar5);
      if (iVar3 == 6) {
        uVar1 = FUN_18000cc30(param_1,param_2,param_3,param_4,param_5,lVar5);
      }
      else if (iVar3 == 0x74) {
        uVar1 = FUN_18000be50(param_1,param_2,param_3,param_4,param_5,lVar5);
      }
      else if (iVar3 == 0x198) {
        uVar1 = FUN_18000c340(param_1,param_2,(size_t *)param_3,param_4,param_5,0,lVar5);
      }
      else if (iVar3 == 0x43f) {
        uVar1 = FUN_18000ca90(param_1,(longlong *)param_2,param_3,param_4,param_5,lVar5);
      }
      else {
        uVar1 = FUN_180018820(param_1,0xfffffff0,0x18002f460,puVar7);
      }
      EVP_PKEY_free(lVar5);
    }
  }
  return uVar1;
}




ulonglong FUN_18000a220(longlong param_1,size_t *param_2,size_t *param_3,longlong *param_4,
                       size_t *param_5,longlong param_6,size_t *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 extraout_var;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  longlong *plVar8;
  undefined1 *puVar9;
  
  plVar8 = param_4;
  lVar5 = BIO_new_mem_buf(param_6,(ulonglong)param_7 & 0xffffffff);
  if (lVar5 == 0) {
    uVar2 = FUN_180018820(param_1,0xfffffffa,0x18002f538,plVar8);
    uVar7 = CONCAT44(extraout_var,uVar2);
  }
  else {
    BIO_ctrl(lVar5,1,0,0);
    puVar9 = param_8;
    lVar6 = PEM_read_bio_PrivateKey(lVar5);
    uVar3 = ERR_get_error();
    BIO_free(lVar5);
    if (lVar6 == 0) {
      uVar7 = FUN_18000a7a0(param_1,(longlong *)0x0,(char *)0x0,param_2,param_3,param_4,param_5,
                            param_6,param_7,param_8);
      if ((int)uVar7 != 0) {
        if (((int)uVar3 < 0) ||
           (((cVar1 = (char)(uVar3 >> 0x17), cVar1 != '\t' || ((uVar3 & 0x7fffff) != 0x65)) &&
            ((cVar1 != '9' || ((uVar3 & 0x7fffff) != 100)))))) {
          uVar2 = FUN_180018820(param_1,0xfffffff0,0x18002f460,param_2);
          uVar7 = CONCAT44(extraout_var_01,uVar2);
        }
        else {
          uVar2 = FUN_180018820(param_1,0xffffffd0,0x18002f570,param_2);
          uVar7 = CONCAT44(extraout_var_00,uVar2);
        }
      }
    }
    else {
      iVar4 = EVP_PKEY_get_id(lVar6);
      if (iVar4 == 6) {
        uVar3 = FUN_18000cc30(param_1,param_2,param_3,param_4,(longlong *)param_5,lVar6);
      }
      else if (iVar4 == 0x74) {
        uVar3 = FUN_18000be50(param_1,param_2,param_3,param_4,(longlong *)param_5,lVar6);
      }
      else if (iVar4 == 0x198) {
        uVar3 = FUN_18000c340(param_1,param_2,param_3,param_4,(longlong *)param_5,0,lVar6);
      }
      else if (iVar4 == 0x43f) {
        uVar3 = FUN_18000ca90(param_1,(longlong *)param_2,param_3,param_4,(longlong *)param_5,lVar6)
        ;
      }
      else {
        uVar3 = FUN_180018820(param_1,0xfffffff0,0x18002f460,puVar9);
      }
      uVar7 = (ulonglong)uVar3;
      EVP_PKEY_free(lVar6);
    }
  }
  return uVar7;
}




uint FUN_18000a480(longlong param_1,longlong **param_2,longlong **param_3,longlong *param_4,
                  longlong *param_5,char *param_6,undefined1 *param_7)

{
  uint uVar1;
  int iVar2;
  FILE *_File;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  char *_Str1;
  int iVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *local_res8;
  char *local_38 [2];
  
  local_38[0] = (char *)0x0;
  local_res8 = (longlong *)0x0;
  if (param_1 == 0) {
    FUN_180018820(0,0xfffffff2,0x18002ef58,param_4);
    return 0xffffffff;
  }
  plVar9 = param_4;
  FUN_18000d910();
  _File = fopen(param_6,"r");
  if (_File == (FILE *)0x0) {
    FUN_180018820(param_1,0xfffffff0,0x18002f328,plVar9);
    uVar1 = 0xffffffff;
  }
  else {
    pplVar10 = &local_res8;
    uVar1 = FUN_18001af50(param_1,param_7,_File,pplVar10);
    fclose(_File);
    if (uVar1 == 0) {
      uVar3 = FUN_180018ad0(local_res8,(longlong *)local_38,(ulonglong *)0x0);
      _Str1 = local_38[0];
      if (((int)uVar3 == 0) && (local_38[0] != (char *)0x0)) {
        uVar1 = 0xffffffff;
        iVar2 = strcmp("ssh-ed25519",local_38[0]);
        lVar4 = 0;
        iVar8 = 0;
        lVar5 = lVar4;
        if (iVar2 == 0) {
          pplVar10 = param_3;
          uVar3 = FUN_18000c7c0(param_1,local_res8,param_2,param_3,param_4,param_5,(longlong *)0x0);
          uVar1 = (uint)uVar3;
          _Str1 = local_38[0];
        }
        do {
          lVar7 = lVar5 + 1;
          if ((&DAT_18002eeb0)[lVar5] != _Str1[lVar5]) goto LAB_18000a640;
          lVar5 = lVar7;
        } while (lVar7 != 8);
        pplVar10 = param_3;
        uVar1 = FUN_18000cde0(param_1,local_res8,param_2,param_3,param_4,param_5,(longlong *)0x0);
        _Str1 = local_38[0];
LAB_18000a640:
        do {
          lVar5 = lVar4 + 1;
          if ("ssh-dss"[lVar4] != _Str1[lVar4]) goto LAB_18000a67f;
          lVar4 = lVar5;
        } while (lVar5 != 8);
        pplVar10 = param_3;
        uVar1 = FUN_18000c070(param_1,local_res8,param_2,param_3,param_4,param_5,(longlong *)0x0);
        _Str1 = local_38[0];
LAB_18000a67f:
        if (_Str1 != (char *)0x0) {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (_Str1[lVar4] != '\0');
          if (lVar4 == 0x13) {
            iVar2 = strcmp(_Str1,"ecdsa-sha2-nistp256");
            if (iVar2 == 0) {
              uVar6 = 0x19f;
            }
            else {
              iVar2 = strcmp(_Str1,"ecdsa-sha2-nistp384");
              if (iVar2 == 0) {
                uVar6 = 0x2cb;
              }
              else {
                iVar2 = strcmp(_Str1,"ecdsa-sha2-nistp521");
                if (iVar2 == 0) {
                  uVar6 = 0x2cc;
                }
                else {
                  iVar8 = -1;
                  uVar6 = (uint)local_res8;
                }
              }
            }
            if (iVar8 == 0) {
              uVar1 = FUN_18000c5c0(param_1,uVar6,local_res8,param_2,(size_t *)param_3,param_4,
                                    param_5,(longlong *)0x0);
              pplVar10 = param_2;
            }
          }
        }
        if (local_res8 != (longlong *)0x0) {
          FUN_180019180(param_1,local_res8);
        }
        if (uVar1 != 0) {
          FUN_180018820(param_1,0xfffffff0,0x18002f360,pplVar10);
        }
      }
      else {
        FUN_180018820(param_1,0xfffffff2,0x18002efa0,pplVar10);
        uVar1 = 0xffffffff;
      }
    }
    else {
      FUN_180018820(param_1,0xfffffff0,0x18002f348,pplVar10);
    }
  }
  return uVar1;
}




ulonglong FUN_18000a7a0(longlong param_1,longlong *param_2,char *param_3,size_t *param_4,
                       size_t *param_5,longlong *param_6,size_t *param_7,longlong param_8,
                       size_t *param_9,undefined1 *param_10)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  undefined4 extraout_var_00;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  undefined4 extraout_var_01;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  size_t sVar15;
  longlong *local_res8;
  longlong *local_res10;
  char *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  void *local_40;
  
  uVar13 = 0;
  iVar5 = 0;
  local_68 = (char *)0x0;
  local_res8 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    *param_2 = 0;
  }
  local_res10 = param_2;
  if (param_1 == 0) {
    uVar2 = FUN_180018820(0,0xfffffff2,0x18002ef58,param_4);
    return CONCAT44(extraout_var,uVar2);
  }
  if (param_3 != (char *)0x0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (param_3[uVar6] != '\0');
    if (0xb < uVar6) {
LAB_18000a83f:
      uVar2 = FUN_180018820(param_1,0xfffffff2,0x18002f4b8,param_4);
      return CONCAT44(extraout_var_00,uVar2);
    }
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (param_3[uVar6] != '\0');
    if (uVar6 < 7) goto LAB_18000a83f;
  }
  FUN_18000d910();
  uVar6 = FUN_18001ba20(param_1,param_10,param_8,(ulonglong)param_9,&local_res8);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar7 = FUN_180018ad0(local_res8,(longlong *)&local_68,(ulonglong *)0x0);
  pcVar14 = local_68;
  if (((int)uVar7 != 0) || (local_68 == (char *)0x0)) {
    uVar2 = FUN_180018820(param_1,0xfffffff2,0x18002efa0,param_9);
    return CONCAT44(extraout_var_01,uVar2);
  }
  uVar6 = 0xfffffff0;
  iVar3 = strcmp("ssh-ed25519",local_68);
  if ((iVar3 == 0) &&
     ((param_3 == (char *)0x0 || (iVar3 = strcmp("ssh-ed25519",param_3), iVar3 == 0)))) {
    param_9 = param_5;
    uVar6 = FUN_18000c7c0(param_1,local_res8,param_4,param_5,param_6,param_7,param_2);
    uVar6 = uVar6 & 0xffffffff;
    pcVar14 = local_68;
  }
  iVar3 = strcmp("sk-ssh-ed25519@openssh.com",pcVar14);
  uVar12 = uVar13;
  if ((iVar3 == 0) &&
     ((param_3 == (char *)0x0 || (iVar3 = strcmp("sk-ssh-ed25519@openssh.com",param_3), iVar3 == 0))
     )) {
    plVar1 = local_res8;
    local_60 = 0;
    local_50 = 0;
    uVar7 = FUN_180018ad0(local_res8,(longlong *)&local_48,&local_50);
    if (((int)uVar7 == 0) && (local_50 == 0x20)) {
      uVar7 = FUN_180018ad0(plVar1,(longlong *)&local_40,&local_60);
      if ((int)uVar7 != 0) {
        pcVar14 = "No SK application.";
        goto LAB_18000aaff;
      }
      param_9 = (size_t *)0x20;
      lVar9 = EVP_PKEY_new_raw_public_key(0x43f,0,local_48);
      pcVar14 = (char *)(**(code **)(param_1 + 8))(0x1a,param_1);
      if (pcVar14 != (char *)0x0) {
        sVar15 = local_60 + 0x46;
        pvVar8 = FUN_180018690(param_1,sVar15);
        param_2 = local_res10;
        if (pvVar8 != (void *)0x0) {
          local_58 = pvVar8;
          FUN_1800190c0((longlong *)&local_58,"sk-ssh-ed25519@openssh.com",0x1a);
          FUN_1800190c0((longlong *)&local_58,local_48,0x20);
          FUN_1800190c0((longlong *)&local_58,local_40,local_60);
          builtin_strncpy(pcVar14,"sk-ssh-ed25519@openssh.com",0x1a);
          if (param_4 == (size_t *)0x0) {
            (**(code **)(param_1 + 0x18))(pcVar14,param_1);
          }
          else {
            *param_4 = (size_t)pcVar14;
          }
          if (param_5 != (size_t *)0x0) {
            *param_5 = 0x1a;
          }
          if (param_6 == (longlong *)0x0) {
            (**(code **)(param_1 + 0x18))(pvVar8,param_1);
          }
          else {
            *param_6 = (longlong)pvVar8;
          }
          param_2 = local_res10;
          if (param_7 != (size_t *)0x0) {
            *param_7 = sVar15;
          }
          if (local_res10 == (longlong *)0x0) {
            if (lVar9 != 0) {
              EVP_PKEY_free(lVar9);
            }
            uVar6 = 0;
            pcVar14 = local_68;
          }
          else {
            *local_res10 = lVar9;
            uVar6 = uVar13;
            pcVar14 = local_68;
          }
          goto LAB_18000ab20;
        }
      }
      FUN_180018820(param_1,0xfffffffa,0x18002f140,param_9);
      if (lVar9 != 0) {
        EVP_PKEY_free(lVar9);
      }
      if (pcVar14 != (char *)0x0) {
        (**(code **)(param_1 + 0x18))(pcVar14,param_1);
      }
    }
    else {
      pcVar14 = "Wrong public key length";
LAB_18000aaff:
      FUN_180018820(param_1,0xfffffff2,(longlong)pcVar14,param_9);
    }
    uVar6 = 0xffffffff;
    pcVar14 = local_68;
  }
LAB_18000ab20:
  do {
    uVar10 = uVar12 + 1;
    uVar11 = uVar13;
    if ((&DAT_18002eeb0)[uVar12] != pcVar14[uVar12]) goto LAB_18000aba0;
    uVar12 = uVar10;
  } while (uVar10 != 8);
  uVar12 = uVar13;
  if (param_3 != (char *)0x0) {
    do {
      uVar10 = uVar12 + 1;
      if ((&DAT_18002eeb0)[uVar12] != param_3[uVar12]) goto LAB_18000aba0;
      uVar12 = uVar10;
    } while (uVar10 != 8);
  }
  param_9 = param_5;
  uVar4 = FUN_18000cde0(param_1,local_res8,param_4,param_5,param_6,(longlong *)param_7,param_2);
  uVar6 = (ulonglong)uVar4;
  pcVar14 = local_68;
LAB_18000aba0:
  do {
    uVar12 = uVar11 + 1;
    if ("ssh-dss"[uVar11] != pcVar14[uVar11]) goto LAB_18000ac01;
    uVar11 = uVar12;
  } while (uVar12 != 8);
  if (param_3 != (char *)0x0) {
    do {
      uVar12 = uVar13 + 1;
      if ("ssh-dss"[uVar13] != param_3[uVar13]) goto LAB_18000ac01;
      uVar13 = uVar12;
    } while (uVar12 != 8);
  }
  param_9 = param_5;
  uVar4 = FUN_18000c070(param_1,local_res8,param_4,param_5,param_6,(longlong *)param_7,param_2);
  uVar6 = (ulonglong)uVar4;
  pcVar14 = local_68;
LAB_18000ac01:
  iVar3 = strcmp("sk-ecdsa-sha2-nistp256@openssh.com",pcVar14);
  if (iVar3 == 0) {
    uVar4 = FUN_18000d140(param_1,local_res8,param_4,param_5,param_6,param_7,(undefined1 *)0x0,
                          (longlong *)0x0,(longlong *)0x0,(ulonglong *)0x0,param_2);
    param_9 = param_5;
  }
  else {
    if (pcVar14 == (char *)0x0) goto LAB_18000ad1c;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar14[lVar9] != '\0');
    if (lVar9 != 0x13) goto LAB_18000ad1c;
    iVar3 = strcmp(pcVar14,"ecdsa-sha2-nistp256");
    if (iVar3 == 0) {
      uVar4 = 0x19f;
    }
    else {
      iVar3 = strcmp(pcVar14,"ecdsa-sha2-nistp384");
      if (iVar3 == 0) {
        uVar4 = 0x2cb;
      }
      else {
        iVar3 = strcmp(pcVar14,"ecdsa-sha2-nistp521");
        if (iVar3 == 0) {
          uVar4 = 0x2cc;
        }
        else {
          iVar5 = -1;
          uVar4 = (uint)local_res10;
        }
      }
    }
    if ((iVar5 != 0) ||
       ((param_3 != (char *)0x0 && (iVar5 = strcmp("ssh-ecdsa",param_3), iVar5 != 0))))
    goto LAB_18000ad1c;
    uVar4 = FUN_18000c5c0(param_1,uVar4,local_res8,param_4,param_5,param_6,(longlong *)param_7,
                          param_2);
    param_9 = param_4;
  }
  uVar6 = (ulonglong)uVar4;
LAB_18000ad1c:
  if ((int)uVar6 == -0x10) {
    uVar4 = FUN_180018820(param_1,0xfffffff0,0x18002f4d0,param_9);
    uVar6 = (ulonglong)uVar4;
  }
  if (local_res8 != (longlong *)0x0) {
    FUN_180019180(param_1,local_res8);
  }
  return uVar6;
}




undefined8
FUN_18000ad90(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,longlong param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined8 param_16,
             undefined4 param_17)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  undefined8 local_38;
  
  uVar3 = 0;
  local_38 = 0;
  local_res8 = 0;
  uVar1 = BN_new();
  BN_bin2bn(param_2,param_3,uVar1);
  uVar2 = BN_new();
  BN_bin2bn(param_4,param_5,uVar2);
  uVar5 = uVar3;
  uVar6 = uVar3;
  uVar4 = uVar3;
  if (param_6 != 0) {
    uVar3 = BN_new();
    BN_bin2bn(param_6,param_7,uVar3);
    uVar4 = BN_new();
    BN_bin2bn(param_8,param_9,uVar4);
    uVar5 = BN_new();
    BN_bin2bn(param_10,param_11,uVar5);
    uVar6 = BN_new();
    BN_bin2bn(param_12,param_13,uVar6);
    local_38 = BN_new();
    BN_bin2bn(param_14,param_15,local_38);
    local_res8 = BN_new();
    BN_bin2bn(param_16,param_17,local_res8);
  }
  uVar7 = RSA_new();
  *param_1 = uVar7;
  RSA_set0_key(uVar7,uVar2,uVar1,uVar3);
  RSA_set0_factors(*param_1,uVar4,uVar5);
  RSA_set0_crt_params(*param_1,uVar6,local_38,local_res8);
  return 0;
}




int FUN_18000af30(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar5 = 0;
  local_res20 = 0;
  local_res18 = 0;
  local_res10 = 0;
  iVar7 = 0;
  RSA_get0_key(param_1,0,0,&local_res10);
  RSA_get0_factors(param_1,&local_res20,&local_res18);
  lVar2 = BN_CTX_new();
  if (lVar2 == 0) {
    return -1;
  }
  lVar3 = BN_new();
  if (lVar3 == 0) {
    BN_CTX_free(lVar2);
    return -1;
  }
  lVar4 = BN_new();
  if (lVar4 != 0) {
    lVar5 = BN_new();
    if (lVar5 != 0) {
      uVar6 = BN_value_one();
      iVar1 = BN_sub(lVar3,local_res18,uVar6);
      if (iVar1 != 0) {
        iVar1 = BN_div(0,lVar5,local_res10,lVar3,lVar2);
        if (iVar1 != 0) {
          uVar6 = BN_value_one();
          iVar1 = BN_sub(lVar3,local_res20,uVar6);
          if (iVar1 != 0) {
            iVar1 = BN_div(0,lVar4,local_res10,lVar3,lVar2);
            if (iVar1 != 0) {
              RSA_set0_crt_params(param_1,lVar4,lVar5,0);
              goto LAB_18000b063;
            }
          }
        }
      }
    }
  }
  iVar7 = -1;
LAB_18000b063:
  BN_clear_free(lVar3);
  BN_CTX_free(lVar2);
  if (iVar7 != 0) {
    if (lVar4 != 0) {
      BN_clear_free(lVar4);
    }
    if (lVar5 != 0) {
      BN_clear_free(lVar5);
    }
  }
  return iVar7;
}




int FUN_18000b0b0(longlong *param_1,longlong param_2,char *param_3,longlong **param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  FILE *_File;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *local_res8;
  longlong local_28 [2];
  
  pplVar8 = param_4;
  FUN_18000d910();
  lVar5 = 0;
  *param_1 = 0;
  lVar2 = BIO_new_file(param_3,&DAT_18002eeac);
  if (lVar2 != 0) {
    pplVar8 = param_4;
    lVar3 = PEM_read_bio_RSAPrivateKey(lVar2,0,FUN_18000d840);
    *param_1 = lVar3;
    BIO_free(lVar2);
    if (*param_1 != 0) {
      return (*param_1 != 0) - 1;
    }
  }
  local_28[0] = 0;
  local_res8 = (longlong *)0x0;
  if (param_2 == 0) {
    pcVar7 = "Session is required";
    param_2 = 0;
  }
  else {
    FUN_18000d910();
    _File = fopen(param_3,"r");
    if (_File == (FILE *)0x0) {
      pcVar7 = "Unable to open OpenSSH RSA private key file";
      uVar6 = 0xfffffff0;
      goto LAB_18000b232;
    }
    pplVar8 = &local_res8;
    iVar1 = FUN_18001af50(param_2,(undefined1 *)param_4,_File,pplVar8);
    fclose(_File);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar4 = FUN_180018ad0(local_res8,local_28,(ulonglong *)0x0);
    if (((int)uVar4 == 0) && (local_28[0] != 0)) {
      do {
        pcVar7 = &DAT_18002eeb0 + lVar5;
        lVar5 = lVar5 + 1;
        if (*pcVar7 != *(char *)(local_28[0] + -1 + lVar5)) {
          iVar1 = -1;
          goto LAB_18000b20f;
        }
      } while (lVar5 != 8);
      iVar1 = FUN_18000cde0(param_2,local_res8,(undefined8 *)0x0,(undefined8 *)0x0,(undefined8 *)0x0
                            ,(longlong *)0x0,param_1);
LAB_18000b20f:
      if (local_res8 == (longlong *)0x0) {
        return iVar1;
      }
      FUN_180019180(param_2,local_res8);
      return iVar1;
    }
    pcVar7 = "Public key type in decrypted key data not found";
  }
  uVar6 = 0xfffffff2;
LAB_18000b232:
  FUN_180018820(param_2,uVar6,(longlong)pcVar7,pplVar8);
  return -1;
}




ulonglong FUN_18000b260(longlong *param_1,longlong param_2,longlong param_3,size_t *param_4,
                       undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18000d910();
  *param_1 = 0;
  lVar1 = BIO_new_mem_buf(param_3,(ulonglong)param_4 & 0xffffffff);
  if (lVar1 != 0) {
    lVar2 = PEM_read_bio_RSAPrivateKey(lVar1,0,FUN_18000d840);
    *param_1 = lVar2;
    BIO_free(lVar1);
    if (*param_1 != 0) {
      return (ulonglong)((*param_1 != 0) - 1);
    }
  }
  uVar3 = FUN_18000a7a0(param_2,param_1,"ssh-rsa",(size_t *)0x0,(size_t *)0x0,(longlong *)0x0,
                        (size_t *)0x0,param_3,param_4,param_5);
  return uVar3;
}




undefined8
FUN_18000b340(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,ulonglong *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  
  uVar4 = param_4;
  local_res8[0] = RSA_size(param_2);
  lVar2 = (**(code **)(param_1 + 8))(local_res8[0],param_1);
  if (lVar2 == 0) {
LAB_18000b3cf:
    uVar3 = 0xffffffff;
  }
  else {
    if (param_4 == 0x14) {
      uVar3 = 0x40;
LAB_18000b3a8:
      iVar1 = RSA_sign(uVar3,param_3,param_4 & 0xffffffff,lVar2,local_res8,param_2);
      if (iVar1 == 0) {
        (**(code **)(param_1 + 0x18))(lVar2,param_1);
        goto LAB_18000b3cf;
      }
    }
    else {
      if (param_4 == 0x20) {
        uVar3 = 0x2a0;
        goto LAB_18000b3a8;
      }
      if (param_4 == 0x40) {
        uVar3 = 0x2a2;
        goto LAB_18000b3a8;
      }
      FUN_180018820(param_1,0xfffffff2,0x18002f248,uVar4);
    }
    *param_5 = lVar2;
    *param_6 = (ulonglong)local_res8[0];
    uVar3 = 0;
  }
  return uVar3;
}




int FUN_18000b420(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  void *_Memory;
  undefined8 uVar2;
  
  _Memory = malloc(0x14);
  if (_Memory != (void *)0x0) {
    uVar2 = FUN_18000b6a0(param_4,param_5,_Memory);
    if ((int)uVar2 == 0) {
      iVar1 = RSA_verify(0x40,_Memory,0x14,param_2,param_3,param_1);
      free(_Memory);
      return -(uint)(iVar1 != 1);
    }
    free(_Memory);
  }
  return -1;
}




undefined8
FUN_18000b4d0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,ulonglong *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  
  uVar4 = param_4;
  local_res8[0] = RSA_size(param_2);
  lVar2 = (**(code **)(param_1 + 8))(local_res8[0],param_1);
  if (lVar2 == 0) {
LAB_18000b55f:
    uVar3 = 0xffffffff;
  }
  else {
    if (param_4 == 0x14) {
      uVar3 = 0x40;
LAB_18000b538:
      iVar1 = RSA_sign(uVar3,param_3,param_4 & 0xffffffff,lVar2,local_res8,param_2);
      if (iVar1 == 0) {
        (**(code **)(param_1 + 0x18))(lVar2,param_1);
        goto LAB_18000b55f;
      }
    }
    else {
      if (param_4 == 0x20) {
        uVar3 = 0x2a0;
        goto LAB_18000b538;
      }
      if (param_4 == 0x40) {
        uVar3 = 0x2a2;
        goto LAB_18000b538;
      }
      FUN_180018820(param_1,0xfffffff2,0x18002f248,uVar4);
    }
    *param_5 = lVar2;
    *param_6 = (ulonglong)local_res8[0];
    uVar3 = 0;
  }
  return uVar3;
}




int FUN_18000b5b0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Memory;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _Memory = malloc(param_2);
  if (_Memory == (void *)0x0) {
    return -1;
  }
  if (param_2 == 0x14) {
    uVar3 = 0x40;
    uVar2 = FUN_18000b6a0(param_5,param_6,_Memory);
    iVar1 = (int)uVar2;
  }
  else if (param_2 == 0x20) {
    uVar3 = 0x2a0;
    uVar2 = FUN_18000b790(param_5,param_6,_Memory);
    iVar1 = (int)uVar2;
  }
  else {
    if (param_2 != 0x40) goto LAB_18000b679;
    uVar3 = 0x2a2;
    uVar2 = FUN_18000b8e0(param_5,param_6,_Memory);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    iVar1 = RSA_verify(uVar3,_Memory,param_2 & 0xffffffff,param_3,param_4,param_1);
    free(_Memory);
    return -(uint)(iVar1 != 1);
  }
LAB_18000b679:
  free(_Memory);
  return -1;
}




undefined8 FUN_18000b6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname(&DAT_18002f268);
    iVar1 = EVP_DigestInit(lVar2,uVar3);
    if (iVar1 != 0) {
      EVP_DigestUpdate(lVar2,param_1,param_2);
      EVP_DigestFinal(lVar2,param_3,0);
      EVP_MD_CTX_free(lVar2);
      return 0;
    }
    EVP_MD_CTX_free(lVar2);
  }
  return 1;
}




undefined8 FUN_18000b730(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname(&DAT_18002f268);
    iVar1 = EVP_DigestInit(*param_1,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_MD_CTX_free(*param_1);
    *param_1 = 0;
  }
  return 0;
}




undefined8 FUN_18000b790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname("sha256");
    iVar1 = EVP_DigestInit(lVar2,uVar3);
    if (iVar1 != 0) {
      EVP_DigestUpdate(lVar2,param_1,param_2);
      EVP_DigestFinal(lVar2,param_3,0);
      EVP_MD_CTX_free(lVar2);
      return 0;
    }
    EVP_MD_CTX_free(lVar2);
  }
  return 1;
}




undefined8 FUN_18000b820(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname("sha256");
    iVar1 = EVP_DigestInit(*param_1,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_MD_CTX_free(*param_1);
    *param_1 = 0;
  }
  return 0;
}




undefined8 FUN_18000b880(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname("sha384");
    iVar1 = EVP_DigestInit(*param_1,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_MD_CTX_free(*param_1);
    *param_1 = 0;
  }
  return 0;
}




undefined8 FUN_18000b8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname("sha512");
    iVar1 = EVP_DigestInit(lVar2,uVar3);
    if (iVar1 != 0) {
      EVP_DigestUpdate(lVar2,param_1,param_2);
      EVP_DigestFinal(lVar2,param_3,0);
      EVP_MD_CTX_free(lVar2);
      return 0;
    }
    EVP_MD_CTX_free(lVar2);
  }
  return 1;
}




undefined8 FUN_18000b970(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    uVar3 = EVP_get_digestbyname("sha512");
    iVar1 = EVP_DigestInit(*param_1,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_MD_CTX_free(*param_1);
    *param_1 = 0;
  }
  return 0;
}




ulonglong FUN_18000b9d0(longlong param_1,undefined8 *param_2,size_t *param_3,longlong *param_4,
                       size_t *param_5,undefined4 *param_6,undefined1 *param_7,longlong *param_8,
                       longlong *param_9,ulonglong *param_10,longlong param_11,size_t *param_12,
                       undefined1 *param_13)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 extraout_var;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar4 = 0xffffffff;
  plVar5 = param_4;
  lVar2 = BIO_new_mem_buf(param_11,(ulonglong)param_12 & 0xffffffff);
  if (lVar2 == 0) {
    uVar1 = FUN_180018820(param_1,0xfffffffa,0x18002f538,plVar5);
    return CONCAT44(extraout_var,uVar1);
  }
  BIO_ctrl(lVar2,1,0,0);
  lVar3 = PEM_read_bio_PrivateKey(lVar2,0,0,param_13);
  BIO_free(lVar2);
  if (lVar3 == 0) {
    uVar4 = FUN_18000bb40(param_1,(longlong *)0x0,(char *)0x0,param_2,param_3,param_4,param_5,
                          param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}




ulonglong FUN_18000bb40(longlong param_1,longlong *param_2,char *param_3,undefined8 *param_4,
                       size_t *param_5,longlong *param_6,size_t *param_7,undefined4 *param_8,
                       undefined1 *param_9,longlong *param_10,longlong *param_11,ulonglong *param_12
                       ,longlong param_13,size_t *param_14,undefined1 *param_15)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined4 extraout_var_00;
  undefined8 uVar5;
  undefined4 extraout_var_01;
  char *_Str2;
  longlong *local_res8;
  char *local_res10;
  
  local_res10 = (char *)0x0;
  local_res8 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != 0) {
    if (param_3 != (char *)0x0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 < 7) {
        uVar1 = FUN_180018820(param_1,0xfffffff2,0x18002f4b8,param_4);
        return CONCAT44(extraout_var_00,uVar1);
      }
    }
    FUN_18000d910();
    uVar4 = FUN_18001ba20(param_1,param_15,param_13,(ulonglong)param_14,&local_res8);
    if ((int)uVar4 == 0) {
      uVar5 = FUN_180018ad0(local_res8,(longlong *)&local_res10,(ulonglong *)0x0);
      _Str2 = local_res10;
      if (((int)uVar5 == 0) && (local_res10 != (char *)0x0)) {
        uVar4 = 0xfffffff0;
        iVar2 = strcmp("sk-ssh-ed25519@openssh.com",local_res10);
        if ((iVar2 == 0) &&
           ((*param_8 = 6, param_3 == (char *)0x0 ||
            (iVar2 = strcmp("sk-ssh-ed25519@openssh.com",param_3), iVar2 == 0)))) {
          param_14 = param_5;
          uVar4 = FUN_18000d520(param_1,local_res8,param_4,param_5,param_6,param_7,param_9,param_10,
                                param_11,param_12,param_2);
          uVar4 = uVar4 & 0xffffffff;
          _Str2 = local_res10;
        }
        iVar2 = strcmp("sk-ecdsa-sha2-nistp256@openssh.com",_Str2);
        if (iVar2 == 0) {
          *param_8 = 3;
          uVar3 = FUN_18000d140(param_1,local_res8,param_4,param_5,param_6,param_7,param_9,param_10,
                                param_11,param_12,param_2);
          uVar4 = (ulonglong)uVar3;
          param_14 = param_5;
        }
        if ((int)uVar4 == -0x10) {
          uVar3 = FUN_180018820(param_1,0xfffffff0,0x18002f4d0,param_14);
          uVar4 = (ulonglong)uVar3;
        }
        if (local_res8 != (longlong *)0x0) {
          FUN_180019180(param_1,local_res8);
        }
      }
      else {
        uVar1 = FUN_180018820(param_1,0xfffffff2,0x18002efa0,param_14);
        uVar4 = CONCAT44(extraout_var_01,uVar1);
      }
    }
    return uVar4;
  }
  uVar1 = FUN_180018820(0,0xfffffff2,0x18002ef58,param_4);
  return CONCAT44(extraout_var,uVar1);
}




char * FUN_18000be10(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 == 7) {
    iVar1 = memcmp(param_2,&DAT_18002eeb0,7);
    pcVar2 = (char *)0x0;
    if (iVar1 == 0) {
      pcVar2 = "rsa-sha2-512,rsa-sha2-256,ssh-rsa";
    }
    return pcVar2;
  }
  return (char *)0x0;
}




undefined4
FUN_18000be50(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar8 = param_4;
  lVar4 = EVP_PKEY_get1_DSA(param_6);
  if (lVar4 != 0) {
    puVar5 = (undefined4 *)(**(code **)(param_1 + 8))(7,param_1);
    if (puVar5 == (undefined4 *)0x0) {
      DSA_free(lVar4);
    }
    else {
      puVar8 = &local_38;
      DSA_get0_pqg(lVar4,&local_48,&local_40);
      DSA_get0_key(lVar4,&local_30,0);
      iVar1 = BN_num_bits(local_48);
      iVar9 = ((int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3) + 1;
      iVar1 = BN_num_bits(local_40);
      iVar10 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
      iVar1 = BN_num_bits(local_38);
      iVar1 = ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) + 1;
      iVar2 = BN_num_bits(local_30);
      iVar2 = ((int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3) + 1;
      puVar6 = (undefined1 *)
               (**(code **)(param_1 + 8))(iVar2 + iVar1 + iVar10 + 0x1c + iVar9,param_1);
      if (puVar6 != (undefined1 *)0x0) {
        FUN_180018d00(puVar6,7);
        *(undefined4 *)(puVar6 + 4) = 0x2d687373;
        *(undefined2 *)(puVar6 + 8) = 0x7364;
        puVar6[10] = 0x73;
        puVar7 = FUN_18000d8a0(puVar6 + 0xb,local_48,iVar9);
        puVar7 = FUN_18000d8a0(puVar7,local_40,iVar10 + 1);
        puVar7 = FUN_18000d8a0(puVar7,local_38,iVar1);
        puVar7 = FUN_18000d8a0(puVar7,local_30,iVar2);
        DSA_free(lVar4);
        *puVar5 = 0x2d687373;
        *(undefined2 *)(puVar5 + 1) = 0x7364;
        *(undefined1 *)((longlong)puVar5 + 6) = 0x73;
        *param_2 = puVar5;
        *param_3 = 7;
        *param_4 = puVar6;
        *param_5 = (longlong)puVar7 - (longlong)puVar6;
        return 0;
      }
      DSA_free(lVar4);
      (**(code **)(param_1 + 0x18))(puVar5,param_1);
    }
  }
  uVar3 = FUN_180018820(param_1,0xfffffffa,0x18002eeb8,puVar8);
  return uVar3;
}




undefined4
FUN_18000c070(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 local_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar8 = param_4;
  uVar2 = FUN_1800189c0(param_2,&local_50,(ulonglong *)local_58);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1800189c0(param_2,&local_60,(ulonglong *)local_68);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1800189c0(param_2,&local_70,(ulonglong *)local_78);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1800189c0(param_2,&local_80,(ulonglong *)local_88);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_1800189c0(param_2,&local_90,(ulonglong *)local_98);
          if ((int)uVar2 == 0) {
            local_48 = local_90;
            local_a0 = 0;
            local_40 = BN_new();
            BN_bin2bn(local_50,local_58[0],local_40);
            uVar2 = BN_new();
            BN_bin2bn(local_60,local_68[0],uVar2);
            uVar3 = BN_new();
            BN_bin2bn(local_70,local_78[0],uVar3);
            uVar4 = BN_new();
            BN_bin2bn(local_80,local_88[0],uVar4);
            if (local_98[0] != 0) {
              local_a0 = BN_new();
              BN_bin2bn(local_48,local_98[0],local_a0);
            }
            lVar5 = DSA_new();
            DSA_set0_pqg(lVar5,local_40,uVar2,uVar3);
            DSA_set0_key(lVar5,uVar4,local_a0);
            if (((lVar5 == 0) || (param_5 == (undefined8 *)0x0)) || (param_3 == (undefined8 *)0x0))
            {
              uVar1 = 0;
            }
            else {
              lVar6 = EVP_PKEY_new();
              EVP_PKEY_set1_DSA(lVar6,lVar5);
              uVar1 = FUN_18000be50(param_1,param_3,param_4,param_5,param_6,lVar6);
              if (lVar6 != 0) {
                EVP_PKEY_free(lVar6);
              }
            }
            if (param_7 == (longlong *)0x0) {
              DSA_free(lVar5);
            }
            else {
              *param_7 = lVar5;
            }
            return uVar1;
          }
          pcVar7 = "DSA no private key";
        }
        else {
          pcVar7 = "DSA no public key";
        }
      }
      else {
        pcVar7 = "DSA no g";
      }
    }
    else {
      pcVar7 = "DSA no q";
    }
  }
  else {
    pcVar7 = "DSA no p";
  }
  FUN_180018820(param_1,0xfffffff2,(longlong)pcVar7,puVar8);
  return 0xffffffff;
}




undefined4
FUN_18000c340(longlong param_1,undefined8 *param_2,size_t *param_3,longlong *param_4,
             longlong *param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Dst;
  ulonglong _Size;
  ulonglong uVar6;
  size_t sVar7;
  char *pcVar8;
  int iVar9;
  longlong *plVar10;
  void *_Memory;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  
  iVar9 = 0;
  _Memory = (void *)0x0;
  plVar10 = param_4;
  lVar3 = BN_CTX_new();
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  lVar4 = EVP_PKEY_get1_EC_KEY(param_7);
  local_40 = lVar4;
  if (lVar4 == 0) {
    BN_CTX_free(lVar3);
    return 0xffffffff;
  }
  local_48 = EC_KEY_get0_public_key(lVar4);
  local_50 = EC_KEY_get0_group(lVar4);
  uVar5 = EC_KEY_get0_group(lVar4);
  iVar1 = EC_GROUP_get_curve_name(uVar5);
  sVar7 = 0x22;
  if (param_6 == 0) {
    sVar7 = 0x13;
  }
  *param_3 = sVar7;
  _Dst = (void *)(**(code **)(param_1 + 8))(sVar7,param_1);
  if (_Dst == (void *)0x0) {
    uVar2 = FUN_180018820(param_1,0xfffffffa,0x18002c9a8,plVar10);
    return uVar2;
  }
  if (param_6 == 0) {
    if (iVar1 == 0x19f) {
      pcVar8 = "ecdsa-sha2-nistp256";
      goto LAB_18000c456;
    }
    if (iVar1 == 0x2cb) {
      pcVar8 = "ecdsa-sha2-nistp384";
      goto LAB_18000c456;
    }
    if (iVar1 == 0x2cc) {
      pcVar8 = "ecdsa-sha2-nistp521";
      goto LAB_18000c456;
    }
  }
  else {
    pcVar8 = "sk-ecdsa-sha2-nistp256@openssh.com";
LAB_18000c456:
    memcpy(_Dst,pcVar8,*param_3);
    lVar4 = local_48;
    _Size = EC_POINT_point2oct(local_50,local_48,4,0,0,lVar3);
    _Memory = (void *)0x0;
    if (((_Size < 0x86) && (_Memory = malloc(_Size), _Memory != (void *)0x0)) &&
       (uVar6 = EC_POINT_point2oct(local_50,lVar4,4,_Memory,_Size,lVar3), uVar6 == _Size)) {
      local_48 = *param_3 + 0x14 + _Size;
      lVar4 = (**(code **)(param_1 + 8))(local_48,param_1);
      if (lVar4 != 0) {
        local_58 = lVar4;
        FUN_1800190c0(&local_58,_Dst,*param_3);
        pcVar8 = "nistp256";
        if (param_6 == 0) {
          pcVar8 = (char *)((longlong)_Dst + 0xb);
        }
        FUN_1800190c0(&local_58,pcVar8,8);
        FUN_1800190c0(&local_58,_Memory,_Size);
        *param_2 = _Dst;
        *param_4 = lVar4;
        *param_5 = local_48;
        goto LAB_18000c569;
      }
    }
  }
  iVar9 = -1;
LAB_18000c569:
  EC_KEY_free(local_40);
  BN_CTX_free(lVar3);
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  if (iVar9 != 0) {
    (**(code **)(param_1 + 0x18))(_Dst,param_1);
    return 0xffffffff;
  }
  return 0;
}




uint FUN_18000c5c0(longlong param_1,uint param_2,longlong *param_3,undefined8 *param_4,
                  size_t *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18 [2];
  
  local_48 = 0;
  puVar8 = param_4;
  uVar4 = FUN_180018ad0(param_3,local_18,&local_40);
  if (((int)uVar4 == 0) && (local_40 != 0)) {
    uVar4 = FUN_180018ad0(param_3,&local_30,&local_38);
    if ((int)uVar4 == 0) {
      uVar4 = FUN_1800189c0(param_3,&local_20,(ulonglong *)local_28);
      if ((int)uVar4 == 0) {
        uVar9 = (ulonglong)param_2;
        iVar2 = FUN_1800093b0(&local_48,local_30,local_38,param_2);
        if (iVar2 == 0) {
          lVar5 = BN_new();
          if (lVar5 != 0) {
            BN_bin2bn(local_20,local_28[0],lVar5);
            lVar1 = local_48;
            iVar2 = EC_KEY_set_private_key(local_48,lVar5);
            uVar3 = (uint)(iVar2 != 1);
            if ((((iVar2 == 1) && (lVar1 != 0)) && (param_6 != (longlong *)0x0)) &&
               (param_4 != (undefined8 *)0x0)) {
              lVar5 = EVP_PKEY_new();
              EVP_PKEY_set1_EC_KEY(lVar5,lVar1);
              uVar3 = FUN_18000c340(param_1,param_4,param_5,param_6,param_7,0,lVar5);
              if (lVar5 != 0) {
                EVP_PKEY_free(lVar5);
              }
            }
            if (param_8 == (longlong *)0x0) {
              EC_KEY_free(lVar1);
              return uVar3;
            }
            *param_8 = lVar1;
            return uVar3;
          }
          uVar6 = 0xfffffffa;
          pcVar7 = "Unable to allocate memory for private key data";
        }
        else {
          uVar6 = 0xfffffff2;
          pcVar7 = "ECDSA could not create key";
        }
        FUN_180018820(param_1,uVar6,(longlong)pcVar7,uVar9);
        if (local_48 == 0) {
          return 0xffffffff;
        }
        EC_KEY_free();
        return 0xffffffff;
      }
      pcVar7 = "ECDSA no exponent";
    }
    else {
      pcVar7 = "ECDSA no point";
    }
  }
  else {
    pcVar7 = "ECDSA no curve";
  }
  FUN_180018820(param_1,0xfffffff2,(longlong)pcVar7,puVar8);
  return 0xffffffff;
}




undefined8
FUN_18000c7c0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong local_48;
  void *local_40;
  longlong local_38;
  void *local_30;
  void *local_28 [2];
  
  puVar4 = (undefined8 *)0x0;
  local_48 = 0;
  puVar9 = param_4;
  uVar1 = FUN_180018ad0(param_2,(longlong *)local_28,&local_48);
  if (((int)uVar1 == 0) && (local_48 == 0x20)) {
    uVar1 = FUN_180018ad0(param_2,&local_38,&local_48);
    if (((int)uVar1 == 0) && (local_48 == 0x40)) {
      uVar10 = 0x20;
      lVar2 = EVP_PKEY_new_raw_private_key(0x43f,0,local_38);
      uVar1 = FUN_180018ad0(param_2,(longlong *)&local_30,&local_48);
      if ((int)uVar1 == 0) {
        if ((local_48 != 0) && (pvVar3 = FUN_180018690(param_1,local_48 + 1), pvVar3 != (void *)0x0)
           ) {
          memcpy(pvVar3,local_30,local_48);
          *(undefined1 *)((longlong)pvVar3 + local_48) = 0;
          (**(code **)(param_1 + 0x18))(pvVar3,param_1);
        }
        uVar6 = 1;
        pbVar5 = (byte *)param_2[1];
        while (pbVar5 < (byte *)(param_2[2] + *param_2)) {
          if (*pbVar5 != uVar6) {
            uVar7 = 0xfffffff2;
            pcVar8 = "Wrong padding";
            goto LAB_18000c940;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 1;
          param_2[1] = (longlong)pbVar5;
        }
        puVar4 = (undefined8 *)(**(code **)(param_1 + 8))(0xb,param_1);
        if (puVar4 == (undefined8 *)0x0) {
          uVar7 = 0xfffffffa;
          pcVar8 = "Unable to allocate memory for ED25519 key";
        }
        else {
          pvVar3 = FUN_180018690(param_1,0x33);
          if (pvVar3 != (void *)0x0) {
            local_40 = pvVar3;
            FUN_1800190c0((longlong *)&local_40,&DAT_18002f0a8,0xb);
            FUN_1800190c0((longlong *)&local_40,local_28[0],0x20);
            *puVar4 = 0x353264652d687373;
            *(undefined2 *)(puVar4 + 1) = 0x3135;
            *(undefined1 *)((longlong)puVar4 + 10) = 0x39;
            if (param_3 == (undefined8 *)0x0) {
              (**(code **)(param_1 + 0x18))(puVar4,param_1);
            }
            else {
              *param_3 = puVar4;
            }
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = 0xb;
            }
            if (param_5 == (undefined8 *)0x0) {
              (**(code **)(param_1 + 0x18))(pvVar3,param_1);
            }
            else {
              *param_5 = pvVar3;
            }
            if (param_6 != (undefined8 *)0x0) {
              *param_6 = 0x33;
            }
            if (param_7 == (longlong *)0x0) {
              if (lVar2 != 0) {
                EVP_PKEY_free(lVar2);
              }
            }
            else {
              *param_7 = lVar2;
            }
            return 0;
          }
          uVar7 = 0xfffffffa;
          pcVar8 = "Unable to allocate memory for ED25519 key";
        }
      }
      else {
        uVar7 = 0xfffffff2;
        pcVar8 = "Unable to read comment";
      }
LAB_18000c940:
      FUN_180018820(param_1,uVar7,(longlong)pcVar8,uVar10);
      if (lVar2 != 0) {
        EVP_PKEY_free(lVar2);
      }
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)(param_1 + 0x18))(puVar4,param_1);
        return 0xffffffff;
      }
    }
    else {
      FUN_180018820(param_1,0xfffffff2,0x18002f0f8,puVar9);
    }
  }
  else {
    FUN_180018820(param_1,0xfffffff2,0x18002f0e0,puVar9);
  }
  return 0xffffffff;
}




void FUN_18000ca90(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_18003b280 ^ (ulonglong)auStack_98;
  lVar3 = 0;
  local_68 = param_5;
  local_58 = 0x393135;
  local_60 = 0x353264652d687373;
  local_78 = 0;
  local_70 = 0;
  plVar7 = param_4;
  puVar2 = (undefined8 *)(**(code **)(param_1 + 8))(0xb,param_1);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_180018820(param_1,0xfffffffa,0x18002eeb8,plVar7);
    goto LAB_18000cc07;
  }
  *puVar2 = local_60;
  *(undefined2 *)(puVar2 + 1) = (undefined2)local_58;
  *(undefined1 *)((longlong)puVar2 + 10) = local_58._2_1_;
  iVar1 = EVP_PKEY_get_raw_public_key(param_6,0,&local_78);
  if (iVar1 == 1) {
    lVar5 = local_78 + 0x13;
    lVar3 = (**(code **)(param_1 + 8))(lVar5,param_1);
    local_70 = lVar3;
    if (lVar3 != 0) {
      FUN_1800190c0(&local_70,&local_60,0xb);
      FUN_180019150(&local_70,(undefined4)local_78);
      iVar1 = EVP_PKEY_get_raw_public_key(param_6,local_70,&local_78);
      if (iVar1 == 1) {
        *param_2 = (longlong)puVar2;
        *param_3 = 0xb;
        *param_4 = lVar3;
        *local_68 = lVar5;
        goto LAB_18000cc07;
      }
      goto LAB_18000cbbc;
    }
    pcVar6 = "Unable to allocate memory for private key data";
    uVar4 = 0xfffffffa;
  }
  else {
LAB_18000cbbc:
    uVar4 = 0xfffffff2;
    pcVar6 = "EVP_PKEY_get_raw_public_key failed";
  }
  FUN_180018820(param_1,uVar4,(longlong)pcVar6,plVar7);
  (**(code **)(param_1 + 0x18))(puVar2,param_1);
  if (lVar3 != 0) {
    (**(code **)(param_1 + 0x18))(lVar3,param_1);
  }
LAB_18000cc07:
  FUN_18002af30(local_50 ^ (ulonglong)auStack_98);
  return;
}




undefined4
FUN_18000cc30(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar8 = param_4;
  lVar3 = EVP_PKEY_get1_RSA(param_6);
  if (lVar3 != 0) {
    puVar4 = (undefined4 *)(**(code **)(param_1 + 8))(7,param_1);
    if (puVar4 == (undefined4 *)0x0) {
      RSA_free(lVar3);
    }
    else {
      puVar8 = (undefined8 *)0x0;
      RSA_get0_key(lVar3,&local_30,&local_38);
      iVar1 = BN_num_bits(local_38);
      iVar7 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
      iVar1 = BN_num_bits(local_30);
      iVar1 = ((int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3) + 1;
      puVar5 = (undefined1 *)(**(code **)(param_1 + 8))(iVar7 + 0x14 + iVar1,param_1);
      if (puVar5 != (undefined1 *)0x0) {
        FUN_180018d00(puVar5,7);
        *(undefined4 *)(puVar5 + 4) = 0x2d687373;
        *(undefined2 *)(puVar5 + 8) = 0x7372;
        puVar5[10] = 0x61;
        puVar6 = FUN_18000d8a0(puVar5 + 0xb,local_38,iVar7 + 1);
        puVar6 = FUN_18000d8a0(puVar6,local_30,iVar1);
        RSA_free(lVar3);
        *puVar4 = 0x2d687373;
        *(undefined2 *)(puVar4 + 1) = 0x7372;
        *(undefined1 *)((longlong)puVar4 + 6) = 0x61;
        *param_2 = puVar4;
        *param_3 = 7;
        *param_4 = puVar5;
        *param_5 = (longlong)puVar6 - (longlong)puVar5;
        return 0;
      }
      RSA_free(lVar3);
      (**(code **)(param_1 + 0x18))(puVar4,param_1);
    }
  }
  uVar2 = FUN_180018820(param_1,0xfffffffa,0x18002eeb8,puVar8);
  return uVar2;
}




int FUN_18000cde0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  puVar6 = param_4;
  uVar2 = FUN_1800189c0(param_2,&local_80,(ulonglong *)local_88);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1800189c0(param_2,&local_70,(ulonglong *)local_78);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1800189c0(param_2,&local_90,(ulonglong *)local_98);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1800189c0(param_2,&local_c0,(ulonglong *)local_c8);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_1800189c0(param_2,&local_a0,(ulonglong *)local_a8);
          if ((int)uVar2 == 0) {
            uVar2 = FUN_1800189c0(param_2,&local_b0,(ulonglong *)local_b8);
            if ((int)uVar2 == 0) {
              uVar2 = FUN_180018ad0(param_2,local_38,&local_40);
              if ((int)uVar2 == 0) {
                local_50 = local_c0;
                local_58 = local_b0;
                local_60 = local_a0;
                iVar1 = 0;
                local_68 = local_90;
                local_f8 = 0;
                local_e8 = 0;
                local_f0 = 0;
                local_d0 = 0;
                local_d8 = 0;
                local_e0 = 0;
                local_48 = BN_new();
                BN_bin2bn(local_70,local_78[0],local_48);
                uVar2 = BN_new();
                BN_bin2bn(local_80,local_88[0],uVar2);
                lVar3 = local_68;
                if (local_68 != 0) {
                  local_f8 = BN_new();
                  BN_bin2bn(lVar3,local_98[0],local_f8);
                  local_e8 = BN_new();
                  BN_bin2bn(local_60,local_a8[0],local_e8);
                  local_f0 = BN_new();
                  BN_bin2bn(local_58,local_b8[0],local_f0);
                  local_d0 = BN_new();
                  BN_bin2bn(0,0,local_d0);
                  local_d8 = BN_new();
                  BN_bin2bn(0,0,local_d8);
                  local_e0 = BN_new();
                  BN_bin2bn(local_50,local_c8[0],local_e0);
                }
                lVar3 = RSA_new();
                RSA_set0_key(lVar3,uVar2,local_48,local_f8);
                RSA_set0_factors(lVar3,local_e8,local_f0);
                RSA_set0_crt_params(lVar3,local_d0,local_d8,local_e0);
                if (lVar3 != 0) {
                  iVar1 = FUN_18000af30(lVar3);
                  if ((param_5 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
                    lVar4 = EVP_PKEY_new();
                    EVP_PKEY_set1_RSA(lVar4,lVar3);
                    iVar1 = FUN_18000cc30(param_1,param_3,param_4,param_5,param_6,lVar4);
                    if (lVar4 != 0) {
                      EVP_PKEY_free(lVar4);
                    }
                  }
                }
                if (param_7 == (longlong *)0x0) {
                  RSA_free(lVar3);
                }
                else {
                  *param_7 = lVar3;
                }
                return iVar1;
              }
              pcVar5 = "RSA no comment";
            }
            else {
              pcVar5 = "RSA no q";
            }
          }
          else {
            pcVar5 = "RSA no p";
          }
        }
        else {
          pcVar5 = "RSA no coeff";
        }
      }
      else {
        pcVar5 = "RSA no d";
      }
    }
    else {
      pcVar5 = "RSA no e";
    }
  }
  else {
    pcVar5 = "RSA no n";
  }
  FUN_180018820(param_1,0xfffffff2,(longlong)pcVar5,puVar6);
  return -1;
}




int FUN_18000d140(longlong param_1,longlong *param_2,undefined8 *param_3,size_t *param_4,
                 longlong *param_5,size_t *param_6,undefined1 *param_7,longlong *param_8,
                 longlong *param_9,ulonglong *param_10,longlong *param_11)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined1 *puVar7;
  longlong lVar8;
  char *pcVar9;
  size_t *psVar10;
  size_t sVar11;
  ulonglong local_78;
  void *local_70;
  void *local_68;
  ulonglong local_60;
  size_t *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  psVar10 = param_4;
  uVar3 = FUN_180018ad0(param_2,&local_40,&local_60);
  if (((int)uVar3 == 0) && (local_60 != 0)) {
    uVar3 = FUN_180018ad0(param_2,&local_50,(ulonglong *)&local_58);
    if ((int)uVar3 == 0) {
      iVar1 = 0;
      lVar4 = EC_KEY_new_by_curve_name(0x19f);
      lVar8 = 0;
      if (lVar4 != 0) {
        uVar3 = EC_KEY_get0_group(lVar4);
        lVar5 = EC_POINT_new(uVar3);
        EC_POINT_oct2point(uVar3,lVar5,local_50,local_58,0);
        iVar1 = EC_KEY_set_public_key(lVar4,lVar5);
        lVar8 = lVar4;
        psVar10 = local_58;
        if (lVar5 != 0) {
          EC_POINT_free(lVar5);
          psVar10 = local_58;
        }
      }
      iVar2 = -(uint)(iVar1 != 1);
      if (iVar1 == 1) {
        uVar3 = FUN_180018ad0(param_2,(longlong *)&local_68,&local_78);
        if ((int)uVar3 == 0) {
          if ((param_7 == (undefined1 *)0x0) ||
             (uVar3 = FUN_180018aa0(param_2,param_7), (int)uVar3 == 0)) {
            if ((param_9 != (longlong *)0x0) && (param_10 != (ulonglong *)0x0)) {
              local_70 = (void *)0x0;
              uVar3 = FUN_180018ad0(param_2,(longlong *)&local_70,param_10);
              if ((int)uVar3 != 0) {
                FUN_180018820(param_1,0xfffffff2,0x18002f1b8,psVar10);
                goto LAB_18000d3ef;
              }
              if (*param_10 != 0) {
                pvVar6 = (void *)(**(code **)(param_1 + 8))(*param_10,param_1);
                *param_9 = (longlong)pvVar6;
                if (pvVar6 != (void *)0x0) {
                  memcpy(pvVar6,local_70,*param_10);
                }
              }
            }
            if (((lVar8 != 0) && (param_5 != (longlong *)0x0)) && (param_3 != (undefined8 *)0x0)) {
              lVar4 = EVP_PKEY_new();
              EVP_PKEY_set1_EC_KEY(lVar4,lVar8);
              iVar2 = FUN_18000c340(param_1,param_3,param_4,param_5,(longlong *)param_6,1,lVar4);
              if (lVar4 != 0) {
                EVP_PKEY_free(lVar4);
              }
            }
            if ((iVar2 == 0) && (param_5 != (longlong *)0x0)) {
              sVar11 = local_78 + 4 + *param_6;
              pvVar6 = (void *)(**(code **)(param_1 + 8))(sVar11,param_1);
              if (pvVar6 == (void *)0x0) {
                iVar2 = -1;
                goto LAB_18000d3ef;
              }
              local_48 = (longlong)pvVar6 + *param_6;
              memcpy(pvVar6,(void *)*param_5,*param_6);
              FUN_1800190c0(&local_48,local_68,local_78);
              if ((param_8 != (longlong *)0x0) && (local_78 != 0)) {
                puVar7 = (undefined1 *)(**(code **)(param_1 + 8))(local_78 + 1,param_1);
                *param_8 = (longlong)puVar7;
                for (lVar4 = local_78 + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar7 = 0;
                  puVar7 = puVar7 + 1;
                }
                memcpy((void *)*param_8,local_68,local_78);
              }
              (**(code **)(param_1 + 0x18))(*param_5,param_1);
              *param_6 = sVar11;
              *param_5 = (longlong)pvVar6;
            }
            if (param_11 != (longlong *)0x0) {
              *param_11 = lVar8;
              return iVar2;
            }
            EC_KEY_free(lVar8);
            return iVar2;
          }
          FUN_180018820(param_1,0xfffffff2,0x18002f1a8,psVar10);
        }
        else {
          FUN_180018820(param_1,0xfffffff2,0x18002f190,psVar10);
        }
      }
      else {
        iVar2 = -1;
        FUN_180018820(param_1,0xfffffff2,0x18002f2d8,psVar10);
      }
LAB_18000d3ef:
      if (lVar8 != 0) {
        EC_KEY_free(lVar8);
      }
      if ((param_8 != (longlong *)0x0) && (*param_8 != 0)) {
        (**(code **)(param_1 + 0x18))(param_8,param_1);
        *param_8 = 0;
      }
      if ((param_9 != (longlong *)0x0) && (*param_9 != 0)) {
        (**(code **)(param_1 + 0x18))(param_9,param_1);
        *param_9 = 0;
      }
      return iVar2;
    }
    pcVar9 = "ECDSA no point";
  }
  else {
    pcVar9 = "ECDSA no curve";
  }
  FUN_180018820(param_1,0xfffffff2,(longlong)pcVar9,psVar10);
  return -1;
}




undefined8
FUN_18000d520(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,size_t *param_6,undefined1 *param_7,longlong *param_8,
             longlong *param_9,ulonglong *param_10,longlong *param_11)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  size_t sVar8;
  ulonglong local_58;
  void *local_50;
  ulonglong local_48;
  void *local_40;
  void *local_38;
  void *local_30;
  
  local_58 = 0;
  local_48 = 0;
  puVar7 = param_4;
  uVar1 = FUN_180018ad0(param_2,(longlong *)&local_38,&local_48);
  if (((int)uVar1 == 0) && (local_48 == 0x20)) {
    uVar1 = FUN_180018ad0(param_2,(longlong *)&local_30,&local_58);
    if ((int)uVar1 == 0) {
      if ((param_7 == (undefined1 *)0x0) ||
         (uVar1 = FUN_180018aa0(param_2,param_7), (int)uVar1 == 0)) {
        if ((param_9 != (longlong *)0x0) && (param_10 != (ulonglong *)0x0)) {
          local_40 = (void *)0x0;
          uVar1 = FUN_180018ad0(param_2,(longlong *)&local_40,param_10);
          if ((int)uVar1 != 0) {
            FUN_180018820(param_1,0xfffffff2,0x18002f1b8,puVar7);
            return 0xffffffff;
          }
          if (*param_10 != 0) {
            pvVar2 = (void *)(**(code **)(param_1 + 8))(*param_10,param_1);
            *param_9 = (longlong)pvVar2;
            memcpy(pvVar2,local_40,*param_10);
          }
        }
        uVar1 = 0x20;
        lVar3 = EVP_PKEY_new_raw_public_key(0x43f,0,local_38);
        pcVar6 = (char *)(**(code **)(param_1 + 8))(0x1a,param_1);
        if (pcVar6 != (char *)0x0) {
          sVar8 = local_58 + 0x46;
          pvVar2 = FUN_180018690(param_1,sVar8);
          if (pvVar2 != (void *)0x0) {
            local_50 = pvVar2;
            FUN_1800190c0((longlong *)&local_50,"sk-ssh-ed25519@openssh.com",0x1a);
            FUN_1800190c0((longlong *)&local_50,local_38,0x20);
            FUN_1800190c0((longlong *)&local_50,local_30,local_58);
            if ((param_8 != (longlong *)0x0) && (local_58 != 0)) {
              puVar4 = (undefined1 *)(**(code **)(param_1 + 8))(local_58 + 1,param_1);
              *param_8 = (longlong)puVar4;
              for (lVar5 = local_58 + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar4 = 0;
                puVar4 = puVar4 + 1;
              }
              memcpy((void *)*param_8,local_30,local_58);
            }
            builtin_strncpy(pcVar6,"sk-ssh-ed25519@openssh.com",0x1a);
            if (param_3 == (undefined8 *)0x0) {
              (**(code **)(param_1 + 0x18))(pcVar6,param_1);
            }
            else {
              *param_3 = pcVar6;
            }
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = 0x1a;
            }
            if (param_5 == (undefined8 *)0x0) {
              (**(code **)(param_1 + 0x18))(pvVar2,param_1);
            }
            else {
              *param_5 = pvVar2;
            }
            if (param_6 != (size_t *)0x0) {
              *param_6 = sVar8;
            }
            if (param_11 != (longlong *)0x0) {
              *param_11 = lVar3;
              return 0;
            }
            if (lVar3 != 0) {
              EVP_PKEY_free(lVar3);
            }
            return 0;
          }
        }
        FUN_180018820(param_1,0xfffffffa,0x18002f140,uVar1);
        if (lVar3 != 0) {
          EVP_PKEY_free(lVar3);
        }
        if (pcVar6 != (char *)0x0) {
          (**(code **)(param_1 + 0x18))(pcVar6,param_1);
        }
        if ((param_8 != (longlong *)0x0) && (*param_8 != 0)) {
          (**(code **)(param_1 + 0x18))(param_8,param_1);
          *param_8 = 0;
        }
        if ((param_9 != (longlong *)0x0) && (*param_9 != 0)) {
          (**(code **)(param_1 + 0x18))(param_9,param_1);
          *param_9 = 0;
        }
        return 0xffffffff;
      }
      pcVar6 = "No SK flags.";
    }
    else {
      pcVar6 = "No SK application.";
    }
  }
  else {
    pcVar6 = "Wrong public key length";
  }
  FUN_180018820(param_1,0xfffffff2,(longlong)pcVar6,puVar7);
  return 0xffffffff;
}




int FUN_18000d840(void *param_1,int param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)param_4 + lVar2) != '\0');
  iVar1 = param_2 + -1;
  if ((int)lVar2 <= param_2 + -1) {
    iVar1 = (int)lVar2;
  }
  memcpy(param_1,param_4,(longlong)iVar1);
  *(undefined1 *)((longlong)iVar1 + (longlong)param_1) = 0;
  return iVar1;
}




undefined1 * FUN_18000d8a0(undefined1 *param_1,undefined8 param_2,int param_3)

{
  undefined1 *_Dst;
  
  _Dst = param_1 + 4;
  *_Dst = 0;
  BN_bn2bin(param_2,param_1 + 5);
  if (-1 < (char)param_1[5]) {
    param_3 = param_3 + -1;
    memmove(_Dst,param_1 + 5,(longlong)param_3);
  }
  FUN_180018d00(param_1,param_3);
  return _Dst + param_3;
}




void FUN_18000d910(void)

{
  if (DAT_18003b310 == 0) {
    FUN_180009ff0();
    DAT_18003b310 = DAT_18003b310 + 1;
  }
  return;
}




void libssh2_exit(void)

{
                    /* 0xd930  45  libssh2_exit */
  if (((DAT_18003b310 != 0) && (DAT_18003b310 = DAT_18003b310 + -1, DAT_18003b310 == 0)) &&
     ((DAT_18003b314 & 1) == 0)) {
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 libssh2_init(uint param_1)

{
                    /* 0xd960  48  libssh2_init */
  if ((DAT_18003b310 == 0) && ((param_1 & 1) == 0)) {
    FUN_180009ff0();
  }
  _DAT_18003b314 = _DAT_18003b314 | param_1;
  DAT_18003b310 = DAT_18003b310 + 1;
  return 0;
}




undefined8 FUN_18000d9a0(undefined8 param_1,undefined8 *param_2)

{
  RSA_free(*param_2);
  *param_2 = 0;
  return 0;
}




undefined8 FUN_18000db60(longlong param_1,char *param_2,longlong **param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res20;
  
  if (*param_4 != 0) {
    RSA_free();
    *param_4 = 0;
  }
  iVar1 = FUN_18000b0b0(&local_res20,param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = local_res20;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8
FUN_18000dbe0(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  plVar1 = param_5;
  if (*param_5 != 0) {
    RSA_free();
    *plVar1 = 0;
  }
  uVar2 = FUN_18000b260((longlong *)&param_5,param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 0) {
    *plVar1 = (longlong)param_5;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




void FUN_18000dca0(longlong param_1,longlong *param_2,ulonglong *param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStackY_88 [32];
  longlong local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_88;
  lVar2 = (longlong)param_4;
  uVar1 = *param_6;
  FUN_18000b730(&local_58);
  if (0 < lVar2) {
    do {
      EVP_DigestUpdate(local_58,param_5[1],*param_5);
      param_5 = param_5 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  EVP_DigestFinal(local_58,local_50,0);
  EVP_MD_CTX_free(local_58);
  FUN_18000b340(param_1,uVar1,local_50,0x14,param_2,param_3);
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_88);
  return;
}




void FUN_18000ddb0(longlong param_1,longlong *param_2,ulonglong *param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStackY_88 [32];
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_18003b280 ^ (ulonglong)auStackY_88;
  lVar3 = (longlong)param_4;
  uVar1 = *param_6;
  uVar2 = FUN_18000b820(&local_58);
  if ((int)uVar2 != 0) {
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_58,param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_58,local_50,0);
    EVP_MD_CTX_free(local_58);
    FUN_18000b4d0(param_1,uVar1,local_50,0x20,param_2,param_3);
  }
  FUN_18002af30(local_30 ^ (ulonglong)auStackY_88);
  return;
}




void FUN_18000ded0(longlong param_1,longlong *param_2,ulonglong *param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStackY_b8 [32];
  longlong local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_b8;
  lVar3 = (longlong)param_4;
  uVar1 = *param_6;
  uVar2 = FUN_18000b970(local_88);
  if ((int)uVar2 != 0) {
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_88[0],param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_88[0],local_78,0);
    EVP_MD_CTX_free(local_88[0]);
    FUN_18000b4d0(param_1,uVar1,local_78,0x40,param_2,param_3);
  }
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_b8);
  return;
}




undefined8 FUN_18000dfc0(undefined8 param_1,undefined8 *param_2)

{
  DSA_free(*param_2);
  *param_2 = 0;
  return 0;
}




undefined8 FUN_18000dfe0(undefined8 param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  undefined4 local_res18 [2];
  longlong local_res20;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined4 local_50 [2];
  longlong local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined4 local_30 [2];
  longlong local_28;
  longlong local_20;
  
  if (*param_4 != 0) {
    DSA_free();
    *param_4 = 0;
  }
  if (((((0x1a < param_3) &&
        (local_68 = param_2, local_60 = param_2, local_58 = param_3,
        sVar2 = FUN_180018dc0(&local_68,"ssh-dss"), (int)sVar2 == 0)) &&
       (uVar3 = FUN_180018ad0(&local_68,&local_28,(ulonglong *)local_30), (int)uVar3 == 0)) &&
      ((uVar3 = FUN_180018ad0(&local_68,&local_38,(ulonglong *)local_40), (int)uVar3 == 0 &&
       (uVar3 = FUN_180018ad0(&local_68,&local_48,(ulonglong *)local_50), (int)uVar3 == 0)))) &&
     ((uVar3 = FUN_180018ad0(&local_68,&local_res20,(ulonglong *)local_res18), (int)uVar3 == 0 &&
      ((bVar1 = FUN_180018800(&local_68), (int)CONCAT71(extraout_var,bVar1) != 0 &&
       (uVar3 = FUN_180008b50(&local_20,local_28,local_30[0],local_38,local_40[0],local_48,
                              local_50[0],local_res20,local_res18[0],0,0), (int)uVar3 == 0)))))) {
    *param_4 = local_20;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_18000e120(longlong param_1,char *param_2,longlong **param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res20;
  
  if (*param_4 != 0) {
    DSA_free();
    *param_4 = 0;
  }
  iVar1 = FUN_180008c50(&local_res20,param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = local_res20;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8
FUN_18000e1a0(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  plVar1 = param_5;
  if (*param_5 != 0) {
    DSA_free();
    *plVar1 = 0;
  }
  uVar2 = FUN_180008e00((longlong *)&param_5,param_1,param_2,param_3,param_4);
  if ((int)uVar2 == 0) {
    *plVar1 = (longlong)param_5;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}




void FUN_18000e270(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_18003b280 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)param_4;
  uVar2 = *param_6;
  pvVar1 = FUN_180018690(param_1,0x28);
  *param_2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    *param_3 = 0x28;
    FUN_18000b730(&local_58);
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_58,param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_58,local_50,0);
    EVP_MD_CTX_free(local_58);
    uVar2 = FUN_180008ee0(uVar2,local_50,0x14,(undefined8 *)*param_2);
    if ((int)uVar2 != 0) {
      (**(code **)(param_1 + 0x18))(*param_2,param_1);
    }
  }
  FUN_18002af30(local_38 ^ (ulonglong)auStack_78);
  return;
}




undefined8 FUN_18000e370(undefined8 param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    EC_KEY_free();
    *param_2 = 0;
    return 0;
  }
  *param_2 = 0;
  return 0;
}




undefined8 FUN_18000e3b0(undefined8 param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  char *_Str2;
  char *local_res18;
  ulonglong local_res20;
  char *local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_50 = 0;
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    EC_KEY_free();
    *param_4 = 0;
  }
  if (param_3 < 0x27) {
    return 0xffffffff;
  }
  local_38 = param_2;
  local_30 = param_2;
  local_28 = param_3;
  uVar4 = FUN_180018ad0(&local_38,(longlong *)&local_res18,&local_res20);
  if ((int)uVar4 != 0) {
    return 0xffffffff;
  }
  if (local_res20 != 0x13) {
    return 0xffffffff;
  }
  iVar2 = strncmp(local_res18,"ecdsa-sha2-nistp256",0x13);
  if (iVar2 == 0) {
    iVar2 = 0x19f;
  }
  else {
    iVar2 = strncmp(local_res18,"ecdsa-sha2-nistp384",0x13);
    if (iVar2 == 0) {
      iVar2 = 0x2cb;
    }
    else {
      iVar2 = strncmp(local_res18,"ecdsa-sha2-nistp521",0x13);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = 0x2cc;
    }
  }
  uVar4 = FUN_180018ad0(&local_38,(longlong *)&local_58,&local_res20);
  if ((int)uVar4 != 0) {
    return 0xffffffff;
  }
  if (local_res20 != 8) {
    return 0xffffffff;
  }
  if (iVar2 == 0x19f) {
    _Str2 = "nistp256";
  }
  else if (iVar2 == 0x2cb) {
    _Str2 = "nistp384";
  }
  else {
    if (iVar2 != 0x2cc) goto LAB_18000e4f4;
    _Str2 = "nistp521";
  }
  iVar3 = strncmp(local_58,_Str2,8);
  if (iVar3 != 0) {
    return 0xffffffff;
  }
LAB_18000e4f4:
  uVar4 = FUN_180018ad0(&local_38,&local_40,&local_48);
  if ((((int)uVar4 == 0) &&
      (bVar1 = FUN_180018800(&local_38), (int)CONCAT71(extraout_var,bVar1) != 0)) &&
     (iVar2 = FUN_1800093b0(&local_50,local_40,local_48,iVar2), iVar2 == 0)) {
    if (param_4 != (longlong *)0x0) {
      *param_4 = local_50;
    }
    return 0;
  }
  return 0xffffffff;
}




uint FUN_18000e570(longlong param_1,char *param_2,longlong **param_3,longlong *param_4)

{
  uint uVar1;
  longlong local_res20;
  
  local_res20 = 0;
  if ((param_4 == (longlong *)0x0) || (*param_4 == 0)) {
    uVar1 = FUN_180009480(&local_res20,param_1,param_2,param_3);
    if (param_4 == (longlong *)0x0) {
      return uVar1;
    }
  }
  else {
    EC_KEY_free();
    *param_4 = 0;
    uVar1 = FUN_180009480(&local_res20,param_1,param_2,param_3);
  }
  *param_4 = local_res20;
  return uVar1;
}




undefined8
FUN_18000e610(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  local_18[0] = 0;
  if ((param_5 != (longlong *)0x0) && (*param_5 != 0)) {
    EC_KEY_free();
    *param_5 = 0;
  }
  uVar1 = FUN_180009680(local_18,param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_5 != (longlong *)0x0) {
      *param_5 = local_18[0];
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8
FUN_18000e6b0(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong local_res18 [2];
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38 [2];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  uVar2 = *param_6;
  if (0x22 < param_3) {
    local_20 = param_2;
    local_18 = param_2;
    local_10 = param_3;
    uVar1 = FUN_180018ad0(&local_20,&local_28,local_res18);
    if (((int)uVar1 == 0) && (local_res18[0] == 0x13)) {
      uVar1 = FUN_180018b90(&local_20,(undefined4 *)&param_6);
      if (((int)uVar1 == 0) && (7 < (uint)param_6)) {
        uVar1 = FUN_180018ad0(&local_20,&local_30,(ulonglong *)local_38);
        if ((int)uVar1 == 0) {
          uVar1 = FUN_180018ad0(&local_20,&local_40,(ulonglong *)local_48);
          if ((int)uVar1 == 0) {
            uVar2 = FUN_1800098a0(uVar2,local_30,local_38[0],local_40,local_48[0],param_4,param_5);
            return uVar2;
          }
        }
      }
    }
  }
  return 0xffffffff;
}




void FUN_18000e7c0(longlong param_1,undefined8 *param_2,size_t *param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStackY_b8 [32];
  longlong local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_b8;
  lVar3 = (longlong)param_4;
  uVar1 = *param_6;
  iVar2 = FUN_180009460();
  if (iVar2 == 0x19f) {
    FUN_18000b820(local_88);
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_88[0],param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_88[0],local_78,0);
    EVP_MD_CTX_free(local_88[0]);
    uVar4 = 0x20;
  }
  else if (iVar2 == 0x2cb) {
    FUN_18000b880(local_88);
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_88[0],param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_88[0],local_78,0);
    EVP_MD_CTX_free(local_88[0]);
    uVar4 = 0x30;
  }
  else {
    if (iVar2 != 0x2cc) goto LAB_18000e93e;
    FUN_18000b970(local_88);
    if (0 < lVar3) {
      do {
        EVP_DigestUpdate(local_88[0],param_5[1],*param_5);
        param_5 = param_5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    EVP_DigestFinal(local_88[0],local_78,0);
    EVP_MD_CTX_free(local_88[0]);
    uVar4 = 0x40;
  }
  FUN_180009760(param_1,uVar1,local_78,uVar4,param_2,param_3);
LAB_18000e93e:
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_b8);
  return;
}




undefined8 FUN_18000e970(undefined8 param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    EVP_PKEY_free();
    *param_2 = 0;
    return 0;
  }
  *param_2 = 0;
  return 0;
}




undefined8 FUN_18000e9b0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  longlong local_res18;
  ulonglong local_res20;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_res18 = 0;
  if (*param_4 != 0) {
    EVP_PKEY_free();
    *param_4 = 0;
  }
  if (0x12 < param_3) {
    local_30 = param_2;
    local_28 = param_2;
    local_20 = param_3;
    sVar3 = FUN_180018dc0(&local_30,"ssh-ed25519");
    if ((int)sVar3 == 0) {
      uVar4 = FUN_180018ad0(&local_30,&local_38,&local_res20);
      if ((int)uVar4 == 0) {
        bVar1 = FUN_180018800(&local_30);
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          iVar2 = FUN_180009d40(&local_res18,param_1,local_38,local_res20);
          if (iVar2 == 0) {
            *param_4 = local_res18;
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}




undefined8 FUN_18000ea80(longlong param_1,char *param_2,longlong **param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong local_res20;
  
  local_res20 = 0;
  if (*param_4 != 0) {
    EVP_PKEY_free();
    *param_4 = 0;
  }
  uVar1 = FUN_180009ac0(&local_res20,param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    *param_4 = local_res20;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8
FUN_18000eb00(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  local_18[0] = 0;
  if ((param_5 != (longlong *)0x0) && (*param_5 != 0)) {
    EVP_PKEY_free();
    *param_5 = 0;
  }
  uVar1 = FUN_180009c40(local_18,param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_5 != (longlong *)0x0) {
      *param_5 = local_18[0];
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




longlong libssh2_hostkey_hash(longlong param_1,int param_2)

{
  longlong lVar1;
  
                    /* 0xec10  47  libssh2_hostkey_hash */
  if (param_2 == 1) {
    lVar1 = param_1 + 0xd4;
    if (*(int *)(param_1 + 0xe4) == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return 0;
    }
    lVar1 = param_1 + 0x100;
    if (*(int *)(param_1 + 0x120) == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  lVar1 = param_1 + 0xe8;
  if (*(int *)(param_1 + 0xfc) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}




undefined ** FUN_18000ec60(void)

{
  return &PTR_PTR_s_ecdsa_sha2_nistp256_18003b110;
}




undefined8 libssh2_session_hostkey(longlong param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong *_Buf2;
  int iVar1;
  undefined4 uVar2;
  
                    /* 0xec70  87  libssh2_session_hostkey */
  if (*(uint *)(param_1 + 0xd0) == 0) {
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (ulonglong *)0x0) {
    *param_2 = (ulonglong)*(uint *)(param_1 + 0xd0);
  }
  if (param_3 == (undefined4 *)0x0) {
    return *(undefined8 *)(param_1 + 200);
  }
  if (*(uint *)(param_1 + 0xd0) < 0xb) {
    uVar2 = 0;
  }
  else {
    _Buf2 = *(longlong **)(param_1 + 200);
    if (((*_Buf2 == 0x2d68737307000000) && ((short)_Buf2[1] == 0x7372)) &&
       (*(char *)((longlong)_Buf2 + 10) == 'a')) {
      uVar2 = 1;
    }
    else if (((*_Buf2 == 0x2d68737307000000) && ((short)_Buf2[1] == 0x7364)) &&
            (*(char *)((longlong)_Buf2 + 10) == 's')) {
      uVar2 = 2;
    }
    else {
      if (0xe < *(uint *)(param_1 + 0xd0)) {
        iVar1 = memcmp(&DAT_18002fa50,_Buf2,0xf);
        if (iVar1 == 0) {
          uVar2 = 6;
          goto LAB_18000edb7;
        }
        if (0x16 < *(uint *)(param_1 + 0xd0)) {
          iVar1 = memcmp(&DAT_18002fa08,_Buf2,0x17);
          if (iVar1 == 0) {
            uVar2 = 3;
            goto LAB_18000edb7;
          }
          iVar1 = memcmp(&DAT_18002fa20,_Buf2,0x17);
          if (iVar1 == 0) {
            uVar2 = 4;
            goto LAB_18000edb7;
          }
          iVar1 = memcmp(&DAT_18002fa38,_Buf2,0x17);
          if (iVar1 == 0) {
            uVar2 = 5;
            goto LAB_18000edb7;
          }
        }
      }
      uVar2 = 0;
    }
  }
LAB_18000edb7:
  *param_3 = uVar2;
  return *(undefined8 *)(param_1 + 200);
}




void libssh2_keepalive_config(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0xee00  49  libssh2_keepalive_config */
  iVar1 = 2;
  if (param_3 != 1) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x11f58) = iVar1;
  *(uint *)(param_1 + 0x11f5c) = (uint)(param_2 != 0);
  return;
}




void libssh2_keepalive_send(ulonglong param_1,int *param_2)

{
  uint uVar1;
  __time64_t _Var2;
  undefined8 uVar3;
  undefined1 auStackY_78 [32];
  undefined8 local_48;
  char acStack_40 [16];
  undefined4 local_30;
  ulonglong local_28;
  
                    /* 0xee30  50  libssh2_keepalive_send */
  local_28 = DAT_18003b280 ^ (ulonglong)auStackY_78;
  if (*(int *)(param_1 + 0x11f58) == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    _Var2 = _time64((__time64_t *)0x0);
    if (_Var2 < *(longlong *)(param_1 + 0x11f60) + (longlong)*(int *)(param_1 + 0x11f58)) {
      if (param_2 != (int *)0x0) {
        *param_2 = ((int)*(longlong *)(param_1 + 0x11f60) - (int)_Var2) +
                   *(int *)(param_1 + 0x11f58);
      }
    }
    else {
      uVar3 = 0;
      local_48 = 0x65656b1500000050;
      builtin_strncpy(acStack_40,"palive@libssh2.o",0x10);
      local_30 = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x11f5c),0x6772);
      uVar1 = FUN_180026710(param_1,&local_48,0x1b,(void *)0x0,0);
      if ((uVar1 == 0) || (uVar1 == 0xffffffdb)) {
        *(__time64_t *)(param_1 + 0x11f60) = _Var2;
        if (param_2 != (int *)0x0) {
          *param_2 = *(int *)(param_1 + 0x11f58);
        }
      }
      else {
        FUN_180018820(param_1,0xfffffff9,0x18002fb98,uVar3);
      }
    }
  }
  FUN_18002af30(local_28 ^ (ulonglong)auStackY_78);
  return;
}




int FUN_18000ef50(ulonglong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10;
  
  if (*param_2 == 0) {
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar2;
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar2;
    BN_set_word(uVar2,2);
    BN_bin2bn(&DAT_18002fbc0,0x80,*(undefined8 *)(param_2 + 0x44));
    *param_2 = 2;
  }
  iVar1 = FUN_180011480(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined1 ***)(param_2 + 0x44),
                        (undefined1 **)0x80,1,&local_res10,'\x1e',0x1f,0,0,param_2 + 6);
  if (iVar1 != -0x25) {
    BN_clear_free(*(undefined8 *)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    *param_2 = 0;
  }
  return iVar1;
}




void FUN_18000f050(undefined8 param_1,int *param_2)

{
  undefined1 local_res18 [16];
  
  FUN_1800150d0(param_1,param_2,1,local_res18,FUN_180011480);
  return;
}




void FUN_18000f080(undefined8 param_1,int *param_2)

{
  undefined1 local_res18 [16];
  
  FUN_1800150d0(param_1,param_2,0x100,local_res18,FUN_180011480);
  return;
}




int FUN_18000f0b0(ulonglong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10;
  
  if (*param_2 == 0) {
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar2;
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar2;
    BN_set_word(uVar2,2);
    BN_bin2bn(&DAT_18002fd40,0x200,*(undefined8 *)(param_2 + 0x44));
    *param_2 = 2;
  }
  iVar1 = FUN_180011480(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined1 ***)(param_2 + 0x44),
                        (undefined1 **)0x200,0x200,&local_res10,'\x1e',0x1f,0,0,param_2 + 6);
  if (iVar1 != -0x25) {
    *param_2 = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
  }
  return iVar1;
}




int FUN_18000f1b0(ulonglong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10;
  
  if (*param_2 == 0) {
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar2;
    uVar2 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar2;
    BN_set_word(uVar2,2);
    BN_bin2bn(&DAT_18002ff40,0x400,*(undefined8 *)(param_2 + 0x44));
    *param_2 = 2;
  }
  iVar1 = FUN_180011480(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined1 ***)(param_2 + 0x44),
                        (undefined1 **)0x400,0x200,&local_res10,'\x1e',0x1f,0,0,param_2 + 6);
  if (iVar1 != -0x25) {
    *param_2 = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
  }
  return iVar1;
}




int FUN_18000f2b0(ulonglong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  iVar4 = *param_2;
  iVar3 = 0;
  if (iVar4 == 0) {
    uVar5 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar5;
    uVar5 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar5;
    *(undefined1 *)(param_2 + 0x48) = 0x22;
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x121),0x800);
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x125),0x1000);
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x129),0x2000);
    *param_2 = 2;
    param_2[0x8a] = 0xd;
    param_2[0x8b] = 0;
LAB_18000f347:
    uVar5 = 0;
    uVar2 = FUN_180026710(param_1,param_2 + 0x48,*(size_t *)(param_2 + 0x8a),(void *)0x0,0);
    if (uVar2 == 0xffffffdb) {
      return -0x25;
    }
    if (uVar2 != 0) {
      iVar3 = FUN_180018820(param_1,uVar2,0x180030860,uVar5);
      goto LAB_18000f55b;
    }
    *param_2 = 3;
LAB_18000f393:
    param_4 = (longlong *)(param_2 + 0x8c);
    uVar5 = FUN_18001a170(param_1,0x1f,(undefined8 *)(param_2 + 0x88),param_4,0,(void *)0x0,0,
                          (longlong)(param_2 + 2));
    iVar4 = (int)uVar5;
    if (iVar4 == -0x25) {
      return -0x25;
    }
    if (iVar4 != 0) {
      iVar3 = FUN_180018820(param_1,iVar4,0x180030888,param_4);
      goto LAB_18000f55b;
    }
    iVar4 = 4;
    *param_2 = 4;
  }
  else {
    if (iVar4 == 2) goto LAB_18000f347;
    if (iVar4 == 3) goto LAB_18000f393;
  }
  plVar6 = (longlong *)(param_2 + 0x88);
  if (iVar4 == 4) {
    uVar1 = *(ulonglong *)(param_2 + 0x8c);
    if (uVar1 < 9) {
      iVar3 = FUN_180018820(param_1,0xfffffff2,0x1800308b0,param_4);
    }
    else {
      local_48 = *plVar6;
      local_40 = local_48 + 1;
      local_38 = uVar1;
      uVar5 = FUN_1800189c0(&local_48,&local_res18,(ulonglong *)local_res10);
      if ((int)uVar5 == 0) {
        uVar5 = FUN_1800189c0(&local_48,&local_58,(ulonglong *)local_res20);
        if ((int)uVar5 == 0) {
          BN_bin2bn(local_res18,local_res10[0],*(undefined8 *)(param_2 + 0x44));
          BN_bin2bn(local_58,local_res20[0],*(undefined8 *)(param_2 + 0x46));
          iVar3 = FUN_180011480(param_1,*(undefined8 *)(param_2 + 0x46),
                                *(undefined1 ***)(param_2 + 0x44),
                                (undefined1 **)(ulonglong)local_res10[0],1,&local_50,' ',0x21,
                                *plVar6 + 1,*(ulonglong *)(param_2 + 0x8c) - 1,param_2 + 6);
          if (iVar3 == -0x25) {
            return -0x25;
          }
          (**(code **)(param_1 + 0x18))(*plVar6,param_1);
        }
        else {
          iVar3 = FUN_180018820(param_1,0xfffffff2,0x1800308f0,param_4);
        }
      }
      else {
        iVar3 = FUN_180018820(param_1,0xfffffff2,0x1800308d0,param_4);
      }
    }
  }
LAB_18000f55b:
  *param_2 = 0;
  BN_clear_free(*(undefined8 *)(param_2 + 0x46));
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  BN_clear_free(*(undefined8 *)(param_2 + 0x44));
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return iVar3;
}




int FUN_18000f5a0(ulonglong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  iVar4 = *param_2;
  iVar3 = 0;
  if (iVar4 == 0) {
    uVar5 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar5;
    uVar5 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar5;
    *(undefined1 *)(param_2 + 0x48) = 0x22;
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x121),0x800);
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x125),0x1000);
    FUN_180018d00((undefined1 *)((longlong)param_2 + 0x129),0x2000);
    *param_2 = 2;
    param_2[0x8a] = 0xd;
    param_2[0x8b] = 0;
LAB_18000f637:
    uVar5 = 0;
    uVar2 = FUN_180026710(param_1,param_2 + 0x48,*(size_t *)(param_2 + 0x8a),(void *)0x0,0);
    if (uVar2 == 0xffffffdb) {
      return -0x25;
    }
    if (uVar2 != 0) {
      iVar3 = FUN_180018820(param_1,uVar2,0x180030910,uVar5);
      goto LAB_18000f84b;
    }
    *param_2 = 3;
LAB_18000f683:
    param_4 = (longlong *)(param_2 + 0x8c);
    uVar5 = FUN_18001a170(param_1,0x1f,(undefined8 *)(param_2 + 0x88),param_4,0,(void *)0x0,0,
                          (longlong)(param_2 + 2));
    iVar4 = (int)uVar5;
    if (iVar4 == -0x25) {
      return -0x25;
    }
    if (iVar4 != 0) {
      iVar3 = FUN_180018820(param_1,iVar4,0x180030940,param_4);
      goto LAB_18000f84b;
    }
    iVar4 = 4;
    *param_2 = 4;
  }
  else {
    if (iVar4 == 2) goto LAB_18000f637;
    if (iVar4 == 3) goto LAB_18000f683;
  }
  plVar6 = (longlong *)(param_2 + 0x88);
  if (iVar4 == 4) {
    uVar1 = *(ulonglong *)(param_2 + 0x8c);
    if (uVar1 < 9) {
      iVar3 = FUN_180018820(param_1,0xfffffff2,0x180030970,param_4);
    }
    else {
      local_48 = *plVar6;
      local_40 = local_48 + 1;
      local_38 = uVar1;
      uVar5 = FUN_1800189c0(&local_48,&local_res18,(ulonglong *)local_res10);
      if ((int)uVar5 == 0) {
        uVar5 = FUN_1800189c0(&local_48,&local_58,(ulonglong *)local_res20);
        if ((int)uVar5 == 0) {
          BN_bin2bn(local_res18,local_res10[0],*(undefined8 *)(param_2 + 0x44));
          BN_bin2bn(local_58,local_res20[0],*(undefined8 *)(param_2 + 0x46));
          iVar3 = FUN_180011480(param_1,*(undefined8 *)(param_2 + 0x46),
                                *(undefined1 ***)(param_2 + 0x44),
                                (undefined1 **)(ulonglong)local_res10[0],0x100,&local_50,' ',0x21,
                                *plVar6 + 1,*(ulonglong *)(param_2 + 0x8c) - 1,param_2 + 6);
          if (iVar3 == -0x25) {
            return -0x25;
          }
          (**(code **)(param_1 + 0x18))(*plVar6,param_1);
        }
        else {
          iVar3 = FUN_180018820(param_1,0xfffffff2,0x1800309b0,param_4);
        }
      }
      else {
        iVar3 = FUN_180018820(param_1,0xfffffff2,0x180030990,param_4);
      }
    }
  }
LAB_18000f84b:
  *param_2 = 0;
  BN_clear_free(*(undefined8 *)(param_2 + 0x46));
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  BN_clear_free(*(undefined8 *)(param_2 + 0x44));
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  return iVar3;
}




int FUN_18000f890(ulonglong param_1,int *param_2,undefined8 param_3,ulonglong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  longlong local_res10;
  
  iVar1 = *param_2;
  iVar4 = 0;
  iVar6 = 0x19f;
  if (iVar1 == 0) {
    param_2[0x90] = 0;
    param_2[0x91] = 0;
    *param_2 = 2;
LAB_18000f8d5:
    pcVar7 = (char *)**(undefined8 **)(param_1 + 0x90);
    if (pcVar7 == (char *)0x0) goto LAB_18000fb1b;
    iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp256");
    if (iVar1 == 0) {
      uVar2 = 0x19f;
    }
    else {
      iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp384");
      if (iVar1 == 0) {
        uVar2 = 0x2cb;
      }
      else {
        iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp521");
        if (iVar1 != 0) goto LAB_18000fb1b;
        uVar2 = 0x2cc;
      }
    }
    param_4 = (ulonglong *)(param_2 + 0x92);
    uVar3 = FUN_180009250(param_1,(undefined8 *)(param_2 + 0x8e),(undefined8 *)(param_2 + 0x90),
                          param_4,uVar2);
    if (uVar3 == 0) {
      local_res10 = (longlong)param_2 + 0x121;
      *(undefined1 *)(param_2 + 0x48) = 0x1e;
      FUN_1800190c0(&local_res10,*(void **)(param_2 + 0x90),*(ulonglong *)(param_2 + 0x92));
      *param_2 = 3;
      *(longlong *)(param_2 + 0x8a) = *(longlong *)(param_2 + 0x92) + 5;
LAB_18000f9c7:
      param_4 = (ulonglong *)0x0;
      uVar3 = FUN_180026710(param_1,param_2 + 0x48,*(size_t *)(param_2 + 0x8a),(void *)0x0,0);
      if (uVar3 == 0xffffffdb) {
        return -0x25;
      }
      if (uVar3 == 0) {
        *param_2 = 4;
LAB_18000fa05:
        param_4 = (ulonglong *)(param_2 + 0x8c);
        uVar5 = FUN_18001a170(param_1,0x1f,(undefined8 *)(param_2 + 0x88),(longlong *)param_4,0,
                              (void *)0x0,0,(longlong)(param_2 + 2));
        uVar3 = (uint)uVar5;
        if (uVar3 == 0xffffffdb) {
          return -0x25;
        }
        if (uVar3 == 0) {
          *param_2 = 5;
          goto LAB_18000fa61;
        }
        pcVar7 = "Timeout waiting for ECDH_REPLY reply";
      }
      else {
        pcVar7 = "Unable to send ECDH_INIT";
      }
    }
    else {
      pcVar7 = "Unable to create private key";
    }
  }
  else {
    if (iVar1 == 2) goto LAB_18000f8d5;
    if (iVar1 == 3) goto LAB_18000f9c7;
    if (iVar1 == 4) goto LAB_18000fa05;
    if (iVar1 != 5) goto LAB_18000fb31;
LAB_18000fa61:
    pcVar7 = (char *)**(undefined8 **)(param_1 + 0x90);
    if (pcVar7 != (char *)0x0) {
      iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp256");
      if (iVar1 != 0) {
        iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp384");
        if (iVar1 == 0) {
          iVar6 = 0x2cb;
        }
        else {
          iVar1 = strcmp(pcVar7,"ecdh-sha2-nistp521");
          if (iVar1 != 0) goto LAB_18000fb1b;
          iVar6 = 0x2cc;
        }
      }
      iVar4 = FUN_180012740(param_1,iVar6,*(longlong *)(param_2 + 0x88),
                            *(ulonglong *)(param_2 + 0x8c),*(undefined8 *)(param_2 + 0x90),
                            *(undefined8 *)(param_2 + 0x92),*(undefined8 *)(param_2 + 0x8e),
                            param_2 + 6);
      if (iVar4 == -0x25) {
        return -0x25;
      }
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_2 + 0x88),param_1);
      goto LAB_18000fb31;
    }
LAB_18000fb1b:
    uVar3 = 0xffffffff;
    pcVar7 = "Unknown KEX nistp curve type";
  }
  iVar4 = FUN_180018820(param_1,uVar3,(longlong)pcVar7,param_4);
LAB_18000fb31:
  if (*(longlong *)(param_2 + 0x90) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(param_2 + 0x90),param_1);
    param_2[0x90] = 0;
    param_2[0x91] = 0;
  }
  if (*(longlong *)(param_2 + 0x8e) != 0) {
    EC_KEY_free();
    param_2[0x8e] = 0;
    param_2[0x8f] = 0;
  }
  *param_2 = 0;
  return iVar4;
}




int FUN_18000fb90(ulonglong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong local_res10;
  
  iVar1 = *param_2;
  iVar2 = 0;
  if (iVar1 == 0) {
    param_2[0x90] = 0;
    param_2[0x91] = 0;
    *param_2 = 2;
LAB_18000fbd6:
    _Str1 = (char *)**(undefined8 **)(param_1 + 0x90);
    iVar1 = strcmp(_Str1,"curve25519-sha256@libssh.org");
    if ((iVar1 != 0) && (iVar1 = strcmp(_Str1,"curve25519-sha256"), iVar1 != 0)) {
      iVar2 = FUN_180018820(param_1,0xffffffff,0x180030e38,param_4);
      goto LAB_18000fdab;
    }
    uVar4 = FUN_180008920(param_1,(longlong *)(param_2 + 0x94),(longlong *)(param_2 + 0x96));
    if ((int)uVar4 != 0) {
      iVar2 = FUN_180018820(param_1,(int)uVar4,0x180030bb0,param_4);
      goto LAB_18000fdab;
    }
    local_res10 = (longlong)param_2 + 0x121;
    *(undefined1 *)(param_2 + 0x48) = 0x1e;
    FUN_1800190c0(&local_res10,*(void **)(param_2 + 0x94),0x20);
    *param_2 = 3;
    param_2[0x8a] = 0x25;
    param_2[0x8b] = 0;
LAB_18000fcba:
    uVar4 = 0;
    uVar3 = FUN_180026710(param_1,param_2 + 0x48,*(size_t *)(param_2 + 0x8a),(void *)0x0,0);
    if (uVar3 == 0xffffffdb) {
      return -0x25;
    }
    if (uVar3 != 0) {
      iVar2 = FUN_180018820(param_1,uVar3,0x180030bd0,uVar4);
      goto LAB_18000fdab;
    }
    *param_2 = 4;
LAB_18000fd02:
    plVar7 = (longlong *)(param_2 + 0x8c);
    uVar4 = FUN_18001a170(param_1,0x1f,(undefined8 *)(param_2 + 0x88),plVar7,0,(void *)0x0,0,
                          (longlong)(param_2 + 2));
    iVar1 = (int)uVar4;
    if (iVar1 == -0x25) {
      return -0x25;
    }
    if (iVar1 != 0) {
      iVar2 = FUN_180018820(param_1,iVar1,0x180030bf0,plVar7);
      goto LAB_18000fdab;
    }
    *param_2 = 5;
  }
  else {
    if (iVar1 == 2) goto LAB_18000fbd6;
    if (iVar1 == 3) goto LAB_18000fcba;
    if (iVar1 == 4) goto LAB_18000fd02;
    if (iVar1 != 5) goto LAB_18000fdab;
  }
  iVar2 = FUN_1800104a0(param_1,*(longlong *)(param_2 + 0x88),*(ulonglong *)(param_2 + 0x8c),
                        *(longlong *)(param_2 + 0x94),*(undefined8 *)(param_2 + 0x96),param_2 + 6);
  if (iVar2 == -0x25) {
    return -0x25;
  }
  (**(code **)(param_1 + 0x18))(*(longlong *)(param_2 + 0x88),param_1);
LAB_18000fdab:
  if (*(undefined1 **)(param_2 + 0x94) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x94);
    for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_2 + 0x94),param_1);
    param_2[0x94] = 0;
    param_2[0x95] = 0;
  }
  if (*(undefined1 **)(param_2 + 0x96) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x96);
    for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_2 + 0x96),param_1);
    param_2[0x96] = 0;
    param_2[0x97] = 0;
  }
  *param_2 = 0;
  return iVar2;
}




uint FUN_18000fe20(ulonglong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 *local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = uVar1 | 8;
  uVar7 = (ulonglong)*param_3;
  uVar5 = 0;
  if (*param_3 == 0) {
    *(uint *)(param_1 + 0x80) = uVar1 | 9;
    if ((int)param_2 != 0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
      if ((*(longlong *)(param_1 + 0xb8) != 0) &&
         (pcVar2 = *(code **)(*(longlong *)(param_1 + 0xb8) + 0x40), pcVar2 != (code *)0x0)) {
        param_2 = param_1 + 0xc0;
        (*pcVar2)();
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    uVar7 = 2;
    *param_3 = 2;
  }
  puVar8 = (uint *)0x0;
  if ((*(longlong *)(param_1 + 0x90) == 0) || (*(longlong *)(param_1 + 0xb8) == 0)) {
    iVar4 = (int)uVar7;
    if (iVar4 == 2) {
      *(undefined8 *)(param_3 + 0xa2) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_3 + 0xa4) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      *param_3 = 3;
LAB_18000ff20:
      iVar4 = FUN_180015280(param_1,param_2,uVar7,0);
      if (iVar4 == -0x25) goto LAB_18000ff2d;
      if (iVar4 != 0) {
        *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_3 + 0xa2);
        *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_3 + 0xa4);
        goto LAB_18000ff50;
      }
      *param_3 = 4;
    }
    else {
      param_2 = param_1 + 0x1b8;
      if (iVar4 == 3) goto LAB_18000ff20;
      if (iVar4 != 4) goto LAB_18001006e;
    }
    local_res8 = (undefined8 *)(param_1 + 0x1b8);
    puVar8 = param_3 + 0xa0;
    uVar6 = FUN_18001a170(param_1,0x14,(undefined8 *)(param_3 + 0x9e),(longlong *)puVar8,0,
                          (void *)0x0,0,(longlong)(param_3 + 2));
    if ((int)uVar6 == -0x25) goto LAB_18000ff2d;
    if ((int)uVar6 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1b0);
      if (lVar3 != 0) {
        (**(code **)(param_1 + 0x18))(lVar3,param_1);
      }
      *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_3 + 0xa2);
      *local_res8 = *(undefined8 *)(param_3 + 0xa4);
LAB_18000ff50:
      *param_3 = 0;
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff6;
      return 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x140),param_1);
    }
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_3 + 0x9e);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xa0);
    uVar6 = FUN_180014e40(param_1,*(longlong *)(param_3 + 0x9e),*(ulonglong *)(param_3 + 0xa0));
    uVar7 = 5;
    *param_3 = 5;
    uVar5 = -(uint)((int)uVar6 != 0) & 0xfffffffb;
    if ((int)uVar6 != 0) goto LAB_1800100ad;
  }
  else {
    uVar7 = 5;
    *param_3 = 5;
    uVar5 = 0;
  }
LAB_18001006e:
  if ((*(longlong *)(param_1 + 0x90) != 0) && ((int)uVar7 == 5)) {
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0x90) + 8))(param_1,param_3 + 6);
    if (iVar4 == -0x25) {
LAB_18000ff2d:
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff7;
      return 0xffffffdb;
    }
    if (iVar4 != 0) {
      uVar5 = FUN_180018820(param_1,0xfffffff8,0x180030ee0,puVar8);
    }
  }
LAB_1800100ad:
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x1b0),param_1);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x140),param_1);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffff6;
  *param_3 = 0;
  return uVar5;
}




void FUN_180010120(int param_1,longlong param_2,longlong param_3,longlong *param_4,ulonglong param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_38 [2];
  
  if (param_1 == 0x200) {
    uVar2 = 0;
    if (*param_4 == 0) {
      lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x40);
      *param_4 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    if (param_5 != 0) {
      do {
        FUN_18000b970(local_38);
        EVP_DigestUpdate(local_38[0],*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200))
        ;
        EVP_DigestUpdate(local_38[0],param_3 + 0x20,0x40);
        if (uVar2 == 0) {
          EVP_DigestUpdate(local_38[0],param_6,1);
          uVar3 = (ulonglong)*(uint *)(param_2 + 0xa8);
          lVar1 = *(longlong *)(param_2 + 0xa0);
        }
        else {
          lVar1 = *param_4;
          uVar3 = uVar2;
        }
        EVP_DigestUpdate(local_38[0],lVar1,uVar3);
        EVP_DigestFinal(local_38[0],*param_4 + uVar2,0);
        EVP_MD_CTX_free(local_38[0]);
        uVar2 = uVar2 + 0x40;
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 0x180) {
    uVar2 = 0;
    if (*param_4 == 0) {
      lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x30);
      *param_4 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    if (param_5 != 0) {
      do {
        FUN_18000b880(local_38);
        EVP_DigestUpdate(local_38[0],*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200))
        ;
        EVP_DigestUpdate(local_38[0],param_3 + 0x20,0x30);
        if (uVar2 == 0) {
          EVP_DigestUpdate(local_38[0],param_6,1);
          uVar3 = (ulonglong)*(uint *)(param_2 + 0xa8);
          lVar1 = *(longlong *)(param_2 + 0xa0);
        }
        else {
          lVar1 = *param_4;
          uVar3 = uVar2;
        }
        EVP_DigestUpdate(local_38[0],lVar1,uVar3);
        EVP_DigestFinal(local_38[0],*param_4 + uVar2,0);
        EVP_MD_CTX_free(local_38[0]);
        uVar2 = uVar2 + 0x30;
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 0x100) {
    uVar2 = 0;
    if (*param_4 == 0) {
      lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x20);
      *param_4 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    if (param_5 != 0) {
      do {
        FUN_18000b820(local_38);
        EVP_DigestUpdate(local_38[0],*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200))
        ;
        EVP_DigestUpdate(local_38[0],param_3 + 0x20,0x20);
        if (uVar2 == 0) {
          EVP_DigestUpdate(local_38[0],param_6,1);
          uVar3 = (ulonglong)*(uint *)(param_2 + 0xa8);
          lVar1 = *(longlong *)(param_2 + 0xa0);
        }
        else {
          lVar1 = *param_4;
          uVar3 = uVar2;
        }
        EVP_DigestUpdate(local_38[0],lVar1,uVar3);
        EVP_DigestFinal(local_38[0],*param_4 + uVar2,0);
        EVP_MD_CTX_free(local_38[0]);
        uVar2 = uVar2 + 0x20;
      } while (uVar2 < param_5);
    }
  }
  else if (param_1 == 1) {
    uVar2 = 0;
    if (*param_4 == 0) {
      lVar1 = (**(code **)(param_2 + 8))(param_5 + 0x14);
      *param_4 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    if (param_5 != 0) {
      do {
        FUN_18000b730(local_38);
        EVP_DigestUpdate(local_38[0],*(undefined8 *)(param_3 + 0xb0),*(undefined8 *)(param_3 + 200))
        ;
        EVP_DigestUpdate(local_38[0],param_3 + 0x20,0x14);
        if (uVar2 == 0) {
          EVP_DigestUpdate(local_38[0],param_6,1);
          uVar3 = (ulonglong)*(uint *)(param_2 + 0xa8);
          lVar1 = *(longlong *)(param_2 + 0xa0);
        }
        else {
          lVar1 = *param_4;
          uVar3 = uVar2;
        }
        EVP_DigestUpdate(local_38[0],lVar1,uVar3);
        EVP_DigestFinal(local_38[0],*param_4 + uVar2,0);
        EVP_MD_CTX_free(local_38[0]);
        uVar2 = uVar2 + 0x14;
      } while (uVar2 < param_5);
    }
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1800104a0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4,
             undefined8 param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  void *_Dst;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined8 local_res18;
  ulonglong uVar19;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  void *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_60 = 0;
  uVar4 = 0;
  if (param_3 < 5) {
    uVar4 = FUN_180018820(param_1,0xfffffff6,0x180030c18,param_4);
    return uVar4;
  }
  iVar5 = *param_6;
  lVar11 = param_4;
  if (iVar5 == 0) {
    uVar7 = BN_new();
    *(undefined8 *)(param_6 + 0x28) = uVar7;
    iVar5 = 2;
    *param_6 = 2;
  }
  if (iVar5 == 2) {
    local_38 = param_2 + 1;
    local_40 = param_2;
    local_30 = param_3;
    uVar7 = FUN_180018ad0(&local_40,(longlong *)&local_48,&local_68);
    if ((int)uVar7 == 0) {
      *(int *)(param_1 + 0xd0) = (int)local_68;
      _Dst = (void *)(**(code **)(param_1 + 8))((int)local_68,param_1);
      *(void **)(param_1 + 200) = _Dst;
      if (_Dst == (void *)0x0) {
        uVar4 = FUN_180018820(param_1,0xfffffffa,0x180030c60,lVar11);
        goto LAB_180011426;
      }
      memcpy(_Dst,local_48,(ulonglong)*(uint *)(param_1 + 0xd0));
      uVar7 = FUN_180009f80(&local_res18);
      bVar18 = (int)uVar7 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res18._4_4_,(int)local_res18),param_1 + 0xd4,0);
        EVP_MD_CTX_free(CONCAT44(local_res18._4_4_,(int)local_res18));
      }
      *(uint *)(param_1 + 0xe4) = (uint)bVar18;
      uVar7 = FUN_18000b730(&local_res18);
      bVar18 = (int)uVar7 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res18._4_4_,(int)local_res18),param_1 + 0xe8,0);
        EVP_MD_CTX_free(CONCAT44(local_res18._4_4_,(int)local_res18));
      }
      *(uint *)(param_1 + 0xfc) = (uint)bVar18;
      uVar7 = FUN_18000b820(&local_res18);
      bVar18 = (int)uVar7 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res18._4_4_,(int)local_res18),param_1 + 0x100,0);
        EVP_MD_CTX_free(CONCAT44(local_res18._4_4_,(int)local_res18));
      }
      *(uint *)(param_1 + 0x120) = (uint)bVar18;
      lVar11 = param_1 + 0xc0;
      iVar5 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x10))
                        (param_1,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
      if (iVar5 != 0) {
        uVar4 = FUN_180018820(param_1,0xfffffff6,0x180030ca0,lVar11);
        goto LAB_180011426;
      }
      uVar7 = FUN_180018ad0(&local_40,&local_58,(ulonglong *)&local_50);
      if ((int)uVar7 == 0) {
        if (CONCAT44(uStack_4c,local_50) != 0x20) {
          uVar4 = FUN_180018820(param_1,0xfffffff6,0x180030d00,lVar11);
          goto LAB_180011426;
        }
        uVar7 = FUN_180018ad0(&local_40,(longlong *)(param_6 + 0x2e),(ulonglong *)(param_6 + 0x34));
        if ((int)uVar7 != 0) {
          uVar4 = FUN_180018820(param_1,0xfffffff6,0x180030d30,lVar11);
          goto LAB_180011426;
        }
        iVar5 = FUN_1800087a0((longlong *)(param_6 + 0x28),param_5,local_58);
        if (iVar5 != 0) {
          uVar4 = FUN_180018820(param_1,0xfffffffb,0x180030d58,lVar11);
          goto LAB_180011426;
        }
        iVar5 = BN_num_bits(*(undefined8 *)(param_6 + 0x28));
        *(longlong *)(param_6 + 0x32) =
             (longlong)(((int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3) + 5);
        uVar6 = BN_num_bits(*(undefined8 *)(param_6 + 0x28));
        uVar6 = uVar6 & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        if (uVar6 != 0) {
          *(longlong *)(param_6 + 0x32) = *(longlong *)(param_6 + 0x32) + -1;
        }
        puVar8 = (undefined1 *)(**(code **)(param_1 + 8))(*(undefined8 *)(param_6 + 0x32),param_1);
        *(undefined1 **)(param_6 + 0x2c) = puVar8;
        if (puVar8 == (undefined1 *)0x0) {
          uVar4 = FUN_180018820(param_1,0xfffffffa,0x180030d88,lVar11);
          goto LAB_180011426;
        }
        FUN_180018d00(puVar8,param_6[0x32] + -4);
        uVar6 = BN_num_bits(*(undefined8 *)(param_6 + 0x28));
        uVar6 = uVar6 & 0x80000007;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
        }
        puVar8 = (undefined1 *)(*(longlong *)(param_6 + 0x2c) + 4);
        if (uVar6 == 0) {
          *puVar8 = 0;
          puVar8 = (undefined1 *)(*(longlong *)(param_6 + 0x2c) + 5);
        }
        BN_bn2bin(*(undefined8 *)(param_6 + 0x28),puVar8);
        *(undefined8 **)(param_6 + 0x36) = &local_res18;
        FUN_18000b820(&local_res18);
        if (*(longlong *)(param_1 + 0x1a8) == 0) {
          FUN_180018d00((undefined1 *)(param_6 + 8),0x16);
          EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
          lVar11 = 0x16;
          pcVar14 = "SSH-2.0-libssh2_1.11.0";
        }
        else {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar11) != '\0');
          FUN_180018d00((undefined1 *)(param_6 + 8),(int)lVar11 + -2);
          EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
          pcVar14 = *(char **)(param_1 + 0x1a8);
          lVar15 = -1;
          do {
            lVar11 = lVar15;
            lVar15 = lVar11 + 1;
          } while (pcVar14[lVar15] != '\0');
          lVar11 = lVar11 + -1;
        }
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),pcVar14,lVar11);
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
        FUN_180018d00((undefined1 *)(param_6 + 8),(int)lVar11);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18));
        FUN_180018d00((undefined1 *)(param_6 + 8),*(undefined4 *)(param_1 + 0x1b8));
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),
                         *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8));
        FUN_180018d00((undefined1 *)(param_6 + 8),*(undefined4 *)(param_1 + 0x148));
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),
                         *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
        FUN_180018d00((undefined1 *)(param_6 + 8),*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        FUN_180018d00((undefined1 *)(param_6 + 8),0x20);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_4,0x20);
        FUN_180018d00((undefined1 *)(param_6 + 8),local_50);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,4);
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),local_58,
                         CONCAT44(uStack_4c,local_50));
        EVP_DigestUpdate(CONCAT44(local_res18._4_4_,(int)local_res18),
                         *(undefined8 *)(param_6 + 0x2c),*(undefined8 *)(param_6 + 0x32));
        EVP_DigestFinal(CONCAT44(local_res18._4_4_,(int)local_res18),param_6 + 8,0);
        EVP_MD_CTX_free(CONCAT44(local_res18._4_4_,(int)local_res18));
        piVar9 = param_6 + 8;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x28))
                          (param_1,*(undefined8 *)(param_6 + 0x2e),*(undefined8 *)(param_6 + 0x34),
                           piVar9,0x20,param_1 + 0xc0);
        if (iVar5 != 0) {
          uVar4 = FUN_180018820(param_1,0xfffffff5,0x180030da8,piVar9);
          goto LAB_180011426;
        }
        *param_6 = 3;
        *(undefined1 *)(param_6 + 0x18) = 0x15;
        goto LAB_180010b03;
      }
      pcVar14 = "Unexpected curve25519 key length";
    }
    else {
      pcVar14 = "Unexpected curve25519 key length 2";
    }
    uVar4 = FUN_180018820(param_1,0xfffffff2,(longlong)pcVar14,lVar11);
    goto LAB_180011426;
  }
  if (iVar5 == 3) {
LAB_180010b03:
    uVar7 = 0;
    uVar6 = FUN_180026710(param_1,param_6 + 0x18,1,(void *)0x0,0);
    if (uVar6 == 0xffffffdb) {
      return 0xffffffdb;
    }
    if (uVar6 != 0) {
      uVar4 = FUN_180018820(param_1,uVar6,0x180030dd8,uVar7);
      goto LAB_180011426;
    }
    *param_6 = 5;
  }
  else if (iVar5 != 5) goto LAB_180011426;
  plVar17 = (longlong *)(param_6 + 0x1e);
  uVar19 = 0;
  uVar7 = FUN_18001a170(param_1,0x15,(undefined8 *)(param_6 + 6),plVar17,0,(void *)0x0,0,
                        (longlong)(param_6 + 0x38));
  iVar5 = (int)uVar7;
  if (iVar5 == -0x25) {
    return 0xffffffdb;
  }
  if (iVar5 != 0) {
    uVar4 = FUN_180018820(param_1,iVar5,0x180030e08,plVar17);
    goto LAB_180011426;
  }
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_6 + 6),param_1);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    piVar9 = (int *)(**(code **)(param_1 + 8))(0x20,param_1);
    *(int **)(param_1 + 0xa0) = piVar9;
    if (piVar9 == (int *)0x0) {
      uVar4 = FUN_180018820(param_1,0xfffffffa,0x180030818,plVar17);
      goto LAB_180011426;
    }
    iVar5 = param_6[9];
    iVar2 = param_6[10];
    iVar3 = param_6[0xb];
    *piVar9 = param_6[8];
    piVar9[1] = iVar5;
    piVar9[2] = iVar2;
    piVar9[3] = iVar3;
    uVar7 = *(undefined8 *)(param_6 + 0xe);
    *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(param_6 + 0xc);
    *(undefined8 *)(piVar9 + 6) = uVar7;
    *(undefined4 *)(param_1 + 0xa8) = 0x20;
  }
  plVar17 = (longlong *)(param_1 + 0x1c0);
  if (*(code **)(*plVar17 + 0x30) != (code *)0x0) {
    (**(code **)(*plVar17 + 0x30))(param_1,param_1 + 0x1c8);
  }
  if (*(longlong *)(*plVar17 + 0x20) == 0) {
LAB_180010e82:
    plVar17 = (longlong *)(param_1 + 0x150);
    if (*(code **)(*plVar17 + 0x30) != (code *)0x0) {
      (**(code **)(*plVar17 + 0x30))(param_1,param_1 + 0x158);
    }
    uVar4 = 0;
    if (*(longlong *)(*plVar17 + 0x20) != 0) {
      local_res18._0_4_ = 0;
      uVar13 = 0;
      local_68._0_4_ = 0;
      puVar8 = (undefined1 *)
               (**(code **)(param_1 + 8))((longlong)(*(int *)(*plVar17 + 0x14) + 0x20),param_1);
      if (puVar8 == (undefined1 *)0x0) goto LAB_180010f2d;
      lVar11 = *plVar17;
      if (*(int *)(lVar11 + 0x14) != 0) {
        do {
          FUN_18000b820((longlong *)&local_50);
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),*(undefined8 *)(param_6 + 0x2c),
                           *(undefined8 *)(param_6 + 0x32));
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),param_6 + 8,0x20);
          uVar7 = CONCAT44(uStack_4c,local_50);
          puVar10 = puVar8;
          uVar16 = uVar13;
          if (uVar13 == 0) {
            EVP_DigestUpdate(uVar7,&DAT_18003084c,1);
            uVar7 = CONCAT44(uStack_4c,local_50);
            puVar10 = *(undefined1 **)(param_1 + 0xa0);
            uVar16 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          EVP_DigestUpdate(uVar7,puVar10,uVar16);
          EVP_DigestFinal(CONCAT44(uStack_4c,local_50),puVar8 + uVar13,0);
          EVP_MD_CTX_free(CONCAT44(uStack_4c,local_50));
          lVar11 = *plVar17;
          uVar13 = uVar13 + 0x20;
        } while (uVar13 < (ulonglong)(longlong)*(int *)(lVar11 + 0x14));
      }
      uVar13 = 0;
      puVar10 = (undefined1 *)
                (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar11 + 0x18) + 0x20),param_1);
      if (puVar10 == (undefined1 *)0x0) {
        (**(code **)(param_1 + 0x18))(puVar8,param_1);
        uVar4 = 0xfffffffb;
        goto LAB_180011426;
      }
      lVar11 = *(longlong *)(param_1 + 0x150);
      if (*(int *)(lVar11 + 0x18) != 0) {
        do {
          FUN_18000b820(&local_58);
          EVP_DigestUpdate(local_58,*(undefined8 *)(param_6 + 0x2c),*(undefined8 *)(param_6 + 0x32))
          ;
          EVP_DigestUpdate(local_58,param_6 + 8,0x20);
          puVar12 = puVar10;
          uVar16 = uVar13;
          if (uVar13 == 0) {
            EVP_DigestUpdate(local_58,&DAT_180030850,1);
            puVar12 = *(undefined1 **)(param_1 + 0xa0);
            uVar16 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          EVP_DigestUpdate(local_58,puVar12,uVar16);
          EVP_DigestFinal(local_58,puVar10 + uVar13,0);
          EVP_MD_CTX_free(local_58);
          lVar11 = *(longlong *)(param_1 + 0x150);
          uVar13 = uVar13 + 0x20;
          uVar4 = local_60;
        } while (uVar13 < (ulonglong)(longlong)*(int *)(lVar11 + 0x18));
      }
      iVar5 = (**(code **)(lVar11 + 0x20))
                        (param_1,lVar11,puVar8,&local_res18,puVar10,&local_68,
                         uVar19 & 0xffffffff00000000,param_1 + 0x158);
      if (iVar5 != 0) goto LAB_180010e2c;
      if ((int)local_res18 != 0) {
        puVar12 = puVar8;
        for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x14); lVar11 != 0;
            lVar11 = lVar11 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        (**(code **)(param_1 + 0x18))(puVar8,param_1);
      }
      if ((int)local_68 != 0) {
        puVar8 = puVar10;
        for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x18); lVar11 != 0;
            lVar11 = lVar11 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(param_1 + 0x18))(puVar10,param_1);
      }
    }
    plVar17 = (longlong *)(param_1 + 0x1d0);
    if (*(code **)(*plVar17 + 0x20) != (code *)0x0) {
      (**(code **)(*plVar17 + 0x20))(param_1,param_1 + 0x1e0);
    }
    if (*(longlong *)(*plVar17 + 0x10) != 0) {
      local_res18._0_4_ = 0;
      uVar19 = 0;
      puVar8 = (undefined1 *)
               (**(code **)(param_1 + 8))((longlong)(*(int *)(*plVar17 + 0xc) + 0x20),param_1);
      if (puVar8 == (undefined1 *)0x0) goto LAB_180010f2d;
      lVar11 = *plVar17;
      if (*(int *)(lVar11 + 0xc) != 0) {
        do {
          FUN_18000b820((longlong *)&local_50);
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),*(undefined8 *)(param_6 + 0x2c),
                           *(undefined8 *)(param_6 + 0x32));
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),param_6 + 8,0x20);
          uVar7 = CONCAT44(uStack_4c,local_50);
          puVar10 = puVar8;
          uVar13 = uVar19;
          if (uVar19 == 0) {
            EVP_DigestUpdate(uVar7,&DAT_180030854,1);
            uVar7 = CONCAT44(uStack_4c,local_50);
            puVar10 = *(undefined1 **)(param_1 + 0xa0);
            uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          EVP_DigestUpdate(uVar7,puVar10,uVar13);
          EVP_DigestFinal(CONCAT44(uStack_4c,local_50),puVar8 + uVar19,0);
          EVP_MD_CTX_free(CONCAT44(uStack_4c,local_50));
          lVar11 = *plVar17;
          uVar19 = uVar19 + 0x20;
        } while (uVar19 < (ulonglong)(longlong)*(int *)(lVar11 + 0xc));
      }
      (**(code **)(lVar11 + 0x10))(param_1,puVar8,&local_res18,param_1 + 0x1e0);
      if ((int)local_res18 != 0) {
        puVar10 = puVar8;
        for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xc); lVar11 != 0;
            lVar11 = lVar11 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        (**(code **)(param_1 + 0x18))(puVar8,param_1);
      }
    }
    plVar17 = (longlong *)(param_1 + 0x160);
    if (*(code **)(*plVar17 + 0x20) != (code *)0x0) {
      (**(code **)(*plVar17 + 0x20))(param_1,param_1 + 0x170);
    }
    if (*(longlong *)(*plVar17 + 0x10) != 0) {
      local_res18._0_4_ = 0;
      uVar19 = 0;
      puVar8 = (undefined1 *)
               (**(code **)(param_1 + 8))((longlong)(*(int *)(*plVar17 + 0xc) + 0x20),param_1);
      if (puVar8 == (undefined1 *)0x0) goto LAB_180010f2d;
      lVar11 = *plVar17;
      if (*(int *)(lVar11 + 0xc) != 0) {
        do {
          FUN_18000b820((longlong *)&local_50);
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),*(undefined8 *)(param_6 + 0x2c),
                           *(undefined8 *)(param_6 + 0x32));
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),param_6 + 8,0x20);
          uVar7 = CONCAT44(uStack_4c,local_50);
          puVar10 = puVar8;
          uVar13 = uVar19;
          if (uVar19 == 0) {
            EVP_DigestUpdate(uVar7,&DAT_180030858,1);
            uVar7 = CONCAT44(uStack_4c,local_50);
            puVar10 = *(undefined1 **)(param_1 + 0xa0);
            uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          EVP_DigestUpdate(uVar7,puVar10,uVar13);
          EVP_DigestFinal(CONCAT44(uStack_4c,local_50),puVar8 + uVar19,0);
          EVP_MD_CTX_free(CONCAT44(uStack_4c,local_50));
          lVar11 = *plVar17;
          uVar19 = uVar19 + 0x20;
        } while (uVar19 < (ulonglong)(longlong)*(int *)(lVar11 + 0xc));
      }
      (**(code **)(lVar11 + 0x10))(param_1,puVar8,&local_res18,param_1 + 0x170);
      if ((int)local_res18 != 0) {
        puVar10 = puVar8;
        for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0xc); lVar11 != 0;
            lVar11 = lVar11 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        (**(code **)(param_1 + 0x18))(puVar8,param_1);
      }
    }
    if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
       (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1,1,param_1 + 0x1f0);
    }
    if (((*(longlong *)(param_1 + 0x1e8) == 0) ||
        (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x10), pcVar1 == (code *)0x0)) ||
       (iVar5 = (*pcVar1)(param_1,1,param_1 + 0x1f0), iVar5 == 0)) {
      if ((*(longlong *)(param_1 + 0x178) != 0) &&
         (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x28), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1,0,param_1 + 0x180);
      }
      if (((*(longlong *)(param_1 + 0x178) != 0) &&
          (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x10), pcVar1 != (code *)0x0)) &&
         (iVar5 = (*pcVar1)(param_1,0,param_1 + 0x180), iVar5 != 0)) {
        uVar4 = 0xfffffffb;
      }
      goto LAB_180011426;
    }
  }
  else {
    local_res18._0_4_ = 0;
    uVar13 = 0;
    local_68._0_4_ = 0;
    puVar8 = (undefined1 *)
             (**(code **)(param_1 + 8))((longlong)(*(int *)(*plVar17 + 0x14) + 0x20),param_1);
    if (puVar8 == (undefined1 *)0x0) {
      uVar4 = 0xffffffff;
      goto LAB_180011426;
    }
    lVar11 = *plVar17;
    if (*(int *)(lVar11 + 0x14) != 0) {
      do {
        FUN_18000b820(&local_58);
        EVP_DigestUpdate(local_58,*(undefined8 *)(param_6 + 0x2c),*(undefined8 *)(param_6 + 0x32));
        EVP_DigestUpdate(local_58,param_6 + 8,0x20);
        puVar10 = puVar8;
        uVar16 = uVar13;
        if (uVar13 == 0) {
          EVP_DigestUpdate(local_58,&DAT_180030844,1);
          puVar10 = *(undefined1 **)(param_1 + 0xa0);
          uVar16 = (ulonglong)*(uint *)(param_1 + 0xa8);
        }
        EVP_DigestUpdate(local_58,puVar10,uVar16);
        EVP_DigestFinal(local_58,puVar8 + uVar13,0);
        EVP_MD_CTX_free(local_58);
        lVar11 = *plVar17;
        uVar13 = uVar13 + 0x20;
      } while (uVar13 < (ulonglong)(longlong)*(int *)(lVar11 + 0x14));
    }
    uVar13 = 0;
    puVar10 = (undefined1 *)
              (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar11 + 0x18) + 0x20),param_1);
    uVar4 = (undefined4)(uVar19 >> 0x20);
    if (puVar10 != (undefined1 *)0x0) {
      lVar11 = *(longlong *)(param_1 + 0x1c0);
      if (*(int *)(lVar11 + 0x18) != 0) {
        do {
          FUN_18000b820((longlong *)&local_50);
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),*(undefined8 *)(param_6 + 0x2c),
                           *(undefined8 *)(param_6 + 0x32));
          EVP_DigestUpdate(CONCAT44(uStack_4c,local_50),param_6 + 8,0x20);
          uVar7 = CONCAT44(uStack_4c,local_50);
          puVar12 = puVar10;
          uVar16 = uVar13;
          if (uVar13 == 0) {
            EVP_DigestUpdate(uVar7,&DAT_180030848,1);
            uVar7 = CONCAT44(uStack_4c,local_50);
            puVar12 = *(undefined1 **)(param_1 + 0xa0);
            uVar16 = (ulonglong)*(uint *)(param_1 + 0xa8);
          }
          EVP_DigestUpdate(uVar7,puVar12,uVar16);
          EVP_DigestFinal(CONCAT44(uStack_4c,local_50),puVar10 + uVar13,0);
          EVP_MD_CTX_free(CONCAT44(uStack_4c,local_50));
          uVar4 = (undefined4)(uVar19 >> 0x20);
          lVar11 = *(longlong *)(param_1 + 0x1c0);
          uVar13 = uVar13 + 0x20;
        } while (uVar13 < (ulonglong)(longlong)*(int *)(lVar11 + 0x18));
      }
      uVar19 = CONCAT44(uVar4,1);
      iVar5 = (**(code **)(lVar11 + 0x20))
                        (param_1,lVar11,puVar8,&local_res18,puVar10,&local_68,uVar19,param_1 + 0x1c8
                        );
      if (iVar5 == 0) {
        if ((int)local_res18 != 0) {
          puVar12 = puVar8;
          for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x14); lVar11 != 0;
              lVar11 = lVar11 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          (**(code **)(param_1 + 0x18))(puVar8,param_1);
        }
        if ((int)local_68 != 0) {
          puVar8 = puVar10;
          for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x18); lVar11 != 0;
              lVar11 = lVar11 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          (**(code **)(param_1 + 0x18))(puVar10,param_1);
        }
        goto LAB_180010e82;
      }
LAB_180010e2c:
      (**(code **)(param_1 + 0x18))(puVar8,param_1);
      (**(code **)(param_1 + 0x18))(puVar10,param_1);
      uVar4 = 0xfffffffb;
      goto LAB_180011426;
    }
    (**(code **)(param_1 + 0x18))(puVar8,param_1);
  }
LAB_180010f2d:
  uVar4 = 0xfffffffb;
LAB_180011426:
  BN_clear_free(*(undefined8 *)(param_6 + 0x28));
  lVar11 = *(longlong *)(param_6 + 0x2c);
  param_6[0x28] = 0;
  param_6[0x29] = 0;
  if (lVar11 != 0) {
    (**(code **)(param_1 + 0x18))(lVar11,param_1);
    param_6[0x2c] = 0;
    param_6[0x2d] = 0;
  }
  *param_6 = 0;
  return uVar4;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_180011480(ulonglong param_1,undefined8 param_2,undefined1 **param_3,undefined1 **param_4,
                 uint param_5,longlong *param_6,char param_7,byte param_8,longlong param_9,
                 undefined8 param_10,int *param_11)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  void *_Dst;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  longlong lVar15;
  size_t _Size;
  int iVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  piVar3 = param_11;
  uVar4 = param_5;
  iVar16 = 0;
  if (param_5 == 0x200) {
    param_5 = 0x40;
LAB_1800114fe:
    iVar6 = *param_11;
    iVar8 = (int)param_4;
    if (iVar6 == 0) {
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[0x2c] = 0;
      piVar3[0x2d] = 0;
      uVar9 = BN_CTX_new();
      *(undefined8 *)(piVar3 + 0x20) = uVar9;
      FUN_180008a90((undefined8 *)(piVar3 + 0x22));
      uVar9 = BN_new();
      *(undefined8 *)(piVar3 + 0x24) = uVar9;
      uVar9 = BN_new();
      *(undefined8 *)(piVar3 + 0x26) = uVar9;
      uVar9 = BN_new();
      *(undefined8 *)(piVar3 + 0x28) = uVar9;
      piVar3[0x38] = 0;
      piVar3[0x39] = 0;
      piVar3[0x3a] = 0;
      piVar3[0x3b] = 0;
      iVar6 = BN_num_bits(param_3);
      if (iVar6 < 0x4001) {
        param_4 = param_3;
        uVar9 = FUN_180008ab0((undefined8 *)(piVar3 + 0x22),*(undefined8 *)(piVar3 + 0x24),param_2,
                              param_3,iVar8,*(undefined8 *)(piVar3 + 0x20));
        if ((int)uVar9 == 0) {
          iVar6 = BN_num_bits(*(undefined8 *)(piVar3 + 0x24));
          *(longlong *)(piVar3 + 0x1a) =
               (longlong)(((int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3) + 6);
          uVar7 = BN_num_bits(*(undefined8 *)(piVar3 + 0x24));
          uVar7 = uVar7 & 0x80000007;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
          }
          if (uVar7 != 0) {
            *(longlong *)(piVar3 + 0x1a) = *(longlong *)(piVar3 + 0x1a) + -1;
          }
          pcVar14 = (char *)(**(code **)(param_1 + 8))(*(undefined8 *)(piVar3 + 0x1a),param_1);
          *(char **)(piVar3 + 2) = pcVar14;
          if (pcVar14 != (char *)0x0) {
            *pcVar14 = param_7;
            FUN_180018d00((undefined1 *)(*(longlong *)(piVar3 + 2) + 1),piVar3[0x1a] + -5);
            uVar7 = BN_num_bits(*(undefined8 *)(piVar3 + 0x24));
            uVar7 = uVar7 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            if (uVar7 == 0) {
              *(undefined1 *)(*(longlong *)(piVar3 + 2) + 5) = 0;
            }
            BN_bn2bin(*(undefined8 *)(piVar3 + 0x24));
            *piVar3 = 2;
            goto LAB_18001169b;
          }
          pcVar14 = "Out of memory error";
          uVar7 = 0xfffffffa;
        }
        else {
          pcVar14 = "dh key pair generation failed";
          uVar7 = 0xfffffffb;
        }
      }
      else {
        pcVar14 = "dh modulus value is too large";
        uVar7 = 0xffffffde;
      }
    }
    else if (iVar6 == 2) {
LAB_18001169b:
      param_4 = (undefined1 **)0x0;
      uVar7 = FUN_180026710(param_1,*(void **)(piVar3 + 2),*(size_t *)(piVar3 + 0x1a),(void *)0x0,0)
      ;
      if (uVar7 == 0xffffffdb) {
        return -0x25;
      }
      if (uVar7 == 0) {
        *piVar3 = 3;
        goto LAB_1800116e0;
      }
      pcVar14 = "Unable to send KEX init message";
    }
    else {
      if (iVar6 == 3) {
LAB_1800116e0:
        if (*(int *)(param_1 + 0x98) != 0) {
          iVar8 = FUN_180019fc0(param_1,piVar3 + 0x3c);
          if (iVar8 == -0x25) {
            return -0x25;
          }
          if (iVar8 < 1) goto LAB_180012688;
          *(undefined4 *)(param_1 + 0x98) = 0;
        }
        *piVar3 = 4;
        iVar6 = 4;
      }
      if (iVar6 == 4) {
        param_4 = (undefined1 **)(piVar3 + 0x1c);
        uVar9 = FUN_18001a170(param_1,param_8,(undefined8 *)(piVar3 + 4),(longlong *)param_4,0,
                              (void *)0x0,0,(longlong)(piVar3 + 0x38));
        if ((int)uVar9 == -0x25) {
          return -0x25;
        }
        if ((int)uVar9 != 0) {
          pcVar14 = "Timed out waiting for KEX reply";
          uVar7 = 0xfffffff7;
          goto LAB_180012680;
        }
        uVar18 = *(ulonglong *)(piVar3 + 0x1c);
        if (uVar18 < 5) {
          pcVar14 = "Unexpected packet length DH-SHA";
          goto LAB_18001267b;
        }
        local_50 = *(longlong *)(piVar3 + 4);
        local_48 = local_50 + 1;
        local_40 = uVar18;
        if (*(longlong *)(param_1 + 200) != 0) {
          (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 200),param_1);
        }
        param_4 = &local_58;
        uVar9 = FUN_180018700(param_1,&local_50,(undefined8 *)(param_1 + 200),(ulonglong *)param_4);
        if ((int)uVar9 == 0) {
          *(undefined4 *)(param_1 + 0xd0) = local_58._0_4_;
          uVar9 = FUN_180009f80(&local_68);
          bVar17 = (int)uVar9 != 0;
          if (bVar17) {
            EVP_DigestUpdate(CONCAT44(local_68._4_4_,(int)local_68),*(undefined8 *)(param_1 + 200),
                             *(undefined4 *)(param_1 + 0xd0));
            EVP_DigestFinal(CONCAT44(local_68._4_4_,(int)local_68),param_1 + 0xd4,0);
            EVP_MD_CTX_free(CONCAT44(local_68._4_4_,(int)local_68));
          }
          *(uint *)(param_1 + 0xe4) = (uint)bVar17;
          uVar9 = FUN_18000b730(&local_68);
          bVar17 = (int)uVar9 != 0;
          if (bVar17) {
            EVP_DigestUpdate(CONCAT44(local_68._4_4_,(int)local_68),*(undefined8 *)(param_1 + 200),
                             *(undefined4 *)(param_1 + 0xd0));
            EVP_DigestFinal(CONCAT44(local_68._4_4_,(int)local_68),param_1 + 0xe8,0);
            EVP_MD_CTX_free(CONCAT44(local_68._4_4_,(int)local_68));
          }
          *(uint *)(param_1 + 0xfc) = (uint)bVar17;
          uVar9 = FUN_18000b820(&local_68);
          bVar17 = (int)uVar9 != 0;
          if (bVar17) {
            EVP_DigestUpdate(CONCAT44(local_68._4_4_,(int)local_68),*(undefined8 *)(param_1 + 200),
                             *(undefined4 *)(param_1 + 0xd0));
            EVP_DigestFinal(CONCAT44(local_68._4_4_,(int)local_68),param_1 + 0x100,0);
            EVP_MD_CTX_free(CONCAT44(local_68._4_4_,(int)local_68));
          }
          *(uint *)(param_1 + 0x120) = (uint)bVar17;
          param_4 = (undefined1 **)(param_1 + 0xc0);
          iVar6 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x10))
                            (param_1,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0))
          ;
          if (iVar6 == 0) {
            uVar9 = FUN_180018ad0(&local_50,(longlong *)(piVar3 + 0x2a),(ulonglong *)(piVar3 + 0x30)
                                 );
            if ((int)uVar9 == 0) {
              BN_bin2bn(*(undefined8 *)(piVar3 + 0x2a),piVar3[0x30],*(undefined8 *)(piVar3 + 0x26));
              uVar9 = FUN_180018ad0(&local_50,(longlong *)(piVar3 + 0x2e),
                                    (ulonglong *)(piVar3 + 0x34));
              if ((int)uVar9 == 0) {
                FUN_180008b20((undefined8 *)(piVar3 + 0x22),*(undefined8 *)(piVar3 + 0x28),
                              *(undefined8 *)(piVar3 + 0x26),param_3,*(undefined8 *)(piVar3 + 0x20))
                ;
                iVar6 = BN_num_bits(*(undefined8 *)(piVar3 + 0x28));
                *(longlong *)(piVar3 + 0x32) =
                     (longlong)(((int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3) + 5);
                uVar7 = BN_num_bits(*(undefined8 *)(piVar3 + 0x28));
                uVar7 = uVar7 & 0x80000007;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
                }
                if (uVar7 != 0) {
                  *(longlong *)(piVar3 + 0x32) = *(longlong *)(piVar3 + 0x32) + -1;
                }
                puVar10 = (undefined1 *)
                          (**(code **)(param_1 + 8))(*(undefined8 *)(piVar3 + 0x32),param_1);
                *(undefined1 **)(piVar3 + 0x2c) = puVar10;
                if (puVar10 == (undefined1 *)0x0) {
                  pcVar14 = "Unable to allocate buffer for DH-SHA K";
                  uVar7 = 0xfffffffa;
                  param_4 = param_3;
                }
                else {
                  FUN_180018d00(puVar10,piVar3[0x32] + -4);
                  uVar7 = BN_num_bits(*(undefined8 *)(piVar3 + 0x28));
                  uVar7 = uVar7 & 0x80000007;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
                  }
                  puVar10 = (undefined1 *)(*(longlong *)(piVar3 + 0x2c) + 4);
                  if (uVar7 == 0) {
                    *puVar10 = 0;
                    puVar10 = (undefined1 *)(*(longlong *)(piVar3 + 0x2c) + 5);
                  }
                  BN_bn2bin(*(undefined8 *)(piVar3 + 0x28),puVar10);
                  *(longlong ***)(piVar3 + 0x36) = &param_6;
                  if (uVar4 == 0x200) {
                    FUN_18000b970(param_6);
                  }
                  else if (uVar4 == 0x180) {
                    FUN_18000b880(param_6);
                  }
                  else if (uVar4 == 0x100) {
                    FUN_18000b820(param_6);
                  }
                  else if (uVar4 == 1) {
                    FUN_18000b730(param_6);
                  }
                  if (*(longlong *)(param_1 + 0x1a8) == 0) {
                    FUN_180018d00((undefined1 *)(piVar3 + 8),0x16);
                    if ((((uVar4 == 0x200) || (uVar4 == 0x180)) || (uVar4 == 0x100)) || (uVar4 == 1)
                       ) {
                      EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                      pcVar14 = "SSH-2.0-libssh2_1.11.0";
                      lVar11 = 0x16;
                      goto LAB_180011c6d;
                    }
                  }
                  else {
                    lVar11 = -1;
                    do {
                      lVar11 = lVar11 + 1;
                    } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar11) != '\0');
                    FUN_180018d00((undefined1 *)(piVar3 + 8),(int)lVar11 + -2);
                    if (uVar4 == 0x200) {
                      EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                      pcVar14 = *(char **)(param_1 + 0x1a8);
                      lVar15 = -1;
                      do {
                        lVar11 = lVar15;
                        lVar15 = lVar11 + 1;
                      } while (pcVar14[lVar15] != '\0');
                      lVar11 = lVar11 + -1;
                    }
                    else if (uVar4 == 0x180) {
                      EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                      pcVar14 = *(char **)(param_1 + 0x1a8);
                      lVar15 = -1;
                      do {
                        lVar11 = lVar15;
                        lVar15 = lVar11 + 1;
                      } while (pcVar14[lVar15] != '\0');
                      lVar11 = lVar11 + -1;
                    }
                    else if (uVar4 == 0x100) {
                      EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                      pcVar14 = *(char **)(param_1 + 0x1a8);
                      lVar15 = -1;
                      do {
                        lVar11 = lVar15;
                        lVar15 = lVar11 + 1;
                      } while (pcVar14[lVar15] != '\0');
                      lVar11 = lVar11 + -1;
                    }
                    else {
                      if (uVar4 != 1) {
                        lVar11 = -1;
                        do {
                          lVar11 = lVar11 + 1;
                        } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar11) != '\0');
                        goto LAB_180011c79;
                      }
                      EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                      pcVar14 = *(char **)(param_1 + 0x1a8);
                      lVar15 = -1;
                      do {
                        lVar11 = lVar15;
                        lVar15 = lVar11 + 1;
                      } while (pcVar14[lVar15] != '\0');
                      lVar11 = lVar11 + -1;
                    }
LAB_180011c6d:
                    EVP_DigestUpdate(*param_6,pcVar14,lVar11);
                  }
LAB_180011c79:
                  lVar11 = -1;
                  do {
                    lVar11 = lVar11 + 1;
                  } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
                  FUN_180018d00((undefined1 *)(piVar3 + 8),(int)lVar11);
                  piVar1 = piVar3 + 8;
                  if (uVar4 == 0x200) {
                    EVP_DigestUpdate(*param_6,piVar1,4);
                    lVar11 = -1;
                    do {
                      lVar11 = lVar11 + 1;
                    } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
LAB_180011d49:
                    EVP_DigestUpdate(*param_6);
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0x1b8));
                    EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                    EVP_DigestUpdate(*param_6,*(undefined8 *)(param_1 + 0x1b0),
                                     *(undefined8 *)(param_1 + 0x1b8));
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0x148));
                    EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                    EVP_DigestUpdate(*param_6,*(undefined8 *)(param_1 + 0x140),
                                     *(undefined8 *)(param_1 + 0x148));
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0xd0));
                    EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                    EVP_DigestUpdate(*param_6,*(undefined8 *)(param_1 + 200),
                                     *(undefined4 *)(param_1 + 0xd0));
                  }
                  else {
                    if (uVar4 == 0x180) {
                      EVP_DigestUpdate(*param_6,piVar1,4);
                      lVar11 = -1;
                      do {
                        lVar11 = lVar11 + 1;
                      } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
                      goto LAB_180011d49;
                    }
                    if (uVar4 == 0x100) {
                      EVP_DigestUpdate(*param_6,piVar1,4);
                      lVar11 = -1;
                      do {
                        lVar11 = lVar11 + 1;
                      } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
                      goto LAB_180011d49;
                    }
                    if (uVar4 == 1) {
                      EVP_DigestUpdate(*param_6,piVar1,4);
                      lVar11 = -1;
                      do {
                        lVar11 = lVar11 + 1;
                      } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
                      goto LAB_180011d49;
                    }
                    lVar11 = -1;
                    do {
                      lVar11 = lVar11 + 1;
                    } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar11) != '\0');
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0x1b8));
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0x148));
                    FUN_180018d00((undefined1 *)(piVar3 + 8),*(undefined4 *)(param_1 + 0xd0));
                  }
                  if (param_7 == ' ') {
                    FUN_180018d00((undefined1 *)(piVar3 + 8),0x800);
                    FUN_180018d00((undefined1 *)(piVar3 + 9),0x1000);
                    FUN_180018d00((undefined1 *)(piVar3 + 10),0x2000);
                    if (((uVar4 == 0x200) || (uVar4 == 0x180)) || ((uVar4 == 0x100 || (uVar4 == 1)))
                       ) {
                      EVP_DigestUpdate(*param_6,piVar3 + 8,0xc);
                    }
                  }
                  if (param_9 == 0) {
LAB_180011fc0:
                    lVar15 = *(longlong *)(piVar3 + 0x1a) + -1;
                    lVar11 = *(longlong *)(piVar3 + 2) + 1;
                    if (((uVar4 == 0x200) || (uVar4 == 0x180)) || ((uVar4 == 0x100 || (uVar4 == 1)))
                       ) goto LAB_180011fed;
                    FUN_180018d00((undefined1 *)(piVar3 + 8),piVar3[0x30]);
                  }
                  else {
                    if (uVar4 == 0x200) {
                      EVP_DigestUpdate(*param_6,param_9,param_10);
                      lVar15 = *(longlong *)(piVar3 + 0x1a) + -1;
                      lVar11 = *(longlong *)(piVar3 + 2) + 1;
                    }
                    else if (uVar4 == 0x180) {
                      EVP_DigestUpdate(*param_6,param_9,param_10);
                      lVar15 = *(longlong *)(piVar3 + 0x1a) + -1;
                      lVar11 = *(longlong *)(piVar3 + 2) + 1;
                    }
                    else if (uVar4 == 0x100) {
                      EVP_DigestUpdate(*param_6,param_9,param_10);
                      lVar15 = *(longlong *)(piVar3 + 0x1a) + -1;
                      lVar11 = *(longlong *)(piVar3 + 2) + 1;
                    }
                    else {
                      if (uVar4 != 1) goto LAB_180011fc0;
                      EVP_DigestUpdate(*param_6,param_9,param_10);
                      lVar15 = *(longlong *)(piVar3 + 0x1a) + -1;
                      lVar11 = *(longlong *)(piVar3 + 2) + 1;
                    }
LAB_180011fed:
                    EVP_DigestUpdate(*param_6,lVar11,lVar15);
                    FUN_180018d00((undefined1 *)(piVar3 + 8),piVar3[0x30]);
                    EVP_DigestUpdate(*param_6,piVar3 + 8,4);
                    EVP_DigestUpdate(*param_6,*(undefined8 *)(piVar3 + 0x2a),
                                     *(undefined8 *)(piVar3 + 0x30));
                    EVP_DigestUpdate(*param_6,*(undefined8 *)(piVar3 + 0x2c),
                                     *(undefined8 *)(piVar3 + 0x32));
                    plVar5 = param_6;
                    EVP_DigestFinal(*param_6,piVar3 + 8,0);
                    EVP_MD_CTX_free(*plVar5);
                  }
                  _Size = (size_t)param_5;
                  param_4 = (undefined1 **)(piVar3 + 8);
                  iVar6 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x28))
                                    (param_1,*(undefined8 *)(piVar3 + 0x2e),
                                     *(undefined8 *)(piVar3 + 0x34),param_4,_Size,param_1 + 0xc0);
                  if (iVar6 == 0) {
                    *piVar3 = 5;
                    *(undefined1 *)(piVar3 + 0x18) = 0x15;
                    goto LAB_1800120f0;
                  }
                  pcVar14 = "Unable to verify hostkey signature DH-SHA";
                  uVar7 = 0xfffffff5;
                }
              }
              else {
                pcVar14 = "Unable to get DH-SHA h sig";
                uVar7 = 0xfffffff6;
              }
            }
            else {
              pcVar14 = "Unable to get DH-SHA f value";
              uVar7 = 0xfffffff6;
            }
          }
          else {
            pcVar14 = "Unable to initialize hostkey importer DH-SHA";
            uVar7 = 0xfffffff6;
          }
        }
        else {
          pcVar14 = "Could not copy host key";
          uVar7 = 0xfffffffa;
        }
      }
      else {
        if (iVar6 == 5) {
          _Size = (size_t)param_5;
LAB_1800120f0:
          param_4 = (undefined1 **)0x0;
          uVar7 = FUN_180026710(param_1,piVar3 + 0x18,1,(void *)0x0,0);
          if (uVar7 == 0xffffffdb) {
            return -0x25;
          }
          if (uVar7 != 0) {
            pcVar14 = "Unable to send NEWKEYS message DH-SHA";
            goto LAB_180012680;
          }
          *piVar3 = 6;
        }
        else {
          iVar8 = iVar16;
          if (iVar6 != 6) goto LAB_180012688;
          _Size = (size_t)param_5;
        }
        param_4 = (undefined1 **)(piVar3 + 0x1e);
        uVar18 = 0;
        uVar9 = FUN_18001a170(param_1,0x15,(undefined8 *)(piVar3 + 6),(longlong *)param_4,0,
                              (void *)0x0,0,(longlong)(piVar3 + 0x38));
        uVar7 = (uint)uVar9;
        if (uVar7 == 0xffffffdb) {
          return -0x25;
        }
        if (uVar7 == 0) {
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(piVar3 + 6),param_1);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            _Dst = (void *)(**(code **)(param_1 + 8))(_Size,param_1);
            *(void **)(param_1 + 0xa0) = _Dst;
            if (_Dst == (void *)0x0) {
              pcVar14 = "Unable to allocate buffer for SHA digest";
              uVar7 = 0xfffffffa;
              goto LAB_180012680;
            }
            memcpy(_Dst,piVar3 + 8,_Size);
            *(int *)(param_1 + 0xa8) = (int)_Size;
          }
          pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1c0) + 0x30);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(param_1,param_1 + 0x1c8);
          }
          uVar19 = (undefined4)(uVar18 >> 0x20);
          if (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x20) == 0) {
LAB_180012347:
            pcVar2 = *(code **)(*(longlong *)(param_1 + 0x150) + 0x30);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(param_1,param_1 + 0x158);
            }
            if (*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x20) != 0) {
              param_5 = 0;
              local_68._0_4_ = 0;
              local_58 = (undefined1 *)0x0;
              local_60 = (undefined1 *)0x0;
              FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_58,
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x14),&DAT_18003084c
                           );
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                iVar8 = -5;
                goto LAB_180012688;
              }
              FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_60,
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x18),&DAT_180030850
                           );
              puVar13 = local_60;
              if (local_60 == (undefined1 *)0x0) {
                (**(code **)(param_1 + 0x18))(puVar10,param_1);
                iVar8 = -5;
                goto LAB_180012688;
              }
              iVar6 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x20))
                                (param_1,*(longlong *)(param_1 + 0x150),puVar10,&param_5,local_60,
                                 &local_68,uVar18 & 0xffffffff00000000,param_1 + 0x158);
              if (iVar6 != 0) goto LAB_1800122e5;
              if (param_5 != 0) {
                puVar12 = puVar10;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x14); lVar11 != 0
                    ; lVar11 = lVar11 + -1) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar10,param_1);
              }
              if ((int)local_68 != 0) {
                puVar10 = puVar13;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x18); lVar11 != 0
                    ; lVar11 = lVar11 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar13,param_1);
              }
            }
            pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1d0) + 0x20);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(param_1,param_1 + 0x1e0);
            }
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x10) != 0) {
              param_5 = 0;
              local_58 = (undefined1 *)0x0;
              FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_58,
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xc),&DAT_180030854)
              ;
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) goto LAB_1800122f7;
              (**(code **)(*(longlong *)(param_1 + 0x1d0) + 0x10))
                        (param_1,local_58,&param_5,param_1 + 0x1e0);
              if (param_5 != 0) {
                puVar13 = puVar10;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xc); lVar11 != 0;
                    lVar11 = lVar11 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar10,param_1);
              }
            }
            pcVar2 = *(code **)(*(longlong *)(param_1 + 0x160) + 0x20);
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(param_1,param_1 + 0x170);
            }
            if (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x10) != 0) {
              param_5 = 0;
              local_58 = (undefined1 *)0x0;
              FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_58,
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0xc),&DAT_180030858)
              ;
              puVar10 = local_58;
              if (local_58 == (undefined1 *)0x0) goto LAB_1800122f7;
              (**(code **)(*(longlong *)(param_1 + 0x160) + 0x10))
                        (param_1,local_58,&param_5,param_1 + 0x170);
              if (param_5 != 0) {
                puVar13 = puVar10;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0xc); lVar11 != 0;
                    lVar11 = lVar11 + -1) {
                  *puVar13 = 0;
                  puVar13 = puVar13 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar10,param_1);
              }
            }
            if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
               (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28), pcVar2 != (code *)0x0))
            {
              (*pcVar2)(param_1,1,param_1 + 0x1f0);
            }
            if (((*(longlong *)(param_1 + 0x1e8) == 0) ||
                (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x10), pcVar2 == (code *)0x0))
               || (iVar6 = (*pcVar2)(param_1,1,param_1 + 0x1f0), iVar6 == 0)) {
              if ((*(longlong *)(param_1 + 0x178) != 0) &&
                 (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x28), pcVar2 != (code *)0x0)
                 ) {
                (*pcVar2)(param_1,0,param_1 + 0x180);
              }
              iVar8 = 0;
              if (((*(longlong *)(param_1 + 0x178) != 0) &&
                  (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x10), iVar8 = iVar16,
                  pcVar2 != (code *)0x0)) &&
                 (iVar6 = (*pcVar2)(param_1,0,param_1 + 0x180), iVar6 != 0)) {
                iVar8 = -5;
              }
              goto LAB_180012688;
            }
          }
          else {
            param_5 = 0;
            local_68._0_4_ = 0;
            local_60 = (undefined1 *)0x0;
            local_58 = (undefined1 *)0x0;
            FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_60,
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x14),&DAT_180030844);
            puVar10 = local_60;
            if (local_60 == (undefined1 *)0x0) {
              iVar8 = -1;
              goto LAB_180012688;
            }
            FUN_180010120(uVar4,param_1,(longlong)piVar3,(longlong *)&local_58,
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x18),&DAT_180030848);
            puVar13 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              (**(code **)(param_1 + 0x18))(puVar10,param_1);
              iVar8 = -5;
              goto LAB_180012688;
            }
            uVar18 = CONCAT44(uVar19,1);
            iVar6 = (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x20))
                              (param_1,*(longlong *)(param_1 + 0x1c0),puVar10,&param_5,local_58,
                               &local_68,uVar18,param_1 + 0x1c8);
            if (iVar6 == 0) {
              if (param_5 != 0) {
                puVar12 = puVar10;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x14); lVar11 != 0
                    ; lVar11 = lVar11 + -1) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar10,param_1);
              }
              if ((int)local_68 != 0) {
                puVar10 = puVar13;
                for (lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x18); lVar11 != 0
                    ; lVar11 = lVar11 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar13,param_1);
              }
              goto LAB_180012347;
            }
LAB_1800122e5:
            (**(code **)(param_1 + 0x18))(puVar10,param_1);
            (**(code **)(param_1 + 0x18))(puVar13,param_1);
          }
LAB_1800122f7:
          iVar8 = -5;
          goto LAB_180012688;
        }
        pcVar14 = "Timed out waiting for NEWKEYS DH-SHA";
      }
    }
  }
  else {
    if (param_5 == 0x180) {
      param_5 = 0x30;
      goto LAB_1800114fe;
    }
    if (param_5 == 0x100) {
      param_5 = 0x20;
      goto LAB_1800114fe;
    }
    if (param_5 == 1) {
      param_5 = 0x14;
      goto LAB_1800114fe;
    }
    pcVar14 = "sha algo value is unimplemented";
LAB_18001267b:
    uVar7 = 0xfffffff2;
  }
LAB_180012680:
  iVar8 = FUN_180018820(param_1,uVar7,(longlong)pcVar14,param_4);
LAB_180012688:
  FUN_180008a70((undefined8 *)(piVar3 + 0x22));
  BN_clear_free(*(undefined8 *)(piVar3 + 0x24));
  piVar3[0x24] = 0;
  piVar3[0x25] = 0;
  BN_clear_free(*(undefined8 *)(piVar3 + 0x26));
  piVar3[0x26] = 0;
  piVar3[0x27] = 0;
  BN_clear_free(*(undefined8 *)(piVar3 + 0x28));
  piVar3[0x28] = 0;
  piVar3[0x29] = 0;
  BN_CTX_free(*(undefined8 *)(piVar3 + 0x20));
  piVar3[0x20] = 0;
  piVar3[0x21] = 0;
  if (*(longlong *)(piVar3 + 2) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(piVar3 + 2),param_1);
    piVar3[2] = 0;
    piVar3[3] = 0;
  }
  if (*(longlong *)(piVar3 + 4) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(piVar3 + 4),param_1);
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  if (*(longlong *)(piVar3 + 0x2c) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(piVar3 + 0x2c),param_1);
    piVar3[0x2c] = 0;
    piVar3[0x2d] = 0;
  }
  *piVar3 = 0;
  return iVar8;
}




undefined4
FUN_180012740(ulonglong param_1,int param_2,longlong param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,int *param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  void *_Dst;
  undefined1 *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  size_t _Size;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 local_res20;
  ulonglong uVar19;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  uVar16 = 0;
  uVar2 = 0;
  if (param_4 < 5) {
    uVar2 = FUN_180018820(param_1,0xfffffff6,0x1800309d0,param_4);
    return uVar2;
  }
  iVar3 = *param_8;
  if (iVar3 == 0) {
    uVar5 = BN_new();
    *(undefined8 *)(param_8 + 0x28) = uVar5;
    iVar3 = 2;
    *param_8 = 2;
  }
  if (iVar3 == 2) {
    local_48 = param_3 + 1;
    puVar14 = &local_70;
    local_50 = param_3;
    local_40 = param_4;
    uVar5 = FUN_180018700(param_1,&local_50,(undefined8 *)(param_1 + 200),puVar14);
    if ((int)uVar5 == 0) {
      *(int *)(param_1 + 0xd0) = (int)local_70;
      uVar5 = FUN_180009f80(&local_res20);
      bVar18 = (int)uVar5 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_1 + 0xd4,0);
        EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
      }
      *(uint *)(param_1 + 0xe4) = (uint)bVar18;
      uVar5 = FUN_18000b730(&local_res20);
      bVar18 = (int)uVar5 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_1 + 0xe8,0);
        EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
      }
      *(uint *)(param_1 + 0xfc) = (uint)bVar18;
      uVar5 = FUN_18000b820(&local_res20);
      bVar18 = (int)uVar5 != 0;
      if (bVar18) {
        EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),*(undefined8 *)(param_1 + 200)
                         ,*(undefined4 *)(param_1 + 0xd0));
        EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_1 + 0x100,0);
        EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
      }
      *(uint *)(param_1 + 0x120) = (uint)bVar18;
      lVar9 = param_1 + 0xc0;
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x10))
                        (param_1,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
      if (iVar3 == 0) {
        uVar5 = FUN_180018ad0(&local_50,&local_88,&local_70);
        if ((int)uVar5 == 0) {
          uVar5 = FUN_180018ad0(&local_50,(longlong *)(param_8 + 0x2e),(ulonglong *)(param_8 + 0x34)
                               );
          if ((int)uVar5 != 0) {
            pcVar11 = "Unexpected ECDH server sig length";
            goto LAB_180012924;
          }
          puVar14 = (ulonglong *)CONCAT44(local_70._4_4_,(int)local_70);
          uVar5 = FUN_180009110((undefined8 *)(param_8 + 0x28),param_7,local_88,puVar14);
          if ((int)uVar5 != 0) {
            uVar2 = FUN_180018820(param_1,0xfffffffb,0x180030aa8,puVar14);
            goto LAB_1800145a0;
          }
          iVar3 = BN_num_bits(*(undefined8 *)(param_8 + 0x28));
          *(longlong *)(param_8 + 0x32) =
               (longlong)(((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) + 5);
          uVar4 = BN_num_bits(*(undefined8 *)(param_8 + 0x28));
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if (uVar4 != 0) {
            *(longlong *)(param_8 + 0x32) = *(longlong *)(param_8 + 0x32) + -1;
          }
          puVar6 = (undefined1 *)(**(code **)(param_1 + 8))(*(undefined8 *)(param_8 + 0x32),param_1)
          ;
          *(undefined1 **)(param_8 + 0x2c) = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            pcVar11 = "Unable to allocate buffer for ECDH K";
            goto LAB_1800127e9;
          }
          FUN_180018d00(puVar6,param_8[0x32] + -4);
          uVar4 = BN_num_bits(*(undefined8 *)(param_8 + 0x28));
          uVar4 = uVar4 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          puVar6 = (undefined1 *)(*(longlong *)(param_8 + 0x2c) + 4);
          if (uVar4 == 0) {
            *puVar6 = 0;
            puVar6 = (undefined1 *)(*(longlong *)(param_8 + 0x2c) + 5);
          }
          BN_bn2bin(*(undefined8 *)(param_8 + 0x28),puVar6);
          uVar8 = (undefined4)param_6;
          if (param_2 == 0x19f) {
            *(undefined8 **)(param_8 + 0x36) = &local_res20;
            FUN_18000b820(&local_res20);
            if (*(longlong *)(param_1 + 0x1a8) == 0) {
              FUN_180018d00((undefined1 *)(param_8 + 8),0x16);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              lVar9 = 0x16;
              pcVar11 = "SSH-2.0-libssh2_1.11.0";
            }
            else {
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar9) != '\0');
              FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9 + -2);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              pcVar11 = *(char **)(param_1 + 0x1a8);
              lVar12 = -1;
              do {
                lVar9 = lVar12;
                lVar12 = lVar9 + 1;
              } while (pcVar11[lVar12] != '\0');
              lVar9 = lVar9 + -1;
            }
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),pcVar11,lVar9);
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
            FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20));
            FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x1b8));
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                             *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8));
            FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x148));
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                             *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
            FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0xd0));
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                             *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
            FUN_180018d00((undefined1 *)(param_8 + 8),uVar8);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_5,param_6);
            FUN_180018d00((undefined1 *)(param_8 + 8),(int)local_70);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),local_88,
                             CONCAT44(local_70._4_4_,(int)local_70));
            EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                             *(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
            EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,0);
            EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
            uVar5 = 0x20;
LAB_18001319b:
            piVar15 = param_8 + 8;
            iVar3 = (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x28))
                              (param_1,*(undefined8 *)(param_8 + 0x2e),
                               *(undefined8 *)(param_8 + 0x34),piVar15,uVar5,param_1 + 0xc0);
            if (iVar3 != 0) {
              uVar2 = FUN_180018820(param_1,0xfffffff5,0x180030af8,piVar15);
              goto LAB_1800145a0;
            }
          }
          else {
            if (param_2 == 0x2cb) {
              *(undefined8 **)(param_8 + 0x36) = &local_res20;
              FUN_18000b880(&local_res20);
              if (*(longlong *)(param_1 + 0x1a8) == 0) {
                FUN_180018d00((undefined1 *)(param_8 + 8),0x16);
                EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
                lVar9 = 0x16;
                pcVar11 = "SSH-2.0-libssh2_1.11.0";
              }
              else {
                lVar9 = -1;
                do {
                  lVar9 = lVar9 + 1;
                } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar9) != '\0');
                FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9 + -2);
                EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
                pcVar11 = *(char **)(param_1 + 0x1a8);
                lVar12 = -1;
                do {
                  lVar9 = lVar12;
                  lVar12 = lVar9 + 1;
                } while (pcVar11[lVar12] != '\0');
                lVar9 = lVar9 + -1;
              }
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),pcVar11,lVar9);
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
              FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x1b8));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x148));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0xd0));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
              FUN_180018d00((undefined1 *)(param_8 + 8),uVar8);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_5,param_6);
              FUN_180018d00((undefined1 *)(param_8 + 8),(int)local_70);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),local_88,
                               CONCAT44(local_70._4_4_,(int)local_70));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
              EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,0);
              EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
              uVar5 = 0x30;
              goto LAB_18001319b;
            }
            if (param_2 == 0x2cc) {
              *(undefined8 **)(param_8 + 0x36) = &local_res20;
              FUN_18000b970(&local_res20);
              if (*(longlong *)(param_1 + 0x1a8) == 0) {
                FUN_180018d00((undefined1 *)(param_8 + 8),0x16);
                EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
                lVar9 = 0x16;
                pcVar11 = "SSH-2.0-libssh2_1.11.0";
              }
              else {
                lVar9 = -1;
                do {
                  lVar9 = lVar9 + 1;
                } while (*(char *)(*(longlong *)(param_1 + 0x1a8) + lVar9) != '\0');
                FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9 + -2);
                EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
                pcVar11 = *(char **)(param_1 + 0x1a8);
                lVar12 = -1;
                do {
                  lVar9 = lVar12;
                  lVar12 = lVar9 + 1;
                } while (pcVar11[lVar12] != '\0');
                lVar9 = lVar9 + -1;
              }
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),pcVar11,lVar9);
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
              FUN_180018d00((undefined1 *)(param_8 + 8),(int)lVar9);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(char *)(*(longlong *)(param_1 + 0x138) + lVar9) != '\0');
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x1b8));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0x148));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148));
              FUN_180018d00((undefined1 *)(param_8 + 8),*(undefined4 *)(param_1 + 0xd0));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
              FUN_180018d00((undefined1 *)(param_8 + 8),uVar8);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_5,param_6);
              FUN_180018d00((undefined1 *)(param_8 + 8),(int)local_70);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,4);
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),local_88,
                               CONCAT44(local_70._4_4_,(int)local_70));
              EVP_DigestUpdate(CONCAT44(local_res20._4_4_,(int)local_res20),
                               *(undefined8 *)(param_8 + 0x2c),*(undefined8 *)(param_8 + 0x32));
              EVP_DigestFinal(CONCAT44(local_res20._4_4_,(int)local_res20),param_8 + 8,0);
              EVP_MD_CTX_free(CONCAT44(local_res20._4_4_,(int)local_res20));
              uVar5 = 0x40;
              goto LAB_18001319b;
            }
          }
          *param_8 = 3;
          *(undefined1 *)(param_8 + 0x18) = 0x15;
          goto LAB_1800131f2;
        }
        uVar2 = FUN_180018820(param_1,0xfffffff2,0x180030a60,lVar9);
      }
      else {
        pcVar11 = "Unable to initialize hostkey importer ECDH";
LAB_180012924:
        uVar2 = FUN_180018820(param_1,0xfffffff6,(longlong)pcVar11,lVar9);
      }
    }
    else {
      pcVar11 = "Unable to allocate memory for a copy of the host ECDH key";
LAB_1800127e9:
      uVar2 = FUN_180018820(param_1,0xfffffffa,(longlong)pcVar11,puVar14);
    }
LAB_1800145a0:
    BN_clear_free(*(undefined8 *)(param_8 + 0x28));
    lVar9 = *(longlong *)(param_8 + 0x2c);
    param_8[0x28] = 0;
    param_8[0x29] = 0;
    if (lVar9 != 0) {
      (**(code **)(param_1 + 0x18))(lVar9,param_1);
      param_8[0x2c] = 0;
      param_8[0x2d] = 0;
    }
    *param_8 = 0;
  }
  else {
    if (iVar3 == 3) {
LAB_1800131f2:
      uVar5 = 0;
      uVar4 = FUN_180026710(param_1,param_8 + 0x18,1,(void *)0x0,0);
      if (uVar4 != 0xffffffdb) {
        if (uVar4 != 0) {
          uVar2 = FUN_180018820(param_1,uVar4,0x180030b20,uVar5);
          goto LAB_1800145a0;
        }
        *param_8 = 5;
        goto LAB_18001323b;
      }
    }
    else {
      if (iVar3 != 5) goto LAB_1800145a0;
LAB_18001323b:
      puVar14 = (ulonglong *)(param_8 + 0x1e);
      uVar19 = 0;
      uVar5 = FUN_18001a170(param_1,0x15,(undefined8 *)(param_8 + 6),(longlong *)puVar14,0,
                            (void *)0x0,0,(longlong)(param_8 + 0x38));
      iVar3 = (int)uVar5;
      if (iVar3 != -0x25) {
        if (iVar3 != 0) {
          uVar2 = FUN_180018820(param_1,iVar3,0x180030b48,puVar14);
          goto LAB_1800145a0;
        }
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 2;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_8 + 6),param_1);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          if (param_2 == 0x19f) {
            _Size = 0x20;
          }
          else if (param_2 == 0x2cb) {
            _Size = 0x30;
          }
          else {
            if (param_2 != 0x2cc) {
              uVar2 = FUN_180018820(param_1,0xfffffffb,0x180030b70,puVar14);
              goto LAB_1800145a0;
            }
            _Size = 0x40;
          }
          _Dst = (void *)(**(code **)(param_1 + 8))(_Size,param_1);
          *(void **)(param_1 + 0xa0) = _Dst;
          if (_Dst == (void *)0x0) {
            pcVar11 = "Unable to allocate buffer for SHA digest";
            goto LAB_1800127e9;
          }
          memcpy(_Dst,param_8 + 8,_Size);
          *(int *)(param_1 + 0xa8) = (int)_Size;
        }
        pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1c0) + 0x30);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_1,param_1 + 0x1c8);
        }
        lVar9 = *(longlong *)(param_1 + 0x1c0);
        if (*(longlong *)(lVar9 + 0x20) != 0) {
          local_res20._0_4_ = 0;
          local_70._0_4_ = 0;
          if (param_2 == 0x19f) {
            puVar6 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x14) + 0x20),param_1);
            if (puVar6 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x1c0);
              uVar17 = uVar16;
              if (*(int *)(lVar9 + 0x14) != 0) {
                do {
                  FUN_18000b820(&local_68);
                  EVP_DigestUpdate(local_68,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_68,param_8 + 8,0x20);
                  puVar7 = puVar6;
                  uVar13 = uVar17;
                  if (uVar17 == 0) {
                    EVP_DigestUpdate(local_68,&DAT_180030844,1);
                    puVar7 = *(undefined1 **)(param_1 + 0xa0);
                    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_68,puVar7,uVar13);
                  EVP_DigestFinal(local_68,puVar6 + uVar17,0);
                  EVP_MD_CTX_free(local_68);
                  lVar9 = *(longlong *)(param_1 + 0x1c0);
                  uVar17 = uVar17 + 0x20;
                } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
              }
              puVar7 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x20),param_1)
              ;
              uVar8 = (undefined4)(uVar19 >> 0x20);
              if (puVar7 != (undefined1 *)0x0) {
                lVar9 = *(longlong *)(param_1 + 0x1c0);
                if (*(int *)(lVar9 + 0x18) != 0) {
                  do {
                    FUN_18000b820(&local_60);
                    EVP_DigestUpdate(local_60,*(undefined8 *)(param_8 + 0x2c),
                                     *(undefined8 *)(param_8 + 0x32));
                    EVP_DigestUpdate(local_60,param_8 + 8,0x20);
                    puVar10 = puVar7;
                    uVar17 = uVar16;
                    if (uVar16 == 0) {
                      EVP_DigestUpdate(local_60,&DAT_180030848,1);
                      puVar10 = *(undefined1 **)(param_1 + 0xa0);
                      uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                    }
                    EVP_DigestUpdate(local_60,puVar10,uVar17);
                    EVP_DigestFinal(local_60,puVar7 + uVar16,0);
                    EVP_MD_CTX_free(local_60);
                    uVar8 = (undefined4)(uVar19 >> 0x20);
                    lVar9 = *(longlong *)(param_1 + 0x1c0);
                    uVar16 = uVar16 + 0x20;
                  } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
                }
                goto LAB_18001386f;
              }
LAB_1800139c4:
              (**(code **)(param_1 + 0x18))(puVar6,param_1);
              goto LAB_1800139cd;
            }
          }
          else if (param_2 == 0x2cb) {
            puVar6 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x14) + 0x30),param_1);
            if (puVar6 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x1c0);
              uVar17 = uVar16;
              if (*(int *)(lVar9 + 0x14) != 0) {
                do {
                  FUN_18000b880(&local_58);
                  EVP_DigestUpdate(local_58,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_58,param_8 + 8,0x30);
                  puVar7 = puVar6;
                  uVar13 = uVar17;
                  if (uVar17 == 0) {
                    EVP_DigestUpdate(local_58,&DAT_180030844,1);
                    puVar7 = *(undefined1 **)(param_1 + 0xa0);
                    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_58,puVar7,uVar13);
                  EVP_DigestFinal(local_58,puVar6 + uVar17,0);
                  EVP_MD_CTX_free(local_58);
                  lVar9 = *(longlong *)(param_1 + 0x1c0);
                  uVar17 = uVar17 + 0x30;
                } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
              }
              puVar7 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x30),param_1)
              ;
              uVar8 = (undefined4)(uVar19 >> 0x20);
              if (puVar7 == (undefined1 *)0x0) goto LAB_1800139c4;
              lVar9 = *(longlong *)(param_1 + 0x1c0);
              if (*(int *)(lVar9 + 0x18) != 0) {
                do {
                  FUN_18000b880(&local_80);
                  EVP_DigestUpdate(local_80,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_80,param_8 + 8,0x30);
                  puVar10 = puVar7;
                  uVar17 = uVar16;
                  if (uVar16 == 0) {
                    EVP_DigestUpdate(local_80,&DAT_180030848,1);
                    puVar10 = *(undefined1 **)(param_1 + 0xa0);
                    uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_80,puVar10,uVar17);
                  EVP_DigestFinal(local_80,puVar7 + uVar16,0);
                  EVP_MD_CTX_free(local_80);
                  uVar8 = (undefined4)(uVar19 >> 0x20);
                  lVar9 = *(longlong *)(param_1 + 0x1c0);
                  uVar16 = uVar16 + 0x30;
                } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
              }
LAB_18001386f:
              uVar19 = CONCAT44(uVar8,1);
              iVar3 = (**(code **)(lVar9 + 0x20))
                                (param_1,lVar9,puVar6,&local_res20,puVar7,&local_70,uVar19,
                                 param_1 + 0x1c8);
              if (iVar3 == 0) {
                if ((int)local_res20 != 0) {
                  puVar10 = puVar6;
                  for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x14); lVar9 != 0
                      ; lVar9 = lVar9 + -1) {
                    *puVar10 = 0;
                    puVar10 = puVar10 + 1;
                  }
                  (**(code **)(param_1 + 0x18))(puVar6,param_1);
                }
                if ((int)local_70 != 0) {
                  puVar6 = puVar7;
                  for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x18); lVar9 != 0
                      ; lVar9 = lVar9 + -1) {
                    *puVar6 = 0;
                    puVar6 = puVar6 + 1;
                  }
                  (**(code **)(param_1 + 0x18))(puVar7,param_1);
                }
                goto LAB_18001390c;
              }
LAB_1800138a6:
              (**(code **)(param_1 + 0x18))(puVar6,param_1);
              (**(code **)(param_1 + 0x18))(puVar7,param_1);
              uVar2 = 0xfffffffb;
              goto LAB_1800145a0;
            }
          }
          else if ((param_2 == 0x2cc) &&
                  (puVar6 = (undefined1 *)
                            (**(code **)(param_1 + 8))
                                      ((longlong)(*(int *)(lVar9 + 0x14) + 0x40),param_1),
                  puVar6 != (undefined1 *)0x0)) {
            lVar9 = *(longlong *)(param_1 + 0x1c0);
            uVar17 = uVar16;
            if (*(int *)(lVar9 + 0x14) != 0) {
              do {
                FUN_18000b970(&local_78);
                EVP_DigestUpdate(local_78,*(undefined8 *)(param_8 + 0x2c),
                                 *(undefined8 *)(param_8 + 0x32));
                EVP_DigestUpdate(local_78,param_8 + 8,0x40);
                puVar7 = puVar6;
                uVar13 = uVar17;
                if (uVar17 == 0) {
                  EVP_DigestUpdate(local_78,&DAT_180030844,1);
                  puVar7 = *(undefined1 **)(param_1 + 0xa0);
                  uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                }
                EVP_DigestUpdate(local_78,puVar7,uVar13);
                EVP_DigestFinal(local_78,puVar6 + uVar17,0);
                EVP_MD_CTX_free(local_78);
                lVar9 = *(longlong *)(param_1 + 0x1c0);
                uVar17 = uVar17 + 0x40;
              } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
            }
            puVar7 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x40),param_1);
            uVar8 = (undefined4)(uVar19 >> 0x20);
            if (puVar7 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x1c0);
              if (*(int *)(lVar9 + 0x18) != 0) {
                do {
                  FUN_18000b970(&local_88);
                  EVP_DigestUpdate(local_88,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_88,param_8 + 8,0x40);
                  puVar10 = puVar7;
                  uVar17 = uVar16;
                  if (uVar16 == 0) {
                    EVP_DigestUpdate(local_88,&DAT_180030848,1);
                    puVar10 = *(undefined1 **)(param_1 + 0xa0);
                    uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_88,puVar10,uVar17);
                  EVP_DigestFinal(local_88,puVar7 + uVar16,0);
                  EVP_MD_CTX_free(local_88);
                  uVar8 = (undefined4)(uVar19 >> 0x20);
                  lVar9 = *(longlong *)(param_1 + 0x1c0);
                  uVar16 = uVar16 + 0x40;
                } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
              }
              goto LAB_18001386f;
            }
            goto LAB_1800139c4;
          }
          uVar2 = 0xffffffff;
          goto LAB_1800145a0;
        }
LAB_18001390c:
        uVar16 = 0;
        pcVar1 = *(code **)(*(longlong *)(param_1 + 0x150) + 0x30);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_1,param_1 + 0x158);
        }
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(lVar9 + 0x20) == 0) {
LAB_180013ee8:
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1d0) + 0x20);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(param_1,param_1 + 0x1e0);
          }
          lVar9 = *(longlong *)(param_1 + 0x1d0);
          if (*(longlong *)(lVar9 + 0x10) == 0) {
LAB_1800141f4:
            pcVar1 = *(code **)(*(longlong *)(param_1 + 0x160) + 0x20);
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(param_1,param_1 + 0x170);
            }
            lVar9 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(lVar9 + 0x10) == 0) {
LAB_1800144f4:
              if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
                 (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28), pcVar1 != (code *)0x0)
                 ) {
                (*pcVar1)(param_1,1,param_1 + 0x1f0);
              }
              if (((*(longlong *)(param_1 + 0x1e8) == 0) ||
                  (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x10), pcVar1 == (code *)0x0
                  )) || (iVar3 = (*pcVar1)(param_1,1,param_1 + 0x1f0), iVar3 == 0)) {
                if ((*(longlong *)(param_1 + 0x178) != 0) &&
                   (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x28),
                   pcVar1 != (code *)0x0)) {
                  (*pcVar1)(param_1,0,param_1 + 0x180);
                }
                if (((*(longlong *)(param_1 + 0x178) != 0) &&
                    (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x10),
                    pcVar1 != (code *)0x0)) &&
                   (iVar3 = (*pcVar1)(param_1,0,param_1 + 0x180), uVar2 = 0, iVar3 != 0)) {
                  uVar2 = 0xfffffffb;
                }
                goto LAB_1800145a0;
              }
            }
            else {
              local_res20._0_4_ = 0;
              if (param_2 == 0x19f) {
                uVar16 = 0;
                puVar6 = (undefined1 *)
                         (**(code **)(param_1 + 8))
                                   ((longlong)(*(int *)(lVar9 + 0xc) + 0x20),param_1);
                if (puVar6 != (undefined1 *)0x0) {
                  lVar9 = *(longlong *)(param_1 + 0x160);
                  if (*(int *)(lVar9 + 0xc) != 0) {
                    do {
                      FUN_18000b820(&local_88);
                      EVP_DigestUpdate(local_88,*(undefined8 *)(param_8 + 0x2c),
                                       *(undefined8 *)(param_8 + 0x32));
                      EVP_DigestUpdate(local_88,param_8 + 8,0x20);
                      puVar7 = puVar6;
                      uVar19 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(local_88,&DAT_180030858,1);
                        puVar7 = *(undefined1 **)(param_1 + 0xa0);
                        uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                      }
                      EVP_DigestUpdate(local_88,puVar7,uVar19);
                      EVP_DigestFinal(local_88,puVar6 + uVar16,0);
                      EVP_MD_CTX_free(local_88);
                      lVar9 = *(longlong *)(param_1 + 0x160);
                      uVar16 = uVar16 + 0x20;
                    } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                  }
LAB_1800144be:
                  (**(code **)(lVar9 + 0x10))(param_1,puVar6,&local_res20,param_1 + 0x170);
                  if ((int)local_res20 != 0) {
                    puVar7 = puVar6;
                    for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0xc);
                        lVar9 != 0; lVar9 = lVar9 + -1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    (**(code **)(param_1 + 0x18))(puVar6,param_1);
                  }
                  goto LAB_1800144f4;
                }
              }
              else if (param_2 == 0x2cb) {
                uVar16 = 0;
                puVar6 = (undefined1 *)
                         (**(code **)(param_1 + 8))
                                   ((longlong)(*(int *)(lVar9 + 0xc) + 0x30),param_1);
                if (puVar6 != (undefined1 *)0x0) {
                  lVar9 = *(longlong *)(param_1 + 0x160);
                  if (*(int *)(lVar9 + 0xc) != 0) {
                    do {
                      FUN_18000b880(&local_78);
                      EVP_DigestUpdate(local_78,*(undefined8 *)(param_8 + 0x2c),
                                       *(undefined8 *)(param_8 + 0x32));
                      EVP_DigestUpdate(local_78,param_8 + 8,0x30);
                      puVar7 = puVar6;
                      uVar19 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(local_78,&DAT_180030858,1);
                        puVar7 = *(undefined1 **)(param_1 + 0xa0);
                        uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                      }
                      EVP_DigestUpdate(local_78,puVar7,uVar19);
                      EVP_DigestFinal(local_78,puVar6 + uVar16,0);
                      EVP_MD_CTX_free(local_78);
                      lVar9 = *(longlong *)(param_1 + 0x160);
                      uVar16 = uVar16 + 0x30;
                    } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                  }
                  goto LAB_1800144be;
                }
              }
              else if (param_2 == 0x2cc) {
                uVar16 = 0;
                puVar6 = (undefined1 *)
                         (**(code **)(param_1 + 8))
                                   ((longlong)(*(int *)(lVar9 + 0xc) + 0x40),param_1);
                if (puVar6 != (undefined1 *)0x0) {
                  lVar9 = *(longlong *)(param_1 + 0x160);
                  if (*(int *)(lVar9 + 0xc) != 0) {
                    do {
                      FUN_18000b970(&local_80);
                      EVP_DigestUpdate(local_80,*(undefined8 *)(param_8 + 0x2c),
                                       *(undefined8 *)(param_8 + 0x32));
                      EVP_DigestUpdate(local_80,param_8 + 8,0x40);
                      puVar7 = puVar6;
                      uVar19 = uVar16;
                      if (uVar16 == 0) {
                        EVP_DigestUpdate(local_80,&DAT_180030858,1);
                        puVar7 = *(undefined1 **)(param_1 + 0xa0);
                        uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                      }
                      EVP_DigestUpdate(local_80,puVar7,uVar19);
                      EVP_DigestFinal(local_80,puVar6 + uVar16,0);
                      EVP_MD_CTX_free(local_80);
                      lVar9 = *(longlong *)(param_1 + 0x160);
                      uVar16 = uVar16 + 0x40;
                    } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                  }
                  goto LAB_1800144be;
                }
              }
            }
          }
          else {
            local_res20._0_4_ = 0;
            if (param_2 == 0x19f) {
              uVar16 = 0;
              puVar6 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0xc) + 0x20),param_1);
              if (puVar6 != (undefined1 *)0x0) {
                lVar9 = *(longlong *)(param_1 + 0x1d0);
                if (*(int *)(lVar9 + 0xc) != 0) {
                  do {
                    FUN_18000b820(&local_88);
                    EVP_DigestUpdate(local_88,*(undefined8 *)(param_8 + 0x2c),
                                     *(undefined8 *)(param_8 + 0x32));
                    EVP_DigestUpdate(local_88,param_8 + 8,0x20);
                    puVar7 = puVar6;
                    uVar19 = uVar16;
                    if (uVar16 == 0) {
                      EVP_DigestUpdate(local_88,&DAT_180030854,1);
                      puVar7 = *(undefined1 **)(param_1 + 0xa0);
                      uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                    }
                    EVP_DigestUpdate(local_88,puVar7,uVar19);
                    EVP_DigestFinal(local_88,puVar6 + uVar16,0);
                    EVP_MD_CTX_free(local_88);
                    lVar9 = *(longlong *)(param_1 + 0x1d0);
                    uVar16 = uVar16 + 0x20;
                  } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                }
LAB_1800141be:
                (**(code **)(lVar9 + 0x10))(param_1,puVar6,&local_res20,param_1 + 0x1e0);
                if ((int)local_res20 != 0) {
                  puVar7 = puVar6;
                  for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xc); lVar9 != 0;
                      lVar9 = lVar9 + -1) {
                    *puVar7 = 0;
                    puVar7 = puVar7 + 1;
                  }
                  (**(code **)(param_1 + 0x18))(puVar6,param_1);
                }
                goto LAB_1800141f4;
              }
            }
            else if (param_2 == 0x2cb) {
              uVar16 = 0;
              puVar6 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0xc) + 0x30),param_1);
              if (puVar6 != (undefined1 *)0x0) {
                lVar9 = *(longlong *)(param_1 + 0x1d0);
                if (*(int *)(lVar9 + 0xc) != 0) {
                  do {
                    FUN_18000b880(&local_78);
                    EVP_DigestUpdate(local_78,*(undefined8 *)(param_8 + 0x2c),
                                     *(undefined8 *)(param_8 + 0x32));
                    EVP_DigestUpdate(local_78,param_8 + 8,0x30);
                    puVar7 = puVar6;
                    uVar19 = uVar16;
                    if (uVar16 == 0) {
                      EVP_DigestUpdate(local_78,&DAT_180030854,1);
                      puVar7 = *(undefined1 **)(param_1 + 0xa0);
                      uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                    }
                    EVP_DigestUpdate(local_78,puVar7,uVar19);
                    EVP_DigestFinal(local_78,puVar6 + uVar16,0);
                    EVP_MD_CTX_free(local_78);
                    lVar9 = *(longlong *)(param_1 + 0x1d0);
                    uVar16 = uVar16 + 0x30;
                  } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                }
                goto LAB_1800141be;
              }
            }
            else if (param_2 == 0x2cc) {
              uVar16 = 0;
              puVar6 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0xc) + 0x40),param_1);
              if (puVar6 != (undefined1 *)0x0) {
                lVar9 = *(longlong *)(param_1 + 0x1d0);
                if (*(int *)(lVar9 + 0xc) != 0) {
                  do {
                    FUN_18000b970(&local_80);
                    EVP_DigestUpdate(local_80,*(undefined8 *)(param_8 + 0x2c),
                                     *(undefined8 *)(param_8 + 0x32));
                    EVP_DigestUpdate(local_80,param_8 + 8,0x40);
                    puVar7 = puVar6;
                    uVar19 = uVar16;
                    if (uVar16 == 0) {
                      EVP_DigestUpdate(local_80,&DAT_180030854,1);
                      puVar7 = *(undefined1 **)(param_1 + 0xa0);
                      uVar19 = (ulonglong)*(uint *)(param_1 + 0xa8);
                    }
                    EVP_DigestUpdate(local_80,puVar7,uVar19);
                    EVP_DigestFinal(local_80,puVar6 + uVar16,0);
                    EVP_MD_CTX_free(local_80);
                    lVar9 = *(longlong *)(param_1 + 0x1d0);
                    uVar16 = uVar16 + 0x40;
                  } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0xc));
                }
                goto LAB_1800141be;
              }
            }
          }
        }
        else {
          local_res20._0_4_ = 0;
          local_70._0_4_ = 0;
          if (param_2 == 0x19f) {
            puVar6 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x14) + 0x20),param_1);
            if (puVar6 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x150);
              uVar17 = uVar16;
              if (*(int *)(lVar9 + 0x14) != 0) {
                do {
                  FUN_18000b820(&local_88);
                  EVP_DigestUpdate(local_88,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_88,param_8 + 8,0x20);
                  puVar7 = puVar6;
                  uVar13 = uVar17;
                  if (uVar17 == 0) {
                    EVP_DigestUpdate(local_88,&DAT_18003084c,1);
                    puVar7 = *(undefined1 **)(param_1 + 0xa0);
                    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_88,puVar7,uVar13);
                  EVP_DigestFinal(local_88,puVar6 + uVar17,0);
                  EVP_MD_CTX_free(local_88);
                  lVar9 = *(longlong *)(param_1 + 0x150);
                  uVar17 = uVar17 + 0x20;
                } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
              }
              puVar7 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x20),param_1)
              ;
              if (puVar7 == (undefined1 *)0x0) goto LAB_1800139c4;
              lVar9 = *(longlong *)(param_1 + 0x150);
              if (*(int *)(lVar9 + 0x18) != 0) {
                do {
                  FUN_18000b820(&local_78);
                  EVP_DigestUpdate(local_78,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_78,param_8 + 8,0x20);
                  puVar10 = puVar7;
                  uVar17 = uVar16;
                  if (uVar16 == 0) {
                    EVP_DigestUpdate(local_78,&DAT_180030850,1);
                    puVar10 = *(undefined1 **)(param_1 + 0xa0);
                    uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_78,puVar10,uVar17);
                  EVP_DigestFinal(local_78,puVar7 + uVar16,0);
                  EVP_MD_CTX_free(local_78);
                  lVar9 = *(longlong *)(param_1 + 0x150);
                  uVar16 = uVar16 + 0x20;
                } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
              }
              goto LAB_180013e6e;
            }
          }
          else if (param_2 == 0x2cb) {
            puVar6 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x14) + 0x30),param_1);
            if (puVar6 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(param_1 + 0x150);
              uVar17 = uVar16;
              if (*(int *)(lVar9 + 0x14) != 0) {
                do {
                  FUN_18000b880(&local_80);
                  EVP_DigestUpdate(local_80,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_80,param_8 + 8,0x30);
                  puVar7 = puVar6;
                  uVar13 = uVar17;
                  if (uVar17 == 0) {
                    EVP_DigestUpdate(local_80,&DAT_18003084c,1);
                    puVar7 = *(undefined1 **)(param_1 + 0xa0);
                    uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_80,puVar7,uVar13);
                  EVP_DigestFinal(local_80,puVar6 + uVar17,0);
                  EVP_MD_CTX_free(local_80);
                  lVar9 = *(longlong *)(param_1 + 0x150);
                  uVar17 = uVar17 + 0x30;
                } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
              }
              puVar7 = (undefined1 *)
                       (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x30),param_1)
              ;
              if (puVar7 == (undefined1 *)0x0) goto LAB_1800139c4;
              lVar9 = *(longlong *)(param_1 + 0x150);
              if (*(int *)(lVar9 + 0x18) != 0) {
                do {
                  FUN_18000b880(&local_58);
                  EVP_DigestUpdate(local_58,*(undefined8 *)(param_8 + 0x2c),
                                   *(undefined8 *)(param_8 + 0x32));
                  EVP_DigestUpdate(local_58,param_8 + 8,0x30);
                  puVar10 = puVar7;
                  uVar17 = uVar16;
                  if (uVar16 == 0) {
                    EVP_DigestUpdate(local_58,&DAT_180030850,1);
                    puVar10 = *(undefined1 **)(param_1 + 0xa0);
                    uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                  }
                  EVP_DigestUpdate(local_58,puVar10,uVar17);
                  EVP_DigestFinal(local_58,puVar7 + uVar16,0);
                  EVP_MD_CTX_free(local_58);
                  lVar9 = *(longlong *)(param_1 + 0x150);
                  uVar16 = uVar16 + 0x30;
                } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
              }
LAB_180013e6e:
              iVar3 = (**(code **)(lVar9 + 0x20))
                                (param_1,lVar9,puVar6,&local_res20,puVar7,&local_70,
                                 uVar19 & 0xffffffff00000000,param_1 + 0x158);
              if (iVar3 != 0) goto LAB_1800138a6;
              if ((int)local_res20 != 0) {
                puVar10 = puVar6;
                for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x14); lVar9 != 0;
                    lVar9 = lVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar6,param_1);
              }
              if ((int)local_70 != 0) {
                puVar6 = puVar7;
                for (lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 0x18); lVar9 != 0;
                    lVar9 = lVar9 + -1) {
                  *puVar6 = 0;
                  puVar6 = puVar6 + 1;
                }
                (**(code **)(param_1 + 0x18))(puVar7,param_1);
              }
              goto LAB_180013ee8;
            }
          }
          else if ((param_2 == 0x2cc) &&
                  (puVar6 = (undefined1 *)
                            (**(code **)(param_1 + 8))
                                      ((longlong)(*(int *)(lVar9 + 0x14) + 0x40),param_1),
                  puVar6 != (undefined1 *)0x0)) {
            lVar9 = *(longlong *)(param_1 + 0x150);
            uVar17 = uVar16;
            if (*(int *)(lVar9 + 0x14) != 0) {
              do {
                FUN_18000b970(&local_60);
                EVP_DigestUpdate(local_60,*(undefined8 *)(param_8 + 0x2c),
                                 *(undefined8 *)(param_8 + 0x32));
                EVP_DigestUpdate(local_60,param_8 + 8,0x40);
                puVar7 = puVar6;
                uVar13 = uVar17;
                if (uVar17 == 0) {
                  EVP_DigestUpdate(local_60,&DAT_18003084c,1);
                  puVar7 = *(undefined1 **)(param_1 + 0xa0);
                  uVar13 = (ulonglong)*(uint *)(param_1 + 0xa8);
                }
                EVP_DigestUpdate(local_60,puVar7,uVar13);
                EVP_DigestFinal(local_60,puVar6 + uVar17,0);
                EVP_MD_CTX_free(local_60);
                lVar9 = *(longlong *)(param_1 + 0x150);
                uVar17 = uVar17 + 0x40;
              } while (uVar17 < (ulonglong)(longlong)*(int *)(lVar9 + 0x14));
            }
            puVar7 = (undefined1 *)
                     (**(code **)(param_1 + 8))((longlong)(*(int *)(lVar9 + 0x18) + 0x40),param_1);
            if (puVar7 == (undefined1 *)0x0) goto LAB_1800139c4;
            lVar9 = *(longlong *)(param_1 + 0x150);
            if (*(int *)(lVar9 + 0x18) != 0) {
              do {
                FUN_18000b970(&local_68);
                EVP_DigestUpdate(local_68,*(undefined8 *)(param_8 + 0x2c),
                                 *(undefined8 *)(param_8 + 0x32));
                EVP_DigestUpdate(local_68,param_8 + 8,0x40);
                puVar10 = puVar7;
                uVar17 = uVar16;
                if (uVar16 == 0) {
                  EVP_DigestUpdate(local_68,&DAT_180030850,1);
                  puVar10 = *(undefined1 **)(param_1 + 0xa0);
                  uVar17 = (ulonglong)*(uint *)(param_1 + 0xa8);
                }
                EVP_DigestUpdate(local_68,puVar10,uVar17);
                EVP_DigestFinal(local_68,puVar7 + uVar16,0);
                EVP_MD_CTX_free(local_68);
                lVar9 = *(longlong *)(param_1 + 0x150);
                uVar16 = uVar16 + 0x40;
              } while (uVar16 < (ulonglong)(longlong)*(int *)(lVar9 + 0x18));
            }
            goto LAB_180013e6e;
          }
        }
LAB_1800139cd:
        uVar2 = 0xfffffffb;
        goto LAB_1800145a0;
      }
    }
    uVar2 = 0xffffffdb;
  }
  return uVar2;
}




undefined8 FUN_1800145f0(longlong param_1,longlong param_2,char *param_3,char *param_4)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  
  ppuVar3 = FUN_180008240(param_1);
  pcVar7 = *(char **)(param_2 + 0x60);
  if (pcVar7 == (char *)0x0) {
    puVar2 = (undefined8 *)*ppuVar3;
    while ((puVar2 != (undefined8 *)0x0 && (pcVar7 = (char *)*puVar2, pcVar7 != (char *)0x0))) {
      pcVar4 = (char *)0xffffffffffffffff;
      do {
        pcVar4 = pcVar4 + 1;
      } while (pcVar7[(longlong)pcVar4] != '\0');
      pcVar7 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar4);
      if (pcVar7 != (char *)0x0) {
        *(undefined **)(param_2 + 0x40) = *ppuVar3;
        return 0;
      }
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar2 = (undefined8 *)*ppuVar1;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar4 = strchr(pcVar7,0x2c);
      if (pcVar4 == (char *)0x0) {
        pcVar8 = (char *)0xffffffffffffffff;
        do {
          pcVar8 = pcVar8 + 1;
        } while (pcVar7[(longlong)pcVar8] != '\0');
      }
      else {
        pcVar8 = pcVar4 + -(longlong)pcVar7;
      }
      pcVar5 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar8);
      if (pcVar5 != (char *)0x0) {
        lVar6 = FUN_180015050(pcVar7,(size_t)pcVar8,ppuVar3);
        if (lVar6 == 0) {
          return 0xffffffff;
        }
        *(longlong *)(param_2 + 0x40) = lVar6;
        return 0;
      }
      pcVar7 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
    } while (pcVar7 != (char *)0x0);
  }
  return 0xffffffff;
}




undefined8 FUN_180014720(undefined8 param_1,longlong param_2,char *param_3,char *param_4)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  
  ppuVar3 = FUN_1800084c0();
  pcVar7 = *(char **)(param_2 + 0x50);
  if (pcVar7 == (char *)0x0) {
    puVar2 = (undefined8 *)*ppuVar3;
    while ((puVar2 != (undefined8 *)0x0 && (pcVar7 = (char *)*puVar2, pcVar7 != (char *)0x0))) {
      pcVar4 = (char *)0xffffffffffffffff;
      do {
        pcVar4 = pcVar4 + 1;
      } while (pcVar7[(longlong)pcVar4] != '\0');
      pcVar7 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar4);
      if (pcVar7 != (char *)0x0) {
        *(undefined **)(param_2 + 0x18) = *ppuVar3;
        return 0;
      }
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar2 = (undefined8 *)*ppuVar1;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar4 = strchr(pcVar7,0x2c);
      if (pcVar4 == (char *)0x0) {
        pcVar8 = (char *)0xffffffffffffffff;
        do {
          pcVar8 = pcVar8 + 1;
        } while (pcVar7[(longlong)pcVar8] != '\0');
      }
      else {
        pcVar8 = pcVar4 + -(longlong)pcVar7;
      }
      pcVar5 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar8);
      if (pcVar5 != (char *)0x0) {
        lVar6 = FUN_180015050(pcVar7,(size_t)pcVar8,ppuVar3);
        if (lVar6 == 0) {
          return 0xffffffff;
        }
        *(longlong *)(param_2 + 0x18) = lVar6;
        return 0;
      }
      pcVar7 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
    } while (pcVar7 != (char *)0x0);
  }
  return 0xffffffff;
}




undefined8 FUN_180014850(longlong param_1,ulonglong param_2,char *param_3,char *param_4)

{
  undefined **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  ppuVar1 = FUN_18000ec60();
  pcVar5 = *(char **)(param_1 + 0x78);
  if (pcVar5 == (char *)0x0) {
    for (; ((ppuVar1 != (undefined **)0x0 && ((undefined8 *)*ppuVar1 != (undefined8 *)0x0)) &&
           (pcVar5 = *(char **)*ppuVar1, pcVar5 != (char *)0x0)); ppuVar1 = ppuVar1 + 1) {
      pcVar2 = (char *)0xffffffffffffffff;
      do {
        pcVar2 = pcVar2 + 1;
      } while (pcVar5[(longlong)pcVar2] != '\0');
      pcVar5 = FUN_1800149d0(param_3,param_4,pcVar5,pcVar2);
      if (((pcVar5 != (char *)0x0) &&
          (((param_2 & 1) == 0 || (*(longlong *)(*ppuVar1 + 0x38) != 0)))) &&
         (((param_2 & 2) == 0 || (*(longlong *)(*ppuVar1 + 0x28) != 0)))) {
        puVar4 = *ppuVar1;
        goto LAB_1800149b8;
      }
    }
  }
  else {
    while (*pcVar5 != '\0') {
      pcVar2 = strchr(pcVar5,0x2c);
      if (pcVar2 == (char *)0x0) {
        pcVar6 = (char *)0xffffffffffffffff;
        do {
          pcVar6 = pcVar6 + 1;
        } while (pcVar5[(longlong)pcVar6] != '\0');
      }
      else {
        pcVar6 = pcVar2 + -(longlong)pcVar5;
      }
      pcVar3 = FUN_1800149d0(param_3,param_4,pcVar5,pcVar6);
      if (pcVar3 != (char *)0x0) {
        puVar4 = (undefined *)FUN_180015050(pcVar5,(size_t)pcVar6,ppuVar1);
        if (puVar4 == (undefined *)0x0) {
          return 0xffffffff;
        }
        if ((((param_2 & 1) == 0) || (*(longlong *)(puVar4 + 0x38) != 0)) &&
           (((param_2 & 2) == 0 || (*(longlong *)(puVar4 + 0x28) != 0)))) {
LAB_1800149b8:
          *(undefined **)(param_1 + 0xb8) = puVar4;
          return 0;
        }
      }
      if (pcVar2 == (char *)0x0) {
        return 0xffffffff;
      }
      pcVar5 = pcVar2 + 1;
      if (pcVar5 == (char *)0x0) {
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}




char * FUN_1800149d0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  void *pvVar2;
  char *_Str1;
  char *_MaxCount;
  
  if ((((param_1 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_4 <= param_2)) &&
     (param_4 != (char *)0x0)) {
    iVar1 = strncmp(param_1,param_3,(size_t)param_4);
    if (iVar1 == 0) {
      if (param_4 == param_2) {
        return param_1;
      }
      if (param_1[(longlong)param_4] == ',') {
        return param_1;
      }
    }
    pvVar2 = memchr(param_1,0x2c,(size_t)param_2);
    while (((pvVar2 != (void *)0x0 &&
            (_MaxCount = param_1 + (longlong)param_2 + -(longlong)pvVar2, _MaxCount != (char *)0x0))
           && ((_MaxCount <= param_2 && (param_4 < _MaxCount))))) {
      _Str1 = (char *)((longlong)pvVar2 + 1);
      iVar1 = strncmp(_Str1,param_3,(size_t)param_4);
      if (iVar1 == 0) {
        if (param_4 + ((longlong)_Str1 - (longlong)param_1) == param_2) {
          return _Str1;
        }
        if (_Str1[(longlong)param_4] == ',') {
          return _Str1;
        }
      }
      pvVar2 = memchr(_Str1,0x2c,(size_t)_MaxCount);
    }
  }
  return (char *)0x0;
}




undefined8 FUN_180014ae0(longlong param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  undefined **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  
  pcVar6 = *(char **)(param_1 + 0x70);
  ppuVar8 = &PTR_PTR_s_curve25519_sha256_18003b180;
  if (pcVar6 == (char *)0x0) {
    if (PTR_PTR_s_curve25519_sha256_18003b180 != (undefined *)0x0) {
      pcVar6 = *(char **)PTR_PTR_s_curve25519_sha256_18003b180;
      while (pcVar6 != (char *)0x0) {
        pcVar2 = (char *)0xffffffffffffffff;
        do {
          pcVar2 = pcVar2 + 1;
        } while (pcVar6[(longlong)pcVar2] != '\0');
        pcVar6 = FUN_1800149d0(param_2,param_3,pcVar6,pcVar2);
        if ((pcVar6 != (char *)0x0) &&
           (uVar5 = FUN_180014850(param_1,(longlong)*(int *)(*ppuVar8 + 0x10),param_4,param_5),
           (int)uVar5 == 0)) {
          *(undefined **)(param_1 + 0x90) = *ppuVar8;
          if (*(int *)(param_1 + 0x98) == 0) {
            return 0;
          }
          if (param_2 != pcVar6) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x98) = 0;
          return 0;
        }
        ppuVar1 = ppuVar8 + 1;
        ppuVar8 = ppuVar8 + 1;
        if ((undefined8 *)*ppuVar1 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        pcVar6 = *(char **)*ppuVar1;
      }
    }
  }
  else if (*pcVar6 != '\0') {
    do {
      pcVar2 = strchr(pcVar6,0x2c);
      if (pcVar2 == (char *)0x0) {
        pcVar7 = (char *)0xffffffffffffffff;
        do {
          pcVar7 = pcVar7 + 1;
        } while (pcVar6[(longlong)pcVar7] != '\0');
      }
      else {
        pcVar7 = pcVar2 + -(longlong)pcVar6;
      }
      pcVar3 = FUN_1800149d0(param_2,param_3,pcVar6,pcVar7);
      if (pcVar3 != (char *)0x0) {
        lVar4 = FUN_180015050(pcVar6,(size_t)pcVar7,&PTR_PTR_s_curve25519_sha256_18003b180);
        if (lVar4 == 0) {
          return 0xffffffff;
        }
        uVar5 = FUN_180014850(param_1,(longlong)*(int *)(lVar4 + 0x10),param_4,param_5);
        if ((int)uVar5 == 0) {
          *(longlong *)(param_1 + 0x90) = lVar4;
          if ((*(int *)(param_1 + 0x98) != 0) && (param_2 == pcVar3)) {
            *(undefined4 *)(param_1 + 0x98) = 0;
            return 0;
          }
          return 0;
        }
      }
      pcVar6 = pcVar2 + 1;
      if (pcVar2 == (char *)0x0) {
        pcVar6 = (char *)0x0;
      }
      if (pcVar6 == (char *)0x0) {
        return 0xffffffff;
      }
      if (*pcVar6 == '\0') {
        return 0xffffffff;
      }
    } while( true );
  }
  return 0xffffffff;
}




undefined8 FUN_180014cf0(undefined8 param_1,longlong param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  
  ppuVar2 = FUN_1800182f0();
  ppuVar3 = FUN_180018300(*(undefined8 **)(param_2 + 0x18));
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined ***)(param_2 + 0x28) = ppuVar3;
    return 0;
  }
  pcVar7 = *(char **)(param_2 + 0x58);
  if (pcVar7 == (char *)0x0) {
    puVar1 = (undefined8 *)*ppuVar2;
    while ((puVar1 != (undefined8 *)0x0 && (pcVar7 = (char *)*puVar1, pcVar7 != (char *)0x0))) {
      pcVar4 = (char *)0xffffffffffffffff;
      do {
        pcVar4 = pcVar4 + 1;
      } while (pcVar7[(longlong)pcVar4] != '\0');
      pcVar7 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar4);
      if (pcVar7 != (char *)0x0) {
        *(undefined **)(param_2 + 0x28) = *ppuVar2;
        return 0;
      }
      ppuVar3 = ppuVar2 + 1;
      ppuVar2 = ppuVar2 + 1;
      puVar1 = (undefined8 *)*ppuVar3;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar4 = strchr(pcVar7,0x2c);
      if (pcVar4 == (char *)0x0) {
        pcVar8 = (char *)0xffffffffffffffff;
        do {
          pcVar8 = pcVar8 + 1;
        } while (pcVar7[(longlong)pcVar8] != '\0');
      }
      else {
        pcVar8 = pcVar4 + -(longlong)pcVar7;
      }
      pcVar5 = FUN_1800149d0(param_3,param_4,pcVar7,pcVar8);
      if (pcVar5 != (char *)0x0) {
        lVar6 = FUN_180015050(pcVar7,(size_t)pcVar8,ppuVar2);
        if (lVar6 == 0) {
          return 0xffffffff;
        }
        *(longlong *)(param_2 + 0x28) = lVar6;
        return 0;
      }
      pcVar7 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
    } while (pcVar7 != (char *)0x0);
  }
  return 0xffffffff;
}




undefined8 FUN_180014e40(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char *local_res18;
  char *local_res20;
  longlong local_a8;
  byte *local_a0;
  ulonglong local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28 [2];
  
  if (0x10 < param_3) {
    local_a0 = (byte *)(param_2 + 0x11);
    local_a8 = param_2;
    local_98 = param_3;
    uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_88,(ulonglong *)&local_90);
    if ((((((int)uVar2 == 0) &&
          (uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_res20,(ulonglong *)&local_res18),
          (int)uVar2 == 0)) &&
         (uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_78,(ulonglong *)&local_80),
         (int)uVar2 == 0)) &&
        (((uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_68,(ulonglong *)&local_70),
          (int)uVar2 == 0 &&
          (uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_58,(ulonglong *)&local_60),
          (int)uVar2 == 0)) &&
         ((uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_48,(ulonglong *)&local_50),
          (int)uVar2 == 0 &&
          ((uVar2 = FUN_180018ad0(&local_a8,(longlong *)&local_38,(ulonglong *)&local_40),
           (int)uVar2 == 0 &&
           (uVar2 = FUN_180018ad0(&local_a8,(longlong *)local_28,(ulonglong *)&local_30),
           (int)uVar2 == 0)))))))) && (uVar2 = FUN_1800186d0(&local_a8,1), (int)uVar2 != 0)) {
      bVar1 = *local_a0;
      local_a0 = local_a0 + 1;
      *(uint *)(param_1 + 0x98) = (uint)bVar1;
      uVar2 = FUN_180014ae0(param_1,local_88,local_90,local_res20,local_res18);
      if ((((((int)uVar2 == 0) &&
            (uVar2 = FUN_180014720(param_1,param_1 + 0x1a8,local_78,local_80), (int)uVar2 == 0)) &&
           (uVar2 = FUN_180014720(param_1,param_1 + 0x138,local_68,local_70), (int)uVar2 == 0)) &&
          ((uVar2 = FUN_180014cf0(param_1,param_1 + 0x1a8,local_58,local_60), (int)uVar2 == 0 &&
           (uVar2 = FUN_180014cf0(param_1,param_1 + 0x138,local_48,local_50), (int)uVar2 == 0)))) &&
         ((uVar2 = FUN_1800145f0(param_1,param_1 + 0x1a8,local_38,local_40), (int)uVar2 == 0 &&
          (uVar2 = FUN_1800145f0(param_1,param_1 + 0x138,local_28[0],local_30), (int)uVar2 == 0))))
      {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}




undefined8 FUN_180015050(char *param_1,size_t param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  
  puVar1 = (undefined8 *)*param_3;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    sVar3 = 0xffffffffffffffff;
    do {
      sVar3 = sVar3 + 1;
    } while (((char *)*puVar1)[sVar3] != '\0');
    if ((sVar3 == param_2) && (iVar2 = strncmp((char *)*puVar1,param_1,param_2), iVar2 == 0)) break;
    puVar1 = (undefined8 *)param_3[1];
    param_3 = param_3 + 1;
  }
  return *param_3;
}




ulonglong FUN_1800150d0(undefined8 param_1,int *param_2,undefined4 param_3,undefined8 param_4,
                       undefined *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    uVar1 = BN_new();
    *(undefined8 *)(param_2 + 0x44) = uVar1;
    uVar1 = BN_new();
    *(undefined8 *)(param_2 + 0x46) = uVar1;
    BN_set_word(uVar1,2);
    BN_bin2bn(&DAT_18002fc40,0x100,*(undefined8 *)(param_2 + 0x44));
    *param_2 = 2;
  }
  uVar2 = (*(code *)param_5)(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined8 *)(param_2 + 0x44)
                             ,0x100,param_3,param_4,0x1e,0x1f,0,0,param_2 + 6);
  if ((int)uVar2 != -0x25) {
    *param_2 = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    BN_clear_free(*(undefined8 *)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}




int FUN_1800151e0(undefined1 *param_1,int param_2,longlong *param_3)

{
  void *_Src;
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 *_Dst;
  
  FUN_180018d00(param_1,param_2);
  _Dst = param_1 + 4;
  if ((param_3 == (longlong *)0x0) || (puVar1 = (undefined8 *)*param_3, puVar1 == (undefined8 *)0x0)
     ) {
    return 4;
  }
  do {
    _Src = (void *)*puVar1;
    if (_Src == (void *)0x0) break;
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)((longlong)_Src + uVar2) != '\0');
    memcpy(_Dst,_Src,uVar2 & 0xffffffff);
    param_3 = param_3 + 1;
    _Dst[uVar2 & 0xffffffff] = 0x2c;
    _Dst = _Dst + (uVar2 & 0xffffffff) + 1;
    puVar1 = (undefined8 *)*param_3;
  } while (puVar1 != (undefined8 *)0x0);
  return param_2 + 4;
}




undefined4 FUN_180015280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  size_t sVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  
  if (*(int *)(param_1 + 71000) == 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      ppuVar14 = &PTR_PTR_s_curve25519_sha256_18003b180;
      lVar9 = 0;
      plVar6 = (longlong *)PTR_PTR_s_curve25519_sha256_18003b180;
      if (PTR_PTR_s_curve25519_sha256_18003b180 == (undefined *)0x0) {
        local_res8 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar7 = lVar8;
            lVar8 = lVar7 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + lVar7 + 2;
          plVar6 = (longlong *)*ppuVar14;
        } while ((longlong *)*ppuVar14 != (longlong *)0x0);
        local_res8 = lVar9 - 1;
      }
    }
    else {
      local_res8 = 0xffffffffffffffff;
      do {
        local_res8 = local_res8 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x70) + local_res8) != '\0');
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      ppuVar14 = FUN_18000ec60();
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        local_res10 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        local_res10 = lVar9 - 1;
      }
    }
    else {
      local_res10 = 0xffffffffffffffff;
      do {
        local_res10 = local_res10 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x78) + local_res10) != '\0');
    }
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      ppuVar14 = FUN_1800084c0();
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        local_res18 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        local_res18 = lVar9 - 1;
      }
    }
    else {
      local_res18 = 0xffffffffffffffff;
      do {
        local_res18 = local_res18 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x1f8) + local_res18) != '\0');
    }
    if (*(longlong *)(param_1 + 0x188) == 0) {
      ppuVar14 = FUN_1800084c0();
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        uVar25 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        uVar25 = lVar9 - 1;
      }
    }
    else {
      uVar25 = 0xffffffffffffffff;
      do {
        uVar25 = uVar25 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x188) + uVar25) != '\0');
    }
    if (*(longlong *)(param_1 + 0x200) == 0) {
      ppuVar14 = FUN_1800182f0();
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        uVar23 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        uVar23 = lVar9 - 1;
      }
    }
    else {
      uVar23 = 0xffffffffffffffff;
      do {
        uVar23 = uVar23 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x200) + uVar23) != '\0');
    }
    if (*(longlong *)(param_1 + 400) == 0) {
      ppuVar14 = FUN_1800182f0();
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        uVar19 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        uVar19 = lVar9 - 1;
      }
    }
    else {
      uVar19 = 0xffffffffffffffff;
      do {
        uVar19 = uVar19 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 400) + uVar19) != '\0');
    }
    if (*(longlong *)(param_1 + 0x208) == 0) {
      ppuVar14 = FUN_180008240(param_1);
      lVar9 = 0;
      if ((ppuVar14 == (undefined **)0x0) ||
         (plVar6 = (longlong *)*ppuVar14, plVar6 == (longlong *)0x0)) {
        uVar16 = 0;
      }
      else {
        do {
          if (*plVar6 == 0) break;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (*(char *)(*plVar6 + lVar8) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          lVar9 = lVar9 + 1 + lVar8;
        } while (plVar6 != (longlong *)0x0);
        uVar16 = lVar9 - 1;
      }
    }
    else {
      uVar16 = 0xffffffffffffffff;
      do {
        uVar16 = uVar16 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x208) + uVar16) != '\0');
    }
    if (*(longlong *)(param_1 + 0x198) == 0) {
      ppuVar14 = FUN_180008240(param_1);
      uVar18 = 0;
      if ((ppuVar14 != (undefined **)0x0) &&
         (plVar6 = (longlong *)*ppuVar14, plVar6 != (longlong *)0x0)) {
        do {
          if (*plVar6 == 0) break;
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(char *)(*plVar6 + lVar9) != '\0');
          plVar6 = (longlong *)ppuVar14[1];
          ppuVar14 = ppuVar14 + 1;
          uVar18 = uVar18 + 1 + lVar9;
        } while (plVar6 != (longlong *)0x0);
        uVar18 = uVar18 - 1;
      }
    }
    else {
      uVar18 = 0xffffffffffffffff;
      do {
        uVar18 = uVar18 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x198) + uVar18) != '\0');
    }
    if (*(longlong *)(param_1 + 0x210) == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = 0xffffffffffffffff;
      do {
        uVar29 = uVar29 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x210) + uVar29) != '\0');
    }
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0xffffffffffffffff;
      do {
        uVar27 = uVar27 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x1a0) + uVar27) != '\0');
    }
    iVar1 = (int)uVar19;
    iVar2 = (int)uVar23;
    iVar24 = (int)uVar25;
    iVar26 = (int)uVar27;
    iVar28 = (int)uVar29;
    iVar17 = (int)uVar18;
    iVar15 = (int)uVar16;
    sVar10 = (ulonglong)
             (uint)(iVar1 + iVar2 + iVar24 + (int)local_res18 + (int)local_res10 + (int)local_res8 +
                    iVar26 + iVar28 + iVar17 + iVar15) + 0x3e;
    puVar11 = (undefined1 *)(**(code **)(param_1 + 8))(sVar10,param_1);
    if (puVar11 == (undefined1 *)0x0) {
      uVar3 = FUN_180018820(param_1,0xfffffffa,0x180030e60,param_4);
      return uVar3;
    }
    *puVar11 = 0x14;
    iVar4 = FUN_18000a010(puVar11 + 1,0x10);
    if (iVar4 != 0) {
      uVar3 = FUN_180018820(param_1,0xffffffcf,0x180030e80,param_4);
      return uVar3;
    }
    puVar20 = puVar11 + 0x11;
    puVar21 = puVar11 + 0x15;
    if (*(longlong *)(param_1 + 0x70) == 0) {
      FUN_180018d00(puVar20,(int)local_res8);
      if (PTR_PTR_s_curve25519_sha256_18003b180 == (undefined *)0x0) {
        uVar13 = 4;
      }
      else {
        ppuVar14 = &PTR_PTR_s_curve25519_sha256_18003b180;
        puVar12 = (undefined8 *)PTR_PTR_s_curve25519_sha256_18003b180;
        do {
          _Src = (void *)*puVar12;
          if (_Src == (void *)0x0) break;
          uVar13 = 0xffffffffffffffff;
          do {
            uVar13 = uVar13 + 1;
          } while (*(char *)((longlong)_Src + uVar13) != '\0');
          memcpy(puVar21,_Src,uVar13 & 0xffffffff);
          ppuVar14 = ppuVar14 + 1;
          puVar21[uVar13 & 0xffffffff] = 0x2c;
          puVar21 = puVar21 + (uVar13 & 0xffffffff) + 1;
          puVar12 = (undefined8 *)*ppuVar14;
        } while (puVar12 != (undefined8 *)0x0);
        uVar13 = (ulonglong)((int)local_res8 + 4);
      }
      puVar21 = puVar20 + uVar13;
    }
    else {
      FUN_180018d00(puVar20,(int)local_res8);
      memcpy(puVar21,*(void **)(param_1 + 0x70),local_res8 & 0xffffffff);
      puVar21 = puVar21 + (local_res8 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      ppuVar14 = FUN_18000ec60();
      uVar5 = FUN_1800151e0(puVar21,(int)local_res10,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,(int)local_res10);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x78),local_res10 & 0xffffffff);
      puVar21 = puVar21 + 4 + (local_res10 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      ppuVar14 = FUN_1800084c0();
      uVar5 = FUN_1800151e0(puVar21,(int)local_res18,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,(int)local_res18);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x1f8),local_res18 & 0xffffffff);
      puVar21 = puVar21 + 4 + (local_res18 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x188) == 0) {
      ppuVar14 = FUN_1800084c0();
      uVar5 = FUN_1800151e0(puVar21,iVar24,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,iVar24);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x188),uVar25 & 0xffffffff);
      puVar21 = puVar21 + 4 + (uVar25 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x200) == 0) {
      ppuVar14 = FUN_1800182f0();
      uVar5 = FUN_1800151e0(puVar21,iVar2,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,iVar2);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x200),uVar23 & 0xffffffff);
      puVar21 = puVar21 + 4 + (uVar23 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 400) == 0) {
      ppuVar14 = FUN_1800182f0();
      uVar5 = FUN_1800151e0(puVar21,iVar1,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,iVar1);
      memcpy(puVar21 + 4,*(void **)(param_1 + 400),uVar19 & 0xffffffff);
      puVar21 = puVar21 + 4 + (uVar19 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x208) == 0) {
      ppuVar14 = FUN_180008240(param_1);
      uVar5 = FUN_1800151e0(puVar21,iVar15,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,iVar15);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x208),uVar16 & 0xffffffff);
      puVar21 = puVar21 + 4 + (uVar16 & 0xffffffff);
    }
    if (*(longlong *)(param_1 + 0x198) == 0) {
      ppuVar14 = FUN_180008240(param_1);
      uVar5 = FUN_1800151e0(puVar21,iVar17,(longlong *)ppuVar14);
      puVar21 = puVar21 + uVar5;
    }
    else {
      FUN_180018d00(puVar21,iVar17);
      memcpy(puVar21 + 4,*(void **)(param_1 + 0x198),uVar18 & 0xffffffff);
      puVar21 = puVar21 + 4 + (uVar18 & 0xffffffff);
    }
    puVar20 = puVar21 + 4;
    if (*(longlong *)(param_1 + 0x210) == 0) {
      FUN_180018d00(puVar21,iVar28);
    }
    else {
      FUN_180018d00(puVar21,iVar28);
      memcpy(puVar20,*(void **)(param_1 + 0x210),uVar29 & 0xffffffff);
      puVar20 = puVar20 + (uVar29 & 0xffffffff);
    }
    puVar21 = puVar20 + 4;
    if (*(longlong *)(param_1 + 0x1a0) == 0) {
      FUN_180018d00(puVar20,iVar26);
    }
    else {
      FUN_180018d00(puVar20,iVar26);
      memcpy(puVar21,*(void **)(param_1 + 0x1a0),uVar27 & 0xffffffff);
      puVar21 = puVar21 + (uVar27 & 0xffffffff);
    }
    *puVar21 = 0;
    FUN_180018d00(puVar21 + 1,0);
    *(undefined4 *)(param_1 + 71000) = 2;
  }
  else {
    puVar11 = *(undefined1 **)(param_1 + 0x11560);
    sVar10 = *(size_t *)(param_1 + 0x11568);
    *(undefined8 *)(param_1 + 0x11560) = 0;
    *(undefined8 *)(param_1 + 0x11568) = 0;
  }
  uVar22 = 0;
  uVar5 = FUN_180026710(param_1,puVar11,sVar10,(void *)0x0,0);
  if (uVar5 == 0xffffffdb) {
    *(undefined1 **)(param_1 + 0x11560) = puVar11;
    *(size_t *)(param_1 + 0x11568) = sVar10;
    uVar3 = 0xffffffdb;
  }
  else if (uVar5 == 0) {
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x1b0),param_1);
    }
    *(undefined1 **)(param_1 + 0x1b0) = puVar11;
    uVar3 = 0;
    *(size_t *)(param_1 + 0x1b8) = sVar10;
    *(undefined4 *)(param_1 + 71000) = 0;
  }
  else {
    (**(code **)(param_1 + 0x18))(puVar11,param_1);
    *(undefined4 *)(param_1 + 71000) = 0;
    uVar3 = FUN_180018820(param_1,uVar5,0x180030eb0,uVar22);
  }
  return uVar3;
}




uint libssh2_session_supported_algs
               (longlong param_1,undefined4 param_2,longlong *param_3,ulonglong param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar8;
  
                    /* 0x15de0  98  libssh2_session_supported_algs */
  if (param_3 == (longlong *)0x0) {
    uVar1 = FUN_180018820(param_1,0xffffffd9,0x180030fa0,param_4);
    return uVar1;
  }
  switch(param_2) {
  case 0:
    ppuVar2 = &PTR_PTR_s_curve25519_sha256_18003b180;
    goto LAB_180015e68;
  case 1:
    ppuVar2 = FUN_18000ec60();
    break;
  case 2:
  case 3:
    ppuVar2 = FUN_1800084c0();
    break;
  case 4:
  case 5:
    ppuVar2 = FUN_1800182f0();
    break;
  case 6:
  case 7:
    ppuVar2 = FUN_180008240(param_1);
    break;
  default:
    uVar1 = FUN_180018820(param_1,0xffffffdf,0x180030fb8,param_4);
    return uVar1;
  case 10:
    goto switchD_180015e34_caseD_a;
  }
  if (ppuVar2 == (undefined **)0x0) {
switchD_180015e34_caseD_a:
    uVar1 = FUN_180018820(param_1,0xffffffde,0x180030fd0,param_4);
    return uVar1;
  }
LAB_180015e68:
  plVar4 = (longlong *)*ppuVar2;
  uVar6 = 0;
  uVar1 = 0;
  if (plVar4 != (longlong *)0x0) {
    do {
      lVar3 = *plVar4;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      plVar4 = (longlong *)ppuVar2[uVar6];
      uVar7 = uVar1 + 1;
      if (lVar3 == 0) {
        uVar7 = uVar1;
      }
      uVar1 = uVar7;
    } while (plVar4 != (longlong *)0x0);
    if (uVar1 != 0) {
      lVar3 = (**(code **)(param_1 + 8))((ulonglong)uVar1 << 3,param_1);
      *param_3 = lVar3;
      if (lVar3 == 0) {
        pcVar8 = "Memory allocation failed";
        uVar5 = 0xfffffffa;
      }
      else {
        param_4 = 0;
        uVar6 = 0;
        if (*ppuVar2 != (undefined *)0x0) {
          do {
            uVar7 = (uint)uVar6;
            if (uVar1 <= uVar7) goto LAB_180015f18;
            if (*(longlong *)ppuVar2[param_4] != 0) {
              *(longlong *)(*param_3 + uVar6 * 8) = *(longlong *)ppuVar2[param_4];
              uVar6 = (ulonglong)(uVar7 + 1);
            }
            param_4 = (ulonglong)((int)param_4 + 1);
          } while (ppuVar2[param_4] != (undefined *)0x0);
          uVar7 = (uint)uVar6;
LAB_180015f18:
          if (uVar7 == uVar1) {
            return uVar1;
          }
        }
        (**(code **)(param_1 + 0x18))(*param_3,param_1);
        pcVar8 = "Internal error";
        *param_3 = 0;
        uVar5 = 0xffffffd9;
      }
      goto LAB_180015ec0;
    }
  }
  pcVar8 = "No algorithm found";
  uVar5 = 0xffffffde;
LAB_180015ec0:
  uVar1 = FUN_180018820(param_1,uVar5,(longlong)pcVar8,param_4);
  return uVar1;
}




void FUN_180015fd0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    if (*(longlong *)(param_2 + 0x58) != 0) {
      (*(code *)*puVar1)(*(longlong *)(param_2 + 0x58),param_1);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      (*(code *)*puVar1)(*(longlong *)(param_2 + 0x48),param_1);
    }
    if (*(longlong *)(param_2 + 0x40) != 0) {
      (*(code *)*puVar1)(*(longlong *)(param_2 + 0x40),param_1);
    }
    if (*(longlong *)(param_2 + 0x30) != 0) {
      (*(code *)*puVar1)(*(longlong *)(param_2 + 0x30),param_1);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_2 + 0x18),param_1);
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1);
  }
  return;
}




void FUN_180016070(longlong *param_1,short *param_2,ulonglong param_3,byte *param_4,byte *param_5)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *_Src;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined1 auStackY_208 [32];
  size_t local_198;
  byte *local_190;
  byte local_180 [36];
  undefined1 auStack_15c [4];
  byte local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStackY_208;
  pbVar7 = (byte *)0x0;
  local_190 = (byte *)0x0;
  local_198 = 0;
  if (param_5 < (byte *)0x14) {
    FUN_180018820(*param_1,0xffffffdf,0x180031280,param_4);
  }
  else {
    pbVar5 = param_4;
    pbVar8 = param_4;
    pbVar10 = pbVar7;
    switch(*param_4) {
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar9 = 0x40000;
      break;
    default:
      do {
        if ((*pbVar5 < 0x21) && ((0x100000201U >> ((longlong)(char)*pbVar5 & 0x3fU) & 1) != 0))
        break;
        pbVar5 = pbVar5 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != (byte *)0x0);
      local_198 = (longlong)pbVar5 - (longlong)param_4;
      iVar4 = strncmp((char *)param_4,"ssh-dss",local_198);
      if (iVar4 == 0) {
        uVar9 = 0xc0000;
      }
      else {
        iVar4 = strncmp((char *)param_4,"ssh-rsa",local_198);
        if (iVar4 == 0) {
          uVar9 = 0x80000;
        }
        else {
          iVar4 = strncmp((char *)param_4,"ecdsa-sha2-nistp256",local_198);
          if (iVar4 == 0) {
            uVar9 = 0x100000;
          }
          else {
            iVar4 = strncmp((char *)param_4,"ecdsa-sha2-nistp384",local_198);
            if (iVar4 == 0) {
              uVar9 = 0x140000;
            }
            else {
              iVar4 = strncmp((char *)param_4,"ecdsa-sha2-nistp521",local_198);
              if (iVar4 == 0) {
                uVar9 = 0x180000;
              }
              else {
                iVar4 = strncmp((char *)param_4,"ssh-ed25519",local_198);
                uVar9 = 0x3c0000;
                if (iVar4 == 0) {
                  uVar9 = 0x1c0000;
                }
              }
            }
          }
        }
      }
      for (; (*pbVar5 == 0x20 || (pbVar3 = pbVar5, pbVar7 = param_5, *pbVar5 == 9));
          pbVar5 = pbVar5 + 1) {
        param_5 = param_5 + -1;
      }
      while ((pbVar7 != (byte *)0x0 &&
             ((0x20 < *pbVar3 || ((0x100000201U >> ((longlong)(char)*pbVar3 & 0x3fU) & 1) == 0)))))
      {
        pbVar3 = pbVar3 + 1;
        pbVar7 = pbVar7 + -1;
      }
      param_5 = param_5 + -(longlong)pbVar7;
      while ((local_190 = param_4, pbVar7 != (byte *)0x0 &&
             ((*pbVar3 == 0x20 || (pbVar10 = pbVar3, *pbVar3 == 9))))) {
        pbVar7 = pbVar7 + -1;
        pbVar10 = pbVar3 + 1;
        pbVar3 = pbVar10;
      }
    }
    if ((param_3 < 3) || ((*param_2 == 0x317c && ((char)param_2[1] == '|')))) {
      _Src = (char *)((longlong)param_2 + 3);
      cVar2 = *_Src;
      pcVar11 = _Src;
      while ((cVar2 != '\0' && (cVar2 != '|'))) {
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar1;
      }
      if (*pcVar11 == '|') {
        uVar6 = (longlong)pcVar11 - (longlong)_Src;
        if (uVar6 < 0x1f) {
          memcpy(local_180,_Src,uVar6);
          local_180[uVar6] = 0;
          uVar6 = param_3 + (-4 - uVar6);
          if (uVar6 < 0xff) {
            memcpy(local_158,pcVar11 + 1,uVar6);
            auStack_15c[uVar6 + 4] = 0;
            FUN_180016430(param_1,local_158,local_180,local_190,local_198,pbVar5,(longlong)param_5,
                          pbVar10,(longlong)pbVar7,uVar9 | 0x20002,(longlong *)0x0);
          }
          else {
            FUN_180018820(*param_1,0xffffffdf,0x180031208,pbVar8);
          }
        }
        else {
          FUN_180018820(*param_1,0xffffffdf,0x180031240,pbVar8);
        }
      }
    }
    else {
      FUN_1800178c0(param_1,param_2,param_3,local_190,local_198,pbVar5,(longlong)param_5,uVar9,
                    pbVar10,(longlong)pbVar7);
    }
  }
  FUN_18002af30(local_58 ^ (ulonglong)auStackY_208);
  return;
}




ulonglong FUN_180016430(longlong *param_1,byte *param_2,byte *param_3,byte *param_4,size_t param_5,
                       byte *param_6,longlong param_7,void *param_8,longlong param_9,uint param_10,
                       longlong *param_11)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined8 *puVar2;
  undefined4 extraout_var_00;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  byte *pbVar9;
  longlong local_38;
  longlong local_30;
  
  uVar7 = 0xffffffffffffffff;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (param_2[uVar7] != 0);
  if ((param_10 & 0x3c0000) == 0) {
    uVar1 = FUN_180018820(*param_1,0xffffffde,0x180031050,param_4);
    return CONCAT44(extraout_var,uVar1);
  }
  pbVar9 = param_4;
  puVar2 = (undefined8 *)FUN_180018690(*param_1,0x90);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = FUN_180018820(*param_1,0xfffffffa,0x180031060,pbVar9);
    return CONCAT44(extraout_var_00,uVar1);
  }
  uVar5 = param_10 & 0xffff;
  *(uint *)((longlong)puVar2 + 0x2c) = param_10;
  if (uVar5 == 1) {
LAB_180016575:
    pvVar3 = (void *)(**(code **)(*param_1 + 8))(uVar6 + 2,*param_1);
    puVar2[3] = pvVar3;
    if (pvVar3 == (void *)0x0) {
      pcVar8 = "Unable to allocate memory for host name";
      param_3 = pbVar9;
    }
    else {
      memcpy(pvVar3,param_2,uVar6 + 2);
      puVar2[4] = uVar7;
      param_3 = pbVar9;
LAB_1800165aa:
      if ((param_10 >> 0x11 & 1) == 0) {
        param_3 = (byte *)&local_38;
        pcVar8 = FUN_180018500(*param_1,param_6,param_7,(undefined8 *)param_3);
        if (pcVar8 != (char *)0x0) {
          puVar2[8] = local_38;
          goto LAB_18001664b;
        }
        pcVar8 = "Unable to allocate memory for base64-encoded key";
      }
      else {
        if (param_7 == 0) {
          param_7 = -1;
          do {
            param_7 = param_7 + 1;
          } while (param_6[param_7] != 0);
        }
        pvVar3 = (void *)(**(code **)(*param_1 + 8))(param_7 + 1,*param_1);
        puVar2[8] = pvVar3;
        if (pvVar3 == (void *)0x0) {
          pcVar8 = "Unable to allocate memory for key";
        }
        else {
          memcpy(pvVar3,param_6,param_7 + 1);
          *(undefined1 *)(param_7 + puVar2[8]) = 0;
LAB_18001664b:
          if ((param_4 != (byte *)0x0) && ((param_10 & 0x3c0000) == 0x3c0000)) {
            pvVar3 = (void *)(**(code **)(*param_1 + 8))(param_5 + 1,*param_1);
            puVar2[9] = pvVar3;
            if (pvVar3 == (void *)0x0) {
              pcVar8 = "Unable to allocate memory for key type";
              goto LAB_1800166d0;
            }
            memcpy(pvVar3,param_4,param_5);
            *(undefined1 *)(param_5 + puVar2[9]) = 0;
            puVar2[10] = param_5;
          }
          if (param_8 == (void *)0x0) {
            puVar2[0xb] = 0;
LAB_180016760:
            FUN_180018d20(param_1 + 1,puVar2);
            if (param_11 != (longlong *)0x0) {
              lVar4 = FUN_180016b60((longlong)puVar2);
              *param_11 = lVar4;
            }
            return 0;
          }
          pvVar3 = (void *)(**(code **)(*param_1 + 8))(param_9 + 1,*param_1);
          puVar2[0xb] = pvVar3;
          if (pvVar3 != (void *)0x0) {
            memcpy(pvVar3,param_8,param_9 + 1);
            *(undefined1 *)(param_9 + puVar2[0xb]) = 0;
            puVar2[0xc] = param_9;
            goto LAB_180016760;
          }
          pcVar8 = "Unable to allocate memory for comment";
        }
      }
    }
LAB_1800166d0:
    uVar1 = 0xfffffffa;
  }
  else {
    if (uVar5 == 2) {
      uVar7 = FUN_180018350(*param_1,&local_38,&local_30,param_2,uVar7);
      uVar6 = uVar7 & 0xffffffff;
      if ((int)uVar7 != 0) goto LAB_1800166df;
      puVar2[3] = local_38;
      puVar2[4] = local_30;
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (param_3[uVar7] != 0);
      uVar7 = FUN_180018350(*param_1,&local_38,&local_30,param_3,uVar7);
      uVar6 = uVar7 & 0xffffffff;
      if ((int)uVar7 != 0) goto LAB_1800166df;
      puVar2[6] = local_38;
      puVar2[7] = local_30;
      goto LAB_1800165aa;
    }
    if (uVar5 == 3) goto LAB_180016575;
    pcVar8 = "Unknown host name type";
    uVar1 = 0xffffffdf;
    param_3 = pbVar9;
  }
  uVar5 = FUN_180018820(*param_1,uVar1,(longlong)pcVar8,param_3);
  uVar6 = (ulonglong)uVar5;
LAB_1800166df:
  lVar4 = *param_1;
  if (puVar2[0xb] != 0) {
    (**(code **)(lVar4 + 0x18))(puVar2[0xb],lVar4);
  }
  if (puVar2[9] != 0) {
    (**(code **)(lVar4 + 0x18))(puVar2[9],lVar4);
  }
  if (puVar2[8] != 0) {
    (**(code **)(lVar4 + 0x18))(puVar2[8],lVar4);
  }
  if (puVar2[6] != 0) {
    (**(code **)(lVar4 + 0x18))(puVar2[6],lVar4);
  }
  if (puVar2[3] != 0) {
    (**(code **)(lVar4 + 0x18))(puVar2[3],lVar4);
  }
  (**(code **)(lVar4 + 0x18))(puVar2,lVar4);
  return uVar6;
}




void FUN_1800167b0(longlong *param_1,byte *param_2,int param_3,byte *param_4,longlong param_5,
                  uint param_6,longlong *param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  byte **ppbVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  int local_1b8;
  undefined4 local_1b4;
  longlong *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  byte local_168 [272];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStack_1e8;
  puVar15 = (undefined8 *)0x0;
  uVar16 = param_6 & 0xffff;
  bVar17 = false;
  local_1b0 = param_7;
  local_1a8 = (byte *)0x0;
  local_1b4 = 2;
  local_1a0 = param_2;
  local_190 = param_1;
  if (uVar16 != 2) {
    if (param_3 < 0) {
      local_1b8 = 1;
    }
    else {
      local_1c8 = CONCAT44(local_1c8._4_4_,param_3);
      uVar5 = snprintf(local_168,0x10e,"[%s]:%d",param_2);
      if (0x10d < uVar5) {
        FUN_180018820(*param_1,0xffffffda,0x180031188,param_2);
        goto LAB_180016ae7;
      }
      param_2 = local_168;
      local_1b8 = 2;
    }
    if ((param_6 >> 0x11 & 1) == 0) {
      ppbVar14 = &local_1a8;
      pcVar6 = FUN_180018500(*param_1,param_4,param_5,ppbVar14);
      param_4 = local_1a8;
      if (pcVar6 == (char *)0x0) {
        FUN_180018820(*param_1,0xfffffffa,0x1800310f8,ppbVar14);
        goto LAB_180016ae7;
      }
    }
    local_198 = param_1 + 1;
    do {
      for (puVar7 = (undefined8 *)FUN_180018d50((longlong)local_198); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)FUN_180018d70(puVar7)) {
        sVar4 = *(short *)((longlong)puVar7 + 0x2c);
        if (sVar4 == 1) {
          if (uVar16 == 1) {
            pbVar8 = param_2;
            do {
              pbVar1 = pbVar8 + (puVar7[3] - (longlong)param_2);
              iVar12 = (uint)*pbVar8 - (uint)*pbVar1;
              if (iVar12 != 0) break;
              pbVar8 = pbVar8 + 1;
            } while (*pbVar1 != 0);
LAB_180016a13:
            bVar17 = iVar12 == 0;
          }
LAB_180016a1b:
          if (bVar17) goto LAB_180016a1f;
        }
        else {
          if (sVar4 != 2) {
            if ((sVar4 == 3) && (uVar16 == 3)) {
              pbVar8 = param_2;
              do {
                pbVar1 = pbVar8 + (puVar7[3] - (longlong)param_2);
                iVar12 = (uint)*pbVar8 - (uint)*pbVar1;
                if (iVar12 != 0) break;
                pbVar8 = pbVar8 + 1;
              } while (*pbVar1 != 0);
              goto LAB_180016a13;
            }
            goto LAB_180016a1b;
          }
          if ((uVar16 != 1) || (uVar9 = HMAC_CTX_new(), puVar7[4] != 0x14)) goto LAB_180016a1b;
          uVar10 = EVP_sha1();
          local_1c8 = 0;
          HMAC_Init_ex(uVar9,puVar7[6],*(undefined4 *)(puVar7 + 7),uVar10);
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (param_2[lVar11] != 0);
          HMAC_Update(uVar9,param_2);
          HMAC_Final(uVar9,&local_188,0);
          HMAC_CTX_free(uVar9);
          plVar13 = (longlong *)puVar7[3];
          if (((local_188 != *plVar13) || (local_180 != plVar13[1])) ||
             (local_178 != (int)plVar13[2])) goto LAB_180016a1b;
          bVar17 = true;
LAB_180016a1f:
          uVar5 = param_6 & 0x3c0000;
          if ((uVar5 != 0x3c0000) &&
             ((uVar5 == 0 || (uVar5 == (*(uint *)((longlong)puVar7 + 0x2c) & 0x3c0000))))) {
            pbVar8 = param_4;
            do {
              bVar2 = *pbVar8;
              bVar3 = pbVar8[puVar7[8] - (longlong)param_4];
              if (bVar2 != bVar3) break;
              pbVar8 = pbVar8 + 1;
            } while (bVar3 != 0);
            if (bVar2 == bVar3) {
              if (local_1b0 != (longlong *)0x0) {
                *(undefined4 *)(puVar7 + 0xd) = 0xdeadcafe;
                puVar7[0xe] = puVar7;
                if (*(short *)((longlong)puVar7 + 0x2c) == 1) {
                  uVar9 = puVar7[3];
                }
                else {
                  uVar9 = 0;
                }
                puVar7[0xf] = uVar9;
                puVar7[0x10] = puVar7[8];
                *(undefined4 *)(puVar7 + 0x11) = *(undefined4 *)((longlong)puVar7 + 0x2c);
                *local_1b0 = (longlong)(puVar7 + 0xd);
              }
              puVar15 = (undefined8 *)0x0;
              local_1b4 = 0;
              break;
            }
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = puVar7;
            }
          }
          bVar17 = false;
        }
      }
    } while ((!bVar17) && (local_1b8 = local_1b8 + -1, param_2 = local_1a0, local_1b8 != 0));
    if ((puVar15 != (undefined8 *)0x0) && (local_1b0 != (longlong *)0x0)) {
      plVar13 = local_1b0;
      lVar11 = FUN_180016b60((longlong)puVar15);
      *plVar13 = lVar11;
    }
    if (local_1a8 != (byte *)0x0) {
      (**(code **)(*local_190 + 0x18))(local_1a8,*local_190);
    }
  }
LAB_180016ae7:
  FUN_18002af30(local_58 ^ (ulonglong)auStack_1e8);
  return;
}




longlong FUN_180016b60(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0xdeadcafe;
  *(longlong *)(param_1 + 0x70) = param_1;
  if (*(short *)(param_1 + 0x2c) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x2c);
  return param_1 + 0x68;
}




undefined4
FUN_180016ba0(longlong *param_1,longlong param_2,undefined8 param_3,char *param_4,longlong *param_5,
             int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *****local_38;
  undefined8 ******local_30;
  
  if (param_6 != 1) {
    uVar2 = FUN_180018820(*param_1,0xffffffdf,0x1800312b8,param_4);
    return uVar2;
  }
  uVar1 = *(uint *)(param_2 + 0x2c);
  pppppppuVar9 = (undefined8 *******)(ulonglong)uVar1;
  uVar3 = uVar1 & 0x3c0000;
  if (uVar3 < 0x140001) {
    if (uVar3 == 0x140000) {
      lVar8 = 0x13;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
      goto LAB_180016db9;
    }
    if (uVar3 != 0x40000) {
      if (uVar3 == 0x80000) {
        lVar8 = 7;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
      }
      else if (uVar3 == 0xc0000) {
        lVar8 = 7;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
      }
      else {
        if (uVar3 != 0x100000) goto LAB_180016d50;
        lVar8 = 0x13;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
      }
      goto LAB_180016db9;
    }
    lVar8 = 0;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
  }
  else {
    if (uVar3 == 0x180000) {
      lVar8 = 0x13;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
    }
    else if (uVar3 == 0x1c0000) {
      lVar8 = 0xb;
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
    }
    else {
      if ((uVar3 != 0x3c0000) || (*(longlong *)(param_2 + 0x48) == 0)) {
LAB_180016d50:
        uVar2 = FUN_180018820(*param_1,0xffffffdf,0x180031358,pppppppuVar9);
        return uVar2;
      }
      lVar7 = -1;
      lVar8 = *(longlong *)(param_2 + 0x50);
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(param_2 + 0x40) + lVar7) != '\0');
      if (lVar8 == 0) goto LAB_180016dbf;
    }
LAB_180016db9:
    lVar7 = lVar7 + 1 + lVar8;
  }
LAB_180016dbf:
  lVar6 = *(longlong *)(param_2 + 0x58);
  if (lVar6 != 0) {
    lVar7 = lVar7 + *(longlong *)(param_2 + 0x60) + 1;
  }
  if ((short)uVar1 == 2) {
    pppppppuVar9 = (undefined8 *******)&local_38;
    pcVar4 = FUN_180018500(*param_1,*(byte **)(param_2 + 0x18),*(longlong *)(param_2 + 0x20),
                           pppppppuVar9);
    lVar6 = *param_1;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "Unable to allocate memory for base64-encoded host name";
      uVar2 = 0xfffffffa;
      goto LAB_18001703b;
    }
    pppppppuVar9 = &local_30;
    pcVar5 = FUN_180018500(lVar6,*(byte **)(param_2 + 0x30),*(longlong *)(param_2 + 0x38),
                           pppppppuVar9);
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5 + 7 + (longlong)pcVar4 + lVar7;
      if (pcVar4 <= param_4) {
        pppppppuVar9 = (undefined8 *******)local_30;
        if (*(longlong *)(param_2 + 0x58) == 0) {
LAB_180016edc:
          if (lVar8 == 0) {
            snprintf(param_3,param_4,"|1|%s|%s %s\n",local_30);
          }
          else {
            snprintf(param_3,param_4,"|1|%s|%s %s %s\n",local_30);
          }
        }
        else if (lVar8 == 0) {
          if (*(longlong *)(param_2 + 0x58) == 0) goto LAB_180016edc;
          snprintf(param_3,param_4,"|1|%s|%s %s %s\n",local_30);
        }
        else {
          snprintf(param_3,param_4,"|1|%s|%s %s %s %s\n",local_30);
        }
      }
      (**(code **)(*param_1 + 0x18))(local_38,*param_1);
      (**(code **)(*param_1 + 0x18))(local_30,*param_1);
      goto LAB_180016f49;
    }
    (**(code **)(*param_1 + 0x18))(local_38,*param_1);
    pcVar4 = "Unable to allocate memory for base64-encoded salt";
    uVar2 = 0xfffffffa;
  }
  else {
    pcVar4 = (char *)(lVar7 + 3 + *(longlong *)(param_2 + 0x20));
    if (pcVar4 <= param_4) {
      if ((lVar6 != 0) && (lVar8 != 0)) {
        snprintf(param_3,param_4,"%s %s %s %s\n",*(undefined8 *)(param_2 + 0x18));
        *param_5 = (longlong)(pcVar4 + -1);
        return 0;
      }
      if ((lVar6 == 0) && (lVar8 == 0)) {
        snprintf(param_3,param_4,"%s %s\n",*(undefined8 *)(param_2 + 0x18));
        *param_5 = (longlong)(pcVar4 + -1);
        return 0;
      }
      snprintf(param_3,param_4,"%s %s %s\n",*(undefined8 *)(param_2 + 0x18));
      *param_5 = (longlong)(pcVar4 + -1);
      return 0;
    }
LAB_180016f49:
    *param_5 = (longlong)(pcVar4 + -1);
    if (pcVar4 <= param_4) {
      return 0;
    }
    pcVar4 = "Known-host write buffer too small";
    uVar2 = 0xffffffda;
  }
  lVar6 = *param_1;
LAB_18001703b:
  uVar2 = FUN_180018820(lVar6,uVar2,(longlong)pcVar4,pppppppuVar9);
  return uVar2;
}




void libssh2_knownhost_add
               (longlong *param_1,byte *param_2,byte *param_3,byte *param_4,longlong param_5,
               uint param_6,longlong *param_7)

{
                    /* 0x17070  51  libssh2_knownhost_add */
  FUN_180016430(param_1,param_2,param_3,(byte *)0x0,0,param_4,param_5,(void *)0x0,0,param_6,param_7)
  ;
  return;
}




void libssh2_knownhost_addc
               (longlong *param_1,byte *param_2,byte *param_3,byte *param_4,longlong param_5,
               void *param_6,longlong param_7,uint param_8,longlong *param_9)

{
                    /* 0x170c0  52  libssh2_knownhost_addc */
  FUN_180016430(param_1,param_2,param_3,(byte *)0x0,0,param_4,param_5,param_6,param_7,param_8,
                param_9);
  return;
}




void libssh2_knownhost_check
               (longlong *param_1,byte *param_2,byte *param_3,longlong param_4,uint param_5,
               longlong *param_6)

{
                    /* 0x17120  53  libssh2_knownhost_check */
  FUN_1800167b0(param_1,param_2,-1,param_3,param_4,param_5,param_6);
  return;
}




undefined4
libssh2_knownhost_del(longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  
                    /* 0x17160  55  libssh2_knownhost_del */
  if ((param_2 != (int *)0x0) && (*param_2 == -0x21523502)) {
    plVar1 = *(longlong **)(param_2 + 2);
    FUN_180018d80(plVar1);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    FUN_180015fd0(*param_1,(longlong)plVar1);
    return 0;
  }
  uVar2 = FUN_180018820(*param_1,0xffffffde,0x1800311b0,param_4);
  return uVar2;
}




void libssh2_knownhost_free(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* 0x171e0  56  libssh2_knownhost_free */
  puVar2 = (undefined8 *)FUN_180018d50((longlong)(param_1 + 1));
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_180018d70(puVar2);
    lVar1 = *param_1;
    if (puVar2[0xb] != 0) {
      (**(code **)(lVar1 + 0x18))(puVar2[0xb],lVar1);
    }
    if (puVar2[9] != 0) {
      (**(code **)(lVar1 + 0x18))(puVar2[9],lVar1);
    }
    if (puVar2[8] != 0) {
      (**(code **)(lVar1 + 0x18))(puVar2[8],lVar1);
    }
    if (puVar2[6] != 0) {
      (**(code **)(lVar1 + 0x18))(puVar2[6],lVar1);
    }
    if (puVar2[3] != 0) {
      (**(code **)(lVar1 + 0x18))(puVar2[3],lVar1);
    }
    (**(code **)(lVar1 + 0x18))(puVar2,lVar1);
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00018001729f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,*param_1);
  return;
}




undefined8 libssh2_knownhost_get(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
                    /* 0x172b0  57  libssh2_knownhost_get */
  if ((param_3 == 0) || (*(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    lVar1 = FUN_180018d50(param_1 + 8);
  }
  else {
    lVar1 = FUN_180018d70(*(undefined8 **)(param_3 + 8));
  }
  if (lVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(lVar1 + 0x68) = 0xdeadcafe;
  *(longlong *)(lVar1 + 0x70) = lVar1;
  if (*(short *)(lVar1 + 0x2c) == 1) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    uVar2 = 0;
  }
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x40);
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar1 + 0x2c);
  *param_2 = (undefined4 *)(lVar1 + 0x68);
  return 0;
}




longlong *
libssh2_knownhost_init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
                    /* 0x17330  58  libssh2_knownhost_init */
  plVar1 = (longlong *)(**(code **)(param_1 + 8))(0x18,param_1);
  if (plVar1 == (longlong *)0x0) {
    FUN_180018820(param_1,0xfffffffa,0x180031018,param_4);
    return (longlong *)0x0;
  }
  *plVar1 = param_1;
  FUN_180018d60(plVar1 + 1);
  return plVar1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void libssh2_knownhost_readfile(longlong *param_1,char *param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  FILE *_File;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined1 auStackY_1068 [32];
  byte local_1038 [4096];
  ulonglong local_38;
  
                    /* 0x17390  59  libssh2_knownhost_readfile */
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_1068;
  if (param_3 == 1) {
    _File = fopen(param_2,"rt");
    if (_File == (FILE *)0x0) {
      FUN_180018820(*param_1,0xfffffff0,0x180031340,param_4);
    }
    else {
      pcVar3 = fgets((char *)local_1038,0xffc,_File);
      if (pcVar3 != (char *)0x0) {
LAB_180017450:
        pbVar7 = (byte *)0xffffffffffffffff;
        do {
          pbVar7 = pbVar7 + 1;
        } while (local_1038[(longlong)pbVar7] != 0);
        pbVar4 = local_1038;
        for (; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + -1) {
          bVar1 = *pbVar4;
          if ((bVar1 != 0x20) && (bVar1 != 9)) {
            if ((pbVar7 != (byte *)0x0) &&
               ((pbVar5 = pbVar4, 0x23 < bVar1 ||
                ((0x800000401U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)))) goto LAB_1800174b0;
            break;
          }
          pbVar4 = pbVar4 + 1;
        }
        goto LAB_18001754a;
      }
LAB_180017598:
      fclose(_File);
    }
  }
  else {
    FUN_180018820(*param_1,0xffffffdf,0x1800312b8,param_4);
  }
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_1068);
  return;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    pbVar7 = pbVar7 + -1;
    if (pbVar7 == (byte *)0x0) break;
LAB_1800174b0:
    if ((*pbVar5 < 0x21) && ((0x100000201U >> ((longlong)(char)*pbVar5 & 0x3fU) & 1) != 0)) break;
  }
  uVar9 = (longlong)pbVar5 - (longlong)pbVar4;
  for (; (pbVar7 != (byte *)0x0 && ((*pbVar5 == 0x20 || (*pbVar5 == 9)))); pbVar5 = pbVar5 + 1) {
    pbVar7 = pbVar7 + -1;
  }
  if ((*pbVar5 == 0) || (pbVar6 = pbVar5, pbVar8 = pbVar7, pbVar7 == (byte *)0x0)) {
    iVar2 = FUN_180018820(*param_1,0xffffffdf,0x1800312f0,param_4);
  }
  else {
    do {
      if ((*pbVar6 == 0) || (*pbVar6 == 10)) break;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + -1;
    } while (pbVar8 != (byte *)0x0);
    pbVar8 = pbVar7 + -1;
    if (*pbVar6 != 10) {
      pbVar8 = pbVar7;
    }
    iVar2 = FUN_180016070(param_1,(short *)pbVar4,uVar9,pbVar5,pbVar8);
    param_4 = pbVar5;
  }
  if (iVar2 != 0) {
    FUN_180018820(*param_1,0xffffffd2,0x180031318,param_4);
    goto LAB_180017598;
  }
LAB_18001754a:
  pcVar3 = fgets((char *)local_1038,0xffc,_File);
  if (pcVar3 == (char *)0x0) goto LAB_180017598;
  goto LAB_180017450;
}




int libssh2_knownhost_readline(longlong *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* 0x175e0  60  libssh2_knownhost_readline */
  if ((int)param_4 != 1) {
    iVar2 = FUN_180018820(*param_1,0xffffffdf,0x1800312b8,param_4);
    return iVar2;
  }
  if (param_3 == (byte *)0x0) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_2;
    if ((bVar1 != 0x20) && (bVar1 != 9)) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    if (param_3 == (byte *)0x0) {
      return 0;
    }
  }
  if (param_3 == (byte *)0x0) {
    return 0;
  }
  pbVar4 = param_2;
  if ((bVar1 < 0x24) && ((0x800000401U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) {
    return 0;
  }
  do {
    if ((*pbVar4 < 0x21) && ((0x100000201U >> ((longlong)(char)*pbVar4 & 0x3fU) & 1) != 0)) break;
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != (byte *)0x0);
  uVar3 = (longlong)pbVar4 - (longlong)param_2;
  for (; (param_3 != (byte *)0x0 && ((*pbVar4 == 0x20 || (*pbVar4 == 9)))); pbVar4 = pbVar4 + 1) {
    param_3 = param_3 + -1;
  }
  if ((*pbVar4 == 0) || (pbVar5 = pbVar4, pbVar6 = param_3, param_3 == (byte *)0x0)) {
    iVar2 = FUN_180018820(*param_1,0xffffffdf,0x1800312f0,param_4);
    return iVar2;
  }
  do {
    if ((*pbVar5 == 0) || (*pbVar5 == 10)) break;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + -1;
  } while (pbVar6 != (byte *)0x0);
  pbVar6 = param_3 + -1;
  if (*pbVar5 != 10) {
    pbVar6 = param_3;
  }
  iVar2 = FUN_180016070(param_1,(short *)param_2,uVar3,pbVar4,pbVar6);
  if (iVar2 == 0) {
    return 0;
  }
  return iVar2;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void libssh2_knownhost_writefile(longlong *param_1,char *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  FILE *_File;
  undefined8 *puVar2;
  size_t sVar3;
  FILE *pFVar4;
  undefined1 auStackY_1078 [32];
  size_t local_1048 [2];
  undefined1 local_1038 [4096];
  ulonglong local_38;
  
                    /* 0x17720  61  libssh2_knownhost_writefile */
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_1078;
  if (param_3 == 1) {
    _File = fopen(param_2,"wt");
    if (_File == (FILE *)0x0) {
      FUN_180018820(*param_1,0xfffffff0,0x180031340,param_4);
    }
    else {
      for (puVar2 = (undefined8 *)FUN_180018d50((longlong)(param_1 + 1));
          puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)FUN_180018d70(puVar2)) {
        local_1048[0] = 0;
        iVar1 = FUN_180016ba0(param_1,(longlong)puVar2,local_1038,(char *)0xffc,
                              (longlong *)local_1048,1);
        if (iVar1 != 0) break;
        pFVar4 = _File;
        sVar3 = fwrite(local_1038,1,local_1048[0],_File);
        if (sVar3 != local_1048[0]) {
          FUN_180018820(*param_1,0xfffffff0,0x180031450,pFVar4);
          break;
        }
      }
      fclose(_File);
    }
  }
  else {
    FUN_180018820(*param_1,0xffffffdf,0x1800312b8,param_4);
  }
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_1078);
  return;
}




void FUN_1800178c0(longlong *param_1,void *param_2,longlong param_3,byte *param_4,size_t param_5,
                  void *param_6,longlong param_7,uint param_8,void *param_9,longlong param_10)

{
  void *pvVar1;
  byte *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  void *_Src_00;
  longlong lVar12;
  undefined1 auStackY_1b8 [32];
  longlong local_188;
  longlong local_180;
  void *local_178;
  byte *local_170;
  void *local_168;
  byte local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStackY_1b8;
  local_178 = param_6;
  local_168 = param_9;
  _Src_00 = (void *)(param_3 + (longlong)param_2);
  local_170 = param_4;
  uVar9 = 0;
  if (param_3 == 0) {
    FUN_180018820(*param_1,0xffffffdf,0x1800311d0,param_4);
  }
  else {
    while (uVar10 = uVar9, pvVar1 = _Src_00, param_2 < pvVar1) {
      _Src_00 = (void *)((longlong)pvVar1 - 1);
      uVar9 = uVar10 + 1;
      if ((_Src_00 == param_2) || (*(char *)((longlong)pvVar1 - 2) == ',')) {
        if (0xfe < uVar9) {
          FUN_180018820(*param_1,0xffffffdf,0x180031208,param_4);
          break;
        }
        memcpy(local_158,_Src_00,uVar9);
        local_158[uVar10 + 1] = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar10 = uVar9;
          uVar9 = uVar10 + 1;
        } while (local_158[uVar10 + 1] != 0);
        if ((param_8 & 0x3c0000) == 0) {
          iVar2 = FUN_180018820(*param_1,0xffffffde,0x180031050,param_4);
LAB_180017c50:
          if (iVar2 != 0) break;
        }
        else {
          puVar3 = (undefined8 *)FUN_180018690(*param_1,0x90);
          if (puVar3 == (undefined8 *)0x0) {
            iVar2 = FUN_180018820(*param_1,0xfffffffa,0x180031060,param_4);
            goto LAB_180017c50;
          }
          uVar7 = (param_8 | 0x20001) & 0xffff;
          *(uint *)((longlong)puVar3 + 0x2c) = param_8 | 0x20001;
          if (uVar7 != 1) {
            if (uVar7 != 2) {
              if (uVar7 == 3) goto LAB_180017ad0;
              pcVar11 = "Unknown host name type";
              uVar8 = 0xffffffdf;
              goto LAB_180017bef;
            }
            param_4 = local_158;
            uVar4 = FUN_180018350(*param_1,&local_188,&local_180,param_4,uVar9);
            iVar2 = (int)uVar4;
            if (iVar2 == 0) {
              puVar3[3] = local_188;
              puVar3[4] = local_180;
              pcVar11 = (char *)0xffffffffffffffff;
              do {
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 != '\0');
              param_4 = (byte *)0x0;
              uVar4 = FUN_180018350(*param_1,&local_188,&local_180,(byte *)0x0,(ulonglong)pcVar11);
              iVar2 = (int)uVar4;
              if (iVar2 == 0) {
                puVar3[6] = local_188;
                puVar3[7] = local_180;
                goto LAB_180017b07;
              }
            }
LAB_180017bf9:
            lVar12 = *param_1;
            if (puVar3[0xb] != 0) {
              (**(code **)(lVar12 + 0x18))(puVar3[0xb],lVar12);
            }
            if (puVar3[9] != 0) {
              (**(code **)(lVar12 + 0x18))(puVar3[9],lVar12);
            }
            if (puVar3[8] != 0) {
              (**(code **)(lVar12 + 0x18))(puVar3[8],lVar12);
            }
            if (puVar3[6] != 0) {
              (**(code **)(lVar12 + 0x18))(puVar3[6],lVar12);
            }
            if (puVar3[3] != 0) {
              (**(code **)(lVar12 + 0x18))(puVar3[3],lVar12);
            }
            (**(code **)(lVar12 + 0x18))(puVar3,lVar12);
            goto LAB_180017c50;
          }
LAB_180017ad0:
          pvVar5 = (void *)(**(code **)(*param_1 + 8))(uVar10 + 2,*param_1);
          puVar3[3] = pvVar5;
          if (pvVar5 == (void *)0x0) {
            pcVar11 = "Unable to allocate memory for host name";
LAB_180017bea:
            uVar8 = 0xfffffffa;
LAB_180017bef:
            iVar2 = FUN_180018820(*param_1,uVar8,(longlong)pcVar11,param_4);
            goto LAB_180017bf9;
          }
          memcpy(pvVar5,local_158,uVar10 + 2);
          puVar3[4] = uVar9;
LAB_180017b07:
          pvVar5 = local_178;
          lVar12 = param_7;
          if (param_7 == 0) {
            lVar12 = -1;
            do {
              lVar12 = lVar12 + 1;
            } while (*(char *)((longlong)local_178 + lVar12) != '\0');
          }
          pvVar6 = (void *)(**(code **)(*param_1 + 8))(lVar12 + 1,*param_1);
          puVar3[8] = pvVar6;
          if (pvVar6 == (void *)0x0) {
            pcVar11 = "Unable to allocate memory for key";
            goto LAB_180017bea;
          }
          memcpy(pvVar6,pvVar5,lVar12 + 1);
          _Src = local_170;
          *(undefined1 *)(lVar12 + puVar3[8]) = 0;
          if ((local_170 != (byte *)0x0) && ((param_8 & 0x3c0000) == 0x3c0000)) {
            pvVar5 = (void *)(**(code **)(*param_1 + 8))(param_5 + 1,*param_1);
            puVar3[9] = pvVar5;
            if (pvVar5 == (void *)0x0) {
              pcVar11 = "Unable to allocate memory for key type";
              goto LAB_180017bea;
            }
            memcpy(pvVar5,_Src,param_5);
            *(undefined1 *)(param_5 + puVar3[9]) = 0;
            puVar3[10] = param_5;
          }
          pvVar5 = local_168;
          if (local_168 == (void *)0x0) {
            puVar3[0xb] = 0;
          }
          else {
            pvVar6 = (void *)(**(code **)(*param_1 + 8))(param_10 + 1,*param_1);
            puVar3[0xb] = pvVar6;
            if (pvVar6 == (void *)0x0) {
              pcVar11 = "Unable to allocate memory for comment";
              goto LAB_180017bea;
            }
            memcpy(pvVar6,pvVar5,param_10 + 1);
            *(undefined1 *)(param_10 + puVar3[0xb]) = 0;
            puVar3[0xc] = param_10;
          }
          FUN_180018d20(param_1 + 1,puVar3);
        }
        if (_Src_00 <= param_2) break;
        _Src_00 = (void *)((longlong)pvVar1 - 2);
        uVar9 = 0;
      }
    }
  }
  FUN_18002af30(local_58 ^ (ulonglong)auStackY_1b8);
  return;
}




undefined8 FUN_180017d10(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))(*param_2,param_1);
    *param_2 = 0;
    return 0;
  }
  *param_2 = 0;
  return 0;
}




undefined8
FUN_180017d50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,longlong param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  FUN_180018d00(local_18,param_3);
  uVar1 = HMAC_CTX_new();
  uVar2 = EVP_sha512();
  HMAC_Init_ex(uVar1,*param_8,0x40,uVar2,0);
  HMAC_Update(uVar1,local_18,4);
  HMAC_Update(uVar1,param_4,param_5);
  if ((param_6 != 0) && (param_7 != 0)) {
    HMAC_Update(uVar1);
  }
  HMAC_Final(uVar1,param_2,0);
  HMAC_CTX_free(uVar1);
  return 0;
}




undefined ** FUN_1800182f0(void)

{
  return &PTR_PTR_s_hmac_sha2_256_18003b1f0;
}




undefined ** FUN_180018300(undefined8 *param_1)

{
  char *_Str1;
  int iVar1;
  undefined **ppuVar2;
  
  _Str1 = (char *)*param_1;
  iVar1 = strcmp(_Str1,"aes256-gcm@openssh.com");
  if (iVar1 != 0) {
    iVar1 = strcmp(_Str1,"aes128-gcm@openssh.com");
    ppuVar2 = &PTR_s_INTEGRATED_AES_GCM_180031670;
    if (iVar1 != 0) {
      ppuVar2 = (undefined **)0x0;
    }
    return ppuVar2;
  }
  return &PTR_s_INTEGRATED_AES_GCM_180031670;
}




undefined8
FUN_180018350(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4,ulonglong param_5)

{
  byte *pbVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = 0;
  lVar10 = 0;
  lVar3 = (**(code **)(param_1 + 8))((param_5 >> 2) * 3 + 1,param_1);
  *param_2 = lVar3;
  if (lVar3 == 0) {
    if ((*(byte *)(param_1 + 0x274) & 1) != 0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x268),param_1);
    }
    *(undefined4 *)(param_1 + 0x270) = 0xfffffffa;
    *(char **)(param_1 + 0x268) = "Unable to allocate memory for base64 decoding";
    uVar4 = 0xfffffffa;
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  else {
    pbVar1 = param_4 + param_5;
    if (param_4 < pbVar1) {
      do {
        sVar2 = *(short *)(&DAT_1800317b0 + (ulonglong)*param_4 * 2);
        if (-1 < sVar2) {
          uVar9 = (uint)(lVar11 >> 0x3f) & 3;
          uVar5 = (ulonglong)((int)lVar11 + uVar9 & 3);
          lVar6 = uVar5 - uVar9;
          bVar7 = (byte)sVar2;
          if (uVar5 == uVar9) {
            cVar8 = bVar7 << 2;
LAB_180018464:
            *(char *)(lVar3 + lVar10) = cVar8;
          }
          else {
            if (lVar6 == 1) {
              *(byte *)(lVar3 + lVar10) = *(byte *)(lVar3 + lVar10) | (byte)(sVar2 >> 4);
              lVar10 = lVar10 + 1;
              cVar8 = bVar7 << 4;
              goto LAB_180018464;
            }
            if (lVar6 == 2) {
              *(byte *)(lVar3 + lVar10) = *(byte *)(lVar3 + lVar10) | (byte)(sVar2 >> 2);
              lVar10 = lVar10 + 1;
              cVar8 = bVar7 << 6;
              goto LAB_180018464;
            }
            if (lVar6 == 3) {
              *(byte *)(lVar3 + lVar10) = *(byte *)(lVar3 + lVar10) | bVar7;
              lVar10 = lVar10 + 1;
            }
          }
          lVar11 = lVar11 + 1;
        }
        param_4 = param_4 + 1;
      } while (param_4 < pbVar1);
      uVar9 = (uint)(lVar11 >> 0x3f) & 3;
      if ((ulonglong)((int)lVar11 + uVar9 & 3) - (ulonglong)uVar9 == 1) {
        (**(code **)(param_1 + 0x18))(*param_2,param_1);
        *param_2 = 0;
        if ((*(byte *)(param_1 + 0x274) & 1) != 0) {
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x268),param_1);
        }
        *(undefined4 *)(param_1 + 0x270) = 0xffffffde;
        *(char **)(param_1 + 0x268) = "Invalid base64";
        *(undefined4 *)(param_1 + 0x274) = 0;
        return 0xffffffde;
      }
    }
    *param_3 = lVar10;
    uVar4 = 0;
  }
  return uVar4;
}




char * FUN_180018500(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char cVar9;
  byte local_res8 [8];
  
  *param_4 = 0;
  if (param_3 == 0) {
    param_3 = -1;
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != 0);
  }
  pcVar3 = (char *)(**(code **)(param_1 + 8))();
  pcVar8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    while (param_3 != 0) {
      iVar7 = 0;
      uVar4 = 0;
      do {
        if (param_3 == 0) {
          if (2 < uVar4) {
            FUN_18002b0b8();
            pcVar2 = (code *)swi(3);
            pcVar8 = (char *)(*pcVar2)();
            return pcVar8;
          }
          bVar5 = 0;
        }
        else {
          bVar5 = *param_2;
          iVar7 = iVar7 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
        local_res8[uVar4] = bVar5;
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < 3);
      bVar5 = (local_res8[1] & 0xf) << 2 | local_res8[2] >> 6;
      if (iVar7 == 1) {
        cVar6 = '=';
        cVar9 = '=';
      }
      else if (iVar7 == 2) {
        cVar6 = '=';
        cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar5];
      }
      else {
        cVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [local_res8[2] & 0x3f];
        cVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar5];
      }
      cVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(byte)((local_res8[0] & 3) << 4 | local_res8[1] >> 4)];
      *pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [local_res8[0] >> 2];
      pcVar8[1] = cVar1;
      pcVar8[2] = cVar9;
      pcVar8[3] = cVar6;
      pcVar8 = pcVar8 + 4;
    }
    *pcVar8 = '\0';
    *param_4 = pcVar3;
    pcVar8 = (char *)0xffffffffffffffff;
    do {
      pcVar8 = pcVar8 + 1;
    } while (pcVar8[(longlong)pcVar3] != '\0');
  }
  return pcVar8;
}




void * FUN_180018690(longlong param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(param_1 + 8))(param_2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
  }
  return _Dst;
}




undefined8 FUN_1800186d0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (*param_1 - param_1[1]) + param_1[2];
  if ((param_2 <= uVar1) && (uVar1 <= (ulonglong)param_1[2])) {
    return 1;
  }
  return 0;
}




undefined8 FUN_180018700(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  undefined1 *_Src;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  ulonglong uVar8;
  
  if (param_2 != (longlong *)0x0) {
    puVar5 = (undefined1 *)param_2[1];
    uVar6 = param_2[2];
    uVar7 = (*param_2 - (longlong)puVar5) + uVar6;
    if ((3 < uVar7) && (uVar7 <= uVar6)) {
      uVar1 = *puVar5;
      _Src = puVar5 + 4;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar8 = (*param_2 - (longlong)_Src) + uVar6;
      uVar4 = puVar5[3];
      param_2[1] = (longlong)_Src;
      uVar7 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
      if ((uVar7 <= uVar8) && (uVar8 <= uVar6)) {
        param_2[1] = (longlong)(_Src + uVar7);
        if (uVar7 == 0) {
          *param_4 = 0;
          *param_3 = 0;
        }
        else {
          _Dst = (void *)(**(code **)(param_1 + 8))(uVar7,param_1);
          *param_3 = _Dst;
          if (_Dst == (void *)0x0) {
            return 0xffffffff;
          }
          memcpy(_Dst,_Src,uVar7);
        }
        if (param_4 != (ulonglong *)0x0) {
          *param_4 = uVar7;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}




bool FUN_180018800(longlong *param_1)

{
  return (ulonglong)(param_1[2] + *param_1) <= (ulonglong)param_1[1];
}




undefined4 FUN_180018820(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    if (param_3 != 0) {
      uVar1 = __acrt_iob_func(2);
      FUN_180019200(uVar1,"Session is NULL, error: %s\n",param_3,param_4);
      return param_2;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x274) & 1) != 0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x268),param_1);
    }
    *(undefined4 *)(param_1 + 0x270) = param_2;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(longlong *)(param_1 + 0x268) = param_3;
  }
  return param_2;
}




undefined4 FUN_1800188c0(longlong param_1,undefined4 param_2,char *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *_Dst;
  
  if (param_1 == 0) {
    if (param_3 != (char *)0x0) {
      uVar2 = __acrt_iob_func(2);
      FUN_180019200(uVar2,"Session is NULL, error: %s\n",param_3,param_4);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x274) & 1) != 0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x268),param_1);
    }
    *(undefined4 *)(param_1 + 0x270) = param_2;
    *(undefined4 *)(param_1 + 0x274) = 0;
    if ((param_3 != (char *)0x0) && ((param_4 & 1) != 0)) {
      lVar1 = -1;
      do {
        lVar3 = lVar1;
        lVar1 = lVar3 + 1;
      } while (param_3[lVar3 + 1] != '\0');
      _Dst = (char *)(**(code **)(param_1 + 8))(lVar3 + 2U,param_1);
      if (_Dst == (char *)0x0) {
        param_3 = "former error forgotten (OOM)";
      }
      else {
        memcpy(_Dst,param_3,lVar3 + 2U);
        *(undefined4 *)(param_1 + 0x274) = 1;
        param_3 = _Dst;
      }
    }
    *(char **)(param_1 + 0x268) = param_3;
  }
  return param_2;
}




undefined8 FUN_1800189c0(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar2 = param_1[2];
  uVar4 = (*param_1 - (longlong)puVar1) + uVar2;
  if ((3 < uVar4) && (uVar4 <= uVar2)) {
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
    pcVar5 = puVar1 + 4;
    uVar4 = (ulonglong)uVar3;
    uVar6 = (*param_1 - (longlong)pcVar5) + uVar2;
    param_1[1] = (longlong)pcVar5;
    if ((uVar4 <= uVar6) && (uVar6 <= uVar2)) {
      for (; (uVar3 != 0 && (*pcVar5 == '\0')); pcVar5 = pcVar5 + 1) {
        uVar3 = uVar3 - 1;
      }
      *param_2 = pcVar5;
      param_1[1] = param_1[1] + uVar4;
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = (ulonglong)uVar3;
      }
      return 0;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_180018a60(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = (*param_1 - param_1[1]) + param_1[2];
  if ((uVar1 != 0) && (uVar1 <= (ulonglong)param_1[2])) {
    *(bool *)param_2 = *(char *)param_1[1] != '\0';
    param_1[1] = param_1[1] + 1;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_180018aa0(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (*param_1 - param_1[1]) + param_1[2];
  if ((uVar1 != 0) && (uVar1 <= (ulonglong)param_1[2])) {
    *param_2 = *(undefined1 *)param_1[1];
    param_1[1] = param_1[1] + 1;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_180018ad0(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != (longlong *)0x0) {
    puVar6 = (undefined1 *)param_1[1];
    uVar7 = param_1[2];
    uVar8 = (*param_1 - (longlong)puVar6) + uVar7;
    if ((3 < uVar8) && (uVar8 <= uVar7)) {
      uVar2 = *puVar6;
      puVar1 = puVar6 + 4;
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar8 = (*param_1 - (longlong)puVar1) + uVar7;
      uVar5 = puVar6[3];
      param_1[1] = (longlong)puVar1;
      uVar9 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
      if ((uVar9 <= uVar8) && (uVar8 <= uVar7)) {
        *param_2 = (longlong)puVar1;
        param_1[1] = param_1[1] + uVar9;
        if (param_3 != (ulonglong *)0x0) {
          *param_3 = uVar9;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}




undefined8 FUN_180018b90(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar2 = (*param_1 - (longlong)puVar1) + param_1[2];
  if ((3 < uVar2) && (uVar2 <= (ulonglong)param_1[2])) {
    *param_2 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
    param_1[1] = param_1[1] + 4;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_180018bf0(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar2 = (*param_1 - (longlong)puVar1) + param_1[2];
  if ((7 < uVar2) && (uVar2 <= (ulonglong)param_1[2])) {
    *param_2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),
                                                                     puVar1[2]),puVar1[3]),puVar1[4]
                                                  ),puVar1[5]),puVar1[6]),puVar1[7]);
    param_1[1] = param_1[1] + 8;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_180018c80(undefined4 *param_1)

{
  _FILETIME local_res8 [4];
  
  if (param_1 != (undefined4 *)0x0) {
    GetSystemTimeAsFileTime(local_res8);
    param_1[1] = (int)((ulonglong)local_res8[0] / 10) +
                 (int)(((ulonglong)local_res8[0] / 10) / 1000000) * -1000000;
    *param_1 = (int)(((longlong)local_res8[0] + 0xfe624e212ac18000U) / 10000000);
  }
  return 0;
}




void FUN_180018d00(undefined1 *param_1,undefined4 param_2)

{
  param_1[3] = (char)param_2;
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  return;
}




void FUN_180018d20(undefined8 *param_1,undefined8 *param_2)

{
  param_2[2] = param_1;
  *param_2 = 0;
  param_2[1] = *param_1;
  *param_1 = param_2;
  if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[1] = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}




undefined8 FUN_180018d50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_180018d60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 FUN_180018d70(undefined8 *param_1)

{
  return *param_1;
}




void FUN_180018d80(longlong *param_1)

{
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    *(longlong *)(param_1[2] + 8) = *param_1;
  }
  else {
    *(longlong *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(longlong *)(*param_1 + 8) = param_1[1];
    return;
  }
  *(longlong *)param_1[2] = param_1[1];
  return;
}




size_t FUN_180018dc0(longlong *param_1,char *param_2)

{
  char *_Str1;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  size_t _MaxCount;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  _MaxCount = 0xffffffffffffffff;
  if (param_1 != (longlong *)0x0) {
    puVar5 = (undefined1 *)param_1[1];
    uVar7 = param_1[2];
    uVar8 = (*param_1 - (longlong)puVar5) + uVar7;
    if ((3 < uVar8) && (uVar8 <= uVar7)) {
      uVar1 = *puVar5;
      _Str1 = puVar5 + 4;
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar9 = (*param_1 - (longlong)_Str1) + uVar7;
      uVar4 = puVar5[3];
      param_1[1] = (longlong)_Str1;
      uVar8 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
      if ((uVar8 <= uVar9) && (uVar9 <= uVar7)) {
        param_1[1] = (longlong)(_Str1 + uVar8);
        uVar7 = 0xffffffffffffffff;
        do {
          uVar7 = uVar7 + 1;
        } while (param_2[uVar7] != '\0');
        if (uVar8 == uVar7) {
          do {
            _MaxCount = _MaxCount + 1;
          } while (param_2[_MaxCount] != '\0');
          iVar6 = strncmp(_Str1,param_2,_MaxCount);
          _MaxCount = (size_t)-(uint)(iVar6 != 0);
        }
      }
    }
  }
  return _MaxCount;
}




undefined4 FUN_180018ea0(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}




undefined8 FUN_180018ec0(undefined1 *param_1)

{
  return CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),
                                                               param_1[2]),param_1[3]),param_1[4]),
                                    param_1[5]),param_1[6]),param_1[7]);
}




longlong FUN_180018f20(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = Ordinal_16();
  lVar2 = (longlong)iVar1;
  if (lVar2 < 0) {
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2714) {
      if (iVar1 == 0x2733) {
        return -0xb;
      }
      if (iVar1 != 0x2736) {
        return -5;
      }
      return -9;
    }
    lVar2 = -4;
  }
  return lVar2;
}




longlong FUN_180018f80(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = Ordinal_19();
  lVar2 = (longlong)iVar1;
  if (lVar2 < 0) {
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2714) {
      if (iVar1 == 0x2733) {
        return -0xb;
      }
      if (iVar1 != 0x2736) {
        return -5;
      }
      return -9;
    }
    lVar2 = -4;
  }
  return lVar2;
}




bool FUN_180018fe0(longlong *param_1,char *param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    do {
      if (*param_2 != '\0') {
        if (*param_2 < '\0') {
          iVar4 = 1;
          uVar3 = (uint)param_3;
          if (uVar3 == 0xffffffff) {
            uVar3 = 0xfffffffe;
          }
          goto LAB_18001902a;
        }
        break;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iVar4 = 0;
  uVar3 = (uint)param_3;
LAB_18001902a:
  puVar2 = (undefined1 *)*param_1;
  iVar1 = uVar3 + iVar4;
  *puVar2 = (char)((uint)iVar1 >> 0x18);
  puVar2[1] = (char)((uint)iVar1 >> 0x10);
  puVar2[3] = (char)iVar1;
  puVar2[2] = (char)((uint)iVar1 >> 8);
  puVar2 = (undefined1 *)(*param_1 + 4);
  *param_1 = (longlong)puVar2;
  if (iVar4 != 0) {
    *puVar2 = 0;
    *param_1 = *param_1 + 1;
    puVar2 = (undefined1 *)*param_1;
  }
  if (uVar3 != 0) {
    memcpy(puVar2,param_2,(ulonglong)uVar3);
    *param_1 = *param_1 + (ulonglong)uVar3;
  }
  return uVar3 == param_3;
}




bool FUN_1800190c0(longlong *param_1,void *param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = 0;
  *puVar1 = (char)(param_3 >> 0x18);
  puVar1[1] = (char)(param_3 >> 0x10);
  puVar1[2] = (char)(param_3 >> 8);
  puVar1[3] = (char)param_3;
  lVar2 = *param_1;
  *param_1 = lVar2 + 4;
  if ((int)param_3 != 0) {
    uVar3 = param_3 & 0xffffffff;
    memcpy((void *)(lVar2 + 4),param_2,param_3 & 0xffffffff);
    *param_1 = *param_1 + uVar3;
  }
  return uVar3 == param_3;
}




void FUN_180019150(longlong *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = (char)((uint)param_2 >> 0x18);
  puVar1[1] = (char)((uint)param_2 >> 0x10);
  puVar1[2] = (char)((uint)param_2 >> 8);
  puVar1[3] = (char)param_2;
  *param_1 = *param_1 + 4;
  return;
}




void FUN_180019180(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    if (*param_2 != 0) {
      (**(code **)(param_1 + 0x18))(*param_2,param_1);
    }
    (**(code **)(param_1 + 0x18))(param_2,param_1);
  }
  return;
}




void FUN_1800191d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(param_1 + 8))(0x18,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return;
  }
  return;
}




void FUN_180019200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180001690();
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0,&local_res18);
  return;
}




void libssh2_base64_decode
               (longlong param_1,longlong *param_2,undefined4 *param_3,byte *param_4,uint param_5)

{
  undefined4 local_res18 [4];
  
                    /* 0x19250  12  libssh2_base64_decode */
  FUN_180018350(param_1,param_2,(longlong *)local_res18,param_4,(ulonglong)param_5);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_res18[0];
  }
  return;
}




void FUN_180019280(ulonglong param_1,char *param_2,undefined8 *param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 auStackY_e8 [32];
  char local_a8;
  char *local_a0;
  char *local_98;
  undefined8 *local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  void *local_58;
  void *local_50;
  int local_48;
  undefined1 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_18003b280 ^ (ulonglong)auStackY_e8;
  iVar4 = *(int *)(param_1 + 0x11ba0);
  cVar1 = *param_2;
  puVar7 = (undefined8 *)0x0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  puVar11 = (undefined8 *)0x0;
  switch(iVar4) {
  case 0:
    if (((int)param_4 == -1) &&
       ((*(code **)(param_1 + 0x38) == (code *)0x0 ||
        (param_4 = param_1, iVar4 = (**(code **)(param_1 + 0x38))(param_1,param_2), iVar4 != 0)))) {
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      FUN_180018820(param_1,0xfffffffc,0x180031d08,param_4);
      goto LAB_18001948a;
    }
    *(undefined4 *)(param_1 + 0x11ba0) = 1;
LAB_18001937f:
    switch(cVar1) {
    case '\x01':
      if ((undefined8 *)0x4 < param_3) {
        local_98 = param_2 + 1;
        local_48 = 0;
        local_a0 = param_2;
        local_90 = param_3;
        FUN_180018b90((longlong *)&local_a0,&local_48);
        FUN_180018ad0((longlong *)&local_a0,&local_70,&local_78);
        FUN_180018ad0((longlong *)&local_a0,&local_80,&local_88);
        if (*(code **)(param_1 + 0x30) != (code *)0x0) {
          param_4 = local_78 & 0xffffffff;
          (**(code **)(param_1 + 0x30))(param_1,local_48,local_70);
        }
      }
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      *(undefined4 *)(param_1 + 600) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x11ba0) = 0;
      FUN_180018820(param_1,0xfffffff3,0x180031d20,param_4);
      goto LAB_18001948a;
    case '\x02':
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
        if (param_3 < (undefined8 *)0x2) {
          iVar4 = 0;
          pcVar10 = "";
        }
        else {
          iVar4 = (int)param_3 + -1;
          pcVar10 = param_2 + 1;
        }
        (**(code **)(param_1 + 0x20))(param_1,pcVar10,iVar4,param_1);
      }
      break;
    default:
      goto switchD_1800193a3_caseD_3;
    case '\x04':
      if ((undefined8 *)0x1 < param_3) {
        cVar1 = param_2[1];
        if ((undefined8 *)0x5 < param_3) {
          local_98 = param_2 + 2;
          local_a0 = param_2;
          local_90 = param_3;
          FUN_180018ad0((longlong *)&local_a0,&local_70,&local_78);
          FUN_180018ad0((longlong *)&local_a0,&local_80,&local_88);
        }
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(param_1,cVar1,local_70,local_78 & 0xffffffff);
        }
      }
      break;
    case '\a':
      if ((undefined8 *)0x4 < param_3) {
        local_98 = param_2 + 1;
        local_48 = 0;
        local_a0 = param_2;
        local_90 = param_3;
        uVar6 = FUN_180018b90((longlong *)&local_a0,&local_48);
        if ((int)uVar6 != 0) {
          uVar5 = FUN_180018820(param_1,0xfffffff2,0x180031d38,param_4);
          puVar7 = (undefined8 *)(ulonglong)uVar5;
          if (uVar5 != 0) goto LAB_18001964f;
        }
        do {
          if (local_48 == 0) break;
          local_48 = local_48 + -1;
          local_60 = 0;
          local_68 = 0;
          local_58 = (void *)0x0;
          local_50 = (void *)0x0;
          FUN_180018ad0((longlong *)&local_a0,(longlong *)&local_58,&local_60);
          FUN_180018ad0((longlong *)&local_a0,(longlong *)&local_50,&local_68);
          if ((local_60 == 0xf) && (iVar4 = memcmp(local_58,"server-sig-algs",0xf), iVar4 == 0)) {
            if (*(longlong *)(param_1 + 0x128) != 0) {
              (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x128),param_1);
            }
            pvVar8 = (void *)(**(code **)(param_1 + 8))(local_68 + 1,param_1);
            *(void **)(param_1 + 0x128) = pvVar8;
            if (pvVar8 == (void *)0x0) {
              uVar5 = FUN_180018820(param_1,0xfffffffa,0x180031d68,param_4);
              puVar7 = (undefined8 *)(ulonglong)uVar5;
            }
            else {
              memcpy(pvVar8,local_50,local_68);
              *(undefined1 *)(local_68 + *(longlong *)(param_1 + 0x128)) = 0;
            }
          }
        } while ((int)puVar7 == 0);
      }
LAB_18001964f:
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      *(undefined4 *)(param_1 + 0x11ba0) = 0;
      goto LAB_18001948a;
    case 'P':
      if (((((undefined8 *)0x4 < param_3) &&
           (uVar5 = FUN_180018ea0(param_2 + 1), uVar5 < 0xfffffffa)) &&
          ((undefined8 *)(ulonglong)(uVar5 + 6) <= param_3)) && (param_2[uVar5 + 5] != '\0'))
      goto switchD_1800192f7_caseD_f;
      break;
    case 'Z':
      if ((undefined8 *)0x10 < param_3) {
        if ((((undefined8 *)0x13 < param_3) && (iVar4 = FUN_180018ea0(param_2 + 1), iVar4 == 0xf))
           && (iVar4 = memcmp(param_2 + 5,"forwarded-tcpip",0xf), iVar4 == 0)) {
          *(undefined8 *)(param_1 + 0x11bb0) = 0;
          *(undefined8 *)(param_1 + 0x11bb8) = 0;
          *(undefined8 *)(param_1 + 0x11bc0) = 0;
          *(undefined8 *)(param_1 + 0x11bc8) = 0;
          *(undefined8 *)(param_1 + 0x11bd0) = 0;
          *(undefined8 *)(param_1 + 0x11bd8) = 0;
          *(undefined8 *)(param_1 + 0x11be0) = 0;
          *(undefined8 *)(param_1 + 0x11be8) = 0;
          *(undefined8 *)(param_1 + 0x11bf0) = 0;
          *(undefined8 *)(param_1 + 0x11bf8) = 0;
          *(undefined8 *)(param_1 + 0x11c00) = 0;
          *(undefined8 *)(param_1 + 0x11c08) = 0;
          *(undefined8 *)(param_1 + 0x11c10) = 0;
          goto LAB_180019aa2;
        }
        iVar4 = FUN_180018ea0(param_2 + 1);
        if (((iVar4 == 3) && (*(short *)(param_2 + 5) == 0x3178)) && (param_2[7] == '1')) {
          *(undefined8 *)(param_1 + 0x11c18) = 0;
          *(undefined8 *)(param_1 + 0x11c20) = 0;
          *(undefined8 *)(param_1 + 0x11c28) = 0;
          *(undefined8 *)(param_1 + 0x11c30) = 0;
          *(undefined8 *)(param_1 + 0x11c38) = 0;
          *(undefined8 *)(param_1 + 0x11c40) = 0;
          *(undefined8 *)(param_1 + 0x11c48) = 0;
          *(undefined8 *)(param_1 + 0x11c50) = 0;
          *(undefined8 *)(param_1 + 0x11c58) = 0;
          *(undefined8 *)(param_1 + 0x11c60) = 0;
          *(undefined8 *)(param_1 + 0x11c68) = 0;
          goto LAB_180019b03;
        }
        if ((((undefined8 *)0x1a < param_3) && (iVar4 = FUN_180018ea0(param_2 + 1), iVar4 == 0x16))
           && (iVar4 = memcmp(param_2 + 5,"auth-agent@openssh.com",0x16), iVar4 == 0)) {
          *(undefined8 *)(param_1 + 0x11c70) = 0;
          *(undefined8 *)(param_1 + 0x11c78) = 0;
          *(undefined8 *)(param_1 + 0x11c80) = 0;
          *(undefined8 *)(param_1 + 0x11c88) = 0;
          *(undefined8 *)(param_1 + 0x11c90) = 0;
          *(undefined8 *)(param_1 + 0x11c98) = 0;
          *(undefined8 *)(param_1 + 0x11ca0) = 0;
          *(undefined8 *)(param_1 + 0x11ca8) = 0;
          goto LAB_180019b68;
        }
      }
      goto LAB_180019b8c;
    case ']':
      if ((undefined8 *)0x8 < param_3) {
        iVar4 = FUN_180018ea0(param_2 + 5);
        iVar2 = FUN_180018ea0(param_2 + 1);
        puVar7 = FUN_180003b10(param_1,iVar2);
        if (puVar7 != (undefined8 *)0x0) {
          *(int *)(puVar7 + 7) = *(int *)(puVar7 + 7) + iVar4;
        }
      }
      break;
    case '^':
      goto switchD_1800193a3_caseD_5e;
    case '_':
      puVar7 = (undefined8 *)0x4;
switchD_1800193a3_caseD_5e:
      puVar11 = (undefined8 *)((longlong)puVar7 + 9);
      if (param_3 < puVar11) {
LAB_180019813:
        FUN_180018820(param_1,0xffffffe9,0x180031d88,param_4);
        break;
      }
      iVar4 = FUN_180018ea0(param_2 + 1);
      puVar7 = FUN_180003b10(param_1,iVar4);
      if (puVar7 == (undefined8 *)0x0) goto LAB_180019813;
      if ((*(char *)((longlong)puVar7 + 0x56) == '\x01') && (cVar1 == '_')) {
        (**(code **)(param_1 + 0x18))(param_2,param_1);
        uVar5 = *(uint *)((longlong)puVar7 + 0x4c);
        if ((ulonglong)uVar5 <= (ulonglong)((puVar7[0xc] - (longlong)puVar11) + (longlong)param_3))
        {
          param_3 = (undefined8 *)(((ulonglong)uVar5 - puVar7[0xc]) + (longlong)puVar11);
        }
        *(uint *)((longlong)puVar7 + 0x4c) = ((int)puVar11 - (int)param_3) + uVar5;
        *(undefined8 **)(param_1 + 0x11ba8) = puVar7;
switchD_1800192f7_caseD_b:
        *(undefined4 *)(param_1 + 0x11ba0) = 0xb;
        uVar5 = FUN_180004770(*(longlong *)(param_1 + 0x11ba8),(int)param_3 + -0xd,'\x01',
                              (undefined4 *)0x0);
joined_r0x00018001976c:
        if (uVar5 == 0xffffffdb) goto LAB_18001948a;
      }
      else {
        if ((ulonglong)*(uint *)(puVar7 + 10) < (ulonglong)((longlong)param_3 - (longlong)puVar11))
        {
          FUN_180018820(param_1,0xffffffe7,0x180031db0,param_4);
          param_3 = (undefined8 *)((ulonglong)*(uint *)(puVar7 + 10) + (longlong)puVar11);
        }
        uVar9 = puVar7[0xc];
        if (*(uint *)((longlong)puVar7 + 0x4c) <= uVar9) {
          FUN_180018820(param_1,0xffffffe8,0x180031df8,param_4);
          break;
        }
        *(undefined1 *)((longlong)puVar7 + 0x55) = 0;
        if ((ulonglong)*(uint *)((longlong)puVar7 + 0x4c) <
            (uVar9 - (longlong)puVar11) + (longlong)param_3) {
          FUN_180018820(param_1,0xffffffe8,0x180031e30,param_4);
          uVar9 = puVar7[0xc];
          param_3 = (undefined8 *)((*(uint *)((longlong)puVar7 + 0x4c) - uVar9) + (longlong)puVar11)
          ;
        }
        puVar7[0xc] = (uVar9 - (longlong)puVar11) + (longlong)param_3;
switchD_1800193a3_caseD_3:
        *(undefined4 *)(param_1 + 0x11ba0) = 3;
        puVar7 = puVar11;
LAB_180019be2:
        puVar11 = (undefined8 *)(**(code **)(param_1 + 8))(0x30,param_1);
        if (puVar11 == (undefined8 *)0x0) {
          (**(code **)(param_1 + 0x18))(param_2,param_1);
          *(undefined4 *)(param_1 + 0x11ba0) = 0;
          goto LAB_18001948a;
        }
        puVar11[3] = param_2;
        puVar11[4] = param_3;
        puVar11[5] = puVar7;
        FUN_180018d20((undefined8 *)(param_1 + 0x218),puVar11);
        iVar4 = 4;
LAB_180019c2f:
        if (((cVar1 == '\x14') && ((*(byte *)(param_1 + 0x80) & 1) == 0)) || (iVar4 == 5)) {
          *(undefined4 *)(param_1 + 0x11970) = 0;
          *(undefined8 *)(param_1 + 0x8b58) = 0;
          *(undefined4 *)(param_1 + 0x11ba0) = 0;
          *(undefined4 *)(param_1 + 0x11cb0) = 0;
          memset((void *)(param_1 + 0x115b8),0,0x298);
          uVar5 = FUN_18000fe20(param_1,1,(uint *)(param_1 + 0x115b8));
          goto joined_r0x00018001976c;
        }
      }
      goto LAB_180019481;
    case '`':
      if ((undefined8 *)0x4 < param_3) {
        iVar4 = FUN_180018ea0(param_2 + 1);
        puVar7 = FUN_180003b10(param_1,iVar4);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar7 + 0x55) = 1;
        }
      }
      break;
    case 'a':
      if ((undefined8 *)0x4 < param_3) {
        iVar4 = FUN_180018ea0(param_2 + 1);
        puVar7 = FUN_180003b10(param_1,iVar4);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined2 *)((longlong)puVar7 + 0x54) = 0x101;
      }
      (**(code **)(param_1 + 0x18))(param_2,param_1);
      *(undefined4 *)(param_1 + 0x11ba0) = 0;
      goto LAB_18001948a;
    case 'b':
      if ((undefined8 *)0x8 < param_3) {
        iVar4 = FUN_180018ea0(param_2 + 1);
        iVar2 = FUN_180018ea0(param_2 + 5);
        local_a8 = '\x01';
        if ((undefined8 *)(ulonglong)(iVar2 + 9U) < param_3) {
          local_a8 = param_2[iVar2 + 9U];
        }
        if ((iVar2 == 0xb) && ((undefined8 *)0x13 < param_3)) {
          if ((*(longlong *)(param_2 + 9) == 0x6174732d74697865) &&
             ((*(short *)(param_2 + 0x11) == 0x7574 && (param_2[0x13] == 's')))) {
            puVar7 = FUN_180003b10(param_1,iVar4);
            if ((puVar7 != (undefined8 *)0x0) && ((undefined8 *)0x18 < param_3)) {
              uVar3 = FUN_180018ea0(param_2 + 0x15);
              *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
            }
          }
          else if ((*(longlong *)(param_2 + 9) == 0x6769732d74697865) &&
                  ((((*(short *)(param_2 + 0x11) == 0x616e && (param_2[0x13] == 'l')) &&
                    (puVar7 = FUN_180003b10(param_1,iVar4), puVar7 != (undefined8 *)0x0)) &&
                   ((undefined8 *)0x18 < param_3)))) {
            uVar5 = FUN_180018ea0(param_2 + 0x15);
            uVar9 = (ulonglong)uVar5;
            if (uVar5 == 0xffffffff) {
              puVar7[5] = 0;
            }
            else {
              pvVar8 = (void *)(**(code **)(param_1 + 8))(uVar5 + 1,param_1);
              puVar7[5] = pvVar8;
              if (pvVar8 != (void *)0x0) {
                if ((undefined8 *)(uVar9 + 0x19) <= param_3) {
                  memcpy(pvVar8,param_2 + 0x19,uVar9);
                  *(undefined1 *)(uVar9 + puVar7[5]) = 0;
                }
                goto LAB_1800199a2;
              }
            }
            FUN_180018820(param_1,0xfffffffa,0x180031e70,param_4);
          }
        }
LAB_1800199a2:
        if (local_a8 != '\0') goto switchD_1800192f7_caseD_e;
      }
      goto LAB_1800199e5;
    }
LAB_180019478:
    (**(code **)(param_1 + 0x18))(param_2,param_1);
LAB_180019481:
    *(undefined4 *)(param_1 + 0x11ba0) = 0;
    goto LAB_18001948a;
  default:
    if (iVar4 == 1) goto LAB_18001937f;
    if (iVar4 == 3) goto LAB_180019be2;
    goto LAB_180019c2f;
  case 0xb:
    goto switchD_1800192f7_caseD_b;
  case 0xc:
LAB_180019aa2:
    *(undefined4 *)(param_1 + 0x11ba0) = 0xc;
    iVar4 = FUN_18001a740(param_1,(longlong)param_2,(ulonglong)param_3,(int *)(param_1 + 0x11bb0));
    break;
  case 0xd:
LAB_180019b03:
    *(undefined4 *)(param_1 + 0x11ba0) = 0xd;
    iVar4 = FUN_18001abc0(param_1,(longlong)param_2,(ulonglong)param_3,(int *)(param_1 + 0x11c18));
    break;
  case 0xe:
switchD_1800192f7_caseD_e:
    *(undefined4 *)(param_1 + 0x11ba0) = 0xe;
    uStack_44 = (undefined1)((uint)*(undefined4 *)(param_2 + 1) >> 0x18);
    local_48 = CONCAT31((int3)*(undefined4 *)(param_2 + 1),100);
    uVar5 = FUN_180026710(param_1,&local_48,5,(void *)0x0,0);
    if (uVar5 == 0xffffffdb) goto LAB_18001948a;
LAB_1800199e5:
    (**(code **)(param_1 + 0x18))(param_2,param_1);
    *(undefined4 *)(param_1 + 0x11ba0) = 0;
    goto LAB_18001948a;
  case 0xf:
switchD_1800192f7_caseD_f:
    *(undefined4 *)(param_1 + 0x11ba0) = 0xf;
    uVar5 = FUN_180026710(param_1,"RData too short extracting channel",1,(void *)0x0,0);
    if (uVar5 == 0xffffffdb) goto LAB_18001948a;
    goto LAB_180019478;
  case 0x12:
LAB_180019b68:
    *(undefined4 *)(param_1 + 0x11ba0) = 0x12;
    iVar4 = FUN_18001a470(param_1,(longlong)param_2,param_3,(int *)(param_1 + 0x11c70));
  }
  if (iVar4 != -0x25) {
LAB_180019b8c:
    (**(code **)(param_1 + 0x18))(param_2,param_1);
    *(undefined4 *)(param_1 + 0x11ba0) = 0;
  }
LAB_18001948a:
  FUN_18002af30(local_40 ^ (ulonglong)auStackY_e8);
  return;
}




undefined8
FUN_180019d90(longlong param_1,char param_2,undefined8 *param_3,longlong *param_4,int param_5,
             void *param_6,size_t param_7)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180018d50(param_1 + 0x218);
  if (plVar3 != (longlong *)0x0) {
    do {
      pcVar1 = (char *)plVar3[3];
      if (((*pcVar1 == param_2) && ((longlong)param_5 + param_7 <= (ulonglong)plVar3[4])) &&
         ((param_6 == (void *)0x0 || (iVar2 = memcmp(pcVar1 + param_5,param_6,param_7), iVar2 == 0))
         )) {
        *param_3 = pcVar1;
        *param_4 = plVar3[4];
        FUN_180018d80(plVar3);
        (**(code **)(param_1 + 0x18))(plVar3,param_1);
        return 0;
      }
      plVar3 = (longlong *)FUN_180018d70(plVar3);
    } while (plVar3 != (longlong *)0x0);
  }
  return 0xffffffff;
}




undefined8
FUN_180019e70(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,int param_5,
             void *param_6,size_t param_7)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(char *)(param_2 + uVar5) != '\0');
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      cVar1 = *(char *)(uVar6 + param_2);
      for (plVar4 = (longlong *)FUN_180018d50(param_1 + 0x218); plVar4 != (longlong *)0x0;
          plVar4 = (longlong *)FUN_180018d70(plVar4)) {
        pcVar2 = (char *)plVar4[3];
        if (((*pcVar2 == cVar1) && (param_7 + (longlong)param_5 <= (ulonglong)plVar4[4])) &&
           ((param_6 == (void *)0x0 ||
            (iVar3 = memcmp(pcVar2 + param_5,param_6,param_7), iVar3 == 0)))) {
          *param_3 = pcVar2;
          *param_4 = plVar4[4];
          FUN_180018d80(plVar4);
          (**(code **)(param_1 + 0x18))(plVar4,param_1);
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return 0xffffffff;
}




void FUN_180019fc0(ulonglong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_168 [32];
  char local_148 [254];
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_18003b280 ^ (ulonglong)auStack_168;
  if (*param_2 == 0) {
    cVar2 = '\x01';
    pcVar5 = local_148;
    do {
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
      cVar2 = cVar2 + '\x01';
    } while (cVar2 != -1);
    local_4a = 0;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar6 = uVar7 + 1;
      lVar1 = uVar7 + 1;
      uVar7 = uVar6;
    } while (local_148[lVar1] != '\0');
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        cVar2 = local_148[uVar7];
        for (plVar4 = (longlong *)FUN_180018d50(param_1 + 0x218); plVar4 != (longlong *)0x0;
            plVar4 = (longlong *)FUN_180018d70(plVar4)) {
          pcVar5 = (char *)plVar4[3];
          if (*pcVar5 == cVar2) {
            FUN_180018d80(plVar4);
            (**(code **)(param_1 + 0x18))(plVar4,param_1);
            (**(code **)(param_1 + 0x18))(pcVar5,param_1);
            goto LAB_18001a0e8;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    *param_2 = 2;
  }
  iVar3 = *(int *)(param_1 + 600);
  while( true ) {
    if ((iVar3 != 0) || (iVar3 = FUN_1800261c0(param_1), iVar3 == -0x25)) goto LAB_18001a0e8;
    if (iVar3 < 0) break;
    if (iVar3 != 0) {
      for (plVar4 = (longlong *)FUN_180018d50(param_1 + 0x218); plVar4 != (longlong *)0x0;
          plVar4 = (longlong *)FUN_180018d70(plVar4)) {
        pcVar5 = (char *)plVar4[3];
        if (*pcVar5 == (char)iVar3) {
          FUN_180018d80(plVar4);
          (**(code **)(param_1 + 0x18))(plVar4,param_1);
          (**(code **)(param_1 + 0x18))(pcVar5,param_1);
          *param_2 = 0;
          goto LAB_18001a0e8;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 600);
  }
  *param_2 = 0;
LAB_18001a0e8:
  FUN_18002af30(local_48 ^ (ulonglong)auStack_168);
  return;
}




undefined8
FUN_18001a170(ulonglong param_1,byte param_2,undefined8 *param_3,longlong *param_4,int param_5,
             void *param_6,size_t param_7,longlong param_8)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_8 + 8) == 0) {
    for (plVar4 = (longlong *)FUN_180018d50(param_1 + 0x218); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)FUN_180018d70(plVar4)) {
      pbVar1 = (byte *)plVar4[3];
      if (((*pbVar1 == param_2) && (param_7 + (longlong)param_5 <= (ulonglong)plVar4[4])) &&
         ((param_6 == (void *)0x0 || (iVar2 = memcmp(pbVar1 + param_5,param_6,param_7), iVar2 == 0))
         )) {
        *param_3 = pbVar1;
        *param_4 = plVar4[4];
        FUN_180018d80(plVar4);
        (**(code **)(param_1 + 0x18))(plVar4,param_1);
        return 0;
      }
    }
    _Var5 = _time64((__time64_t *)0x0);
    *(__time64_t *)(param_8 + 8) = _Var5;
  }
  iVar2 = *(int *)(param_1 + 600);
  while( true ) {
    if (iVar2 != 0) {
      return 0xfffffff3;
    }
    uVar6 = FUN_1800261c0(param_1);
    uVar3 = (uint)uVar6;
    if (uVar3 == 0xffffffdb) {
      return 0xffffffdb;
    }
    if ((int)uVar3 < 0) break;
    if (uVar3 == param_2) {
      uVar6 = FUN_180019d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      break;
    }
    if (uVar3 == 0) {
      _Var5 = _time64((__time64_t *)0x0);
      if ((*(int *)(param_1 + 0x11f68) - (int)_Var5) + *(int *)(param_8 + 8) < 1) {
        *(undefined8 *)(param_8 + 8) = 0;
        return 0xfffffff7;
      }
      return 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 600);
  }
  *(undefined8 *)(param_8 + 8) = 0;
  return uVar6;
}




ulonglong FUN_18001a320(ulonglong param_1,char *param_2,undefined8 *param_3,longlong *param_4,
                       int param_5,void *param_6,size_t param_7,longlong *param_8)

{
  int iVar1;
  uint _Val;
  undefined8 uVar2;
  __time64_t _Var3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_180019e70(param_1,(longlong)param_2,param_3,param_4,param_5,param_6,param_7);
  if ((int)uVar2 == 0) {
    *param_8 = 0;
    uVar5 = 0;
  }
  else {
    if (*param_8 == 0) {
      _Var3 = _time64((__time64_t *)0x0);
      *param_8 = _Var3;
    }
    iVar1 = *(int *)(param_1 + 600);
    while (iVar1 != -1) {
      _Val = FUN_1800261c0(param_1);
      if (((_Val + 0x80000000 & 0x80000000) == 0) && (_Val != 0xffffffdb)) {
        uVar5 = (ulonglong)_Val;
        goto LAB_18001a407;
      }
      if ((int)_Val < 1) {
        _Var3 = _time64((__time64_t *)0x0);
        if ((*(int *)(param_1 + 0x11f68) - (int)_Var3) + (int)*param_8 < 1) {
          uVar5 = 0xfffffff7;
          goto LAB_18001a407;
        }
        if (_Val == 0xffffffdb) {
          return 0xffffffdb;
        }
      }
      pcVar4 = strchr(param_2,_Val);
      if (pcVar4 != (char *)0x0) {
        uVar5 = FUN_180019e70(param_1,(longlong)param_2,param_3,param_4,param_5,param_6,param_7);
        goto LAB_18001a407;
      }
      iVar1 = *(int *)(param_1 + 600);
    }
    uVar5 = 0xfffffff3;
LAB_18001a407:
    *param_8 = 0;
  }
  return uVar5;
}




undefined4 FUN_18001a470(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *_Dst;
  void *_Dst_00;
  int *piVar5;
  undefined8 uVar6;
  undefined1 *local_res8;
  
  iVar2 = *param_4;
  _Dst = *(undefined8 **)(param_4 + 0xe);
  uVar4 = 2;
  piVar5 = param_4;
  if (iVar2 == 0) {
    iVar2 = FUN_180018ea0((undefined1 *)(param_2 + 0x1b));
    param_4[0xb] = iVar2;
    iVar2 = FUN_180018ea0((undefined1 *)(param_2 + 0x1f));
    param_4[0xc] = iVar2;
    iVar2 = FUN_180018ea0((undefined1 *)(param_2 + 0x23));
    param_4[0xd] = iVar2;
    iVar2 = 1;
    *param_4 = 1;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
LAB_18001a68d:
        uVar6 = 0;
        uVar3 = FUN_180026710(param_1,param_4 + 1,0x11,(void *)0x0,0);
        if (uVar3 == 0xffffffdb) {
          return 0xffffffdb;
        }
        if (uVar3 == 0) {
          FUN_180018d20((undefined8 *)(param_1 + 0x228),_Dst);
          *(undefined8 *)(param_1 + 0x8b58) = 0;
          *(undefined4 *)(param_1 + 0x11cb0) = 0;
          lVar1 = _Dst[0xd];
          (**(code **)(lVar1 + 0x48))(lVar1,_Dst,lVar1);
          *param_4 = 0;
          return 0;
        }
        *param_4 = 0;
        uVar4 = FUN_180018820(param_1,0xfffffff9,0x180031bb0,uVar6);
        return uVar4;
      }
      goto LAB_18001a518;
    }
    _Dst = (undefined8 *)(**(code **)(param_1 + 8))(0x310);
    *(undefined8 **)(param_4 + 0xe) = _Dst;
    if (_Dst == (undefined8 *)0x0) {
      FUN_180018820(param_1,0xfffffffa,0x180031c98,piVar5);
    }
    else {
      memset(_Dst,0,0x310);
      _Dst[0xd] = param_1;
      *(undefined4 *)(_Dst + 4) = 10;
      _Dst_00 = (void *)(**(code **)(param_1 + 8))(0xb,param_1);
      _Dst[3] = _Dst_00;
      if (_Dst_00 != (void *)0x0) {
        memcpy(_Dst_00,"auth agent",(ulonglong)(*(int *)(_Dst + 4) + 1));
        *(int *)((longlong)_Dst + 0x44) = param_4[0xb];
        *(undefined4 *)(_Dst + 9) = 0x200000;
        *(undefined4 *)((longlong)_Dst + 0x4c) = 0x200000;
        *(undefined4 *)(_Dst + 10) = 0x8000;
        uVar3 = FUN_180003ba0(param_1);
        *(uint *)(_Dst + 6) = uVar3;
        *(int *)((longlong)_Dst + 0x34) = param_4[0xc];
        *(int *)(_Dst + 7) = param_4[0xc];
        *(int *)((longlong)_Dst + 0x3c) = param_4[0xd];
        *(undefined1 *)(param_4 + 1) = 0x5b;
        local_res8 = (undefined1 *)((longlong)param_4 + 5);
        FUN_180019150((longlong *)&local_res8,*(undefined4 *)((longlong)_Dst + 0x44));
        FUN_180019150((longlong *)&local_res8,*(undefined4 *)(_Dst + 6));
        FUN_180019150((longlong *)&local_res8,*(undefined4 *)(_Dst + 9));
        FUN_180019150((longlong *)&local_res8,*(undefined4 *)(_Dst + 10));
        *param_4 = 2;
        goto LAB_18001a68d;
      }
      FUN_180018820(param_1,0xfffffffa,0x180031c98,piVar5);
      (**(code **)(param_1 + 0x18))(_Dst,param_1);
    }
  }
  uVar4 = 4;
LAB_18001a518:
  *(undefined1 *)(param_4 + 1) = 0x5c;
  local_res8 = (undefined1 *)((longlong)param_4 + 5);
  FUN_180019150((longlong *)&local_res8,param_4[0xb]);
  FUN_180019150((longlong *)&local_res8,uVar4);
  FUN_1800190c0((longlong *)&local_res8,"Auth Agent unavailable",0x16);
  FUN_180018d00(local_res8,0);
  uVar6 = 0;
  uVar3 = FUN_180026710(param_1,param_4 + 1,0x28,(void *)0x0,0);
  if (uVar3 == 0xffffffdb) {
    return 0xffffffdb;
  }
  *param_4 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_180018820(param_1,uVar3,0x180031bf8,uVar6);
  return uVar4;
}




undefined4 FUN_18001a740(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *_Dst;
  int *piVar9;
  undefined1 *local_res8;
  ulonglong local_res20;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  piVar9 = param_4;
  puVar5 = (undefined8 *)FUN_180018d50(param_1 + 0x240);
  if (*param_4 == 0) {
    local_res20 = 0;
    local_58 = param_2;
    local_48 = param_3;
    if (param_3 < 0x14) {
      uVar2 = FUN_180018820(param_1,0xffffffd7,0x18002dbd8,piVar9);
      return uVar2;
    }
    local_50 = param_2 + 0x14;
    uVar6 = FUN_180018b90(&local_58,param_4 + 0x10);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031a78,piVar9);
      return uVar2;
    }
    uVar6 = FUN_180018b90(&local_58,param_4 + 0x11);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031aa0,piVar9);
      return uVar2;
    }
    uVar6 = FUN_180018b90(&local_58,param_4 + 0x12);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031ac8,piVar9);
      return uVar2;
    }
    uVar6 = FUN_180018ad0(&local_58,(longlong *)(param_4 + 0xc),&local_res20);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031af0,piVar9);
      return uVar2;
    }
    param_4[0x15] = (int)local_res20;
    uVar6 = FUN_180018b90(&local_58,param_4 + 0x13);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031b10,piVar9);
      return uVar2;
    }
    uVar6 = FUN_180018ad0(&local_58,(longlong *)(param_4 + 0xe),&local_res20);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031b30,piVar9);
      return uVar2;
    }
    param_4[0x16] = (int)local_res20;
    uVar6 = FUN_180018b90(&local_58,param_4 + 0x14);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_180018820(param_1,0xffffffda,0x180031b50,piVar9);
      return uVar2;
    }
    *param_4 = 1;
  }
  else {
    uVar2 = 1;
    if (*param_4 == 3) goto LAB_18001ab21;
  }
  uVar2 = 1;
  for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)FUN_180018d70(puVar5)) {
    if (*(int *)(puVar5 + 5) == param_4[0x13]) {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (*(char *)((longlong)puVar5[4] + uVar7) != '\0');
      if ((uVar7 == (uint)param_4[0x15]) &&
         (iVar3 = memcmp((void *)puVar5[4],*(void **)(param_4 + 0xc),(ulonglong)(uint)param_4[0x15])
         , iVar3 == 0)) {
        iVar3 = *param_4;
        piVar1 = param_4 + 0x18;
        piVar1[0] = 0;
        piVar1[1] = 0;
        if (iVar3 == 1) {
          if ((*(int *)((longlong)puVar5 + 0x44) == 0) ||
             (*(int *)(puVar5 + 8) < *(int *)((longlong)puVar5 + 0x44))) {
            pvVar8 = FUN_180018690(param_1,0x310);
            if (pvVar8 == (void *)0x0) {
              FUN_180018820(param_1,0xfffffffa,0x180031b70,piVar9);
            }
            else {
              *(void **)piVar1 = pvVar8;
              *(longlong *)((longlong)pvVar8 + 0x68) = param_1;
              *(undefined4 *)((longlong)pvVar8 + 0x20) = 0xf;
              _Dst = (void *)(**(code **)(param_1 + 8))(0x10,param_1);
              *(void **)((longlong)pvVar8 + 0x18) = _Dst;
              if (_Dst != (void *)0x0) {
                memcpy(_Dst,"forwarded-tcpip",(ulonglong)(*(int *)((longlong)pvVar8 + 0x20) + 1));
                *(int *)((longlong)pvVar8 + 0x44) = param_4[0x10];
                *(undefined4 *)((longlong)pvVar8 + 0x48) = 0x200000;
                *(undefined4 *)((longlong)pvVar8 + 0x4c) = 0x200000;
                *(undefined4 *)((longlong)pvVar8 + 0x50) = 0x8000;
                uVar4 = FUN_180003ba0(param_1);
                *(uint *)((longlong)pvVar8 + 0x30) = uVar4;
                *(int *)((longlong)pvVar8 + 0x34) = param_4[0x11];
                *(int *)((longlong)pvVar8 + 0x38) = param_4[0x11];
                *(int *)((longlong)pvVar8 + 0x3c) = param_4[0x12];
                *(undefined1 *)(param_4 + 1) = 0x5b;
                local_res8 = (undefined1 *)((longlong)param_4 + 5);
                FUN_180019150((longlong *)&local_res8,*(undefined4 *)((longlong)pvVar8 + 0x44));
                FUN_180019150((longlong *)&local_res8,*(undefined4 *)((longlong)pvVar8 + 0x30));
                FUN_180019150((longlong *)&local_res8,*(undefined4 *)((longlong)pvVar8 + 0x48));
                FUN_180019150((longlong *)&local_res8,*(undefined4 *)((longlong)pvVar8 + 0x50));
                *param_4 = 2;
                goto LAB_18001aa72;
              }
              FUN_180018820(param_1,0xfffffffa,0x180031b70,piVar9);
              (**(code **)(param_1 + 0x18))(pvVar8,param_1);
            }
          }
          uVar2 = 4;
          break;
        }
        if (iVar3 == 2) {
LAB_18001aa72:
          uVar6 = 0;
          uVar4 = FUN_180026710(param_1,param_4 + 1,0x11,(void *)0x0,0);
          if (uVar4 == 0xffffffdb) goto LAB_18001ab87;
          if (uVar4 != 0) {
            *param_4 = 0;
            uVar2 = FUN_180018820(param_1,uVar4,0x180031bb0,uVar6);
            return uVar2;
          }
          if (*(undefined8 **)(param_4 + 0x18) != (undefined8 *)0x0) {
            FUN_180018d20(puVar5 + 6,*(undefined8 **)(param_4 + 0x18));
            *(int *)(puVar5 + 8) = *(int *)(puVar5 + 8) + 1;
          }
          *param_4 = 0;
          goto LAB_18001aac8;
        }
      }
    }
  }
  *param_4 = 3;
LAB_18001ab21:
  *(undefined1 *)(param_4 + 1) = 0x5c;
  local_res8 = (undefined1 *)((longlong)param_4 + 5);
  FUN_180019150((longlong *)&local_res8,param_4[0x10]);
  FUN_180019150((longlong *)&local_res8,uVar2);
  FUN_1800190c0((longlong *)&local_res8,"Forward not requested",0x15);
  FUN_180018d00(local_res8,0);
  uVar6 = 0;
  uVar4 = FUN_180026710(param_1,param_4 + 1,0x26,(void *)0x0,0);
  if (uVar4 == 0xffffffdb) {
LAB_18001ab87:
    uVar2 = 0xffffffdb;
  }
  else {
    *param_4 = 0;
    if (uVar4 == 0) {
LAB_18001aac8:
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_180018820(param_1,uVar4,0x180031bf8,uVar6);
    }
  }
  return uVar2;
}




undefined4 FUN_18001abc0(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *_Dst;
  int *piVar7;
  undefined1 *local_res20;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  iVar2 = *param_4;
  puVar6 = *(undefined8 **)(param_4 + 0x14);
  uVar4 = 2;
  piVar7 = param_4;
  if (iVar2 == 0) {
    local_48 = 0;
    local_40 = param_2;
    local_30 = param_3;
    if (param_3 < 8) {
      FUN_180018820(param_1,0xffffffde,0x180031c18,param_4);
      goto LAB_18001ad4e;
    }
    local_38 = param_2 + 8;
    uVar5 = FUN_180018b90(&local_40,param_4 + 0xe);
    if ((int)uVar5 != 0) {
      FUN_180018820(param_1,0xffffffde,0x180031c30,piVar7);
      goto LAB_18001ad4e;
    }
    uVar5 = FUN_180018b90(&local_40,param_4 + 0xf);
    if ((int)uVar5 != 0) {
      FUN_180018820(param_1,0xffffffde,0x180031c50,piVar7);
      goto LAB_18001ad4e;
    }
    uVar5 = FUN_180018b90(&local_40,param_4 + 0x10);
    if ((int)uVar5 != 0) {
      FUN_180018820(param_1,0xffffffde,0x180031c50,piVar7);
      goto LAB_18001ad4e;
    }
    uVar5 = FUN_180018ad0(&local_40,(longlong *)(param_4 + 0xc),&local_48);
    if ((int)uVar5 != 0) {
      FUN_180018820(param_1,0xffffffde,0x180031c68,piVar7);
      goto LAB_18001ad4e;
    }
    param_4[0x12] = (int)local_48;
    uVar5 = FUN_180018b90(&local_40,param_4 + 0x11);
    if ((int)uVar5 != 0) {
      FUN_180018820(param_1,0xffffffde,0x180031c80,piVar7);
      goto LAB_18001ad4e;
    }
    iVar2 = 1;
    *param_4 = 1;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
LAB_18001aea9:
        uVar5 = 0;
        uVar3 = FUN_180026710(param_1,param_4 + 1,0x11,(void *)0x0,0);
        if (uVar3 == 0xffffffdb) {
          return 0xffffffdb;
        }
        if (uVar3 == 0) {
          FUN_180018d20((undefined8 *)(param_1 + 0x228),puVar6);
          lVar1 = puVar6[0xd];
          (**(code **)(lVar1 + 0x40))
                    (lVar1,puVar6,*(undefined8 *)(param_4 + 0xc),param_4[0x11],lVar1);
          *param_4 = 0;
          return 0;
        }
        *param_4 = 0;
        uVar4 = FUN_180018820(param_1,0xfffffff9,0x180031bb0,uVar5);
        return uVar4;
      }
      goto LAB_18001ad4e;
    }
    puVar6 = (undefined8 *)FUN_180018690(param_1,0x310);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_180018820(param_1,0xfffffffa,0x180031c98,piVar7);
    }
    else {
      puVar6[0xd] = param_1;
      *(undefined4 *)(puVar6 + 4) = 3;
      _Dst = (void *)(**(code **)(param_1 + 8))(4,param_1);
      puVar6[3] = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,&DAT_180031cc0,(ulonglong)(*(int *)(puVar6 + 4) + 1));
        *(int *)((longlong)puVar6 + 0x44) = param_4[0xe];
        *(undefined4 *)(puVar6 + 9) = 0x200000;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x200000;
        *(undefined4 *)(puVar6 + 10) = 0x8000;
        uVar3 = FUN_180003ba0(param_1);
        *(uint *)(puVar6 + 6) = uVar3;
        *(int *)((longlong)puVar6 + 0x34) = param_4[0xf];
        *(int *)(puVar6 + 7) = param_4[0xf];
        *(int *)((longlong)puVar6 + 0x3c) = param_4[0x10];
        *(undefined1 *)(param_4 + 1) = 0x5b;
        local_res20 = (undefined1 *)((longlong)param_4 + 5);
        FUN_180019150((longlong *)&local_res20,*(undefined4 *)((longlong)puVar6 + 0x44));
        FUN_180019150((longlong *)&local_res20,*(undefined4 *)(puVar6 + 6));
        FUN_180019150((longlong *)&local_res20,*(undefined4 *)(puVar6 + 9));
        FUN_180019150((longlong *)&local_res20,*(undefined4 *)(puVar6 + 10));
        *param_4 = 2;
        goto LAB_18001aea9;
      }
      FUN_180018820(param_1,0xfffffffa,0x180031c98,piVar7);
      (**(code **)(param_1 + 0x18))(puVar6,param_1);
    }
  }
  uVar4 = 4;
LAB_18001ad4e:
  *(undefined1 *)(param_4 + 1) = 0x5c;
  local_res20 = (undefined1 *)((longlong)param_4 + 5);
  FUN_180019150((longlong *)&local_res20,param_4[0xe]);
  FUN_180019150((longlong *)&local_res20,uVar4);
  FUN_1800190c0((longlong *)&local_res20,"X11 Forward Unavailable",0x17);
  FUN_180018d00(local_res20,0);
  uVar5 = 0;
  uVar3 = FUN_180026710(param_1,param_4 + 1,0x28,(void *)0x0,0);
  if (uVar3 == 0xffffffdb) {
    return 0xffffffdb;
  }
  *param_4 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_180018820(param_1,uVar3,0x180031bf8,uVar5);
  return uVar4;
}




void FUN_18001af50(longlong param_1,undefined1 *param_2,FILE *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong lVar5;
  size_t _Size;
  byte *pbVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 auStackY_118 [32];
  char acStack_d9 [129];
  ulonglong local_58;
  size_t sVar6;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStackY_118;
  pbVar4 = (byte *)0x0;
  pbVar9 = (byte *)0x0;
  puVar8 = param_4;
  do {
    acStack_d9[1] = '\0';
    pcVar3 = fgets(acStack_d9 + 1,0x80,param_3);
    if (pcVar3 == (char *)0x0) goto LAB_18001b1ba;
    if (acStack_d9[1] != '\0') {
      lVar1 = -1;
      do {
        lVar5 = lVar1;
        lVar1 = lVar5 + 1;
      } while (acStack_d9[lVar5 + 2] != '\0');
      if ((lVar5 + 1 != 0) && (acStack_d9[lVar5 + 1] == '\n')) {
        acStack_d9[lVar5 + 1] = '\0';
      }
      if (acStack_d9[1] != '\0') {
        lVar1 = -1;
        do {
          lVar5 = lVar1;
          lVar1 = lVar5 + 1;
        } while (acStack_d9[lVar5 + 2] != '\0');
        if ((lVar5 + 1 != 0) && (acStack_d9[lVar5 + 1] == '\r')) {
          acStack_d9[lVar5 + 1] = '\0';
        }
      }
    }
    iVar2 = strcmp(acStack_d9 + 1,"-----BEGIN OPENSSH PRIVATE KEY-----");
  } while (iVar2 != 0);
  pcVar3 = fgets(acStack_d9 + 1,0x80,param_3);
  if (pcVar3 != (char *)0x0) {
    pbVar7 = pbVar4;
    if (acStack_d9[1] != '\0') {
      lVar1 = -1;
      do {
        lVar5 = lVar1;
        lVar1 = lVar5 + 1;
      } while (acStack_d9[lVar5 + 2] != '\0');
      if ((lVar5 + 1 != 0) && (acStack_d9[lVar5 + 1] == '\n')) {
        acStack_d9[lVar5 + 1] = '\0';
      }
      pbVar7 = pbVar9;
      if (acStack_d9[1] != '\0') {
        lVar1 = -1;
        do {
          lVar5 = lVar1;
          lVar1 = lVar5 + 1;
        } while (acStack_d9[lVar5 + 2] != '\0');
        if ((lVar5 + 1 != 0) && (pbVar4 = (byte *)0x0, acStack_d9[lVar5 + 1] == '\r')) {
          acStack_d9[lVar5 + 1] = '\0';
        }
      }
    }
    do {
      pbVar9 = pbVar7;
      if (acStack_d9[1] != '\0') {
        sVar6 = 0xffffffffffffffff;
        do {
          _Size = sVar6 + 1;
          lVar1 = sVar6 + 2;
          sVar6 = _Size;
        } while (acStack_d9[lVar1] != '\0');
        pbVar9 = pbVar7 + _Size;
        if (pbVar4 == (byte *)0x0) {
          pbVar4 = (byte *)(**(code **)(param_1 + 8))(pbVar9,param_1);
        }
        else {
          pbVar4 = (byte *)(**(code **)(param_1 + 0x10))(pbVar4,pbVar9,param_1);
        }
        if (pbVar4 == (byte *)0x0) {
          FUN_180018820(param_1,0xfffffffa,0x180031eb8,puVar8);
          goto LAB_18001b1ba;
        }
        memcpy(pbVar4 + (longlong)pbVar7,acStack_d9 + 1,_Size);
      }
      acStack_d9[1] = '\0';
      pcVar3 = fgets(acStack_d9 + 1,0x80,param_3);
      if (pcVar3 == (char *)0x0) goto LAB_18001b1ba;
      if (acStack_d9[1] != '\0') {
        lVar1 = -1;
        do {
          lVar5 = lVar1;
          lVar1 = lVar5 + 1;
        } while (acStack_d9[lVar5 + 2] != '\0');
        if ((lVar5 + 1 != 0) && (acStack_d9[lVar5 + 1] == '\n')) {
          acStack_d9[lVar5 + 1] = '\0';
        }
        if (acStack_d9[1] != '\0') {
          lVar1 = -1;
          do {
            lVar5 = lVar1;
            lVar1 = lVar5 + 1;
          } while (acStack_d9[lVar5 + 2] != '\0');
          if ((lVar5 + 1 != 0) && (acStack_d9[lVar5 + 1] == '\r')) {
            acStack_d9[lVar5 + 1] = '\0';
          }
        }
      }
      iVar2 = strcmp(acStack_d9 + 1,"-----END OPENSSH PRIVATE KEY-----");
      pbVar7 = pbVar9;
    } while (iVar2 != 0);
    if (pbVar4 != (byte *)0x0) {
      FUN_18001b200(param_1,param_2,pbVar4,(ulonglong)pbVar9,param_4);
      pbVar7 = pbVar4;
      for (; pbVar9 != (byte *)0x0; pbVar9 = pbVar9 + -1) {
        *pbVar7 = 0;
        pbVar7 = pbVar7 + 1;
      }
      (**(code **)(param_1 + 0x18))(pbVar4,param_1);
    }
  }
LAB_18001b1ba:
  FUN_18002af30(local_58 ^ (ulonglong)auStackY_118);
  return;
}




/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18001b200(longlong param_1,undefined1 *param_2,byte *param_3,ulonglong param_4,
                       undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  char *pcVar18;
  size_t sVar19;
  ulonglong uVar20;
  longlong lVar21;
  size_t _Size;
  undefined1 *local_110;
  ulonglong local_108;
  int local_100;
  int local_fc;
  uint local_f8 [2];
  byte local_f0 [8];
  void *local_e8;
  undefined1 *local_e0;
  char *local_d8;
  void *local_d0;
  void *local_c8;
  size_t local_c0;
  int local_b8 [4];
  int local_a8 [2];
  void *local_a0;
  longlong local_98;
  undefined1 *local_90;
  ulonglong local_88;
  char *local_80;
  char *local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  byte *local_58;
  void *local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  puVar16 = (undefined8 *)0x0;
  local_e8 = (void *)0x0;
  local_98 = 0;
  local_68 = 0;
  local_a0 = (void *)0x0;
  local_50 = (void *)0x0;
  local_f8[0] = 0;
  local_110 = (undefined1 *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
  local_d8 = (char *)0x0;
  local_88 = 0;
  local_100 = 0;
  local_fc = 0;
  local_60 = 0;
  local_108 = 0;
  local_58 = (byte *)0x0;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar6 = FUN_180018350(param_1,(longlong *)&local_d8,(longlong *)&local_88,param_3,param_4);
  if ((int)uVar6 != 0) {
    puVar16 = (undefined8 *)0xffffffffffffffff;
    goto LAB_18001b9d1;
  }
  local_80 = local_d8;
  local_78 = local_d8;
  local_70 = local_88;
  if (local_88 < 0xe) {
    pcVar18 = "key too short";
  }
  else {
    iVar1 = strncmp(local_d8,"openssh-key-v1",0xe);
    if (iVar1 == 0) {
      local_78 = local_78 + 0xf;
      uVar6 = FUN_180018ad0((longlong *)&local_80,(longlong *)&local_e8,&local_108);
      if (((int)uVar6 == 0) && (local_108 != 0)) {
        uVar6 = FUN_180018ad0((longlong *)&local_80,&local_98,&local_108);
        if (((int)uVar6 == 0) && (local_108 != 0)) {
          uVar6 = FUN_180018ad0((longlong *)&local_80,&local_68,&local_60);
          if ((int)uVar6 == 0) {
            lVar21 = -1;
            local_48 = local_68;
            local_40 = local_68;
            local_38 = local_60;
            puVar15 = puVar16;
            puVar14 = puVar16;
            if (param_2 == (undefined1 *)0x0) {
LAB_18001b3b1:
              do {
                puVar12 = (undefined8 *)((longlong)puVar15 + 1);
                if (*(char *)((longlong)local_e8 + (longlong)puVar15) !=
                    *(char *)(puVar15 + 0x30005d09)) {
                  puVar16 = (undefined8 *)0xffffffd0;
                  goto LAB_18001b9d1;
                }
                puVar15 = puVar12;
              } while (puVar12 != (undefined8 *)0x5);
            }
            else {
              lVar7 = -1;
              do {
                lVar7 = lVar7 + 1;
              } while (param_2[lVar7] != '\0');
              if (lVar7 == 0) goto LAB_18001b3b1;
            }
            do {
              param_3 = &DAT_180031f60;
              puVar13 = (undefined8 *)((longlong)puVar14 + 1);
              puVar12 = puVar16;
              puVar15 = puVar16;
              if (*(char *)(local_98 + (longlong)puVar14) != *(char *)(puVar14 + 0x30005d09))
              goto LAB_18001b3f0;
              puVar14 = puVar13;
            } while (puVar13 != (undefined8 *)0x5);
            goto LAB_18001b410;
          }
          pcVar18 = "kdf is missing";
        }
        else {
          pcVar18 = "kdfname is missing";
        }
      }
      else {
        pcVar18 = "ciphername is missing";
      }
    }
    else {
      pcVar18 = "key auth magic mismatch";
    }
  }
  goto LAB_18001b9c2;
  while (puVar12 = puVar14, puVar14 != (undefined8 *)0x7) {
LAB_18001b3f0:
    puVar14 = (undefined8 *)((longlong)puVar12 + 1);
    if (*(char *)(local_98 + (longlong)puVar12) != *(char *)(puVar12 + 0x300063ec)) {
      pcVar18 = "unknown cipher";
      goto LAB_18001b9c2;
    }
  }
LAB_18001b410:
  do {
    puVar14 = (undefined8 *)((longlong)puVar15 + 1);
    if (*(char *)(local_98 + (longlong)puVar15) != *(char *)(puVar15 + 0x30005d09))
    goto LAB_18001b448;
    puVar12 = puVar16;
    puVar15 = puVar14;
  } while (puVar14 != (undefined8 *)0x5);
  do {
    puVar14 = (undefined8 *)((longlong)puVar12 + 1);
    if (*(char *)((longlong)local_e8 + (longlong)puVar12) != *(char *)(puVar12 + 0x30005d09)) {
      pcVar18 = "invalid format";
      goto LAB_18001b9c2;
    }
    puVar12 = puVar14;
  } while (puVar14 != (undefined8 *)0x5);
LAB_18001b448:
  uVar6 = FUN_180018b90((longlong *)&local_80,local_b8);
  if (((int)uVar6 == 0) && (local_b8[0] == 1)) {
    uVar6 = FUN_180018ad0((longlong *)&local_80,(longlong *)&local_a0,&local_108);
    if (((int)uVar6 == 0) && (local_108 != 0)) {
      uVar6 = FUN_180018ad0((longlong *)&local_80,(longlong *)&local_a0,&local_108);
      if (((int)uVar6 == 0) && (local_108 != 0)) {
        local_c8 = local_a0;
        local_d0 = local_a0;
        local_c0 = local_108;
        puVar14 = puVar16;
        iVar1 = 0;
        if (local_e8 == (void *)0x0) {
LAB_18001b4f7:
          uVar6 = FUN_180018b90((longlong *)&local_d0,local_a8);
          if ((((int)uVar6 == 0) &&
              (uVar6 = FUN_180018b90((longlong *)&local_d0,local_b8 + 3), (int)uVar6 == 0)) &&
             (local_a8[0] == local_b8[3])) {
            if (param_5 != (undefined8 *)0x0) {
              plVar8 = (longlong *)FUN_1800191d0(param_1);
              if (plVar8 == (longlong *)0x0) {
                uVar5 = FUN_180018820(param_1,0xfffffffa,0x1800320d8,param_3);
                puVar16 = (undefined8 *)(ulonglong)uVar5;
              }
              else {
                pvVar10 = FUN_180018690(param_1,local_c0);
                *plVar8 = (longlong)pvVar10;
                if (pvVar10 == (void *)0x0) {
                  uVar5 = FUN_180018820(param_1,0xfffffffa,0x1800320d8,param_3);
                  FUN_180019180(param_1,plVar8);
                  puVar16 = (undefined8 *)(ulonglong)uVar5;
                }
                else {
                  memcpy(pvVar10,local_d0,local_c0);
                  plVar8[1] = (*plVar8 - (longlong)local_d0) + (longlong)local_c8;
                  plVar8[2] = local_c0;
                  *param_5 = plVar8;
                  puVar16 = (undefined8 *)0x0;
                }
              }
            }
          }
          else {
            FUN_180018820(param_1,0xfffffff2,0x1800320a8,param_3);
            puVar16 = (undefined8 *)0xffffffd0;
          }
          if (local_110 != (undefined1 *)0x0) {
LAB_18001b936:
            puVar17 = local_110;
            for (lVar21 = (longlong)iVar1; lVar21 != 0; lVar21 = lVar21 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            (**(code **)(param_1 + 0x18))(local_110,param_1);
          }
          if (local_e0 != (undefined1 *)0x0) {
            puVar17 = local_e0;
            for (lVar21 = (longlong)local_100; lVar21 != 0; lVar21 = lVar21 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            (**(code **)(param_1 + 0x18))(local_e0,param_1);
          }
          if (local_90 != (undefined1 *)0x0) {
            puVar17 = local_90;
            for (lVar21 = (longlong)local_fc; lVar21 != 0; lVar21 = lVar21 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            (**(code **)(param_1 + 0x18))(local_90,param_1);
          }
          goto LAB_18001b9d1;
        }
        while (puVar15 = (undefined8 *)((longlong)puVar14 + 1),
              *(char *)((longlong)local_e8 + (longlong)puVar14) == *(char *)(puVar14 + 0x30005d09))
        {
          puVar14 = puVar15;
          iVar1 = 0;
          if (puVar15 == (undefined8 *)0x5) goto LAB_18001b4f7;
        }
        ppuVar9 = FUN_1800084c0();
        pvVar10 = local_e8;
        puVar14 = (undefined8 *)*ppuVar9;
        puVar15 = puVar16;
        if (puVar14 == (undefined8 *)0x0) goto LAB_18001b8a7;
        do {
          pcVar18 = (char *)*puVar14;
          ppuVar9 = ppuVar9 + 1;
          if (*pcVar18 != '\0') {
            sVar19 = 0xffffffffffffffff;
            do {
              sVar19 = sVar19 + 1;
            } while (pcVar18[sVar19] != '\0');
            iVar1 = memcmp(pvVar10,pcVar18,sVar19);
            if (iVar1 == 0) {
              puVar15 = puVar14;
            }
          }
          puVar14 = (undefined8 *)*ppuVar9;
        } while (puVar14 != (undefined8 *)0x0);
        if (puVar15 == (undefined8 *)0x0) {
LAB_18001b8a7:
          pcVar18 = "No supported cipher found";
        }
        else {
          local_fc = *(int *)((longlong)puVar15 + 0x14);
          local_100 = *(int *)(puVar15 + 3);
          iVar1 = local_100 + local_fc;
          local_b8[2] = 0;
          local_b8[1] = 0;
          local_f0[0] = 0;
          local_f0[1] = 0;
          local_f0[2] = 0;
          local_f0[3] = 0;
          local_f0[4] = 0;
          local_f0[5] = 0;
          local_f0[6] = 0;
          local_f0[7] = 0;
          local_110 = (undefined1 *)FUN_180018690(param_1,(longlong)iVar1);
          puVar14 = puVar16;
          if (local_110 != (undefined1 *)0x0) {
            do {
              puVar12 = (undefined8 *)((longlong)puVar14 + 1);
              if (*(char *)(local_98 + (longlong)puVar14) != *(char *)(puVar14 + 0x300063ec))
              goto LAB_18001b899;
              puVar14 = puVar12;
            } while (puVar12 != (undefined8 *)0x7);
            if (param_2 == (undefined1 *)0x0) {
LAB_18001b899:
              pcVar18 = "bcrypted without passphrase";
              uVar11 = 0xffffffd0;
            }
            else {
              uVar6 = FUN_180018ad0(&local_48,(longlong *)&local_50,(ulonglong *)&local_58);
              if (((int)uVar6 == 0) && (uVar6 = FUN_180018b90(&local_48,local_f8), (int)uVar6 == 0))
              {
                do {
                  lVar21 = lVar21 + 1;
                } while (param_2[lVar21] != '\0');
                param_3 = local_58;
                iVar2 = thunk_FUN_180003390(param_2,lVar21,local_50,(ulonglong)local_58,
                                            (longlong)local_110,(longlong)iVar1,local_f8[0]);
                if (-1 < iVar2) {
                  sVar19 = (size_t)local_100;
                  iVar2 = *(int *)(puVar15 + 2);
                  uVar20 = (ulonglong)iVar2;
                  local_e0 = (undefined1 *)FUN_180018690(param_1,sVar19);
                  if (local_e0 == (undefined1 *)0x0) {
                    uVar5 = FUN_180018820(param_1,0xfffffff2,0x180032070,param_3);
                    puVar16 = (undefined8 *)(ulonglong)uVar5;
                  }
                  else {
                    _Size = (size_t)local_fc;
                    local_90 = (undefined1 *)FUN_180018690(param_1,_Size);
                    if (local_90 == (undefined1 *)0x0) {
                      uVar5 = FUN_180018820(param_1,0xfffffff2,0x180032090,param_3);
                      puVar16 = (undefined8 *)(ulonglong)uVar5;
                    }
                    else {
                      memcpy(local_e0,local_110,sVar19);
                      memcpy(local_90,local_110 + sVar19,_Size);
                      iVar3 = (*(code *)puVar15[4])
                                        (param_1,puVar15,local_90,local_b8 + 2,local_e0,local_b8 + 1
                                         ,0,local_f0);
                      if (iVar3 == 0) {
                        puVar14 = puVar16;
                        if (local_c0 % uVar20 == 0) {
                          do {
                            iVar3 = (int)puVar14;
                            if (iVar3 == 0) {
                              puVar14 = puVar16;
                              uVar11 = 1;
                            }
                            else {
                              puVar14 = (undefined8 *)(longlong)iVar3;
                              uVar11 = 0;
                              if (puVar14 == (undefined8 *)(local_c0 - uVar20)) {
                                uVar11 = 2;
                              }
                            }
                            param_3 = local_f0;
                            iVar4 = (*(code *)puVar15[5])
                                              (param_1,(longlong)puVar14 + (longlong)local_d0,uVar20
                                               ,param_3,uVar11);
                            if (iVar4 != 0) {
                              puVar16 = (undefined8 *)0xfffffff4;
                              (*(code *)puVar15[6])(param_1,local_f0);
                              goto LAB_18001b936;
                            }
                            uVar5 = iVar3 + iVar2;
                            puVar14 = (undefined8 *)(ulonglong)uVar5;
                          } while ((ulonglong)(longlong)(int)uVar5 <= local_c0 - uVar20);
                          (*(code *)puVar15[6])(param_1,local_f0);
                          goto LAB_18001b4f7;
                        }
                        (*(code *)puVar15[6])(param_1,local_f0);
                        puVar16 = (undefined8 *)0xfffffff4;
                      }
                      else {
                        puVar16 = (undefined8 *)0xfffffff4;
                      }
                    }
                  }
                  goto LAB_18001b936;
                }
                pcVar18 = "invalid format";
                uVar11 = 0xfffffff4;
              }
              else {
                pcVar18 = "kdf contains unexpected values";
                uVar11 = 0xfffffff2;
              }
            }
            uVar5 = FUN_180018820(param_1,uVar11,(longlong)pcVar18,param_3);
            puVar16 = (undefined8 *)(ulonglong)uVar5;
            (**(code **)(param_1 + 0x18))(local_110,param_1);
            goto LAB_18001b936;
          }
          pcVar18 = "Could not alloc key";
        }
      }
      else {
        pcVar18 = "Private key data not found";
      }
    }
    else {
      pcVar18 = "Invalid private key; expect embedded public key";
    }
  }
  else {
    pcVar18 = "Multiple keys are unsupported";
  }
LAB_18001b9c2:
  uVar5 = FUN_180018820(param_1,0xfffffff2,(longlong)pcVar18,param_3);
  puVar16 = (undefined8 *)(ulonglong)uVar5;
LAB_18001b9d1:
  uVar20 = local_88;
  pcVar18 = local_d8;
  if (local_d8 != (char *)0x0) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar18 = '\0';
      pcVar18 = pcVar18 + 1;
    }
    (**(code **)(param_1 + 0x18))(local_d8,param_1);
  }
  return (ulonglong)puVar16 & 0xffffffff;
}




void FUN_18001ba20(longlong param_1,undefined1 *param_2,longlong param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t sVar8;
  size_t _Size;
  char *pcVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined1 auStackY_118 [32];
  ulonglong local_e8;
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_18003b280 ^ (ulonglong)auStackY_118;
  uVar6 = 0;
  uVar7 = 0;
  local_e8 = 0;
  if ((param_3 == 0) || (uVar10 = param_4, param_4 == 0)) {
    FUN_180018820(param_1,0xfffffff2,0x180032158,param_4);
  }
  else {
    do {
      local_c8[0] = '\0';
      if (param_4 <= uVar7) {
        FUN_180018820(param_1,0xfffffff2,0x180032180,uVar10);
        goto LAB_18001bc17;
      }
      sVar8 = 0;
      uVar3 = uVar7;
      do {
        if (((0x7e < sVar8) || (*(char *)(uVar3 + param_3) == '\n')) ||
           (*(char *)(uVar3 + param_3) == '\r')) break;
        sVar8 = sVar8 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_4);
      if (sVar8 != 0) {
        memcpy(local_c8,(void *)(param_3 + uVar7),sVar8);
        uVar7 = uVar7 + sVar8;
      }
      local_c8[sVar8] = '\0';
      uVar7 = uVar7 + 1;
      iVar2 = strcmp(local_c8,"-----BEGIN OPENSSH PRIVATE KEY-----");
    } while (iVar2 != 0);
    local_c8[0] = '\0';
    pbVar11 = (byte *)0x0;
    do {
      pbVar4 = pbVar11;
      if (local_c8[0] != '\0') {
        sVar8 = 0xffffffffffffffff;
        do {
          _Size = sVar8 + 1;
          lVar1 = sVar8 + 1;
          sVar8 = _Size;
        } while (local_c8[lVar1] != '\0');
        uVar6 = _Size + uVar6;
        if (pbVar11 == (byte *)0x0) {
          pbVar4 = (byte *)(**(code **)(param_1 + 8))(uVar6,param_1);
        }
        else {
          pbVar4 = (byte *)(**(code **)(param_1 + 0x10))(pbVar11,uVar6,param_1);
        }
        if (pbVar4 != (byte *)0x0) {
          memcpy(pbVar4 + local_e8,local_c8,_Size);
          local_e8 = uVar6;
          goto LAB_18001bb6c;
        }
        uVar5 = 0xfffffffa;
        pcVar9 = "Unable to allocate memory for PEM parsing";
        pbVar4 = pbVar11;
LAB_18001bc63:
        FUN_180018820(param_1,uVar5,(longlong)pcVar9,uVar10);
        pbVar11 = pbVar4;
        if (pbVar4 == (byte *)0x0) goto LAB_18001bc17;
        goto code_r0x00018001bc7f;
      }
LAB_18001bb6c:
      local_c8[0] = '\0';
      if (param_4 <= uVar7) {
        uVar5 = 0xfffffff2;
        pcVar9 = "Error parsing PEM: offset out of bounds";
        goto LAB_18001bc63;
      }
      sVar8 = 0;
      uVar3 = uVar7;
      do {
        if (((0x7e < sVar8) || (*(char *)(uVar3 + param_3) == '\n')) ||
           (*(char *)(uVar3 + param_3) == '\r')) break;
        sVar8 = sVar8 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_4);
      if (sVar8 != 0) {
        memcpy(local_c8,(void *)(param_3 + uVar7),sVar8);
        uVar7 = uVar7 + sVar8;
      }
      local_c8[sVar8] = '\0';
      uVar7 = uVar7 + 1;
      iVar2 = strcmp(local_c8,"-----END OPENSSH PRIVATE KEY-----");
      pbVar11 = pbVar4;
    } while (iVar2 != 0);
    if (pbVar4 == (byte *)0x0) {
      FUN_180018820(param_1,0xfffffff2,0x1800321d8,uVar10);
    }
    else {
      FUN_18001b200(param_1,param_2,pbVar4,uVar6,param_5);
code_r0x00018001bc7f:
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *pbVar4 = 0;
        pbVar4 = pbVar4 + 1;
      }
      (**(code **)(param_1 + 0x18))(pbVar11,param_1);
    }
  }
LAB_18001bc17:
  FUN_18002af30(local_48 ^ (ulonglong)auStackY_118);
  return;
}




int libssh2_publickey_add_ex
              (longlong *param_1,void *param_2,undefined *param_3,void *param_4,uint param_5,
              char param_6,uint param_7,longlong param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined2 *puVar8;
  int *piVar9;
  void *pvVar10;
  uint uVar11;
  void *pvVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  void *pvVar17;
  void *_Size;
  void *pvVar18;
  undefined8 *puVar19;
  
                    /* 0x1bcc0  65  libssh2_publickey_add_ex */
  iVar16 = (int)param_3;
  pvVar12 = (void *)0x0;
  iVar14 = param_5 + iVar16;
  pvVar18 = (void *)0x0;
  _Size = (void *)0x0;
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  lVar3 = *param_1;
  pvVar10 = *(void **)(lVar3 + 0x68);
  if ((int)param_1[4] == 0) {
    param_1[5] = 0;
    pvVar17 = param_4;
    if ((int)param_1[1] == 1) {
      pvVar18 = pvVar12;
      if (param_7 != 0) {
        do {
          puVar19 = (undefined8 *)((longlong)pvVar18 * 0x20 + param_8);
          if ((*(int *)(puVar19 + 1) == 7) &&
             (iVar5 = strncmp((char *)*puVar19,"comment",7), iVar5 == 0)) {
            _Size = (void *)(ulonglong)*(uint *)(puVar19 + 3);
            pvVar18 = (void *)puVar19[2];
            iVar14 = iVar14 + 0x17 + *(uint *)(puVar19 + 3);
            goto LAB_18001bdc5;
          }
          uVar11 = (int)pvVar18 + 1;
          pvVar18 = (void *)(ulonglong)uVar11;
        } while (uVar11 < param_7);
      }
      iVar14 = iVar14 + 0x17;
      _Size = pvVar12;
      pvVar18 = pvVar12;
    }
    else {
      iVar14 = iVar14 + 0x18;
      if (param_7 != 0) {
        piVar9 = (int *)(param_8 + 8);
        uVar13 = (ulonglong)param_7;
        do {
          piVar1 = piVar9 + 4;
          iVar5 = *piVar9;
          piVar9 = piVar9 + 8;
          iVar14 = iVar14 + 9 + *piVar1 + iVar5;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
LAB_18001bdc5:
    uVar13 = (ulonglong)param_7;
    puVar6 = (undefined1 *)(**(code **)((longlong)pvVar10 + 8))(iVar14,pvVar10);
    param_1[5] = (longlong)puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      iVar14 = FUN_180018820((longlong)pvVar10,0xfffffffa,0x1800327a0,pvVar17);
      return iVar14;
    }
    plVar2 = param_1 + 6;
    *plVar2 = (longlong)puVar6;
    FUN_180018d00(puVar6,iVar14 + -4);
    lVar4 = *plVar2;
    *plVar2 = lVar4 + 4;
    FUN_180018d00((undefined1 *)(lVar4 + 4),3);
    lVar4 = *plVar2;
    puVar8 = (undefined2 *)(lVar4 + 4);
    *plVar2 = (longlong)puVar8;
    *puVar8 = 0x6461;
    *(undefined1 *)(lVar4 + 6) = 100;
    puVar6 = (undefined1 *)(*plVar2 + 3);
    *plVar2 = (longlong)puVar6;
    if ((int)param_1[1] == 1) {
      FUN_180018d00(puVar6,(int)_Size);
      puVar6 = (undefined1 *)(*plVar2 + 4);
      *plVar2 = (longlong)puVar6;
      if (pvVar18 != (void *)0x0) {
        memcpy(puVar6,pvVar18,(size_t)_Size);
        *plVar2 = *plVar2 + (longlong)_Size;
        puVar6 = (undefined1 *)*plVar2;
      }
      FUN_180018d00(puVar6,iVar16);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + 4;
      memcpy((void *)(lVar4 + 4),param_2,(ulonglong)param_3 & 0xffffffff);
      puVar6 = (undefined1 *)(*plVar2 + ((ulonglong)param_3 & 0xffffffff));
      *plVar2 = (longlong)puVar6;
      FUN_180018d00(puVar6,param_5);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + 4;
      memcpy((void *)(lVar4 + 4),param_4,(ulonglong)param_5);
      *plVar2 = *plVar2 + (ulonglong)param_5;
      *(undefined4 *)(param_1 + 4) = 2;
    }
    else {
      FUN_180018d00(puVar6,iVar16);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + 4;
      memcpy((void *)(lVar4 + 4),param_2,(ulonglong)param_3 & 0xffffffff);
      puVar6 = (undefined1 *)(*plVar2 + ((ulonglong)param_3 & 0xffffffff));
      *plVar2 = (longlong)puVar6;
      FUN_180018d00(puVar6,param_5);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + 4;
      memcpy((void *)(lVar4 + 4),param_4,(ulonglong)param_5);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + (ulonglong)param_5;
      *(bool *)(lVar4 + (ulonglong)param_5) = param_6 != '\0';
      lVar4 = *plVar2;
      *plVar2 = lVar4 + 1;
      FUN_180018d00((undefined1 *)(lVar4 + 1),param_7);
      puVar6 = (undefined1 *)(*plVar2 + 4);
      *plVar2 = (longlong)puVar6;
      if (param_7 != 0) {
        puVar15 = (uint *)(param_8 + 8);
        do {
          FUN_180018d00(puVar6,*puVar15);
          *plVar2 = *plVar2 + 4;
          memcpy((void *)*plVar2,*(void **)(puVar15 + -2),(ulonglong)*puVar15);
          *plVar2 = *plVar2 + (ulonglong)*puVar15;
          FUN_180018d00((undefined1 *)*plVar2,puVar15[4]);
          *plVar2 = *plVar2 + 4;
          memcpy((void *)*plVar2,*(void **)(puVar15 + 2),(ulonglong)puVar15[4]);
          *plVar2 = *plVar2 + (ulonglong)puVar15[4];
          *(bool *)*plVar2 = (char)puVar15[5] != '\0';
          *plVar2 = *plVar2 + 1;
          puVar6 = (undefined1 *)*plVar2;
          uVar13 = uVar13 - 1;
          puVar15 = puVar15 + 8;
        } while (uVar13 != 0);
      }
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  else if ((int)param_1[4] != 2) goto LAB_18001c04d;
  param_4 = (void *)(param_1[6] - param_1[5]);
  sVar7 = FUN_180004890(lVar3,0,(void *)param_1[5],(ulonglong)param_4);
  if (sVar7 == 0xffffffffffffffdb) {
    return -0x25;
  }
  param_3 = *(undefined **)((longlong)pvVar10 + 0x18);
  if (param_1[6] - param_1[5] != sVar7) {
    (*(code *)param_3)();
    param_1[5] = 0;
    iVar14 = FUN_180018820((longlong)pvVar10,0xfffffff9,0x1800327e0,param_4);
    return iVar14;
  }
  (*(code *)param_3)();
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  param_2 = pvVar10;
LAB_18001c04d:
  iVar14 = FUN_18001d300(param_1,param_2,param_3,param_4);
  if (iVar14 == -0x25) {
    return -0x25;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar14;
}




longlong libssh2_publickey_init(ulonglong param_1,ulonglong param_2,char *param_3,char *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
                    /* 0x1c080  66  libssh2_publickey_init */
  uVar2 = _time64((__time64_t *)0x0);
  do {
    lVar3 = FUN_18001cb90(param_1,param_2,param_3,param_4);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    param_2 = uVar2;
    iVar1 = FUN_18001e940(param_1,uVar2,param_3,param_4);
  } while (iVar1 == 0);
  return 0;
}




int libssh2_publickey_list_fetch
              (longlong *param_1,uint *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong *plVar16;
  uint local_res8;
  uint local_res20;
  longlong *local_50;
  
                    /* 0x1c0f0  67  libssh2_publickey_list_fetch */
  local_50 = (longlong *)0x0;
  local_res8 = 0;
  local_res20 = 0;
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  lVar10 = *param_1;
  plVar8 = param_1 + 0xc;
  lVar2 = *(longlong *)(lVar10 + 0x68);
  plVar1 = param_1 + 0xb;
  if ((int)param_1[10] == 0) {
    param_1[0xe] = 0;
    *plVar1 = (longlong)plVar8;
    FUN_180018d00((undefined1 *)plVar8,8);
    lVar12 = *plVar1;
    *plVar1 = lVar12 + 4;
    FUN_180018d00((undefined1 *)(lVar12 + 4),4);
    lVar12 = *plVar1;
    *plVar1 = lVar12 + 4;
    *(undefined4 *)(lVar12 + 4) = 0x7473696c;
    *plVar1 = *plVar1 + 4;
    *(undefined4 *)(param_1 + 10) = 2;
  }
  else if ((int)param_1[10] != 2) goto LAB_18001c220;
  param_4 = (*plVar1 - (longlong)param_1) - 0x60;
  sVar7 = FUN_180004890(lVar10,0,plVar8,param_4);
  if (sVar7 == 0xffffffffffffffdb) {
    return -0x25;
  }
  if ((*plVar1 - (longlong)param_1) - 0x60U != sVar7) {
    *(undefined4 *)(param_1 + 10) = 0;
    iVar3 = FUN_180018820(lVar2,0xfffffff9,0x180032870,param_4);
    return iVar3;
  }
  *(undefined4 *)(param_1 + 10) = 3;
LAB_18001c220:
  iVar3 = FUN_18001d0e0(param_1,param_1 + 0xe,(ulonglong *)(param_1 + 0xf));
  if (iVar3 != -0x25) {
    uVar13 = 0xffffffdc;
    plVar8 = (longlong *)0x0;
    do {
      if (iVar3 != 0) {
        uVar13 = 0xffffffe2;
        pcVar15 = "Timeout waiting for response from publickey subsystem";
        goto LAB_18001c7b8;
      }
      *plVar1 = param_1[0xe];
      iVar3 = FUN_18001d250(plVar1,param_1[0xf]);
      if (iVar3 < 0) {
        pcVar15 = "Invalid publickey subsystem response code";
        goto LAB_18001c7b8;
      }
      if (iVar3 == 0) {
        if ((undefined1 *)param_1[0xb] + 8 <= (undefined1 *)(param_1[0xf] + param_1[0xe])) {
          uVar4 = FUN_180018ea0((undefined1 *)param_1[0xb]);
          lVar10 = param_1[0xb];
          param_1[0xb] = lVar10 + 4;
          uVar6 = FUN_180018ea0((undefined1 *)(lVar10 + 4));
          puVar11 = (undefined1 *)((ulonglong)uVar6 + param_1[0xb] + 4);
          param_1[0xb] = param_1[0xb] + 4;
          if (puVar11 + 4 <= (undefined1 *)(param_1[0xf] + param_1[0xe])) {
            param_1[0xb] = (longlong)puVar11;
            uVar6 = FUN_180018ea0(puVar11);
            lVar10 = param_1[0xb];
            param_1[0xb] = lVar10 + 4;
            uVar14 = (ulonglong)uVar6 + lVar10 + 4;
            if (uVar14 <= (ulonglong)(param_1[0xf] + param_1[0xe])) {
              param_1[0xb] = uVar14;
              if (uVar4 == 0) {
                (**(code **)(lVar2 + 0x18))(param_1[0xe],lVar2);
                param_1[0xe] = 0;
                *param_3 = plVar8;
                *param_2 = local_res8;
                *(undefined4 *)(param_1 + 10) = 0;
                return 0;
              }
              if (uVar4 == 6) {
                if ((int)param_1[1] == 1) {
                  uVar4 = 7;
                }
              }
              else if (8 < uVar4) {
                pcVar15 = "unknown";
                goto LAB_18001c7b8;
              }
              pcVar15 = (&PTR_s_success_180032268)[(ulonglong)uVar4 * 3];
              goto LAB_18001c7b8;
            }
          }
        }
LAB_18001c795:
        uVar13 = 0xffffffda;
        pcVar15 = "ListFetch data too short";
LAB_18001c7b8:
        FUN_180018820(lVar2,uVar13,(longlong)pcVar15,param_4);
        if (param_1[0xe] != 0) {
          (**(code **)(lVar2 + 0x18))(param_1[0xe],lVar2);
          param_1[0xe] = 0;
        }
        if (local_50 != (longlong *)0x0) {
          lVar10 = *(longlong *)(*param_1 + 0x68);
          lVar2 = *local_50;
          plVar8 = local_50;
          while (lVar2 != 0) {
            if (plVar8[5] != 0) {
              (**(code **)(lVar10 + 0x18))(plVar8[5],lVar10);
            }
            (**(code **)(lVar10 + 0x18))(*plVar8,lVar10);
            plVar8 = plVar8 + 6;
            lVar2 = *plVar8;
          }
          (**(code **)(lVar10 + 0x18))(local_50,lVar10);
        }
        *(undefined4 *)(param_1 + 10) = 0;
        return -1;
      }
      if (iVar3 == 2) {
        uVar14 = (ulonglong)local_res8;
        plVar16 = local_50;
        if (local_res20 <= local_res8) {
          lVar10 = (ulonglong)(local_res20 + 9) * 0x30;
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)(**(code **)(lVar2 + 8))(lVar10,lVar2);
          }
          else {
            plVar8 = (longlong *)(**(code **)(lVar2 + 0x10))(plVar8,lVar10,lVar2);
          }
          local_res20 = local_res20 + 8;
          plVar16 = plVar8;
          if (plVar8 == (longlong *)0x0) {
            uVar13 = 0xfffffffa;
            pcVar15 = "Unable to allocate memory for publickey list";
            goto LAB_18001c7b8;
          }
        }
        local_50 = plVar16;
        puVar11 = (undefined1 *)*plVar1;
        plVar16 = plVar8;
        if ((int)param_1[1] == 1) {
          if (puVar11 + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
            uVar4 = FUN_180018ea0(puVar11);
            param_1[0xb] = param_1[0xb] + 4;
            if (uVar4 == 0) {
              *(undefined4 *)((longlong)plVar8 + uVar14 * 0x30 + 0x24) = 0;
              plVar8[uVar14 * 6 + 5] = 0;
            }
            else {
              *(undefined4 *)((longlong)plVar8 + uVar14 * 0x30 + 0x24) = 1;
              puVar9 = (undefined8 *)(**(code **)(lVar2 + 8))(0x20,lVar2);
              plVar8[uVar14 * 6 + 5] = (longlong)puVar9;
              if (puVar9 == (undefined8 *)0x0) {
LAB_18001c698:
                uVar13 = 0xfffffffa;
                pcVar15 = "Unable to allocate memory for publickey attributes";
                goto LAB_18001c7b8;
              }
              *puVar9 = "comment";
              *(undefined4 *)(plVar8[uVar14 * 6 + 5] + 8) = 7;
              *(longlong *)(plVar8[uVar14 * 6 + 5] + 0x10) = param_1[0xb];
              *(uint *)(plVar8[uVar14 * 6 + 5] + 0x18) = uVar4;
              *(undefined1 *)(plVar8[uVar14 * 6 + 5] + 0x1c) = 0;
              param_1[0xb] = param_1[0xb] + (ulonglong)uVar4;
            }
            if ((undefined1 *)param_1[0xb] + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
              uVar5 = FUN_180018ea0((undefined1 *)param_1[0xb]);
              *(undefined4 *)(plVar8 + uVar14 * 6 + 2) = uVar5;
              lVar10 = param_1[0xb] + 4;
              param_1[0xb] = lVar10;
              if ((ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 2) + lVar10 <=
                  (ulonglong)(param_1[0xe] + param_1[0xf])) {
                plVar8[uVar14 * 6 + 1] = lVar10;
                puVar11 = (undefined1 *)
                          (param_1[0xb] + (ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 2));
                param_1[0xb] = (longlong)puVar11;
                if (puVar11 + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
                  uVar5 = FUN_180018ea0(puVar11);
                  *(undefined4 *)(plVar8 + uVar14 * 6 + 4) = uVar5;
                  lVar10 = param_1[0xb] + 4;
                  param_1[0xb] = lVar10;
                  if ((ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 4) + lVar10 <=
                      (ulonglong)(param_1[0xe] + param_1[0xf])) {
                    plVar8[uVar14 * 6 + 3] = lVar10;
                    param_1[0xb] = param_1[0xb] + (ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 4);
LAB_18001c628:
                    uVar14 = (ulonglong)local_res8;
                    local_res8 = local_res8 + 1;
                    plVar16[uVar14 * 6] = param_1[0xe];
                    plVar16[(ulonglong)local_res8 * 6] = 0;
                    goto LAB_18001c65b;
                  }
                }
              }
            }
          }
        }
        else if (puVar11 + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
          uVar5 = FUN_180018ea0(puVar11);
          *(undefined4 *)(plVar8 + uVar14 * 6 + 2) = uVar5;
          lVar10 = param_1[0xb] + 4;
          param_1[0xb] = lVar10;
          if ((ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 2) + lVar10 <=
              (ulonglong)(param_1[0xe] + param_1[0xf])) {
            plVar8[uVar14 * 6 + 1] = lVar10;
            puVar11 = (undefined1 *)(param_1[0xb] + (ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 2));
            param_1[0xb] = (longlong)puVar11;
            if (puVar11 + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
              uVar5 = FUN_180018ea0(puVar11);
              *(undefined4 *)(plVar8 + uVar14 * 6 + 4) = uVar5;
              lVar10 = param_1[0xb] + 4;
              param_1[0xb] = lVar10;
              if ((ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 4) + lVar10 <=
                  (ulonglong)(param_1[0xe] + param_1[0xf])) {
                plVar8[uVar14 * 6 + 3] = lVar10;
                puVar11 = (undefined1 *)
                          (param_1[0xb] + (ulonglong)*(uint *)(plVar8 + uVar14 * 6 + 4));
                param_1[0xb] = (longlong)puVar11;
                if (puVar11 + 4 <= (undefined1 *)(param_1[0xe] + param_1[0xf])) {
                  uVar5 = FUN_180018ea0(puVar11);
                  *(undefined4 *)((longlong)plVar8 + uVar14 * 0x30 + 0x24) = uVar5;
                  param_1[0xb] = param_1[0xb] + 4;
                  uVar4 = *(uint *)((longlong)plVar8 + uVar14 * 0x30 + 0x24);
                  if (uVar4 == 0) {
                    plVar8[uVar14 * 6 + 5] = 0;
                  }
                  else {
                    lVar10 = (**(code **)(lVar2 + 8))((ulonglong)uVar4 << 5,lVar2);
                    plVar8[uVar14 * 6 + 5] = lVar10;
                    if (lVar10 == 0) goto LAB_18001c698;
                    uVar4 = 0;
                    plVar16 = local_50;
                    if (*(int *)((longlong)plVar8 + uVar14 * 0x30 + 0x24) != 0) {
                      do {
                        if ((undefined1 *)(param_1[0xe] + param_1[0xf]) <
                            (undefined1 *)param_1[0xb] + 4) goto LAB_18001c795;
                        uVar5 = FUN_180018ea0((undefined1 *)param_1[0xb]);
                        lVar12 = (ulonglong)uVar4 * 0x20;
                        *(undefined4 *)(plVar8[uVar14 * 6 + 5] + 8 + lVar12) = uVar5;
                        lVar10 = param_1[0xb] + 4;
                        param_1[0xb] = lVar10;
                        if ((ulonglong)(param_1[0xe] + param_1[0xf]) <
                            (ulonglong)*(uint *)(plVar8[uVar14 * 6 + 5] + 8 + lVar12) + lVar10)
                        goto LAB_18001c795;
                        *(longlong *)(plVar8[uVar14 * 6 + 5] + lVar12) = lVar10;
                        puVar11 = (undefined1 *)
                                  ((ulonglong)*(uint *)(plVar8[uVar14 * 6 + 5] + 8 + lVar12) +
                                  param_1[0xb]);
                        param_1[0xb] = (longlong)puVar11;
                        if ((undefined1 *)(param_1[0xe] + param_1[0xf]) < puVar11 + 4)
                        goto LAB_18001c795;
                        uVar5 = FUN_180018ea0(puVar11);
                        *(undefined4 *)(plVar8[uVar14 * 6 + 5] + 0x18 + lVar12) = uVar5;
                        lVar10 = param_1[0xb] + 4;
                        param_1[0xb] = lVar10;
                        if ((ulonglong)(param_1[0xe] + param_1[0xf]) <
                            (ulonglong)*(uint *)(plVar8[uVar14 * 6 + 5] + 0x18 + lVar12) + lVar10)
                        goto LAB_18001c795;
                        *(longlong *)(plVar8[uVar14 * 6 + 5] + 0x10 + lVar12) = lVar10;
                        uVar4 = uVar4 + 1;
                        param_1[0xb] = param_1[0xb] +
                                       (ulonglong)*(uint *)(plVar8[uVar14 * 6 + 5] + 0x18 + lVar12);
                        *(undefined1 *)(plVar8[uVar14 * 6 + 5] + 0x1c + lVar12) = 0;
                      } while (uVar4 < *(uint *)((longlong)plVar8 + uVar14 * 0x30 + 0x24));
                    }
                  }
                  goto LAB_18001c628;
                }
              }
            }
          }
        }
        goto LAB_18001c795;
      }
      FUN_180018820(lVar2,0xffffffdc,0x180032540,param_4);
      (**(code **)(lVar2 + 0x18))(param_1[0xe],lVar2);
      plVar16 = plVar8;
LAB_18001c65b:
      param_1[0xe] = 0;
      iVar3 = FUN_18001d0e0(param_1,param_1 + 0xe,(ulonglong *)(param_1 + 0xf));
      plVar8 = plVar16;
    } while (iVar3 != -0x25);
    iVar3 = -0x25;
  }
  return iVar3;
}




void libssh2_publickey_list_free(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x1c860  68  libssh2_publickey_list_free */
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar1 = *(longlong *)(*param_1 + 0x68);
    lVar2 = *param_2;
    plVar3 = param_2;
    while (lVar2 != 0) {
      if (plVar3[5] != 0) {
        (**(code **)(lVar1 + 0x18))(plVar3[5],lVar1);
      }
      (**(code **)(lVar1 + 0x18))(*plVar3,lVar1);
      plVar3 = plVar3 + 6;
      lVar2 = *plVar3;
    }
    (**(code **)(lVar1 + 0x18))(param_2,lVar1);
  }
  return;
}




int libssh2_publickey_remove_ex
              (longlong *param_1,void *param_2,uint param_3,void *param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  size_t sVar4;
  undefined4 *puVar5;
  void *pvVar6;
  code *pcVar7;
  code *pcVar8;
  void *pvVar9;
  longlong *plVar10;
  int iVar11;
  
                    /* 0x1c8e0  69  libssh2_publickey_remove_ex */
  iVar11 = param_5 + 0x16 + param_3;
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  lVar1 = *param_1;
  pcVar8 = (code *)(param_1 + 8);
  pvVar6 = *(void **)(lVar1 + 0x68);
  if ((int)param_1[7] == 0) {
    *(longlong *)pcVar8 = 0;
    pvVar9 = param_4;
    puVar3 = (undefined1 *)(**(code **)((longlong)pvVar6 + 8))(iVar11,pvVar6);
    *(undefined1 **)pcVar8 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      iVar11 = FUN_180018820((longlong)pvVar6,0xfffffffa,0x180032808,pvVar9);
      return iVar11;
    }
    plVar10 = param_1 + 9;
    *plVar10 = (longlong)puVar3;
    FUN_180018d00(puVar3,iVar11 + -4);
    lVar2 = *plVar10;
    *plVar10 = lVar2 + 4;
    FUN_180018d00((undefined1 *)(lVar2 + 4),6);
    lVar2 = *plVar10;
    puVar5 = (undefined4 *)(lVar2 + 4);
    *plVar10 = (longlong)puVar5;
    *puVar5 = 0x6f6d6572;
    *(undefined2 *)(lVar2 + 8) = 0x6576;
    lVar2 = *plVar10;
    *plVar10 = lVar2 + 6;
    FUN_180018d00((undefined1 *)(lVar2 + 6),param_3);
    lVar2 = *plVar10;
    *plVar10 = lVar2 + 4;
    memcpy((void *)(lVar2 + 4),param_2,(ulonglong)param_3);
    puVar3 = (undefined1 *)(*plVar10 + (ulonglong)param_3);
    *plVar10 = (longlong)puVar3;
    FUN_180018d00(puVar3,param_5);
    lVar2 = *plVar10;
    *plVar10 = lVar2 + 4;
    memcpy((void *)(lVar2 + 4),param_4,(ulonglong)param_5);
    *plVar10 = *plVar10 + (ulonglong)param_5;
    *(undefined4 *)(param_1 + 7) = 2;
  }
  else {
    plVar10 = param_1 + 9;
    if ((int)param_1[7] != 2) goto LAB_18001ca91;
  }
  plVar10 = (longlong *)(param_1[9] - (longlong)*(void **)pcVar8);
  sVar4 = FUN_180004890(lVar1,0,*(void **)pcVar8,(ulonglong)plVar10);
  if (sVar4 == 0xffffffffffffffdb) {
    return -0x25;
  }
  pcVar7 = *(code **)((longlong)pvVar6 + 0x18);
  if (param_1[9] - *(longlong *)pcVar8 != sVar4) {
    (*pcVar7)();
    *(longlong *)pcVar8 = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    iVar11 = FUN_180018820((longlong)pvVar6,0xfffffff9,0x180032848,plVar10);
    return iVar11;
  }
  (*pcVar7)();
  *(undefined4 *)(param_1 + 7) = 3;
  *(longlong *)pcVar8 = 0;
  param_2 = pvVar6;
  pcVar8 = pcVar7;
LAB_18001ca91:
  iVar11 = FUN_18001d300(param_1,param_2,pcVar8,plVar10);
  if (iVar11 == -0x25) {
    return -0x25;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  return iVar11;
}




ulonglong libssh2_publickey_shutdown
                    (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0x1cad0  70  libssh2_publickey_shutdown */
  if (param_1 == (longlong *)0x0) {
    return 0xffffffd9;
  }
  lVar1 = *(longlong *)(*param_1 + 0x68);
  if (param_1[2] != 0) {
    param_2 = lVar1;
    (**(code **)(lVar1 + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    param_2 = lVar1;
    (**(code **)(lVar1 + 0x18))();
    param_1[5] = 0;
  }
  if (param_1[8] != 0) {
    param_2 = lVar1;
    (**(code **)(lVar1 + 0x18))();
    param_1[8] = 0;
  }
  if (param_1[0xe] != 0) {
    param_2 = lVar1;
    (**(code **)(lVar1 + 0x18))();
    param_1[0xe] = 0;
  }
  uVar2 = FUN_1800039c0((longlong *)*param_1,param_2,param_3,param_4);
  if ((int)uVar2 == -0x25) {
    return uVar2;
  }
  (**(code **)(lVar1 + 0x18))(param_1,lVar1);
  return 0;
}




undefined8 FUN_18001cb90(ulonglong param_1,ulonglong param_2,char *param_3,char *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  size_t sVar9;
  ulonglong *puVar10;
  int *piVar11;
  char *pcVar12;
  ulonglong _MaxCount;
  
  iVar2 = *(int *)(param_1 + 0x11b58);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x11b70) = 0;
    *(undefined8 *)(param_1 + 0x11b60) = 0;
    *(undefined8 *)(param_1 + 0x11b68) = 0;
    *(undefined4 *)(param_1 + 0x11b58) = 1;
LAB_18001cbe6:
    param_4 = (char *)0x200000;
    lVar6 = FUN_180003c00(param_1,"session",7,(longlong *)0x200000,0x8000,(longlong *)0x0,0);
    *(longlong *)(param_1 + 0x11b68) = lVar6;
    if (lVar6 == 0) {
      iVar2 = libssh2_session_last_errno(param_1);
      if (iVar2 == -0x25) {
        return 0;
      }
      param_3 = "Unable to startup channel";
LAB_18001cc37:
      param_2 = 0xffffffeb;
    }
    else {
      *(undefined4 *)(param_1 + 0x11b58) = 3;
LAB_18001cc93:
      param_4 = "publickey";
      iVar2 = FUN_180004270(*(longlong *)(param_1 + 0x11b68),"subsystem",9,(longlong *)"publickey",9
                           );
      if (iVar2 == -0x25) goto LAB_18001cd06;
      if (iVar2 != 0) {
        param_3 = "Unable to request publickey subsystem";
        goto LAB_18001cc37;
      }
      *(undefined4 *)(param_1 + 0x11b58) = 4;
LAB_18001ccf4:
      iVar2 = FUN_1800037e0(*(longlong *)(param_1 + 0x11b68),1);
      if (iVar2 == -0x25) {
LAB_18001cd06:
        FUN_180018820(param_1,0xffffffdb,0x1800325a0,param_4);
        return 0;
      }
      plVar8 = (longlong *)FUN_180018690(param_1,0x80);
      *(longlong *)(param_1 + 0x11b60) = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = *(longlong *)(param_1 + 0x11b68);
        *(undefined4 *)(*(longlong *)(param_1 + 0x11b60) + 8) = 0;
        FUN_180018d00((undefined1 *)(param_1 + 0x11b80),0xf);
        FUN_180018d00((undefined1 *)(param_1 + 0x11b84),7);
        *(undefined4 *)(param_1 + 0x11b88) = 0x73726576;
        *(undefined2 *)(param_1 + 0x11b8c) = 0x6f69;
        *(undefined1 *)(param_1 + 0x11b8e) = 0x6e;
        FUN_180018d00((undefined1 *)(param_1 + 0x11b8f),2);
        *(undefined4 *)(param_1 + 0x11b58) = 5;
        *(undefined8 *)(param_1 + 0x11b98) = 0;
        goto LAB_18001cddb;
      }
      param_3 = "Unable to allocate a new publickey structure";
      param_2 = 0xfffffffa;
    }
LAB_18001cc3c:
    FUN_180018820(param_1,(int)param_2,(longlong)param_3,param_4);
LAB_18001cc44:
    *(undefined4 *)(param_1 + 0x11b58) = 7;
    if ((*(longlong *)(param_1 + 0x11b68) == 0) ||
       (uVar7 = FUN_180003670(*(longlong *)(param_1 + 0x11b68),param_2,param_3,param_4),
       (int)uVar7 != -0x25)) {
      if (*(longlong *)(param_1 + 0x11b60) != 0) {
        (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x11b60),param_1);
        *(undefined8 *)(param_1 + 0x11b60) = 0;
      }
      if (*(longlong *)(param_1 + 0x11b70) != 0) {
        (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x11b70),param_1);
        *(undefined8 *)(param_1 + 0x11b70) = 0;
      }
      *(undefined4 *)(param_1 + 0x11b58) = 0;
    }
    else {
      FUN_180018820(param_1,0xffffffdb,0x180032778,param_4);
    }
  }
  else {
    if (iVar2 == 1) goto LAB_18001cbe6;
    if (iVar2 == 3) goto LAB_18001cc93;
    if (iVar2 == 4) goto LAB_18001ccf4;
    if (iVar2 == 5) {
LAB_18001cddb:
      puVar10 = (ulonglong *)(param_1 + 0x11b98);
      param_4 = (char *)(0x13 - *puVar10);
      sVar9 = FUN_180004890(*(longlong *)(param_1 + 0x11b68),0,(void *)(param_1 + 0x11b80),
                            (ulonglong)param_4);
      if (sVar9 == 0xffffffffffffffdb) {
        FUN_180018820(param_1,(int)sVar9,0x180032628,param_4);
        return 0;
      }
      if ((longlong)sVar9 < 0) {
        param_3 = "Unable to send publickey version packet";
        param_2 = sVar9 & 0xffffffff;
        goto LAB_18001cc3c;
      }
      *puVar10 = *puVar10 + sVar9;
      if (*puVar10 < 0x13) {
        FUN_180018820(param_1,0xffffffdb,0x180032680,param_4);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x11b58) = 6;
    }
    else if (iVar2 != 6) goto LAB_18001cc44;
    iVar2 = FUN_18001d0e0(*(longlong **)(param_1 + 0x11b60),(longlong *)(param_1 + 0x11b70),
                          (ulonglong *)(param_1 + 0x11b78));
    if (iVar2 != -0x25) {
LAB_18001ce80:
      if (iVar2 != 0) {
        param_3 = "Timeout waiting for response from publickey subsystem";
        param_2 = 0xffffffe2;
        goto LAB_18001cc3c;
      }
      uVar7 = *(ulonglong *)(param_1 + 0x11b78);
      piVar11 = &DAT_180032200;
      puVar1 = *(undefined1 **)(param_1 + 0x11b70);
      if (uVar7 < 4) {
LAB_18001cee9:
        param_3 = "Invalid publickey subsystem response code";
        param_2 = 0xffffffdc;
        goto LAB_18001cc3c;
      }
      uVar3 = FUN_180018ea0(puVar1);
      _MaxCount = (ulonglong)uVar3;
      pcVar12 = puVar1 + 4;
      if (uVar7 - 4 < _MaxCount) goto LAB_18001cee9;
      while (((uint)piVar11[4] != _MaxCount ||
             (iVar2 = strncmp(*(char **)(piVar11 + 2),pcVar12,_MaxCount), iVar2 != 0))) {
        plVar8 = (longlong *)(piVar11 + 8);
        piVar11 = piVar11 + 6;
        if (*plVar8 == 0) goto LAB_18001cee9;
      }
      iVar2 = *piVar11;
      pcVar12 = pcVar12 + _MaxCount;
      if (iVar2 < 0) goto LAB_18001cee9;
      if (3 < *(ulonglong *)(param_1 + 0x11b78)) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            uVar4 = FUN_180018ea0(pcVar12);
            *(undefined4 *)(*(longlong *)(param_1 + 0x11b60) + 8) = uVar4;
            if (2 < *(uint *)(*(longlong *)(param_1 + 0x11b60) + 8)) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x11b60) + 8) = 2;
            }
            (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11b70),param_1);
            *(undefined8 *)(param_1 + 0x11b70) = 0;
            *(undefined4 *)(param_1 + 0x11b58) = 0;
            return *(undefined8 *)(param_1 + 0x11b60);
          }
          FUN_180018820(param_1,0xffffffdc,0x180032740,param_4);
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11b70),param_1);
          *(undefined8 *)(param_1 + 0x11b70) = 0;
          iVar2 = FUN_18001d0e0(*(longlong **)(param_1 + 0x11b60),(longlong *)(param_1 + 0x11b70),
                                (ulonglong *)(param_1 + 0x11b78));
          if (iVar2 == -0x25) goto LAB_18001cf69;
          goto LAB_18001ce80;
        }
        if (7 < *(ulonglong *)(param_1 + 0x11b78)) {
          uVar3 = FUN_180018ea0(pcVar12);
          uVar5 = FUN_180018ea0(pcVar12 + 4);
          pcVar12 = pcVar12 + (ulonglong)uVar5 + 8;
          if (((char *)(*(longlong *)(param_1 + 0x11b78) + *(longlong *)(param_1 + 0x11b70)) <
               pcVar12 + 4) ||
             (uVar5 = FUN_180018ea0(pcVar12),
             (char *)(*(longlong *)(param_1 + 0x11b78) + *(longlong *)(param_1 + 0x11b70)) <
             pcVar12 + 4 + uVar5)) goto LAB_18001d063;
          if (uVar3 < 9) {
            param_2 = 0xffffffdc;
            param_3 = (&PTR_s_success_180032268)[(ulonglong)uVar3 * 3];
          }
          else {
            param_3 = "unknown";
            param_2 = 0xffffffdc;
          }
          goto LAB_18001cc3c;
        }
      }
LAB_18001d063:
      param_3 = "Public key init data too small";
      param_2 = 0xffffffda;
      goto LAB_18001cc3c;
    }
LAB_18001cf69:
    FUN_180018820(param_1,0xffffffdb,0x1800326b0,param_4);
  }
  return 0;
}




undefined4 FUN_18001d0e0(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x68);
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  local_res10 = param_2;
  if (iVar1 == 0) {
    uVar9 = 4;
    uVar6 = FUN_180004510(lVar2,0,(longlong)local_res8,4);
    if (uVar6 != 0xffffffffffffffdb) {
      if (uVar6 != 4) {
        uVar4 = FUN_180018820(lVar3,0xffffffdc,0x180032428,uVar9);
        return uVar4;
      }
      uVar5 = FUN_180018ea0(local_res8);
      param_1[3] = (ulonglong)uVar5;
      lVar7 = (**(code **)(lVar3 + 8))();
      param_1[2] = lVar7;
      if (lVar7 == 0) {
        uVar4 = FUN_180018820(lVar3,0xfffffffa,0x180032458,uVar9);
        return uVar4;
      }
      *(int *)((longlong)param_1 + 0xc) = 3;
LAB_18001d1cc:
      puVar10 = (ulonglong *)(param_1 + 3);
      uVar6 = *puVar10;
      uVar8 = FUN_180004510(lVar2,0,param_1[2],uVar6);
      if (uVar8 != 0xffffffffffffffdb) {
        lVar2 = param_1[2];
        if (uVar8 != *puVar10) {
          (**(code **)(lVar3 + 0x18))(lVar2,lVar3);
          param_1[2] = 0;
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          uVar4 = FUN_180018820(lVar3,0xffffffe2,0x180032488,uVar6);
          return uVar4;
        }
        *local_res10 = lVar2;
        *param_3 = *puVar10;
        goto LAB_18001d22d;
      }
    }
    uVar4 = 0xffffffdb;
  }
  else {
    if (iVar1 == 3) goto LAB_18001d1cc;
LAB_18001d22d:
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar4 = 0;
  }
  return uVar4;
}




undefined4 FUN_18001d250(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *_Str2;
  ulonglong _MaxCount;
  
  puVar2 = (undefined1 *)*param_1;
  puVar5 = &DAT_180032200;
  if (3 < param_2) {
    uVar3 = FUN_180018ea0(puVar2);
    _MaxCount = (ulonglong)uVar3;
    _Str2 = puVar2 + 4;
    if (_MaxCount <= param_2 - 4) {
      do {
        if (((uint)puVar5[4] == _MaxCount) &&
           (iVar4 = strncmp(*(char **)(puVar5 + 2),_Str2,_MaxCount), iVar4 == 0)) {
          *param_1 = (longlong)(_Str2 + _MaxCount);
          return *puVar5;
        }
        plVar1 = (longlong *)(puVar5 + 8);
        puVar5 = puVar5 + 6;
      } while (*plVar1 != 0);
    }
  }
  return 0xffffffff;
}




int FUN_18001d300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  ulonglong _MaxCount;
  char *pcVar9;
  undefined1 *local_res8;
  ulonglong local_res10;
  
  lVar2 = *(longlong *)(*param_1 + 0x68);
  iVar5 = FUN_18001d0e0(param_1,(longlong *)&local_res8,&local_res10);
  if (iVar5 != -0x25) {
    do {
      uVar4 = local_res10;
      puVar3 = local_res8;
      if (iVar5 != 0) {
        pcVar9 = "Timeout waiting for response from publickey subsystem";
        uVar7 = 0xffffffe2;
        goto LAB_18001d493;
      }
      if (local_res10 < 4) {
LAB_18001d479:
        pcVar9 = "Publickey response too small";
        uVar7 = 0xffffffda;
LAB_18001d493:
        iVar5 = FUN_180018820(lVar2,uVar7,(longlong)pcVar9,param_4);
        return iVar5;
      }
      piVar8 = &DAT_180032200;
      uVar6 = FUN_180018ea0(local_res8);
      _MaxCount = (ulonglong)uVar6;
      if (uVar4 - 4 < _MaxCount) {
LAB_18001d3a9:
        (**(code **)(lVar2 + 0x18))(puVar3,lVar2);
LAB_18001d3b5:
        pcVar9 = "Invalid publickey subsystem response";
        uVar7 = 0xffffffdc;
        goto LAB_18001d493;
      }
      while (((uint)piVar8[4] != _MaxCount ||
             (iVar5 = strncmp(*(char **)(piVar8 + 2),puVar3 + 4,_MaxCount), iVar5 != 0))) {
        plVar1 = (longlong *)(piVar8 + 8);
        piVar8 = piVar8 + 6;
        if (*plVar1 == 0) goto LAB_18001d3a9;
      }
      iVar5 = *piVar8;
      if (iVar5 == 0) {
        if (7 < uVar4) {
          uVar6 = FUN_180018ea0(puVar3 + 4 + _MaxCount);
          (**(code **)(lVar2 + 0x18))(puVar3,lVar2);
          if (uVar6 == 0) {
            return 0;
          }
          if (uVar6 == 6) {
            if ((int)param_1[1] == 1) {
              uVar6 = 7;
            }
          }
          else if (8 < uVar6) {
            pcVar9 = "unknown";
            goto LAB_18001d457;
          }
          pcVar9 = (&PTR_s_success_180032268)[(ulonglong)uVar6 * 3];
LAB_18001d457:
          FUN_180018820(lVar2,0xffffffdc,(longlong)pcVar9,param_4);
          return -1;
        }
        goto LAB_18001d479;
      }
      (**(code **)(lVar2 + 0x18))(puVar3,lVar2);
      if (iVar5 < 0) goto LAB_18001d3b5;
      FUN_180018820(lVar2,0xffffffdc,0x180032540,param_4);
      local_res8 = (undefined1 *)0x0;
      iVar5 = FUN_18001d0e0(param_1,(longlong *)&local_res8,&local_res10);
    } while (iVar5 != -0x25);
    iVar5 = -0x25;
  }
  return iVar5;
}




void libssh2_scp_recv(ulonglong param_1,char *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
                    /* 0x1d4b0  71  libssh2_scp_recv */
  local_40 = DAT_18003b280 ^ (ulonglong)auStack_98;
  local_48 = 0;
  puVar4 = &local_78;
  if (param_3 == (undefined4 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  _Var2 = _time64((__time64_t *)0x0);
  do {
    puVar5 = puVar4;
    lVar3 = FUN_18001d7c0(param_1,param_2,puVar4,param_4);
    if ((*(int *)(param_1 + 0xac) == 0) || (lVar3 != 0)) break;
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) break;
    iVar1 = FUN_18001e940(param_1,_Var2,puVar5,param_4);
  } while (iVar1 == 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    *(undefined2 *)(param_3 + 1) = 0;
    *(undefined8 *)(param_3 + 2) = 0;
    param_3[4] = 0;
    *(undefined8 *)(param_3 + 10) = 0;
    *(undefined8 *)(param_3 + 8) = uStack_50;
    *(undefined8 *)(param_3 + 6) = local_58;
    param_3[5] = (undefined4)uStack_60;
    *(undefined2 *)((longlong)param_3 + 6) = local_78._6_2_;
  }
  FUN_18002af30(local_40 ^ (ulonglong)auStack_98);
  return;
}




longlong libssh2_scp_recv2(ulonglong param_1,char *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  undefined8 *puVar4;
  
                    /* 0x1d5b0  72  libssh2_scp_recv2 */
  _Var2 = _time64((__time64_t *)0x0);
  do {
    puVar4 = param_3;
    lVar3 = FUN_18001d7c0(param_1,param_2,param_3,param_4);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,puVar4,param_4);
  } while (iVar1 == 0);
  return 0;
}




longlong libssh2_scp_send64(ulonglong param_1,char *param_2,uint param_3,undefined8 param_4,
                           ulonglong param_5,longlong param_6)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
                    /* 0x1d640  73  libssh2_scp_send64 */
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar4 = (ulonglong)param_3;
    uVar5 = param_4;
    lVar3 = FUN_18001e190(param_1,param_2,param_3,param_4,param_5,param_6);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,uVar4,uVar5);
  } while (iVar1 == 0);
  return 0;
}




longlong libssh2_scp_send_ex(ulonglong param_1,char *param_2,uint param_3,undefined8 param_4,
                            int param_5,int param_6)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
                    /* 0x1d700  74  libssh2_scp_send_ex */
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar4 = (ulonglong)param_3;
    uVar5 = param_4;
    lVar3 = FUN_18001e190(param_1,param_2,param_3,param_4,(longlong)param_5,(longlong)param_6);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,uVar4,uVar5);
  } while (iVar1 == 0);
  return 0;
}




undefined8 FUN_18001d7c0(ulonglong param_1,char *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  size_t sVar14;
  longlong lVar15;
  char *pcVar16;
  undefined *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  char *local_res8;
  
  iVar4 = *(int *)(param_1 + 0x11cf0);
  if (iVar4 == 0) {
    sVar14 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x11e10) = 0;
    lVar7 = -1;
    *(undefined8 *)(param_1 + 0x11e18) = 0;
    *(undefined8 *)(param_1 + 0x11e20) = 0;
    do {
      lVar15 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (param_2[lVar15] != '\0');
    lVar7 = lVar7 * 3 + (ulonglong)(param_3 != (undefined8 *)0x0) + 10;
    *(longlong *)(param_1 + 0x11d00) = lVar7;
    lVar7 = (**(code **)(param_1 + 8))(lVar7,param_1);
    *(longlong *)(param_1 + 0x11cf8) = lVar7;
    if (lVar7 == 0) {
      FUN_180018820(param_1,0xfffffffa,0x180032920,param_4);
      return 0;
    }
    puVar17 = &DAT_18002ed17;
    if (param_3 != (undefined8 *)0x0) {
      puVar17 = &DAT_180032954;
    }
    snprintf(lVar7,*(undefined8 *)(param_1 + 0x11d00),"scp -%sf ",puVar17);
    lVar7 = *(longlong *)(param_1 + 0x11cf8);
    lVar15 = -1;
    do {
      lVar15 = lVar15 + 1;
    } while (*(char *)(lVar7 + lVar15) != '\0');
    if (*(int *)(param_1 + 0x8c) == 0) {
      do {
        sVar14 = sVar14 + 1;
      } while (param_2[sVar14] != '\0');
      memcpy((void *)(lVar7 + lVar15),param_2,sVar14);
    }
    else {
      sVar14 = FUN_18001e7b0(param_2,(char *)(lVar7 + lVar15),
                             *(longlong *)(param_1 + 0x11d00) - lVar15);
    }
    *(size_t *)(param_1 + 0x11d00) = lVar15 + sVar14;
    *(int *)(param_1 + 0x11cf0) = 2;
LAB_18001d92a:
    plVar18 = (longlong *)0x200000;
    lVar7 = FUN_180003c00(param_1,"session",7,(longlong *)0x200000,0x8000,(longlong *)0x0,0);
    *(longlong *)(param_1 + 0x11e28) = lVar7;
    if (lVar7 == 0) {
      iVar4 = libssh2_session_last_errno(param_1);
      if (iVar4 != -0x25) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11cf8),param_1);
        *(undefined8 *)(param_1 + 0x11cf8) = 0;
        *(undefined4 *)(param_1 + 0x11cf0) = 0;
        return 0;
      }
      pcVar16 = "Would block starting up channel";
      goto LAB_18001d997;
    }
    *(undefined4 *)(param_1 + 0x11cf0) = 3;
LAB_18001d9cf:
    puVar19 = (undefined8 *)(param_1 + 0x11cf8);
    plVar18 = (longlong *)*puVar19;
    pcVar16 = (char *)0x4;
    iVar4 = FUN_180004270(*(longlong *)(param_1 + 0x11e28),&DAT_180032988,4,plVar18,
                          *(size_t *)(param_1 + 0x11d00));
    if (iVar4 == -0x25) {
      pcVar16 = "Would block requesting SCP startup";
      goto LAB_18001d997;
    }
    if (iVar4 != 0) {
      uVar8 = param_1;
      (**(code **)(param_1 + 0x18))();
      *puVar19 = 0;
      goto LAB_18001e145;
    }
    (**(code **)(param_1 + 0x18))(*puVar19);
    *puVar19 = 0;
    *(undefined1 *)(param_1 + 0x11d08) = 0;
    *(undefined4 *)(param_1 + 0x11cf0) = 4;
LAB_18001da52:
    pcVar16 = (char *)(param_1 + 0x11d08);
    plVar18 = (longlong *)0x1;
    uVar8 = 0;
    sVar14 = FUN_180004890(*(longlong *)(param_1 + 0x11e28),0,pcVar16,1);
    if ((int)sVar14 == -0x25) {
      pcVar16 = "Would block sending initial wakeup";
      goto LAB_18001d997;
    }
    if ((int)sVar14 != 1) goto LAB_18001e145;
    *(undefined4 *)(param_1 + 0x11cf0) = 5;
    *(undefined8 *)(param_1 + 0x11e08) = 0;
LAB_18001daa1:
    puVar13 = (ulonglong *)(param_1 + 0x11e08);
    if (param_3 != (undefined8 *)0x0) {
      do {
        while( true ) {
          if (0xff < *puVar13) goto LAB_18001de07;
          iVar4 = *(int *)(param_1 + 0x11cf0);
          if (iVar4 != 5) break;
          plVar18 = (longlong *)0x1;
          uVar8 = FUN_180004510(*(longlong *)(param_1 + 0x11e28),0,param_1 + 0x11d08 + *puVar13,1);
          uVar5 = (uint)uVar8;
          if (uVar5 == 0xffffffdb) goto LAB_18001ddf2;
          if ((int)uVar5 < 0) goto LAB_18001dddc;
          if (uVar5 == 0) goto LAB_18001e112;
          uVar8 = *puVar13;
          uVar12 = uVar8 + 1;
          *puVar13 = uVar12;
          if (*(char *)(param_1 + 0x11d08) != 'T') {
            plVar10 = (longlong *)FUN_1800041b0(*(longlong *)(param_1 + 0x11e28),0);
            lVar7 = (**(code **)(param_1 + 8))((longlong)plVar10 + 1);
            if (lVar7 == 0) {
              pcVar16 = "Failed to get memory ";
              uVar8 = 0xfffffffa;
              FUN_180018820(param_1,0xfffffffa,0x180032a28,plVar18);
            }
            else {
              plVar18 = plVar10;
              FUN_180004510(*(longlong *)(param_1 + 0x11e28),0,lVar7,(ulonglong)plVar10);
              pcVar16 = "Failed to recv file";
              *(undefined1 *)(lVar7 + (longlong)plVar10) = 0;
              FUN_180018820(param_1,0xffffffe4,0x180032a40,plVar18);
              uVar8 = param_1;
              (**(code **)(param_1 + 0x18))(lVar7);
            }
            goto LAB_18001e145;
          }
          if ((1 < uVar12) &&
             ((bVar1 = *(byte *)(uVar8 + 0x11d08 + param_1), 0x39 < bVar1 ||
              ((0x3ff000100002400U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))) goto LAB_18001dc03;
          if ((8 < uVar12) && (*(char *)(uVar8 + 0x11d08 + param_1) == '\n')) goto LAB_18001dc20;
          if (uVar12 == 0x100) goto LAB_18001db65;
        }
      } while (iVar4 != 6);
      goto LAB_18001dbd3;
    }
    goto LAB_18001de07;
  }
  if (iVar4 == 2) goto LAB_18001d92a;
  if (iVar4 == 3) goto LAB_18001d9cf;
  if (iVar4 == 4) goto LAB_18001da52;
  if ((iVar4 == 5) || (iVar4 == 6)) goto LAB_18001daa1;
  if (iVar4 == 7) goto LAB_18001de2c;
  if ((iVar4 == 8) || (iVar4 == 9)) goto LAB_18001de45;
  goto LAB_18001df27;
LAB_18001dc20:
  while( true ) {
    cVar2 = *(char *)(uVar12 + param_1 + 0x11d07);
    if ((cVar2 != '\r') && (cVar2 != '\n')) break;
    uVar12 = uVar12 - 1;
    *puVar13 = uVar12;
  }
  *(undefined1 *)(uVar12 + param_1 + 0x11d08) = 0;
  if (*puVar13 < 8) goto LAB_18001dd4d;
  pcVar16 = (char *)(param_1 + 0x11d09);
  pcVar9 = strchr(pcVar16,0x20);
  if ((pcVar9 == (char *)0x0) || (pcVar9 == pcVar16 || (longlong)pcVar9 - (longlong)pcVar16 < 0)) {
    pcVar16 = "Invalid response from SCP server, malformed mtime";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032ad0,plVar18);
    goto LAB_18001e145;
  }
  *pcVar9 = '\0';
  pcVar9 = pcVar9 + 1;
  lVar6 = strtol(pcVar16,(char **)0x0,10);
  *(long *)(param_1 + 0x11e20) = lVar6;
  pcVar16 = strchr(pcVar9,0x20);
  if ((pcVar16 == (char *)0x0) || (pcVar16 == pcVar9 || (longlong)pcVar16 - (longlong)pcVar9 < 0)) {
    pcVar16 = "Invalid response from SCP server, malformed mtime.usec";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032b08,plVar18);
    goto LAB_18001e145;
  }
  pcVar16 = pcVar16 + 1;
  pcVar9 = strchr(pcVar16,0x20);
  if ((pcVar9 == (char *)0x0) || (pcVar9 == pcVar16 || (longlong)pcVar9 - (longlong)pcVar16 < 0))
  goto LAB_18001dd02;
  *pcVar9 = '\0';
  lVar6 = strtol(pcVar16,(char **)0x0,10);
  *(long *)(param_1 + 0x11e24) = lVar6;
  *(char *)(param_1 + 0x11d08) = '\0';
  *(int *)(param_1 + 0x11cf0) = 6;
LAB_18001dbd3:
  pcVar16 = (char *)(param_1 + 0x11d08);
  uVar8 = 0;
  plVar18 = (longlong *)0x1;
  sVar14 = FUN_180004890(*(longlong *)(param_1 + 0x11e28),0,pcVar16,1);
  if ((int)sVar14 == -0x25) {
    pcVar16 = "Would block waiting to send SCP ACK";
LAB_18001d997:
    FUN_180018820(param_1,0xffffffdb,(longlong)pcVar16,plVar18);
    return 0;
  }
  if ((int)sVar14 != 1) goto LAB_18001e145;
LAB_18001de07:
  *(undefined4 *)(param_1 + 0x11cf0) = 7;
LAB_18001de2c:
  *(undefined4 *)(param_1 + 0x11cf0) = 8;
  *(undefined8 *)(param_1 + 0x11e08) = 0;
LAB_18001de45:
  puVar13 = (ulonglong *)(param_1 + 0x11e08);
  uVar8 = *puVar13;
  while (uVar8 < 0x100) {
    iVar4 = *(int *)(param_1 + 0x11cf0);
    local_res8 = (char *)0x0;
    if (iVar4 == 8) {
      plVar18 = (longlong *)0x1;
      uVar8 = FUN_180004510(*(longlong *)(param_1 + 0x11e28),0,param_1 + 0x11d08 + uVar8,1);
      uVar5 = (uint)uVar8;
      if (uVar5 == 0xffffffdb) goto LAB_18001ddf2;
      if ((int)uVar5 < 0) goto LAB_18001dddc;
      if (uVar5 == 0) goto LAB_18001e112;
      uVar8 = *puVar13;
      uVar12 = uVar8 + 1;
      *puVar13 = uVar12;
      if (*(char *)(param_1 + 0x11d08) != 'C') {
        pcVar16 = "Invalid response from SCP server";
        uVar8 = 0xffffffe4;
        FUN_180018820(param_1,0xffffffe4,0x180032ba8,plVar18);
        goto LAB_18001e145;
      }
      if (((1 < uVar12) && (bVar1 = *(byte *)(uVar8 + 0x11d08 + param_1), bVar1 < 0x20)) &&
         ((0xffffdbffU >> (bVar1 & 0x1f) & 1) != 0)) goto LAB_18001dc03;
      if ((6 < uVar12) && (*(char *)(uVar8 + 0x11d08 + param_1) == '\n')) goto LAB_18001dfa0;
      if (uVar12 == 0x100) goto LAB_18001db65;
    }
    else if (iVar4 == 9) goto LAB_18001e0ba;
    uVar8 = *puVar13;
  }
  goto LAB_18001df13;
LAB_18001ddf2:
  pcVar16 = "Would block waiting for SCP response";
  goto LAB_18001d997;
LAB_18001dddc:
  pcVar16 = "Failed reading SCP response";
  uVar8 = (ulonglong)uVar5;
  FUN_180018820(param_1,uVar5,0x180032a08,plVar18);
  goto LAB_18001e145;
LAB_18001e112:
  iVar4 = libssh2_channel_eof(*(longlong *)(param_1 + 0x11e28));
  if (iVar4 != 0) {
    pcVar16 = "Unexpected channel close";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032c88,plVar18);
    goto LAB_18001e145;
  }
  goto LAB_18001df75;
LAB_18001dc03:
  pcVar16 = "Invalid data in SCP response";
  uVar8 = 0xffffffe4;
  FUN_180018820(param_1,0xffffffe4,0x180032a58,plVar18);
  goto LAB_18001e145;
LAB_18001dfa0:
  while( true ) {
    cVar2 = *(char *)(uVar12 + param_1 + 0x11d07);
    if ((cVar2 != '\r') && (cVar2 != '\n')) break;
    uVar12 = uVar12 - 1;
    *puVar13 = uVar12;
  }
  *(undefined1 *)(uVar12 + param_1 + 0x11d08) = 0;
  if (*puVar13 < 6) {
LAB_18001dd4d:
    pcVar16 = "Invalid response from SCP server, too short";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032aa0,plVar18);
    goto LAB_18001e145;
  }
  pcVar16 = (char *)(param_1 + 0x11d09);
  pcVar9 = strchr(pcVar16,0x20);
  if ((pcVar9 == (char *)0x0) || (pcVar9 == pcVar16 || (longlong)pcVar9 - (longlong)pcVar16 < 0)) {
    pcVar16 = "Invalid response from SCP server, malformed mode";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032bd0,plVar18);
    goto LAB_18001e145;
  }
  *pcVar9 = '\0';
  pcVar9 = pcVar9 + 1;
  lVar6 = strtol(pcVar16,&local_res8,8);
  *(long *)(param_1 + 0x11e10) = lVar6;
  if ((local_res8 != (char *)0x0) && (*local_res8 != '\0')) {
    pcVar16 = "Invalid response from SCP server, invalid mode";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032c08,plVar18);
    goto LAB_18001e145;
  }
  pcVar16 = strchr(pcVar9,0x20);
  if ((pcVar16 == (char *)0x0) || (pcVar16 == pcVar9 || (longlong)pcVar16 - (longlong)pcVar9 < 0)) {
LAB_18001dd02:
    pcVar16 = "Invalid response from SCP server, too short or malformed";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032b40,plVar18);
    goto LAB_18001e145;
  }
  *pcVar16 = '\0';
  uVar11 = strtoll(pcVar9,&local_res8,10);
  *(undefined8 *)(param_1 + 0x11e18) = uVar11;
  if ((local_res8 != (char *)0x0) && (*local_res8 != '\0')) {
    pcVar16 = "Invalid response from SCP server, invalid size";
    uVar8 = 0xffffffe4;
    FUN_180018820(param_1,0xffffffe4,0x180032c38,plVar18);
    goto LAB_18001e145;
  }
  *(char *)(param_1 + 0x11d08) = '\0';
  *(int *)(param_1 + 0x11cf0) = 9;
LAB_18001e0ba:
  pcVar16 = (char *)(param_1 + 0x11d08);
  uVar8 = 0;
  plVar18 = (longlong *)0x1;
  sVar14 = FUN_180004890(*(longlong *)(param_1 + 0x11e28),0,pcVar16,1);
  if ((int)sVar14 == -0x25) {
    pcVar16 = "Would block sending SCP ACK";
    goto LAB_18001d997;
  }
  if ((int)sVar14 != 1) goto LAB_18001e145;
LAB_18001df13:
  *(undefined4 *)(param_1 + 0x11cf0) = 10;
LAB_18001df27:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[5] = (longlong)*(int *)(param_1 + 0x11e20);
    param_3[4] = (longlong)*(int *)(param_1 + 0x11e24);
    param_3[3] = *(undefined8 *)(param_1 + 0x11e18);
    *(undefined2 *)((longlong)param_3 + 6) = *(undefined2 *)(param_1 + 0x11e10);
  }
  *(undefined4 *)(param_1 + 0x11cf0) = 0;
LAB_18001df75:
  return *(undefined8 *)(param_1 + 0x11e28);
LAB_18001db65:
  pcVar16 = "Unterminated response from SCP server";
  uVar8 = 0xffffffe4;
  FUN_180018820(param_1,0xffffffe4,0x180032a78,plVar18);
LAB_18001e145:
  uVar3 = *(undefined4 *)(param_1 + 0x270);
  uVar11 = *(undefined8 *)(param_1 + 0x268);
  do {
    uVar12 = libssh2_channel_free(*(longlong **)(param_1 + 0x11e28),uVar8,pcVar16,plVar18);
  } while ((int)uVar12 == -0x25);
  *(undefined4 *)(param_1 + 0x270) = uVar3;
  *(undefined8 *)(param_1 + 0x268) = uVar11;
  *(undefined8 *)(param_1 + 0x11e28) = 0;
  *(undefined4 *)(param_1 + 0x11cf0) = 0;
  return 0;
}




longlong FUN_18001e190(ulonglong param_1,char *param_2,uint param_3,undefined8 param_4,
                      ulonglong param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  size_t sVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  
  iVar3 = *(int *)(param_1 + 0x11e30);
  if (iVar3 == 0) {
    if ((param_5 != 0) || (lVar5 = 10, param_6 != 0)) {
      lVar5 = 0xb;
    }
    sVar10 = 0xffffffffffffffff;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != '\0');
    lVar5 = lVar5 + lVar9 * 3;
    *(longlong *)(param_1 + 0x11e40) = lVar5;
    lVar5 = (**(code **)(param_1 + 8))(lVar5,param_1);
    *(longlong *)(param_1 + 0x11e38) = lVar5;
    if (lVar5 == 0) {
      FUN_180018820(param_1,0xfffffffa,0x180032920,param_4);
      return 0;
    }
    if ((param_5 != 0) || (puVar13 = &DAT_18002ed17, param_6 != 0)) {
      puVar13 = &DAT_180032954;
    }
    snprintf(lVar5,*(undefined8 *)(param_1 + 0x11e40),"scp -%st ",puVar13);
    lVar5 = *(longlong *)(param_1 + 0x11e38);
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(lVar5 + lVar9) != '\0');
    if (*(int *)(param_1 + 0x8c) == 0) {
      do {
        sVar10 = sVar10 + 1;
      } while (param_2[sVar10] != '\0');
      memcpy((void *)(lVar5 + lVar9),param_2,sVar10);
    }
    else {
      sVar10 = FUN_18001e7b0(param_2,(char *)(lVar5 + lVar9),
                             *(longlong *)(param_1 + 0x11e40) - lVar9);
    }
    *(size_t *)(param_1 + 0x11e40) = lVar9 + sVar10;
    *(int *)(param_1 + 0x11e30) = 2;
LAB_18001e2f7:
    plVar14 = (longlong *)0x200000;
    lVar5 = FUN_180003c00(param_1,"session",7,(longlong *)0x200000,0x8000,(longlong *)0x0,0);
    *(longlong *)(param_1 + 0x11f50) = lVar5;
    if (lVar5 == 0) {
      iVar3 = libssh2_session_last_errno(param_1);
      if (iVar3 != -0x25) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11e38),param_1);
        *(undefined8 *)(param_1 + 0x11e38) = 0;
        *(undefined4 *)(param_1 + 0x11e30) = 0;
        return 0;
      }
      pcVar12 = "Would block starting up channel";
      goto LAB_18001e360;
    }
    *(undefined4 *)(param_1 + 0x11e30) = 3;
LAB_18001e398:
    puVar15 = (undefined8 *)(param_1 + 0x11e38);
    plVar14 = (longlong *)*puVar15;
    iVar3 = FUN_180004270(*(longlong *)(param_1 + 0x11f50),&DAT_180032988,4,plVar14,
                          *(size_t *)(param_1 + 0x11e40));
    if (iVar3 == -0x25) {
      pcVar12 = "Would block requesting SCP startup";
      goto LAB_18001e360;
    }
    if (iVar3 == 0) {
      (**(code **)(param_1 + 0x18))(*puVar15);
      *puVar15 = 0;
      *(undefined4 *)(param_1 + 0x11e30) = 4;
LAB_18001e408:
      plVar14 = (longlong *)0x1;
      uVar6 = FUN_180004510(*(longlong *)(param_1 + 0x11f50),0,param_1 + 0x11e48,1);
      uVar4 = (uint)uVar6;
      if (uVar4 == 0xffffffdb) {
        pcVar12 = "Would block waiting for response from remote";
        goto LAB_18001e360;
      }
      if ((int)uVar4 < 0) {
        pcVar12 = "SCP failure";
        goto LAB_18001e73d;
      }
      if (uVar4 != 0) {
        if (*(char *)(param_1 + 0x11e48) == '\0') {
          if ((param_5 != 0) || (param_6 != 0)) {
            iVar3 = snprintf(param_1 + 0x11e48,0x100,"T%ld 0 %ld 0\n",param_5 & 0xffffffff);
            *(longlong *)(param_1 + 0x11f48) = (longlong)iVar3;
          }
          iVar3 = 5;
          *(undefined4 *)(param_1 + 0x11e30) = 5;
          goto LAB_18001e4b8;
        }
        pcVar12 = "Invalid ACK response from remote";
        goto LAB_18001e738;
      }
LAB_18001e6bc:
      iVar3 = libssh2_channel_eof(*(longlong *)(param_1 + 0x11f50));
      if (iVar3 == 0) {
        return *(longlong *)(param_1 + 0x11f50);
      }
      pcVar12 = "Unexpected channel close";
    }
    else {
      (**(code **)(param_1 + 0x18))();
      pcVar12 = "Unknown error while getting error string";
      *puVar15 = 0;
    }
LAB_18001e738:
    uVar4 = 0xffffffe4;
LAB_18001e73d:
    uVar6 = (ulonglong)uVar4;
    FUN_180018820(param_1,uVar4,(longlong)pcVar12,plVar14);
    uVar1 = *(undefined4 *)(param_1 + 0x270);
    uVar2 = *(undefined8 *)(param_1 + 0x268);
    do {
      uVar8 = libssh2_channel_free(*(longlong **)(param_1 + 0x11f50),uVar6,pcVar12,plVar14);
    } while ((int)uVar8 == -0x25);
    *(undefined4 *)(param_1 + 0x270) = uVar1;
    *(undefined8 *)(param_1 + 0x11f50) = 0;
    *(undefined4 *)(param_1 + 0x11e30) = 0;
    *(undefined8 *)(param_1 + 0x268) = uVar2;
    return 0;
  }
  if (iVar3 == 2) goto LAB_18001e2f7;
  if (iVar3 == 3) goto LAB_18001e398;
  if (iVar3 == 4) goto LAB_18001e408;
LAB_18001e4b8:
  if ((param_5 == 0) && (param_6 == 0)) {
    if (iVar3 == 5) {
      *(undefined4 *)(param_1 + 0x11e30) = 7;
LAB_18001e5a4:
      strrchr(param_2,0x2f);
      iVar3 = snprintf(param_1 + 0x11e48,0x100,"C0%o %I64d %s\n",(ulonglong)param_3);
      *(longlong *)(param_1 + 0x11f48) = (longlong)iVar3;
      *(undefined4 *)(param_1 + 0x11e30) = 8;
LAB_18001e61f:
      plVar14 = *(longlong **)(param_1 + 0x11f48);
      sVar10 = FUN_180004890(*(longlong *)(param_1 + 0x11f50),0,(void *)(param_1 + 0x11e48),
                             (ulonglong)plVar14);
      if ((int)sVar10 == -0x25) {
        pcVar12 = "Would block send core file data for SCP file";
        goto LAB_18001e360;
      }
      if ((int)sVar10 != *(int *)(param_1 + 0x11f48)) {
        uVar4 = 0xfffffff9;
        pcVar12 = "Unable to send core file data for SCP file";
        goto LAB_18001e73d;
      }
      *(undefined4 *)(param_1 + 0x11e30) = 9;
    }
    else {
LAB_18001e59f:
      if (iVar3 == 7) goto LAB_18001e5a4;
      if (iVar3 == 8) goto LAB_18001e61f;
      if (iVar3 != 9) goto LAB_18001e783;
    }
    plVar11 = (longlong *)(param_1 + 0x11f50);
    plVar14 = (longlong *)0x1;
    uVar6 = FUN_180004510(*plVar11,0,param_1 + 0x11e48,1);
    iVar3 = (int)uVar6;
    if (iVar3 != -0x25) {
      if (iVar3 < 0) {
        pcVar12 = "Invalid ACK response from remote";
      }
      else {
        if (iVar3 == 0) goto LAB_18001e6bc;
        if (*(char *)(param_1 + 0x11e48) == '\0') {
LAB_18001e783:
          *(undefined4 *)(param_1 + 0x11e30) = 0;
          return *(longlong *)(param_1 + 0x11f50);
        }
        plVar7 = (longlong *)FUN_1800041b0(*plVar11,0);
        lVar5 = (**(code **)(param_1 + 8))((longlong)plVar7 + 1);
        if (lVar5 == 0) {
          uVar4 = 0xfffffffa;
          pcVar12 = "failed to get memory";
          goto LAB_18001e73d;
        }
        plVar14 = plVar7;
        uVar6 = FUN_180004510(*plVar11,0,lVar5,(ulonglong)plVar7);
        if (0 < (int)uVar6) {
          *(undefined1 *)(lVar5 + (longlong)plVar7) = 0;
        }
        (**(code **)(param_1 + 0x18))(lVar5,param_1);
        pcVar12 = "failed to send file";
      }
      goto LAB_18001e738;
    }
  }
  else {
    if (iVar3 == 5) {
      plVar14 = *(longlong **)(param_1 + 0x11f48);
      sVar10 = FUN_180004890(*(longlong *)(param_1 + 0x11f50),0,(void *)(param_1 + 0x11e48),
                             (ulonglong)plVar14);
      if ((int)sVar10 == -0x25) {
        pcVar12 = "Would block sending time data for SCP file";
        goto LAB_18001e360;
      }
      if ((int)sVar10 != *(int *)(param_1 + 0x11f48)) {
        uVar4 = 0xfffffff9;
        pcVar12 = "Unable to send time data for SCP file";
        goto LAB_18001e73d;
      }
      *(undefined4 *)(param_1 + 0x11e30) = 6;
    }
    else if (iVar3 != 6) goto LAB_18001e59f;
    plVar14 = (longlong *)0x1;
    uVar6 = FUN_180004510(*(longlong *)(param_1 + 0x11f50),0,param_1 + 0x11e48,1);
    uVar4 = (uint)uVar6;
    if (uVar4 != 0xffffffdb) {
      if ((int)uVar4 < 0) {
        pcVar12 = "SCP failure";
        goto LAB_18001e73d;
      }
      if (uVar4 == 0) goto LAB_18001e6bc;
      if (*(char *)(param_1 + 0x11e48) != '\0') {
        pcVar12 = "Invalid SCP ACK response";
        goto LAB_18001e738;
      }
      *(undefined4 *)(param_1 + 0x11e30) = 7;
      goto LAB_18001e5a4;
    }
  }
  pcVar12 = "Would block waiting for response";
LAB_18001e360:
  FUN_180018820(param_1,0xffffffdb,(longlong)pcVar12,plVar14);
  return 0;
}




longlong FUN_18001e7b0(char *param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar1 = param_2 + param_3;
  pcVar3 = param_2;
  if (*param_1 != '\0') {
    do {
      if (pcVar1 + -1 <= pcVar3) break;
      pcVar4 = pcVar3;
      if (*param_1 == '!') {
        if (iVar5 == 0) {
          pcVar4 = pcVar3 + 1;
          if (pcVar1 <= pcVar4) {
            return 0;
          }
          *pcVar3 = '\\';
        }
        else if (iVar5 == 1) {
          if (pcVar1 <= pcVar3 + 2) {
            return 0;
          }
          pcVar3[0] = '\'';
          pcVar3[1] = '\\';
          pcVar4 = pcVar3 + 2;
        }
        else if (iVar5 == 2) {
          if (pcVar1 <= pcVar3 + 2) {
            return 0;
          }
          pcVar3[0] = '\"';
          pcVar3[1] = '\\';
          pcVar4 = pcVar3 + 2;
        }
        iVar5 = 0;
      }
      else if (*param_1 == '\'') {
        if (iVar5 == 0) {
          pcVar4 = pcVar3 + 1;
          if (pcVar1 <= pcVar4) {
            return 0;
          }
          *pcVar3 = '\"';
        }
        else if (iVar5 == 1) {
          if (pcVar1 <= pcVar3 + 2) {
            return 0;
          }
          pcVar3[0] = '\'';
          pcVar3[1] = '\"';
          iVar5 = 2;
          pcVar4 = pcVar3 + 2;
          goto LAB_18001e8ca;
        }
        iVar5 = 2;
      }
      else {
        if (iVar5 == 0) {
          pcVar4 = pcVar3 + 1;
          if (pcVar1 <= pcVar4) {
            return 0;
          }
          *pcVar3 = '\'';
        }
        else if (iVar5 == 2) {
          if (pcVar1 <= pcVar3 + 2) {
            return 0;
          }
          pcVar3[0] = '\"';
          pcVar3[1] = '\'';
          iVar5 = 1;
          pcVar4 = pcVar3 + 2;
          goto LAB_18001e8ca;
        }
        iVar5 = 1;
      }
LAB_18001e8ca:
      pcVar3 = pcVar4 + 1;
      if (pcVar1 <= pcVar3) {
        return 0;
      }
      cVar2 = *param_1;
      param_1 = param_1 + 1;
      *pcVar4 = cVar2;
    } while (*param_1 != '\0');
    if (iVar5 == 1) {
      if (pcVar1 <= pcVar3 + 1) {
        return 0;
      }
      *pcVar3 = '\'';
    }
    else {
      if (iVar5 != 2) goto LAB_18001e912;
      if (pcVar1 <= pcVar3 + 1) {
        return 0;
      }
      *pcVar3 = '\"';
    }
    pcVar3 = pcVar3 + 1;
  }
LAB_18001e912:
  if (pcVar1 <= pcVar3 + 1) {
    return 0;
  }
  *pcVar3 = '\0';
  return (longlong)pcVar3 - (longlong)param_2;
}




undefined4 FUN_18001e930(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return uVar1;
}




void FUN_18001e940(ulonglong param_1,__time64_t param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  __time64_t _Time1;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  double dVar9;
  undefined1 auStack_488 [32];
  int *local_468;
  int local_458 [2];
  int local_450;
  int local_44c;
  int local_448 [2];
  undefined8 local_440;
  int local_238 [2];
  undefined8 local_230;
  ulonglong local_28;
  
  local_28 = DAT_18003b280 ^ (ulonglong)auStack_488;
  piVar5 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  iVar4 = libssh2_keepalive_send(param_1,local_458);
  if (iVar4 == 0) {
    iVar4 = local_458[0] * 1000;
    uVar1 = *(uint *)(param_1 + 0x25c);
    if (uVar1 == 0) {
      iVar4 = 1000;
    }
    if ((*(int *)(param_1 + 0xb0) < 1) ||
       ((local_458[0] != 0 && (iVar4 <= *(int *)(param_1 + 0xb0))))) {
      bVar3 = 0 < iVar4;
    }
    else {
      _Time1 = _time64((__time64_t *)0x0);
      dVar9 = _difftime64(_Time1,param_2);
      if (*(int *)(param_1 + 0xb0) < (int)(dVar9 * 1000.0)) {
        FUN_180018820(param_1,0xfffffff7,0x180032f20,param_4);
        goto LAB_18001ead5;
      }
      iVar4 = *(int *)(param_1 + 0xb0) - (int)(dVar9 * 1000.0);
      bVar3 = true;
    }
    local_450 = iVar4 / 1000;
    local_44c = (iVar4 % 1000) * 1000;
    uVar2 = *(undefined8 *)(param_1 + 0x250);
    piVar8 = piVar5;
    if ((uVar1 & 1) != 0) {
      piVar8 = local_448;
      local_448[0] = 1;
      local_440 = uVar2;
    }
    piVar7 = piVar5;
    if ((uVar1 & 2) != 0) {
      piVar7 = local_238;
      local_238[0] = 1;
      local_230 = uVar2;
    }
    local_468 = &local_450;
    if (!bVar3) {
      local_468 = piVar5;
    }
    uVar6 = 0;
    iVar4 = Ordinal_18((int)uVar2 + 1,piVar8,piVar7);
    if (iVar4 == 0) {
      FUN_180018820(param_1,0xfffffff7,0x180032f38,uVar6);
    }
    else if (iVar4 < 0) {
      FUN_180018820(param_1,0xfffffff7,0x180032f58,uVar6);
    }
  }
LAB_18001ead5:
  FUN_18002af30(local_28 ^ (ulonglong)auStack_488);
  return;
}




undefined4 FUN_18001eaf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong _Size;
  char *pcVar5;
  char local_res8 [8];
  
  _Size = 0;
  puVar1 = (ulonglong *)(param_1 + 0x11550);
  if (*(int *)(param_1 + 0x11448) == 0) {
    *(undefined4 *)(param_1 + 0x11448) = 2;
  }
  else {
    _Size = *puVar1;
    if (0xff < _Size) goto LAB_18001ebb0;
  }
  pcVar5 = (char *)(param_1 + 0x1144c + _Size);
  do {
    if ((_Size != 0) && (pcVar5[-1] == '\n')) break;
    *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffe;
    param_4 = 0;
    local_res8[0] = '\0';
    lVar4 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x250),local_res8,1,0,param_1);
    if (lVar4 < 0) {
      if (lVar4 == -0xb) {
        *(undefined4 *)(param_1 + 0x25c) = 1;
        *puVar1 = _Size;
        return 0xffffffdb;
      }
      *(undefined4 *)(param_1 + 0x11448) = 0;
      *puVar1 = 0;
      return 0xffffffd5;
    }
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 600) = 0xffffffff;
      return 0xfffffff3;
    }
    if (((local_res8[0] != '\r') && (local_res8[0] != '\n')) || (_Size != 0)) {
      if (local_res8[0] == '\0') {
        *(undefined4 *)(param_1 + 0x11448) = 0;
        *(undefined8 *)(param_1 + 0x11550) = 0;
        goto LAB_18001ec1f;
      }
      _Size = _Size + 1;
      *pcVar5 = local_res8[0];
      pcVar5 = pcVar5 + 1;
    }
  } while (_Size < 0x100);
LAB_18001ebb0:
  do {
    cVar2 = *(char *)(param_1 + 0x1144b + _Size);
    if ((cVar2 != '\n') && (cVar2 != '\r')) break;
    _Size = _Size - 1;
  } while (_Size != 0);
  *(undefined4 *)(param_1 + 0x11448) = 0;
  *puVar1 = 0;
  if (_Size == 0) {
LAB_18001ec1f:
    uVar3 = 0xfffffffe;
  }
  else {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x138),param_1);
    }
    _Dst = (void *)(**(code **)(param_1 + 8))(_Size + 1,param_1);
    *(void **)(param_1 + 0x138) = _Dst;
    if (_Dst == (void *)0x0) {
      uVar3 = FUN_180018820(param_1,0xfffffffa,0x180032ea0,param_4);
    }
    else {
      memcpy(_Dst,(void *)(param_1 + 0x1144c),_Size);
      *(undefined1 *)(_Size + *(longlong *)(param_1 + 0x138)) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}




void libssh2_poll(longlong param_1,uint param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_4c8 [32];
  int *local_4a8;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  longlong local_478;
  uint local_468 [2];
  longlong alStack_460 [65];
  uint local_258 [2];
  longlong alStack_250 [65];
  ulonglong local_48;
  ulonglong uVar9;
  
                    /* 0x1ece0  63  libssh2_poll */
  local_48 = DAT_18003b280 ^ (ulonglong)auStack_4c8;
  uVar10 = 0;
  local_468[0] = 0;
  lVar4 = 0;
  local_258[0] = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar13 = uVar10;
  local_498 = param_3;
  local_478 = param_1;
  if (param_2 != 0) {
    do {
      uVar9 = 0;
      pcVar1 = (char *)(param_1 + (ulonglong)uVar13 * 0x18);
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      cVar2 = *pcVar1;
      uVar7 = (uint)uVar15;
      if (cVar2 == '\x01') {
        uVar11 = *(uint *)(pcVar1 + 0x10);
        if ((uVar11 & 1) != 0) {
          if (uVar7 != 0) {
            do {
              if (alStack_460[uVar9] == *(longlong *)(pcVar1 + 8)) break;
              uVar6 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar6;
            } while (uVar6 < uVar7);
          }
          if (((uint)uVar9 == uVar7) && (uVar7 < 0x40)) {
            alStack_460[uVar9] = *(longlong *)(pcVar1 + 8);
            local_468[0] = local_468[0] + 1;
            uVar15 = (ulonglong)local_468[0];
          }
          if (uVar16 < *(ulonglong *)(pcVar1 + 8)) {
            uVar16 = *(ulonglong *)(pcVar1 + 8);
          }
        }
        uVar9 = 0;
        if ((uVar11 & 4) != 0) {
          if (uVar10 != 0) {
            do {
              if (alStack_250[uVar9] == *(longlong *)(pcVar1 + 8)) break;
              uVar7 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar7;
            } while (uVar7 < uVar10);
          }
          if (((uint)uVar9 == uVar10) && (uVar10 < 0x40)) {
            alStack_250[uVar9] = *(longlong *)(pcVar1 + 8);
            uVar10 = local_258[0] + 1;
            local_258[0] = uVar10;
          }
          if (uVar16 < *(ulonglong *)(pcVar1 + 8)) {
            uVar16 = *(ulonglong *)(pcVar1 + 8);
          }
        }
      }
      else {
        if (cVar2 == '\x02') {
          if (uVar7 != 0) {
            do {
              if (alStack_460[uVar9] ==
                  *(longlong *)(*(longlong *)(*(longlong *)(pcVar1 + 8) + 0x68) + 0x250)) break;
              uVar11 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar11;
            } while (uVar11 < uVar7);
          }
          if (((uint)uVar9 == uVar7) && (uVar7 < 0x40)) {
            alStack_460[uVar9] =
                 *(longlong *)(*(longlong *)(*(longlong *)(pcVar1 + 8) + 0x68) + 0x250);
            local_468[0] = local_468[0] + 1;
            uVar15 = (ulonglong)local_468[0];
          }
          lVar8 = *(longlong *)(*(longlong *)(pcVar1 + 8) + 0x68);
        }
        else {
          if (cVar2 != '\x03') {
            if (lVar4 != 0) {
              FUN_180018820(lVar4,0xffffffdd,0x180033118,uVar15);
            }
            goto LAB_18001f2f7;
          }
          if (uVar7 != 0) {
            do {
              if (alStack_460[uVar9] ==
                  *(longlong *)(*(longlong *)(*(longlong *)(pcVar1 + 8) + 0x18) + 0x250)) break;
              uVar11 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar11;
            } while (uVar11 < uVar7);
          }
          if (((uint)uVar9 == uVar7) && (uVar7 < 0x40)) {
            alStack_460[uVar9] =
                 *(longlong *)(*(longlong *)(*(longlong *)(pcVar1 + 8) + 0x18) + 0x250);
            local_468[0] = local_468[0] + 1;
            uVar15 = (ulonglong)local_468[0];
          }
          lVar8 = *(longlong *)(*(longlong *)(pcVar1 + 8) + 0x18);
        }
        if (uVar16 < *(ulonglong *)(lVar8 + 0x250)) {
          uVar16 = *(ulonglong *)(lVar8 + 0x250);
        }
        if (lVar4 == 0) {
          lVar4 = lVar8;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_2);
  }
  local_494 = (int)uVar16 + 1;
  do {
    iVar17 = 0;
    if (param_2 != 0) {
      puVar14 = (uint *)(param_1 + 0x14);
      uVar16 = (ulonglong)param_2;
      do {
        uVar13 = puVar14[-1];
        uVar15 = (ulonglong)uVar13;
        uVar10 = *puVar14;
        if (uVar13 != uVar10) {
          if ((char)puVar14[-5] == '\x02') {
            if (((uVar13 & 1) != 0) && ((uVar10 & 1) == 0)) {
              lVar4 = *(longlong *)(puVar14 + -3);
              if (lVar4 == 0) {
                iVar3 = -0x27;
              }
              else {
                lVar8 = *(longlong *)(lVar4 + 0x68);
                for (puVar5 = (undefined8 *)FUN_180018d50(lVar8 + 0x218);
                    puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)FUN_180018d70(puVar5)) {
                  if ((ulonglong)puVar5[4] < 5) {
                    iVar3 = FUN_180018820(lVar8,0xffffffda,0x180033100,uVar15);
                    goto LAB_18001f01b;
                  }
                  iVar3 = FUN_180018ea0((undefined1 *)(puVar5[3] + 1));
                  if ((*(int *)(lVar4 + 0x30) == iVar3) && (*(char *)puVar5[3] == '^')) {
                    iVar3 = 1;
                    goto LAB_18001f01b;
                  }
                }
                iVar3 = 0;
              }
LAB_18001f01b:
              *puVar14 = *puVar14 | (uint)(iVar3 != 0);
              uVar10 = *puVar14;
            }
            if (((puVar14[-1] & 2) != 0) && ((uVar10 & 2) == 0)) {
              lVar4 = *(longlong *)(puVar14 + -3);
              if (lVar4 == 0) {
                iVar3 = -0x27;
              }
              else {
                lVar8 = *(longlong *)(lVar4 + 0x68);
                for (puVar5 = (undefined8 *)FUN_180018d50(lVar8 + 0x218);
                    puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)FUN_180018d70(puVar5)) {
                  if ((ulonglong)puVar5[4] < 5) {
                    iVar3 = FUN_180018820(lVar8,0xffffffda,0x180033100,uVar15);
                    goto LAB_18001f0c3;
                  }
                  iVar3 = FUN_180018ea0((undefined1 *)(puVar5[3] + 1));
                  if ((*(int *)(lVar4 + 0x30) == iVar3) && ((byte)(*(char *)puVar5[3] + 0xa2U) < 2))
                  {
                    iVar3 = 1;
                    goto LAB_18001f0c3;
                  }
                }
                iVar3 = 0;
              }
LAB_18001f0c3:
              *puVar14 = *puVar14 | -(uint)(iVar3 != 0) & 2;
              uVar10 = *puVar14;
            }
            if (((puVar14[-1] & 4) != 0) && ((uVar10 & 4) == 0)) {
              uVar10 = -(uint)(*(int *)(*(longlong *)(puVar14 + -3) + 0x38) != 0) & 4 | uVar10;
              *puVar14 = uVar10;
            }
            lVar4 = *(longlong *)(puVar14 + -3);
            if ((*(char *)(lVar4 + 0x54) != '\0') || (*(char *)(lVar4 + 0x40) != '\0')) {
              uVar10 = uVar10 | 0x80;
              *puVar14 = uVar10;
            }
            iVar3 = *(int *)(*(longlong *)(lVar4 + 0x68) + 600);
          }
          else {
            if ((char)puVar14[-5] != '\x03') goto LAB_18001f117;
            if (((uVar13 & 1) != 0) && ((uVar10 & 1) == 0)) {
              lVar4 = FUN_180018d50(*(longlong *)(puVar14 + -3) + 0x30);
              uVar10 = (uint)(lVar4 != 0) | *puVar14;
              *puVar14 = uVar10;
            }
            iVar3 = *(int *)(*(longlong *)(*(longlong *)(puVar14 + -3) + 0x18) + 600);
          }
          if (iVar3 == -1) {
            uVar10 = uVar10 | 0x90;
            *puVar14 = uVar10;
          }
        }
LAB_18001f117:
        if (uVar10 != 0) {
          iVar17 = iVar17 + 1;
        }
        puVar14 = puVar14 + 6;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      param_1 = local_478;
      param_3 = local_498;
      if (iVar17 != 0) {
        param_3 = 0;
      }
    }
    local_490 = param_3 / 1000;
    local_48c = (param_3 % 1000) * 1000;
    FUN_180018c80(&local_488);
    local_4a8 = &local_490;
    iVar3 = Ordinal_18(local_494,local_468,local_258,0);
    FUN_180018c80(&local_480);
    param_3 = param_3 + ((local_488 - local_480) * 1000 - (local_47c - local_484) / 1000);
    local_498 = param_3;
    if ((0 < iVar3) && (param_2 != 0)) {
      plVar12 = (longlong *)(param_1 + 8);
      uVar16 = (ulonglong)param_2;
      do {
        cVar2 = (char)plVar12[-1];
        if (cVar2 == '\x01') {
          iVar3 = Ordinal_151(*plVar12,local_468);
          if (iVar3 != 0) {
            *(uint *)((longlong)plVar12 + 0xc) = *(uint *)((longlong)plVar12 + 0xc) | 1;
          }
          iVar3 = Ordinal_151(*plVar12,local_258);
          if (iVar3 != 0) {
            *(uint *)((longlong)plVar12 + 0xc) = *(uint *)((longlong)plVar12 + 0xc) | 4;
          }
          if (*(int *)((longlong)plVar12 + 0xc) != 0) {
            iVar17 = iVar17 + 1;
          }
        }
        else if (cVar2 == '\x02') {
          iVar3 = Ordinal_151(*(undefined8 *)(*(longlong *)(*plVar12 + 0x68) + 0x250),local_468);
          if (iVar3 != 0) {
            do {
              iVar3 = FUN_1800261c0(*(ulonglong *)(*plVar12 + 0x68));
            } while (0 < iVar3);
          }
        }
        else if ((cVar2 == '\x03') &&
                (iVar3 = Ordinal_151(*(undefined8 *)(*(longlong *)(*plVar12 + 0x18) + 0x250),
                                     local_468), iVar3 != 0)) {
          do {
            iVar3 = FUN_1800261c0(*(ulonglong *)(*plVar12 + 0x18));
          } while (0 < iVar3);
        }
        plVar12 = plVar12 + 3;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  } while ((0 < param_3) && (iVar17 == 0));
LAB_18001f2f7:
  FUN_18002af30(local_48 ^ (ulonglong)auStack_4c8);
  return;
}




undefined4
libssh2_poll_channel_read(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
                    /* 0x1f320  64  libssh2_poll_channel_read */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  puVar4 = (undefined8 *)FUN_180018d50(lVar1 + 0x218);
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if ((ulonglong)puVar4[4] < 5) break;
    iVar2 = FUN_180018ea0((undefined1 *)(puVar4[3] + 1));
    if (*(int *)(param_1 + 0x30) == iVar2) {
      if (param_2 == 1) {
        if ((byte)(*(char *)puVar4[3] + 0xa2U) < 2) {
          return 1;
        }
      }
      else if ((param_2 == 0) && (*(char *)puVar4[3] == '^')) {
        return 1;
      }
    }
    puVar4 = (undefined8 *)FUN_180018d70(puVar4);
  }
  uVar3 = FUN_180018820(lVar1,0xffffffda,0x180033100,param_4);
  return uVar3;
}




undefined8 libssh2_session_abstract(undefined8 param_1)

{
                    /* 0x1f3f0  75  libssh2_session_abstract */
  return param_1;
}




undefined8 libssh2_session_banner_get(longlong param_1)

{
                    /* 0x1f400  76  libssh2_session_banner_get */
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x138);
  }
  return 0;
}




undefined4 libssh2_session_block_directions(longlong param_1)

{
                    /* 0x1f4f0  78  libssh2_session_block_directions */
  return *(undefined4 *)(param_1 + 0x25c);
}




undefined8 libssh2_session_callback_set(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
                    /* 0x1f500  79  libssh2_session_callback_set */
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    return uVar1;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    return uVar1;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    return uVar1;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    return uVar1;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    return uVar1;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    return uVar1;
  case 6:
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = param_3;
    return uVar1;
  case 7:
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    return uVar1;
  case 8:
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_3;
    return uVar1;
  case 9:
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = param_3;
    return uVar1;
  default:
    return 0;
  }
}




uint libssh2_session_disconnect_ex(ulonglong param_1,undefined4 param_2,void *param_3,void *param_4)

{
  uint uVar1;
  __time64_t _Var2;
  size_t sVar3;
  ulonglong uVar4;
  char *pcVar5;
  void *pvVar6;
  longlong local_res8;
  
                    /* 0x1f5b0  80  libssh2_session_disconnect_ex */
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
  pvVar6 = param_4;
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar4 = 0;
    sVar3 = 0;
    if (*(int *)(param_1 + 0x11854) == 0) {
      if (param_3 != (void *)0x0) {
        uVar4 = 0xffffffffffffffff;
        do {
          uVar4 = uVar4 + 1;
        } while (*(char *)((longlong)param_3 + uVar4) != '\0');
      }
      if (param_4 != (void *)0x0) {
        sVar3 = 0xffffffffffffffff;
        do {
          sVar3 = sVar3 + 1;
        } while (*(char *)(sVar3 + (longlong)param_4) != '\0');
      }
      if (uVar4 < 0x101) {
        if (sVar3 < 0x101) {
          *(ulonglong *)(param_1 + 0x11968) = uVar4 + 0xd + sVar3;
          *(undefined1 *)(param_1 + 0x11858) = 1;
          local_res8 = param_1 + 0x11859;
          FUN_180019150(&local_res8,param_2);
          FUN_1800190c0(&local_res8,param_3,uVar4);
          FUN_180019150(&local_res8,(int)sVar3);
          *(undefined4 *)(param_1 + 0x11854) = 2;
          goto LAB_18001f6c7;
        }
        pcVar5 = "too long language string";
      }
      else {
        pcVar5 = "too long description";
      }
      uVar1 = FUN_180018820(param_1,0xffffffde,(longlong)pcVar5,pvVar6);
      if (uVar1 != 0xffffffdb) {
        return uVar1;
      }
    }
    else {
LAB_18001f6c7:
      pcVar5 = *(char **)(param_1 + 0x11968);
      pvVar6 = param_4;
      uVar1 = FUN_180026710(param_1,(void *)(param_1 + 0x11858),(size_t)pcVar5,param_4,sVar3);
      if (uVar1 != 0xffffffdb) {
        *(undefined4 *)(param_1 + 0x11854) = 0;
        return 0;
      }
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      return uVar1;
    }
    uVar1 = FUN_18001e940(param_1,_Var2,pcVar5,pvVar6);
    if (uVar1 != 0) {
      return uVar1;
    }
  } while( true );
}




undefined8 libssh2_session_flag(longlong param_1,int param_2,undefined4 param_3)

{
                    /* 0x1f730  81  libssh2_session_flag */
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x84) = param_3;
    return 0;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return 0xffffffde;
    }
    *(undefined4 *)(param_1 + 0x8c) = param_3;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x88) = param_3;
  return 0;
}




void libssh2_session_free(ulonglong param_1,ulonglong param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
                    /* 0x1f770  82  libssh2_session_free */
  uVar2 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar3 = FUN_18001fbc0(param_1,param_2,param_3,param_4);
    if ((int)uVar3 != -0x25) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == 0) break;
    param_2 = uVar2;
    iVar1 = FUN_18001e940(param_1,uVar2,param_3,param_4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




undefined4 libssh2_session_get_blocking(longlong param_1)

{
                    /* 0x1f7c0  83  libssh2_session_get_blocking */
  return *(undefined4 *)(param_1 + 0xac);
}




undefined4 libssh2_session_get_read_timeout(longlong param_1)

{
                    /* 0x1f7d0  84  libssh2_session_get_read_timeout */
  return *(undefined4 *)(param_1 + 0x11f68);
}




undefined4 libssh2_session_get_timeout(longlong param_1)

{
                    /* 0x1f7e0  85  libssh2_session_get_timeout */
  return *(undefined4 *)(param_1 + 0xb0);
}




void libssh2_session_handshake(ulonglong param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  
                    /* 0x1f7f0  86  libssh2_session_handshake */
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    iVar1 = FUN_180020190(param_1,param_2,param_3,param_4);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == 0) break;
    iVar1 = FUN_18001e940(param_1,_Var2,param_3,param_4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




undefined8 *
libssh2_session_init_ex(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 *_Dst;
  
                    /* 0x1f850  88  libssh2_session_init_ex */
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_18001ecb0;
  }
  _Dst = (undefined8 *)(*(code *)param_1)(0x11f70);
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,0x11f70);
    _Dst[1] = param_1;
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_18001ecc0;
    }
    _Dst[3] = param_2;
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_18001ecd0;
    }
    _Dst[0xc] = FUN_180018f80;
    _Dst[0xd] = FUN_180018f20;
    _Dst[2] = param_3;
    *_Dst = param_4;
    *(undefined8 *)((longlong)_Dst + 0xac) = 1;
    *(undefined4 *)(_Dst + 0x23ed) = 0x3c;
    *(undefined4 *)((longlong)_Dst + 0x8c) = 1;
    FUN_18000d910();
  }
  return _Dst;
}




undefined4 libssh2_session_last_errno(longlong param_1)

{
                    /* 0x1f930  89  libssh2_session_last_errno */
  return *(undefined4 *)(param_1 + 0x270);
}




undefined4
libssh2_session_last_error(longlong param_1,longlong *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  void *_Dst;
  size_t _Size;
  undefined *_Src;
  size_t sVar3;
  
                    /* 0x1f940  90  libssh2_session_last_error */
  _Size = 0;
  if (*(int *)(param_1 + 0x270) == 0) {
    if (param_2 != (longlong *)0x0) {
      if (param_4 == 0) {
        *param_2 = (longlong)&DAT_18002ed17;
      }
      else {
        puVar2 = (undefined1 *)(**(code **)(param_1 + 8))(1,param_1);
        *param_2 = (longlong)puVar2;
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar1 = 0;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      _Size = 0xffffffffffffffff;
      _Src = &DAT_18002ed17;
      if (*(undefined **)(param_1 + 0x268) != (undefined *)0x0) {
        _Src = *(undefined **)(param_1 + 0x268);
      }
      do {
        sVar3 = _Size;
        _Size = sVar3 + 1;
      } while (_Src[_Size] != '\0');
      if (param_4 == 0) {
        *param_2 = (longlong)_Src;
      }
      else {
        _Dst = (void *)(**(code **)(param_1 + 8))(sVar3 + 2,param_1);
        *param_2 = (longlong)_Dst;
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,_Src,_Size);
          *(undefined1 *)(_Size + *param_2) = 0;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)_Size;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x270);
  }
  return uVar1;
}




undefined *
libssh2_session_methods(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
                    /* 0x1fa30  92  libssh2_session_methods */
  switch(param_2) {
  case 0:
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    break;
  case 1:
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    break;
  case 2:
    puVar1 = *(undefined8 **)(param_1 + 0x1c0);
    break;
  case 3:
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    break;
  case 4:
    puVar1 = *(undefined8 **)(param_1 + 0x1d0);
    break;
  case 5:
    puVar1 = *(undefined8 **)(param_1 + 0x160);
    break;
  case 6:
    puVar1 = *(undefined8 **)(param_1 + 0x1e8);
    break;
  case 7:
    puVar1 = *(undefined8 **)(param_1 + 0x178);
    break;
  case 8:
  case 9:
    return &DAT_18002ed17;
  default:
    FUN_180018820(param_1,0xffffffde,0x180030f08,param_4);
    return (undefined *)0x0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    return (undefined *)*puVar1;
  }
  FUN_180018820(param_1,0xffffffef,0x1800330e8,param_4);
  return (undefined *)0x0;
}




void libssh2_session_set_blocking(longlong param_1,undefined4 param_2)

{
                    /* 0x1fb10  93  libssh2_session_set_blocking */
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}




void libssh2_session_set_last_error(longlong param_1,undefined4 param_2,char *param_3)

{
                    /* 0x1fb20  94  libssh2_session_set_last_error */
  FUN_1800188c0(param_1,param_2,param_3,1);
  return;
}




void libssh2_session_set_read_timeout(longlong param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1fb30  95  libssh2_session_set_read_timeout */
  iVar1 = 0x3c;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x11f68) = iVar1;
  return;
}




void libssh2_session_set_timeout(longlong param_1,undefined4 param_2)

{
                    /* 0x1fb50  96  libssh2_session_set_timeout */
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}




void libssh2_session_startup(ulonglong param_1,int param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  __time64_t _Var2;
  
                    /* 0x1fb60  97  libssh2_session_startup */
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    iVar1 = FUN_180020190(param_1,(char *)(longlong)param_2,param_3,param_4);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == 0) break;
    iVar1 = FUN_18001e940(param_1,_Var2,param_3,param_4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




undefined8 FUN_18001fbc0(longlong param_1,ulonglong param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_res8 [2];
  
  iVar1 = *(int *)(param_1 + 0x11850);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x11850) = 2;
LAB_18001fbe8:
    plVar3 = (longlong *)FUN_180018d50(param_1 + 0x228);
    while (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_1800039c0(plVar3,param_2,param_3,param_4);
      if ((int)uVar4 == -0x25) {
        return 0xffffffdb;
      }
      plVar3 = (longlong *)FUN_180018d50(param_1 + 0x228);
    }
    *(undefined4 *)(param_1 + 0x11850) = 3;
  }
  else {
    if (iVar1 == 2) goto LAB_18001fbe8;
    if (iVar1 != 3) goto LAB_18001fc70;
  }
  plVar3 = (longlong *)FUN_180018d50(param_1 + 0x240);
  while (plVar3 != (longlong *)0x0) {
    uVar5 = FUN_180003800(plVar3,param_2,param_3,param_4);
    if ((int)uVar5 == -0x25) {
      return 0xffffffdb;
    }
    plVar3 = (longlong *)FUN_180018d50(param_1 + 0x240);
  }
  *(undefined4 *)(param_1 + 0x11850) = 4;
LAB_18001fc70:
  if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
    if ((*(longlong *)(param_1 + 0xb8) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0xb8) + 0x40), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_1 + 0xc0);
    }
    if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1c0) + 0x30), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_1 + 0x1c8);
    }
    if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,1,param_1 + 0x1f0);
    }
    if ((*(longlong *)(param_1 + 0x1d0) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1d0) + 0x20), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_1 + 0x1e0);
    }
    if ((*(longlong *)(param_1 + 0x150) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x150) + 0x30), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_1 + 0x158);
    }
    if ((*(longlong *)(param_1 + 0x178) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x178) + 0x28), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,0,param_1 + 0x180);
    }
    if ((*(longlong *)(param_1 + 0x160) != 0) &&
       (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x160) + 0x20), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1,param_1 + 0x170);
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0xa0),param_1);
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x138),param_1);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x1a8),param_1);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x70),param_1);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x78),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x1b0),param_1);
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x1f8),param_1);
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x200),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x208),param_1);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x210),param_1);
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x140),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x188),param_1);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 400),param_1);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x198),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x1a0),param_1);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x128),param_1);
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x130),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11560) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11560),param_1);
  }
  if (*(longlong *)(param_1 + 0x11578) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11578),param_1);
  }
  if (*(longlong *)(param_1 + 0x11980) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11980),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11990) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11990),param_1);
  }
  if (*(longlong *)(param_1 + 0x119a8) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x119a8),param_1);
  }
  if (*(longlong *)(param_1 + 0x119c0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x119c0),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x119f0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x119f0),param_1);
  }
  if (*(longlong *)(param_1 + 0x11a00) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a00),param_1);
  }
  if (*(longlong *)(param_1 + 0x119e0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x119e0),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11a28) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a28),param_1);
  }
  if (*(longlong *)(param_1 + 0x11a38) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a38),param_1);
  }
  if (*(longlong *)(param_1 + 0x11a48) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a48),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11a78) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a78),param_1);
  }
  if (*(longlong *)(param_1 + 0x11a88) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11a88),param_1);
  }
  if (*(longlong *)(param_1 + 0x11ab0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11ab0),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11af0) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11af0),param_1);
  }
  if (*(longlong *)(param_1 + 0x11b00) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11b00),param_1);
  }
  if (*(longlong *)(param_1 + 0x11b18) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11b18),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11b40) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11b40),param_1);
  }
  if (*(longlong *)(param_1 + 0x11b70) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11b70),param_1);
  }
  if (*(longlong *)(param_1 + 0x11cf8) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11cf8),param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x11e38) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11e38),param_1);
  }
  if (*(longlong *)(param_1 + 0x11cc8) != 0) {
    (*(code *)*puVar6)(*(longlong *)(param_1 + 0x11cc8),param_1);
  }
  if (*(longlong *)(param_1 + 0x8b58) != 0) {
    (*(code *)*puVar6)(*(undefined8 *)(param_1 + 0x8b60),param_1);
  }
  plVar3 = (longlong *)FUN_180018d50(param_1 + 0x218);
  while (plVar3 != (longlong *)0x0) {
    FUN_180018d80(plVar3);
    (**(code **)(param_1 + 0x18))(plVar3[3],param_1);
    (**(code **)(param_1 + 0x18))(plVar3,param_1);
    plVar3 = (longlong *)FUN_180018d50(param_1 + 0x218);
  }
  if (*(int *)(param_1 + 0x260) != 0) {
    local_res8[0] = 0;
    Ordinal_10(*(undefined8 *)(param_1 + 0x250),0x8004667e,local_res8);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 200),param_1);
  }
  if ((*(longlong *)(param_1 + 0x268) != 0) && ((*(byte *)(param_1 + 0x274) & 1) != 0)) {
    (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x268),param_1);
  }
  (**(code **)(param_1 + 0x18))(param_1,param_1);
  return 0;
}




undefined4 FUN_180020190(ulonglong param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  undefined4 local_res8 [2];
  int local_res18 [2];
  
  iVar4 = *(int *)(param_1 + 0x11570);
  if (iVar4 == 0) {
    if (param_2 == (char *)0xffffffffffffffff) {
      uVar3 = FUN_180018820(param_1,0xffffffd3,0x180032f70,param_4);
      return uVar3;
    }
    local_res8[0] = 4;
    *(undefined8 *)(param_1 + 0x250) = param_2;
    piVar10 = local_res18;
    iVar4 = Ordinal_7(param_2,0xffff,0x1007,piVar10,local_res8);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 0x260) = (uint)(local_res18[0] == 0);
      if (local_res18[0] == 0) {
        local_res8[0] = 1;
        iVar4 = Ordinal_10(*(undefined8 *)(param_1 + 0x250),0x8004667e,local_res8);
        if (iVar4 != 0) {
          uVar3 = FUN_180018820(param_1,iVar4,0x180032f88,piVar10);
          return uVar3;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x260) = 0;
    }
    *(undefined4 *)(param_1 + 0x11570) = 2;
LAB_18002027c:
    lVar9 = 0x18;
    pcVar8 = "SSH-2.0-libssh2_1.11.0\r\n";
    if (*(int *)(param_1 + 0x11448) == 0) {
      pcVar2 = *(char **)(param_1 + 0x1a8);
      if (pcVar2 != (char *)0x0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
          pcVar8 = pcVar2;
        } while (pcVar2[lVar9] != '\0');
      }
      *(int *)(param_1 + 0x11448) = 2;
    }
    param_3 = lVar9 - *(longlong *)(param_1 + 0x11550);
    *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffd;
    param_2 = pcVar8 + *(longlong *)(param_1 + 0x11550);
    param_4 = 0;
    lVar6 = (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x250));
    if (lVar6 == lVar9 - *(longlong *)(param_1 + 0x11550)) {
      *(undefined8 *)(param_1 + 0x11550) = 0;
      *(undefined4 *)(param_1 + 0x11570) = 3;
      *(undefined4 *)(param_1 + 0x11448) = 0;
LAB_180020382:
      do {
        iVar4 = FUN_18001eaf0(param_1,param_2,param_3,param_4);
        if (iVar4 == -0x25) goto LAB_18002048e;
        if (iVar4 != 0) {
          uVar3 = FUN_180018820(param_1,iVar4,0x180032fd8,param_4);
          return uVar3;
        }
        param_2 = *(char **)(param_1 + 0x138);
        param_3 = 4;
        iVar4 = strncmp("SSH-",param_2,4);
      } while (iVar4 != 0);
      *(undefined4 *)(param_1 + 0x11570) = 4;
LAB_1800203dc:
      uVar5 = FUN_18000fe20(param_1,0,(uint *)(param_1 + 0x115b8));
      if (uVar5 != 0xffffffdb) {
        if (uVar5 != 0) {
          uVar3 = FUN_180018820(param_1,uVar5,0x180032ff8,param_4);
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x11570) = 5;
LAB_18002042f:
        *(undefined1 *)(param_1 + 0x11588) = 5;
        FUN_180018d00((undefined1 *)(param_1 + 0x11589),0xc);
        builtin_strncpy((char *)(param_1 + 0x1158d),"ssh-user",8);
        *(undefined4 *)(param_1 + 0x11595) = 0x68747561;
        *(undefined4 *)(param_1 + 0x11570) = 6;
LAB_180020470:
        uVar7 = 0;
        uVar5 = FUN_180026710(param_1,(void *)(param_1 + 0x11588),0x11,(void *)0x0,0);
        if (uVar5 != 0xffffffdb) {
          if (uVar5 != 0) {
            uVar3 = FUN_180018820(param_1,uVar5,0x180033030,uVar7);
            return uVar3;
          }
          *(undefined4 *)(param_1 + 0x11570) = 7;
          goto LAB_1800204c7;
        }
      }
    }
    else {
      if (lVar6 < 0) {
        if (lVar6 != -0xb) {
          *(undefined4 *)(param_1 + 0x11448) = 0;
          *(undefined8 *)(param_1 + 0x11550) = 0;
          uVar3 = FUN_180018820(param_1,0xffffffd5,0x180032fc0,param_4);
          return uVar3;
        }
        *(undefined4 *)(param_1 + 0x25c) = 2;
        return 0xffffffdb;
      }
      *(undefined4 *)(param_1 + 0x25c) = 2;
      if (0 < lVar6) {
        *(longlong *)(param_1 + 0x11550) = lVar6 + *(longlong *)(param_1 + 0x11550);
        return 0xffffffdb;
      }
    }
LAB_18002048e:
    uVar3 = 0xffffffdb;
  }
  else {
    if (iVar4 == 2) goto LAB_18002027c;
    if (iVar4 == 3) goto LAB_180020382;
    if (iVar4 == 4) goto LAB_1800203dc;
    if (iVar4 == 5) goto LAB_18002042f;
    if (iVar4 == 6) goto LAB_180020470;
    if (iVar4 != 7) {
      return 0xffffffde;
    }
LAB_1800204c7:
    plVar1 = (longlong *)(param_1 + 0x11578);
    plVar11 = (longlong *)(param_1 + 0x11580);
    uVar7 = FUN_18001a170(param_1,6,plVar1,plVar11,0,(void *)0x0,0,param_1 + 0x115a8);
    if ((int)uVar7 == 0) {
      if (*(ulonglong *)(param_1 + 0x11580) < 5) {
        uVar3 = FUN_180018820(param_1,0xfffffff2,0x18002e448,plVar11);
      }
      else {
        uVar5 = FUN_180018ea0((undefined1 *)(*plVar1 + 1));
        *(ulonglong *)(param_1 + 0x115a0) = (ulonglong)uVar5;
        if (((ulonglong)uVar5 == 0xc) &&
           (iVar4 = strncmp("ssh-userauth",(char *)(*plVar1 + 5),(ulonglong)uVar5), iVar4 == 0)) {
          (**(code **)(param_1 + 0x18))(*plVar1,param_1);
          uVar3 = 0;
          *plVar1 = 0;
          *(undefined4 *)(param_1 + 0x11570) = 0;
        }
        else {
          (**(code **)(param_1 + 0x18))(*plVar1,param_1);
          *plVar1 = 0;
          uVar3 = FUN_180018820(param_1,0xfffffff2,0x180033088,plVar11);
        }
      }
    }
    else {
      uVar3 = FUN_180018820(param_1,(int)uVar7,0x180033058,plVar11);
    }
  }
  return uVar3;
}




uint libssh2_sftp_close_handle(longlong *param_1,longlong *param_2,char *param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  size_t sVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 *local_res10;
  longlong *local_res18;
  
                    /* 0x205c0  99  libssh2_sftp_close_handle */
  if (param_1 == (longlong *)0x0) {
    return 0xffffffd9;
  }
  plVar7 = (longlong *)_time64((__time64_t *)0x0);
  local_res18 = plVar7;
LAB_180020610:
  plVar2 = (longlong *)param_1[3];
  uVar5 = 0;
  lVar4 = param_1[0x24];
  uVar12 = (ulonglong)((int)lVar4 + 0xd);
  lVar10 = *plVar2;
  plVar3 = *(longlong **)(lVar10 + 0x68);
  if ((int)param_1[0x2d] == 0) {
    *(undefined4 *)(plVar2 + 8) = 0;
    local_res10 = (undefined1 *)(*(code *)plVar3[1])(uVar12,plVar3);
    param_1[0x2e] = (longlong)local_res10;
    if (local_res10 == (undefined1 *)0x0) {
      param_3 = "Unable to allocate memory for FXP_CLOSE packet";
      *(undefined4 *)(param_1 + 0x2d) = 0;
      param_2 = (longlong *)0xfffffffa;
      uVar5 = FUN_180018820((longlong)plVar3,0xfffffffa,0x180033908,param_4);
    }
    else {
      FUN_180019150((longlong *)&local_res10,(int)lVar4 + 9);
      *local_res10 = 4;
      local_res10 = local_res10 + 1;
      *(int *)((longlong)param_1 + 0x16c) = (int)plVar2[1];
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      FUN_180019150((longlong *)&local_res10,*(undefined4 *)((longlong)param_1 + 0x16c));
      param_3 = (char *)param_1[0x24];
      param_2 = param_1 + 4;
      FUN_1800190c0((longlong *)&local_res10,param_2,(ulonglong)param_3);
      *(undefined4 *)(param_1 + 0x2d) = 2;
    }
  }
  if ((int)param_1[0x2d] != 2) {
LAB_18002073a:
    plVar11 = param_2;
    if ((int)param_1[0x2d] == 3) {
      iVar6 = *(int *)((longlong)param_1 + 0x16c);
      plVar11 = *(longlong **)(*plVar2 + 0x68);
      for (plVar9 = (longlong *)FUN_180018d50((longlong)(plVar2 + 2)); plVar9 != (longlong *)0x0;
          plVar9 = (longlong *)FUN_180018d70(plVar9)) {
        pcVar13 = (char *)plVar9[4];
        if ((*pcVar13 == 'e') && ((int)plVar9[3] == iVar6)) {
          uVar12 = plVar9[5];
          FUN_180018d80(plVar9);
          (*(code *)plVar11[3])(plVar9);
          if (8 < uVar12) goto LAB_1800208a5;
          uVar5 = 0xffffffda;
          goto LAB_180020913;
        }
      }
      iVar1 = (int)plVar11[0x4b];
      while (iVar1 == 0) {
        uVar5 = FUN_180023e70(plVar2,param_2,param_3,param_4);
        if ((int)uVar5 < 0) {
          plVar7 = local_res18;
          if (uVar5 == 0xffffffdb) goto LAB_18002097d;
          uVar12 = 0;
          pcVar13 = (char *)0x0;
          if (uVar5 == 0xffffffda) goto LAB_180020913;
          plVar11 = (longlong *)(ulonglong)uVar5;
          goto LAB_18002080d;
        }
        plVar7 = *(longlong **)(*plVar2 + 0x68);
        for (plVar9 = (longlong *)FUN_180018d50((longlong)(plVar2 + 2)); plVar9 != (longlong *)0x0;
            plVar9 = (longlong *)FUN_180018d70(plVar9)) {
          pcVar13 = (char *)plVar9[4];
          if ((*pcVar13 == 'e') && ((int)plVar9[3] == iVar6)) {
            uVar12 = plVar9[5];
            FUN_180018d80(plVar9);
            (*(code *)plVar7[3])(plVar9);
            plVar11 = plVar7;
            plVar7 = local_res18;
            if (8 < uVar12) goto LAB_1800208a5;
            uVar5 = 0xffffffda;
            goto LAB_180020913;
          }
        }
        plVar7 = local_res18;
        iVar1 = (int)plVar11[0x4b];
      }
      plVar11 = (longlong *)0xfffffff3;
      uVar5 = 0xfffffff3;
LAB_18002080d:
      param_3 = "Error waiting for status message";
      goto LAB_180020814;
    }
    goto LAB_180020826;
  }
  param_3 = (char *)param_1[0x2e];
  param_4 = uVar12;
  sVar8 = FUN_180004890(lVar10,0,param_3,uVar12);
  if (sVar8 != 0xffffffffffffffdb) {
    if (uVar12 == sVar8) {
      *(undefined4 *)(param_1 + 0x2d) = 3;
    }
    else {
      param_3 = "Unable to send FXP_CLOSE command";
      *(undefined4 *)(param_1 + 0x2d) = 0;
      uVar5 = FUN_180018820((longlong)plVar3,0xfffffff9,0x180033938,param_4);
    }
    param_2 = plVar3;
    (*(code *)plVar3[3])(param_1[0x2e]);
    param_1[0x2e] = 0;
    goto LAB_18002073a;
  }
  uVar5 = 0xffffffdb;
  goto LAB_18002097d;
LAB_1800208a5:
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x2d) = 4;
  if (pcVar13 != (char *)0x0) {
    iVar6 = FUN_180018ea0(pcVar13 + 5);
    plVar11 = plVar3;
    (*(code *)plVar3[3])(pcVar13);
    if (iVar6 != 0) {
      *(int *)(plVar2 + 8) = iVar6;
      param_3 = "SFTP Protocol Error";
      plVar11 = (longlong *)0xffffffe1;
      *(undefined4 *)(param_1 + 0x2d) = 0;
      uVar5 = FUN_180018820((longlong)plVar3,0xffffffe1,0x180033748,param_4);
    }
  }
  goto LAB_180020826;
LAB_180020913:
  if (uVar12 != 0) {
    (*(code *)plVar3[3])(pcVar13,plVar3);
  }
  param_3 = "Packet too short in FXP_CLOSE command";
  plVar11 = (longlong *)0xffffffe1;
LAB_180020814:
  FUN_180018820((longlong)plVar3,(int)plVar11,(longlong)param_3,param_4);
  *(undefined4 *)(param_1 + 0x2d) = 4;
LAB_180020826:
  FUN_180018d80(param_1);
  if ((int)param_1[0x25] == 1) {
    if ((int)param_1[0x26] == 0) goto LAB_180020951;
    lVar10 = param_1[0x27];
  }
  else if (((int)param_1[0x25] != 0) || (lVar10 = param_1[0x29], lVar10 == 0)) goto LAB_180020951;
  plVar11 = plVar3;
  (*(code *)plVar3[3])(lVar10);
LAB_180020951:
  FUN_180024340((longlong)param_1,plVar11,param_3,param_4);
  *(undefined4 *)((longlong)plVar2 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  (*(code *)plVar3[3])(param_1,plVar3);
  if (uVar5 != 0xffffffdb) {
    return uVar5;
  }
LAB_18002097d:
  if (*(int *)(*(ulonglong *)(*(longlong *)param_1[3] + 0x68) + 0xac) == 0) {
    return uVar5;
  }
  param_2 = plVar7;
  uVar5 = FUN_18001e940(*(ulonglong *)(*(longlong *)param_1[3] + 0x68),(__time64_t)plVar7,param_3,
                        param_4);
  if (uVar5 != 0) {
    return uVar5;
  }
  goto LAB_180020610;
}




int libssh2_sftp_fstat_ex(longlong param_1,uint *param_2,uint param_3,char **param_4)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
                    /* 0x20a30  100  libssh2_sftp_fstat_ex */
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    _Var3 = _time64((__time64_t *)0x0);
    while( true ) {
      uVar4 = (ulonglong)param_3;
      iVar2 = FUN_180022a10(param_1,param_2,param_3,param_4);
      if (iVar2 != -0x25) {
        return iVar2;
      }
      uVar1 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
      if (*(int *)(uVar1 + 0xac) == 0) break;
      iVar2 = FUN_18001e940(uVar1,_Var3,uVar4,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    return -0x25;
  }
  return -0x27;
}




int libssh2_sftp_fstatvfs(longlong param_1,undefined8 *param_2,undefined8 param_3,char **param_4)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  
                    /* 0x20ac0  101  libssh2_sftp_fstatvfs */
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    _Var3 = _time64((__time64_t *)0x0);
    while( true ) {
      iVar2 = FUN_180022e00(param_1,param_2,param_3,param_4);
      if (iVar2 != -0x25) {
        return iVar2;
      }
      uVar1 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
      if (*(int *)(uVar1 + 0xac) == 0) break;
      iVar2 = FUN_18001e940(uVar1,_Var3,param_3,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    return -0x25;
  }
  return -0x27;
}




ulonglong libssh2_sftp_fsync(longlong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4
                            )

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  __time64_t _Var8;
  char *pcVar9;
  size_t sVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_res10;
  char *local_res18;
  
                    /* 0x20b40  102  libssh2_sftp_fsync */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  _Var8 = _time64((__time64_t *)0x0);
  do {
    plVar1 = *(longlong **)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x120);
    local_res18 = (char *)0x0;
    uVar12 = (ulonglong)(iVar7 + 0x22);
    lVar2 = *plVar1;
    uVar6 = *(uint *)(plVar1 + 0x15);
    pcVar13 = (char *)(ulonglong)uVar6;
    uVar3 = *(ulonglong *)(lVar2 + 0x68);
    if (uVar6 == 0) {
      *(undefined4 *)(plVar1 + 8) = 0;
      pcVar9 = (char *)(**(code **)(uVar3 + 8))(uVar12,uVar3);
      local_res10 = pcVar9;
      if (pcVar9 == (char *)0x0) {
        pcVar13 = "Unable to allocate memory for FXP_EXTENDED packet";
        uVar6 = FUN_180018820(uVar3,0xfffffffa,0x180033798,param_4);
        goto LAB_180020e87;
      }
      FUN_180019150((longlong *)&local_res10,iVar7 + 0x1e);
      *local_res10 = -0x38;
      local_res10 = local_res10 + 1;
      iVar7 = (int)plVar1[1];
      *(int *)(plVar1 + 0x17) = iVar7;
      *(int *)(plVar1 + 1) = iVar7 + 1;
      FUN_180019150((longlong *)&local_res10,iVar7);
      FUN_1800190c0((longlong *)&local_res10,"fsync@openssh.com",0x11);
      FUN_1800190c0((longlong *)&local_res10,(void *)(param_1 + 0x20),
                    *(ulonglong *)(param_1 + 0x120));
      *(undefined4 *)(plVar1 + 0x15) = 2;
LAB_180020c9b:
      pcVar13 = pcVar9;
      param_4 = uVar12;
      sVar10 = FUN_180004890(lVar2,0,pcVar9,uVar12);
      if ((sVar10 != 0xffffffffffffffdb) &&
         (((longlong)sVar10 < 0 || ((longlong)uVar12 <= (longlong)sVar10)))) {
        param_2 = uVar3;
        (**(code **)(uVar3 + 0x18))(pcVar9);
        plVar1[0x16] = 0;
        if (-1 < (longlong)sVar10) {
          *(undefined4 *)(plVar1 + 0x15) = 3;
          goto LAB_180020cfb;
        }
        *(undefined4 *)(plVar1 + 0x15) = 0;
        pcVar13 = "_libssh2_channel_write() failed";
        iVar7 = -7;
        goto LAB_180020e77;
      }
      plVar1[0x16] = (longlong)pcVar9;
      param_2 = 0xffffffdb;
    }
    else {
      pcVar9 = (char *)plVar1[0x16];
      if (uVar6 == 2) goto LAB_180020c9b;
LAB_180020cfb:
      lVar5 = plVar1[0x17];
      lVar2 = *(longlong *)(*plVar1 + 0x68);
      for (plVar11 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)FUN_180018d70(plVar11)) {
        pcVar9 = (char *)plVar11[4];
        if ((*pcVar9 == 'e') && ((int)plVar11[3] == (int)lVar5)) {
          pcVar14 = (char *)plVar11[5];
          FUN_180018d80(plVar11);
          (**(code **)(lVar2 + 0x18))(plVar11);
          param_2 = (ulonglong)(-(uint)(pcVar14 < (char *)0x9) & 0xffffffda);
          goto LAB_180020da8;
        }
      }
      iVar7 = *(int *)(lVar2 + 600);
      pcVar9 = local_res18;
      while (local_res18 = pcVar9, iVar7 == 0) {
        uVar6 = FUN_180023e70(plVar1,param_2,pcVar13,param_4);
        param_2 = (ulonglong)uVar6;
        pcVar9 = local_res18;
        pcVar14 = local_res18;
        if ((int)uVar6 < 0) goto LAB_180020da8;
        lVar4 = *(longlong *)(*plVar1 + 0x68);
        for (plVar11 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar11 != (longlong *)0x0
            ; plVar11 = (longlong *)FUN_180018d70(plVar11)) {
          pcVar9 = (char *)plVar11[4];
          if ((*pcVar9 == 'e') && ((int)plVar11[3] == (int)lVar5)) {
            pcVar14 = (char *)plVar11[5];
            FUN_180018d80(plVar11);
            (**(code **)(lVar4 + 0x18))(plVar11);
            param_2 = (ulonglong)(-(uint)(pcVar14 < (char *)0x9) & 0xffffffda);
            goto LAB_180020da8;
          }
        }
        pcVar9 = local_res18;
        iVar7 = *(int *)(lVar2 + 600);
      }
      param_2 = 0xfffffff3;
      pcVar14 = pcVar9;
LAB_180020da8:
      iVar7 = (int)param_2;
      if (iVar7 != -0x25) {
        if (iVar7 == -0x26) {
          if (pcVar14 != (char *)0x0) {
            (**(code **)(uVar3 + 0x18))(pcVar9,uVar3);
          }
          pcVar13 = "SFTP fsync packet too short";
        }
        else {
          *(undefined4 *)(plVar1 + 0x15) = 0;
          if (iVar7 != 0) {
            pcVar13 = "Error waiting for FXP EXTENDED REPLY";
            goto LAB_180020e77;
          }
          iVar7 = FUN_180018ea0(pcVar9 + 5);
          (**(code **)(uVar3 + 0x18))(pcVar9,uVar3);
          if (iVar7 == 0) {
            return 0;
          }
          *(int *)(plVar1 + 8) = iVar7;
          pcVar13 = "fsync failed";
        }
        iVar7 = -0x1f;
LAB_180020e77:
        uVar6 = FUN_180018820(uVar3,iVar7,(longlong)pcVar13,param_4);
LAB_180020e87:
        param_2 = (ulonglong)uVar6;
      }
      if ((int)param_2 != -0x25) {
        return param_2;
      }
    }
    uVar3 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
    if (*(int *)(uVar3 + 0xac) == 0) {
      return param_2;
    }
    uVar6 = FUN_18001e940(uVar3,_Var8,pcVar13,param_4);
    param_2 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      return param_2;
    }
  } while( true );
}




undefined8 libssh2_sftp_get_channel(undefined8 *param_1)

{
                    /* 0x20ef0  103  libssh2_sftp_get_channel */
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}




longlong * libssh2_sftp_init(ulonglong param_1,__time64_t param_2,void *param_3,undefined *param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong *plVar3;
  
                    /* 0x20f00  104  libssh2_sftp_init */
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x80) & 4) != 0) {
      _Var2 = _time64((__time64_t *)0x0);
      do {
        plVar3 = FUN_180023250(param_1,param_2,param_3,param_4);
        if (*(int *)(param_1 + 0xac) == 0) {
          return plVar3;
        }
        if (plVar3 != (longlong *)0x0) {
          return plVar3;
        }
        iVar1 = libssh2_session_last_errno(param_1);
        if (iVar1 != -0x25) {
          return (longlong *)0x0;
        }
        param_2 = _Var2;
        iVar1 = FUN_18001e940(param_1,_Var2,param_3,param_4);
      } while (iVar1 == 0);
      return (longlong *)0x0;
    }
    FUN_180018820(param_1,0xffffffde,0x180033440,param_4);
  }
  return (longlong *)0x0;
}




undefined4 libssh2_sftp_last_error(longlong param_1)

{
                    /* 0x20f90  105  libssh2_sftp_last_error */
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x40);
}




int libssh2_sftp_mkdir_ex(longlong *param_1,void *param_2,uint param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  __time64_t _Var7;
  undefined1 *puVar8;
  longlong lVar9;
  size_t sVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  char *pcVar16;
  undefined1 *local_res8;
  void *local_res10;
  uint local_res18;
  uint local_res20;
  uint local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_50;
  
                    /* 0x20fa0  106  libssh2_sftp_mkdir_ex */
  local_res20 = (uint)param_4;
  uVar12 = param_4 & 0xffffffff;
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  _Var7 = _time64((__time64_t *)0x0);
LAB_180020fff:
  lVar2 = *param_1;
  piVar1 = (int *)((longlong)param_1 + 0x124);
  uVar13 = 0;
  local_70[0] = 0;
  local_68 = 0;
  lVar3 = *(longlong *)(lVar2 + 0x68);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((int)uVar12 != -1) {
    uVar13 = 4;
    local_70[0] = 4;
    local_58 = uVar12 | 0x4000;
  }
  lVar9 = 0;
  puVar15 = (undefined1 *)(ulonglong)uVar13;
  uVar13 = param_3 + 0x11 + uVar13;
  uVar12 = (ulonglong)uVar13;
  if (*piVar1 != 0) {
    puVar8 = (undefined1 *)param_1[0x25];
    if (*piVar1 == 2) goto LAB_18002115a;
LAB_1800211b8:
    lVar5 = param_1[0x26];
    lVar2 = *(longlong *)(*param_1 + 0x68);
    plVar11 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
    if (plVar11 != (longlong *)0x0) {
LAB_1800211d5:
      pcVar16 = (char *)plVar11[4];
      if ((*pcVar16 != 'e') || ((int)plVar11[3] != (int)lVar5)) goto LAB_1800211e7;
      pcVar14 = (char *)plVar11[5];
      FUN_180018d80(plVar11);
      (**(code **)(lVar2 + 0x18))(plVar11,lVar2);
LAB_1800212f6:
      if (pcVar14 < (char *)0x9) goto LAB_180021355;
      *(undefined4 *)((longlong)param_1 + 0x124) = 0;
      iVar6 = FUN_180018ea0(pcVar16 + 5);
      (**(code **)(lVar3 + 0x18))(pcVar16,lVar3);
      if (iVar6 == 0) {
        return 0;
      }
      *(int *)(param_1 + 8) = iVar6;
      pcVar16 = "SFTP Protocol Error";
      uVar13 = 0xffffffe1;
      goto LAB_180021274;
    }
LAB_1800211f7:
    iVar6 = *(int *)(lVar2 + 600);
    while( true ) {
      if (iVar6 != 0) goto LAB_18002125c;
      uVar13 = FUN_180023e70(param_1,lVar9,puVar15,param_4);
      if ((int)uVar13 < 0) break;
      lVar4 = *(longlong *)(*param_1 + 0x68);
      for (plVar11 = (longlong *)FUN_180018d50((longlong)(param_1 + 2)); plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)FUN_180018d70(plVar11)) {
        pcVar16 = (char *)plVar11[4];
        if ((*pcVar16 == 'e') && ((int)plVar11[3] == (int)lVar5)) {
          pcVar14 = (char *)plVar11[5];
          FUN_180018d80(plVar11);
          (**(code **)(lVar4 + 0x18))(plVar11,lVar4);
          goto LAB_1800212f6;
        }
      }
      iVar6 = *(int *)(lVar2 + 600);
    }
    if (uVar13 == 0xffffffdb) {
      iVar6 = -0x25;
      goto LAB_180021289;
    }
    pcVar14 = (char *)0x0;
    pcVar16 = pcVar14;
    if (uVar13 != 0xffffffda) goto LAB_180021263;
LAB_180021355:
    if (pcVar14 != (char *)0x0) {
      (**(code **)(lVar3 + 0x18))(pcVar16,lVar3);
    }
    uVar13 = 0xffffffe1;
    pcVar16 = "SFTP mkdir packet too short";
    goto LAB_180021274;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  puVar8 = (undefined1 *)(**(code **)(lVar3 + 8))(uVar12,lVar3);
  if (puVar8 == (undefined1 *)0x0) {
    uVar13 = 0xfffffffa;
    pcVar16 = "Unable to allocate memory for FXP_MKDIR packet";
    local_res8 = (undefined1 *)0x0;
    goto LAB_180021274;
  }
  local_res8 = puVar8;
  FUN_180019150((longlong *)&local_res8,uVar13 - 4);
  *local_res8 = 0xe;
  iVar6 = (int)param_1[1];
  local_res8 = local_res8 + 1;
  *(int *)(param_1 + 0x26) = iVar6;
  *(int *)(param_1 + 1) = iVar6 + 1;
  FUN_180019150((longlong *)&local_res8,iVar6);
  FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)local_res18);
  lVar9 = FUN_1800227c0(local_res8,local_70);
  local_res8 = local_res8 + lVar9;
  *piVar1 = 2;
LAB_18002115a:
  puVar15 = puVar8;
  param_4 = uVar12;
  sVar10 = FUN_180004890(lVar2,0,puVar8,uVar12);
  if (sVar10 != 0xffffffffffffffdb) {
    if (uVar12 == sVar10) {
      lVar9 = lVar3;
      (**(code **)(lVar3 + 0x18))(puVar8);
      *piVar1 = 3;
      param_1[0x25] = 0;
      goto LAB_1800211b8;
    }
    (**(code **)(lVar3 + 0x18))();
    uVar13 = 0xfffffff9;
    *piVar1 = 0;
    pcVar16 = "_libssh2_channel_write() failed";
    goto LAB_180021274;
  }
  param_1[0x25] = (longlong)puVar8;
  iVar6 = -0x25;
  goto LAB_180021289;
LAB_1800211e7:
  plVar11 = (longlong *)FUN_180018d70(plVar11);
  if (plVar11 == (longlong *)0x0) goto LAB_1800211f7;
  goto LAB_1800211d5;
LAB_18002125c:
  uVar13 = 0xfffffff3;
LAB_180021263:
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  pcVar16 = "Error waiting for FXP STATUS";
LAB_180021274:
  iVar6 = FUN_180018820(lVar3,uVar13,(longlong)pcVar16,param_4);
  if (iVar6 != -0x25) {
    return iVar6;
  }
LAB_180021289:
  uVar12 = *(ulonglong *)(*param_1 + 0x68);
  if (*(int *)(uVar12 + 0xac) == 0) {
    return iVar6;
  }
  iVar6 = FUN_18001e940(uVar12,_Var7,uVar12,param_4);
  if (iVar6 != 0) {
    return iVar6;
  }
  uVar12 = (ulonglong)local_res20;
  param_3 = local_res18;
  goto LAB_180020fff;
}




undefined8 *
libssh2_sftp_open_ex
          (longlong *param_1,void *param_2,ulonglong param_3,ulonglong param_4,uint param_5,
          int param_6)

{
  int iVar1;
  __time64_t _Var2;
  undefined8 *puVar3;
  void *pvVar4;
  char **ppcVar5;
  
                    /* 0x213b0  107  libssh2_sftp_open_ex */
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)0x0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  do {
    ppcVar5 = (char **)(param_4 & 0xffffffff);
    pvVar4 = (void *)(param_3 & 0xffffffff);
    puVar3 = FUN_180023770(param_1,param_2,(void *)(param_3 & 0xffffffff),ppcVar5,param_5,param_6,
                           (uint *)0x0);
    if (*(int *)(*(longlong *)(*param_1 + 0x68) + 0xac) == 0) {
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    iVar1 = libssh2_session_last_errno(*(longlong *)(*param_1 + 0x68));
    if (iVar1 != -0x25) {
      return (undefined8 *)0x0;
    }
    iVar1 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var2,pvVar4,ppcVar5);
  } while (iVar1 == 0);
  return (undefined8 *)0x0;
}




undefined8 *
libssh2_sftp_open_ex_r
          (longlong *param_1,void *param_2,void *param_3,ulonglong param_4,uint param_5,int param_6,
          uint *param_7)

{
  int iVar1;
  __time64_t _Var2;
  undefined8 *puVar3;
  void *pvVar4;
  char **ppcVar5;
  
                    /* 0x21490  108  libssh2_sftp_open_ex_r */
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)0x0;
  }
  _Var2 = _time64((__time64_t *)0x0);
  do {
    ppcVar5 = (char **)(param_4 & 0xffffffff);
    pvVar4 = param_3;
    puVar3 = FUN_180023770(param_1,param_2,param_3,ppcVar5,param_5,param_6,param_7);
    if (*(int *)(*(longlong *)(*param_1 + 0x68) + 0xac) == 0) {
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    iVar1 = libssh2_session_last_errno(*(longlong *)(*param_1 + 0x68));
    if (iVar1 != -0x25) {
      return (undefined8 *)0x0;
    }
    iVar1 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var2,pvVar4,ppcVar5);
  } while (iVar1 == 0);
  return (undefined8 *)0x0;
}




undefined1 * libssh2_sftp_read(longlong param_1,char **param_2,char *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  undefined1 *puVar4;
  char *pcVar5;
  
                    /* 0x21570  109  libssh2_sftp_read */
  if (param_1 == 0) {
    return (undefined1 *)0xffffffffffffffd9;
  }
  _Var3 = _time64((__time64_t *)0x0);
  while( true ) {
    pcVar5 = param_3;
    puVar4 = FUN_1800244c0(param_1,param_2,param_3);
    if (puVar4 != (undefined1 *)0xffffffffffffffdb) {
      return puVar4;
    }
    uVar1 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
    if (*(int *)(uVar1 + 0xac) == 0) break;
    iVar2 = FUN_18001e940(uVar1,_Var3,pcVar5,param_4);
    if ((undefined1 *)(longlong)iVar2 != (undefined1 *)0x0) {
      return (undefined1 *)(longlong)iVar2;
    }
  }
  return (undefined1 *)0xffffffffffffffdb;
}




longlong libssh2_sftp_readdir_ex
                   (longlong param_1,void *param_2,ulonglong param_3,char **param_4,
                   ulonglong param_5,uint *param_6)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  longlong lVar4;
  ulonglong uVar5;
  char **ppcVar6;
  
                    /* 0x21610  110  libssh2_sftp_readdir_ex */
  if (param_1 == 0) {
    return 0xffffffd9;
  }
  _Var3 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar5 = param_3;
    ppcVar6 = param_4;
    lVar4 = FUN_180024b70(param_1,param_2,param_3,param_4,param_5,param_6);
    if (lVar4 != -0x25) {
      return lVar4;
    }
    uVar1 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
    if (*(int *)(uVar1 + 0xac) == 0) break;
    iVar2 = FUN_18001e940(uVar1,_Var3,uVar5,ppcVar6);
    if ((longlong)iVar2 != 0) {
      return (longlong)iVar2;
    }
  }
  return -0x25;
}




uint libssh2_sftp_rename_ex
               (longlong *param_1,void *param_2,void *param_3,void *param_4,uint param_5,
               undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  __time64_t _Var8;
  longlong lVar9;
  size_t sVar10;
  longlong *plVar11;
  uint uVar12;
  char *pcVar13;
  void *pvVar14;
  ulonglong uVar15;
  char *pcVar16;
  
                    /* 0x216e0  111  libssh2_sftp_rename_ex */
  if (param_1 == (longlong *)0x0) {
    return 0xffffffd9;
  }
  pvVar14 = param_3;
  _Var8 = _time64((__time64_t *)0x0);
  do {
    pcVar13 = (char *)0x0;
    lVar9 = 0x15;
    lVar1 = *param_1;
    uVar6 = *(uint *)((longlong)param_1 + 0xec);
    uVar15 = (ulonglong)uVar6;
    iVar7 = 0x11;
    if (4 < *(uint *)((longlong)param_1 + 0xc)) {
      iVar7 = 0x15;
    }
    uVar12 = iVar7 + (int)param_3 + param_5;
    lVar2 = *(longlong *)(lVar1 + 0x68);
    if (uVar6 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(uint *)((longlong)param_1 + 0xc) < 2) {
        uVar6 = FUN_180018820(lVar2,0xffffffe1,0x180033a48,uVar15);
      }
      else {
        lVar9 = (**(code **)(lVar2 + 8))(uVar12,lVar2);
        param_1[0x1e] = lVar9;
        plVar11 = param_1 + 0x1f;
        *plVar11 = lVar9;
        if (lVar9 != 0) {
          FUN_180019150(plVar11,uVar12 - 4);
          *(undefined1 *)*plVar11 = 0x12;
          iVar7 = (int)param_1[1];
          *plVar11 = *plVar11 + 1;
          *(int *)(param_1 + 0x20) = iVar7;
          *(int *)(param_1 + 1) = iVar7 + 1;
          FUN_180019150(plVar11,iVar7);
          FUN_1800190c0(plVar11,param_2,(ulonglong)param_3 & 0xffffffff);
          FUN_1800190c0(plVar11,param_4,(ulonglong)param_5);
          if (4 < *(uint *)((longlong)param_1 + 0xc)) {
            FUN_180019150(plVar11,param_6);
          }
          *(undefined4 *)((longlong)param_1 + 0xec) = 2;
          goto LAB_180021875;
        }
        uVar6 = FUN_180018820(lVar2,0xfffffffa,0x180033a68,uVar15);
      }
LAB_180021a92:
      if (uVar6 != 0xffffffdb) {
        return uVar6;
      }
    }
    else {
      if (uVar6 != 2) {
LAB_1800218e2:
        lVar5 = param_1[0x20];
        lVar1 = *(longlong *)(*param_1 + 0x68);
        for (plVar11 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
            plVar11 != (longlong *)0x0; plVar11 = (longlong *)FUN_180018d70(plVar11)) {
          pcVar3 = (char *)plVar11[4];
          if ((*pcVar3 == 'e') && ((int)plVar11[3] == (int)lVar5)) {
            pcVar16 = (char *)plVar11[5];
            FUN_180018d80(plVar11);
            (**(code **)(lVar1 + 0x18))(plVar11,lVar1);
            uVar6 = -(uint)(pcVar16 < (char *)0x9) & 0xffffffda;
            pcVar13 = pcVar3;
            goto LAB_180021989;
          }
        }
        iVar7 = *(int *)(lVar1 + 600);
        while (pcVar16 = pcVar13, iVar7 == 0) {
          uVar6 = FUN_180023e70(param_1,lVar9,pvVar14,uVar15);
          if ((int)uVar6 < 0) goto LAB_180021989;
          lVar4 = *(longlong *)(*param_1 + 0x68);
          for (plVar11 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
              plVar11 != (longlong *)0x0; plVar11 = (longlong *)FUN_180018d70(plVar11)) {
            pcVar3 = (char *)plVar11[4];
            if ((*pcVar3 == 'e') && ((int)plVar11[3] == (int)lVar5)) {
              pcVar16 = (char *)plVar11[5];
              FUN_180018d80(plVar11);
              (**(code **)(lVar4 + 0x18))(plVar11,lVar4);
              uVar6 = -(uint)(pcVar16 < (char *)0x9) & 0xffffffda;
              pcVar13 = pcVar3;
              goto LAB_180021989;
            }
          }
          iVar7 = *(int *)(lVar1 + 600);
        }
        uVar6 = 0xfffffff3;
LAB_180021989:
        if (uVar6 != 0xffffffdb) {
          if (uVar6 == 0xffffffda) {
            if (pcVar16 != (char *)0x0) {
              (**(code **)(lVar2 + 0x18))(pcVar13,lVar2);
            }
            uVar6 = FUN_180018820(lVar2,0xffffffe1,0x180033ac0,uVar15);
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0xec) = 0;
            if (uVar6 == 0) {
              iVar7 = FUN_180018ea0(pcVar13 + 5);
              (**(code **)(lVar2 + 0x18))(pcVar13,lVar2);
              *(int *)(param_1 + 8) = iVar7;
              if (iVar7 == 0) {
                uVar6 = 0;
              }
              else if (iVar7 == 8) {
                uVar6 = FUN_180018820(lVar2,0xffffffe1,0x180033b20,uVar15);
              }
              else if (iVar7 == 0xb) {
                uVar6 = FUN_180018820(lVar2,0xffffffe1,0x180033ae0,uVar15);
              }
              else {
                uVar6 = FUN_180018820(lVar2,0xffffffe1,0x180033748,uVar15);
              }
            }
            else {
              uVar6 = FUN_180018820(lVar2,uVar6,0x180033a28,uVar15);
            }
          }
        }
        goto LAB_180021a92;
      }
LAB_180021875:
      plVar11 = param_1 + 0x1e;
      pvVar14 = (void *)*plVar11;
      uVar15 = param_1[0x1f] - (longlong)pvVar14;
      sVar10 = FUN_180004890(lVar1,0,pvVar14,uVar15);
      if (sVar10 != 0xffffffffffffffdb) {
        if (uVar12 != sVar10) {
          (**(code **)(lVar2 + 0x18))();
          *plVar11 = 0;
          *(undefined4 *)((longlong)param_1 + 0xec) = 0;
          uVar6 = FUN_180018820(lVar2,0xfffffff9,0x180033a98,uVar15);
          goto LAB_180021a92;
        }
        lVar9 = lVar2;
        (**(code **)(lVar2 + 0x18))(*plVar11);
        *(undefined4 *)((longlong)param_1 + 0xec) = 3;
        *plVar11 = 0;
        goto LAB_1800218e2;
      }
      uVar6 = 0xffffffdb;
    }
    pvVar14 = *(void **)(*param_1 + 0x68);
    if (*(int *)((longlong)pvVar14 + 0xac) == 0) {
      return uVar6;
    }
    uVar6 = FUN_18001e940((ulonglong)pvVar14,_Var8,pvVar14,uVar15);
    if (uVar6 != 0) {
      return uVar6;
    }
  } while( true );
}




int libssh2_sftp_rmdir_ex(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  longlong *plVar9;
  void *pvVar10;
  ulonglong uVar11;
  void *pvVar12;
  char *pcVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 *local_res20;
  
                    /* 0x21b00  112  libssh2_sftp_rmdir_ex */
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  pvVar10 = param_2;
  pvVar12 = param_3;
  pvVar7 = (void *)_time64((__time64_t *)0x0);
  uVar14 = (ulonglong)((int)param_3 + 0xd);
LAB_180021b70:
  piVar15 = (int *)((longlong)param_1 + 0x134);
  lVar1 = *param_1;
  pvVar2 = *(void **)(lVar1 + 0x68);
  if (*piVar15 != 0) {
    if (*piVar15 == 2) goto LAB_180021c2f;
LAB_180021c8f:
    lVar4 = param_1[0x28];
    lVar1 = *(longlong *)(*param_1 + 0x68);
    plVar9 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
    if (plVar9 != (longlong *)0x0) {
LAB_180021cb0:
      pcVar13 = (char *)plVar9[4];
      if ((*pcVar13 != 'e') || ((int)plVar9[3] != (int)lVar4)) goto LAB_180021cc2;
      uVar11 = plVar9[5];
      FUN_180018d80(plVar9);
      (**(code **)(lVar1 + 0x18))(plVar9,lVar1);
LAB_180021de7:
      if (uVar11 < 9) goto LAB_180021e41;
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
      iVar6 = FUN_180018ea0(pcVar13 + 5);
      (**(code **)((longlong)pvVar2 + 0x18))(pcVar13,pvVar2);
      if (iVar6 == 0) {
        return 0;
      }
      *(int *)(param_1 + 8) = iVar6;
      pcVar13 = "SFTP Protocol Error";
      uVar5 = 0xffffffe1;
      goto LAB_180021d57;
    }
LAB_180021cd2:
    iVar6 = *(int *)(lVar1 + 600);
    while (iVar6 == 0) {
      uVar5 = FUN_180023e70(param_1,pvVar10,pvVar12,param_4);
      if ((int)uVar5 < 0) {
        if (uVar5 != 0xffffffdb) {
          uVar11 = 0;
          pcVar13 = (char *)0x0;
          if (uVar5 == 0xffffffda) goto LAB_180021e41;
          goto LAB_180021d49;
        }
        iVar6 = -0x25;
        goto LAB_180021d6c;
      }
      lVar3 = *(longlong *)(*param_1 + 0x68);
      for (plVar9 = (longlong *)FUN_180018d50((longlong)(param_1 + 2)); plVar9 != (longlong *)0x0;
          plVar9 = (longlong *)FUN_180018d70(plVar9)) {
        pcVar13 = (char *)plVar9[4];
        if ((*pcVar13 == 'e') && ((int)plVar9[3] == (int)lVar4)) {
          uVar11 = plVar9[5];
          FUN_180018d80(plVar9);
          (**(code **)(lVar3 + 0x18))(plVar9,lVar3);
          goto LAB_180021de7;
        }
      }
      iVar6 = *(int *)(lVar1 + 600);
    }
    uVar5 = 0xfffffff3;
LAB_180021d49:
    pcVar13 = "Error waiting for FXP STATUS";
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    goto LAB_180021d57;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  local_res20 = (undefined1 *)(**(code **)((longlong)pvVar2 + 8))(uVar14,pvVar2);
  param_1[0x27] = (longlong)local_res20;
  if (local_res20 == (undefined1 *)0x0) {
    uVar5 = 0xfffffffa;
    pcVar13 = "Unable to allocate memory for FXP_RMDIR packet";
    local_res20 = (undefined1 *)0x0;
    goto LAB_180021d57;
  }
  FUN_180019150((longlong *)&local_res20,(int)param_3 + 9);
  *local_res20 = 0xf;
  iVar6 = (int)param_1[1];
  local_res20 = local_res20 + 1;
  *(int *)(param_1 + 0x28) = iVar6;
  *(int *)(param_1 + 1) = iVar6 + 1;
  FUN_180019150((longlong *)&local_res20,iVar6);
  FUN_1800190c0((longlong *)&local_res20,param_2,(ulonglong)param_3 & 0xffffffff);
  *piVar15 = 2;
LAB_180021c2f:
  plVar9 = param_1 + 0x27;
  pvVar12 = (void *)*plVar9;
  param_4 = uVar14;
  sVar8 = FUN_180004890(lVar1,0,pvVar12,uVar14);
  if (sVar8 != 0xffffffffffffffdb) {
    if (uVar14 == sVar8) {
      pvVar10 = pvVar2;
      (**(code **)((longlong)pvVar2 + 0x18))(*plVar9);
      *plVar9 = 0;
      *piVar15 = 3;
      goto LAB_180021c8f;
    }
    (**(code **)((longlong)pvVar2 + 0x18))();
    uVar5 = 0xfffffff9;
    *plVar9 = 0;
    pcVar13 = "Unable to send FXP_RMDIR command";
    *piVar15 = 0;
    goto LAB_180021d57;
  }
  iVar6 = -0x25;
  goto LAB_180021d6c;
LAB_180021cc2:
  plVar9 = (longlong *)FUN_180018d70(plVar9);
  if (plVar9 == (longlong *)0x0) goto LAB_180021cd2;
  goto LAB_180021cb0;
LAB_180021e41:
  if (uVar11 != 0) {
    (**(code **)((longlong)pvVar2 + 0x18))(pcVar13,pvVar2);
  }
  uVar5 = 0xffffffe1;
  pcVar13 = "SFTP rmdir packet too short";
LAB_180021d57:
  iVar6 = FUN_180018820((longlong)pvVar2,uVar5,(longlong)pcVar13,param_4);
  if (iVar6 != -0x25) {
    return iVar6;
  }
LAB_180021d6c:
  pvVar12 = *(void **)(*param_1 + 0x68);
  if (*(int *)((longlong)pvVar12 + 0xac) == 0) {
    return iVar6;
  }
  pvVar10 = pvVar7;
  iVar6 = FUN_18001e940((ulonglong)pvVar12,(__time64_t)pvVar7,pvVar12,param_4);
  if (iVar6 != 0) {
    return iVar6;
  }
  goto LAB_180021b70;
}




void libssh2_sftp_seek(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
                    /* 0x21e90  113  libssh2_sftp_seek
                       0x21e90  114  libssh2_sftp_seek64 */
  if ((param_1 != 0) &&
     ((*(longlong *)(param_1 + 0x130) != param_2 || (*(longlong *)(param_1 + 0x138) != param_2)))) {
    *(longlong *)(param_1 + 0x138) = param_2;
    *(longlong *)(param_1 + 0x130) = param_2;
    FUN_180024340(param_1,param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x18) + 0x68);
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(param_1 + 0x148),lVar1);
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  return;
}




ulonglong libssh2_sftp_shutdown
                    (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  __time64_t _Var1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
                    /* 0x21f10  115  libssh2_sftp_shutdown */
  if (param_1 != (longlong *)0x0) {
    _Var1 = _time64((__time64_t *)0x0);
    do {
      lVar6 = *(longlong *)(*param_1 + 0x68);
      if (param_1[0xb] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0xb] = 0;
      }
      if (param_1[0x10] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x10] = 0;
      }
      if (param_1[0x18] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x18] = 0;
      }
      if (param_1[0x1a] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x1a] = 0;
      }
      if (param_1[0x1c] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x1c] = 0;
      }
      if (param_1[0x1e] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x1e] = 0;
      }
      if (param_1[0x21] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x21] = 0;
      }
      if (param_1[0x23] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x23] = 0;
      }
      if (param_1[0x25] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x25] = 0;
      }
      if (param_1[0x27] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x27] = 0;
      }
      if (param_1[0x29] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x29] = 0;
      }
      if (param_1[0x2b] != 0) {
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))();
        param_1[0x2b] = 0;
      }
      if (param_1[0x16] != 0) {
        (**(code **)(lVar6 + 0x18))();
        param_1[0x16] = 0;
        param_2 = lVar6;
      }
      lVar6 = *(longlong *)(*param_1 + 0x68);
      plVar2 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
      plVar3 = (longlong *)FUN_180018d50((longlong)(param_1 + 4));
      while (plVar2 != (longlong *)0x0) {
        plVar4 = (longlong *)FUN_180018d70(plVar2);
        FUN_180018d80(plVar2);
        (**(code **)(lVar6 + 0x18))(plVar2[4],lVar6);
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))(plVar2);
        plVar2 = plVar4;
      }
      while (plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)FUN_180018d70(plVar3);
        FUN_180018d80(plVar3);
        param_2 = lVar6;
        (**(code **)(lVar6 + 0x18))(plVar3);
        plVar3 = plVar2;
      }
      uVar5 = FUN_1800039c0((longlong *)*param_1,param_2,param_3,param_4);
    } while ((((int)uVar5 == -0x25) && (*(int *)(*(ulonglong *)(*param_1 + 0x68) + 0xac) != 0)) &&
            (param_2 = _Var1,
            uVar5 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var1,param_3,param_4),
            (int)uVar5 == 0));
    return uVar5;
  }
  return 0xffffffd9;
}




int libssh2_sftp_stat_ex
              (longlong *param_1,void *param_2,uint param_3,ulonglong param_4,uint *param_5)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  char **ppcVar4;
  
                    /* 0x22190  116  libssh2_sftp_stat_ex */
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    ppcVar4 = (char **)(param_4 & 0xffffffff);
    uVar3 = (ulonglong)param_3;
    iVar1 = FUN_180025060(param_1,param_2,param_3,ppcVar4,param_5);
    if (iVar1 != -0x25) {
      return iVar1;
    }
    if (*(int *)(*(ulonglong *)(*param_1 + 0x68) + 0xac) == 0) break;
    iVar1 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var2,uVar3,ppcVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -0x25;
}




int libssh2_sftp_statvfs(longlong *param_1,void *param_2,uint param_3,char **param_4)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  char **ppcVar4;
  
                    /* 0x22230  117  libssh2_sftp_statvfs */
  if ((param_1 == (longlong *)0x0) || (param_4 == (char **)0x0)) {
    iVar1 = -0x27;
  }
  else {
    _Var2 = _time64((__time64_t *)0x0);
    do {
      uVar3 = (ulonglong)param_3;
      ppcVar4 = param_4;
      iVar1 = FUN_180025470(param_1,param_2,param_3,param_4);
      if (iVar1 != -0x25) {
        return iVar1;
      }
      if (*(int *)(*(ulonglong *)(*param_1 + 0x68) + 0xac) == 0) {
        return -0x25;
      }
      iVar1 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var2,uVar3,ppcVar4);
    } while (iVar1 == 0);
  }
  return iVar1;
}




uint libssh2_sftp_symlink_ex
               (longlong *param_1,void *param_2,uint param_3,char **param_4,uint param_5,int param_6
               )

{
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  char **ppcVar4;
  
                    /* 0x222d0  118  libssh2_sftp_symlink_ex */
  if (param_1 == (longlong *)0x0) {
    return 0xffffffd9;
  }
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar3 = (ulonglong)param_3;
    ppcVar4 = param_4;
    uVar1 = FUN_1800258b0(param_1,param_2,param_3,param_4,param_5,param_6);
    if (uVar1 != 0xffffffdb) {
      return uVar1;
    }
    if (*(int *)(*(ulonglong *)(*param_1 + 0x68) + 0xac) == 0) break;
    uVar1 = FUN_18001e940(*(ulonglong *)(*param_1 + 0x68),_Var2,uVar3,ppcVar4);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  return 0xffffffdb;
}




undefined8 libssh2_sftp_tell(longlong param_1)

{
                    /* 0x22390  119  libssh2_sftp_tell
                       0x22390  120  libssh2_sftp_tell64 */
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x130);
}




int libssh2_sftp_unlink_ex(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  size_t sVar9;
  longlong *plVar10;
  void *pvVar11;
  ulonglong uVar12;
  void *pvVar13;
  char *pcVar14;
  undefined1 *local_res20;
  
                    /* 0x223a0  121  libssh2_sftp_unlink_ex */
  if (param_1 == (longlong *)0x0) {
    return -0x27;
  }
  pvVar11 = param_2;
  pvVar13 = param_3;
  pvVar8 = (void *)_time64((__time64_t *)0x0);
LAB_180022402:
  lVar2 = *param_1;
  piVar1 = (int *)((longlong)param_1 + 0xdc);
  uVar12 = (ulonglong)((int)param_3 + 0xd);
  pvVar3 = *(void **)(lVar2 + 0x68);
  if (*piVar1 != 0) {
    if (*piVar1 == 2) goto LAB_1800224ce;
LAB_180022530:
    lVar5 = param_1[0x1d];
    lVar2 = *(longlong *)(*param_1 + 0x68);
    plVar10 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
    if (plVar10 != (longlong *)0x0) {
LAB_180022550:
      pcVar14 = (char *)plVar10[4];
      if ((*pcVar14 != 'e') || ((int)plVar10[3] != (int)lVar5)) goto LAB_180022562;
      uVar12 = plVar10[5];
      FUN_180018d80(plVar10);
      (**(code **)(lVar2 + 0x18))(plVar10,lVar2);
LAB_180022679:
      if (uVar12 < 9) goto LAB_1800226d0;
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
      iVar7 = FUN_180018ea0(pcVar14 + 5);
      (**(code **)((longlong)pvVar3 + 0x18))(pcVar14,pvVar3);
      if (iVar7 == 0) {
        return 0;
      }
      *(int *)(param_1 + 8) = iVar7;
      pcVar14 = "SFTP Protocol Error";
      uVar6 = 0xffffffe1;
      goto LAB_1800225f4;
    }
LAB_180022572:
    iVar7 = *(int *)(lVar2 + 600);
    while (iVar7 == 0) {
      uVar6 = FUN_180023e70(param_1,pvVar11,pvVar13,param_4);
      if ((int)uVar6 < 0) {
        if (uVar6 != 0xffffffdb) {
          uVar12 = 0;
          pcVar14 = (char *)0x0;
          if (uVar6 == 0xffffffda) goto LAB_1800226d0;
          goto LAB_1800225e2;
        }
        iVar7 = -0x25;
        goto LAB_180022609;
      }
      lVar4 = *(longlong *)(*param_1 + 0x68);
      for (plVar10 = (longlong *)FUN_180018d50((longlong)(param_1 + 2)); plVar10 != (longlong *)0x0;
          plVar10 = (longlong *)FUN_180018d70(plVar10)) {
        pcVar14 = (char *)plVar10[4];
        if ((*pcVar14 == 'e') && ((int)plVar10[3] == (int)lVar5)) {
          uVar12 = plVar10[5];
          FUN_180018d80(plVar10);
          (**(code **)(lVar4 + 0x18))(plVar10,lVar4);
          goto LAB_180022679;
        }
      }
      iVar7 = *(int *)(lVar2 + 600);
    }
    uVar6 = 0xfffffff3;
LAB_1800225e2:
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    pcVar14 = "Error waiting for FXP STATUS";
    goto LAB_1800225f4;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  local_res20 = (undefined1 *)(**(code **)((longlong)pvVar3 + 8))(uVar12,pvVar3);
  param_1[0x1c] = (longlong)local_res20;
  if (local_res20 == (undefined1 *)0x0) {
    uVar6 = 0xfffffffa;
    pcVar14 = "Unable to allocate memory for FXP_REMOVE packet";
    local_res20 = (undefined1 *)0x0;
    goto LAB_1800225f4;
  }
  FUN_180019150((longlong *)&local_res20,(int)param_3 + 9);
  *local_res20 = 0xd;
  iVar7 = (int)param_1[1];
  local_res20 = local_res20 + 1;
  *(int *)(param_1 + 0x1d) = iVar7;
  *(int *)(param_1 + 1) = iVar7 + 1;
  FUN_180019150((longlong *)&local_res20,iVar7);
  FUN_1800190c0((longlong *)&local_res20,param_2,(ulonglong)param_3 & 0xffffffff);
  *piVar1 = 2;
LAB_1800224ce:
  plVar10 = param_1 + 0x1c;
  pvVar13 = (void *)*plVar10;
  param_4 = uVar12;
  sVar9 = FUN_180004890(lVar2,0,pvVar13,uVar12);
  if (sVar9 != 0xffffffffffffffdb) {
    if (uVar12 == sVar9) {
      pvVar11 = pvVar3;
      (**(code **)((longlong)pvVar3 + 0x18))(*plVar10);
      *plVar10 = 0;
      *piVar1 = 3;
      goto LAB_180022530;
    }
    (**(code **)((longlong)pvVar3 + 0x18))();
    uVar6 = 0xfffffff9;
    *plVar10 = 0;
    pcVar14 = "Unable to send FXP_REMOVE command";
    *piVar1 = 0;
    goto LAB_1800225f4;
  }
  iVar7 = -0x25;
  goto LAB_180022609;
LAB_180022562:
  plVar10 = (longlong *)FUN_180018d70(plVar10);
  if (plVar10 == (longlong *)0x0) goto LAB_180022572;
  goto LAB_180022550;
LAB_1800226d0:
  if (uVar12 != 0) {
    (**(code **)((longlong)pvVar3 + 0x18))(pcVar14,pvVar3);
  }
  uVar6 = 0xffffffe1;
  pcVar14 = "SFTP unlink packet too short";
LAB_1800225f4:
  iVar7 = FUN_180018820((longlong)pvVar3,uVar6,(longlong)pcVar14,param_4);
  if (iVar7 != -0x25) {
    return iVar7;
  }
LAB_180022609:
  pvVar13 = *(void **)(*param_1 + 0x68);
  if (*(int *)((longlong)pvVar13 + 0xac) == 0) {
    return iVar7;
  }
  pvVar11 = pvVar8;
  iVar7 = FUN_18001e940((ulonglong)pvVar13,(__time64_t)pvVar8,pvVar13,param_4);
  if (iVar7 != 0) {
    return iVar7;
  }
  goto LAB_180022402;
}




undefined8 *
libssh2_sftp_write(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  __time64_t _Var3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    /* 0x22720  122  libssh2_sftp_write */
  if (param_1 == 0) {
    return (undefined8 *)0xffffffffffffffd9;
  }
  _Var3 = _time64((__time64_t *)0x0);
  while( true ) {
    puVar5 = param_3;
    puVar4 = FUN_180025cd0(param_1,param_2,param_3);
    if (puVar4 != (undefined8 *)0xffffffffffffffdb) {
      return puVar4;
    }
    uVar1 = *(ulonglong *)(**(longlong **)(param_1 + 0x18) + 0x68);
    if (*(int *)(uVar1 + 0xac) == 0) break;
    iVar2 = FUN_18001e940(uVar1,_Var3,puVar5,param_4);
    if ((undefined8 *)(longlong)iVar2 != (undefined8 *)0x0) {
      return (undefined8 *)(longlong)iVar2;
    }
  }
  return (undefined8 *)0xffffffffffffffdb;
}




longlong FUN_1800227c0(undefined1 *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  
  local_res8 = param_1;
  if (param_2 == (uint *)0x0) {
    FUN_180018d00(param_1,0);
    return 4;
  }
  FUN_180019150((longlong *)&local_res8,*param_2 & 0xf);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *local_res8 = (char)((ulonglong)uVar1 >> 0x38);
    local_res8[1] = (char)((ulonglong)uVar1 >> 0x30);
    local_res8[2] = (char)((ulonglong)uVar1 >> 0x28);
    local_res8[4] = (char)((ulonglong)uVar1 >> 0x18);
    local_res8[5] = (char)((ulonglong)uVar1 >> 0x10);
    local_res8[6] = (char)((ulonglong)uVar1 >> 8);
    local_res8[3] = (char)((ulonglong)uVar1 >> 0x20);
    local_res8[7] = (char)uVar1;
    local_res8 = local_res8 + 8;
  }
  if ((*param_2 & 2) != 0) {
    FUN_180019150((longlong *)&local_res8,param_2[4]);
    FUN_180019150((longlong *)&local_res8,param_2[5]);
  }
  if ((*param_2 & 4) != 0) {
    FUN_180019150((longlong *)&local_res8,param_2[6]);
  }
  if ((*param_2 & 8) != 0) {
    FUN_180019150((longlong *)&local_res8,param_2[7]);
    FUN_180019150((longlong *)&local_res8,param_2[8]);
  }
  return (longlong)local_res8 - (longlong)param_1;
}




longlong FUN_1800228c0(uint *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  uVar2 = 0;
  local_res10[0] = 0;
  local_30 = param_2;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_180018b90(&local_30,local_res10);
  if ((int)uVar1 != 0) {
    return -0x26;
  }
  *param_1 = local_res10[0];
  if (((local_res10[0] & 1) != 0) &&
     (uVar1 = FUN_180018bf0(&local_30,(undefined8 *)(param_1 + 2)), (int)uVar1 != 0)) {
    return -0x26;
  }
  if ((*param_1 & 2) != 0) {
    local_res18[0] = 0;
    local_res20[0] = 0;
    uVar1 = FUN_180018b90(&local_30,local_res18);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    uVar1 = FUN_180018b90(&local_30,local_res20);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    param_1[4] = local_res18[0];
    param_1[5] = local_res20[0];
  }
  if ((*param_1 & 4) != 0) {
    uVar1 = FUN_180018b90(&local_30,local_res18);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    param_1[6] = local_res18[0];
  }
  if ((*param_1 & 8) != 0) {
    uVar1 = FUN_180018b90(&local_30,local_res18);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    uVar1 = FUN_180018b90(&local_30,local_res20);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    param_1[7] = local_res18[0];
    param_1[8] = local_res20[0];
  }
  if ((int)*param_1 < 0) {
    uVar1 = FUN_180018b90(&local_30,local_res18);
    if ((int)uVar1 != 0) {
      return -0x26;
    }
    if (local_res18[0] != 0) {
      do {
        uVar1 = FUN_180018ad0(&local_30,&local_48,(ulonglong *)local_res20);
        if ((int)uVar1 != 0) {
          return -0x26;
        }
        uVar1 = FUN_180018ad0(&local_30,&local_38,&local_40);
        if ((int)uVar1 != 0) {
          return -0x26;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_res18[0]);
    }
  }
  return local_28 - local_30;
}




undefined4 FUN_180022a10(longlong param_1,uint *param_2,int param_3,char **param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  char **ppcVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  char **ppcVar17;
  undefined1 *local_res8;
  uint *local_res10;
  uint local_res18;
  char *local_res20;
  ulonglong local_58 [3];
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  local_58[0] = 0;
  lVar14 = *plVar2;
  lVar3 = *(longlong *)(lVar14 + 0x68);
  if (param_3 == 0) {
    iVar11 = 0xd;
  }
  else {
    uVar1 = *param_2;
    param_4 = (char **)(ulonglong)(uVar1 & 1);
    iVar11 = (uVar1 & 4) + 0x11 + (uVar1 & 2) * 4 + (uVar1 & 1) * 8 + (uVar1 & 8);
  }
  local_res18 = *(int *)(param_1 + 0x120) + iVar11;
  local_res20 = (char *)0x0;
  ppcVar17 = (char **)(ulonglong)local_res18;
  local_res10 = param_2;
  if (*(int *)((longlong)plVar2 + 0xcc) == 0) {
    *(undefined4 *)(plVar2 + 8) = 0;
    local_res8 = (undefined1 *)(**(code **)(lVar3 + 8))(ppcVar17,lVar3);
    plVar2[0x1a] = (longlong)local_res8;
    if (plVar2[0x1a] == 0) {
      uVar4 = FUN_180018820(lVar3,0xfffffffa,0x180033840,param_4);
      return uVar4;
    }
    FUN_180019150((longlong *)&local_res8,local_res18 - 4);
    uVar10 = 8;
    if (param_3 != 0) {
      uVar10 = 10;
    }
    *local_res8 = uVar10;
    local_res8 = local_res8 + 1;
    iVar11 = (int)plVar2[1];
    *(int *)(plVar2 + 0x1b) = iVar11;
    *(int *)(plVar2 + 1) = iVar11 + 1;
    FUN_180019150((longlong *)&local_res8,iVar11);
    FUN_1800190c0((longlong *)&local_res8,(void *)(param_1 + 0x20),*(ulonglong *)(param_1 + 0x120));
    if (param_3 != 0) {
      lVar6 = FUN_1800227c0(local_res8,local_res10);
      local_res8 = local_res8 + lVar6;
    }
    *(undefined4 *)((longlong)plVar2 + 0xcc) = 2;
  }
  else if (*(int *)((longlong)plVar2 + 0xcc) != 2) goto LAB_180022c0d;
  plVar13 = plVar2 + 0x1a;
  param_4 = ppcVar17;
  ppcVar7 = (char **)FUN_180004890(lVar14,0,(void *)*plVar13,(ulonglong)ppcVar17);
  if (ppcVar7 == (char **)0xffffffffffffffdb) {
    return 0xffffffdb;
  }
  if (ppcVar17 != ppcVar7) {
    (**(code **)(lVar3 + 0x18))();
    pcVar15 = "Unable to send FXP_FSTAT command";
    *plVar13 = 0;
    *(undefined4 *)((longlong)plVar2 + 0xcc) = 0;
    if (param_3 != 0) {
      pcVar15 = "Unable to send FXP_FSETSTAT";
    }
    uVar4 = FUN_180018820(lVar3,0xfffffff9,(longlong)pcVar15,param_4);
    return uVar4;
  }
  (**(code **)(lVar3 + 0x18))(*plVar13,lVar3);
  *(undefined4 *)((longlong)plVar2 + 0xcc) = 3;
  *plVar13 = 0;
LAB_180022c0d:
  uVar1 = *(uint *)(plVar2 + 0x1b);
  if (plVar2[0xe] == 0) {
    _Var8 = _time64((__time64_t *)0x0);
    plVar2[0xe] = _Var8;
  }
  iVar11 = *(int *)(*(longlong *)(*plVar2 + 0x68) + 600);
  pcVar15 = (char *)0x0;
  do {
    lVar14 = 0;
    if (iVar11 != 0) {
      uVar5 = 0xfffffff3;
LAB_180022cd6:
      plVar2[0xe] = 0;
LAB_180022cda:
      if (uVar5 == 0xffffffdb) {
        uVar4 = 0xffffffdb;
      }
      else if (uVar5 == 0xffffffda) {
        if (local_58[0] != 0) {
          (**(code **)(lVar3 + 0x18))(pcVar15,lVar3);
        }
        uVar4 = FUN_180018820(lVar3,0xffffffe1,0x1800338c0,param_4);
      }
      else {
        *(undefined4 *)((longlong)plVar2 + 0xcc) = 0;
        if (uVar5 == 0) {
          if (*pcVar15 == 'e') {
            iVar11 = FUN_180018ea0(pcVar15 + 5);
            (**(code **)(lVar3 + 0x18))(pcVar15,lVar3);
            if (iVar11 != 0) {
              *(int *)(plVar2 + 8) = iVar11;
              uVar4 = FUN_180018820(lVar3,0xffffffe1,0x180033748,param_4);
              return uVar4;
            }
          }
          else {
            lVar14 = FUN_1800228c0(local_res10,(longlong)(pcVar15 + 5),local_58[0] - 5);
            if (lVar14 < 0) {
              (**(code **)(lVar3 + 0x18))();
              uVar4 = FUN_180018820(lVar3,0xffffffe1,0x1800338e0,param_4);
              return uVar4;
            }
            (**(code **)(lVar3 + 0x18))(pcVar15,lVar3);
          }
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_180018820(lVar3,uVar5,0x180033538,param_4);
        }
      }
      return uVar4;
    }
    do {
      uVar12 = (ulonglong)(byte)(&DAT_18003315c)[lVar14];
      param_4 = &local_res20;
      uVar16 = (ulonglong)uVar1;
      uVar9 = FUN_180023dc0(plVar2,(&DAT_18003315c)[lVar14],uVar1,param_4,(longlong *)local_58);
      if ((int)uVar9 == 0) {
        uVar5 = -(uint)(local_58[0] < 9) & 0xffffffda;
        pcVar15 = local_res20;
        goto LAB_180022cd6;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < 2);
    uVar5 = FUN_180023e70(plVar2,uVar12,uVar16,(ulonglong)param_4);
    if (((uVar5 + 0x80000000 & 0x80000000) == 0) && (pcVar15 = local_res20, uVar5 != 0xffffffdb))
    goto LAB_180022cd6;
    if ((int)uVar5 < 1) {
      _Var8 = _time64((__time64_t *)0x0);
      pcVar15 = local_res20;
      if ((*(int *)(*(longlong *)(*plVar2 + 0x68) + 0x11f68) - (int)_Var8) + (int)plVar2[0xe] < 1) {
        uVar5 = 0xfffffff7;
        goto LAB_180022cd6;
      }
      if (uVar5 == 0xffffffdb) {
        uVar5 = 0xffffffdb;
        goto LAB_180022cda;
      }
    }
    iVar11 = *(int *)(*(longlong *)(*plVar2 + 0x68) + 600);
    pcVar15 = local_res20;
  } while( true );
}




undefined4 FUN_180022e00(longlong param_1,undefined8 *param_2,undefined8 param_3,char **param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  size_t sVar9;
  __time64_t _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  char **ppcVar17;
  undefined1 *local_res8;
  undefined8 *local_res10;
  char *local_res18;
  ulonglong local_res20;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x120);
  ppcVar17 = (char **)(ulonglong)(iVar1 + 0x25);
  lVar14 = *plVar3;
  lVar4 = *(longlong *)(lVar14 + 0x68);
  local_res20 = 0;
  local_res18 = (char *)0x0;
  local_res10 = param_2;
  if (*(int *)((longlong)plVar3 + 0x104) == 0) {
    *(undefined4 *)(plVar3 + 8) = 0;
    puVar8 = (undefined1 *)(**(code **)(lVar4 + 8))(ppcVar17,lVar4);
    local_res8 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      uVar6 = FUN_180018820(lVar4,0xfffffffa,0x180033798,param_4);
      return uVar6;
    }
    FUN_180019150((longlong *)&local_res8,iVar1 + 0x21);
    *local_res8 = 200;
    local_res8 = local_res8 + 1;
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 0x22) = iVar1;
    *(int *)(plVar3 + 1) = iVar1 + 1;
    FUN_180019150((longlong *)&local_res8,iVar1);
    FUN_1800190c0((longlong *)&local_res8,"fstatvfs@openssh.com",0x14);
    FUN_1800190c0((longlong *)&local_res8,(void *)(param_1 + 0x20),*(ulonglong *)(param_1 + 0x120));
    *(undefined4 *)((longlong)plVar3 + 0x104) = 2;
  }
  else {
    puVar8 = (undefined1 *)plVar3[0x21];
    if (*(int *)((longlong)plVar3 + 0x104) != 2) goto LAB_180022f97;
  }
  param_4 = ppcVar17;
  sVar9 = FUN_180004890(lVar14,0,puVar8,(ulonglong)ppcVar17);
  if ((sVar9 == 0xffffffffffffffdb) ||
     ((-1 < (longlong)sVar9 && ((longlong)sVar9 < (longlong)ppcVar17)))) {
    plVar3[0x21] = (longlong)puVar8;
    return 0xffffffdb;
  }
  (**(code **)(lVar4 + 0x18))(puVar8,lVar4);
  plVar3[0x21] = 0;
  if ((longlong)sVar9 < 0) {
    *(undefined4 *)((longlong)plVar3 + 0x104) = 0;
    uVar6 = FUN_180018820(lVar4,0xfffffff9,0x180033708,param_4);
    return uVar6;
  }
  *(undefined4 *)((longlong)plVar3 + 0x104) = 3;
LAB_180022f97:
  uVar2 = *(uint *)(plVar3 + 0x22);
  if (plVar3[0xe] == 0) {
    _Var10 = _time64((__time64_t *)0x0);
    plVar3[0xe] = _Var10;
  }
  iVar1 = *(int *)(*(longlong *)(*plVar3 + 0x68) + 600);
  pcVar15 = (char *)0x0;
  do {
    lVar14 = 0;
    if (iVar1 != 0) {
      uVar7 = 0xfffffff3;
LAB_180023067:
      plVar3[0xe] = 0;
LAB_18002306b:
      if (uVar7 == 0xffffffdb) {
        uVar6 = 0xffffffdb;
      }
      else if (uVar7 == 0xffffffda) {
        if (local_res20 != 0) {
          (**(code **)(lVar4 + 0x18))(pcVar15,lVar4);
        }
        uVar6 = FUN_180018820(lVar4,0xffffffe1,0x180033ac0,param_4);
      }
      else if (uVar7 == 0) {
        if (*pcVar15 == 'e') {
          uVar6 = FUN_180018ea0(pcVar15 + 5);
          *(undefined4 *)((longlong)plVar3 + 0x104) = 0;
          (**(code **)(lVar4 + 0x18))(pcVar15,lVar4);
          *(undefined4 *)(plVar3 + 8) = uVar6;
          uVar6 = FUN_180018820(lVar4,0xffffffe1,0x180033748,param_4);
        }
        else if (local_res20 < 0x5d) {
          (**(code **)(lVar4 + 0x18))(pcVar15,lVar4);
          *(undefined4 *)((longlong)plVar3 + 0x104) = 0;
          uVar6 = FUN_180018820(lVar4,0xffffffe1,0x180033b50,param_4);
        }
        else {
          *(undefined4 *)((longlong)plVar3 + 0x104) = 0;
          uVar11 = FUN_180018ec0(pcVar15 + 5);
          puVar5 = local_res10;
          *local_res10 = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0xd);
          puVar5[1] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x15);
          puVar5[2] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x1d);
          puVar5[3] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x25);
          puVar5[4] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x2d);
          puVar5[5] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x35);
          puVar5[6] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x3d);
          puVar5[7] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x45);
          puVar5[8] = uVar11;
          uVar11 = FUN_180018ec0(pcVar15 + 0x4d);
          uVar12 = FUN_180018ec0(pcVar15 + 0x55);
          puVar5[10] = uVar12;
          puVar5[9] = (ulonglong)((uint)uVar11 & 3);
          (**(code **)(lVar4 + 0x18))(pcVar15,lVar4);
          uVar6 = 0;
        }
      }
      else {
        *(undefined4 *)((longlong)plVar3 + 0x104) = 0;
        uVar6 = FUN_180018820(lVar4,uVar7,0x180033808,param_4);
      }
      return uVar6;
    }
    do {
      uVar13 = (ulonglong)(byte)(&DAT_180033160)[lVar14];
      param_4 = &local_res18;
      uVar16 = (ulonglong)uVar2;
      uVar11 = FUN_180023dc0(plVar3,(&DAT_180033160)[lVar14],uVar2,param_4,(longlong *)&local_res20)
      ;
      if ((int)uVar11 == 0) {
        uVar7 = -(uint)(local_res20 < 9) & 0xffffffda;
        pcVar15 = local_res18;
        goto LAB_180023067;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < 2);
    uVar7 = FUN_180023e70(plVar3,uVar13,uVar16,(ulonglong)param_4);
    if (((uVar7 + 0x80000000 & 0x80000000) == 0) && (pcVar15 = local_res18, uVar7 != 0xffffffdb))
    goto LAB_180023067;
    if ((int)uVar7 < 1) {
      _Var10 = _time64((__time64_t *)0x0);
      pcVar15 = local_res18;
      if ((*(int *)(*(longlong *)(*plVar3 + 0x68) + 0x11f68) - (int)_Var10) + (int)plVar3[0xe] < 1)
      {
        uVar7 = 0xfffffff7;
        goto LAB_180023067;
      }
      if (uVar7 == 0xffffffdb) {
        uVar7 = 0xffffffdb;
        goto LAB_18002306b;
      }
    }
    iVar1 = *(int *)(*(longlong *)(*plVar3 + 0x68) + 600);
    pcVar15 = local_res18;
  } while( true );
}




longlong * FUN_180023250(ulonglong param_1,undefined8 param_2,void *param_3,undefined *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  size_t sVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  char *local_res8;
  longlong local_res10;
  char *local_58;
  char *local_50;
  ulonglong local_48;
  
  uVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x11cc4);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x11cc8) = 0;
    *(undefined4 *)(param_1 + 0x11cc4) = 2;
LAB_18002329f:
    uVar10 = 0x200000;
    lVar4 = FUN_180003c00(param_1,"session",7,(longlong *)0x200000,0x8000,(longlong *)0x0,0);
    *(longlong *)(param_1 + 0x11cd0) = lVar4;
    if (lVar4 == 0) {
      iVar2 = libssh2_session_last_errno(param_1);
      if (iVar2 == -0x25) {
        FUN_180018820(param_1,0xffffffdb,0x180032968,uVar10);
        return (longlong *)0x0;
      }
      FUN_180018820(param_1,0xffffffeb,0x180032570,uVar10);
      goto LAB_180023311;
    }
    *(undefined4 *)(param_1 + 0x11cc4) = 3;
LAB_180023348:
    param_4 = &DAT_180033270;
    iVar2 = FUN_180004270(*(longlong *)(param_1 + 0x11cd0),"subsystem",9,(longlong *)&DAT_180033270,
                          4);
    if (iVar2 == -0x25) {
      pcVar9 = "Would block to request SFTP subsystem";
      goto LAB_180023376;
    }
    if (iVar2 != 0) {
      pcVar9 = "Unable to request SFTP subsystem";
      uVar3 = 0xffffffeb;
      goto LAB_18002374c;
    }
    *(undefined4 *)(param_1 + 0x11cc4) = 4;
LAB_1800233bb:
    iVar2 = FUN_1800037e0(*(longlong *)(param_1 + 0x11cd0),1);
    if (iVar2 == -0x25) {
      FUN_180018820(param_1,0xffffffdb,0x1800332c8,param_4);
      return (longlong *)0x0;
    }
    plVar5 = (longlong *)FUN_180018690(param_1,0x168);
    *(longlong **)(param_1 + 0x11cc8) = plVar5;
    if (plVar5 == (longlong *)0x0) {
      pcVar9 = "Unable to allocate a new SFTP structure";
      uVar3 = 0xfffffffa;
      goto LAB_18002374c;
    }
    *plVar5 = *(longlong *)(param_1 + 0x11cd0);
    *(undefined4 *)(plVar5 + 1) = 0;
    FUN_180018d00((undefined1 *)(param_1 + 0x11cd8),5);
    *(undefined1 *)(param_1 + 0x11cdc) = 1;
    FUN_180018d00((undefined1 *)(param_1 + 0x11cdd),3);
    *(undefined4 *)(param_1 + 0x11cc4) = 5;
    *(undefined8 *)(param_1 + 0x11ce8) = 0;
LAB_180023460:
    plVar8 = (longlong *)(param_1 + 0x11ce8);
    param_4 = (undefined *)(9 - *plVar8);
    param_3 = (void *)(param_1 + 0x11cd8 + *plVar8);
    param_2 = 0;
    sVar6 = FUN_180004890(*(longlong *)(param_1 + 0x11cd0),0,param_3,(ulonglong)param_4);
    if (sVar6 == 0xffffffffffffffdb) {
      pcVar9 = "Would block sending SSH_FXP_INIT";
      goto LAB_180023376;
    }
    if ((longlong)sVar6 < 0) {
      pcVar9 = "Unable to send SSH_FXP_INIT";
      uVar3 = 0xfffffff9;
      goto LAB_18002374c;
    }
    *plVar8 = *plVar8 + sVar6;
    if (*plVar8 == 9) {
      *(undefined4 *)(param_1 + 0x11cc4) = 6;
    }
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x11cc8);
    if (iVar2 == 2) goto LAB_18002329f;
    if (iVar2 == 3) goto LAB_180023348;
    if (iVar2 == 4) goto LAB_1800233bb;
    if (iVar2 == 5) goto LAB_180023460;
  }
  if (*(int *)(param_1 + 0x11cc4) == 0x10) {
    uVar7 = FUN_1800039c0(*(longlong **)(param_1 + 0x11cd0),param_2,param_3,param_4);
    if ((int)uVar7 != -0x25) {
      *(undefined8 *)(param_1 + 0x11cd0) = 0;
      if (*(longlong *)(param_1 + 0x11cc8) != 0) {
        (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x11cc8),param_1);
        *(undefined8 *)(param_1 + 0x11cc8) = 0;
        *(undefined4 *)(param_1 + 0x11cc4) = 0;
        return (longlong *)0x0;
      }
LAB_180023311:
      *(undefined4 *)(param_1 + 0x11cc4) = 0;
      return (longlong *)0x0;
    }
    pcVar9 = "Would block closing channel";
  }
  else {
    lVar4 = *(longlong *)(*plVar5 + 0x68);
    for (plVar8 = (longlong *)FUN_180018d50((longlong)(plVar5 + 2)); plVar8 != (longlong *)0x0;
        plVar8 = (longlong *)FUN_180018d70(plVar8)) {
      pcVar9 = (char *)plVar8[4];
      if (*pcVar9 == '\x02') {
        uVar7 = plVar8[5];
        FUN_180018d80(plVar8);
        (**(code **)(lVar4 + 0x18))(plVar8,lVar4);
        uVar3 = -(uint)(uVar7 < 5) & 0xffffffda;
        goto LAB_1800235af;
      }
    }
    iVar2 = *(int *)(lVar4 + 600);
    pcVar9 = local_res8;
    while (iVar2 == 0) {
      local_res8 = pcVar9;
      uVar3 = FUN_180023e70(plVar5,param_2,param_3,(ulonglong)param_4);
      pcVar9 = local_res8;
      if ((int)uVar3 < 0) goto LAB_1800235af;
      lVar1 = *(longlong *)(*plVar5 + 0x68);
      for (plVar8 = (longlong *)FUN_180018d50((longlong)(plVar5 + 2)); plVar8 != (longlong *)0x0;
          plVar8 = (longlong *)FUN_180018d70(plVar8)) {
        pcVar9 = (char *)plVar8[4];
        if (*pcVar9 == '\x02') {
          uVar7 = plVar8[5];
          FUN_180018d80(plVar8);
          (**(code **)(lVar1 + 0x18))(plVar8,lVar1);
          uVar3 = -(uint)(uVar7 < 5) & 0xffffffda;
          goto LAB_1800235af;
        }
      }
      pcVar9 = local_res8;
      iVar2 = *(int *)(lVar4 + 600);
    }
    uVar3 = 0xfffffff3;
LAB_1800235af:
    if (uVar3 != 0xffffffdb) {
      if (uVar3 == 0xffffffda) {
        if (uVar7 != 0) {
          (**(code **)(param_1 + 0x18))(pcVar9,param_1);
        }
        pcVar9 = "Invalid SSH_FXP_VERSION response";
        uVar3 = 0xffffffe1;
      }
      else if (uVar3 == 0) {
        local_50 = pcVar9 + 1;
        local_58 = pcVar9;
        local_48 = uVar7;
        uVar10 = FUN_180018b90((longlong *)&local_58,(undefined4 *)((longlong)plVar5 + 0xc));
        if ((int)uVar10 != 0) {
          (**(code **)(param_1 + 0x18))(pcVar9,param_1);
          *(undefined4 *)(param_1 + 0x11cc4) = 0x10;
          return (longlong *)0x0;
        }
        if (3 < *(uint *)((longlong)plVar5 + 0xc)) {
          *(undefined4 *)((longlong)plVar5 + 0xc) = 3;
        }
        do {
          if (pcVar9 + uVar7 <= local_50) {
            (**(code **)(param_1 + 0x18))(pcVar9,param_1);
            *(longlong **)(*plVar5 + 0x70) = plVar5;
            *(undefined1 **)(*plVar5 + 0x78) = &LAB_1800209d0;
            *(undefined4 *)(param_1 + 0x11cc4) = 0;
            *(undefined8 *)(param_1 + 0x11cc8) = 0;
            *(undefined8 *)(param_1 + 0x11cd0) = 0;
            FUN_180018d60(plVar5 + 6);
            return plVar5;
          }
          uVar10 = FUN_180018ad0((longlong *)&local_58,(longlong *)&local_res8,(ulonglong *)0x0);
          if ((int)uVar10 != 0) {
            (**(code **)(param_1 + 0x18))(pcVar9,param_1);
            pcVar9 = "Data too short when extracting extname";
            goto LAB_180023747;
          }
          uVar10 = FUN_180018ad0((longlong *)&local_58,&local_res10,(ulonglong *)0x0);
        } while ((int)uVar10 == 0);
        (**(code **)(param_1 + 0x18))(pcVar9,param_1);
        pcVar9 = "Data too short when extracting extdata";
LAB_180023747:
        uVar3 = 0xffffffda;
      }
      else {
        pcVar9 = "Timeout waiting for response from SFTP subsystem";
      }
LAB_18002374c:
      FUN_180018820(param_1,uVar3,(longlong)pcVar9,param_4);
      *(undefined4 *)(param_1 + 0x11cc4) = 0x10;
      return (longlong *)0x0;
    }
    pcVar9 = "Would block receiving SSH_FXP_VERSION";
  }
LAB_180023376:
  FUN_180018820(param_1,0xffffffdb,(longlong)pcVar9,param_4);
  return (longlong *)0x0;
}




undefined8 *
FUN_180023770(longlong *param_1,void *param_2,void *param_3,char **param_4,uint param_5,int param_6,
             uint *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  char *pcVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 *local_res8;
  void *local_res10;
  longlong *local_78;
  char *local_70;
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar17 = SUB84(param_4,0);
  local_70 = (char *)*param_1;
  plVar19 = param_1 + 0xf;
  local_68 = 4;
  uStack_60 = 0;
  lVar2 = *(longlong *)(local_70 + 0x68);
  local_58 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_res10 = param_2;
  if ((int)*plVar19 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_7 != (uint *)0x0) {
      local_68 = *param_7;
      uStack_64 = param_7[1];
      uStack_60 = *(undefined8 *)(param_7 + 2);
      local_58 = *(undefined8 *)(param_7 + 4);
      uStack_50 = (uint)*(undefined8 *)(param_7 + 6);
      uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(param_7 + 6) >> 0x20);
      uStack_48 = (undefined4)*(undefined8 *)(param_7 + 8);
      uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_7 + 8) >> 0x20);
    }
    if (param_6 == 0) {
      iVar4 = (local_68 & 4) + 0x15 + (local_68 & 2) * 4 + (local_68 & 1) * 8 + (local_68 & 8);
    }
    else {
      iVar4 = 0xd;
    }
    iVar4 = iVar4 + (int)param_3;
    *(int *)(param_1 + 0x11) = iVar4;
    param_1[0x12] = 0;
    local_78 = plVar19;
    local_res8 = (undefined1 *)(**(code **)(lVar2 + 8))(iVar4,lVar2);
    param_1[0x10] = (longlong)local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      pcVar15 = "Unable to allocate memory for FXP_OPEN or FXP_OPENDIR packet";
      uVar5 = 0xfffffffa;
      local_res8 = (undefined1 *)0x0;
      goto LAB_180023973;
    }
    uStack_50 = 0x4000;
    if (param_6 == 0) {
      uStack_50 = 0x8000;
    }
    uStack_50 = uStack_50 | param_5;
    FUN_180019150((longlong *)&local_res8,(int)param_1[0x11] + -4);
    uVar12 = 0xb;
    if (param_6 == 0) {
      uVar12 = 3;
    }
    *local_res8 = uVar12;
    iVar4 = (int)param_1[1];
    local_res8 = local_res8 + 1;
    *(int *)(param_1 + 0x13) = iVar4;
    *(int *)(param_1 + 1) = iVar4 + 1;
    FUN_180019150((longlong *)&local_res8,iVar4);
    FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)param_3);
    if (param_6 == 0) {
      FUN_180019150((longlong *)&local_res8,uVar17);
      lVar6 = FUN_1800227c0(local_res8,&local_68);
      local_res8 = local_res8 + lVar6;
    }
    *(int *)plVar19 = 2;
LAB_18002394a:
    plVar19 = param_1 + 0x10;
    puVar13 = (ulonglong *)(param_1 + 0x12);
    param_4 = (char **)((ulonglong)*(uint *)(param_1 + 0x11) - *puVar13);
    param_3 = (void *)(*plVar19 + *puVar13);
    local_78 = param_1 + 0xf;
    sVar7 = FUN_180004890((longlong)local_70,0,param_3,(ulonglong)param_4);
    if (sVar7 != 0xffffffffffffffdb) {
      if ((longlong)sVar7 < 0) {
        FUN_180018820(lVar2,(int)sVar7,0x1800334d8,param_4);
        (**(code **)(lVar2 + 0x18))(*plVar19,lVar2);
        *plVar19 = 0;
        *(int *)local_78 = 0;
        return (undefined8 *)0x0;
      }
      *puVar13 = *puVar13 + sVar7;
      if ((ulonglong)*(uint *)(param_1 + 0x11) == *puVar13) {
        (**(code **)(lVar2 + 0x18))(*plVar19,lVar2);
        *plVar19 = 0;
        *(int *)(param_1 + 0xf) = 3;
      }
      goto LAB_1800239e5;
    }
    pcVar15 = "Would block sending FXP_OPEN or FXP_OPENDIR command";
  }
  else {
    if ((int)*plVar19 == 2) goto LAB_18002394a;
LAB_1800239e5:
    if ((int)param_1[0xf] != 3) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 0x13);
    local_78 = (longlong *)0x0;
    if (param_1[0xe] == 0) {
      _Var8 = _time64((__time64_t *)0x0);
      param_1[0xe] = _Var8;
    }
    iVar4 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
    plVar19 = (longlong *)0x0;
    while (iVar4 == 0) {
      lVar6 = 0;
      do {
        uVar16 = (ulonglong)(byte)(&DAT_180033150)[lVar6];
        param_4 = &local_70;
        param_3 = (void *)(ulonglong)uVar1;
        uVar9 = FUN_180023dc0(param_1,(&DAT_180033150)[lVar6],uVar1,param_4,(longlong *)&local_78);
        if ((int)uVar9 == 0) {
          uVar5 = -(uint)(local_78 == (longlong *)0x0) & 0xffffffda;
          plVar19 = local_78;
          goto LAB_180023aba;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < 2);
      uVar5 = FUN_180023e70(param_1,uVar16,param_3,(ulonglong)param_4);
      if (((uVar5 + 0x80000000 & 0x80000000) == 0) && (plVar19 = local_78, uVar5 != 0xffffffdb))
      goto LAB_180023aba;
      if ((int)uVar5 < 1) {
        _Var8 = _time64((__time64_t *)0x0);
        plVar19 = local_78;
        if ((*(int *)(*(longlong *)(*param_1 + 0x68) + 0x11f68) - (int)_Var8) + (int)param_1[0xe] <
            1) {
          uVar5 = 0xfffffff7;
          goto LAB_180023aba;
        }
        if (uVar5 == 0xffffffdb) {
          uVar5 = 0xffffffdb;
          goto LAB_180023abe;
        }
      }
      plVar19 = local_78;
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
    }
    uVar5 = 0xfffffff3;
LAB_180023aba:
    param_1[0xe] = 0;
LAB_180023abe:
    pcVar15 = local_70;
    if (uVar5 != 0xffffffdb) {
      if (uVar5 == 0xffffffda) {
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(lVar2 + 0x18))(local_70,lVar2);
        }
        pcVar15 = "Response too small";
        uVar5 = 0xffffffe1;
        goto LAB_180023973;
      }
      *(undefined4 *)(param_1 + 0xf) = 0;
      if (uVar5 != 0) {
        pcVar15 = "Timeout waiting for status message";
        goto LAB_180023973;
      }
      pcVar18 = local_70;
      if (*local_70 == 'e') {
        if (plVar19 < (longlong *)0x9) {
          pcVar15 = "Too small FXP_STATUS";
        }
        else {
          iVar4 = FUN_180018ea0(local_70 + 5);
          *(int *)(param_1 + 8) = iVar4;
          pcVar18 = pcVar15;
          if (iVar4 == 0) {
            lVar14 = lVar2;
            (**(code **)(lVar2 + 0x18))(pcVar15);
            lVar3 = param_1[0x13];
            lVar6 = *(longlong *)(*param_1 + 0x68);
            for (plVar10 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
                plVar10 != (longlong *)0x0; plVar10 = (longlong *)FUN_180018d70(plVar10)) {
              pcVar18 = (char *)plVar10[4];
              if ((*pcVar18 == 'f') && ((int)plVar10[3] == (int)lVar3)) {
                plVar19 = (longlong *)plVar10[5];
                FUN_180018d80(plVar10);
                (**(code **)(lVar6 + 0x18))(plVar10,lVar6);
                uVar5 = -(uint)(plVar19 < (longlong *)0xa) & 0xffffffda;
                goto LAB_180023c92;
              }
            }
            iVar4 = *(int *)(lVar6 + 600);
            while (iVar4 == 0) {
              uVar5 = FUN_180023e70(param_1,lVar14,param_3,(ulonglong)param_4);
              pcVar18 = pcVar15;
              if ((int)uVar5 < 0) goto LAB_180023c92;
              local_70 = *(char **)(*param_1 + 0x68);
              for (plVar10 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
                  plVar10 != (longlong *)0x0; plVar10 = (longlong *)FUN_180018d70(plVar10)) {
                pcVar18 = (char *)plVar10[4];
                if ((*pcVar18 == 'f') && ((int)plVar10[3] == (int)lVar3)) {
                  plVar19 = (longlong *)plVar10[5];
                  FUN_180018d80(plVar10);
                  (**(code **)(local_70 + 0x18))(plVar10,local_70);
                  uVar5 = -(uint)(plVar19 < (longlong *)0xa) & 0xffffffda;
                  goto LAB_180023c92;
                }
              }
              iVar4 = *(int *)(lVar6 + 600);
            }
            uVar5 = 0xfffffff3;
            pcVar18 = pcVar15;
LAB_180023c92:
            if (uVar5 == 0xffffffdb) {
              *(undefined4 *)(param_1 + 0xf) = 3;
              return (undefined8 *)0x0;
            }
            if (uVar5 == 0xffffffda) {
              if (plVar19 != (longlong *)0x0) {
                (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
              }
              pcVar15 = "Too small FXP_HANDLE";
              uVar5 = 0xffffffe1;
              goto LAB_180023973;
            }
            if (uVar5 == 0) goto LAB_180023cdf;
          }
          pcVar15 = "Failed opening remote file";
        }
        uVar17 = 0xffffffe1;
      }
      else {
LAB_180023cdf:
        if (plVar19 < (longlong *)0xa) {
          FUN_180018820(lVar2,0xffffffe1,0x180033578,param_4);
          (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
          return (undefined8 *)0x0;
        }
        puVar11 = (undefined8 *)FUN_180018690(lVar2,0x188);
        if (puVar11 != (undefined8 *)0x0) {
          *(uint *)(puVar11 + 0x25) = (uint)(param_6 != 0);
          uVar5 = FUN_180018ea0(pcVar18 + 5);
          uVar16 = (ulonglong)uVar5;
          puVar11[0x24] = uVar16;
          if (0x100 < uVar16) {
            puVar11[0x24] = 0x100;
            uVar16 = 0x100;
          }
          uVar20 = (longlong)plVar19 - 9;
          if (uVar20 < uVar16) {
            puVar11[0x24] = uVar20;
            uVar16 = uVar20;
          }
          memcpy(puVar11 + 4,pcVar18 + 9,uVar16);
          (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
          FUN_180018d20(param_1 + 6,puVar11);
          puVar11[3] = param_1;
          puVar11[0x26] = 0;
          puVar11[0x27] = 0;
          return puVar11;
        }
        pcVar15 = "Unable to allocate new SFTP handle structure";
        uVar17 = 0xfffffffa;
      }
      FUN_180018820(lVar2,uVar17,(longlong)pcVar15,param_4);
      (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
      return (undefined8 *)0x0;
    }
    pcVar15 = "Would block waiting for status message";
  }
  uVar5 = 0xffffffdb;
LAB_180023973:
  FUN_180018820(lVar2,uVar5,(longlong)pcVar15,param_4);
  return (undefined8 *)0x0;
}




undefined8
FUN_180023dc0(longlong *param_1,char param_2,int param_3,undefined8 *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0x68);
  plVar2 = (longlong *)FUN_180018d50((longlong)(param_1 + 2));
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 0xffffffff;
    }
    if ((*(char *)plVar2[4] == param_2) && ((param_2 == '\x02' || ((int)plVar2[3] == param_3))))
    break;
    plVar2 = (longlong *)FUN_180018d70(plVar2);
  }
  *param_4 = (char *)plVar2[4];
  *param_5 = plVar2[5];
  FUN_180018d80(plVar2);
  (**(code **)(lVar1 + 0x18))(plVar2,lVar1);
  return 0;
}




uint FUN_180023e70(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char *pcVar13;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x68);
  if ((int)param_1[0x14] == 3) {
    pbVar9 = (byte *)param_1[0xb];
    *(undefined4 *)(param_1 + 0x14) = 0;
LAB_18002402d:
    uVar5 = libssh2_channel_window_read_ex(lVar2,(undefined4 *)0x0,(undefined4 *)0x0);
    if (uVar5 < *(uint *)(param_1 + 0xc)) {
      param_4 = 0;
      iVar7 = FUN_180004770(lVar2,*(uint *)(param_1 + 0xc) * 2,'\x01',(undefined4 *)0x0);
      uVar6 = 0;
      if (iVar7 == -0x25) {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar6;
      if (iVar7 == -0x25) {
        return 0xffffffdb;
      }
    }
  }
  else {
    if ((int)param_1[0x14] != 4) {
LAB_180023eba:
      param_4 = 9 - param_1[10];
      pcVar13 = (char *)(param_1[10] + 0x44 + (longlong)param_1);
      uVar8 = FUN_180004510(lVar2,0,(longlong)pcVar13,param_4);
      if (uVar8 == 0xffffffffffffffdb) {
        return 0xffffffdb;
      }
      if ((longlong)uVar8 < 0) {
        uVar5 = FUN_180018820(lVar3,(int)uVar8,0x1800331e8,param_4);
        return uVar5;
      }
      param_1[10] = param_1[10] + uVar8;
      if (param_1[10] != 9) {
        return 0xffffffdb;
      }
      uVar6 = FUN_180018ea0((undefined1 *)((longlong)param_1 + 0x44));
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      lVar4 = param_1[9];
      iVar7 = FUN_180018ea0((undefined1 *)((longlong)param_1 + 0x49));
      if (*(uint *)(param_1 + 0xc) < 0x40001) {
        if (*(uint *)(param_1 + 0xc) < 5) {
          uVar5 = FUN_180018820(lVar3,0xfffffffa,0x180033210,param_4);
          return uVar5;
        }
      }
      else if (((*(int *)((longlong)param_1 + 0xbc) == 0) || ((int)param_1[0x19] != iVar7)) ||
              ((char)lVar4 != 'h')) {
        libssh2_channel_flush_ex(lVar2,0,pcVar13,param_4);
        param_1[10] = 0;
        uVar5 = FUN_180018820(lVar3,0xffffffe7,0x1800331f8,param_4);
        return uVar5;
      }
      pbVar9 = (byte *)(**(code **)(lVar3 + 8))();
      if (pbVar9 == (byte *)0x0) {
        uVar5 = FUN_180018820(lVar3,0xfffffffa,0x180033230,param_4);
        return uVar5;
      }
      param_1[0xb] = (longlong)pbVar9;
      param_1[10] = 0;
      param_1[0xd] = 5;
      *(int *)pbVar9 = (int)param_1[9];
      pbVar9[4] = *(byte *)((longlong)param_1 + 0x4c);
      goto LAB_18002402d;
    }
    pbVar9 = (byte *)param_1[0xb];
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (pbVar9 == (byte *)0x0) goto LAB_180023eba;
  }
  uVar12 = (ulonglong)*(uint *)(param_1 + 0xc);
  uVar8 = param_1[0xd];
  if (uVar8 < uVar12) {
    do {
      param_4 = uVar12 - uVar8;
      uVar8 = FUN_180004510(lVar2,0,(longlong)(pbVar9 + uVar8),param_4);
      if (uVar8 == 0xffffffffffffffdb) {
        *(undefined4 *)(param_1 + 0x14) = 4;
        return 0xffffffdb;
      }
      if ((longlong)uVar8 < 0) {
        (**(code **)(lVar3 + 0x18))(pbVar9,lVar3);
        param_1[0xb] = 0;
        uVar5 = FUN_180018820(lVar3,(int)uVar8,0x180033250,param_4);
        return uVar5;
      }
      uVar8 = param_1[0xd] + uVar8;
      param_1[0xd] = uVar8;
      uVar12 = (ulonglong)*(uint *)(param_1 + 0xc);
    } while (uVar8 < *(uint *)(param_1 + 0xc));
  }
  param_1[0xb] = 0;
  bVar1 = *pbVar9;
  uVar5 = *(uint *)(param_1 + 0xc);
  lVar2 = *(longlong *)(*param_1 + 0x68);
  if ((ulonglong)uVar5 < 5) {
    (**(code **)(lVar3 + 0x18))(pbVar9,lVar3);
    return 0xffffffd7;
  }
  switch(bVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 200:
  case 0xc9:
    iVar7 = FUN_180018ea0(pbVar9 + 1);
    if ((*pbVar9 + 0x9b & 0xfd) == 0) {
      for (puVar10 = (undefined8 *)FUN_180018d50((longlong)(param_1 + 4));
          puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)FUN_180018d70(puVar10)) {
        if (*(int *)(puVar10 + 3) == iVar7) {
          (**(code **)(lVar2 + 0x18))(pbVar9,lVar2);
          lVar2 = *(longlong *)(*param_1 + 0x68);
          plVar11 = (longlong *)FUN_180018d50((longlong)(param_1 + 4));
          goto joined_r0x0001800241d4;
        }
      }
    }
    puVar10 = (undefined8 *)(**(code **)(lVar2 + 8))(0x30,lVar2);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[4] = pbVar9;
      puVar10[5] = (ulonglong)uVar5;
      *(int *)(puVar10 + 3) = iVar7;
      FUN_180018d20(param_1 + 2,puVar10);
      goto LAB_1800241eb;
    }
    uVar6 = 0xfffffffa;
    pcVar13 = "Unable to allocate datablock for SFTP packet";
    break;
  default:
    *(undefined4 *)(param_1 + 8) = 0;
    pcVar13 = "Out of sync with the world";
    uVar6 = 0xffffffe1;
  }
  uVar5 = FUN_180018820(lVar2,uVar6,(longlong)pcVar13,param_4);
  if (uVar5 != 0) {
    (**(code **)(lVar3 + 0x18))(pbVar9,lVar3);
    return uVar5;
  }
LAB_1800241eb:
  return (uint)bVar1;
joined_r0x0001800241d4:
  if (plVar11 == (longlong *)0x0) goto LAB_1800241eb;
  if ((int)plVar11[3] == iVar7) {
    FUN_180018d80(plVar11);
    (**(code **)(lVar2 + 0x18))(plVar11,lVar2);
    goto LAB_1800241eb;
  }
  plVar11 = (longlong *)FUN_180018d70(plVar11);
  goto joined_r0x0001800241d4;
}




void FUN_180024340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong lVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = *(longlong *)(*plVar1 + 0x68);
  plVar4 = (longlong *)FUN_180018d50(param_1 + 0x178);
joined_r0x000180024368:
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  plVar5 = (longlong *)FUN_180018d70(plVar4);
  lVar3 = plVar4[7];
  lVar9 = *(longlong *)(*plVar1 + 0x68);
  for (plVar6 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar6 != (longlong *)0x0;
      plVar6 = (longlong *)FUN_180018d70(plVar6)) {
    pcVar8 = (char *)plVar6[4];
    if ((*pcVar8 == 'e') && ((int)plVar6[3] == (int)lVar3)) goto LAB_18002444b;
  }
  lVar3 = plVar4[7];
  lVar9 = *(longlong *)(*plVar1 + 0x68);
  for (plVar6 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar6 != (longlong *)0x0;
      plVar6 = (longlong *)FUN_180018d70(plVar6)) {
    pcVar8 = (char *)plVar6[4];
    if ((*pcVar8 == 'g') && ((int)plVar6[3] == (int)lVar3)) goto LAB_18002444b;
  }
  if (plVar4[5] != 0) {
    lVar3 = plVar4[7];
    lVar9 = *(longlong *)(*plVar1 + 0x68);
    puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(0x20,lVar9);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_180018820(lVar9,0xfffffffa,0x180033170,param_4);
    }
    else {
      *(int *)(puVar7 + 3) = (int)lVar3;
      FUN_180018d20(plVar1 + 4,puVar7);
    }
  }
  goto LAB_180024479;
LAB_18002444b:
  FUN_180018d80(plVar6);
  (**(code **)(lVar9 + 0x18))(plVar6,lVar9);
  (**(code **)(lVar2 + 0x18))(pcVar8,lVar2);
LAB_180024479:
  FUN_180018d80(plVar4);
  (**(code **)(lVar2 + 0x18))(plVar4,lVar2);
  plVar4 = plVar5;
  goto joined_r0x000180024368;
}




undefined1 * FUN_1800244c0(longlong param_1,char **param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  __time64_t _Var10;
  undefined8 uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  char *pcVar18;
  ulonglong uVar19;
  char *local_res8;
  char **local_res10;
  char *local_res18;
  undefined8 *local_res20;
  char *local_58;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_58 = (char *)0x0;
  uVar19 = 0;
  lVar17 = *plVar1;
  iVar3 = *(int *)((longlong)plVar1 + 0x9c);
  lVar2 = *(longlong *)(lVar17 + 0x68);
  local_res10 = param_2;
  local_res18 = param_3;
  if (iVar3 == 0) {
    *(undefined4 *)(plVar1 + 8) = 0;
    pcVar18 = *(char **)(param_1 + 0x158);
    if (pcVar18 != (char *)0x0) {
      pcVar15 = pcVar18;
      if (param_3 < pcVar18) {
        pcVar15 = param_3;
      }
      memcpy(param_2,(void *)((*(longlong *)(param_1 + 0x150) - (longlong)pcVar18) +
                             *(longlong *)(param_1 + 0x148)),(size_t)pcVar15);
      *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) - (longlong)pcVar15;
      *(longlong *)(param_1 + 0x130) = (longlong)(pcVar15 + *(longlong *)(param_1 + 0x130));
      if (*(longlong *)(param_1 + 0x158) != 0) {
        return pcVar15;
      }
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(param_1 + 0x148),lVar2);
      *(undefined8 *)(param_1 + 0x148) = 0;
      return pcVar15;
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      return (undefined1 *)0x0;
    }
    uVar16 = (longlong)param_3 * 4;
    uVar6 = *(longlong *)(param_1 + 0x138) - *(longlong *)(param_1 + 0x130);
    if (0x800000 < uVar16) {
      uVar16 = 0x800000;
    }
    if (uVar6 < uVar16) {
      uVar19 = uVar16 - uVar6;
    }
    pcVar18 = (char *)0x0;
    uVar5 = libssh2_channel_window_read_ex(lVar17,(undefined4 *)0x0,(undefined4 *)0x0);
    param_3 = pcVar18;
    if (uVar5 < uVar16) {
      param_2 = (char **)0x0;
      param_3 = (char *)CONCAT71((int7)((ulonglong)pcVar18 >> 8),1);
      iVar3 = FUN_180004770(*plVar1,(int)uVar16 * 8,'\x01',(undefined4 *)0x0);
      if ((undefined1 *)(longlong)iVar3 != (undefined1 *)0x0) {
        return (undefined1 *)(longlong)iVar3;
      }
    }
    for (; uVar19 != 0; uVar19 = uVar19 - uVar6) {
      iVar3 = *(int *)(param_1 + 0x120);
      uVar4 = iVar3 + 0x19;
      uVar5 = (uint)local_res18;
      if (local_res18 <= (char *)(uVar19 & 0xffffffff)) {
        uVar5 = (uint)uVar19;
      }
      if (30000 < uVar5) {
        uVar5 = 30000;
      }
      uVar16 = (ulonglong)uVar5;
      local_res20 = (undefined8 *)(**(code **)(lVar2 + 8))((ulonglong)uVar4 + 0x40,lVar2);
      if (local_res20 == (undefined8 *)0x0) {
        pcVar18 = "malloc fail for FXP_WRITE";
        uVar14 = 0xfffffffa;
        goto LAB_180024523;
      }
      local_res20[3] = *(undefined8 *)(param_1 + 0x138);
      local_res20[5] = 0;
      local_res20[6] = (ulonglong)uVar4;
      local_res8 = (char *)((longlong)local_res20 + 0x3c);
      local_res20[4] = uVar16;
      FUN_180019150((longlong *)&local_res8,iVar3 + 0x15);
      puVar7 = local_res20;
      *local_res8 = '\x05';
      iVar3 = (int)plVar1[1];
      local_res8 = local_res8 + 1;
      *(int *)(plVar1 + 1) = iVar3 + 1;
      *(int *)(local_res20 + 7) = iVar3;
      FUN_180019150((longlong *)&local_res8,iVar3);
      FUN_1800190c0((longlong *)&local_res8,(void *)(param_1 + 0x20),*(ulonglong *)(param_1 + 0x120)
                   );
      param_2 = *(char ***)(param_1 + 0x138);
      *local_res8 = (char)((ulonglong)param_2 >> 0x38);
      local_res8[1] = (char)((ulonglong)param_2 >> 0x30);
      local_res8[2] = (char)((ulonglong)param_2 >> 0x28);
      local_res8[4] = (char)((ulonglong)param_2 >> 0x18);
      local_res8[5] = (char)((ulonglong)param_2 >> 0x10);
      local_res8[3] = (char)((ulonglong)param_2 >> 0x20);
      local_res8[7] = (char)param_2;
      local_res8[6] = (char)((ulonglong)param_2 >> 8);
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + uVar16;
      param_3 = local_res8;
      local_res8 = local_res8 + 8;
      FUN_180019150((longlong *)&local_res8,uVar5);
      FUN_180018d20((undefined8 *)(param_1 + 0x178),puVar7);
      uVar6 = uVar19;
      if (uVar16 < uVar19) {
        uVar6 = uVar16;
      }
    }
LAB_180024765:
    *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
    puVar7 = (undefined8 *)FUN_180018d50(param_1 + 0x178);
    do {
      while( true ) {
        if (puVar7 == (undefined8 *)0x0) goto LAB_1800247e3;
        param_2 = (char **)puVar7[6];
        if (param_2 != (char **)0x0) break;
LAB_18002490e:
        puVar7 = (undefined8 *)FUN_180018d70(puVar7);
      }
      param_3 = (char *)(puVar7[5] + 0x3c + (longlong)puVar7);
      puVar12 = (undefined1 *)FUN_180004890(lVar17,0,param_3,(ulonglong)param_2);
      if ((longlong)puVar12 < 0) {
        *(undefined4 *)((longlong)plVar1 + 0x9c) = 3;
        return puVar12;
      }
      puVar7[6] = puVar7[6] - (longlong)puVar12;
      puVar7[5] = puVar12 + puVar7[5];
      if (puVar7[6] == 0) goto LAB_18002490e;
      puVar8 = (undefined8 *)FUN_180018d50(param_1 + 0x178);
    } while (puVar7 == puVar8);
  }
  else {
    if (iVar3 == 3) goto LAB_180024765;
    if (iVar3 != 5) goto LAB_180024517;
  }
LAB_1800247e3:
  *(undefined4 *)((longlong)plVar1 + 0x9c) = 0;
  plVar9 = (longlong *)FUN_180018d50(param_1 + 0x178);
  pcVar18 = local_res8;
  if (plVar9 != (longlong *)0x0) {
    while (local_res20 = (undefined8 *)0x0, plVar9[6] == 0) {
      uVar5 = *(uint *)(plVar9 + 7);
      if (plVar1[0xe] == 0) {
        _Var10 = _time64((__time64_t *)0x0);
        plVar1[0xe] = _Var10;
      }
      iVar3 = *(int *)(*(longlong *)(*plVar1 + 0x68) + 600);
      while (iVar3 == 0) {
        lVar17 = 0;
        do {
          param_2 = &local_res8;
          param_3 = (char *)(ulonglong)uVar5;
          uVar11 = FUN_180023dc0(plVar1,(&DAT_180033154)[lVar17],uVar5,param_2,
                                 (longlong *)&local_res20);
          if ((int)uVar11 == 0) {
            uVar4 = -(uint)(local_res20 < (undefined8 *)0x9) & 0xffffffda;
            pcVar18 = local_res8;
            goto LAB_180024955;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < 2);
        uVar4 = FUN_180023e70(plVar1,&DAT_180033154,param_3,(ulonglong)param_2);
        param_3 = (char *)0x80000000;
        if (((uVar4 + 0x80000000 & 0x80000000) == 0) && (pcVar18 = local_res8, uVar4 != 0xffffffdb))
        goto LAB_180024955;
        if ((int)uVar4 < 1) {
          _Var10 = _time64((__time64_t *)0x0);
          pcVar18 = local_res8;
          if ((*(int *)(*(longlong *)(*plVar1 + 0x68) + 0x11f68) - (int)_Var10) + (int)plVar1[0xe] <
              1) {
            uVar4 = 0xfffffff7;
            goto LAB_180024955;
          }
          if (uVar4 == 0xffffffdb) {
            uVar4 = 0xffffffdb;
            goto LAB_18002495d;
          }
        }
        pcVar18 = local_res8;
        iVar3 = *(int *)(*(longlong *)(*plVar1 + 0x68) + 600);
      }
      uVar4 = 0xfffffff3;
LAB_180024955:
      plVar1[0xe] = 0;
LAB_18002495d:
      puVar12 = (undefined1 *)(longlong)(int)uVar4;
      if (puVar12 == (undefined1 *)0xffffffffffffffdb) {
        if (local_58 != (char *)0x0) {
          return local_58;
        }
LAB_180024b60:
        *(undefined4 *)((longlong)plVar1 + 0x9c) = 5;
        return puVar12;
      }
      if (puVar12 == (undefined1 *)0xffffffffffffffda) {
        if (local_res20 != (undefined8 *)0x0) {
          (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
        }
        pcVar18 = "Response too small";
        goto LAB_18002451e;
      }
      if ((int)uVar4 < 0) goto LAB_180024b60;
      if (*pcVar18 == 'e') {
        FUN_180018d80(plVar9);
        lVar17 = lVar2;
        (**(code **)(lVar2 + 0x18))(plVar9);
        FUN_180024340(param_1,lVar17,param_3,param_2);
        iVar3 = FUN_180018ea0(pcVar18 + 5);
        (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
        if (iVar3 == 1) {
          *(undefined1 *)(param_1 + 0x160) = 1;
          return local_58;
        }
        *(int *)(plVar1 + 8) = iVar3;
        pcVar18 = "SFTP READ error";
        goto LAB_18002451e;
      }
      if (*pcVar18 != 'g') {
        pcVar18 = "SFTP Protocol badness: unrecognised read request response";
        goto LAB_18002451e;
      }
      if (plVar9[3] != *(longlong *)(param_1 + 0x130)) {
        pcVar18 = "Read Packet At Unexpected Offset";
        goto LAB_18002451e;
      }
      uVar5 = FUN_180018ea0(pcVar18 + 5);
      pcVar15 = (char *)(ulonglong)uVar5;
      uVar19 = (ulonglong)uVar5;
      if ((char *)((longlong)local_res20 + -9) < pcVar15) {
        pcVar18 = "SFTP Protocol badness";
        goto LAB_18002451e;
      }
      uVar16 = plVar9[4];
      if (uVar16 < uVar19) {
        pcVar18 = "FXP_READ response too big";
        goto LAB_18002451e;
      }
      if (uVar19 != uVar16) {
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + (uVar19 - uVar16);
      }
      if (local_res18 < pcVar15 + (longlong)local_58) {
        *(char **)(param_1 + 0x148) = pcVar18;
        *(char **)(param_1 + 0x158) = local_58 + (uVar19 - (longlong)local_res18);
        pcVar15 = (char *)(ulonglong)(uint)((int)local_res18 - (int)local_58);
        *(undefined8 **)(param_1 + 0x150) = local_res20;
      }
      else {
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      param_3 = pcVar15;
      memcpy(local_res10,pcVar18 + 9,(size_t)pcVar15);
      *(longlong *)(param_1 + 0x130) = (longlong)(pcVar15 + *(longlong *)(param_1 + 0x130));
      local_58 = local_58 + (longlong)pcVar15;
      local_res10 = (char **)((longlong)local_res10 + (longlong)pcVar15);
      if (*(longlong *)(param_1 + 0x150) == 0) {
        (**(code **)(lVar2 + 0x18))(pcVar18,lVar2);
      }
      plVar13 = (longlong *)FUN_180018d70(plVar9);
      FUN_180018d80(plVar9);
      (**(code **)(lVar2 + 0x18))(plVar9,lVar2);
      if ((local_res18 <= local_58) || (plVar9 = plVar13, plVar13 == (longlong *)0x0)) break;
    }
    if (local_58 != (char *)0x0) {
      return local_58;
    }
  }
LAB_180024517:
  pcVar18 = "sftp_read() internal error";
LAB_18002451e:
  uVar14 = 0xffffffe1;
LAB_180024523:
  iVar3 = FUN_180018820(lVar2,uVar14,(longlong)pcVar18,param_2);
  return (undefined1 *)(longlong)iVar3;
}




void FUN_180024b70(longlong param_1,void *param_2,ulonglong param_3,char **param_4,ulonglong param_5
                  ,uint *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char **ppcVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 *puVar16;
  char **ppcVar17;
  undefined1 auStackY_e8 [32];
  undefined1 *local_b8;
  ulonglong local_b0;
  char *local_a8;
  uint *local_a0;
  char **local_98;
  ulonglong local_90;
  void *local_88;
  uint local_80 [10];
  ulonglong local_58;
  
  local_58 = DAT_18003b280 ^ (ulonglong)auStackY_e8;
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x120);
  local_a0 = param_6;
  uVar15 = iVar5 + 0xd;
  local_a8 = (char *)*plVar2;
  lVar3 = *(longlong *)(local_a8 + 0x68);
  local_b0 = 0;
  local_98 = param_4;
  local_90 = param_3;
  local_88 = param_2;
  if (*(int *)((longlong)plVar2 + 0xbc) == 0) {
    *(undefined4 *)(plVar2 + 8) = 0;
    if (*(int *)(param_1 + 0x130) != 0) {
      uVar13 = *(ulonglong *)(param_1 + 0x148);
      if (3 < uVar13) {
        local_b8 = *(undefined1 **)(param_1 + 0x140);
        uVar15 = FUN_180018ea0(local_b8);
        uVar13 = uVar13 - 4;
        puVar16 = local_b8 + 4;
        uVar11 = (ulonglong)uVar15;
        if ((uVar11 < local_90) && (uVar11 <= uVar13)) {
          memcpy(param_2,puVar16,(ulonglong)uVar15);
          uVar13 = uVar13 - uVar11;
          *(undefined1 *)((longlong)param_2 + uVar11) = 0;
          local_b8 = puVar16 + uVar11;
          if (3 < uVar13) {
            uVar15 = FUN_180018ea0(local_b8);
            ppcVar7 = local_98;
            uVar13 = uVar13 - 4;
            puVar16 = local_b8 + 4;
            uVar11 = (ulonglong)uVar15;
            local_b8 = puVar16;
            if ((local_98 == (char **)0x0) || (param_5 < 2)) {
              if (uVar13 < uVar11) goto LAB_180025039;
            }
            else {
              if ((param_5 <= uVar11) || (uVar13 < uVar11)) goto LAB_180025039;
              memcpy(local_98,puVar16,uVar11);
              *(undefined1 *)(uVar11 + (longlong)ppcVar7) = 0;
            }
            local_b8 = puVar16 + uVar11;
            if (local_a0 != (uint *)0x0) {
              local_a0[0] = 0;
              local_a0[1] = 0;
              local_a0[2] = 0;
              local_a0[3] = 0;
              local_a0[4] = 0;
              local_a0[5] = 0;
              local_a0[6] = 0;
              local_a0[7] = 0;
              local_a0[8] = 0;
              local_a0[9] = 0;
            }
            puVar10 = local_80;
            if (local_a0 != (uint *)0x0) {
              puVar10 = local_a0;
            }
            lVar6 = FUN_1800228c0(puVar10,(longlong)local_b8,uVar13 - uVar11);
            if (-1 < lVar6) {
              local_b8 = local_b8 + lVar6;
              *(ulonglong *)(param_1 + 0x148) = (uVar13 - uVar11) - lVar6;
              piVar1 = (int *)(param_1 + 0x130);
              *piVar1 = *piVar1 + -1;
              *(undefined1 **)(param_1 + 0x140) = local_b8;
              if (*piVar1 == 0) {
                (**(code **)(lVar3 + 0x18))(*(undefined8 *)(param_1 + 0x138),lVar3);
              }
            }
          }
        }
      }
      goto LAB_180025039;
    }
    local_b8 = (undefined1 *)(**(code **)(lVar3 + 8))(uVar15,lVar3);
    plVar2[0x18] = (longlong)local_b8;
    if (plVar2[0x18] == 0) {
      FUN_180018820(lVar3,0xfffffffa,0x1800336d0,param_4);
      goto LAB_180025039;
    }
    FUN_180019150((longlong *)&local_b8,iVar5 + 9);
    *local_b8 = 0xc;
    local_b8 = local_b8 + 1;
    iVar5 = (int)plVar2[1];
    *(int *)(plVar2 + 0x19) = iVar5;
    *(int *)(plVar2 + 1) = iVar5 + 1;
    FUN_180019150((longlong *)&local_b8,iVar5);
    FUN_1800190c0((longlong *)&local_b8,(void *)(param_1 + 0x20),*(ulonglong *)(param_1 + 0x120));
    *(undefined4 *)((longlong)plVar2 + 0xbc) = 2;
LAB_180024de1:
    ppcVar17 = (char **)(ulonglong)uVar15;
    plVar12 = plVar2 + 0x18;
    param_4 = ppcVar17;
    ppcVar7 = (char **)FUN_180004890((longlong)local_a8,0,(void *)*plVar12,(ulonglong)ppcVar17);
    if (ppcVar7 == (char **)0xffffffffffffffdb) goto LAB_180025039;
    if (ppcVar17 != ppcVar7) {
      (**(code **)(lVar3 + 0x18))();
      *plVar12 = 0;
      *(undefined4 *)((longlong)plVar2 + 0xbc) = 0;
      FUN_180018820(lVar3,0xfffffff9,0x180033708,param_4);
      goto LAB_180025039;
    }
    (**(code **)(lVar3 + 0x18))(*plVar12,lVar3);
    *(undefined4 *)((longlong)plVar2 + 0xbc) = 3;
    *plVar12 = 0;
  }
  else if (*(int *)((longlong)plVar2 + 0xbc) == 2) goto LAB_180024de1;
  uVar15 = *(uint *)(plVar2 + 0x19);
  if (plVar2[0xe] == 0) {
    _Var8 = _time64((__time64_t *)0x0);
    plVar2[0xe] = _Var8;
  }
  iVar5 = *(int *)(*(longlong *)(*plVar2 + 0x68) + 600);
  while (lVar6 = 0, iVar5 == 0) {
    do {
      uVar13 = (ulonglong)(byte)(&DAT_180033158)[lVar6];
      param_4 = &local_a8;
      uVar11 = (ulonglong)uVar15;
      uVar9 = FUN_180023dc0(plVar2,(&DAT_180033158)[lVar6],uVar15,param_4,(longlong *)&local_b0);
      if ((int)uVar9 == 0) {
        uVar4 = -(uint)(local_b0 < 9) & 0xffffffda;
        goto LAB_180024f0e;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < 2);
    uVar4 = FUN_180023e70(plVar2,uVar13,uVar11,(ulonglong)param_4);
    if (((uVar4 + 0x80000000 & 0x80000000) == 0) && (uVar4 != 0xffffffdb)) goto LAB_180024f0e;
    if ((int)uVar4 < 1) {
      _Var8 = _time64((__time64_t *)0x0);
      if ((*(int *)(*(longlong *)(*plVar2 + 0x68) + 0x11f68) - (int)_Var8) + (int)plVar2[0xe] < 1) {
        uVar4 = 0xfffffff7;
        goto LAB_180024f0e;
      }
      if (uVar4 == 0xffffffdb) {
        uVar4 = 0xffffffdb;
        goto LAB_180024f12;
      }
    }
    iVar5 = *(int *)(*(longlong *)(*plVar2 + 0x68) + 600);
  }
  uVar4 = 0xfffffff3;
LAB_180024f0e:
  plVar2[0xe] = 0;
LAB_180024f12:
  pcVar14 = local_a8;
  if (uVar4 == 0xffffffdb) goto LAB_180025039;
  if (uVar4 == 0xffffffda) {
    if (local_b0 != 0) {
      (**(code **)(lVar3 + 0x18))(local_a8,lVar3);
    }
    pcVar14 = "Status message too short";
  }
  else {
    if (uVar4 != 0) {
      *(undefined4 *)((longlong)plVar2 + 0xbc) = 0;
      FUN_180018820(lVar3,uVar4,0x180033538,param_4);
      goto LAB_180025039;
    }
    if (*local_a8 != 'e') {
      *(undefined4 *)((longlong)plVar2 + 0xbc) = 0;
      iVar5 = FUN_180018ea0(local_a8 + 5);
      if (iVar5 == 0) {
        (**(code **)(lVar3 + 0x18))(pcVar14,lVar3);
      }
      else {
        *(int *)(param_1 + 0x130) = iVar5;
        *(char **)(param_1 + 0x140) = pcVar14 + 9;
        *(char **)(param_1 + 0x138) = pcVar14;
        *(ulonglong *)(param_1 + 0x148) = local_b0 - 9;
        FUN_180024b70(param_1,local_88,local_90,local_98,param_5,local_a0);
      }
      goto LAB_180025039;
    }
    iVar5 = FUN_180018ea0(local_a8 + 5);
    (**(code **)(lVar3 + 0x18))(pcVar14,lVar3);
    *(undefined4 *)((longlong)plVar2 + 0xbc) = 0;
    if (iVar5 == 1) goto LAB_180025039;
    *(int *)(plVar2 + 8) = iVar5;
    pcVar14 = "SFTP Protocol Error";
  }
  FUN_180018820(lVar3,0xffffffe1,(longlong)pcVar14,param_4);
LAB_180025039:
  FUN_18002af30(local_58 ^ (ulonglong)auStackY_e8);
  return;
}




undefined4 FUN_180025060(longlong *param_1,void *param_2,uint param_3,char **param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  char **ppcVar8;
  __time64_t _Var9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  char *pcVar13;
  ulonglong uVar14;
  char **ppcVar15;
  undefined1 *local_res8;
  void *local_res10;
  uint local_res18;
  ulonglong local_58;
  char *local_50;
  longlong local_48;
  
  local_48 = *param_1;
  iVar6 = (int)param_4;
  local_58 = 0;
  lVar2 = *(longlong *)(local_48 + 0x68);
  if (iVar6 == 2) {
    uVar4 = *param_5;
    param_4 = (char **)(ulonglong)(uVar4 & 1);
    iVar3 = (uVar4 & 4) + 0x11 + (uVar4 & 2) * 4 + (uVar4 & 1) * 8 + (uVar4 & 8);
  }
  else {
    iVar3 = 0xd;
  }
  ppcVar15 = (char **)(ulonglong)(iVar3 + param_3);
  local_50 = (char *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x144) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    local_res8 = (undefined1 *)(**(code **)(lVar2 + 8))(ppcVar15,lVar2);
    param_1[0x29] = (longlong)local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      pcVar13 = "Unable to allocate memory for FXP_*STAT packet";
      uVar4 = 0xfffffffa;
      local_res8 = (undefined1 *)0x0;
      goto LAB_18002534b;
    }
    FUN_180019150((longlong *)&local_res8,(iVar3 + param_3) - 4);
    if (iVar6 == 0) {
LAB_180025163:
      *local_res8 = 0x11;
    }
    else if (iVar6 == 1) {
      *local_res8 = 7;
    }
    else {
      if (iVar6 != 2) goto LAB_180025163;
      *local_res8 = 9;
    }
    iVar3 = (int)param_1[1];
    local_res8 = local_res8 + 1;
    *(int *)(param_1 + 0x2a) = iVar3;
    *(int *)(param_1 + 1) = iVar3 + 1;
    FUN_180019150((longlong *)&local_res8,iVar3);
    FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)local_res18);
    if (iVar6 == 2) {
      lVar7 = FUN_1800227c0(local_res8,param_5);
      local_res8 = local_res8 + lVar7;
    }
    *(undefined4 *)((longlong)param_1 + 0x144) = 2;
LAB_18002520d:
    plVar12 = param_1 + 0x29;
    param_4 = ppcVar15;
    ppcVar8 = (char **)FUN_180004890(local_48,0,(void *)*plVar12,(ulonglong)ppcVar15);
    if (ppcVar8 == (char **)0xffffffffffffffdb) {
      return 0xffffffdb;
    }
    if (ppcVar15 != ppcVar8) {
      (**(code **)(lVar2 + 0x18))();
      pcVar13 = "Unable to send STAT/LSTAT/SETSTAT command";
      *plVar12 = 0;
      uVar4 = 0xfffffff9;
      *(undefined4 *)((longlong)param_1 + 0x144) = 0;
      goto LAB_18002534b;
    }
    (**(code **)(lVar2 + 0x18))(*plVar12,lVar2);
    *(undefined4 *)((longlong)param_1 + 0x144) = 3;
    *plVar12 = 0;
  }
  else if (*(int *)((longlong)param_1 + 0x144) == 2) goto LAB_18002520d;
  uVar1 = *(uint *)(param_1 + 0x2a);
  if (param_1[0xe] == 0) {
    _Var9 = _time64((__time64_t *)0x0);
    param_1[0xe] = _Var9;
  }
  iVar6 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
  while (lVar7 = 0, iVar6 == 0) {
    do {
      uVar11 = (ulonglong)(byte)(&DAT_180033168)[lVar7];
      param_4 = &local_50;
      uVar14 = (ulonglong)uVar1;
      uVar10 = FUN_180023dc0(param_1,(&DAT_180033168)[lVar7],uVar1,param_4,(longlong *)&local_58);
      pcVar13 = local_50;
      if ((int)uVar10 == 0) {
        param_1[0xe] = 0;
        if (local_58 < 9) goto LAB_180025393;
        *(undefined4 *)((longlong)param_1 + 0x144) = 0;
        if (*local_50 == 'e') {
          iVar6 = FUN_180018ea0(local_50 + 5);
          (**(code **)(lVar2 + 0x18))(pcVar13,lVar2);
          if (iVar6 == 0) {
            param_5[0] = 0;
            param_5[1] = 0;
            param_5[2] = 0;
            param_5[3] = 0;
            param_5[4] = 0;
            param_5[5] = 0;
            param_5[6] = 0;
            param_5[7] = 0;
            param_5[8] = 0;
            param_5[9] = 0;
            return 0;
          }
          *(int *)(param_1 + 8) = iVar6;
          pcVar13 = "SFTP Protocol Error";
          uVar4 = 0xffffffe1;
        }
        else {
          param_5[0] = 0;
          param_5[1] = 0;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          param_5[9] = 0;
          lVar7 = FUN_1800228c0(param_5,(longlong)(local_50 + 5),local_58 - 5);
          if (-1 < lVar7) {
            (**(code **)(lVar2 + 0x18))(pcVar13,lVar2);
            return 0;
          }
          (**(code **)(lVar2 + 0x18))();
          pcVar13 = "Attributes too short in SFTP fstat";
          uVar4 = 0xffffffe1;
        }
        goto LAB_18002534b;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < 2);
    uVar4 = FUN_180023e70(param_1,uVar11,uVar14,(ulonglong)param_4);
    if (((uVar4 + 0x80000000 & 0x80000000) == 0) && (uVar4 != 0xffffffdb)) {
      param_1[0xe] = 0;
      if (uVar4 != 0xffffffda) goto LAB_18002533b;
LAB_180025393:
      if (local_58 != 0) {
        (**(code **)(lVar2 + 0x18))(local_50,lVar2);
      }
      pcVar13 = "SFTP stat packet too short";
      uVar4 = 0xffffffe1;
      goto LAB_18002534b;
    }
    if ((int)uVar4 < 1) {
      _Var9 = _time64((__time64_t *)0x0);
      if ((*(int *)(*(longlong *)(*param_1 + 0x68) + 0x11f68) - (int)_Var9) + (int)param_1[0xe] < 1)
      {
        uVar4 = 0xfffffff7;
        goto LAB_180025337;
      }
      if (uVar4 == 0xffffffdb) {
        return 0xffffffdb;
      }
    }
    iVar6 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
  }
  uVar4 = 0xfffffff3;
LAB_180025337:
  param_1[0xe] = 0;
LAB_18002533b:
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  pcVar13 = "Timeout waiting for status message";
LAB_18002534b:
  uVar5 = FUN_180018820(lVar2,uVar4,(longlong)pcVar13,param_4);
  return uVar5;
}




undefined4 FUN_180025470(longlong *param_1,void *param_2,uint param_3,char **param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  size_t sVar7;
  __time64_t _Var8;
  undefined8 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  char **ppcVar15;
  char **ppcVar16;
  undefined1 *local_res8;
  void *local_res10;
  char *local_48;
  ulonglong local_40;
  
  lVar12 = *param_1;
  local_40 = 0;
  lVar3 = *(longlong *)(lVar12 + 0x68);
  local_48 = (char *)0x0;
  ppcVar16 = (char **)(ulonglong)(param_3 + 0x24);
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x114) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    ppcVar15 = param_4;
    puVar6 = (undefined1 *)(**(code **)(lVar3 + 8))(ppcVar16,lVar3);
    local_res8 = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      uVar4 = FUN_180018820(lVar3,0xfffffffa,0x180033798,ppcVar15);
      return uVar4;
    }
    FUN_180019150((longlong *)&local_res8,param_3 + 0x20);
    *local_res8 = 200;
    iVar2 = (int)param_1[1];
    local_res8 = local_res8 + 1;
    *(int *)(param_1 + 0x24) = iVar2;
    *(int *)(param_1 + 1) = iVar2 + 1;
    FUN_180019150((longlong *)&local_res8,iVar2);
    FUN_1800190c0((longlong *)&local_res8,"statvfs@openssh.com",0x13);
    FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)param_3);
    *(undefined4 *)((longlong)param_1 + 0x114) = 2;
  }
  else {
    puVar6 = (undefined1 *)param_1[0x23];
    ppcVar15 = param_4;
    if (*(int *)((longlong)param_1 + 0x114) != 2) goto LAB_180025600;
  }
  ppcVar15 = ppcVar16;
  sVar7 = FUN_180004890(lVar12,0,puVar6,(ulonglong)ppcVar16);
  if ((sVar7 == 0xffffffffffffffdb) ||
     ((-1 < (longlong)sVar7 && ((longlong)sVar7 < (longlong)ppcVar16)))) {
    param_1[0x23] = (longlong)puVar6;
    return 0xffffffdb;
  }
  (**(code **)(lVar3 + 0x18))(puVar6,lVar3);
  param_1[0x23] = 0;
  if ((longlong)sVar7 < 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
    uVar4 = FUN_180018820(lVar3,0xfffffff9,0x180033708,ppcVar15);
    return uVar4;
  }
  *(undefined4 *)((longlong)param_1 + 0x114) = 3;
LAB_180025600:
  uVar1 = *(uint *)(param_1 + 0x24);
  if (param_1[0xe] == 0) {
    _Var8 = _time64((__time64_t *)0x0);
    param_1[0xe] = _Var8;
  }
  iVar2 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
  pcVar13 = (char *)0x0;
  do {
    lVar12 = 0;
    if (iVar2 != 0) {
      uVar5 = 0xfffffff3;
LAB_1800256db:
      param_1[0xe] = 0;
LAB_1800256df:
      if (uVar5 == 0xffffffdb) {
        uVar4 = 0xffffffdb;
      }
      else if (uVar5 == 0xffffffda) {
        if (local_40 != 0) {
          (**(code **)(lVar3 + 0x18))(pcVar13,lVar3);
        }
        uVar4 = FUN_180018820(lVar3,0xffffffe1,0x1800338c0,ppcVar15);
      }
      else if (uVar5 == 0) {
        if (*pcVar13 == 'e') {
          uVar4 = FUN_180018ea0(pcVar13 + 5);
          *(undefined4 *)((longlong)param_1 + 0x114) = 0;
          (**(code **)(lVar3 + 0x18))(pcVar13,lVar3);
          *(undefined4 *)(param_1 + 8) = uVar4;
          uVar4 = FUN_180018820(lVar3,0xffffffe1,0x180033748,ppcVar15);
        }
        else if (local_40 < 0x5d) {
          (**(code **)(lVar3 + 0x18))(pcVar13,lVar3);
          *(undefined4 *)((longlong)param_1 + 0x114) = 0;
          uVar4 = FUN_180018820(lVar3,0xffffffe1,0x180033b50,ppcVar15);
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x114) = 0;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 5);
          *param_4 = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0xd);
          param_4[1] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x15);
          param_4[2] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x1d);
          param_4[3] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x25);
          param_4[4] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x2d);
          param_4[5] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x35);
          param_4[6] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x3d);
          param_4[7] = pcVar10;
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x45);
          param_4[8] = pcVar10;
          uVar9 = FUN_180018ec0(pcVar13 + 0x4d);
          pcVar10 = (char *)FUN_180018ec0(pcVar13 + 0x55);
          param_4[10] = pcVar10;
          param_4[9] = (char *)(ulonglong)((uint)uVar9 & 3);
          (**(code **)(lVar3 + 0x18))(pcVar13,lVar3);
          uVar4 = 0;
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x114) = 0;
        uVar4 = FUN_180018820(lVar3,uVar5,0x180033808,ppcVar15);
      }
      return uVar4;
    }
    do {
      uVar11 = (ulonglong)(byte)(&DAT_180033164)[lVar12];
      ppcVar15 = &local_48;
      uVar14 = (ulonglong)uVar1;
      uVar9 = FUN_180023dc0(param_1,(&DAT_180033164)[lVar12],uVar1,ppcVar15,(longlong *)&local_40);
      if ((int)uVar9 == 0) {
        uVar5 = -(uint)(local_40 < 9) & 0xffffffda;
        pcVar13 = local_48;
        goto LAB_1800256db;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 2);
    uVar5 = FUN_180023e70(param_1,uVar11,uVar14,(ulonglong)ppcVar15);
    if (((uVar5 + 0x80000000 & 0x80000000) == 0) && (pcVar13 = local_48, uVar5 != 0xffffffdb))
    goto LAB_1800256db;
    if ((int)uVar5 < 1) {
      _Var8 = _time64((__time64_t *)0x0);
      pcVar13 = local_48;
      if ((*(int *)(*(longlong *)(*param_1 + 0x68) + 0x11f68) - (int)_Var8) + (int)param_1[0xe] < 1)
      {
        uVar5 = 0xfffffff7;
        goto LAB_1800256db;
      }
      if (uVar5 == 0xffffffdb) {
        uVar5 = 0xffffffdb;
        goto LAB_1800256df;
      }
    }
    iVar2 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
    pcVar13 = local_48;
  } while( true );
}




uint FUN_1800258b0(longlong *param_1,void *param_2,uint param_3,char **param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  char **ppcVar6;
  __time64_t _Var7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  char **ppcVar14;
  undefined1 *local_res8;
  void *local_res10;
  uint local_res18;
  char **local_res20;
  char *local_68;
  ulonglong local_60;
  longlong local_58;
  
  local_58 = *param_1;
  lVar2 = *(longlong *)(local_58 + 0x68);
  uVar4 = param_5 + 4 + param_3;
  if (param_6 != 0) {
    uVar4 = param_3;
  }
  local_60 = 0;
  local_68 = (char *)0x0;
  ppcVar14 = (char **)(ulonglong)(uVar4 + 0xd);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_1 + 0x154) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(uint *)((longlong)param_1 + 0xc) < 3) && (param_6 != 2)) {
      pcVar12 = "Server does not support SYMLINK or READLINK";
      uVar4 = 0xffffffe1;
      goto LAB_180025b90;
    }
    local_res8 = (undefined1 *)(**(code **)(lVar2 + 8))(ppcVar14,lVar2);
    param_1[0x2b] = (longlong)local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      pcVar12 = "Unable to allocate memory for SYMLINK/READLINK/REALPATH packet";
      uVar4 = 0xfffffffa;
      local_res8 = (undefined1 *)0x0;
      goto LAB_180025b90;
    }
    FUN_180019150((longlong *)&local_res8,uVar4 + 9);
    if (param_6 == 0) {
      *local_res8 = 0x14;
    }
    else if ((param_6 == 1) || (param_6 != 2)) {
      *local_res8 = 0x13;
    }
    else {
      *local_res8 = 0x10;
    }
    iVar5 = (int)param_1[1];
    local_res8 = local_res8 + 1;
    *(int *)(param_1 + 0x2c) = iVar5;
    *(int *)(param_1 + 1) = iVar5 + 1;
    FUN_180019150((longlong *)&local_res8,iVar5);
    FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)local_res18);
    if (param_6 == 0) {
      FUN_1800190c0((longlong *)&local_res8,local_res20,(ulonglong)param_5);
    }
    *(undefined4 *)((longlong)param_1 + 0x154) = 2;
LAB_180025a4f:
    plVar10 = param_1 + 0x2b;
    param_4 = ppcVar14;
    ppcVar6 = (char **)FUN_180004890(local_58,0,(void *)*plVar10,(ulonglong)ppcVar14);
    if (ppcVar6 == (char **)0xffffffffffffffdb) {
      return 0xffffffdb;
    }
    if (ppcVar14 != ppcVar6) {
      (**(code **)(lVar2 + 0x18))();
      pcVar12 = "Unable to send SYMLINK/READLINK command";
      *plVar10 = 0;
      uVar4 = 0xfffffff9;
      *(undefined4 *)((longlong)param_1 + 0x154) = 0;
      goto LAB_180025b90;
    }
    (**(code **)(lVar2 + 0x18))(*plVar10,lVar2);
    *(undefined4 *)((longlong)param_1 + 0x154) = 3;
    *plVar10 = 0;
  }
  else if (*(int *)((longlong)param_1 + 0x154) == 2) goto LAB_180025a4f;
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (param_1[0xe] == 0) {
    _Var7 = _time64((__time64_t *)0x0);
    param_1[0xe] = _Var7;
  }
  iVar5 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
  while (lVar11 = 0, iVar5 == 0) {
    do {
      uVar9 = (ulonglong)(byte)(&DAT_18003316c)[lVar11];
      param_4 = &local_68;
      uVar13 = (ulonglong)uVar1;
      uVar8 = FUN_180023dc0(param_1,(&DAT_18003316c)[lVar11],uVar1,param_4,(longlong *)&local_60);
      uVar3 = local_60;
      pcVar12 = local_68;
      if ((int)uVar8 == 0) {
        param_1[0xe] = 0;
        if (local_60 < 9) goto LAB_180025bcc;
        *(undefined4 *)((longlong)param_1 + 0x154) = 0;
        if (*local_68 == 'e') {
          iVar5 = FUN_180018ea0(local_68 + 5);
          (**(code **)(lVar2 + 0x18))(pcVar12,lVar2);
          if (iVar5 == 0) {
            return 0;
          }
          *(int *)(param_1 + 8) = iVar5;
          pcVar12 = "SFTP Protocol Error";
          uVar4 = 0xffffffe1;
        }
        else {
          iVar5 = FUN_180018ea0(local_68 + 5);
          if (iVar5 == 0) {
            (**(code **)(lVar2 + 0x18))(pcVar12,lVar2);
            pcVar12 = "Invalid READLINK/REALPATH response, no name entries";
            uVar4 = 0xffffffe1;
          }
          else {
            if (0xc < uVar3) {
              uVar4 = FUN_180018ea0(pcVar12 + 9);
              ppcVar14 = local_res20;
              if ((ulonglong)param_5 <= (ulonglong)uVar4) {
                (**(code **)(lVar2 + 0x18))(pcVar12,lVar2);
                return 0xffffffda;
              }
              memcpy(local_res20,pcVar12 + 0xd,(ulonglong)uVar4);
              *(undefined1 *)((ulonglong)uVar4 + (longlong)ppcVar14) = 0;
              (**(code **)(lVar2 + 0x18))(pcVar12,lVar2);
              return uVar4;
            }
            if (uVar3 != 0) {
              (**(code **)(lVar2 + 0x18))(pcVar12,lVar2);
            }
            pcVar12 = "SFTP stat packet too short";
            uVar4 = 0xffffffe1;
          }
        }
        goto LAB_180025b90;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < 2);
    uVar4 = FUN_180023e70(param_1,uVar9,uVar13,(ulonglong)param_4);
    if (((uVar4 + 0x80000000 & 0x80000000) == 0) && (uVar4 != 0xffffffdb)) {
      param_1[0xe] = 0;
      if (uVar4 != 0xffffffda) goto LAB_180025b80;
LAB_180025bcc:
      if (uVar3 != 0) {
        (**(code **)(lVar2 + 0x18))(local_68,lVar2);
      }
      pcVar12 = "SFTP symlink packet too short";
      uVar4 = 0xffffffe1;
      goto LAB_180025b90;
    }
    if ((int)uVar4 < 1) {
      _Var7 = _time64((__time64_t *)0x0);
      if ((*(int *)(*(longlong *)(*param_1 + 0x68) + 0x11f68) - (int)_Var7) + (int)param_1[0xe] < 1)
      {
        uVar4 = 0xfffffff7;
        goto LAB_180025b7c;
      }
      if (uVar4 == 0xffffffdb) {
        return 0xffffffdb;
      }
    }
    iVar5 = *(int *)(*(longlong *)(*param_1 + 0x68) + 600);
  }
  uVar4 = 0xfffffff3;
LAB_180025b7c:
  param_1[0xe] = 0;
LAB_180025b80:
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  pcVar12 = "Error waiting for status message";
LAB_180025b90:
  uVar4 = FUN_180018820(lVar2,uVar4,(longlong)pcVar12,param_4);
  return uVar4;
}




undefined8 * FUN_180025cd0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 *local_res8;
  char *local_res20;
  ulonglong local_58;
  undefined8 *local_48;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar17 = 0;
  local_58 = 0;
  local_res20 = (char *)0x0;
  lVar10 = *plVar1;
  puVar13 = *(undefined8 **)(lVar10 + 0x68);
  puVar14 = param_2;
  puVar15 = param_3;
  if (*(int *)((longlong)plVar1 + 0xa4) != 3) {
    *(undefined4 *)(plVar1 + 8) = 0;
    puVar11 = (undefined8 *)
              ((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x130)) +
              *(longlong *)(param_1 + 0x138));
    *(undefined4 *)((longlong)plVar1 + 0xa4) = 0;
    uVar12 = (longlong)param_3 - (longlong)puVar11;
    if (param_3 < puVar11) {
      uVar12 = uVar17;
    }
    if (uVar12 != 0) {
      local_48 = (undefined8 *)((longlong)puVar11 + (longlong)param_2);
      if (param_3 < puVar11) {
        local_48 = param_2;
      }
      do {
        puVar14 = (undefined8 *)(uVar12 & 0xffffffff);
        if (30000 < uVar12) {
          puVar14 = (undefined8 *)0x7530;
        }
        uVar16 = *(int *)(param_1 + 0x120) + 0x19 + (int)puVar14;
        puVar11 = (undefined8 *)(*(code *)puVar13[1])((ulonglong)uVar16 + 0x40,puVar13);
        if (puVar11 == (undefined8 *)0x0) {
          iVar6 = FUN_180018820((longlong)puVar13,0xfffffffa,0x1800335e0,puVar15);
          return (undefined8 *)(longlong)iVar6;
        }
        puVar11[4] = puVar14;
        local_res8 = (undefined1 *)((longlong)puVar11 + 0x3c);
        puVar11[5] = 0;
        puVar11[6] = (ulonglong)uVar16;
        FUN_180019150((longlong *)&local_res8,uVar16 - 4);
        *local_res8 = 6;
        local_res8 = local_res8 + 1;
        iVar6 = (int)plVar1[1];
        *(int *)(plVar1 + 1) = iVar6 + 1;
        *(int *)(puVar11 + 7) = iVar6;
        FUN_180019150((longlong *)&local_res8,iVar6);
        FUN_1800190c0((longlong *)&local_res8,(void *)(param_1 + 0x20),
                      *(ulonglong *)(param_1 + 0x120));
        uVar2 = *(undefined8 *)(param_1 + 0x138);
        *local_res8 = (char)((ulonglong)uVar2 >> 0x38);
        local_res8[1] = (char)((ulonglong)uVar2 >> 0x30);
        local_res8[2] = (char)((ulonglong)uVar2 >> 0x28);
        local_res8[4] = (char)((ulonglong)uVar2 >> 0x18);
        local_res8[3] = (char)((ulonglong)uVar2 >> 0x20);
        local_res8[7] = (char)uVar2;
        local_res8[5] = (char)((ulonglong)uVar2 >> 0x10);
        local_res8[6] = (char)((ulonglong)uVar2 >> 8);
        local_res8 = local_res8 + 8;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + (longlong)puVar14;
        param_2 = puVar14;
        FUN_1800190c0((longlong *)&local_res8,local_48,(ulonglong)puVar14);
        FUN_180018d20((undefined8 *)(param_1 + 0x178),puVar11);
        local_48 = (undefined8 *)((longlong)local_48 + (longlong)puVar14);
        uVar12 = uVar12 - (longlong)puVar14;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_180018d50(param_1 + 0x178);
    puVar14 = param_2;
    while (param_2 = puVar11, puVar7 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)puVar7[6];
      if (puVar15 != (undefined8 *)0x0) {
        param_2 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)(puVar7[5] + 0x3c + (longlong)puVar7);
        puVar11 = (undefined8 *)FUN_180004890(lVar10,0,puVar14,(ulonglong)puVar15);
        if ((longlong)puVar11 < 0) {
          return puVar11;
        }
        puVar7[6] = puVar7[6] - (longlong)puVar11;
        puVar7[5] = puVar7[5] + (longlong)puVar11;
        if (puVar7[6] != 0) break;
      }
      puVar7 = (undefined8 *)FUN_180018d70(puVar7);
      puVar11 = param_2;
    }
  }
  *(undefined4 *)((longlong)plVar1 + 0xa4) = 0;
  plVar8 = (longlong *)FUN_180018d50(param_1 + 0x178);
  do {
    if (((plVar8 == (longlong *)0x0) || (plVar8[6] != 0)) || (uVar17 != 0)) {
      puVar13 = (undefined8 *)(uVar17 + *(longlong *)(param_1 + 0x140));
      if (puVar13 == (undefined8 *)0x0) {
        param_3 = (undefined8 *)0x0;
      }
      else {
        if (puVar13 < param_3) {
          param_3 = puVar13;
        }
        *(longlong *)(param_1 + 0x140) = (longlong)puVar13 - (longlong)param_3;
      }
      return param_3;
    }
    lVar5 = plVar8[7];
    lVar10 = *(longlong *)(*plVar1 + 0x68);
    for (plVar9 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)FUN_180018d70(plVar9)) {
      pcVar3 = (char *)plVar9[4];
      if ((*pcVar3 == 'e') && ((int)plVar9[3] == (int)lVar5)) {
        local_58 = plVar9[5];
        FUN_180018d80(plVar9);
        (**(code **)(lVar10 + 0x18))(plVar9,lVar10);
        uVar16 = -(uint)(local_58 < 9) & 0xffffffda;
        local_res20 = pcVar3;
        goto LAB_180026021;
      }
    }
    iVar6 = *(int *)(lVar10 + 600);
    while (iVar6 == 0) {
      uVar16 = FUN_180023e70(plVar1,param_2,puVar14,(ulonglong)puVar15);
      if ((int)uVar16 < 0) goto LAB_180026021;
      lVar4 = *(longlong *)(*plVar1 + 0x68);
      for (plVar9 = (longlong *)FUN_180018d50((longlong)(plVar1 + 2)); plVar9 != (longlong *)0x0;
          plVar9 = (longlong *)FUN_180018d70(plVar9)) {
        pcVar3 = (char *)plVar9[4];
        if ((*pcVar3 == 'e') && ((int)plVar9[3] == (int)lVar5)) {
          local_58 = plVar9[5];
          FUN_180018d80(plVar9);
          (**(code **)(lVar4 + 0x18))(plVar9,lVar4);
          uVar16 = -(uint)(local_58 < 9) & 0xffffffda;
          local_res20 = pcVar3;
          goto LAB_180026021;
        }
      }
      iVar6 = *(int *)(lVar10 + 600);
    }
    uVar16 = 0xfffffff3;
LAB_180026021:
    puVar11 = (undefined8 *)(longlong)(int)uVar16;
    if (puVar11 == (undefined8 *)0xffffffffffffffda) {
      if (local_58 != 0) {
        (*(code *)puVar13[3])(local_res20,puVar13);
      }
      iVar6 = FUN_180018820((longlong)puVar13,0xffffffe1,0x180033760,puVar15);
      return (undefined8 *)(longlong)iVar6;
    }
    if ((longlong)puVar11 < 0) {
      if (puVar11 != (undefined8 *)0xffffffffffffffdb) {
        return puVar11;
      }
      *(undefined4 *)((longlong)plVar1 + 0xa4) = 3;
      return (undefined8 *)0xffffffffffffffdb;
    }
    iVar6 = FUN_180018ea0(local_res20 + 5);
    puVar11 = puVar13;
    (*(code *)puVar13[3])(local_res20);
    *(int *)(plVar1 + 8) = iVar6;
    if (iVar6 != 0) {
      FUN_180024340(param_1,puVar11,puVar14,puVar15);
      lVar10 = *(longlong *)(param_1 + 0x130) - *(longlong *)(param_1 + 0x140);
      *(longlong *)(param_1 + 0x130) = lVar10;
      *(longlong *)(param_1 + 0x138) = lVar10;
      *(undefined8 *)(param_1 + 0x140) = 0;
      iVar6 = FUN_180018820((longlong)puVar13,0xffffffe1,0x180033780,puVar15);
      return (undefined8 *)(longlong)iVar6;
    }
    uVar17 = plVar8[4];
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + uVar17;
    plVar9 = (longlong *)FUN_180018d70(plVar8);
    FUN_180018d80(plVar8);
    param_2 = puVar13;
    (*(code *)puVar13[3])(plVar8);
    plVar8 = plVar9;
  } while( true );
}




void FUN_1800261c0(ulonglong param_1)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *_Dst_00;
  ulonglong uVar9;
  undefined4 *_Src;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStackY_88 [32];
  int local_58;
  undefined4 local_50;
  byte local_4c;
  undefined1 local_4b [27];
  ulonglong local_30;
  
  local_30 = DAT_18003b280 ^ (ulonglong)auStackY_88;
  _Dst = (void *)(param_1 + 0x278);
  *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffe;
  local_58 = 1;
  if ((((byte)*(undefined4 *)(param_1 + 0x80) & 9) != 1) ||
     (uVar4 = FUN_18000fe20(param_1,1,(uint *)(param_1 + 0x115b8)), uVar4 == 0)) {
    if (*(int *)(param_1 + 0x11970) == 0xb) {
      local_58 = *(int *)(param_1 + 0x11974);
      *(undefined4 *)(param_1 + 0x11970) = 0;
LAB_18002624f:
      iVar5 = FUN_180026e60(param_1,local_58);
      if (iVar5 == -0x25) {
        if (*(int *)(param_1 + 0x11ba0) != 0) {
          *(int *)(param_1 + 0x11974) = local_58;
          *(undefined4 *)(param_1 + 0x11970) = 0xb;
        }
      }
      else {
LAB_1800266f5:
        *(undefined8 *)(param_1 + 0x8b58) = 0;
      }
    }
    else if (*(int *)(param_1 + 600) != -1) {
      uVar13 = 0;
      do {
        iVar12 = 0;
        iVar5 = iVar12;
        if ((*(byte *)(param_1 + 0x80) & 2) == 0) {
          local_58 = 0;
          iVar10 = 5;
        }
        else {
          iVar10 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x10);
          if ((local_58 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 0x28);
          }
        }
        lVar7 = *(longlong *)(param_1 + 0x8b40);
        uVar14 = *(longlong *)(param_1 + 0x8b38) - lVar7;
        if ((longlong)uVar14 < (longlong)iVar10) {
          sVar6 = uVar13;
          if (uVar14 != 0) {
            memmove(_Dst,(void *)(lVar7 + (longlong)_Dst),uVar14);
            sVar6 = uVar14;
          }
          *(undefined8 *)(param_1 + 0x8b40) = 0;
          *(size_t *)(param_1 + 0x8b38) = sVar6;
          lVar7 = (**(code **)(param_1 + 0x68))
                            (*(undefined8 *)(param_1 + 0x250),uVar14 + (longlong)_Dst,35000 - uVar14
                             ,0);
          if (0 < lVar7) {
            *(longlong *)(param_1 + 0x8b38) = *(longlong *)(param_1 + 0x8b38) + lVar7;
            lVar7 = *(longlong *)(param_1 + 0x8b40);
            uVar14 = *(longlong *)(param_1 + 0x8b38) - lVar7;
            goto LAB_180026372;
          }
          if (lVar7 == -0xb) {
LAB_1800266d2:
            *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 1;
          }
          break;
        }
LAB_180026372:
        if (*(longlong *)(param_1 + 0x8b58) == 0) {
          iVar15 = iVar10;
          if (iVar5 != 0) {
            iVar15 = 4;
          }
          if ((longlong)uVar14 < (longlong)iVar15) goto LAB_1800266d2;
          _Src = (undefined4 *)(lVar7 + (longlong)_Dst);
          if (iVar5 == 0) {
            if (local_58 == 0) {
              memcpy(&local_50,_Src,(longlong)iVar10);
            }
            else {
              uVar8 = FUN_180026d30(param_1,_Src,&local_50,(longlong)iVar10,1);
              if ((int)uVar8 != 0) break;
              *(undefined4 *)(param_1 + 0x8b30) = local_50;
              *(byte *)(param_1 + 0x8b34) = local_4c;
            }
            _Src = &local_50;
            *(longlong *)(param_1 + 0x8b40) = *(longlong *)(param_1 + 0x8b40) + (longlong)iVar10;
          }
          uVar4 = FUN_180018ea0((undefined1 *)_Src);
          *(uint *)(param_1 + 0x8b48) = uVar4;
          if ((uVar4 == 0) || (40000 < uVar4)) break;
          if (iVar5 == 0) {
            *(byte *)(param_1 + 0x8b4c) = local_4c;
            if (uVar4 - 1 < (uint)local_4c) break;
            iVar15 = iVar12;
            if (local_58 != 0) {
              iVar15 = *(int *)(*(longlong *)(param_1 + 0x160) + 8);
            }
            iVar15 = iVar15 + -1;
          }
          else {
            iVar15 = *(int *)(*(longlong *)(param_1 + 0x160) + 8) + 4;
          }
          uVar11 = (ulonglong)(iVar15 + uVar4);
          if (39999 < uVar11 - 1) break;
          _Dst_00 = (void *)(**(code **)(param_1 + 8))(uVar11,param_1);
          *(void **)(param_1 + 0x8b60) = _Dst_00;
          if (_Dst_00 == (void *)0x0) break;
          *(ulonglong *)(param_1 + 0x8b58) = uVar11;
          *(void **)(param_1 + 0x8b68) = _Dst_00;
          if ((iVar5 == 0) && (5 < iVar10)) {
            iVar1 = iVar10 + -5;
            if ((int)(iVar15 + uVar4) < iVar1) {
              (**(code **)(param_1 + 0x18))(_Dst_00,param_1);
              break;
            }
            memcpy(_Dst_00,local_4b,(longlong)iVar1);
            *(longlong *)(param_1 + 0x8b68) = *(longlong *)(param_1 + 0x8b68) + (longlong)iVar1;
            *(longlong *)(param_1 + 0x8b50) =
                 *(longlong *)(param_1 + 0x8b68) - *(longlong *)(param_1 + 0x8b60);
          }
          else {
            *(undefined8 *)(param_1 + 0x8b50) = 0;
            if (iVar5 != 0) goto LAB_1800264fd;
          }
          uVar14 = uVar14 - (longlong)iVar10;
        }
LAB_1800264fd:
        lVar7 = *(longlong *)(param_1 + 0x8b58);
        lVar2 = *(longlong *)(param_1 + 0x8b50);
        uVar11 = lVar7 - lVar2;
        if ((longlong)uVar14 <= lVar7 - lVar2) {
          uVar11 = uVar14;
        }
        if ((local_58 != 0) && (iVar5 == 0)) {
          lVar3 = *(longlong *)(param_1 + 0x150);
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x160) + 8);
          if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1c) & 1) != 0)) {
            iVar5 = 0;
          }
          if (lVar2 + uVar11 < (ulonglong)(lVar7 - iVar5)) {
            uVar14 = uVar11;
            if ((longlong)uVar11 % (longlong)iVar10 != 0) {
              uVar14 = uVar11 - (longlong)uVar11 % (longlong)iVar10;
              uVar11 = uVar13;
            }
            if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1c) & 1) != 0)) &&
               (uVar9 = (ulonglong)((((int)lVar7 - (int)lVar2) - iVar5) - iVar10), uVar11 = uVar13,
               (longlong)uVar9 <= (longlong)uVar14)) {
              uVar14 = uVar9;
            }
            uVar4 = 0;
          }
          else {
            iVar5 = ((int)lVar7 - (int)lVar2) - iVar5;
            uVar4 = 2;
            if (-1 < iVar5) {
              iVar12 = iVar5;
            }
            uVar14 = (ulonglong)iVar12;
          }
          if (0 < (longlong)uVar14) {
            uVar8 = FUN_180026d30(param_1,(void *)(*(longlong *)(param_1 + 0x8b40) + (longlong)_Dst)
                                  ,*(void **)(param_1 + 0x8b68),uVar14,uVar4);
            if ((int)uVar8 != 0) goto LAB_1800266f5;
            *(longlong *)(param_1 + 0x8b40) = *(longlong *)(param_1 + 0x8b40) + uVar14;
            *(longlong *)(param_1 + 0x8b68) = *(longlong *)(param_1 + 0x8b68) + uVar14;
            *(longlong *)(param_1 + 0x8b50) = *(longlong *)(param_1 + 0x8b50) + uVar14;
            uVar11 = uVar11 - uVar14;
          }
        }
        if (0 < (longlong)uVar11) {
          lVar7 = *(longlong *)(param_1 + 0x8b60);
          if ((ulonglong)
              ((*(longlong *)(param_1 + 0x8b58) - (longlong)*(void **)(param_1 + 0x8b68)) + lVar7) <
              uVar11) {
            if (lVar7 != 0) {
              (**(code **)(param_1 + 0x18))(lVar7,param_1);
            }
            break;
          }
          memcpy(*(void **)(param_1 + 0x8b68),
                 (void *)(*(longlong *)(param_1 + 0x8b40) + (longlong)_Dst),uVar11);
          *(longlong *)(param_1 + 0x8b40) = *(longlong *)(param_1 + 0x8b40) + uVar11;
          *(longlong *)(param_1 + 0x8b68) = *(longlong *)(param_1 + 0x8b68) + uVar11;
          *(longlong *)(param_1 + 0x8b50) = *(longlong *)(param_1 + 0x8b50) + uVar11;
        }
        if (*(longlong *)(param_1 + 0x8b58) == *(longlong *)(param_1 + 0x8b50)) goto LAB_18002624f;
      } while (*(int *)(param_1 + 600) != -1);
    }
  }
  FUN_18002af30(local_30 ^ (ulonglong)auStackY_88);
  return;
}




uint FUN_180026710(ulonglong param_1,void *param_2,size_t param_3,void *param_4,size_t param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  
  if ((*(uint *)(param_1 + 0x80) & 2) == 0) {
    iVar4 = 8;
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
  }
  if ((((byte)*(uint *)(param_1 + 0x80) & 9) != 1) ||
     (uVar2 = FUN_18000fe20(param_1,1,(uint *)(param_1 + 0x115b8)), uVar2 == 0)) {
    if (*(longlong *)(param_1 + 0x11438) == 0) {
      *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffd;
      lVar7 = 0;
      uVar2 = *(uint *)(param_1 + 0x80);
      iVar10 = 0;
      iVar17 = iVar10;
      if (((uVar2 & 2) != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
        iVar17 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 0x28);
      }
      lVar12 = *(longlong *)(param_1 + 0x1e8);
      iVar8 = iVar10;
      if (((lVar12 != 0) && (*(int *)(lVar12 + 8) != 0)) &&
         (((uVar2 & 4) != 0 || (*(int *)(lVar12 + 0xc) != 0)))) {
        iVar8 = 1;
      }
      pvVar14 = param_2;
      if ((((uVar2 & 2) == 0) || (iVar8 == 0)) ||
         (plVar1 = (longlong *)(param_1 + 0x1f0), *plVar1 == 0)) {
        uVar18 = param_3 + param_5;
        if (0x87b7 < uVar18) {
          return 0xffffffde;
        }
        memcpy((void *)(param_1 + 0x8b75),param_2,param_3);
        if ((param_4 != (void *)0x0) && (param_5 != 0)) {
          memcpy((void *)(param_3 + 0x8b75 + param_1),param_4,param_5);
        }
      }
      else {
        local_50 = 0x87b3;
        local_58 = 0x87b3;
        uVar3 = (**(code **)(lVar12 + 0x18))
                          (param_1,param_1 + 0x8b75,&local_50,param_2,param_3,plVar1);
        if (uVar3 != 0) {
          return uVar3;
        }
        if ((param_4 == (void *)0x0) || (param_5 == 0)) {
          local_58 = 0;
          uVar18 = local_50;
        }
        else {
          local_58 = local_58 - local_50;
          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x18))
                            (param_1,local_50 + 0x8b75 + param_1,&local_58,param_4,param_5,plVar1);
          if (uVar3 != 0) {
            return uVar3;
          }
          pvVar14 = param_4;
          uVar18 = local_50 + local_58;
        }
      }
      if ((iVar17 != 0) ||
         (((lVar12 = lVar7, (uVar2 & 2) != 0 && (*(longlong *)(param_1 + 0x150) != 0)) &&
          ((*(byte *)(*(longlong *)(param_1 + 0x150) + 0x1c) & 2) != 0)))) {
        lVar12 = 4;
      }
      uVar9 = (ulonglong)iVar4;
      uVar11 = (ulonglong)(-(uint)(iVar17 != 0) & 4);
      uVar5 = uVar9 - ((uVar18 + 5) - lVar12) % uVar9;
      uVar9 = uVar9 + uVar5;
      if (3 < (longlong)uVar5) {
        uVar9 = uVar5;
      }
      uVar5 = uVar18 + 5 + uVar9;
      if ((uVar2 & 2) != 0) {
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 8);
      }
      local_48 = (longlong)iVar10 + uVar5;
      FUN_180018d00((undefined1 *)(param_1 + 0x8b70),(int)uVar5 + -4);
      *(char *)(param_1 + 0x8b74) = (char)uVar9;
      iVar4 = FUN_18000a010(param_1 + 0x8b75 + uVar18,uVar9);
      if (iVar4 == 0) {
        if ((uVar2 & 2) != 0) {
          if ((iVar17 == 0) &&
             ((*(longlong *)(param_1 + 0x150) == 0 ||
              ((*(byte *)(*(longlong *)(param_1 + 0x150) + 0x1c) & 1) == 0)))) {
            (**(code **)(*(longlong *)(param_1 + 0x1d0) + 0x18))
                      (param_1,param_1 + 0x8b70 + uVar5,*(undefined4 *)(param_1 + 0x1d8),
                       param_1 + 0x8b70,uVar5,0,0,param_1 + 0x1e0);
          }
          for (; uVar11 < uVar5;
              uVar11 = uVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10)) {
            lVar6 = *(longlong *)(param_1 + 0x1c0);
            lVar12 = uVar11 + 0x8b70;
            iVar8 = (int)uVar5 - (int)uVar11;
            iVar4 = *(int *)(lVar6 + 0x10);
            iVar10 = iVar4;
            if (iVar8 <= iVar4) {
              iVar10 = iVar8;
            }
            lVar16 = (longlong)iVar10;
            if (uVar11 == 0) {
              uVar13 = 1;
              lVar15 = lVar6;
            }
            else {
              lVar15 = lVar7;
              if (((lVar6 == 0) || (lVar15 = lVar6, (*(byte *)(lVar6 + 0x1c) & 1) == 0)) &&
                 (uVar11 == uVar5 - (longlong)iVar4)) {
                uVar13 = 2;
              }
              else {
                uVar13 = 0;
              }
            }
            if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x1c) & 1) == 0)) &&
               (uVar5 + lVar16 * -2 < uVar11)) {
              lVar16 = uVar5 - uVar11;
              uVar11 = uVar11 + (lVar16 - iVar4);
            }
            iVar4 = (**(code **)(lVar15 + 0x28))
                              (param_1,lVar12 + param_1,lVar16,param_1 + 0x1c8,uVar13);
            if (iVar4 != 0) {
              return 0xffffffd4;
            }
          }
          lVar12 = *(longlong *)(param_1 + 0x1c0);
          if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0x1c) & 1) != 0)) &&
             (iVar4 = (**(code **)(lVar12 + 0x28))
                                (param_1,param_1 + 0x8b70 + uVar5,
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 8),
                                 param_1 + 0x1c8,2), iVar4 != 0)) {
            return 0xffffffd4;
          }
          if (iVar17 != 0) {
            (**(code **)(*(longlong *)(param_1 + 0x1d0) + 0x18))
                      (param_1,param_1 + 0x8b70 + uVar5,*(undefined4 *)(param_1 + 0x1d8),
                       param_1 + 0x8b70,uVar5,0,0,param_1 + 0x1e0);
          }
        }
        lVar12 = local_48;
        *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
        lVar6 = (**(code **)(param_1 + 0x60))
                          (*(undefined8 *)(param_1 + 0x250),param_1 + 0x8b70,local_48,0,param_1);
        if (lVar6 == lVar12) {
          *(undefined8 *)(param_1 + 0x11430) = 0;
          uVar2 = 0;
          *(undefined8 *)(param_1 + 0x11438) = 0;
        }
        else if (((lVar6 + 0x8000000000000000U & 0x8000000000000000) == 0) && (lVar6 != -0xb)) {
          uVar2 = 0xfffffff9;
        }
        else {
          *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 2;
          *(void **)(param_1 + 0x11430) = param_2;
          if (lVar6 < 1) {
            lVar6 = lVar7;
          }
          *(size_t *)(param_1 + 0x11438) = param_3;
          uVar2 = 0xffffffdb;
          *(longlong *)(param_1 + 0x11440) = lVar6;
          *(longlong *)(param_1 + 0x11428) = lVar12;
        }
      }
      else {
        uVar2 = FUN_180018820(param_1,0xffffffcf,0x180033dc8,pvVar14);
      }
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x11428) - *(longlong *)(param_1 + 0x11440);
      lVar7 = (**(code **)(param_1 + 0x60))
                        (*(undefined8 *)(param_1 + 0x250),
                         *(longlong *)(param_1 + 0x11440) + 0x8b70 + param_1,lVar12,0,param_1);
      if (lVar7 == lVar12) {
        *(undefined8 *)(param_1 + 0x11428) = 0;
        *(undefined8 *)(param_1 + 0x11438) = 0;
        *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffd;
        uVar2 = 0;
      }
      else if (lVar7 < 0) {
        if (lVar7 == -0xb) {
          *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) | 2;
          uVar2 = 0xffffffdb;
        }
        else {
          uVar2 = 0xfffffff9;
        }
      }
      else {
        *(longlong *)(param_1 + 0x11440) = *(longlong *)(param_1 + 0x11440) + lVar7;
        uVar2 = 0xffffffdb;
        if (lVar12 <= lVar7) {
          *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfffffffd;
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}




undefined8 FUN_180026d30(longlong param_1,void *param_2,void *param_3,size_t param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  size_t _Size;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x150) + 0x10);
  sVar4 = (size_t)(int)uVar1;
  if (0 < (longlong)param_4) {
    sVar5 = sVar4;
    do {
      _Size = sVar4;
      if ((longlong)param_4 <= (longlong)sVar4) {
        _Size = param_4;
      }
      if ((param_5 & 1) == 0) {
        uVar3 = 0;
        if ((longlong)param_4 <= (longlong)sVar4) {
          uVar3 = param_5;
        }
      }
      else {
        uVar3 = 1;
      }
      if (((*(longlong *)(param_1 + 0x1c0) != 0) &&
          ((*(uint *)(*(longlong *)(param_1 + 0x1c0) + 0x1c) & param_5 & 2) != 0)) &&
         ((longlong)param_4 < (longlong)((int)sVar5 * 2))) {
        uVar3 = 2;
        _Size = param_4;
      }
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x150) + 0x28))
                        (param_1,param_2,_Size,param_1 + 0x158,uVar3);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x8b60),param_1);
        return 0xfffffff4;
      }
      memcpy(param_3,param_2,_Size);
      param_4 = param_4 - _Size;
      param_3 = (void *)((longlong)param_3 + _Size);
      param_2 = (void *)((longlong)param_2 + _Size);
      sVar5 = (size_t)uVar1;
    } while (0 < (longlong)param_4);
  }
  return 0;
}




void FUN_180026e60(ulonglong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Dst;
  size_t _Size;
  longlong lVar4;
  size_t sVar5;
  undefined1 auStackY_e8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97 [31];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_18003b280 ^ (ulonglong)auStackY_e8;
  if (*(int *)(param_1 + 0x11cb0) == 0) {
    *(undefined4 *)(param_1 + 0x11cb4) = 0;
    *(ulonglong *)(param_1 + 0x11cb8) = (ulonglong)(*(int *)(param_1 + 0x8b48) - 1);
    if ((param_2 != 0) &&
       ((*(longlong *)(param_1 + 0x1c0) == 0 ||
        ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x1c) & 1) == 0)))) {
      lVar4 = *(longlong *)(param_1 + 0x160);
      iVar2 = *(int *)(lVar4 + 0x28);
      _Size = (size_t)*(int *)(lVar4 + 8);
      if (iVar2 == 0) {
        (**(code **)(lVar4 + 0x18))
                  (param_1,local_78,*(undefined4 *)(param_1 + 0x168),param_1 + 0x8b30);
      }
      else {
        (**(code **)(lVar4 + 0x18))
                  (param_1,local_78,*(undefined4 *)(param_1 + 0x168),
                   *(undefined8 *)(param_1 + 0x8b60));
      }
      lVar4 = *(longlong *)(param_1 + 0x8b60);
      iVar1 = memcmp(local_78,(void *)((lVar4 - _Size) + *(longlong *)(param_1 + 0x8b58)),_Size);
      if (iVar1 == 0) {
        if (iVar2 != 0) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + 0x10);
          sVar5 = (size_t)iVar2;
          uVar3 = FUN_180026d30(param_1,(void *)(lVar4 + 4),&local_98,sVar5,1);
          if ((int)uVar3 != 0) goto LAB_180027185;
          lVar4 = (*(longlong *)(param_1 + 0x8b58) - _Size) + -4;
          _Dst = (void *)(**(code **)(param_1 + 8))(lVar4,param_1);
          if (_Dst == (void *)0x0) goto LAB_180027185;
          *(undefined1 *)(param_1 + 0x8b4c) = local_98;
          if (1 < iVar2) {
            memcpy(_Dst,local_97,(longlong)(iVar2 + -1));
          }
          if (((longlong)sVar5 < lVar4) &&
             (uVar3 = FUN_180026d30(param_1,(void *)(*(longlong *)(param_1 + 0x8b60) + 4 + sVar5),
                                    (void *)((sVar5 - 1) + (longlong)_Dst),lVar4 - sVar5,2),
             (int)uVar3 != 0)) {
            (**(code **)(param_1 + 0x18))(_Dst,param_1);
            goto LAB_180027185;
          }
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x8b60),param_1);
          *(void **)(param_1 + 0x8b60) = _Dst;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x11cb4) = 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
    lVar4 = *(longlong *)(param_1 + 0x1e8);
    *(ulonglong *)(param_1 + 0x11cb8) =
         *(longlong *)(param_1 + 0x11cb8) - (ulonglong)*(byte *)(param_1 + 0x8b4c);
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 8) != 0)) &&
        (((*(byte *)(param_1 + 0x80) & 4) != 0 || (*(int *)(lVar4 + 0xc) != 0)))) &&
       (*(longlong *)(param_1 + 0x180) != 0)) {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x20))
                        (param_1,&local_a8,&local_a0,40000);
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x8b60),param_1);
      if (iVar2 != 0) goto LAB_180027185;
      *(undefined8 *)(param_1 + 0x8b60) = local_a8;
      *(undefined8 *)(param_1 + 0x11cb8) = local_a0;
    }
    *(uint *)(param_1 + 0x11cc0) = (uint)**(byte **)(param_1 + 0x8b60);
    *(undefined4 *)(param_1 + 0x11cb0) = 2;
LAB_180027159:
    iVar2 = FUN_180019280(param_1,*(char **)(param_1 + 0x8b60),*(undefined8 **)(param_1 + 0x11cb8),
                          (ulonglong)*(uint *)(param_1 + 0x11cb4));
    if (iVar2 == -0x25) goto LAB_180027185;
  }
  else if (*(int *)(param_1 + 0x11cb0) == 2) goto LAB_180027159;
  *(undefined4 *)(param_1 + 0x11cb0) = 0;
LAB_180027185:
  FUN_18002af30(local_38 ^ (ulonglong)auStackY_e8);
  return;
}




undefined4 FUN_1800271c0(longlong param_1,longlong *param_2,size_t *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *_Dst;
  longlong lVar6;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  size_t sVar11;
  char *pcVar12;
  size_t local_58;
  longlong lVar7;
  
  local_58 = 0;
  _Str = FUN_18000be10(param_1,(void *)*param_2,*param_3);
  if ((_Str == (char *)0x0) || (*(longlong *)(param_1 + 0x128) == 0)) {
    return 0;
  }
  lVar6 = -1;
  do {
    lVar7 = lVar6;
    lVar6 = lVar7 + 1;
  } while (_Str[lVar6] != '\0');
  pcVar3 = (char *)(**(code **)(param_1 + 8))(lVar7 + 2,param_1);
  if (pcVar3 == (char *)0x0) {
    uVar1 = FUN_180018820(param_1,0xfffffffa,0x180034410,param_4);
    return uVar1;
  }
  pcVar12 = *(char **)(param_1 + 0x128);
  pcVar10 = pcVar3;
  while ((pcVar12 != (char *)0x0 && (*pcVar12 != '\0'))) {
    pcVar4 = strchr(pcVar12,0x2c);
    pcVar9 = _Str;
    if (pcVar4 == (char *)0x0) {
      sVar11 = 0xffffffffffffffff;
      do {
        sVar11 = sVar11 + 1;
      } while (pcVar12[sVar11] != '\0');
    }
    else {
      sVar11 = (longlong)pcVar4 - (longlong)pcVar12;
    }
    do {
      if (*pcVar9 == '\0') break;
      pcVar5 = strchr(pcVar9,0x2c);
      if (pcVar5 == (char *)0x0) {
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (pcVar9[sVar8] != '\0');
      }
      else {
        sVar8 = (longlong)pcVar5 - (longlong)pcVar9;
      }
      if ((sVar8 == sVar11) && (iVar2 = memcmp(pcVar9,pcVar12,sVar11), iVar2 == 0)) {
        if (pcVar10 != pcVar3) {
          *pcVar10 = ',';
          pcVar10 = pcVar10 + 1;
        }
        memcpy(pcVar10,pcVar12,sVar11);
        pcVar10 = pcVar10 + sVar11;
      }
      pcVar9 = pcVar5 + 1;
      if (pcVar5 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
    } while (pcVar9 != (char *)0x0);
    pcVar12 = pcVar4 + 1;
    if (pcVar4 == (char *)0x0) {
      pcVar12 = (char *)0x0;
    }
  }
  pcVar12 = (char *)0x0;
  *pcVar10 = '\0';
  if (*(char **)(param_1 + 0x130) != (char *)0x0) {
    _Str = *(char **)(param_1 + 0x130);
  }
  do {
    if (*_Str == '\0') break;
    if (pcVar12 != (char *)0x0) goto LAB_180027456;
    pcVar9 = strchr(_Str,0x2c);
    pcVar10 = pcVar3;
    if (pcVar9 == (char *)0x0) {
      sVar11 = 0xffffffffffffffff;
      do {
        sVar11 = sVar11 + 1;
      } while (_Str[sVar11] != '\0');
    }
    else {
      sVar11 = (longlong)pcVar9 - (longlong)_Str;
    }
    do {
      if ((*pcVar10 == '\0') || (pcVar12 != (char *)0x0)) break;
      pcVar4 = strchr(pcVar10,0x2c);
      if (pcVar4 == (char *)0x0) {
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (pcVar10[sVar8] != '\0');
      }
      else {
        sVar8 = (longlong)pcVar4 - (longlong)pcVar10;
      }
      if ((sVar8 != sVar11) ||
         (iVar2 = memcmp(pcVar10,_Str,sVar11), pcVar5 = _Str, sVar8 = sVar11, iVar2 != 0)) {
        if (pcVar4 == (char *)0x0) break;
        pcVar10 = pcVar4 + 1;
        pcVar5 = pcVar12;
        sVar8 = local_58;
      }
      local_58 = sVar8;
      pcVar12 = pcVar5;
    } while (pcVar10 != (char *)0x0);
    _Str = pcVar9 + 1;
    if (pcVar9 == (char *)0x0) {
      _Str = (char *)0x0;
    }
  } while (_Str != (char *)0x0);
  if (pcVar12 == (char *)0x0) {
    uVar1 = FUN_180018820(param_1,0xffffffef,0x180034438,param_4);
  }
  else {
LAB_180027456:
    uVar1 = 0;
    if (*param_2 != 0) {
      (**(code **)(param_1 + 0x18))(*param_2,param_1);
    }
    _Dst = (void *)(**(code **)(param_1 + 8))(local_58,param_1);
    *param_2 = (longlong)_Dst;
    memcpy(_Dst,pcVar12,local_58);
    *param_3 = local_58;
  }
  (**(code **)(param_1 + 0x18))(pcVar3,param_1);
  return uVar1;
}




int FUN_1800274f0(ulonglong param_1,void *param_2,ulonglong param_3,longlong *param_4,
                 ulonglong param_5,undefined *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  longlong *plVar8;
  size_t *psVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  size_t _MaxCount;
  char *pcVar15;
  uint3 local_res8 [2];
  void *local_res10;
  ulonglong local_res18;
  longlong *local_res20;
  longlong *local_80;
  int local_78;
  undefined4 uStack_74;
  void *local_70;
  longlong *local_68;
  size_t *local_60;
  longlong *local_58;
  
  local_res8[0]._0_4_ = 0x3c3334;
  bVar4 = false;
  plVar8 = (longlong *)(param_1 + 8);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  do {
    plVar14 = local_res20;
    plVar12 = (longlong *)(param_1 + 0x11a48);
    iVar6 = *(int *)(param_1 + 0x11a20);
    if (iVar6 != 0) {
      plVar14 = (longlong *)(param_1 + 0x11a68);
      local_58 = plVar8;
      if (iVar6 == 2) goto LAB_1800276da;
      if (iVar6 == 3) goto LAB_18002772d;
      if (iVar6 == 4) goto LAB_1800277fd;
      local_68 = (longlong *)(param_1 + 0x11a38);
      local_60 = (size_t *)(param_1 + 0x11a40);
      if (iVar6 == 5) {
LAB_180027d50:
        puVar13 = (undefined8 *)(param_1 + 0x11a38);
        param_4 = (longlong *)0x0;
        uVar5 = FUN_180026710(param_1,(void *)*puVar13,
                              *(longlong *)(param_1 + 0x11a58) - (longlong)*puVar13,(void *)0x0,0);
        if (uVar5 == 0xffffffdb) goto LAB_180027953;
        if (uVar5 != 0) {
          (**(code **)(param_1 + 0x18))();
          pcVar15 = "Unable to send userauth-publickey request";
          *puVar13 = 0;
          uVar11 = 0xfffffff9;
          *(undefined4 *)(param_1 + 0x11a20) = 0;
          goto LAB_180027e5b;
        }
        (**(code **)(param_1 + 0x18))(*puVar13,param_1);
        *puVar13 = 0;
        *(undefined4 *)(param_1 + 0x11a20) = 6;
      }
      local_res8[0] = (uint3)(ushort)local_res8[0];
      param_4 = (longlong *)(param_1 + 0x11a30);
      uVar7 = FUN_18001a320(param_1,(char *)local_res8,(undefined8 *)(param_1 + 0x11a28),param_4,0,
                            (void *)0x0,0,(longlong *)(param_1 + 0x11a68));
      if ((int)uVar7 == -0x25) {
        pcVar15 = "Would block requesting userauth list";
        uVar11 = 0xffffffdb;
        goto LAB_180027e5b;
      }
      if (((int)uVar7 == 0) && (*(longlong *)(param_1 + 0x11a30) != 0)) {
        if (**(char **)(param_1 + 0x11a28) == '4') {
          (**(code **)(param_1 + 0x18))();
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
          *(undefined8 *)(param_1 + 0x11a28) = 0;
          *(undefined4 *)(param_1 + 0x11a20) = 0;
          return 0;
        }
        (**(code **)(param_1 + 0x18))(*(char **)(param_1 + 0x11a28),param_1);
        pcVar15 = 
        "Invalid signature for supplied public key, or bad username/public key combination";
        *(undefined8 *)(param_1 + 0x11a28) = 0;
      }
      else {
        pcVar15 = "Waiting for publickey USERAUTH response";
      }
      goto LAB_180027e4f;
    }
    if (param_5 < 4) {
      pcVar15 = "Invalid public key, too short";
      goto LAB_180027e56;
    }
    local_58 = (longlong *)(param_1 + 0x11a68);
    *local_58 = 0;
    psVar9 = (size_t *)(param_1 + 0x11a50);
    if (*plVar12 == 0) {
      uVar5 = FUN_180018ea0((undefined1 *)local_res20);
      uVar7 = (ulonglong)uVar5;
      *psVar9 = uVar7;
      if (param_5 - 4 < uVar7) {
        pcVar15 = "Invalid public key";
        goto LAB_180027e56;
      }
      _Dst = (void *)(*(code *)*plVar8)(uVar7,param_1);
      *plVar12 = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        pcVar15 = "Unable to allocate memory for public key data";
        uVar11 = 0xfffffffa;
        goto LAB_180027e5b;
      }
      memcpy(_Dst,(void *)((longlong)plVar14 + 4),*psVar9);
    }
    if ((!bVar4) && (iVar6 = FUN_1800271c0(param_1,plVar12,psVar9,param_4), iVar6 != 0)) {
      return iVar6;
    }
    lVar10 = local_res18 + 0x2d + *psVar9 + param_5;
    *(longlong *)(param_1 + 0x11a40) = lVar10;
    local_80 = (longlong *)(*(code *)*plVar8)(lVar10 + *psVar9 + param_5 + 0xc,param_1);
    *(longlong **)(param_1 + 0x11a38) = local_80;
    if (local_80 == (longlong *)0x0) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a48),param_1);
      pcVar15 = "Out of memory";
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      uVar11 = 0xfffffffa;
      goto LAB_180027e5b;
    }
    *(undefined1 *)local_80 = 0x32;
    local_80 = (longlong *)((longlong)local_80 + 1);
    FUN_1800190c0((longlong *)&local_80,local_res10,local_res18);
    FUN_1800190c0((longlong *)&local_80,"ssh-connection",0xe);
    FUN_1800190c0((longlong *)&local_80,"publickey",9);
    *(longlong **)(param_1 + 0x11a60) = local_80;
    *(undefined1 *)local_80 = 0;
    local_80 = (longlong *)((longlong)local_80 + 1);
    FUN_1800190c0((longlong *)&local_80,(void *)*plVar12,*psVar9);
    FUN_1800190c0((longlong *)&local_80,local_res20,param_5);
    *(undefined4 *)(param_1 + 0x11a20) = 2;
    plVar14 = local_58;
LAB_1800276da:
    puVar13 = (undefined8 *)(param_1 + 0x11a38);
    param_4 = (longlong *)0x0;
    uVar5 = FUN_180026710(param_1,(void *)*puVar13,*(size_t *)(param_1 + 0x11a40),(void *)0x0,0);
    if (uVar5 == 0xffffffdb) {
LAB_180027953:
      pcVar15 = "Would block";
      uVar11 = 0xffffffdb;
      goto LAB_180027e5b;
    }
    if (uVar5 != 0) {
      (**(code **)(param_1 + 0x18))(*puVar13,param_1);
      *puVar13 = 0;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a48),param_1);
      pcVar15 = "Unable to send userauth-publickey request";
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      uVar11 = 0xfffffff9;
      *(undefined4 *)(param_1 + 0x11a20) = 0;
      goto LAB_180027e5b;
    }
    *(undefined4 *)(param_1 + 0x11a20) = 3;
LAB_18002772d:
    puVar13 = (undefined8 *)(param_1 + 0x11a38);
    param_4 = (longlong *)(param_1 + 0x11a30);
    uVar7 = FUN_18001a320(param_1,(char *)local_res8,(undefined8 *)(param_1 + 0x11a28),param_4,0,
                          (void *)0x0,0,plVar14);
    if ((int)uVar7 == -0x25) goto LAB_180027953;
    if (((int)uVar7 != 0) || (*(longlong *)(param_1 + 0x11a30) == 0)) {
      (**(code **)(param_1 + 0x18))(*puVar13,param_1);
      *puVar13 = 0;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a48),param_1);
      pcVar15 = "Waiting for USERAUTH response";
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      *(undefined4 *)(param_1 + 0x11a20) = 0;
      goto LAB_180027e56;
    }
    puVar1 = (undefined8 *)(param_1 + 0x18);
    pcVar3 = (code *)*puVar1;
    cVar2 = **(char **)(param_1 + 0x11a28);
    if (cVar2 == '4') {
      (*pcVar3)(*(char **)(param_1 + 0x11a28),param_1);
      *(undefined8 *)(param_1 + 0x11a28) = 0;
      (*(code *)*puVar1)(*puVar13,param_1);
      *puVar13 = 0;
      (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x11a48),param_1);
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      *(undefined4 *)(param_1 + 0x11a20) = 0;
      return 0;
    }
    if (cVar2 == '3') {
      (*pcVar3)();
      *(undefined8 *)(param_1 + 0x11a28) = 0;
      (*(code *)*puVar1)(*puVar13,param_1);
      *puVar13 = 0;
      (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x11a48),param_1);
      pcVar15 = "Username/PublicKey combination invalid";
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      uVar11 = 0xffffffee;
      *(undefined4 *)(param_1 + 0x11a20) = 0;
      goto LAB_180027e5b;
    }
    (*pcVar3)();
    *(undefined8 *)(param_1 + 0x11a28) = 0;
    plVar8 = (longlong *)(param_1 + 8);
    **(undefined1 **)(param_1 + 0x11a60) = 1;
    *(undefined4 *)(param_1 + 0x11a20) = 4;
LAB_1800277fd:
    puVar13 = (undefined8 *)(param_1 + 0x18);
    psVar9 = (size_t *)(param_1 + 0x11a40);
    plVar14 = (longlong *)(param_1 + 0x11a38);
    local_68 = plVar14;
    local_60 = psVar9;
    local_58 = plVar8;
    plVar8 = (longlong *)
             (*(code *)*plVar8)((ulonglong)(*(int *)(param_1 + 0xa8) + 4) + *psVar9,param_1);
    if (plVar8 == (longlong *)0x0) {
      pcVar15 = "Unable to allocate memory for userauth-publickey signed data";
      uVar11 = 0xfffffffa;
      local_80 = (longlong *)0x0;
      goto LAB_180027e5b;
    }
    local_80 = plVar8;
    FUN_1800190c0((longlong *)&local_80,*(void **)(param_1 + 0xa0),
                  (ulonglong)*(uint *)(param_1 + 0xa8));
    memcpy(local_80,(void *)*plVar14,*psVar9);
    local_80 = (longlong *)((longlong)local_80 + *psVar9);
    param_4 = plVar8;
    iVar6 = (*(code *)param_6)(param_1,&local_70,&local_78,plVar8,
                               (longlong)local_80 - (longlong)plVar8,param_7);
    (*(code *)*puVar13)(plVar8,param_1);
    if (iVar6 == -0x25) goto LAB_180027953;
    if (iVar6 != -0x33) {
      if (iVar6 == 0) {
        uVar7 = CONCAT44(uStack_74,local_78);
        psVar9 = local_60;
        if (param_5 < uVar7) {
          lVar10 = *local_60 + *(longlong *)(param_1 + 0x11a50);
          if (*local_68 == 0) {
            lVar10 = (**(code **)(param_1 + 8))(uVar7 + 0xc + lVar10,param_1);
          }
          else {
            lVar10 = (**(code **)(param_1 + 0x10))(*local_68,uVar7 + 0xc + lVar10,param_1);
          }
          if (lVar10 == 0) {
            (**(code **)(param_1 + 0x18))(local_70,param_1);
            (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a38),param_1);
            *(undefined8 *)(param_1 + 0x11a38) = 0;
            (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a48),param_1);
            pcVar15 = "Failed allocating additional space for userauth-publickey packet";
            *(undefined8 *)(param_1 + 0x11a48) = 0;
            uVar11 = 0xfffffffa;
            *(undefined4 *)(param_1 + 0x11a20) = 0;
            goto LAB_180027e5b;
          }
          *(longlong *)(param_1 + 0x11a38) = lVar10;
          psVar9 = (size_t *)(param_1 + 0x11a40);
        }
        _MaxCount = *(size_t *)(param_1 + 0x11a50);
        pcVar15 = *(char **)(param_1 + 0x11a48);
        local_80 = (longlong *)(*psVar9 + *(longlong *)(param_1 + 0x11a38));
        *(undefined8 *)(param_1 + 0x11a60) = 0;
        iVar6 = strncmp("ssh-rsa-cert-v01@openssh.com",pcVar15,_MaxCount);
        if (iVar6 == 0) {
          _MaxCount = 7;
        }
        else {
          iVar6 = strncmp("ecdsa-sha2-nistp256-cert-v01@openssh.com",pcVar15,_MaxCount);
          if (((iVar6 == 0) ||
              (iVar6 = strncmp("ecdsa-sha2-nistp384-cert-v01@openssh.com",pcVar15,_MaxCount),
              iVar6 == 0)) ||
             (iVar6 = strncmp("ecdsa-sha2-nistp521-cert-v01@openssh.com",pcVar15,_MaxCount),
             iVar6 == 0)) {
            _MaxCount = 0x13;
          }
          else {
            iVar6 = strncmp("ssh-ed25519-cert-v01@openssh.com",pcVar15,_MaxCount);
            if (iVar6 == 0) {
              _MaxCount = 0xb;
            }
            else {
              iVar6 = strncmp("sk-ecdsa-sha2-nistp256-cert-v01@openssh.com",pcVar15,_MaxCount);
              if (iVar6 == 0) {
                _MaxCount = 0x22;
                builtin_strncpy(pcVar15,"sk-ecdsa-sha2-nistp256@openssh.com",0x22);
              }
              else {
                iVar6 = strncmp("sk-ssh-ed25519-cert-v01@openssh.com",pcVar15,_MaxCount);
                if (iVar6 == 0) {
                  _MaxCount = 0x1a;
                  builtin_strncpy(pcVar15,"sk-ssh-ed25519@openssh.com",0x1a);
                }
              }
            }
          }
        }
        *(size_t *)(param_1 + 0x11a50) = _MaxCount;
        iVar6 = strncmp(*(char **)(param_1 + 0x11a48),"sk-ecdsa-sha2-nistp256@openssh.com",_MaxCount
                       );
        if ((iVar6 == 0) ||
           (iVar6 = strncmp(*(char **)(param_1 + 0x11a48),"sk-ssh-ed25519@openssh.com",
                            *(size_t *)(param_1 + 0x11a50)), iVar6 == 0)) {
          FUN_180019150((longlong *)&local_80,local_78 + 4 + *(int *)(param_1 + 0x11a50));
          FUN_1800190c0((longlong *)&local_80,*(void **)(param_1 + 0x11a48),
                        *(ulonglong *)(param_1 + 0x11a50));
          memcpy(local_80,local_70,CONCAT44(uStack_74,local_78));
          local_80 = (longlong *)((longlong)local_80 + CONCAT44(uStack_74,local_78));
        }
        else {
          FUN_180019150((longlong *)&local_80,local_78 + 8 + *(int *)(param_1 + 0x11a50));
          FUN_1800190c0((longlong *)&local_80,*(void **)(param_1 + 0x11a48),
                        *(ulonglong *)(param_1 + 0x11a50));
          FUN_1800190c0((longlong *)&local_80,local_70,CONCAT44(uStack_74,local_78));
        }
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a48),param_1);
        *(undefined8 *)(param_1 + 0x11a48) = 0;
        (**(code **)(param_1 + 0x18))(local_70,param_1);
        *(longlong **)(param_1 + 0x11a58) = local_80;
        *(undefined4 *)(param_1 + 0x11a20) = 5;
        goto LAB_180027d50;
      }
LAB_180027a10:
      (*(code *)*puVar13)(*(undefined8 *)(param_1 + 0x11a48),param_1);
      plVar8 = local_68;
      *(undefined8 *)(param_1 + 0x11a48) = 0;
      (*(code *)*puVar13)(*local_68,param_1);
      pcVar15 = "Callback returned error";
      *plVar8 = 0;
LAB_180027e4f:
      *(undefined4 *)(param_1 + 0x11a20) = 0;
LAB_180027e56:
      uVar11 = 0xffffffed;
LAB_180027e5b:
      iVar6 = FUN_180018820(param_1,uVar11,(longlong)pcVar15,param_4);
      return iVar6;
    }
    if (bVar4) goto LAB_180027a10;
    (*(code *)*puVar13)(*(undefined8 *)(param_1 + 0x11a48),param_1);
    *(undefined8 *)(param_1 + 0x11a48) = 0;
    (*(code *)*puVar13)(*plVar14,param_1);
    *plVar14 = 0;
    *(undefined4 *)(param_1 + 0x11a20) = 0;
    bVar4 = true;
    plVar8 = local_58;
  } while( true );
}




undefined4
FUN_180027e80(longlong param_1,longlong *param_2,undefined8 *param_3,char *param_4,size_t param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  char *_Str1;
  char *pcVar4;
  longlong *plVar5;
  
  pcVar4 = param_4;
  ppuVar3 = FUN_18000ec60();
  *param_2 = 0;
  *param_3 = 0;
  plVar5 = (longlong *)*ppuVar3;
  if ((plVar5 != (longlong *)0x0) && (_Str1 = (char *)*plVar5, _Str1 != (char *)0x0)) {
    while ((plVar5[3] == 0 || (iVar1 = strncmp(_Str1,param_4,param_5), iVar1 != 0))) {
      plVar5 = (longlong *)ppuVar3[1];
      ppuVar3 = ppuVar3 + 1;
      if ((plVar5 == (longlong *)0x0) || (_Str1 = (char *)*plVar5, _Str1 == (char *)0x0))
      goto LAB_180027f0c;
    }
    *param_2 = (longlong)*ppuVar3;
  }
LAB_180027f0c:
  if (*param_2 == 0) {
    uVar2 = FUN_180018820(param_1,0xffffffef,0x180034220,pcVar4);
    return uVar2;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_1,param_6,param_7);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_180018820(param_1,0xfffffff0,0x180034278,param_3);
  return uVar2;
}




undefined4
FUN_180027f80(longlong param_1,undefined8 *param_2,longlong *param_3,FILE *param_4,longlong *param_5
             ,char *param_6)

{
  undefined4 uVar1;
  int iVar2;
  FILE *_File;
  size_t sVar3;
  byte *_DstBuf;
  void *pvVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong _Count;
  byte *_Buf;
  FILE *pFVar8;
  longlong lVar9;
  char local_48 [8];
  char *local_40;
  longlong local_38 [2];
  
  _Count = 0;
  pFVar8 = param_4;
  _File = fopen(param_6,"rt");
  if (_File == (FILE *)0x0) {
    uVar1 = FUN_180018820(param_1,0xfffffff0,0x1800341d8,pFVar8);
  }
  else {
    iVar2 = feof(_File);
    while ((((iVar2 == 0 && (pFVar8 = _File, sVar3 = fread(local_48,1,1,_File), sVar3 == 1)) &&
            (local_48[0] != '\r')) && (local_48[0] != '\n'))) {
      _Count = _Count + 1;
      iVar2 = feof(_File);
    }
    rewind(_File);
    if (_Count < 2) {
      fclose(_File);
      uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034130,pFVar8);
    }
    else {
      _DstBuf = (byte *)(**(code **)(param_1 + 8))(_Count,param_1);
      if (_DstBuf == (byte *)0x0) {
        fclose(_File);
        uVar1 = FUN_180018820(param_1,0xfffffffa,0x180034150,pFVar8);
      }
      else {
        pFVar8 = _File;
        sVar3 = fread(_DstBuf,1,_Count,_File);
        if (sVar3 == _Count) {
          fclose(_File);
          do {
            iVar2 = isspace((uint)_DstBuf[_Count - 1]);
            if (iVar2 == 0) {
              pvVar4 = memchr(_DstBuf,0x20,_Count);
              if (pvVar4 == (void *)0x0) {
                (**(code **)(param_1 + 0x18))(_DstBuf,param_1);
                uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034198,pFVar8);
                return uVar1;
              }
              _Buf = (byte *)((longlong)pvVar4 + 1);
              lVar9 = (longlong)_Buf - (longlong)_DstBuf;
              lVar5 = lVar9;
              if (_Buf <= _DstBuf) {
                lVar5 = 0;
              }
              pbVar6 = (byte *)memchr(_Buf,0x20,_Count - lVar5);
              if (pbVar6 == (byte *)0x0) {
                pbVar6 = _DstBuf + _Count;
              }
              uVar7 = FUN_180018350(param_1,(longlong *)&local_40,local_38,_Buf,
                                    (longlong)pbVar6 - (longlong)_Buf);
              if ((int)uVar7 != 0) {
                (**(code **)(param_1 + 0x18))(_DstBuf,param_1);
                uVar1 = FUN_180018820(param_1,0xfffffff0,0x1800341b0,_Buf);
                return uVar1;
              }
              *param_2 = _DstBuf;
              *param_3 = lVar9 + -1;
              param_4->_ptr = local_40;
              *param_5 = local_38[0];
              return 0;
            }
            _Count = _Count - 1;
          } while (_Count != 0);
          (**(code **)(param_1 + 0x18))(_DstBuf,param_1);
          uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034180,pFVar8);
        }
        else {
          (**(code **)(param_1 + 0x18))(_DstBuf,param_1);
          fclose(_File);
          uVar1 = FUN_180018820(param_1,0xfffffff0,0x1800341f8,pFVar8);
        }
      }
    }
  }
  return uVar1;
}




int FUN_180028220(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int unaff_EDI;
  undefined8 *local_38;
  undefined8 local_30;
  char *pcStack_28;
  ulonglong local_20;
  char *pcStack_18;
  ulonglong local_10;
  
  local_30 = 0;
  pcStack_28 = (char *)0x0;
  puVar1 = (undefined4 *)*param_6;
  local_20 = 0;
  pcStack_18 = (char *)0x0;
  local_10 = 0;
  if (*(longlong *)(puVar1 + 6) != 0) {
    iVar3 = (**(code **)(puVar1 + 8))
                      (param_1,&local_30,param_4,param_5,*puVar1,*(undefined1 *)(puVar1 + 1),
                       *(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4),
                       *(longlong *)(puVar1 + 6),*(undefined8 *)(puVar1 + 10));
    if (((iVar3 == 0) && (local_20 != 0)) && (pcStack_28 != (char *)0x0)) {
      param_6 = (undefined8 *)0x0;
      if ((local_10 == 0) || (pcStack_18 == (char *)0x0)) {
        *param_3 = local_20 + 9;
        puVar4 = (undefined8 *)(**(code **)(param_1 + 8))(local_20 + 9,param_1);
        *param_2 = (longlong)puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          param_6 = puVar4;
          FUN_1800190c0((longlong *)&param_6,pcStack_28,local_20);
        }
      }
      else {
        *param_3 = local_20 + local_10 + 0x13;
        puVar4 = (undefined8 *)(**(code **)(param_1 + 8))();
        *param_2 = (longlong)puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          param_6 = puVar4;
          local_38 = puVar4;
          FUN_180019150((longlong *)&param_6,0);
          FUN_180018fe0((longlong *)&param_6,pcStack_28,local_20);
          FUN_180018fe0((longlong *)&param_6,pcStack_18,local_10);
          lVar2 = *param_2;
          *param_3 = (longlong)param_6 - lVar2;
          FUN_180019150((longlong *)&local_38,(int)((longlong)param_6 - lVar2) + -4);
        }
      }
      if (param_6 != (undefined8 *)0x0) {
        *(undefined1 *)param_6 = (undefined1)local_30;
        param_6 = (undefined8 *)((longlong)param_6 + 1);
        FUN_180019150((longlong *)&param_6,local_30._4_4_);
        *param_3 = (longlong)param_6 - *param_2;
      }
      (**(code **)(param_1 + 0x18))(pcStack_28,param_1);
      if (pcStack_18 != (char *)0x0) {
        (**(code **)(param_1 + 0x18))(pcStack_18,param_1);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return unaff_EDI;
}




uint libssh2_userauth_authenticated(longlong param_1)

{
                    /* 0x28400  125  libssh2_userauth_authenticated */
  return *(uint *)(param_1 + 0x80) >> 2 & 1;
}




void libssh2_userauth_hostbased_fromfile_ex
               (ulonglong param_1,void *param_2,ulonglong param_3,FILE *param_4,char *param_5,
               undefined1 *param_6,void *param_7,uint param_8,char *param_9,uint param_10)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  FILE *pFVar4;
  
                    /* 0x28450  127  libssh2_userauth_hostbased_fromfile_ex */
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar3 = param_3 & 0xffffffff;
    pFVar4 = param_4;
    iVar1 = FUN_180029460(param_1,param_2,param_3 & 0xffffffff,param_4,param_5,param_6,param_7,
                          (ulonglong)param_8,param_9,(ulonglong)param_10);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == 0) break;
    iVar1 = FUN_18001e940(param_1,_Var2,uVar3,pFVar4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




void libssh2_userauth_keyboard_interactive_ex
               (ulonglong param_1,void *param_2,uint param_3,undefined *param_4)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  undefined *puVar4;
  
                    /* 0x28530  128  libssh2_userauth_keyboard_interactive_ex */
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar3 = (ulonglong)param_3;
    puVar4 = param_4;
    iVar1 = FUN_1800299f0(param_1,param_2,param_3,param_4);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)(param_1 + 0xac) == 0) break;
    iVar1 = FUN_18001e940(param_1,_Var2,uVar3,puVar4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




longlong libssh2_userauth_list(ulonglong param_1,void *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  ulonglong uVar4;
  
                    /* 0x285b0  129  libssh2_userauth_list */
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar4 = (ulonglong)param_3;
    lVar3 = FUN_180029fa0(param_1,param_2,param_3,param_4);
    if (*(int *)(param_1 + 0xac) == 0) {
      return lVar3;
    }
    if (lVar3 != 0) {
      return lVar3;
    }
    iVar1 = libssh2_session_last_errno(param_1);
    if (iVar1 != -0x25) {
      return 0;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,uVar4,param_4);
  } while (iVar1 == 0);
  return 0;
}




void libssh2_userauth_password_ex
               (longlong *param_1,void *param_2,uint param_3,longlong *param_4,uint param_5,
               undefined *param_6)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  longlong *plVar4;
  
                    /* 0x28640  130  libssh2_userauth_password_ex */
  _Var2 = _time64((__time64_t *)0x0);
  while( true ) {
    uVar3 = (ulonglong)param_3;
    plVar4 = param_4;
    iVar1 = FUN_18002a3a0(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 != -0x25) {
      return;
    }
    if (*(int *)((longlong)param_1 + 0xac) == 0) break;
    iVar1 = FUN_18001e940((ulonglong)param_1,_Var2,uVar3,plVar4);
    if (iVar1 != 0) {
      return;
    }
  }
  return;
}




int libssh2_userauth_publickey
              (ulonglong param_1,void *param_2,longlong *param_3,ulonglong param_4,
              undefined *param_5,undefined8 param_6)

{
  int iVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  longlong *plVar4;
  
                    /* 0x286e0  131  libssh2_userauth_publickey */
  if (param_1 == 0) {
    return -0x27;
  }
  _Var2 = _time64((__time64_t *)0x0);
  do {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)param_2 + uVar3) != '\0');
    plVar4 = param_3;
    iVar1 = FUN_1800274f0(param_1,param_2,uVar3,param_3,param_4,param_5,param_6);
    if (iVar1 != -0x25) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0xac) == 0) {
      return -0x25;
    }
    iVar1 = FUN_18001e940(param_1,_Var2,uVar3,plVar4);
  } while (iVar1 == 0);
  return iVar1;
}




ulonglong libssh2_userauth_publickey_fromfile_ex
                    (ulonglong param_1,void *param_2,ulonglong param_3,char *param_4,char *param_5,
                    FILE *param_6)

{
  char *pcVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  FILE *pFVar5;
  longlong **pplVar6;
  FILE *pFVar7;
  char **local_res8;
  char *local_38;
  FILE *local_30;
  
                    /* 0x287c0  132  libssh2_userauth_publickey_fromfile_ex */
  pFVar5 = (FILE *)&DAT_18002ed17;
  if (param_6 != (FILE *)0x0) {
    pFVar5 = param_6;
  }
  _Var3 = _time64((__time64_t *)0x0);
  pcVar1 = param_5;
  do {
    local_res8 = &local_38;
    param_6 = (FILE *)0x0;
    param_5 = (char *)0x0;
    local_38 = pcVar1;
    local_30 = pFVar5;
    if (*(int *)(param_1 + 0x11a20) == 0) {
      pplVar6 = (longlong **)(param_1 + 0x11a50);
      pFVar7 = (FILE *)&param_6;
      if (param_4 == (char *)0x0) {
        uVar2 = FUN_18000a040(param_1,(longlong **)(param_1 + 0x11a48),pplVar6,(longlong *)pFVar7,
                              (longlong *)&param_5,pcVar1,(undefined1 *)pFVar5);
      }
      else {
        uVar2 = FUN_180027f80(param_1,(longlong **)(param_1 + 0x11a48),(longlong *)pplVar6,pFVar7,
                              (longlong *)&param_5,param_4);
      }
      if (uVar2 == 0) goto LAB_180028894;
    }
    else {
LAB_180028894:
      pplVar6 = (longlong **)(param_3 & 0xffffffff);
      pFVar7 = param_6;
      uVar2 = FUN_1800274f0(param_1,param_2,param_3 & 0xffffffff,(longlong *)param_6,
                            (ulonglong)param_5,FUN_180029120,&local_res8);
      if (param_6 != (FILE *)0x0) {
        (**(code **)(param_1 + 0x18))(param_6,param_1);
      }
    }
    if ((uVar2 != 0xffffffdb) || (*(int *)(param_1 + 0xac) == 0)) {
      return (ulonglong)uVar2;
    }
    uVar4 = FUN_18001e940(param_1,_Var3,pplVar6,pFVar7);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  } while( true );
}




ulonglong libssh2_userauth_publickey_frommemory
                    (ulonglong param_1,void *param_2,size_t *param_3,void *param_4,ulonglong param_5
                    ,ulonglong param_6,size_t *param_7,ulonglong *param_8)

{
  ulonglong uVar1;
  size_t *psVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong **ppuVar7;
  ulonglong *puVar8;
  ulonglong *local_res8;
  void *local_res10;
  size_t *local_res18;
  ulonglong local_48;
  ulonglong *local_40;
  
                    /* 0x28930  133  libssh2_userauth_publickey_frommemory */
  puVar8 = (ulonglong *)&DAT_18002ed17;
  if (param_8 != (ulonglong *)0x0) {
    puVar8 = param_8;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  _Var4 = _time64((__time64_t *)0x0);
  psVar2 = param_7;
  uVar1 = param_6;
  do {
    ppuVar7 = (ulonglong **)0x0;
    local_48 = uVar1;
    param_8 = (ulonglong *)0x0;
    local_res8 = &local_48;
    param_6 = 0;
    local_40 = puVar8;
    if (*(int *)(param_1 + 0x11a20) == 0) {
      if ((param_5 == 0) || (param_4 == (void *)0x0)) {
        if ((psVar2 != (size_t *)0x0) && (uVar1 != 0)) {
          pcVar6 = (char *)(param_1 + 0x11a50);
          ppuVar7 = &param_8;
          uVar5 = FUN_18000a220(param_1,(size_t *)(param_1 + 0x11a48),(size_t *)pcVar6,
                                (longlong *)ppuVar7,&param_6,uVar1,psVar2,(undefined1 *)puVar8);
          uVar3 = (uint)uVar5;
          goto joined_r0x000180028a62;
        }
        pcVar6 = "Invalid data in public and private key.";
        uVar3 = FUN_180018820(param_1,0xfffffff0,0x1800345d0,0);
      }
      else {
        pcVar6 = (char *)(param_1 + 0x11a50);
        ppuVar7 = &param_8;
        uVar3 = FUN_180028e00(param_1,(undefined8 *)(param_1 + 0x11a48),(undefined8 *)pcVar6,
                              (ulonglong *)ppuVar7,(longlong *)&param_6,param_4,param_5);
joined_r0x000180028a62:
        if (uVar3 == 0) goto LAB_180028a74;
      }
    }
    else {
LAB_180028a74:
      pcVar6 = (char *)local_res18;
      ppuVar7 = (ulonglong **)param_8;
      uVar3 = FUN_1800274f0(param_1,local_res10,(ulonglong)local_res18,(longlong *)param_8,param_6,
                            FUN_1800292b0,&local_res8);
      if (param_8 != (ulonglong *)0x0) {
        (**(code **)(param_1 + 0x18))(param_8,param_1);
      }
    }
    if ((uVar3 != 0xffffffdb) || (*(int *)(param_1 + 0xac) == 0)) {
      return (ulonglong)uVar3;
    }
    uVar5 = FUN_18001e940(param_1,_Var4,pcVar6,ppuVar7);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  } while( true );
}




int libssh2_userauth_publickey_sk
              (ulonglong param_1,void *param_2,ulonglong param_3,longlong **param_4,
              ulonglong param_5,longlong param_6,size_t *param_7,undefined1 *param_8,
              undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong *plVar3;
  char *pcVar4;
  longlong **pplVar5;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  size_t local_78;
  size_t local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* 0x28b20  134  libssh2_userauth_publickey_sk */
  local_98 = 0;
  local_78 = 0;
  local_90 = (longlong *)0x0;
  local_70 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_60 = 0;
  local_48 = 0;
  local_68 = &local_60;
  local_40 = param_9;
  local_38 = param_10;
  local_58 = 0;
  lStack_50 = 0;
  if ((param_7 == (size_t *)0x0) || (param_6 == 0)) {
    pcVar4 = "Invalid data in public and private key.";
LAB_180028dd9:
    iVar1 = FUN_180018820(param_1,0xfffffff0,(longlong)pcVar4,param_4);
    return iVar1;
  }
  pplVar5 = &local_90;
  uVar2 = FUN_18000b9d0(param_1,&local_98,&local_78,(longlong *)pplVar5,&local_70,
                        (undefined4 *)&local_60,(undefined1 *)((longlong)&local_60 + 4),&local_58,
                        &lStack_50,&local_48,param_6,param_7,param_8);
  if ((int)uVar2 != 0) {
    pcVar4 = "Unable to extract public key from private key.";
    param_4 = pplVar5;
    goto LAB_180028dd9;
  }
  if ((param_5 == 0) || (param_4 == (longlong **)0x0)) {
    *(longlong *)(param_1 + 0x11a48) = local_98;
    *(size_t *)(param_1 + 0x11a50) = local_78;
    plVar3 = local_90;
    uVar2 = local_70;
  }
  else {
    if (local_98 != 0) {
      (**(code **)(param_1 + 0x18))(local_98,param_1);
    }
    iVar1 = strncmp((char *)param_4,"sk-ecdsa-sha2-nistp256-cert-v01@openssh.com",0x2b);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x11a50) = 0x2b;
      _Dst = (void *)(**(code **)(param_1 + 8))(0x2b,param_1);
      pcVar4 = "sk-ecdsa-sha2-nistp256-cert-v01@openssh.com";
LAB_180028cae:
      *(void **)(param_1 + 0x11a48) = _Dst;
      memcpy(_Dst,pcVar4,*(size_t *)(param_1 + 0x11a50));
    }
    else {
      iVar1 = strncmp((char *)param_4,"sk-ssh-ed25519-cert-v01@openssh.com",0x23);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x11a50) = 0x23;
        _Dst = (void *)(**(code **)(param_1 + 8))(0x23,param_1);
        pcVar4 = "sk-ssh-ed25519-cert-v01@openssh.com";
        goto LAB_180028cae;
      }
    }
    iVar1 = FUN_180028e00(param_1,(undefined8 *)(param_1 + 0x11a48),
                          (undefined8 *)(param_1 + 0x11a50),(ulonglong *)&local_88,
                          (longlong *)&local_80,param_4,param_5);
    plVar3 = local_88;
    uVar2 = local_80;
    if (iVar1 != 0) goto LAB_180028d93;
  }
  iVar1 = FUN_1800274f0(param_1,param_2,param_3,plVar3,uVar2,FUN_180028220,&local_68);
  while (iVar1 == -0x25) {
    iVar1 = FUN_1800274f0(param_1,param_2,param_3,plVar3,uVar2,FUN_180028220,&local_68);
  }
LAB_180028d93:
  if (local_90 != (longlong *)0x0) {
    (**(code **)(param_1 + 0x18))(local_90,param_1);
  }
  if (local_58 != 0) {
    (**(code **)(param_1 + 0x18))(local_58,param_1);
  }
  return iVar1;
}




undefined4
FUN_180028e00(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
             longlong *param_5,void *param_6,ulonglong param_7)

{
  undefined4 uVar1;
  int iVar2;
  void *_Dst;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong _Size;
  byte *_Buf;
  ulonglong *puVar5;
  byte *pbVar6;
  longlong local_28 [2];
  
  _Size = param_7;
  if (param_7 < 2) {
    uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034130,param_4);
  }
  else {
    puVar5 = param_4;
    _Dst = (void *)(**(code **)(param_1 + 8))(param_7,param_1);
    if (_Dst == (void *)0x0) {
      uVar1 = FUN_180018820(param_1,0xfffffffa,0x180034150,puVar5);
    }
    else {
      memcpy(_Dst,param_6,_Size);
      do {
        iVar2 = isspace((uint)*(byte *)((longlong)_Dst + (_Size - 1)));
        if (iVar2 == 0) {
          pvVar3 = memchr(_Dst,0x20,_Size);
          if (pvVar3 == (void *)0x0) {
            (**(code **)(param_1 + 0x18))(_Dst,param_1);
            uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034198,puVar5);
            return uVar1;
          }
          _Buf = (byte *)((longlong)pvVar3 + 1);
          pvVar3 = memchr(_Buf,0x20,(_Size - (longlong)_Buf) + (longlong)_Dst);
          if (pvVar3 == (void *)0x0) {
            pvVar3 = (void *)(_Size + (longlong)_Dst);
          }
          pbVar6 = _Buf;
          uVar4 = FUN_180018350(param_1,(longlong *)&param_7,local_28,_Buf,
                                (longlong)pvVar3 - (longlong)_Buf);
          if ((int)uVar4 != 0) {
            (**(code **)(param_1 + 0x18))(_Dst,param_1);
            uVar1 = FUN_180018820(param_1,0xfffffff0,0x1800341b0,pbVar6);
            return uVar1;
          }
          *param_2 = _Dst;
          *param_3 = _Buf + (-1 - (longlong)_Dst);
          *param_4 = param_7;
          *param_5 = local_28[0];
          return 0;
        }
        _Size = _Size - 1;
      } while (_Size != 0);
      (**(code **)(param_1 + 0x18))(_Dst,param_1);
      uVar1 = FUN_180018820(param_1,0xfffffff0,0x180034180,puVar5);
    }
  }
  return uVar1;
}




size_t FUN_180028fc0(char *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = strncmp("ssh-rsa-cert-v01@openssh.com",param_1,param_2);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = strncmp("ecdsa-sha2-nistp256-cert-v01@openssh.com",param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = strncmp("ecdsa-sha2-nistp384-cert-v01@openssh.com",param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = strncmp("ecdsa-sha2-nistp521-cert-v01@openssh.com",param_1,param_2);
      if (iVar1 != 0) {
        iVar1 = strncmp("ssh-ed25519-cert-v01@openssh.com",param_1,param_2);
        if (iVar1 == 0) {
          return 0xb;
        }
        iVar1 = strncmp("sk-ecdsa-sha2-nistp256-cert-v01@openssh.com",param_1,param_2);
        if (iVar1 == 0) {
          builtin_strncpy(param_1,"sk-ecdsa-sha2-nistp256@openssh.com",0x22);
          return 0x22;
        }
        iVar1 = strncmp("sk-ssh-ed25519-cert-v01@openssh.com",param_1,param_2);
        if (iVar1 == 0) {
          builtin_strncpy(param_1,"sk-ssh-ed25519@openssh.com",0x1a);
          return 0x1a;
        }
        return param_2;
      }
    }
  }
  return 0x13;
}




int FUN_180029120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,longlong *param_6)

{
  size_t _MaxCount;
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  char *_Str1;
  undefined4 uVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  longlong **pplVar11;
  undefined8 local_48;
  undefined8 *local_40;
  
  _MaxCount = *(size_t *)(param_1 + 0x11a50);
  pcVar10 = *(char **)(param_1 + 0x11a48);
  uVar1 = ((undefined8 *)*param_6)[1];
  uVar2 = *(undefined8 *)*param_6;
  pplVar11 = (longlong **)param_4;
  ppuVar5 = FUN_18000ec60();
  puVar8 = (undefined *)0x0;
  param_6 = (longlong *)0x0;
  plVar7 = (longlong *)*ppuVar5;
  puVar9 = puVar8;
  if ((plVar7 != (longlong *)0x0) && (_Str1 = (char *)*plVar7, _Str1 != (char *)0x0)) {
    do {
      if (plVar7[3] != 0) {
        iVar4 = strncmp(_Str1,pcVar10,_MaxCount);
        if (iVar4 == 0) {
          puVar9 = *ppuVar5;
          if (puVar9 != (undefined *)0x0) {
            pplVar11 = &param_6;
            iVar4 = (**(code **)(puVar9 + 0x18))(param_1,uVar2,uVar1);
            if (iVar4 == 0) goto LAB_1800291d4;
            uVar6 = 0xfffffff0;
            pcVar10 = "Unable to initialize private key from file";
            goto LAB_1800291c4;
          }
          break;
        }
      }
      plVar7 = (longlong *)ppuVar5[1];
      ppuVar5 = ppuVar5 + 1;
      puVar9 = puVar8;
      if ((plVar7 == (longlong *)0x0) ||
         (_Str1 = (char *)*plVar7, puVar9 = (undefined *)0x0, _Str1 == (char *)0x0)) break;
    } while( true );
  }
  uVar6 = 0xffffffef;
  pcVar10 = "No handler for specified private key";
LAB_1800291c4:
  iVar4 = FUN_180018820(param_1,uVar6,(longlong)pcVar10,pplVar11);
  if (iVar4 == 0) {
LAB_1800291d4:
    local_48 = param_5;
    local_40 = param_4;
    iVar4 = (**(code **)(puVar9 + 0x30))(param_1,param_2,param_3,1,&local_48,&param_6);
    pcVar3 = *(code **)(puVar9 + 0x40);
    if (iVar4 == 0) {
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1,&param_6);
      }
      iVar4 = 0;
    }
    else {
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1,&param_6);
      }
      iVar4 = -1;
    }
  }
  return iVar4;
}




int FUN_1800292b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  size_t _MaxCount;
  code *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  char *_Str1;
  undefined4 uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_48;
  longlong local_40;
  
  lVar7 = -1;
  lVar12 = ((longlong *)*param_6)[1];
  lVar1 = *(longlong *)*param_6;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(lVar1 + lVar7) != '\0');
  _MaxCount = *(size_t *)(param_1 + 0x11a50);
  pcVar10 = *(char **)(param_1 + 0x11a48);
  lVar11 = param_4;
  ppuVar4 = FUN_18000ec60();
  puVar8 = (undefined *)0x0;
  param_6 = (longlong *)0x0;
  plVar5 = (longlong *)*ppuVar4;
  puVar9 = puVar8;
  if ((plVar5 != (longlong *)0x0) && (_Str1 = (char *)*plVar5, _Str1 != (char *)0x0)) {
    while ((plVar5[4] == 0 || (iVar3 = strncmp(_Str1,pcVar10,_MaxCount), iVar3 != 0))) {
      plVar5 = (longlong *)ppuVar4[1];
      ppuVar4 = ppuVar4 + 1;
      puVar9 = puVar8;
      if ((plVar5 == (longlong *)0x0) ||
         (_Str1 = (char *)*plVar5, puVar9 = (undefined *)0x0, _Str1 == (char *)0x0))
      goto LAB_18002935f;
    }
    puVar9 = *ppuVar4;
    if (puVar9 != (undefined *)0x0) {
      iVar3 = (**(code **)(puVar9 + 0x20))(param_1,lVar1,lVar7,lVar12,&param_6);
      if (iVar3 == 0) goto LAB_18002937b;
      uVar6 = 0xfffffff0;
      pcVar10 = "Unable to initialize private key from memory";
      goto LAB_18002936b;
    }
  }
LAB_18002935f:
  lVar12 = lVar11;
  uVar6 = 0xffffffef;
  pcVar10 = "No handler for specified private key";
LAB_18002936b:
  iVar3 = FUN_180018820(param_1,uVar6,(longlong)pcVar10,lVar12);
  if (iVar3 == 0) {
LAB_18002937b:
    local_48 = param_5;
    local_40 = param_4;
    iVar3 = (**(code **)(puVar9 + 0x30))(param_1,param_2,param_3,1,&local_48,&param_6);
    pcVar2 = *(code **)(puVar9 + 0x40);
    if (iVar3 == 0) {
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,&param_6);
      }
      iVar3 = 0;
    }
    else {
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,&param_6);
      }
      iVar3 = -1;
    }
  }
  return iVar3;
}




void FUN_180029460(ulonglong param_1,void *param_2,ulonglong param_3,FILE *param_4,char *param_5,
                  undefined1 *param_6,void *param_7,ulonglong param_8,char *param_9,
                  ulonglong param_10)

{
  longlong **pplVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  char *pcVar11;
  FILE *pFVar12;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [24];
  ulonglong local_c0;
  char *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_18003b280 ^ (ulonglong)auStackY_118;
  local_a0 = param_7;
  local_d8._16_8_ = param_9;
  iVar5 = *(int *)(param_1 + 0x119d8);
  local_a8 = param_2;
  if (iVar5 == 0) {
    local_d8._0_8_ = (char *)0x0;
    *(undefined8 *)(param_1 + 0x11a18) = 0;
    pplVar1 = (longlong **)(param_1 + 0x11a00);
    local_b8 = (char *)0x0;
    local_d8._8_8_ = 0;
    local_c0 = 0;
    if (param_4 == (FILE *)0x0) {
      param_4 = (FILE *)local_d8;
      iVar5 = FUN_18000a040(param_1,pplVar1,(longlong **)(param_1 + 0x11a08),(longlong *)param_4,
                            (longlong *)(local_d8 + 8),param_5,param_6);
    }
    else {
      pFVar12 = (FILE *)local_d8;
      iVar5 = FUN_180027f80(param_1,pplVar1,(longlong *)(param_1 + 0x11a08),pFVar12,
                            (longlong *)(local_d8 + 8),(char *)param_4);
      param_4 = pFVar12;
    }
    if (iVar5 != 0) goto LAB_1800299cf;
    lVar7 = *(longlong *)(param_1 + 0x11a08) + param_3 + local_d8._8_8_ + param_8 + param_10 + 0x34;
    *(longlong *)(param_1 + 0x119f8) = lVar7;
    puVar8 = (undefined1 *)
             (**(code **)(param_1 + 8))
                       (local_d8._8_8_ + 0xc + lVar7 + *(longlong *)(param_1 + 0x11a08),param_1);
    *(undefined1 **)(param_1 + 0x119f0) = puVar8;
    plVar2 = (longlong *)(param_1 + 0x11a10);
    *plVar2 = (longlong)puVar8;
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = 0x32;
      *plVar2 = *plVar2 + 1;
      FUN_1800190c0(plVar2,local_a8,param_3);
      FUN_1800190c0(plVar2,"ssh-connection",0xe);
      FUN_1800190c0(plVar2,"hostbased",9);
      FUN_1800190c0(plVar2,*pplVar1,*(ulonglong *)(param_1 + 0x11a08));
      FUN_1800190c0(plVar2,(void *)local_d8._0_8_,local_d8._8_8_);
      (**(code **)(param_1 + 0x18))(local_d8._0_8_,param_1);
      FUN_1800190c0(plVar2,local_a0,param_8);
      FUN_1800190c0(plVar2,(void *)local_d8._16_8_,param_10);
      param_4 = (FILE *)*pplVar1;
      iVar5 = FUN_180027e80(param_1,(longlong *)(local_d8 + 0x10),&local_b0,(char *)param_4,
                            *(size_t *)(param_1 + 0x11a08),param_5,param_6);
      if (iVar5 != 0) {
        (**(code **)(param_1 + 0x18))(*pplVar1,param_1);
        *pplVar1 = (longlong *)0x0;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x119f0),param_1);
        *(undefined8 *)(param_1 + 0x119f0) = 0;
        goto LAB_1800299cf;
      }
      FUN_180018d00(local_58,*(undefined4 *)(param_1 + 0xa8));
      uVar4 = local_d8._16_8_;
      local_90 = local_58;
      local_80 = *(undefined8 *)(param_1 + 0xa0);
      local_88 = (ulonglong)*(uint *)(param_1 + 0xa8);
      local_70 = *(undefined8 *)(param_1 + 0x119f0);
      local_78 = *(undefined8 *)(param_1 + 0x119f8);
      local_98 = 4;
      if ((char *)local_d8._16_8_ != (char *)0x0) {
        if (*(code **)(local_d8._16_8_ + 0x30) != (code *)0x0) {
          param_4 = (FILE *)0x3;
          iVar5 = (**(code **)(local_d8._16_8_ + 0x30))(param_1,&local_b8,&local_c0);
          if (iVar5 != 0) {
            (**(code **)(param_1 + 0x18))(*pplVar1,param_1);
            *pplVar1 = (longlong *)0x0;
            (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x119f0),param_1);
            *(undefined8 *)(param_1 + 0x119f0) = 0;
            pcVar3 = *(code **)(uVar4 + 0x40);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(param_1,&local_b0);
            }
            goto LAB_1800299cf;
          }
        }
        pcVar3 = *(code **)(uVar4 + 0x40);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(param_1,&local_b0);
        }
      }
      if ((ulonglong)local_d8._8_8_ < local_c0) {
        lVar7 = *(longlong *)(param_1 + 0x11a08) + *(longlong *)(param_1 + 0x119f8);
        if (*(longlong *)(param_1 + 0x119f0) == 0) {
          lVar7 = (**(code **)(param_1 + 8))(local_c0 + 0xc + lVar7,param_1);
        }
        else {
          lVar7 = (**(code **)(param_1 + 0x10))
                            (*(longlong *)(param_1 + 0x119f0),local_c0 + 0xc + lVar7,param_1);
        }
        if (lVar7 == 0) {
          (**(code **)(param_1 + 0x18))(local_b8,param_1);
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x119f0),param_1);
          *(undefined8 *)(param_1 + 0x119f0) = 0;
          (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a00),param_1);
          pcVar11 = "Failed allocating additional space for userauth-hostbased packet";
          *(undefined8 *)(param_1 + 0x11a00) = 0;
          uVar10 = 0xfffffffa;
          goto LAB_1800299c7;
        }
        *(longlong *)(param_1 + 0x119f0) = lVar7;
      }
      *(longlong *)(param_1 + 0x11a10) =
           *(longlong *)(param_1 + 0x119f8) + *(longlong *)(param_1 + 0x119f0);
      FUN_180019150((longlong *)(param_1 + 0x11a10),(int)local_c0 + *(int *)(param_1 + 0x11a08) + 8)
      ;
      FUN_1800190c0((longlong *)(param_1 + 0x11a10),*(void **)(param_1 + 0x11a00),
                    *(ulonglong *)(param_1 + 0x11a08));
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a00),param_1);
      *(undefined8 *)(param_1 + 0x11a00) = 0;
      FUN_1800190c0((longlong *)(param_1 + 0x11a10),local_b8,local_c0);
      (**(code **)(param_1 + 0x18))(local_b8,param_1);
      *(undefined4 *)(param_1 + 0x119d8) = 2;
      goto LAB_1800298a5;
    }
    (**(code **)(param_1 + 0x18))(*pplVar1,param_1);
    *pplVar1 = (longlong *)0x0;
    (**(code **)(param_1 + 0x18))(local_d8._0_8_,param_1);
    pcVar11 = "Out of memory";
    uVar10 = 0xfffffffa;
  }
  else if (iVar5 == 2) {
LAB_1800298a5:
    param_4 = (FILE *)0x0;
    uVar6 = FUN_180026710(param_1,*(void **)(param_1 + 0x119f0),
                          *(longlong *)(param_1 + 0x11a10) - (longlong)*(void **)(param_1 + 0x119f0)
                          ,(void *)0x0,0);
    if (uVar6 == 0xffffffdb) {
LAB_1800298cd:
      pcVar11 = "Would block";
      uVar10 = 0xffffffdb;
    }
    else {
      if (uVar6 == 0) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x119f0),param_1);
        *(undefined8 *)(param_1 + 0x119f0) = 0;
        *(undefined4 *)(param_1 + 0x119d8) = 3;
        goto LAB_18002992a;
      }
      (**(code **)(param_1 + 0x18))();
      pcVar11 = "Unable to send userauth-hostbased request";
      *(undefined8 *)(param_1 + 0x119f0) = 0;
      uVar10 = 0xfffffff9;
      *(undefined4 *)(param_1 + 0x119d8) = 0;
    }
  }
  else {
    if (iVar5 == 3) {
LAB_18002992a:
      param_4 = (FILE *)(local_d8 + 0x10);
      uVar9 = FUN_18001a320(param_1,"43",(undefined8 *)(param_1 + 0x119e0),(longlong *)param_4,0,
                            (void *)0x0,0,(longlong *)(param_1 + 0x11a18));
      if ((int)uVar9 == -0x25) goto LAB_1800298cd;
      *(undefined4 *)(param_1 + 0x119d8) = 0;
      if (((int)uVar9 == 0) && ((char *)local_d8._16_8_ != (char *)0x0)) {
        if (**(char **)(param_1 + 0x119e0) == '4') {
          (**(code **)(param_1 + 0x18))(*(char **)(param_1 + 0x119e0),param_1);
          *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
          *(undefined8 *)(param_1 + 0x119e0) = 0;
          goto LAB_1800299cf;
        }
        goto LAB_1800299a7;
      }
      pcVar11 = "Auth failed";
    }
    else {
LAB_1800299a7:
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x119e0),param_1);
      pcVar11 = "Invalid signature for supplied public key, or bad username/public key combination";
      *(undefined8 *)(param_1 + 0x119e0) = 0;
    }
    uVar10 = 0xffffffed;
  }
LAB_1800299c7:
  FUN_180018820(param_1,uVar10,(longlong)pcVar11,param_4);
LAB_1800299cf:
  FUN_18002af30(local_50 ^ (ulonglong)auStackY_118);
  return;
}




undefined4 FUN_1800299f0(ulonglong param_1,void *param_2,uint param_3,undefined *param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char *pcVar10;
  longlong *plVar12;
  int iVar13;
  undefined1 *local_res8;
  ulonglong uVar11;
  
  iVar13 = *(int *)(param_1 + 0x11a70);
  puVar1 = (ulonglong *)(param_1 + 0x11ac8);
  if (iVar13 == 0) {
    *(undefined8 *)(param_1 + 0x11aa0) = 0;
    *(undefined8 *)(param_1 + 0x11ab0) = 0;
    *(undefined4 *)(param_1 + 0x11ab8) = 0;
    *(undefined4 *)(param_1 + 0x11abc) = 1;
    *(undefined8 *)(param_1 + 0x11ac0) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x11ad0) = 0;
    *(ulonglong *)(param_1 + 0x11a90) = (ulonglong)(param_3 + 0x37);
    plVar12 = (longlong *)param_4;
    local_res8 = (undefined1 *)(**(code **)(param_1 + 8))((ulonglong)(param_3 + 0x37),param_1);
    *(undefined1 **)(param_1 + 0x11a78) = local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      pcVar10 = "Unable to allocate memory for keyboard-interactive authentication";
      uVar3 = 0xfffffffa;
      local_res8 = (undefined1 *)0x0;
      goto LAB_180029f7c;
    }
    *local_res8 = 0x32;
    local_res8 = local_res8 + 1;
    FUN_1800190c0((longlong *)&local_res8,param_2,(ulonglong)param_3);
    FUN_1800190c0((longlong *)&local_res8,"ssh-connection",0xe);
    FUN_1800190c0((longlong *)&local_res8,"keyboard-interactive",0x14);
    FUN_180019150((longlong *)&local_res8,0);
    FUN_180019150((longlong *)&local_res8,0);
    *(undefined4 *)(param_1 + 0x11a70) = 2;
LAB_180029b2d:
    puVar8 = (undefined8 *)(param_1 + 0x11a78);
    plVar12 = (longlong *)0x0;
    uVar2 = FUN_180026710(param_1,(void *)*puVar8,*(size_t *)(param_1 + 0x11a90),(void *)0x0,0);
    if (uVar2 == 0xffffffdb) {
LAB_180029f70:
      pcVar10 = "Would block";
      uVar3 = 0xffffffdb;
      goto LAB_180029f7c;
    }
    if (uVar2 != 0) {
      (**(code **)(param_1 + 0x18))();
      pcVar10 = "Unable to send keyboard-interactive request";
      *puVar8 = 0;
      uVar3 = 0xfffffff9;
      *(undefined4 *)(param_1 + 0x11a70) = 0;
      goto LAB_180029f7c;
    }
    (**(code **)(param_1 + 0x18))(*puVar8,param_1);
    iVar13 = 3;
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x11a70) = 3;
  }
  else if (iVar13 == 2) goto LAB_180029b2d;
  if (iVar13 == 3) goto LAB_180029baa;
  if (iVar13 == 4) goto LAB_180029d6a;
  while( true ) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a78),param_1);
    *(undefined8 *)(param_1 + 0x11a78) = 0;
    if ((*(longlong *)(param_1 + 0x11ac0) != 0) && (uVar4 = 0, *(int *)(param_1 + 0x11ab8) != 0)) {
      do {
        lVar6 = uVar4 * 0x18;
        (**(code **)(param_1 + 0x18))
                  (*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x11ac0)),param_1);
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        *(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x11ac0)) = 0;
      } while (uVar2 < *(uint *)(param_1 + 0x11ab8));
    }
    uVar4 = 0;
    if ((*puVar1 != 0) && (*(int *)(param_1 + 0x11ab8) != 0)) {
      do {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(*puVar1 + uVar4 * 0x10),param_1);
        uVar2 = (int)uVar4 + 1;
        *(undefined8 *)(*puVar1 + uVar4 * 0x10) = 0;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x11ab8));
    }
    puVar8 = (undefined8 *)(param_1 + 0x18);
    lVar6 = *(longlong *)(param_1 + 0x11ac0);
    if (lVar6 != 0) {
      (*(code *)*puVar8)(lVar6,param_1);
      *(longlong *)(param_1 + 0x11ac0) = 0;
    }
    if (*puVar1 != 0) {
      (*(code *)*puVar8)(*puVar1,param_1);
      *puVar1 = 0;
    }
    if (*(longlong *)(param_1 + 0x11aa0) != 0) {
      (*(code *)*puVar8)(*(longlong *)(param_1 + 0x11aa0),param_1);
      *(undefined8 *)(param_1 + 0x11aa0) = 0;
    }
    if (*(longlong *)(param_1 + 0x11ab0) != 0) {
      (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x11ab0),param_1);
      *(undefined8 *)(param_1 + 0x11ab0) = 0;
    }
    if (*(int *)(param_1 + 0x11abc) != 0) {
      *(undefined4 *)(param_1 + 0x11a70) = 0;
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x11a70) = 3;
LAB_180029baa:
    uVar7 = 0;
    plVar12 = (longlong *)(param_1 + 0x11a80);
    puVar8 = (undefined8 *)(param_1 + 0x11a78);
    puVar5 = &DAT_180033e00;
    uVar4 = FUN_18001a320(param_1,"43<",puVar8,plVar12,0,(void *)0x0,0,
                          (longlong *)(param_1 + 0x11ad0));
    if ((int)uVar4 == -0x25) goto LAB_180029f70;
    if (((int)uVar4 != 0) || (*(longlong *)(param_1 + 0x11a80) == 0)) {
      *(undefined4 *)(param_1 + 0x11a70) = 0;
      pcVar10 = "Waiting for keyboard USERAUTH response";
      uVar3 = 0xffffffee;
      goto LAB_180029f7c;
    }
    pcVar10 = *(char **)(param_1 + 0x11a78);
    if (*pcVar10 == '4') {
      (**(code **)(param_1 + 0x18))(pcVar10,param_1);
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
      *(undefined8 *)(param_1 + 0x11a78) = 0;
      *(undefined4 *)(param_1 + 0x11a70) = 0;
      return 0;
    }
    if (*pcVar10 == '3') break;
    uVar4 = FUN_18002a900(param_1,puVar5,puVar8,plVar12);
    if (-1 < (int)uVar4) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x11aa8);
      (*(code *)param_4)(*(undefined8 *)(param_1 + 0x11aa0),*(undefined4 *)(param_1 + 0x11a98),
                         *(undefined8 *)(param_1 + 0x11ab0),uVar4,*(undefined4 *)(param_1 + 0x11ab8)
                         ,*(undefined8 *)(param_1 + 0x11ac0),*puVar1,param_1);
      *(undefined8 *)(param_1 + 0x11a90) = 5;
      if (*(uint *)(param_1 + 0x11ab8) != 0) {
        uVar4 = *puVar1;
        lVar6 = 5;
        uVar11 = uVar7;
        do {
          uVar2 = *(uint *)(uVar4 + 8 + uVar11 * 0x10);
          if (-lVar6 - 5U < (ulonglong)uVar2) goto LAB_180029ced;
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
          lVar6 = lVar6 + (ulonglong)(uVar2 + 4);
          *(longlong *)(param_1 + 0x11a90) = lVar6;
        } while (uVar9 < *(uint *)(param_1 + 0x11ab8));
      }
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11a78),param_1);
      local_res8 = (undefined1 *)
                   (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x11a90),param_1);
      *(undefined1 **)(param_1 + 0x11a78) = local_res8;
      if (local_res8 == (undefined1 *)0x0) {
LAB_180029ced:
        FUN_180018820(param_1,0xfffffffa,0x1800346f0,uVar4);
      }
      else {
        *local_res8 = 0x3d;
        local_res8 = local_res8 + 1;
        FUN_180019150((longlong *)&local_res8,*(undefined4 *)(param_1 + 0x11ab8));
        if (*(int *)(param_1 + 0x11ab8) != 0) {
          do {
            FUN_1800190c0((longlong *)&local_res8,*(void **)(*puVar1 + uVar7 * 0x10),
                          (ulonglong)*(uint *)(*puVar1 + 8 + uVar7 * 0x10));
            uVar2 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_1 + 0x11ab8));
        }
        *(undefined4 *)(param_1 + 0x11a70) = 4;
LAB_180029d6a:
        plVar12 = (longlong *)0x0;
        uVar2 = FUN_180026710(param_1,*(void **)(param_1 + 0x11a78),*(size_t *)(param_1 + 0x11a90),
                              (void *)0x0,0);
        if (uVar2 == 0xffffffdb) goto LAB_180029f70;
        if (uVar2 == 0) {
          *(undefined4 *)(param_1 + 0x11abc) = 0;
        }
        else {
          FUN_180018820(param_1,0xfffffff9,0x180034738,plVar12);
        }
      }
    }
  }
  (**(code **)(param_1 + 0x18))(pcVar10,param_1);
  pcVar10 = "Authentication failed (keyboard-interactive)";
  *(undefined8 *)(param_1 + 0x11a78) = 0;
  uVar3 = 0xffffffee;
  *(undefined4 *)(param_1 + 0x11a70) = 0;
LAB_180029f7c:
  uVar3 = FUN_180018820(param_1,uVar3,(longlong)pcVar10,plVar12);
  return uVar3;
}




undefined8 FUN_180029fa0(ulonglong param_1,void *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *_Dst;
  char *pcVar6;
  uint3 local_res8 [2];
  undefined1 *local_res20;
  
  iVar3 = *(int *)(param_1 + 0x11978);
  local_res8[0]._0_4_ = 0x353334;
  puVar1 = (undefined8 *)(param_1 + 0x11980);
  if (iVar3 == 0) {
    *(longlong *)(param_1 + 0x11998) = 0;
    *(ulonglong *)(param_1 + 0x11988) = (ulonglong)(param_3 + 0x1b);
    local_res20 = (undefined1 *)(**(code **)(param_1 + 8))((ulonglong)(param_3 + 0x1b),param_1);
    *puVar1 = local_res20;
    if (local_res20 == (undefined1 *)0x0) {
      pcVar6 = "Unable to allocate memory for userauth_list";
      local_res20 = (undefined1 *)0x0;
      goto LAB_18002a013;
    }
    *local_res20 = 0x32;
    local_res20 = local_res20 + 1;
    FUN_1800190c0((longlong *)&local_res20,param_2,(ulonglong)param_3);
    FUN_1800190c0((longlong *)&local_res20,"ssh-connection",0xe);
    FUN_180019150((longlong *)&local_res20,4);
    *(undefined4 *)(param_1 + 0x11978) = 2;
LAB_18002a096:
    param_4 = (longlong *)&DAT_18002e848;
    uVar2 = FUN_180026710(param_1,(void *)*puVar1,*(size_t *)(param_1 + 0x11988),&DAT_18002e848,4);
    if (uVar2 == 0xffffffdb) goto LAB_18002a388;
    (**(code **)(param_1 + 0x18))(*puVar1,param_1);
    *puVar1 = 0;
    if (uVar2 != 0) {
      FUN_180018820(param_1,0xfffffff9,0x180033e70,param_4);
      uVar4 = 0;
      goto LAB_18002a369;
    }
    *(undefined4 *)(param_1 + 0x11978) = 3;
LAB_18002a103:
    param_4 = (longlong *)(param_1 + 0x11988);
    uVar5 = FUN_18001a320(param_1,(char *)local_res8,puVar1,param_4,0,(void *)0x0,0,
                          (longlong *)(param_1 + 0x11998));
    iVar3 = (int)uVar5;
    if (iVar3 == -0x25) {
LAB_18002a388:
      FUN_180018820(param_1,0xffffffdb,0x180033e48,param_4);
      return 0;
    }
    if ((iVar3 != 0) || (uVar5 = *(ulonglong *)(param_1 + 0x11988), uVar5 == 0)) {
LAB_18002a28d:
      FUN_180018820(param_1,iVar3,0x180033e98,param_4);
      uVar4 = 0;
      goto LAB_18002a369;
    }
    pcVar6 = (char *)*puVar1;
    if (*pcVar6 == '5') {
      if (uVar5 < 5) {
        (**(code **)(param_1 + 0x18))(pcVar6,param_1);
        *(undefined8 *)(param_1 + 0x11980) = 0;
        FUN_180018820(param_1,0xfffffff2,0x18002dbd8,param_4);
        return 0;
      }
      uVar2 = FUN_180018ea0(pcVar6 + 1);
      uVar5 = (ulonglong)uVar2;
      if (*(longlong *)(param_1 + 0x11988) - 5U < uVar5) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11980));
        *(undefined8 *)(param_1 + 0x11980) = 0;
        FUN_180018820(param_1,0xffffffd7,0x180033eb0,param_4);
        return 0;
      }
      _Dst = (void *)(**(code **)(param_1 + 8))(uVar2 + 1,param_1);
      *(void **)(param_1 + 0x11990) = _Dst;
      if (_Dst == (void *)0x0) {
        (**(code **)(param_1 + 0x18))(*(longlong *)(param_1 + 0x11980),param_1);
        pcVar6 = "Unable to allocate memory for userauth_banner";
        *(undefined8 *)(param_1 + 0x11980) = 0;
LAB_18002a013:
        FUN_180018820(param_1,0xfffffffa,(longlong)pcVar6,param_4);
        return 0;
      }
      memcpy(_Dst,(void *)(*(longlong *)(param_1 + 0x11980) + 5),uVar5);
      *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 0x11990)) = 0;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11980),param_1);
      *(undefined8 *)(param_1 + 0x11980) = 0;
      param_4 = (longlong *)(param_1 + 0x11988);
      local_res8[0] = (uint3)(ushort)local_res8[0];
      uVar5 = FUN_18001a320(param_1,(char *)local_res8,(undefined8 *)(param_1 + 0x11980),param_4,0,
                            (void *)0x0,0,(longlong *)(param_1 + 0x11998));
      iVar3 = (int)uVar5;
      if (iVar3 == -0x25) goto LAB_18002a388;
      if ((iVar3 != 0) || (uVar5 = *(ulonglong *)(param_1 + 0x11988), uVar5 == 0))
      goto LAB_18002a28d;
    }
    pcVar6 = *(char **)(param_1 + 0x11980);
    if (*pcVar6 == '4') {
      FUN_180018820(param_1,0,0x180033f00,param_4);
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x11980),param_1);
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 4;
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x11980) = 0;
      goto LAB_18002a369;
    }
    if (uVar5 < 5) {
      (**(code **)(param_1 + 0x18))(pcVar6,param_1);
      *(undefined8 *)(param_1 + 0x11980) = 0;
      FUN_180018820(param_1,0xfffffff2,0x18002dbd8,param_4);
      return 0;
    }
    uVar2 = FUN_180018ea0(pcVar6 + 1);
    uVar5 = (ulonglong)uVar2;
    if (*(longlong *)(param_1 + 0x11988) - 5U <= uVar5) {
      FUN_180018820(param_1,0xffffffd7,0x180033f10,param_4);
      return 0;
    }
    memmove(*(void **)(param_1 + 0x11980),(void *)((longlong)*(void **)(param_1 + 0x11980) + 5),
            uVar5);
    *(undefined1 *)(uVar5 + *(longlong *)(param_1 + 0x11980)) = 0;
  }
  else {
    if (iVar3 == 2) goto LAB_18002a096;
    if (iVar3 == 3) goto LAB_18002a103;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x11980);
LAB_18002a369:
  *(undefined4 *)(param_1 + 0x11978) = 0;
  return uVar4;
}




void FUN_18002a3a0(longlong *param_1,void *param_2,uint param_3,longlong *param_4,uint param_5,
                  undefined *param_6)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *local_res8;
  void *local_res10;
  
  iVar3 = (int)param_1[0x2334];
  plVar7 = param_4;
  local_res10 = param_2;
  if (iVar3 == 0) {
    param_1[0x233a] = 0;
    param_1[0x2337] = (ulonglong)(param_3 + 0x28);
    *(undefined1 *)(param_1 + 0x2336) = 0xc3;
    plVar6 = param_4;
    local_res8 = (undefined1 *)(*(code *)param_1[1])((ulonglong)(param_3 + 0x28),param_1);
    param_1[0x2335] = (longlong)local_res8;
    if (local_res8 == (undefined1 *)0x0) {
      FUN_180018820((longlong)param_1,0xfffffffa,0x180033f48,plVar6);
      return;
    }
    *local_res8 = 0x32;
    local_res8 = local_res8 + 1;
    FUN_1800190c0((longlong *)&local_res8,param_2,(ulonglong)param_3);
    FUN_1800190c0((longlong *)&local_res8,"ssh-connection",0xe);
    FUN_1800190c0((longlong *)&local_res8,"password",8);
    *local_res8 = 0;
    local_res8 = local_res8 + 1;
    FUN_180019150((longlong *)&local_res8,param_5);
    *(undefined4 *)(param_1 + 0x2334) = 2;
  }
  else if (iVar3 != 2) goto LAB_18002a550;
  uVar2 = FUN_180026710((ulonglong)param_1,(void *)param_1[0x2335],param_1[0x2337],param_4,
                        (ulonglong)param_5);
  if (uVar2 == 0xffffffdb) {
    FUN_180018820((longlong)param_1,0xffffffdb,0x180033f90,plVar7);
    return;
  }
  (*(code *)param_1[3])(param_1[0x2335]);
  param_1[0x2335] = 0;
  if (uVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2334) = 0;
    FUN_180018820((longlong)param_1,0xfffffff9,0x180033fb8,plVar7);
    return;
  }
  *(undefined4 *)(param_1 + 0x2334) = 3;
  iVar3 = 3;
LAB_18002a550:
  if (iVar3 == 3) goto LAB_18002a58c;
  if (iVar3 - 4U < 2) {
    while (param_1[0x2337] != 0) {
      pcVar5 = (char *)param_1[0x2335];
      if ((*pcVar5 != '<') && ((char)param_1[0x2336] != '<')) goto LAB_18002a82f;
      *(undefined1 *)(param_1 + 0x2336) = 0x3c;
      if (iVar3 == 4) {
        (*(code *)param_1[3])(pcVar5,param_1);
        param_1[0x2335] = 0;
      }
      else if (iVar3 != 5) {
        *(undefined4 *)(param_1 + 0x2334) = 0;
        pcVar5 = "Password Expired, and no callback specified";
        iVar3 = -0xf;
        goto LAB_18002a8d6;
      }
      if (param_6 == (undefined *)0x0) goto LAB_18002a82f;
      plVar6 = param_1 + 0x2339;
      plVar1 = param_1 + 0x2338;
      if ((int)param_1[0x2334] == 4) {
        plVar7 = param_1;
        (*(code *)param_6)(param_1,plVar1,plVar6);
        if (*plVar1 == 0) {
          pcVar5 = "Password expired, and callback failed";
          iVar3 = -0xf;
          goto LAB_18002a8d6;
        }
        uVar4 = (ulonglong)(param_5 + 0x2c + param_3);
        param_1[0x2337] = uVar4;
        local_res8 = (undefined1 *)(*(code *)param_1[1])(uVar4,param_1);
        param_1[0x2335] = (longlong)local_res8;
        if (local_res8 == (undefined1 *)0x0) {
          (*(code *)param_1[3])(*plVar1,param_1);
          pcVar5 = "Unable to allocate memory for userauth password change request";
          *plVar1 = 0;
          iVar3 = -6;
          goto LAB_18002a8d6;
        }
        *local_res8 = 0x32;
        local_res8 = local_res8 + 1;
        FUN_1800190c0((longlong *)&local_res8,local_res10,(ulonglong)param_3);
        FUN_1800190c0((longlong *)&local_res8,"ssh-connection",0xe);
        FUN_1800190c0((longlong *)&local_res8,"password",8);
        *local_res8 = 1;
        local_res8 = local_res8 + 1;
        FUN_1800190c0((longlong *)&local_res8,param_4,(ulonglong)param_5);
        FUN_180019150((longlong *)&local_res8,(int)*plVar6);
        *(undefined4 *)(param_1 + 0x2334) = 5;
      }
      else if ((int)param_1[0x2334] != 5) goto LAB_18002a82f;
      plVar7 = (longlong *)*plVar1;
      uVar2 = FUN_180026710((ulonglong)param_1,(void *)param_1[0x2335],param_1[0x2337],plVar7,
                            (longlong)(int)*plVar6);
      if (uVar2 == 0xffffffdb) {
        pcVar5 = "Would block waiting";
        iVar3 = -0x25;
        goto LAB_18002a8d6;
      }
      (*(code *)param_1[3])(param_1[0x2335],param_1);
      param_1[0x2335] = 0;
      (*(code *)param_1[3])(*plVar1);
      *plVar1 = 0;
      if (uVar2 != 0) {
        pcVar5 = "Unable to send userauth password-change request";
        iVar3 = -7;
        goto LAB_18002a8d6;
      }
      *(undefined4 *)(param_1 + 0x2334) = 3;
LAB_18002a58c:
      plVar6 = param_1 + 0x2337;
      plVar1 = param_1 + 0x2335;
      plVar7 = plVar6;
      uVar4 = FUN_18001a320((ulonglong)param_1,"43<",plVar1,plVar6,0,(void *)0x0,0,param_1 + 0x233a)
      ;
      iVar3 = (int)uVar4;
      if (iVar3 != 0) {
        if (iVar3 != -0x25) {
          *(undefined4 *)(param_1 + 0x2334) = 0;
        }
        pcVar5 = "Waiting for password response";
        goto LAB_18002a8d6;
      }
      if (*plVar6 == 0) {
        *(undefined4 *)(param_1 + 0x2334) = 0;
        pcVar5 = "Unexpected packet size";
        iVar3 = -0xe;
        goto LAB_18002a8d6;
      }
      pcVar5 = (char *)*plVar1;
      if (*pcVar5 == '4') {
        (*(code *)param_1[3])(pcVar5,param_1);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
        *plVar1 = 0;
        *(undefined4 *)(param_1 + 0x2334) = 0;
        return;
      }
      if (*pcVar5 == '3') {
        (*(code *)param_1[3])(pcVar5,param_1);
        pcVar5 = "Authentication failed (username/password)";
        *plVar1 = 0;
        iVar3 = -0x12;
        *(undefined4 *)(param_1 + 0x2334) = 0;
        goto LAB_18002a8d6;
      }
      *(undefined4 *)(param_1 + 0x2334) = 4;
      param_1[0x2338] = 0;
      iVar3 = 4;
      *(undefined4 *)(param_1 + 0x2339) = 0;
    }
    *(undefined4 *)(param_1 + 0x2334) = 0;
    pcVar5 = "Unexpected packet size";
    iVar3 = -0xe;
  }
  else {
LAB_18002a82f:
    (*(code *)param_1[3])(param_1[0x2335],param_1);
    pcVar5 = "Authentication failed";
    param_1[0x2335] = 0;
    iVar3 = -0x12;
    *(undefined4 *)(param_1 + 0x2334) = 0;
  }
LAB_18002a8d6:
  FUN_180018820((longlong)param_1,iVar3,(longlong)pcVar5,plVar7);
  return;
}




ulonglong FUN_18002a900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  ulonglong local_res18;
  longlong local_res20;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_38 = *(longlong *)(param_1 + 0x11a78);
  local_28 = *(ulonglong *)(param_1 + 0x11a80);
  local_30 = local_38;
  if (local_28 < 0x11) {
    FUN_180018820(param_1,0xffffffda,0x1800347a0,param_4);
    return 0xffffffff;
  }
  FUN_180018aa0(&local_38,local_res8);
  puVar8 = (ulonglong *)(param_1 + 0x11a98);
  uVar1 = FUN_180018700(param_1,&local_38,(undefined8 *)(param_1 + 0x11aa0),puVar8);
  if ((int)uVar1 == -1) {
    FUN_180018820(param_1,0xfffffffa,0x1800347d8,puVar8);
    return 0xffffffff;
  }
  puVar8 = (ulonglong *)(param_1 + 0x11aa8);
  uVar1 = FUN_180018700(param_1,&local_38,(undefined8 *)(param_1 + 0x11ab0),puVar8);
  if ((int)uVar1 == -1) {
    pcVar6 = "Unable to decode keyboard-interactive \'instruction\' request field";
  }
  else {
    uVar1 = FUN_180018ad0(&local_38,&local_res20,&local_res18);
    if ((int)uVar1 == -1) {
      pcVar6 = "Unable to decode keyboard-interactive \'language tag\' request field";
    }
    else {
      uVar1 = FUN_180018b90(&local_38,local_res10);
      if ((int)uVar1 == -1) {
        FUN_180018820(param_1,0xffffffda,0x1800348c0,puVar8);
        return 0xffffffff;
      }
      *(uint *)(param_1 + 0x11ab8) = local_res10[0];
      if (100 < local_res10[0]) {
        FUN_180018820(param_1,0xffffffd7,0x180034908,puVar8);
        return 0xffffffff;
      }
      if (local_res10[0] == 0) {
        return (ulonglong)local_res10[0];
      }
      pvVar2 = FUN_180018690(param_1,(ulonglong)local_res10[0] * 0x18);
      *(void **)(param_1 + 0x11ac0) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        FUN_180018820(param_1,0xfffffffa,0x180034940,puVar8);
        return 0xffffffff;
      }
      pvVar2 = FUN_180018690(param_1,(ulonglong)*(uint *)(param_1 + 0x11ab8) << 4);
      *(void **)(param_1 + 0x11ac8) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        uVar5 = 0;
        if (*(int *)(param_1 + 0x11ab8) != 0) {
          do {
            puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x11ac0) + uVar5 * 0x18);
            puVar8 = puVar7 + 1;
            uVar1 = FUN_180018700(param_1,&local_38,puVar7,puVar8);
            if ((int)uVar1 == -1) {
              pcVar6 = "Unable to decode keyboard-interactive prompt message";
              uVar3 = 0xfffffffa;
LAB_18002ab31:
              FUN_180018820(param_1,uVar3,(longlong)pcVar6,puVar8);
              return 0xffffffff;
            }
            uVar1 = FUN_180018a60(&local_38,*(longlong *)(param_1 + 0x11ac0) + 0x10 + uVar5 * 0x18);
            if ((int)uVar1 == -1) {
              pcVar6 = "Unable to decode user auth keyboard prompt echo";
              uVar3 = 0xffffffda;
              goto LAB_18002ab31;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 < *(uint *)(param_1 + 0x11ab8));
        }
        return 0;
      }
      pcVar6 = "Unable to allocate memory for keyboard-interactive responses array";
    }
  }
  FUN_180018820(param_1,0xfffffffa,(longlong)pcVar6,puVar8);
  return 0xffffffff;
}




undefined8 libssh2_crypto_engine(void)

{
                    /* 0x2ab80  44  libssh2_crypto_engine */
  return 1;
}




char * libssh2_version(int param_1)

{
  char *pcVar1;
  
                    /* 0x2ab90  135  libssh2_version */
  pcVar1 = (char *)0x0;
  if (param_1 < 0x10b01) {
    pcVar1 = "1.11.0";
  }
  return pcVar1;
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
  FUN_18002af30(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




void FUN_18002af30(longlong param_1)

{
  if ((param_1 == DAT_18003b280) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_18002afe4();
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

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
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00018002afdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002afe4(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x18002b00f;
  capture_previous_context((PCONTEXT)&DAT_18003b3c0);
  _DAT_18003b330 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18003b458 = puVar3 + 0x40;
  _DAT_18003b440 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18003b320 = 0xc0000409;
  _DAT_18003b324 = 1;
  _DAT_18003b338 = 1;
  DAT_18003b340 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18003b280;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18003b2c0;
  *(undefined8 *)(puVar3 + -8) = 0x18002b0b1;
  DAT_18003b4b8 = _DAT_18003b330;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180034a48);
  return;
}




void FUN_18002b0b8(void)

{
  FUN_18002b0cc(8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002b0cc(undefined4 param_1)

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
  *(undefined8 *)(puVar3 + -8) = 0x18002b0f7;
  capture_current_context((PCONTEXT)&DAT_18003b3c0);
  _DAT_18003b330 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18003b458 = puVar3 + 0x30;
  _DAT_18003b320 = 0xc0000409;
  _DAT_18003b324 = 1;
  _DAT_18003b338 = 1;
  DAT_18003b340 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18002b163;
  DAT_18003b4b8 = _DAT_18003b330;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180034a48);
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
/* Library Function - Single Match
    int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar9 = FUN_18002b3b8(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0));
    return (int)uVar9;
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
  uVar6 = FUN_18002b81c(0);
  if ((char)uVar6 != '\0') {
    uVar6 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_18003b8b8 != 0) {
      FUN_18002b9dc(7);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    DAT_18003b8b8 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      _RTC_Initialize();
      FUN_18002b670();
      __scrt_initialize_default_local_stdio_options();
      iVar5 = _initterm_e(&DAT_18002c730,&DAT_18002c738);
      if ((iVar5 == 0) && (uVar7 = __scrt_dllmain_after_initialize_c(), (char)uVar7 != '\0')) {
        _initterm(&DAT_18002c720,&DAT_18002c728);
        DAT_18003b8b8 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar6);
    if (!bVar2) {
      plVar8 = (longlong *)FUN_18002b9cc();
      if ((*plVar8 != 0) && (uVar9 = FUN_18002b8e4((longlong)plVar8), (char)uVar9 != '\0')) {
        (*(code *)*plVar8)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18003b890 = DAT_18003b890 + 1;
      return 1;
    }
  }
  return 0;
}




ulonglong FUN_18002b3b8(undefined8 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar2 = (undefined1)param_1;
  if (DAT_18003b890 < 1) {
    uVar5 = 0;
  }
  else {
    DAT_18003b890 = DAT_18003b890 + -1;
    uVar4 = __scrt_acquire_startup_lock();
    if (DAT_18003b8b8 != 2) {
      FUN_18002b9dc(7);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18002b680();
    FUN_18002bb60();
    DAT_18003b8b8 = 0;
    uVar6 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar4);
    bVar3 = __scrt_uninitialize_crt(CONCAT71(uVar6,uVar2),'\0');
    uVar5 = (ulonglong)bVar3;
    FUN_18002b808();
  }
  return uVar5;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018002b4f5) */
/* WARNING: Removing unreachable block (ram,0x00018002b486) */
/* WARNING: Removing unreachable block (ram,0x00018002b534) */

int FUN_18002b438(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  HINSTANCE__ *pHVar3;
  
  if ((param_2 == 0) && (DAT_18003b890 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_18002b64c(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      pHVar3 = param_1;
      FUN_18002b64c(param_1,0);
      FUN_18002b3b8(CONCAT71((int7)((ulonglong)pHVar3 >> 8),param_3 != (void *)0x0));
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
  FUN_18002b438(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_18003b280 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_18003b280 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_18003b280 == 0x2b992ddfa232) {
      DAT_18003b280 = 0x2b992ddfa233;
    }
  }
  DAT_18003b2c0 = ~DAT_18003b280;
  return;
}




undefined8 FUN_18002b64c(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}




void FUN_18002b670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018002b677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18003b8a0);
  return;
}




void FUN_18002b680(void)

{
  __std_type_info_destroy_list(&DAT_18003b8a0);
  return;
}




undefined * FUN_18002b68c(void)

{
  return &DAT_18003b8b0;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2019 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001690();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_18002b68c();
  *puVar1 = *puVar1 | 2;
  return;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

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
LAB_18002b6de:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18003b8c0 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18003b8c0;
        pvVar1 = DAT_18003b8c0;
      }
      DAT_18003b8c0 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18002b6de;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = libssh2_crypto_engine();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_18002bb9c();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2019 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18002beec();
  if (cVar1 != '\0') {
    cVar1 = FUN_18002beec();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18002beec();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18002beec();
  FUN_18002beec();
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_18003b8d0);
    return;
  }
  uVar2 = libssh2_trace();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}




void FUN_18002b808(void)

{
  FUN_18002beec();
  FUN_18002beec();
  return;
}




longlong FUN_18002b81c(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_18003b8c8 = 1;
  }
  FUN_18002bb9c();
  cVar1 = FUN_18002beec();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18002beec();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18002beec();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_18003b8c9 == '\0') {
    if (1 < param_1) {
      FUN_18002b9dc(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      _DAT_18003b8d0 = 0xffffffffffffffff;
      uRam000000018003b8d8 = 0xffffffffffffffff;
      _DAT_18003b8e0 = 0xffffffffffffffff;
      _DAT_18003b8e8 = 0xffffffffffffffff;
      uRam000000018003b8f0 = 0xffffffffffffffff;
      _DAT_18003b8f8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18003b8d0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18003b8e8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18003b8c9 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018002b971) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_18002b8e4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18002b95a;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18002b95a:
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
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_18003b8c0 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18003b8c8 == '\0') || (param_2 == '\0')) {
    FUN_18002beec();
    FUN_18002beec();
  }
  return 1;
}




undefined * FUN_18002b9cc(void)

{
  return &DAT_18003b918;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002b9d4(void)

{
  _DAT_18003b900 = 0;
  return;
}




void FUN_18002b9dc(undefined4 param_1)

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
  *(undefined8 *)(puVar4 + -8) = 0x18002ba10;
  FUN_18002b9d4();
  *(undefined8 *)(puVar4 + -8) = 0x18002ba21;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18002ba2b;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18002ba45;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18002ba86;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18002bab8;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18002bada;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18002baf7;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18002bb02;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18002bb13;
    FUN_18002b9d4();
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _RTC_Initialize
   
   Library: Visual Studio 2019 Release */

void _RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180034fc8; puVar1 < &DAT_180034fc8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18002bb60(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180034fd8; puVar1 < &DAT_180034fd8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018002bcbf) */
/* WARNING: Removing unreachable block (ram,0x00018002bca2) */
/* WARNING: Removing unreachable block (ram,0x00018002bc71) */
/* WARNING: Removing unreachable block (ram,0x00018002bbd8) */
/* WARNING: Removing unreachable block (ram,0x00018002bbb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002bb9c(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_18003b2f0 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_18003b2e8 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18003b908 = DAT_18003b908 | 1;
    }
  }
  uVar10 = 0;
  uVar8 = uVar10;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_18003b908 = DAT_18003b908 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar11 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar10 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_18003b2e0 = 1;
  DAT_18003b2e4 = 2;
  uVar6 = DAT_18003b2d8 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_18003b2e0 = 2;
    DAT_18003b2e4 = 6;
    uVar6 = DAT_18003b2d8 & 0xffffffffffffffee;
  }
  DAT_18003b2d8 = uVar6;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)in_XCR0, (bVar7 & 6) == 6)) {
      _DAT_18003b2e0 = 3;
      uVar6 = DAT_18003b2d8;
      uVar5 = DAT_18003b2e4 | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_18003b2e0 = 5;
        uVar6 = DAT_18003b2d8 & 0xfffffffffffffffd;
        uVar5 = DAT_18003b2e4 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_18003b2e4 = DAT_18003b2e4 | 0x68;
          _DAT_18003b2e0 = 6;
          uVar6 = DAT_18003b2d8 & 0xffffffffffffffd9;
          uVar5 = DAT_18003b2e4;
        }
      }
      DAT_18003b2e4 = uVar5;
      DAT_18003b2d8 = uVar6;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_18003b2d8 = DAT_18003b2d8 & 0xfffffffffeffffff;
      }
      if (((uVar11 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_18003b904 = uVar10 & 0x400ff;
        DAT_18003b2d8 = ~((ulonglong)(uVar10 >> 0x10 & 7) | 0x1000028) & DAT_18003b2d8;
        if (1 < _DAT_18003b904) {
          DAT_18003b2d8 = DAT_18003b2d8 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar11 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_18003b2d8 = DAT_18003b2d8 & 0xffffffffffffff7f;
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18003b300 != 0;
}




undefined1 FUN_18002beec(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018002bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_18002bf3d(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}




void FUN_18002bf56(void)

{
  FUN_18002b808();
  return;
}




void FUN_18002bf6a(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



