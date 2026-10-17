
/* WARNING: Type propagation algorithm not settling */

void FUN_00011008(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  char local_e8 [5];
  undefined8 auStack_e3 [25];
  ulonglong local_18;
  
  local_18 = DAT_00020100 ^ (ulonglong)auStack_108;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0001c770((ulonglong *)((longlong)local_e8 + 1),0,199);
  local_e8[0] = 'E';
  local_e8[1] = 'U';
  local_e8[2] = 'H';
  local_e8[3] = 'K';
  stack0xffffffffffffff1c = 0x20;
  vsprintf(local_e8 + 5,param_1,(va_list)&local_res10);
  lVar2 = -1;
  pcVar3 = local_e8;
  do {
    pcVar4 = pcVar3;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4[-1] = '\n';
  pcVar4[0] = '\0';
  DbgPrint(local_e8);
  FUN_0001c500(local_18 ^ (ulonglong)auStack_108);
  return;
}




void FUN_000110bc(STRSAFE_PCNZWCH param_1,size_t param_2,STRSAFE_LPCWSTR param_3,undefined8 param_4)

{
  HRESULT HVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  HVar1 = StringValidateDestW(param_1,param_2,0);
  if (-1 < HVar1) {
    StringVPrintfWorkerW(param_1,param_2,(size_t *)0x0,param_3,(va_list)&local_res20);
  }
  return;
}




int FUN_00011110(undefined8 param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  undefined4 local_res20 [2];
  undefined1 local_18 [16];
  
  local_res20[0] = 0;
  RtlInitUnicodeString(local_18);
  iVar2 = ZwQueryValueKey(param_1,local_18,2,0,0,local_res20);
  if ((iVar2 != -0x3fffffdd) && (iVar2 != -0x7ffffffb)) {
    return iVar2;
  }
  lVar3 = ExAllocatePool(1,local_res20[0]);
  if (lVar3 != 0) {
    iVar2 = ZwQueryValueKey(param_1,local_18,2,lVar3,local_res20[0],local_res20);
    if (iVar2 < 0) goto LAB_00011217;
    if (((*(int *)(lVar3 + 4) != 1) || (0xfffe < *(uint *)(lVar3 + 8))) ||
       (*(uint *)(lVar3 + 8) < 3)) {
      iVar2 = -0x3ffffff3;
      goto LAB_00011217;
    }
    _Dst = (void *)ExAllocatePool(0,*(undefined4 *)(lVar3 + 8));
    if (_Dst != (void *)0x0) {
      uVar1 = *(ushort *)(lVar3 + 8);
      iVar2 = 0;
      param_3[1] = uVar1;
      *(void **)(param_3 + 4) = _Dst;
      memcpy(_Dst,(void *)(lVar3 + 0xc),(ulonglong)uVar1);
      *param_3 = param_3[1] + -2;
      goto LAB_00011217;
    }
  }
  iVar2 = -0x3fffff66;
LAB_00011217:
  if (lVar3 != 0) {
    ExFreePoolWithTag(lVar3,0);
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00011244(undefined8 param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  STRSAFE_PCNZWCH pwVar8;
  undefined4 local_res8 [2];
  longlong local_res10;
  short local_78 [4];
  undefined8 local_70;
  short local_68 [4];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48[0] = 0x30;
  local_30 = 0x40;
  local_38 = param_1;
  iVar2 = ZwOpenKey(&local_res10,0xf003f,local_48);
  uVar7 = _DAT_00020144;
  if ((-1 < iVar2) &&
     (iVar2 = FUN_00011110(local_res10,L"DisplayName",local_68), uVar7 = _DAT_00020144, -1 < iVar2))
  {
    DAT_0002020a = 200;
    DAT_00020210 = (STRSAFE_PCNZWCH)ExAllocatePool(1,200);
    if (DAT_00020210 != (STRSAFE_PCNZWCH)0x0) {
      FUN_000110bc(DAT_00020210,(ulonglong)DAT_0002020a,L"\\Driver\\%s",local_60);
      lVar5 = -1;
      pwVar8 = DAT_00020210;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        wVar1 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar1 != L'\0');
      _DAT_00020208 = (~(ushort)lVar5 - 1) * 2;
      RtlFreeUnicodeString(local_68);
      iVar2 = FUN_00011110(local_res10,L"DeviceName",local_78);
      uVar7 = _DAT_00020144;
      if (iVar2 < 0) goto LAB_000114e4;
      DAT_0002021a = 200;
      DAT_00020220 = (STRSAFE_PCNZWCH)ExAllocatePool(1,200);
      if (DAT_00020220 != (STRSAFE_PCNZWCH)0x0) {
        FUN_000110bc(DAT_00020220,(ulonglong)DAT_0002021a,L"\\Device\\%s",local_70);
        lVar5 = -1;
        pwVar8 = DAT_00020220;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          wVar1 = *pwVar8;
          pwVar8 = pwVar8 + 1;
        } while (wVar1 != L'\0');
        DAT_0002022a = 200;
        _DAT_00020218 = (~(ushort)lVar5 - 1) * 2;
        DAT_00020230 = (STRSAFE_PCNZWCH)ExAllocatePool(1,200);
        if (DAT_00020230 != (STRSAFE_PCNZWCH)0x0) {
          FUN_000110bc(DAT_00020230,(ulonglong)DAT_0002022a,L"\\DosDevices\\%s1",local_70);
          lVar5 = -1;
          pwVar8 = DAT_00020230;
          do {
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -1;
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
          _DAT_00020228 = (~(ushort)lVar5 - 1) * 2;
          RtlFreeUnicodeString(local_78);
          lVar5 = local_res10;
          local_res8[0] = 0;
          uVar6 = 0;
          RtlInitUnicodeString(local_58,L"IoctlBase");
          iVar3 = ZwQueryValueKey(lVar5,local_58,2,0,0,local_res8);
          if (((iVar3 == -0x3fffffdd) || (uVar7 = 0, iVar3 == -0x7ffffffb)) &&
             (lVar4 = ExAllocatePool(1,local_res8[0]), uVar7 = uVar6, lVar4 != 0)) {
            iVar3 = ZwQueryValueKey(lVar5,local_58,2,lVar4,local_res8[0],local_res8);
            uVar7 = 0;
            if (((-1 < iVar3) && (uVar7 = uVar6, *(int *)(lVar4 + 4) == 4)) &&
               (*(int *)(lVar4 + 8) == 4)) {
              uVar7 = *(undefined4 *)(lVar4 + 0xc);
            }
            ExFreePoolWithTag(lVar4,0);
          }
          goto LAB_000114e4;
        }
      }
    }
    iVar2 = -0x3fffff66;
    uVar7 = _DAT_00020144;
  }
LAB_000114e4:
  _DAT_00020144 = uVar7;
  if (local_res10 != 0) {
    ZwClose();
    local_res10 = 0;
  }
  if (iVar2 < 0) {
    RtlFreeUnicodeString(local_68);
    RtlFreeUnicodeString(local_78);
    RtlFreeUnicodeString(&DAT_00020208);
    RtlFreeUnicodeString(&DAT_00020218);
    RtlFreeUnicodeString(&DAT_00020228);
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001155c(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint local_res8 [2];
  
  local_res8[0] = FUN_00011244(param_2);
  bVar4 = DAT_00020240 == 0;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = FUN_000120c4;
    puVar3 = puVar3 + 1;
  }
  *(code **)(param_1 + 0x70) = FUN_00011f94;
  *(code **)(param_1 + 0x148) = FUN_00012f88;
  *(code **)(param_1 + 0x120) = FUN_00013170;
  *(code **)(*(longlong *)(param_1 + 0x30) + 8) = FUN_00012014;
  *(code **)(param_1 + 0x68) = FUN_00011fb4;
  if (bVar4) {
    FUN_00011bd0(param_1,local_res8);
  }
  else {
    _DAT_00020238 = _DAT_00020238 + 1;
  }
  uVar1 = FUN_00019098(param_1,DAT_00020210,param_3,param_4);
  if ((int)uVar1 != 0) {
    FUN_00018bd0(param_1,L"\\Driver\\VolSnap",param_3,param_4);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00011620(undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_res18 [2];
  
  uVar6 = DAT_000203d0;
  puVar5 = (undefined8 *)0x0;
  if (DAT_00020240 == 0) {
    puVar4 = local_res18;
    lVar1 = FUN_00011bd0(DAT_000203d0,puVar4);
  }
  else {
    _DAT_00020238 = _DAT_00020238 + 1;
    puVar4 = param_2;
    lVar1 = DAT_00020240;
  }
  puVar2 = FUN_0001347c(0xa8);
  puVar3 = puVar5;
  if (puVar2 != (ulonglong *)0x0) {
    puVar4 = (uint *)(lVar1 + 8);
    puVar3 = FUN_00019470(puVar2,puVar4,uVar6,param_2,(int *)local_res18);
    param_3 = uVar6;
    param_4 = param_2;
  }
  if (puVar3 != (undefined8 *)0x0) {
    if ((int)local_res18[0] < 0) {
      FUN_00013ec4(puVar3);
      puVar4 = (uint *)0x0;
      ExFreePoolWithTag(puVar3);
    }
    else {
      puVar5 = (undefined8 *)puVar3[1];
    }
    FUN_00014124((longlong)puVar3,puVar4,param_3,param_4);
  }
  return puVar5;
}




void FUN_000116e8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    for (lVar2 = *(longlong *)(param_1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
      if (*(int *)(lVar2 + 0x48) == 7) {
        puVar1 = *(undefined8 **)(*(longlong *)(lVar2 + 0x40) + 0xf0);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[2] = *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x118);
          (**(code **)*puVar1)();
        }
      }
    }
  }
  return;
}




uint FUN_00011734(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  
  uVar8 = 0;
  uVar7 = 0;
  KeWaitForSingleObject(param_1 + 0x60,0,0,0,0);
  plVar3 = (longlong *)(param_1 + 0x50);
  if ((longlong *)*plVar3 == plVar3) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(*plVar3 + -8);
    if (plVar5 != (longlong *)0x0) {
      uVar7 = *(ulonglong *)(param_2 + 1);
      uVar8 = (ulonglong)*param_2;
      do {
        if (((*param_2 == *(uint *)(plVar5[3] + 0x18)) &&
            (uVar7 < (ulonglong)(plVar5[0x1b] + plVar5[0x1c]))) &&
           ((ulonglong)plVar5[0x1b] < uVar7 + *(longlong *)(param_2 + 3))) break;
        if (((longlong *)*plVar3 == plVar3) || (plVar5[1] == *plVar5)) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)(plVar5[1] + -8);
        }
      } while (plVar5 != (longlong *)0x0);
    }
  }
  KeReleaseMutex(param_1 + 0x60,0);
  uVar6 = -(uint)(plVar5 != (longlong *)0x0) & 0xc0000043;
  if (-1 < (int)uVar6) {
    uVar4 = (ulonglong)*param_2;
    local_res8[0] = uVar6;
    lVar1 = FUN_000131c0(param_1,*param_2);
    if (lVar1 == 0) {
      plVar3 = (longlong *)0x0;
      uVar6 = 0xc000000d;
    }
    else {
      FUN_00014124(lVar1,uVar4,uVar7,uVar8);
      puVar2 = FUN_0001347c(0x1b0);
      if (puVar2 == (ulonglong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = FUN_00014f0c((longlong *)puVar2,(longlong)plVar3,lVar1,(longlong)param_2,
                              (int *)local_res8);
        uVar6 = local_res8[0];
      }
      if (plVar3 == (longlong *)0x0) {
        uVar6 = 0xc0000017;
      }
    }
    if (-1 < (int)uVar6) {
      *(longlong **)(param_2 + 0x20d) = plVar3;
      return uVar6;
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_000152c4(plVar3);
      ExFreePoolWithTag(plVar3,0);
    }
  }
  param_2[0x20d] = 0;
  param_2[0x20e] = 0;
  return uVar6;
}




ulonglong FUN_0001189c(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  char in_CR8;
  
  uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 0xf0);
  uVar6 = *(longlong *)(*(longlong *)(param_3 + 0xb8) + 0x18) /
          (longlong)(ulonglong)*(uint *)(uVar7 + 0x98);
  uVar5 = *(uint *)(*(longlong *)(param_3 + 0xb8) + 8) / *(uint *)(uVar7 + 0x98);
  if (in_CR8 == '\0') {
    uVar7 = FUN_00011a00(param_1,param_3,uVar7,param_2,uVar6,uVar5);
  }
  else {
    puVar8 = FUN_0001347c(0x38);
    puVar8[3] = uVar7;
    puVar8[2] = param_3;
    puVar8[4] = param_2;
    puVar8[5] = uVar6;
    *(uint *)(puVar8 + 6) = uVar5;
    pbVar1 = (byte *)(*(longlong *)(param_3 + 0xb8) + 3);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(param_3 + 0x30) = 0x103;
    lVar2 = *(longlong *)(param_1 + 0x98);
    uVar4 = KeAcquireSpinLockRaiseToDpc(lVar2 + 0x48);
    *(undefined1 *)(lVar2 + 0x50) = uVar4;
    puVar3 = *(undefined8 **)(lVar2 + 0x40);
    *puVar8 = lVar2 + 0x38;
    puVar8[1] = (ulonglong)puVar3;
    *puVar3 = puVar8;
    *(ulonglong **)(lVar2 + 0x40) = puVar8;
    KeReleaseSpinLock(lVar2 + 0x48,
                      CONCAT71((int7)((ulonglong)puVar3 >> 8),*(undefined1 *)(lVar2 + 0x50)));
    KeSetEvent(lVar2 + 0x18,0,0);
    uVar7 = 0x103;
  }
  return uVar7;
}




void FUN_000119b8(longlong param_1)

{
  FUN_00011a00(DAT_00020240,*(ulonglong *)(param_1 + 0x10),*(ulonglong *)(param_1 + 0x18),
               *(ulonglong *)(param_1 + 0x20),*(ulonglong *)(param_1 + 0x28),
               *(uint *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000119f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExFreePoolWithTag(param_1,0);
  return;
}




ulonglong FUN_00011a00(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,uint param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  lVar1 = param_1 + 0x60;
  uVar9 = 0;
  KeWaitForSingleObject(lVar1,0,0,0,0);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (((longlong *)*plVar2 != plVar2) &&
     (plVar8 = (longlong *)(*plVar2 + -8), plVar8 != (longlong *)0x0)) {
    uVar6 = (ulonglong)param_6;
    do {
      if (((*(int *)(param_3 + 0x18) == *(int *)(plVar8[3] + 0x18)) &&
          (param_5 < (ulonglong)(plVar8[0x1b] + plVar8[0x1c]))) &&
         ((ulonglong)plVar8[0x1b] < param_5 + uVar6)) {
        lVar3 = plVar8[3];
        if (lVar3 != 0) {
          iVar4 = FUN_00014e3c(lVar3,param_5,uVar6);
          if (iVar4 == 0) {
            FUN_00011008("ProcessUrgentIrp pagefile bk s=%I64u,secs=%u",param_5,(ulonglong)param_6,
                         uVar9);
            break;
          }
          if (((lVar3 != 0) && (*(ulonglong *)(lVar3 + 0x88) < *(ulonglong *)(lVar3 + 0x80))) &&
             (param_2 == *(ulonglong *)(lVar3 + 0x78))) {
            *(ulonglong *)(lVar3 + 0x88) = *(ulonglong *)(lVar3 + 0x88) + 1;
            FUN_00011008("ProcessUrgentIrp ownIRP=%p",param_2,uVar6,uVar9);
            plVar8 = (longlong *)0x0;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          uVar6 = param_4;
          uVar10 = param_2;
          uVar7 = FUN_0001573c((longlong)plVar8,param_3,param_4,param_2,param_5,param_6);
          KeReleaseMutex(lVar1,0);
          if ((int)uVar7 != 0x103) {
            FUN_00011008("ProcessUrgentIrp 0x%X",uVar7 & 0xffffffff,uVar6,uVar10);
            uVar5 = FUN_00017d4c((undefined4 *)plVar8[0x20]);
            if ((int)uVar5 < 0) {
              *(uint *)(param_2 + 0x30) = uVar5;
              IofCompleteRequest(param_2,0);
              return (ulonglong)uVar5;
            }
            uVar7 = FUN_00018890(param_4,param_2);
          }
          return uVar7 & 0xffffffff;
        }
        break;
      }
      if (((longlong *)*plVar2 == plVar2) || (plVar8[1] == *plVar8)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)(plVar8[1] + -8);
      }
    } while (plVar8 != (longlong *)0x0);
  }
  KeReleaseMutex(lVar1,0);
  uVar6 = FUN_00018890(param_4,param_2);
  return uVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011bd0(undefined8 param_1,uint *param_2)

{
  ulonglong *puVar1;
  
  puVar1 = FUN_0001347c(0xa0);
  if (puVar1 == (ulonglong *)0x0) {
    DAT_00020240 = 0;
  }
  else {
    DAT_00020240 = FUN_00011d20(puVar1,param_1,param_2);
  }
  if (DAT_00020240 != 0) {
    _DAT_00020238 = _DAT_00020238 + 1;
  }
  return;
}




longlong * FUN_00011c28(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar1 = param_1 + 10;
  while (((longlong *)*plVar1 != plVar1 &&
         (plVar3 = (longlong *)(*plVar1 + -8), plVar3 != (longlong *)0x0))) {
    FUN_000152c4(plVar3);
    ExFreePoolWithTag(plVar3,0);
  }
  plVar1 = param_1 + 1;
  while (((longlong *)*plVar1 != plVar1 &&
         (puVar4 = (undefined8 *)(*plVar1 + -0x48), puVar4 != (undefined8 *)0x0))) {
    FUN_00013ec4(puVar4);
    ExFreePoolWithTag(puVar4,0);
  }
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      KeSetEvent(lVar2,0,0);
      KeWaitForSingleObject(*(undefined8 *)(lVar2 + 0x30),0,0,0,0);
      ObfDereferenceObject(*(undefined8 *)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    ExFreePoolWithTag(lVar2,0);
    param_1[0x13] = 0;
  }
  IoDeleteSymbolicLink(&DAT_00020228);
  if (*param_1 != 0) {
    IoDeleteDevice();
  }
  ExFreePoolWithTag(param_1,0);
  return param_1;
}




void FUN_00011d20(ulonglong *param_1,undefined8 param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  code *local_140;
  ulonglong *local_138;
  undefined8 local_128;
  undefined1 local_120 [24];
  wchar_t local_108;
  ulonglong local_106 [25];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStack_168;
  *param_1 = 0;
  puVar3 = param_1 + 1;
  KeInitializeMutex(param_1 + 3,1);
  param_1[2] = (ulonglong)puVar3;
  *puVar3 = (ulonglong)puVar3;
  puVar3 = param_1 + 10;
  KeInitializeMutex(param_1 + 0xc);
  local_108 = L'\0';
  param_1[0xb] = (ulonglong)puVar3;
  *puVar3 = (ulonglong)puVar3;
  param_1[0x13] = 0;
  FUN_0001c770(local_106,0,0xc6);
  iVar6 = 1;
  do {
    local_148._0_4_ = iVar6;
    FUN_000110bc(&local_108,100,L"%s%d",DAT_00020220);
    RtlInitUnicodeString(local_120,&local_108);
    puVar7 = local_120;
    uVar8 = 0x800c;
    local_140 = (code *)((ulonglong)local_140 & 0xffffffffffffff00);
    local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
    local_138 = param_1;
    uVar2 = IoCreateDevice(param_2,0xf8);
    if (-1 < (int)uVar2) {
      if (*param_1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*param_1 + 0x40);
      }
      *(ulonglong **)(lVar5 + 0xf0) = param_1;
      *(uint *)(*param_1 + 0x30) = *(uint *)(*param_1 + 0x30) | 4;
      uVar2 = IoDeleteSymbolicLink(&DAT_00020228);
      FUN_00011008("IoDeleteSymbolicLink = 0x%x",(ulonglong)uVar2,puVar7,uVar8);
      uVar2 = IoCreateSymbolicLink(&DAT_00020228,local_120);
      FUN_00011008("IoCreateSymbolicLink status=0x%x",(ulonglong)uVar2,puVar7,uVar8);
      if ((*param_1 != 0) &&
         (puVar1 = *(undefined4 **)(*param_1 + 0x40), puVar1 != (undefined4 *)0x0)) {
        *puVar1 = 0xd2c8e4c5;
        *(code **)(puVar1 + 0x38) = FUN_00018510;
      }
      if (-1 < (int)uVar2) {
        puVar3 = FUN_0001347c(0x60);
        if (puVar3 == (ulonglong *)0x0) {
          puVar3 = (ulonglong *)0x0;
        }
        else {
          puVar4 = puVar3 + 7;
          puVar3[6] = 0;
          puVar3[9] = 0;
          puVar3[8] = (ulonglong)puVar4;
          *puVar4 = (ulonglong)puVar4;
          puVar3[0xb] = (ulonglong)FUN_000119b8;
          KeInitializeEvent(puVar3,0,0);
          KeInitializeEvent(puVar3 + 3,1);
          local_140 = FUN_00018128;
          local_148 = (ulonglong *)0x0;
          local_138 = puVar3;
          uVar2 = PsCreateSystemThread(&local_128,0,0,0);
          if (-1 < (int)uVar2) {
            local_140 = (code *)0x0;
            local_148 = puVar3 + 6;
            uVar2 = ObReferenceObjectByHandle(local_128,0x1f01ff,0,0);
            ZwClose(local_128);
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar2;
          }
        }
        param_1[0x13] = (ulonglong)puVar3;
        goto LAB_00011e17;
      }
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 999);
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
LAB_00011e17:
  FUN_0001c500(local_38 ^ (ulonglong)auStack_168);
  return;
}




undefined8 FUN_00011f94(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x30) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011fb4(void)

{
  _DAT_00020238 = _DAT_00020238 + -1;
  if (_DAT_00020238 == 0) {
    if (DAT_00020240 != (longlong *)0x0) {
      FUN_00011c28(DAT_00020240);
    }
    DAT_00020240 = (longlong *)0x0;
  }
  RtlFreeUnicodeString(&DAT_00020208);
  RtlFreeUnicodeString(&DAT_00020218);
                    /* WARNING: Could not recover jumptable at 0x00012004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlFreeUnicodeString(&DAT_00020228);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00012014(undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint local_res18 [4];
  
  if (DAT_00020240 == 0) {
    puVar4 = local_res18;
    lVar1 = FUN_00011bd0(param_1,puVar4);
  }
  else {
    _DAT_00020238 = _DAT_00020238 + 1;
    puVar4 = param_2;
    lVar1 = DAT_00020240;
  }
  puVar2 = FUN_0001347c(0xa0);
  if (puVar2 == (ulonglong *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (uint *)(lVar1 + 8);
    puVar3 = FUN_00013d10(puVar2,puVar4,param_1,param_2,(int *)local_res18);
    param_3 = param_1;
    param_4 = param_2;
  }
  if (puVar3 == (undefined8 *)0x0) {
    local_res18[0] = 0xc0000017;
  }
  else {
    FUN_00014124((longlong)puVar3,puVar4,param_3,param_4);
    if ((int)local_res18[0] < 0) {
      FUN_00013ec4(puVar3);
      ExFreePoolWithTag(puVar3,0);
    }
  }
  return local_res18[0];
}




void FUN_000120c4(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  if (param_1[0x12] == 0x800c) {
    FUN_000120f8(DAT_00020240,param_1,param_2,param_4);
  }
  else {
    FUN_00012b70(DAT_00020240,(ulonglong)param_1,(ulonglong)param_2,param_4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_000120f8(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint local_res20 [2];
  
  lVar11 = DAT_00020240;
  puVar15 = (uint *)0x0;
  bVar5 = false;
  puVar14 = (uint *)0x0;
  pcVar2 = *(char **)(param_3 + 0x2e);
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  cVar1 = *pcVar2;
  pcVar12 = (char *)param_2;
  puVar6 = (uint *)0x0;
  puVar16 = param_3;
  if (cVar1 == '\0') {
LAB_000129f9:
    puVar14 = puVar6;
    bVar4 = true;
  }
  else {
    puVar15 = (uint *)0x0;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x0e') {
        uVar8 = *(uint *)(pcVar2 + 0x10);
        puVar15 = (uint *)(ulonglong)uVar8;
        puVar13 = *(uint **)(param_3 + 6);
        puVar14 = (uint *)0xc000000d;
        puVar16 = (uint *)(ulonglong)*(uint *)(pcVar2 + 0x18);
        pcVar12 = (char *)0x244;
        FUN_00011008("MainDispatch %d code=0x%X",0x244,puVar16,param_4);
        uVar17 = *(int *)(pcVar2 + 0x18) - _DAT_00020144;
        puVar6 = puVar14;
        if (uVar17 < 0x800c2b01) {
          if (uVar17 == 0x800c2b00) {
            if (7 < uVar8) {
              plVar3 = *(longlong **)puVar13;
              if ((plVar3 == (longlong *)0x0) || ((int)plVar3[5] != 0x74534298)) {
                puVar14 = (uint *)0xc0000008;
              }
              else {
                FUN_000152c4(plVar3);
                pcVar12 = (char *)0x0;
                ExFreePoolWithTag(plVar3);
                puVar14 = (uint *)0x0;
              }
              bVar4 = true;
              goto LAB_000129fe;
            }
          }
          else if (uVar17 == 0x800c2ac8) {
            if (0x83 < uVar8) {
              *puVar13 = 0x10100;
              pcVar12 = s_EASEUS_Todo_Backup_Driver__c__Ea_00020150;
              puVar16 = (uint *)0x2e;
              memcpy(puVar13 + 1,s_EASEUS_Todo_Backup_Driver__c__Ea_00020150,0x2e);
              puVar14 = (uint *)0x0;
              bVar4 = true;
              goto LAB_000129fe;
            }
          }
          else if (uVar17 == 0x800c2ad0) {
            if (0x83f < uVar8) {
              uVar8 = FUN_00011734(lVar11,puVar13);
              puVar14 = (uint *)(ulonglong)uVar8;
              FUN_00011008("OpenSession",puVar13,puVar16,param_4);
              bVar4 = true;
              pcVar12 = (char *)puVar13;
              goto LAB_000129fe;
            }
          }
          else if (uVar17 == 0x800c2ad8) {
            if (7 < uVar8) {
              lVar11 = *(longlong *)puVar13;
              if ((lVar11 == 0) || (*(int *)(lVar11 + 0x28) != 0x74534298)) {
                bVar4 = true;
              }
              else {
                uVar9 = FUN_0001590c(lVar11);
                puVar14 = (uint *)(uVar9 & 0xffffffff);
                bVar4 = true;
              }
              goto LAB_000129fe;
            }
          }
          else {
            if (uVar17 == 0x800c2ae0) {
              if (uVar8 < 0x28) {
                bVar4 = true;
              }
              else {
                lVar11 = *(longlong *)puVar13;
                if ((lVar11 == 0) || (*(int *)(lVar11 + 0x28) != 0x74534298)) {
                  bVar4 = true;
                }
                else {
                  uVar9 = FUN_0001601c(lVar11,(longlong)puVar13,(ulonglong)puVar16,param_4);
                  puVar14 = (uint *)(uVar9 & 0xffffffff);
                  bVar4 = true;
                  pcVar12 = (char *)puVar13;
                }
              }
              goto LAB_000129fe;
            }
            if (uVar17 == 0x800c2ae8) {
              puVar15 = (uint *)(ulonglong)*(uint *)(pcVar2 + 8);
              if (0x1d < *(uint *)(pcVar2 + 8)) {
                if (((puVar13 == (uint *)0x0) || (*(longlong *)puVar13 == 0)) ||
                   (*(int *)(*(longlong *)puVar13 + 0x28) != 0x74534298)) {
                  bVar4 = true;
                  DbgBreakPointWithStatus(1);
                }
                else {
                  bVar4 = true;
                  bVar5 = true;
                  pcVar12 = (char *)param_3;
                  uVar9 = FUN_00015628(*(longlong *)puVar13,(ulonglong)param_3,(ulonglong)param_2);
                  puVar14 = (uint *)(uVar9 & 0xffffffff);
                  puVar16 = param_2;
                  if ((int)uVar9 != 0x103) {
                    pcVar12 = (char *)(uVar9 & 0xffffffff);
                    FUN_00011008("IOCTL_GETNEXTBLOCK error=0x%X",pcVar12,param_2,param_4);
                    bVar5 = false;
                    puVar16 = param_2;
                  }
                }
                goto LAB_000129fe;
              }
            }
            else if (uVar17 == 0x800c2af0) {
              if (7 < uVar8) {
                lVar11 = *(longlong *)puVar13;
                if ((lVar11 == 0) || (*(int *)(lVar11 + 0x28) != 0x74534298)) {
                  bVar4 = true;
                }
                else {
                  puVar14 = (uint *)(ulonglong)**(uint **)(lVar11 + 0x100);
                  bVar4 = true;
                }
                goto LAB_000129fe;
              }
            }
            else if ((uVar17 == 0x800c2af8) && (0xb < uVar8)) {
              if ((*(longlong *)puVar13 == 0) ||
                 (*(int *)(*(longlong *)puVar13 + 0x28) != 0x74534298)) {
                puVar14 = (uint *)0xc0000008;
              }
              else {
                pcVar12 = (char *)puVar13;
                uVar9 = FUN_00016490(*(longlong *)puVar13,(longlong)puVar13);
                puVar14 = (uint *)(uVar9 & 0xffffffff);
                if (-1 < (int)uVar9) {
                  uVar9 = *(ulonglong *)(*(longlong *)puVar13 + 0xf0);
                  if (uVar9 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar10 = *(longlong *)(*(longlong *)puVar13 + 0xe8) * 100;
                    uVar8 = (uint)(uVar10 / uVar9);
                    pcVar12 = (char *)(uVar10 % uVar9);
                  }
                  puVar13[2] = uVar8;
                }
              }
              bVar4 = true;
              goto LAB_000129fe;
            }
          }
        }
        else if (uVar17 == 0x800c2b0a) {
          puVar15 = (uint *)(ulonglong)*(uint *)(pcVar2 + 8);
          if (0x10 < *(uint *)(pcVar2 + 8)) {
            if ((*(byte *)(*(longlong *)(param_3 + 2) + 10) & 5) == 0) {
              param_4 = (uint *)0x0;
              puVar16 = (uint *)0x1;
              pcVar12 = (char *)0x0;
              puVar14 = (uint *)MmMapLockedPagesSpecifyCache();
            }
            else {
              puVar14 = *(uint **)(*(longlong *)(param_3 + 2) + 0x18);
            }
            bVar4 = true;
            if ((puVar14 != (uint *)0x0) && (puVar14[1] != 0)) {
              pcVar12 = (char *)(ulonglong)*puVar14;
              lVar11 = FUN_000131c0(lVar11,*puVar14);
              if (lVar11 != 0) {
                uVar8 = puVar14[1];
                puVar16 = (uint *)(ulonglong)uVar8;
                pcVar12 = (char *)((ulonglong)(*(int *)(lVar11 + 0x98) * uVar8) + 0x10);
                if (pcVar12 <= puVar15) {
                  param_4 = puVar14 + 4;
                  pcVar12 = *(char **)(puVar14 + 2);
                  uVar9 = FUN_000141f8(lVar11,(longlong)pcVar12,uVar8,param_4);
                  puVar14 = (uint *)(uVar9 & 0xffffffff);
                  goto LAB_000129fe;
                }
              }
            }
          }
        }
        else if (uVar17 == 0x800c2b12) {
          puVar15 = (uint *)(ulonglong)*(uint *)(pcVar2 + 8);
          if (0x10 < *(uint *)(pcVar2 + 8)) {
            if ((*(byte *)(*(longlong *)(param_3 + 2) + 10) & 5) == 0) {
              param_4 = (uint *)0x0;
              puVar16 = (uint *)0x1;
              pcVar12 = (char *)0x0;
              puVar14 = (uint *)MmMapLockedPagesSpecifyCache();
            }
            else {
              puVar14 = *(uint **)(*(longlong *)(param_3 + 2) + 0x18);
            }
            bVar4 = true;
            if ((puVar14 != (uint *)0x0) && (puVar14[1] != 0)) {
              pcVar12 = (char *)(ulonglong)*puVar14;
              lVar11 = FUN_000131c0(lVar11,*puVar14);
              if (lVar11 != 0) {
                uVar8 = puVar14[1];
                puVar16 = (uint *)(ulonglong)uVar8;
                pcVar12 = (char *)((ulonglong)(*(int *)(lVar11 + 0x98) * uVar8) + 0x10);
                if (pcVar12 <= puVar15) {
                  param_4 = puVar14 + 4;
                  pcVar12 = *(char **)(puVar14 + 2);
                  uVar8 = FUN_00014300(lVar11,(longlong)pcVar12,uVar8,param_4);
                  puVar14 = (uint *)(ulonglong)uVar8;
                  goto LAB_000129fe;
                }
              }
            }
          }
        }
        else if (uVar17 == 0x800c2b18) {
          if (((0x1b < uVar8) && (*(longlong *)(param_3 + 6) != 0)) && (3 < *(uint *)(pcVar2 + 8)))
          {
            pcVar12 = (char *)0x4;
            uVar8 = FUN_00013fe4((longlong)param_3,4);
            puVar14 = (uint *)(ulonglong)uVar8;
            bVar4 = true;
            goto LAB_000129fe;
          }
        }
        else if (uVar17 == 0x800c2b20) {
          if (((0x1b < uVar8) && (*(longlong *)(param_3 + 6) != 0)) && (3 < *(uint *)(pcVar2 + 8)))
          {
            pcVar12 = (char *)0x3;
            uVar8 = FUN_00013fe4((longlong)param_3,3);
            puVar14 = (uint *)(ulonglong)uVar8;
            bVar4 = true;
            goto LAB_000129fe;
          }
        }
        else if (uVar17 == 0x800c2b2a) {
          puVar15 = (uint *)(ulonglong)*(uint *)(pcVar2 + 8);
          if (0x10 < *(uint *)(pcVar2 + 8)) {
            if ((*(byte *)(*(longlong *)(param_3 + 2) + 10) & 5) == 0) {
              param_4 = (uint *)0x0;
              puVar16 = (uint *)0x1;
              pcVar12 = (char *)0x0;
              puVar14 = (uint *)MmMapLockedPagesSpecifyCache();
            }
            else {
              puVar14 = *(uint **)(*(longlong *)(param_3 + 2) + 0x18);
            }
            bVar4 = true;
            if ((puVar14 != (uint *)0x0) && (puVar14[1] != 0)) {
              pcVar12 = (char *)local_res20;
              uVar9 = FUN_00014748(*puVar14,(int *)pcVar12);
              puVar6 = (uint *)(uVar9 & 0xffffffff);
              if (-1 < (int)uVar9) {
                uVar8 = puVar14[1];
                puVar16 = (uint *)(ulonglong)uVar8;
                if ((uint *)((ulonglong)(uVar8 * local_res20[0]) + 0x10) <= puVar15) {
                  param_4 = puVar14 + 4;
                  pcVar12 = *(char **)(puVar14 + 2);
                  uVar9 = FUN_00014508(*puVar14,(longlong)pcVar12,uVar8,param_4);
                  puVar14 = (uint *)(uVar9 & 0xffffffff);
                  goto LAB_000129fe;
                }
              }
            }
          }
        }
        else if (uVar17 == 0x800c2b2e) {
          puVar15 = (uint *)(ulonglong)*(uint *)(pcVar2 + 8);
          if (0x10 < *(uint *)(pcVar2 + 8)) {
            if ((*(byte *)(*(longlong *)(param_3 + 2) + 10) & 5) == 0) {
              param_4 = (uint *)0x0;
              puVar16 = (uint *)0x1;
              pcVar12 = (char *)0x0;
              puVar14 = (uint *)MmMapLockedPagesSpecifyCache();
            }
            else {
              puVar14 = *(uint **)(*(longlong *)(param_3 + 2) + 0x18);
            }
            bVar4 = true;
            if ((puVar14 != (uint *)0x0) && (puVar14[1] != 0)) {
              pcVar12 = (char *)local_res20;
              uVar9 = FUN_00014748(*puVar14,(int *)pcVar12);
              puVar6 = (uint *)(uVar9 & 0xffffffff);
              if (-1 < (int)uVar9) {
                uVar8 = puVar14[1];
                puVar16 = (uint *)(ulonglong)uVar8;
                if ((uint *)((ulonglong)(uVar8 * local_res20[0]) + 0x10) <= puVar15) {
                  param_4 = puVar14 + 4;
                  pcVar12 = *(char **)(puVar14 + 2);
                  uVar9 = FUN_000143f8(*puVar14,(longlong)pcVar12,uVar8,param_4);
                  puVar14 = (uint *)(uVar9 & 0xffffffff);
                  goto LAB_000129fe;
                }
              }
            }
          }
        }
        else if ((uVar17 == 0x800c2b38) && (7 < uVar8)) {
          lVar11 = *(longlong *)puVar13;
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x28) != 0x74534298)) {
            bVar4 = true;
          }
          else {
            uVar7 = KeAcquireSpinLockRaiseToDpc(lVar11 + 0x40);
            *(undefined1 *)(lVar11 + 0x48) = uVar7;
            *(undefined4 *)(lVar11 + 0x38) = 3;
            pcVar12 = (char *)CONCAT71((int7)((ulonglong)pcVar12 >> 8),
                                       *(undefined1 *)(lVar11 + 0x48));
            KeReleaseSpinLock(lVar11 + 0x40);
            if (*(int *)(lVar11 + 0x80) < 0x12d) {
              *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
              uVar7 = KeAcquireSpinLockRaiseToDpc(lVar11 + 0x70);
              *(undefined1 *)(lVar11 + 0x78) = uVar7;
              FUN_00013454(lVar11 + 0x50);
              pcVar12 = (char *)CONCAT71((int7)((ulonglong)pcVar12 >> 8),
                                         *(undefined1 *)(lVar11 + 0x78));
              KeReleaseSpinLock(lVar11 + 0x70);
            }
            puVar14 = (uint *)0x0;
            bVar4 = true;
          }
          goto LAB_000129fe;
        }
        goto LAB_000129f9;
      }
      if (cVar1 != '\x12') {
        puVar14 = (uint *)0xc000000d;
        bVar4 = false;
        goto LAB_000129fe;
      }
    }
    FUN_00012aa0(lVar11);
    bVar4 = true;
    pcVar12 = (char *)param_2;
  }
LAB_000129fe:
  if (((bVar4) && ((int)puVar15 != 0)) && (!bVar5)) {
    *(uint **)(param_3 + 0xe) = puVar15;
  }
  if (!bVar5) {
    param_3[0xc] = (uint)puVar14;
  }
  if ((uint)puVar14 == 0x103) {
    FUN_00011008("MainDispatch %d STATUS_PENDING",pcVar12,puVar16,param_4);
  }
  else {
    puVar16 = puVar14;
    FUN_00011008("MainDispatch %d status=0x%X",0x325,puVar14,param_4);
    IofCompleteRequest(param_3,0);
  }
  FUN_00011008("MainDispatch %d end",0x32c,puVar16,param_4);
  return puVar14;
}




undefined8 FUN_00012aa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  KeWaitForSingleObject(param_1 + 0x60,0,0,0,0);
  plVar3 = (longlong *)(param_1 + 0x50);
  if ((longlong *)*plVar3 != plVar3) {
    plVar2 = (longlong *)(*plVar3 + -8);
    while ((plVar2 != (longlong *)0x0 && ((int)plVar2[5] == 0x74534298))) {
      lVar1 = IoGetCurrentProcess();
      if (plVar2[6] == lVar1) {
        FUN_000152c4(plVar2);
        ExFreePoolWithTag(plVar2);
      }
      if (((longlong *)*plVar3 == plVar3) || (plVar2[1] == *plVar2)) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)(plVar2[1] + -8);
      }
    }
  }
  KeReleaseMutex(param_1 + 0x60);
  FUN_0001c770((ulonglong *)&DAT_00020250,0,0x100);
  FUN_0001c770((ulonglong *)&DAT_00020350,0,0x80);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00012b70(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  lVar5 = DAT_00020240;
  uVar8 = 0;
  if (((param_2 == 0) || (param_3 == 0)) ||
     (pcVar1 = *(char **)(param_3 + 0xb8), pcVar1 == (char *)0x0)) {
    *(undefined4 *)(param_3 + 0x30) = 0xc000000d;
    IofCompleteRequest(param_3,0);
    return 0xc000000d;
  }
  lVar2 = *(longlong *)(param_2 + 0x40);
  uVar10 = param_3;
  if (((*pcVar1 == '\x0e') && (*(int *)(*(longlong *)(lVar2 + 0xf0) + 0x18) == -1)) &&
     (*(int *)(pcVar1 + 0x18) - _DAT_00020144 == -0x7ff3d540)) {
    (**(code **)**(undefined8 **)(lVar2 + 0xf0))();
  }
  if (*(int *)(*(longlong *)(lVar2 + 0xf0) + 0x18) == -1) {
    FUN_00011008("FilterDispatch %d",0x381,uVar10,param_4);
LAB_00012c16:
    uVar8 = FUN_00018890(param_2,param_3);
    return uVar8;
  }
  if (*pcVar1 == '\x04') {
    if (*(longlong **)(DAT_00020240 + 0x50) != (longlong *)(DAT_00020240 + 0x50)) {
      uVar8 = FUN_0001189c(lVar5,param_2,param_3);
      return uVar8;
    }
    goto LAB_00012c16;
  }
  if (*pcVar1 != '\x0e') goto LAB_00012c16;
  iVar6 = *(int *)(pcVar1 + 0x18) - _DAT_00020144;
  if (iVar6 == -0x7ff3d540) {
    puVar3 = *(undefined4 **)(param_3 + 0x18);
    if ((puVar3 == (undefined4 *)0x0) || (*(uint *)(pcVar1 + 8) < 4)) {
LAB_00012c7b:
      uVar8 = 0xc000000d;
    }
    else {
      *puVar3 = 0;
      *puVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0xf0) + 0x18);
      *(undefined8 *)(param_3 + 0x38) = 4;
      FUN_00014124(*(longlong *)(lVar2 + 0xf0),puVar3,uVar10,param_4);
    }
  }
  else {
    if ((iVar6 == -0x7ff3d4c2) || (iVar6 == -0x7ff3d4be)) {
      uVar7 = FUN_00013310(lVar5,(ulonglong)(iVar6 == -0x7ff3d4be),param_3,(longlong)pcVar1,lVar2);
      uVar8 = (ulonglong)uVar7;
      *(uint *)(param_3 + 0x30) = uVar7;
      goto LAB_00012c83;
    }
    if (iVar6 != -0x7ff3d4c0) {
      plVar9 = FUN_00012d64(lVar5,param_2,param_3,param_4);
      if ((char)plVar9 != '\0') {
        return (ulonglong)*(uint *)(param_3 + 0x30);
      }
      goto LAB_00012c16;
    }
    piVar4 = *(int **)(param_3 + 0x18);
    if ((piVar4 == (int *)0x0) || (*piVar4 != 0x52455752)) goto LAB_00012c7b;
    piVar4[2] = 0x604;
    *(undefined8 *)(param_3 + 0x38) = 0xc;
  }
  *(int *)(param_3 + 0x30) = (int)uVar8;
LAB_00012c83:
  IofCompleteRequest(param_3,0);
  return uVar8;
}




longlong * FUN_00012d64(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *in_RAX;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  plVar12 = plVar8;
  if ((((param_2 != 0) && (param_3 != 0)) &&
      (pcVar6 = *(char **)(param_3 + 0xb8), pcVar6 != (char *)0x0)) &&
     (((plVar12 = plVar7, *pcVar6 == '\x0e' && (*(longlong *)(param_2 + 0x40) != 0)) &&
      ((lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0xf0), lVar3 != 0 &&
       (in_RAX = (longlong *)(DAT_00020240 + 0x50), (longlong *)*in_RAX != in_RAX)))))) {
    uVar9 = (ulonglong)*(uint *)(pcVar6 + 0x18);
    in_RAX = (longlong *)FUN_00011008("MainDispatch %d code=0x%X",1000,uVar9,param_4);
    iVar2 = *(int *)(pcVar6 + 0x18);
    if (iVar2 == 0x4d004) {
      pcVar6 = "MainDispatch IOCTL_SCSI_PASS_THROUGH VolDevId=0x%x";
    }
    else if (iVar2 == 0x4d014) {
      pcVar6 = "MainDispatch IOCTL_SCSI_PASS_THROUGH_DIRECT VolDevId=0x%x";
    }
    else if (iVar2 == 0x4d028) {
      pcVar6 = "MainDispatch IOCTL_IDE_PASS_THROUGH VolDevId=0x%x";
    }
    else if (iVar2 == 0x4d02c) {
      pcVar6 = "MainDispatch IOCTL_ATA_PASS_THROUGH VolDevId=0x%x";
    }
    else {
      if (iVar2 != 0x4d030) {
        if ((iVar2 == 0x2d9404) &&
           (lVar4 = *(longlong *)(param_3 + 0x18),
           in_RAX = (longlong *)
                    FUN_00011008("MainDispatch IOCTL_STORAGE_MANAGE_DATA_SET_ATTRIBUTES Action=0x%x VolDevId=0x%x"
                                 ,(ulonglong)*(uint *)(lVar4 + 4),(ulonglong)*(uint *)(lVar3 + 0x18)
                                 ,param_4), *(int *)(lVar4 + 4) == 1)) {
          uVar11 = 0;
          uVar10 = 0;
          KeWaitForSingleObject(param_1 + 0x60,0,0,0,0);
          plVar12 = (longlong *)(param_1 + 0x50);
          if ((longlong *)*plVar12 != plVar12) {
            plVar7 = (longlong *)(*plVar12 + -8);
            while (plVar7 != (longlong *)0x0) {
              if (*(int *)(lVar3 + 0x18) == *(int *)(plVar7[3] + 0x18)) {
                uVar5 = KeAcquireSpinLockRaiseToDpc(plVar7 + 8);
                *(undefined1 *)(plVar7 + 9) = uVar5;
                lVar4 = plVar7[7];
                KeReleaseSpinLock(plVar7 + 8,uVar5);
                if (((int)lVar4 == 3) ||
                   (((plVar7[0x1f] != 0 && ((int *)plVar7[0x20] != (int *)0x0)) &&
                    (-1 < *(int *)plVar7[0x20])))) {
                  FUN_00011008("MainDispatch IOCTL_STORAGE_MANAGE_DATA_SET_ATTRIBUTES Action=Trim VolDevId=0x%x"
                               ,(ulonglong)*(uint *)(lVar3 + 0x18),uVar10,uVar11);
                  *(undefined4 *)(param_3 + 0x30) = 0;
                  IofCompleteRequest(param_3,0);
                  plVar8 = (longlong *)0x1;
                  break;
                }
              }
              if (((longlong *)*plVar12 == plVar12) ||
                 (plVar1 = plVar7 + 1, lVar4 = *plVar7, plVar7 = (longlong *)(*plVar1 + -8),
                 *plVar1 == lVar4)) {
                plVar7 = plVar8;
              }
            }
          }
          in_RAX = (longlong *)KeReleaseMutex(param_1 + 0x60,0);
          plVar12 = plVar8;
        }
        goto LAB_00012f62;
      }
      pcVar6 = "MainDispatch IOCTL_ATA_PASS_THROUGH_DIRECT VolDevId=0x%x";
    }
    in_RAX = (longlong *)FUN_00011008(pcVar6,(ulonglong)*(uint *)(lVar3 + 0x18),uVar9,param_4);
  }
LAB_00012f62:
  return (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)plVar12);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00012f88(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar3 = *(longlong *)(param_1 + 0x40);
  cVar1 = *(char *)(lVar2 + 1);
  puVar4 = *(undefined8 **)(lVar3 + 0xf0);
  if (cVar1 == '\0') {
    uVar6 = FUN_00013f18((longlong)puVar4,param_2);
    *(uint *)(puVar4[1] + 0x34) = *(uint *)(puVar4[1] + 0x34) | *(uint *)(puVar4[2] + 0x34) & 7;
    FUN_0001416c((longlong)puVar4);
    LOCK();
    UNLOCK();
    iVar5 = DAT_00020140 + 1;
    DAT_00020140 = DAT_00020140 + 1;
    *(int *)(puVar4 + 3) = iVar5;
    *(int *)(param_2 + 0x30) = (int)uVar6;
    IofCompleteRequest(param_2,0);
    return uVar6 & 0xffffffff;
  }
  if (cVar1 == '\x02') {
    FUN_0001324c((longlong)puVar4);
    uVar6 = FUN_00013f18((longlong)puVar4,param_2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00013ec4(puVar4);
      ExFreePoolWithTag(puVar4,0);
    }
    *(int *)(param_2 + 0x30) = (int)uVar6;
    IofCompleteRequest(param_2,0);
    _DAT_00020238 = _DAT_00020238 + -1;
    if (_DAT_00020238 != 0) {
      return uVar6 & 0xffffffff;
    }
    if (DAT_00020240 != (longlong *)0x0) {
      FUN_00011c28(DAT_00020240);
    }
    DAT_00020240 = (longlong *)0x0;
    return uVar6 & 0xffffffff;
  }
  if (cVar1 != '\x16') {
    uVar6 = FUN_00018890(param_1,param_2);
    return uVar6;
  }
  if (*(int *)(lVar2 + 0x10) != 1) {
    uVar6 = FUN_00018890(param_1,param_2);
    return uVar6 & 0xffffffff;
  }
  KeWaitForSingleObject(lVar3 + 0xf8,0,0,0,0);
  bVar7 = false;
  if (((*(char *)(lVar2 + 8) == '\0') && (*(int *)(lVar3 + 0x110) == 1)) &&
     ((*(uint *)(param_1 + 0x30) >> 0xe & 1) == 0)) {
    bVar7 = true;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
  }
  uVar6 = FUN_00013f18((longlong)puVar4,param_2);
  if (-1 < (int)uVar6) {
    if (*(char *)(lVar2 + 8) == '\0') {
      LOCK();
      *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(lVar3 + 0x110) = *(int *)(lVar3 + 0x110) + 1;
      UNLOCK();
    }
    if (*(char *)(lVar2 + 8) == '\0') goto LAB_0001307c;
    bVar7 = *(int *)(lVar3 + 0x110) == 1;
  }
  if (bVar7) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffdfff;
  }
LAB_0001307c:
  KeSetEvent(lVar3 + 0xf8,0,0);
  IofCompleteRequest(param_2,0);
  return uVar6 & 0xffffffff;
}




void FUN_00013170(longlong param_1,longlong param_2)

{
  PoStartNextPowerIrp(param_2);
  *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
  *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
                    /* WARNING: Could not recover jumptable at 0x000131b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PoCallDriver(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xf0) + 0x10),param_2);
  return;
}




longlong FUN_000131c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  KeWaitForSingleObject(param_1 + 0x18,0,0,0,0);
  plVar1 = (longlong *)(param_1 + 8);
  if ((longlong *)*plVar1 == plVar1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1 + -0x48;
    while ((lVar2 != 0 && (*(int *)(lVar2 + 0x18) != param_2))) {
      if (((longlong *)*plVar1 == plVar1) ||
         (*(longlong *)(lVar2 + 0x48) == *(longlong *)(lVar2 + 0x40))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x48) + -0x48;
      }
    }
  }
  KeReleaseMutex(param_1 + 0x18,0);
  return lVar2;
}




void FUN_0001324c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (DAT_00020240 != 0) {
    KeWaitForSingleObject(DAT_00020240 + 0x60,0,0,0,0);
    plVar3 = (longlong *)(DAT_00020240 + 0x50);
    lVar2 = DAT_00020240;
    if ((longlong *)*plVar3 != plVar3) {
      plVar3 = (longlong *)(*plVar3 + -8);
      while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
        if ((*(longlong **)(lVar2 + 0x50) == (longlong *)(lVar2 + 0x50)) || (plVar1[1] == *plVar1))
        {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)(plVar1[1] + -8);
        }
        if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == *(int *)(plVar1[3] + 0x18))) {
          FUN_000152c4(plVar1);
          ExFreePoolWithTag(plVar1,0);
          lVar2 = DAT_00020240;
        }
      }
    }
    KeReleaseMutex(lVar2 + 0x60,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00013310(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                longlong param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar3 = -0x3ffffff3;
  if (((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
      ((*(longlong *)(param_5 + 0xf0) != 0 &&
       (uVar1 = *(uint *)(param_4 + 8), 0x1b < *(uint *)(param_4 + 0x10))))) &&
     ((piVar2 = *(int **)(param_3 + 0x18), piVar2 != (int *)0x0 && (*(longlong *)(param_3 + 8) != 0)
      ))) {
    lVar4 = FUN_000131c0(param_1,*(int *)(*(longlong *)(param_5 + 0xf0) + 0x18));
    if (lVar4 == 0) {
      iVar3 = -0x3ffffff0;
    }
    else if (((*piVar2 == 0x52455752) && (uVar1 == piVar2[3])) &&
            ((*(int *)(lVar4 + 0x98) == piVar2[2] &&
             ((uint)(*(int *)(lVar4 + 0x98) * piVar2[6]) <= uVar1)))) {
      lVar5 = *(longlong *)(param_3 + 8);
      if ((*(byte *)(lVar5 + 10) & 5) == 0) {
        lVar5 = MmMapLockedPagesSpecifyCache(lVar5,0,1,0,0,0x10);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x18);
      }
      if (lVar5 == 0) {
        iVar3 = -0x3fffffe9;
      }
      else if (*(int *)(param_4 + 0x18) - _DAT_00020144 == -0x7ff3d4c2) {
        uVar6 = FUN_000141f8(lVar4,*(longlong *)(piVar2 + 4),piVar2[6],lVar5);
        iVar3 = (int)uVar6;
      }
      else {
        iVar3 = FUN_00014300(lVar4,*(longlong *)(piVar2 + 4),piVar2[6],lVar5);
      }
    }
  }
  return iVar3;
}




void FUN_00013454(longlong param_1)

{
  if (param_1 != 0) {
    KeReleaseSemaphore(param_1,0,1);
  }
  return;
}




ulonglong * FUN_0001347c(ulonglong param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)ExAllocatePoolWithTag(0,param_1,0x4c435545);
  if (puVar1 != (ulonglong *)0x0) {
    FUN_0001c770(puVar1,0,param_1);
  }
  return puVar1;
}




ulonglong FUN_000134c4(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint local_30 [4];
  undefined1 local_20 [24];
  
  puVar6 = local_30;
  puVar5 = local_20;
  uVar4 = 0;
  uVar3 = 0x18;
  lVar1 = IoBuildDeviceIoControlRequest(0x70000,param_1,0,0);
  if (lVar1 == 0) {
    uVar2 = 0xc000009a;
  }
  else {
    KeInitializeEvent(local_20,0,0);
    uVar2 = IofCallDriver(param_1,lVar1);
    if ((int)uVar2 == 0x103) {
      KeWaitForSingleObject(local_20,5,0,0,0,uVar3,uVar4,puVar5,puVar6);
      uVar2 = (ulonglong)local_30[0];
    }
  }
  return uVar2;
}




ulonglong * FUN_00013598(ulonglong *param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3;
  *param_1 = param_2;
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = uVar5;
  param_1[3] = 0;
  iVar4 = 0;
  if ((uVar5 == 0) || (param_2 == 0)) {
    iVar4 = -0x3ffffff3;
  }
  if (-1 < iVar4) {
    uVar1 = MmSizeOfMdl(param_2,param_3 & 0xffffffff);
    if (uVar1 == 0) {
      puVar2 = (ulonglong *)0x0;
    }
    else {
      puVar2 = FUN_0001347c(uVar1);
    }
    param_1[3] = (ulonglong)puVar2;
    if (puVar2 == (ulonglong *)0x0) {
      iVar4 = -0x3fffffe9;
    }
    if (-1 < iVar4) {
      *puVar2 = 0;
      sVar3 = ((short)(((uint)*param_1 & 0xfff) + 0xfff + (uVar5 & 0xfff) >> 0xc) +
               (short)((param_3 & 0xffffffff) >> 0xc) + 6) * 8;
      *(short *)(param_1[3] + 8) = sVar3;
      *(undefined2 *)(param_1[3] + 10) = 0;
      *(ulonglong *)(param_1[3] + 0x20) = *param_1 & 0xfffffffffffff000;
      *(uint *)(param_1[3] + 0x2c) = (uint)*param_1 & 0xfff;
      *(uint *)(param_1[3] + 0x28) = uVar5;
      MmProbeAndLockPages(param_1[3],CONCAT31((uint3)(byte)((ushort)sVar3 >> 8),1));
      uVar1 = param_1[3];
      if ((*(byte *)(uVar1 + 10) & 5) == 0) {
        uVar1 = MmMapLockedPagesSpecifyCache(uVar1,0,1,0,0,0x20);
      }
      else {
        uVar1 = *(ulonglong *)(uVar1 + 0x18);
      }
      param_1[1] = uVar1;
      if (uVar1 == 0) {
        MmUnlockPages(param_1[3]);
        FUN_0001bab0(param_1[3]);
        param_1[3] = 0;
        iVar4 = -0x3fffffe9;
      }
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return param_1;
}




ulonglong FUN_00013738(undefined4 *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 2);
  *(undefined1 *)(param_1 + 4) = uVar2;
  if (param_1[0x14] == 0) {
    *param_1 = 3;
    KeReleaseSpinLock(param_1 + 2,*(undefined1 *)(param_1 + 4));
    uVar1 = param_1[0x12];
    uVar3 = (ulonglong)uVar1;
    if ((int)uVar1 < 0x12d) {
      param_1[0x12] = uVar1 + 1;
      uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 0xe);
      *(undefined1 *)(param_1 + 0x10) = uVar2;
      FUN_00013454((longlong)(param_1 + 6));
      uVar3 = KeReleaseSpinLock(param_1 + 0xe,*(undefined1 *)(param_1 + 0x10));
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    *param_1 = 2;
    KeReleaseSpinLock(param_1 + 2,*(undefined1 *)(param_1 + 4));
    uVar1 = param_1[0x12];
    uVar3 = (ulonglong)uVar1;
    if ((int)uVar1 < 0x12d) {
      param_1[0x12] = uVar1 + 1;
      uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 0xe);
      *(undefined1 *)(param_1 + 0x10) = uVar2;
      FUN_00013454((longlong)(param_1 + 6));
      uVar3 = KeReleaseSpinLock(param_1 + 0xe,*(undefined1 *)(param_1 + 0x10));
    }
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}




undefined8 *
FUN_000137f8(undefined8 *param_1,undefined8 param_2,ulonglong param_3,uint param_4,
            undefined4 *param_5)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(uint *)(param_1 + 3) = param_4;
  param_1[5] = 0;
  uVar5 = 0;
  param_1[7] = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = (ulonglong)param_4;
    if (param_3 % uVar4 == 0) {
      iVar1 = (int)(((uVar4 - 1) + param_3) / uVar4);
      *(int *)((longlong)param_1 + 0x1c) = iVar1;
      uVar3 = iVar1 + 7U >> 3;
      *(uint *)(param_1 + 4) = uVar3;
      if (uVar3 == 0) {
        puVar2 = (ulonglong *)0x0;
      }
      else {
        puVar2 = FUN_0001347c((ulonglong)uVar3);
      }
      *param_1 = puVar2;
      if (puVar2 == (ulonglong *)0x0) {
        uVar5 = 0xc0000017;
      }
      else {
        FUN_0001c770(puVar2,0xffffffff,(ulonglong)*(uint *)(param_1 + 4));
      }
      goto LAB_00013886;
    }
  }
  uVar5 = 0xc000000d;
LAB_00013886:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar5;
  }
  return param_1;
}




undefined8 FUN_000138a8(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar4 = KeAcquireSpinLockRaiseToDpc(param_1 + 5);
  *(undefined1 *)(param_1 + 6) = uVar4;
  uVar9 = *(uint *)(param_1 + 3);
  uVar8 = CONCAT44(0,uVar9);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2 - param_1[1];
  uVar7 = SUB164(auVar3 / auVar2,0);
  uVar6 = ((int)((((param_3 & 0xffffffff) - param_1[1]) + *param_2 + -1 + uVar8) / uVar8) - uVar7) *
          uVar9;
  uVar8 = (ulonglong)uVar6 / (ulonglong)uVar9;
  uVar9 = (uint)uVar8;
  uVar5 = SUB168(auVar3 / auVar2,0);
  while ((uVar9 != 0 && (uVar7 = (uint)uVar5, uVar7 < *(uint *)((longlong)param_1 + 0x1c)))) {
    FUN_00011008("CBitmap::ResetSectors (%I64u,%u) bitOff=%u",*param_2,(ulonglong)uVar6,
                 uVar5 & 0xffffffff);
    uVar7 = uVar7 + 1;
    pbVar1 = (byte *)(((uVar5 & 0xffffffff) >> 3) + *param_1);
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)uVar5 & 7));
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    uVar5 = (ulonglong)uVar7;
  }
  if (*(uint *)((longlong)param_1 + 0x1c) <= uVar7) {
    FUN_00011008("bitmap out range (%I64u,%u) bitOff=%u t=%u",*param_2,(ulonglong)uVar6,
                 (ulonglong)uVar7);
  }
  KeReleaseSpinLock(param_1 + 5,(char)param_1[6]);
  return 0;
}




undefined8 FUN_000139a8(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar4 = KeAcquireSpinLockRaiseToDpc(param_1 + 5);
  *(undefined1 *)(param_1 + 6) = uVar4;
  uVar9 = *(uint *)(param_1 + 3);
  uVar8 = CONCAT44(0,uVar9);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2 - param_1[1];
  uVar7 = SUB164(auVar3 / auVar2,0);
  uVar6 = ((int)((((param_3 & 0xffffffff) - param_1[1]) + *param_2 + -1 + uVar8) / uVar8) - uVar7) *
          uVar9;
  uVar8 = (ulonglong)uVar6 / (ulonglong)uVar9;
  uVar9 = (uint)uVar8;
  uVar5 = SUB168(auVar3 / auVar2,0);
  while ((uVar9 != 0 && (uVar7 = (uint)uVar5, uVar7 < *(uint *)((longlong)param_1 + 0x1c)))) {
    FUN_00011008("CBitmap::SetSectors (%I64u,%u) bitOff=%u",*param_2,(ulonglong)uVar6,
                 uVar5 & 0xffffffff);
    uVar7 = uVar7 + 1;
    pbVar1 = (byte *)(((uVar5 & 0xffffffff) >> 3) + *param_1);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar5 & 7);
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    uVar5 = (ulonglong)uVar7;
  }
  if (*(uint *)((longlong)param_1 + 0x1c) <= uVar7) {
    FUN_00011008("bitmap out range (%I64u,%u) bitOff=%u t=%u",*param_2,(ulonglong)uVar6,
                 (ulonglong)uVar7);
  }
  KeReleaseSpinLock(param_1 + 5,(char)param_1[6]);
  return 0;
}




int FUN_00013aa4(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar9 = 0;
  iVar8 = 0;
  uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 5);
  *(undefined1 *)(param_1 + 6) = uVar3;
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 3));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2 - param_1[1];
  uVar5 = SUB168(auVar2 / auVar1,0);
  uVar7 = ((param_3 & 0xffffffff) - param_1[1]) + -1 + *param_2;
  uVar4 = (uint)(uVar7 / uVar12);
  uVar7 = uVar7 % uVar12;
  uVar13 = SUB164(auVar2 / auVar1,0);
  uVar11 = (uVar4 - uVar13) + 1;
  iVar10 = iVar9;
  if (uVar11 != 0) {
    if (*(uint *)((longlong)param_1 + 0x1c) <= uVar4) {
      uVar4 = *(uint *)((longlong)param_1 + 0x1c) - 1;
    }
    iVar10 = iVar8;
    if (uVar13 <= uVar4) {
      do {
        bVar6 = *(byte *)(((uVar5 & 0xffffffff) >> 3) + *param_1) >> ((byte)uVar5 & 7);
        uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar6);
        if ((bVar6 & 1) != 0) {
          *param_2 = (ulonglong)*(uint *)(param_1 + 3) * (uVar5 & 0xffffffff) + param_1[1];
          uVar4 = *(int *)((longlong)param_1 + 0x1c) - (int)uVar5;
          if (uVar4 < uVar11) {
            uVar11 = uVar4;
          }
          if (uVar11 != 0) goto LAB_00013b71;
          break;
        }
        uVar13 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar13;
        uVar11 = uVar11 - 1;
      } while (uVar13 <= uVar4);
    }
  }
  goto LAB_00013b9d;
  while( true ) {
    iVar9 = iVar9 + (int)param_1[3];
    uVar5 = (ulonglong)((uint)uVar5 + 1);
    uVar11 = uVar11 - 1;
    iVar10 = iVar9;
    if (uVar11 == 0) break;
LAB_00013b71:
    iVar10 = iVar9;
    if ((*(uint *)((longlong)param_1 + 0x1c) <= (uint)uVar5) ||
       (bVar6 = *(byte *)(((uVar5 & 0xffffffff) >> 3) + *param_1) >> ((byte)uVar5 & 7),
       uVar7 = CONCAT71((uint7)((uVar5 & 0xffffffff) >> 0xb),bVar6), (bVar6 & 1) == 0)) break;
  }
LAB_00013b9d:
  KeReleaseSpinLock(param_1 + 5,CONCAT71((int7)(uVar7 >> 8),(char)param_1[6]));
  return iVar10;
}




void FUN_00013bdc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStackY_a8 [32];
  uint7 in_stack_ffffffffffffff81;
  uint local_68 [5];
  ulonglong local_54 [2];
  uint local_44;
  undefined4 local_40;
  ulonglong local_3c [2];
  uint local_2c;
  ulonglong local_18;
  
  local_18 = DAT_00020100 ^ (ulonglong)auStackY_a8;
  local_68[0] = 0;
  local_40 = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  FUN_0001c770(local_3c,0,0x24);
  local_68[4] = 0;
  uVar2 = 0x14;
  FUN_0001c770(local_54,0,0x14);
  uVar1 = 0x200;
  if (param_1 != 0) {
    param_4 = 0;
    FUN_0001965c(0x70000,param_1,local_68 + 4,0,0x18,(ulonglong)in_stack_ffffffffffffff81 << 8,
                 (undefined8 *)local_68);
    uVar2 = 0x200;
    FUN_00011008("DiskperfGetSectorSize IOCTL_DISK_GET_DRIVE_GEOMETRY status=0x%X,ss=%u",
                 (ulonglong)local_68[0],0x200,param_4);
    uVar1 = local_44;
    if ((int)local_68[0] < 0) {
      param_4 = 0;
      FUN_0001965c(0x700a0,param_1,&local_40,0,0x28,(ulonglong)in_stack_ffffffffffffff81 << 8,
                   (undefined8 *)local_68);
      uVar1 = 0x200;
      if (-1 < (int)local_68[0]) {
        uVar1 = local_2c;
      }
      uVar2 = (ulonglong)uVar1;
      FUN_00011008("DiskperfGetSectorSize status=0x%X,ss=%u",(ulonglong)local_68[0],uVar2,param_4);
    }
  }
  FUN_00011008("DiskperfGetSectorSize sectorsize=%u",(ulonglong)uVar1,uVar2,param_4);
  FUN_0001c500(local_18 ^ (ulonglong)auStackY_a8);
  return;
}




undefined8 *
FUN_00013d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[8] = param_2;
  param_1[2] = 0;
  plVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_0001f2c8;
  *plVar1 = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_0001f2f0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_0001c770(param_1 + 4,0,0x20);
  uVar9 = 7;
  uVar7 = 0;
  iVar5 = IoCreateDevice(param_3,0x130,0,7,0x100,0,plVar1);
  if (-1 < iVar5) {
    *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) | 0x10;
    lVar2 = *(longlong *)(*plVar1 + 0x40);
    *(undefined8 **)(lVar2 + 0xf0) = param_1;
    lVar6 = IoAttachDeviceToDeviceStack(*plVar1);
    param_1[2] = lVar6;
    if (lVar6 == 0) {
      iVar5 = -0x3ffffff2;
    }
    else {
      *(undefined4 *)(lVar2 + 0x110) = 0;
      uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      uVar7 = 0;
      *(undefined8 *)(lVar2 + 0x118) = param_1[2];
      KeInitializeEvent(lVar2 + 0xf8);
      uVar4 = FUN_00013bdc(param_1[2],uVar7,uVar8,uVar9);
      *(undefined2 *)(*plVar1 + 0x130) = uVar4;
      FUN_00011008("add device sectorsize=%u",(ulonglong)*(ushort *)(*plVar1 + 0x130),uVar8,uVar9);
      *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) | 0x2000;
      *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) & 0xffffff7f;
      FUN_0001806c(param_1[8],param_1 + 9);
      if ((*plVar1 != 0) && (puVar3 = *(undefined4 **)(*plVar1 + 0x40), puVar3 != (undefined4 *)0x0)
         ) {
        *puVar3 = 0xd2c8e4c5;
        *(code **)(puVar3 + 0x38) = FUN_00018510;
      }
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar5;
  }
  return param_1;
}




void FUN_00013ec4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_0001f2c8;
  FUN_000180d0(param_1[8],param_1 + 9);
  if (param_1[2] != 0) {
    IoDetachDevice();
  }
  if (param_1[1] != 0) {
    IoDeleteDevice();
  }
  FUN_0001be10(param_1 + 0xb);
  return;
}




ulonglong FUN_00013f18(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  _Src = *(void **)(param_2 + 0xb8);
  memcpy((void *)((longlong)_Src + -0x48),_Src,0x38);
  *(undefined1 *)((longlong)_Src + -0x45) = 0;
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(undefined1 *)(lVar1 + -0x45) = 0xe0;
  *(code **)(lVar1 + -0x10) = FUN_00013fc0;
  *(undefined1 **)(lVar1 + -8) = local_28;
  uVar2 = IofCallDriver(*(undefined8 *)(param_1 + 0x10),param_2);
  if ((int)uVar2 == 0x103) {
    KeWaitForSingleObject(local_28,0,0,0,0);
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x30);
  }
  return uVar2;
}




undefined8 FUN_00013fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  KeSetEvent(param_3,0,0);
  return 0xc0000016;
}




int FUN_00013fe4(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_res18 [2];
  int local_48 [2];
  undefined8 local_40;
  undefined1 local_38 [32];
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  local_res8 = 0;
  iVar4 = ObReferenceObjectByHandle(*puVar2,0,*(undefined8 *)IoFileObjectType_exref,0,&local_res8,0)
  ;
  if (-1 < iVar4) {
    uVar5 = IoGetRelatedDeviceObject(local_res8);
    KeInitializeEvent(local_38,0,0);
    local_res18[0] = puVar2[2];
    lVar6 = IoBuildSynchronousFsdRequest
                      (param_2,uVar5,puVar2[1],*(undefined4 *)(puVar2 + 3),local_res18,local_38,
                       local_48);
    if (lVar6 == 0) {
      iVar4 = -0x3fffff66;
    }
    else {
      lVar3 = *(longlong *)(lVar6 + 0xb8);
      pbVar1 = (byte *)(lVar3 + -0x46);
      *pbVar1 = *pbVar1 | 0x12;
      *(longlong *)(lVar3 + -0x18) = local_res8;
      iVar4 = IofCallDriver(uVar5,lVar6);
      if (iVar4 == 0x103) {
        KeWaitForSingleObject(local_38,0,0,0,0);
        iVar4 = local_48[0];
      }
      if (iVar4 == 0) {
        *(undefined8 *)(param_1 + 0x38) = 8;
        *puVar2 = local_40;
      }
    }
  }
  if (local_res8 != 0) {
    ObfDereferenceObject();
  }
  return iVar4;
}




void FUN_00014124(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_1;
  FUN_00011008("InitSectorSize m_pTargetDeviceObject=%I64u pDisk=%I64u",uVar2,param_1,param_4);
  uVar1 = FUN_00013bdc(*(longlong *)(param_1 + 0x10),uVar2,lVar3,param_4);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) + 0x128) = uVar1;
  return;
}




int FUN_0001416c(longlong param_1)

{
  int iVar1;
  uint7 in_stack_ffffffffffffffd1;
  int local_18 [4];
  
  local_18[1] = 0;
  local_18[0] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  FUN_0001965c(0x74004,*(longlong *)(param_1 + 0x10),(void *)(param_1 + 0x20),0,0x20,
               (ulonglong)in_stack_ffffffffffffffd1 << 8,(undefined8 *)local_18);
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = 0;
  if (local_18[0] < 0) {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x28);
    iVar1 = local_18[0];
  }
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) + 0x128) =
       *(undefined4 *)(param_1 + 0x98);
  return iVar1;
}




ulonglong FUN_000141f8(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_res10;
  uint local_38 [4];
  undefined1 local_28 [32];
  
  local_res10 = param_2 * (ulonglong)*(uint *)(param_1 + 0x98);
  KeInitializeEvent(local_28,0,0);
  uVar3 = (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x98));
  lVar2 = IoBuildSynchronousFsdRequest
                    (4,*(undefined8 *)(param_1 + 0x10),param_4,uVar3,&local_res10,local_28,local_38)
  ;
  if (lVar2 == 0) {
    uVar3 = 0xc000009a;
  }
  else {
    *(longlong *)(param_1 + 0x78) = lVar2;
    *(undefined8 *)(param_1 + 0x80) = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_00011008("ownirp new =%p",lVar2,param_4,uVar3);
    pbVar1 = (byte *)(*(longlong *)(lVar2 + 0xb8) + -0x46);
    *pbVar1 = *pbVar1 | 0x12;
    uVar3 = IofCallDriver(*(undefined8 *)(param_1 + 0x10),lVar2);
    if ((int)uVar3 == 0x103) {
      KeWaitForSingleObject(local_28,0,0,0,0);
      uVar3 = (ulonglong)local_38[0];
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return uVar3;
}




int FUN_00014300(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res10;
  int local_38 [4];
  undefined1 local_28 [32];
  
  local_res10 = param_2 * (ulonglong)*(uint *)(param_1 + 0x98);
  KeInitializeEvent(local_28,0,0);
  lVar3 = IoBuildSynchronousFsdRequest
                    (3,*(undefined8 *)(param_1 + 0x10),param_4,param_3 * *(int *)(param_1 + 0x98),
                     &local_res10,local_28,local_38);
  if (lVar3 == 0) {
    iVar2 = -0x3fffff66;
  }
  else {
    pbVar1 = (byte *)(*(longlong *)(lVar3 + 0xb8) + -0x46);
    *pbVar1 = *pbVar1 | 2;
    iVar2 = IofCallDriver(*(undefined8 *)(param_1 + 0x10),lVar3);
    if (iVar2 == 0x103) {
      KeWaitForSingleObject(local_28,0,0,0,0);
      iVar2 = local_38[0];
    }
  }
  FUN_00011008("ReadSectors s=%I64u,secs=%u sectorsize=%u",local_res10,(ulonglong)param_3,
               (ulonglong)*(uint *)(param_1 + 0x98));
  return iVar2;
}




ulonglong FUN_000143f8(uint param_1,longlong param_2,int param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res10;
  uint local_38 [2];
  uint local_30 [4];
  undefined1 local_20 [24];
  
  local_res10 = param_2;
  lVar2 = FUN_00014618(param_1);
  if (lVar2 == 0) {
    uVar3 = 0xc0000225;
  }
  else {
    uVar3 = FUN_00014748(param_1,(int *)local_38);
    if (-1 < (int)uVar3) {
      local_res10 = local_res10 * (ulonglong)local_38[0];
      KeInitializeEvent(local_20,0,0);
      lVar4 = IoBuildSynchronousFsdRequest
                        (3,lVar2,param_4,local_38[0] * param_3,&local_res10,local_20,local_30);
      if (lVar4 == 0) {
        uVar3 = 0xc000009a;
      }
      else {
        pbVar1 = (byte *)(*(longlong *)(lVar4 + 0xb8) + -0x46);
        *pbVar1 = *pbVar1 | 2;
        uVar3 = IofCallDriver(lVar2,lVar4);
        if ((int)uVar3 == 0x103) {
          KeWaitForSingleObject(local_20,0,0,0,0);
          uVar3 = (ulonglong)local_30[0];
        }
      }
    }
  }
  return uVar3;
}




ulonglong FUN_00014508(uint param_1,longlong param_2,int param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res10;
  uint local_38 [2];
  uint local_30 [4];
  undefined1 local_20 [24];
  
  local_res10 = param_2;
  lVar2 = FUN_00014618(param_1);
  if (lVar2 == 0) {
    uVar3 = 0xc0000225;
  }
  else {
    uVar3 = FUN_00014748(param_1,(int *)local_38);
    if (-1 < (int)uVar3) {
      local_res10 = local_res10 * (ulonglong)local_38[0];
      KeInitializeEvent(local_20,0,0);
      lVar4 = IoBuildSynchronousFsdRequest
                        (4,lVar2,param_4,local_38[0] * param_3,&local_res10,local_20,local_30);
      if (lVar4 == 0) {
        uVar3 = 0xc000009a;
      }
      else {
        pbVar1 = (byte *)(*(longlong *)(lVar4 + 0xb8) + -0x46);
        *pbVar1 = *pbVar1 | 0x12;
        uVar3 = IofCallDriver(lVar2,lVar4);
        if ((int)uVar3 == 0x103) {
          KeWaitForSingleObject(local_20,0,0,0,0);
          uVar3 = (ulonglong)local_30[0];
        }
      }
    }
  }
  return uVar3;
}




void FUN_00014618(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  longlong local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  wchar_t local_218;
  ulonglong local_216 [63];
  ulonglong local_18;
  
  local_18 = DAT_00020100 ^ (ulonglong)auStack_258;
  local_238 = 0;
  local_230 = 0;
  local_218 = L'\0';
  FUN_0001c770(local_216,0,0x1fe);
  if (*(longlong *)(&DAT_00020250 + (ulonglong)param_1 * 8) != 0) goto LAB_0001471a;
  FUN_000110bc(&local_218,0x100,L"\\GLOBAL??\\PhysicalDrive%u",(ulonglong)param_1);
  RtlInitUnicodeString(local_228,&local_218);
  iVar1 = IoGetDeviceObjectPointer(local_228,0x80,&local_238,&local_230);
  if (iVar1 < 0) {
    FUN_000110bc(&local_218,0x100,L"\\??\\PhysicalDrive%u",(ulonglong)param_1);
    RtlInitUnicodeString(local_228,&local_218);
    iVar1 = IoGetDeviceObjectPointer(local_228,0x80,&local_238,&local_230);
    uVar2 = local_230;
    if (-1 < iVar1) goto LAB_0001470c;
  }
  else {
LAB_0001470c:
    uVar2 = *(undefined8 *)(local_238 + 8);
  }
  *(undefined8 *)(&DAT_00020250 + (ulonglong)param_1 * 8) = uVar2;
LAB_0001471a:
  FUN_0001c500(local_18 ^ (ulonglong)auStack_258);
  return;
}




ulonglong FUN_00014748(uint param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong local_24 [2];
  int local_14;
  
  FUN_0001c770(local_24,0,0x14);
  if (*(int *)(&DAT_00020350 + (ulonglong)param_1 * 4) == 0) {
    lVar1 = FUN_00014618(param_1);
    if (lVar1 == 0) {
      uVar2 = 0xc0000225;
    }
    else {
      uVar2 = FUN_000134c4(lVar1);
      if (-1 < (int)uVar2) {
        *param_2 = local_14;
      }
    }
  }
  else {
    *param_2 = *(int *)(&DAT_00020350 + (ulonglong)param_1 * 4);
    uVar2 = 0;
  }
  return uVar2;
}




bool FUN_000147e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_38 [4];
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  lVar2 = IoBuildDeviceIoControlRequest(0x70024,param_2,0,0,0,0,0,local_28,local_38);
  if (lVar2 == 0) {
    iVar1 = -0x3fffff66;
  }
  else {
    *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + -0x18) = param_1;
    iVar1 = IofCallDriver(param_2,lVar2);
    if (iVar1 == 0x103) {
      KeWaitForSingleObject(local_28,0,0,0,0);
      iVar1 = local_38[0];
    }
  }
  return iVar1 == -0x3fffff5e;
}




undefined8 FUN_000148a8(longlong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  ulonglong *puVar13;
  uint uVar14;
  undefined4 local_res8 [2];
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  undefined4 local_40;
  longlong local_3c;
  
  puVar8 = (ulonglong *)0x0;
  local_3c = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
  local_58 = &LAB_0001ba9c;
  local_50 = FUN_0001bab0;
  local_48 = FUN_0001bacc;
  local_40 = *(undefined4 *)(local_3c + 0x128);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    ExFreePoolWithTag();
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar5 = FUN_0001347c(0xb0);
  puVar13 = puVar8;
  if (puVar5 != (ulonglong *)0x0) {
    *puVar5 = (ulonglong)&PTR_FUN_0001f2d8;
    FUN_0001c770(puVar5 + 1,0,0x24);
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar13 = puVar5;
  }
  if (puVar13 == (ulonglong *)0x0) {
    return 0;
  }
  memcpy(puVar13 + 1,&local_58,0x24);
  puVar6 = (undefined1 *)(*(code *)puVar13[1])((int)puVar13[4]);
  local_res8[0] = 0;
  puVar5 = puVar8;
  if (puVar6 != (undefined1 *)0x0) {
    iVar4 = (*(code *)puVar13[3])
                      (puVar6,(int)puVar13[4],0,0,local_res8,
                       *(undefined8 *)((longlong)puVar13 + 0x24));
    bVar3 = true;
    if (iVar4 == 0) {
      FUN_000198ec((longlong)puVar13 + 0x4c,(undefined1 *)((longlong)puVar13 + 0x4c),puVar6);
      iVar12 = 0;
      iVar4 = 0;
      if ((((*(short *)((longlong)puVar13 + 0x66) == 0) &&
           (iVar4 = iVar12, *(longlong *)(puVar6 + 0x52) == 0x2020203233544146)) &&
          ((short)puVar13[0xb] != 0)) && (*(char *)((longlong)puVar13 + 0x5a) != '\0')) {
        iVar4 = (uint)*(ushort *)((longlong)puVar13 + 0x5c) +
                (int)((uint)(ushort)puVar13[0xc] * 0x20 + -1 + (uint)(ushort)puVar13[0xb]) /
                (int)(uint)(ushort)puVar13[0xb] +
                (uint)*(byte *)((longlong)puVar13 + 0x5e) * *(int *)((longlong)puVar13 + 0x74);
      }
      *(int *)(puVar13 + 9) = iVar4;
      bVar3 = true;
      if (iVar4 != 0) {
        bVar3 = false;
      }
    }
    (*(code *)puVar13[2])(puVar6);
    if (!bVar3) {
      *(undefined4 *)(puVar13 + 6) = 0xffffffff;
      uVar11 = (uint)*(byte *)((longlong)puVar13 + 0x5a) * (uint)(ushort)puVar13[0xb];
      *(uint *)(puVar13 + 7) = uVar11;
      uVar14 = (-(uint)(*(short *)((longlong)puVar13 + 0x66) != 0) & 0xfffffffe) + 4;
      *(uint *)((longlong)puVar13 + 0x34) = uVar11 / uVar14;
      uVar7 = (*(code *)puVar13[1])(uVar11,(ulonglong)uVar11 % (ulonglong)uVar14);
      puVar13[8] = uVar7;
      FUN_0001a10c((longlong)puVar13,"PAGEFILE.SYS",FUN_00014d2c,param_1);
      *(undefined1 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 0) {
        auVar2 = ZEXT816(0x10) * ZEXT416(*(uint *)(param_1 + 0x6c));
        uVar7 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        if (uVar7 != 0) {
          puVar8 = FUN_0001347c(uVar7);
        }
        *(ulonglong **)(param_1 + 0x60) = puVar8;
      }
      FUN_0001a10c((longlong)puVar13,"PAGEFILE.SYS",FUN_00014d2c,param_1);
      goto LAB_00014ce5;
    }
  }
  puVar13[8] = 0;
  puVar9 = FUN_0001347c(0x138);
  if (puVar9 != (ulonglong *)0x0) {
    *puVar9 = (ulonglong)&PTR_FUN_0001f2e8;
    puVar9[0xf] = (ulonglong)&PTR_FUN_0001f2e0;
    *(undefined4 *)(puVar9 + 0x24) = 0;
    FUN_0001c770(puVar9 + 1,0,0x24);
    FUN_0001c770(puVar9 + 6,0,0x30);
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    *(undefined4 *)(puVar9 + 0x26) = 0;
    puVar9[0x25] = 0;
    puVar5 = puVar9;
  }
  if (puVar5 != (ulonglong *)0x0) {
    memcpy(puVar5 + 1,&local_58,0x24);
    pvVar10 = (void *)(*(code *)puVar5[1])((int)puVar5[4]);
    if (pvVar10 != (void *)0x0) {
      iVar4 = FUN_0001b948((longlong)puVar5,0,(uint)puVar5[4],pvVar10);
      if ((iVar4 == 0) && (*(longlong *)((longlong)pvVar10 + 3) == 0x202020205346544e)) {
        *(undefined2 *)(puVar5 + 6) = *(undefined2 *)((longlong)pvVar10 + 0xb);
        bVar1 = *(byte *)((longlong)pvVar10 + 0xd);
        *(uint *)((longlong)puVar5 + 0x34) = (uint)bVar1;
        puVar5[8] = *(ulonglong *)((longlong)pvVar10 + 0x28);
        puVar5[9] = *(ulonglong *)((longlong)pvVar10 + 0x30);
        puVar5[10] = *(ulonglong *)((longlong)pvVar10 + 0x38);
        *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)((longlong)pvVar10 + 0x40);
        if (0x80 < bVar1) {
          *(int *)((longlong)puVar5 + 0x34) = 1 << (~bVar1 + 1 & 0x1f);
        }
        uVar11 = (uint)puVar5[0xb];
        if ((uVar11 & 0x80) == 0) {
          iVar4 = (ushort)puVar5[6] * uVar11 * *(int *)((longlong)puVar5 + 0x34);
        }
        else {
          iVar4 = 1 << (~(byte)uVar11 + 1 & 0x1f);
        }
        *(int *)(puVar5 + 0xb) = iVar4;
        uVar11 = *(uint *)((longlong)pvVar10 + 0x44);
        *(uint *)((longlong)puVar5 + 0x5c) = uVar11;
        if ((uVar11 & 0x80) == 0) {
          iVar4 = (ushort)puVar5[6] * uVar11 * *(int *)((longlong)puVar5 + 0x34);
        }
        else {
          iVar4 = 1 << (~(byte)uVar11 + 1 & 0x1f);
        }
        *(int *)((longlong)puVar5 + 0x5c) = iVar4;
        puVar5[7] = (ulonglong)*(uint *)((longlong)puVar5 + 0x34) * (ulonglong)(ushort)puVar5[6];
      }
      (*(code *)puVar5[2])(pvVar10);
    }
    uVar11 = (uint)puVar5[0xb];
    if (uVar11 != 0) {
      uVar14 = *(uint *)((longlong)puVar5 + 0x5c);
      if (*(uint *)((longlong)puVar5 + 0x5c) < (uint)puVar5[7]) {
        uVar14 = (uint)puVar5[7];
      }
      if (uVar11 < uVar14) {
        uVar11 = uVar14;
      }
      *(uint *)(puVar5 + 0x26) = uVar11;
      uVar7 = (*(code *)puVar5[1])();
      puVar5[0x25] = uVar7;
      FUN_0001b1f8((longlong)puVar5,0x1df50,FUN_00014d2c,param_1);
      *(undefined1 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 0) {
        auVar2 = ZEXT816(0x10) * ZEXT416(*(uint *)(param_1 + 0x6c));
        uVar7 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        if (uVar7 != 0) {
          puVar8 = FUN_0001347c(uVar7);
        }
        *(ulonglong **)(param_1 + 0x60) = puVar8;
      }
      FUN_0001b1f8((longlong)puVar5,0x1df50,FUN_00014d2c,param_1);
    }
  }
LAB_00014ce5:
  (**(code **)*puVar13)(puVar13,1);
  if (puVar5 != (ulonglong *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  return 0;
}




void FUN_00014d2c(ulonglong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  FUN_00011008("get pgFile blk s=%I64u,secs=%u",param_1,(ulonglong)param_2,param_4);
  if (param_3 != 0) {
    FUN_00014d80(param_3,param_1,param_2);
  }
  return;
}




void FUN_00014d80(longlong param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x70);
    if (uVar1 < *(uint *)(param_1 + 0x6c)) {
      puVar2 = *(ulonglong **)(param_1 + 0x60);
      uVar5 = 0;
      if (puVar2 != (ulonglong *)0x0) {
        if (uVar1 != 0) {
          do {
            if (param_2 < *puVar2) break;
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            puVar2 = puVar2 + 2;
          } while (uVar4 < *(uint *)(param_1 + 0x70));
          if ((uint)uVar5 < uVar1) {
            uVar3 = (ulonglong)(uVar1 - (uint)uVar5);
            lVar6 = (longlong)(int)uVar1 << 4;
            do {
              *(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x60)) =
                   *(undefined8 *)(lVar6 + -0x10 + *(longlong *)(param_1 + 0x60));
              uVar3 = uVar3 - 1;
              *(undefined4 *)(lVar6 + 8 + *(longlong *)(param_1 + 0x60)) =
                   *(undefined4 *)(lVar6 + -8 + *(longlong *)(param_1 + 0x60));
              lVar6 = lVar6 + -0x10;
            } while (uVar3 != 0);
          }
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x60) + uVar5 * 0x10) = param_2;
        *(uint *)(*(longlong *)(param_1 + 0x60) + 8 + uVar5 * 0x10) = param_3;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      }
    }
  }
  FUN_00011008("add pgFile blk s=%I64u,secs=%u",param_2,(ulonglong)param_3,param_1);
  return;
}




int FUN_00014e3c(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = param_1 + 0x58;
  uVar2 = ((param_3 & 0xffffffff) - 1) + param_2;
  uVar8 = *(int *)(param_1 + 0x6c) - 1;
  uVar5 = 0;
  uVar4 = FUN_0001be3c(lVar1,param_2,uVar2,0);
  if ((int)uVar4 < 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = 0;
    if ((int)uVar4 != 0) {
      uVar4 = FUN_0001be3c(lVar1,param_2,uVar2,uVar8);
      iVar3 = (int)uVar4;
      if (iVar3 < 1) {
        iVar6 = 0;
        uVar7 = uVar8;
        if (iVar3 != 0) {
          for (; iVar6 = iVar3, 1 < uVar7; uVar7 = uVar7 - uVar5) {
            uVar7 = uVar8 + uVar5 >> 1;
            uVar4 = FUN_0001be3c(lVar1,param_2,uVar2,uVar7);
            iVar3 = (int)uVar4;
            if (iVar3 == 0) {
              return 0;
            }
            if (0 < iVar3) {
              uVar5 = uVar7;
              uVar7 = uVar8;
            }
            uVar8 = uVar7;
          }
        }
      }
      else {
        iVar6 = 1;
      }
    }
  }
  return iVar6;
}




longlong *
FUN_00014f0c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  void *_Dst;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  
  puVar6 = (ulonglong *)0x0;
  *param_1 = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 5) = 0x74534298;
  param_1[4] = 0;
  lVar3 = IoGetCurrentProcess();
  param_1[6] = lVar3;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  KeInitializeSemaphore(param_1 + 10,0,0x4000);
  KeInitializeMutex(param_1 + 0x12,1);
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x100000;
  local_res8[0] = 0;
  param_1[0x2b] = (longlong)&PTR_FUN_0001f2f8;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x32] = (longlong)&PTR_FUN_0001f2e0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_1[3] + 0x98);
  param_1[0x1b] = *(longlong *)(param_4 + 4);
  lVar3 = *(longlong *)(param_4 + 0xc);
  param_1[0x1c] = lVar3;
  uVar1 = *(uint *)(param_4 + 0x30);
  *(uint *)((longlong)param_1 + 0xcc) = uVar1;
  FUN_00011008("CSession::CSession DataFirstSec=%I64u tSecs=%I64u spb=%u",
               *(undefined8 *)(param_4 + 4),lVar3,(ulonglong)uVar1);
  uVar2 = param_1[0x1c];
  if (((uVar2 == 0) || (*(longlong *)(param_4 + 0x24) == 0)) || (*(int *)(param_4 + 0x2c) == 0)) {
    iVar7 = -0x3ffffff3;
    local_res8[0] = -0x3ffffff3;
  }
  else {
    iVar7 = 0;
    if (*(int *)(param_4 + 0x30) == 0) {
      iVar7 = 0;
      if (uVar2 < 0x20) {
        *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
        *(undefined4 *)(param_1 + 0x1a) = 0;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0xcc) = 0x10;
        *(uint *)(param_1 + 0x1a) = (uint)uVar2 & 0xf;
      }
    }
  }
  puVar4 = puVar6;
  if ((ulonglong)*(uint *)(param_1 + 0x2a) != 0) {
    puVar4 = FUN_0001347c((ulonglong)*(uint *)(param_1 + 0x2a));
  }
  param_1[0x29] = (longlong)puVar4;
  if (puVar4 != (ulonglong *)0x0) {
    _Dst = (void *)ExAllocatePoolWithTag(1,0x800,0x4c435545);
    param_1[4] = (longlong)_Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)(param_4 + 0x34),0x800);
      *(undefined2 *)(param_1[4] + 0x7fe) = 0;
      if (iVar7 < 0) goto LAB_00015287;
      puVar5 = FUN_0001347c(0x30);
      puVar4 = puVar6;
      if (puVar5 != (ulonglong *)0x0) {
        puVar4 = (ulonglong *)
                 FUN_00017b48((undefined4 *)puVar5,*(ulonglong *)(param_4 + 0x24),
                              (ulonglong)*(uint *)(param_4 + 0x2c),*(undefined8 *)(param_4 + 0x14),
                              *(undefined8 *)(param_4 + 0x1c),local_res8);
        iVar7 = local_res8[0];
      }
      param_1[0x20] = (longlong)puVar4;
      if (puVar4 != (ulonglong *)0x0) {
        if (-1 < iVar7) {
          puVar4 = FUN_0001347c(0x70);
          if (puVar4 != (ulonglong *)0x0) {
            puVar6 = (ulonglong *)FUN_0001820c((longlong)puVar4,FUN_0001664c,param_1,local_res8);
            iVar7 = local_res8[0];
          }
          param_1[0x27] = (longlong)puVar6;
          if (-1 < iVar7) {
            *(int *)(param_4 + 0x83c) = (int)param_1[0x19];
            *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)((longlong)param_1 + 0xcc);
          }
          FUN_000148a8(param_1[3]);
          iVar8 = 2000;
          *(undefined4 *)(param_1 + 0x30) = 0x38;
          puVar6 = FUN_0001347c(0x1b580);
          *(undefined4 *)((longlong)param_1 + 0x184) = 1;
          param_1[0x2e] = 0;
          param_1[0x2f] = 0;
          param_1[0x2c] = (longlong)puVar6;
          *(undefined1 *)(param_1 + 0x31) = 0;
          param_1[0x2d] = (longlong)(puVar6 + 14000);
          do {
            iVar8 = iVar8 + -1;
            if (param_1[0x2c] == 0) break;
            FUN_0001bf1c((longlong)(param_1 + 0x2b),puVar6);
            puVar6 = puVar6 + 7;
          } while (0 < iVar8);
        }
        goto LAB_00015287;
      }
    }
  }
  iVar7 = -0x3fffffe9;
LAB_00015287:
  FUN_0001806c(*param_1,param_1 + 1);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar7;
  }
  return param_1;
}




void FUN_000152c4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_000180d0(*param_1,param_1 + 1);
  FUN_00016490((longlong)param_1,0);
  if (param_1[0x27] != 0) {
    if (*(longlong *)(param_1[0x27] + 0x38) != 0) {
      FUN_00015628((longlong)param_1,0,0);
    }
    lVar1 = param_1[0x27];
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        KeWaitForSingleObject(*(longlong *)(lVar1 + 0x38),0,0,0,0);
        ObfDereferenceObject(*(undefined8 *)(lVar1 + 0x38));
        *(undefined8 *)(lVar1 + 0x38) = 0;
      }
      ExFreePoolWithTag(lVar1,0);
    }
    param_1[0x27] = 0;
  }
  plVar2 = (longlong *)param_1[0x22];
  *(undefined4 *)(param_1 + 5) = 0;
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      ExFreePoolWithTag(*plVar2,0);
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    ExFreePoolWithTag(plVar2,0);
  }
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      ExFreePoolWithTag(*plVar2,0);
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    ExFreePoolWithTag(plVar2,0);
  }
  plVar2 = (longlong *)param_1[0x24];
  param_1[0x23] = 0;
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      ExFreePoolWithTag(*plVar2,0);
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    ExFreePoolWithTag(plVar2,0);
  }
  plVar2 = (longlong *)param_1[0x21];
  param_1[0x24] = 0;
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      ExFreePoolWithTag(*plVar2,0);
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    ExFreePoolWithTag(plVar2,0);
  }
  lVar1 = param_1[0x20];
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x18);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 8) != 0) {
        MmUnlockPages(*(undefined8 *)(lVar3 + 0x18));
      }
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        ExFreePoolWithTag(*(longlong *)(lVar3 + 0x18),0);
      }
      ExFreePoolWithTag(lVar3,0);
    }
    plVar2 = *(longlong **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        ObfDereferenceObject();
      }
      ExFreePoolWithTag(plVar2,0);
    }
    plVar2 = *(longlong **)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar2 != (longlong *)0x0) {
      if (*plVar2 != 0) {
        ObfDereferenceObject();
      }
      ExFreePoolWithTag(plVar2,0);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    ExFreePoolWithTag(lVar1,0);
  }
  if (param_1[0x29] != 0) {
    ExFreePoolWithTag(param_1[0x29],0);
    param_1[0x29] = 0;
  }
  if ((longlong *)param_1[0x26] != (longlong *)0x0) {
    FUN_000155a4((longlong *)param_1[0x26]);
  }
  param_1[0x26] = 0;
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    FUN_000155a4((longlong *)param_1[0x25]);
  }
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  if (param_1[4] != 0) {
    ExFreePoolWithTag(param_1[4],0);
  }
  if (param_1[0x28] != 0) {
    ZwClose();
  }
  param_1[0x28] = 0;
  FUN_0001becc(param_1 + 0x2b);
  return;
}




longlong * FUN_000155a4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + -8);
    uVar4 = (ulonglong)*piVar1;
    plVar5 = (longlong *)(uVar4 * 0x20 + lVar2);
    while (uVar3 = (int)uVar4 - 1, uVar4 = (ulonglong)uVar3, -1 < (int)uVar3) {
      plVar5 = plVar5 + -4;
      FUN_0001c36c(plVar5);
    }
    if (piVar1 != (int *)0x0) {
      ExFreePoolWithTag(piVar1,0);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  ExFreePoolWithTag(param_1,0);
  return param_1;
}




undefined8 FUN_00015628(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  puVar7 = FUN_0001bfb8(param_1 + 0x158);
  if (puVar7 == (ulonglong *)0x0) {
    uVar8 = 0xc0000017;
  }
  else {
    if (param_2 != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_2 + 0xb8) + 3);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(param_2 + 0x30) = 0x103;
    }
    puVar7[5] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    puVar7[3] = 0;
    puVar7[2] = param_2;
    puVar7[4] = param_3;
    lVar3 = *(longlong *)(param_1 + 0x138);
    uVar6 = KeAcquireSpinLockRaiseToDpc(lVar3 + 0x50);
    *(undefined1 *)(lVar3 + 0x58) = uVar6;
    plVar9 = FUN_00015868(*(longlong *)(lVar3 + 0x68));
    if (plVar9 == (longlong *)0x0) {
      puVar2 = (ulonglong *)(lVar3 + 0x40);
      uVar5 = *puVar2;
      puVar7[1] = (ulonglong)puVar2;
      *puVar7 = uVar5;
      *(ulonglong **)(uVar5 + 8) = puVar7;
      *puVar2 = (ulonglong)puVar7;
    }
    else {
      puVar4 = (undefined8 *)plVar9[1];
      *puVar7 = (ulonglong)plVar9;
      puVar7[1] = (ulonglong)puVar4;
      *puVar4 = puVar7;
      plVar9[1] = (longlong)puVar7;
    }
    KeReleaseSpinLock(lVar3 + 0x50,*(undefined1 *)(lVar3 + 0x58));
    if (*(int *)(lVar3 + 0x30) < 0x12d) {
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
      uVar6 = KeAcquireSpinLockRaiseToDpc(lVar3 + 0x20);
      *(undefined1 *)(lVar3 + 0x28) = uVar6;
      FUN_00013454(lVar3);
      KeReleaseSpinLock(lVar3 + 0x20,*(undefined1 *)(lVar3 + 0x28));
    }
    uVar8 = 0x103;
  }
  return uVar8;
}




undefined8
FUN_0001573c(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
            ulonglong param_5,uint param_6)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  
  puVar5 = FUN_0001bfb8(param_1 + 0x158);
  if (puVar5 == (ulonglong *)0x0) {
    uVar6 = 0xc0000017;
  }
  else {
    if (param_4 != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_4 + 0xb8) + 3);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(param_4 + 0x30) = 0x103;
    }
    puVar5[2] = param_4;
    puVar5[5] = param_5;
    *(uint *)(puVar5 + 6) = param_6;
    puVar5[3] = param_2;
    puVar5[4] = param_3;
    FUN_00011008("AddUrgentIRP %d ns=%I64u,secs=%u,secsize=%u pDisk=%I64u",0x113,param_5,
                 (ulonglong)param_6);
    lVar2 = *(longlong *)(param_1 + 0x138);
    uVar4 = KeAcquireSpinLockRaiseToDpc(lVar2 + 0x50);
    *(undefined1 *)(lVar2 + 0x58) = uVar4;
    puVar3 = *(undefined8 **)(lVar2 + 0x48);
    *puVar5 = lVar2 + 0x40U;
    puVar5[1] = (ulonglong)puVar3;
    *puVar3 = puVar5;
    *(ulonglong **)(lVar2 + 0x48) = puVar5;
    KeReleaseSpinLock(lVar2 + 0x50,
                      CONCAT71((int7)(lVar2 + 0x40U >> 8),*(undefined1 *)(lVar2 + 0x58)));
    if (*(int *)(lVar2 + 0x30) < 0x12d) {
      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
      uVar4 = KeAcquireSpinLockRaiseToDpc(lVar2 + 0x20);
      *(undefined1 *)(lVar2 + 0x28) = uVar4;
      FUN_00013454(lVar2);
      KeReleaseSpinLock(lVar2 + 0x20,*(undefined1 *)(lVar2 + 0x28));
    }
    uVar6 = 0x103;
  }
  return uVar6;
}




longlong * FUN_00015868(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x138) + 0x40);
  if ((longlong *)*plVar1 == plVar1) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*plVar1;
  }
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if ((plVar1[2] != 0) && (**(char **)(plVar1[2] + 0xb8) == '\x04')) break;
    plVar1 = (longlong *)*plVar1;
    if (plVar1 == (longlong *)(*(longlong *)(param_1 + 0x138) + 0x40)) {
      return (longlong *)0x0;
    }
  }
  return plVar1;
}




longlong FUN_000158b4(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x108);
  if ((((lVar2 == 0) || (param_2 < *(ulonglong *)(lVar2 + 8))) ||
      ((ulonglong)(*(longlong *)(lVar2 + 0x10) + *(longlong *)(lVar2 + 8)) <= param_2)) &&
     (((lVar1 = *(longlong *)(param_1 + 0x110), lVar2 = 0, lVar1 != 0 &&
       (*(ulonglong *)(lVar1 + 8) <= param_2)) &&
      (lVar2 = 0, param_2 < (ulonglong)(*(longlong *)(lVar1 + 0x10) + *(longlong *)(lVar1 + 8))))))
  {
    lVar2 = lVar1;
  }
  return lVar2;
}




undefined8 FUN_0001590c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar11;
  ulonglong uVar10;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar14;
  int local_98 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  RtlInitUnicodeString(local_88,*(undefined8 *)(param_1 + 0x20));
  iVar9 = 0;
  local_50 = local_88;
  uVar12 = 0;
  local_60[0] = 0x30;
  local_58 = 0;
  local_48 = 0x240;
  local_40 = 0;
  local_38 = 0;
  local_res8 = 0;
  iVar5 = ZwCreateFile(param_1 + 0x140,0x100003,local_60,local_98,0,CONCAT44(uVar11,0x80),3,
                       CONCAT44(uVar13,1),CONCAT44(uVar14,0x20),0,0);
  if (iVar5 < 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    uVar10 = 0;
    iVar5 = ObReferenceObjectByHandle(*(undefined8 *)(param_1 + 0x140),3,0,0,&local_res8,0);
    if (iVar5 < 0) {
      local_res8 = 0;
    }
    else {
      uVar6 = IoGetRelatedDeviceObject(local_res8);
      do {
        lVar2 = local_res8;
        uVar12 = uVar12 & 0xffffff00;
        uVar10 = uVar10 & 0xffffffff00000000;
        lVar7 = IoBuildDeviceIoControlRequest(0,uVar6,0,0,0,uVar10,uVar12,local_78,local_98);
        if (lVar7 == 0) {
LAB_00015b7e:
          uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
          *(undefined1 *)(param_1 + 0x48) = uVar3;
          *(undefined4 *)(param_1 + 0x38) = 0;
          goto LAB_00015b8f;
        }
        lVar1 = *(longlong *)(lVar7 + 0xb8);
        *(undefined1 *)(lVar1 + -0x48) = 9;
        *(longlong *)(lVar1 + -0x18) = lVar2;
        KeInitializeEvent(local_78,0);
        uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
        *(undefined1 *)(param_1 + 0x48) = uVar3;
        *(undefined4 *)(param_1 + 0x38) = 1;
        *(undefined4 *)(param_1 + 0x88) = 0;
        KeReleaseSpinLock(param_1 + 0x40,*(undefined1 *)(param_1 + 0x48));
        if (*(int *)(param_1 + 0x80) < 0x12d) {
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x70);
          *(undefined1 *)(param_1 + 0x78) = uVar3;
          FUN_00013454(param_1 + 0x50);
          KeReleaseSpinLock(param_1 + 0x70,*(undefined1 *)(param_1 + 0x78));
        }
        iVar5 = IofCallDriver(uVar6,lVar7);
        if (iVar5 == 0x103) {
          KeWaitForSingleObject(local_78,0,0,0,0);
          iVar5 = local_98[0];
        }
        if (iVar5 == -0x3ffffff0) {
          iVar5 = 0;
        }
        if (iVar5 == -0x3fffff5e) {
          iVar5 = 0;
        }
        if (iVar5 < 0) {
          bVar4 = FUN_000147e0(local_res8,uVar6);
          if (!bVar4) goto LAB_00015b7e;
        }
        uVar8 = FUN_00013738((undefined4 *)(param_1 + 0x38));
        if ((char)uVar8 != '\0') goto LAB_00015be8;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x14);
      uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x48) = uVar3;
      *(undefined4 *)(param_1 + 0x38) = 3;
LAB_00015b8f:
      KeReleaseSpinLock(param_1 + 0x40,*(undefined1 *)(param_1 + 0x48));
      if (*(int *)(param_1 + 0x80) < 0x12d) {
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x78) = uVar3;
        FUN_00013454(param_1 + 0x50);
        KeReleaseSpinLock(param_1 + 0x70,*(undefined1 *)(param_1 + 0x78));
      }
    }
  }
LAB_00015be8:
  if (local_res8 != 0) {
    ObfDereferenceObject();
  }
  return 0;
}




int FUN_00015c24(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar4 = (undefined8 *)0x0;
  iVar6 = 0;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x108);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        ExFreePoolWithTag();
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
      *(undefined4 *)(plVar1 + 4) = 0;
      ExFreePoolWithTag(plVar1);
    }
    puVar2 = FUN_0001347c(0x40);
    puVar3 = puVar4;
    iVar6 = 0;
    if (puVar2 != (ulonglong *)0x0) {
      param_3 = (ulonglong)*(uint *)(param_1 + 0xd0);
      param_4 = 1;
      puVar3 = FUN_000137f8(puVar2,*(undefined8 *)(param_1 + 0xd8),param_3,1,local_res8);
      iVar6 = local_res8[0];
    }
    *(undefined8 **)(param_1 + 0x108) = puVar3;
    if ((puVar3 == (undefined8 *)0x0) || (iVar6 < 0)) {
      FUN_00016490(param_1,0);
      uVar5 = 0x24b;
      goto LAB_00015ff0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      ExFreePoolWithTag();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    ExFreePoolWithTag(plVar1);
  }
  puVar2 = FUN_0001347c(0x40);
  puVar3 = puVar4;
  if (puVar2 != (ulonglong *)0x0) {
    param_4 = (ulonglong)*(uint *)(param_1 + 0xcc);
    param_3 = *(longlong *)(param_1 + 0xe0) - (ulonglong)*(uint *)(param_1 + 0xd0);
    puVar3 = FUN_000137f8(puVar2,(ulonglong)*(uint *)(param_1 + 0xd0) +
                                 *(longlong *)(param_1 + 0xd8),param_3,*(uint *)(param_1 + 0xcc),
                          local_res8);
    iVar6 = local_res8[0];
  }
  *(undefined8 **)(param_1 + 0x110) = puVar3;
  if ((puVar3 == (undefined8 *)0x0) || (iVar6 < 0)) {
    FUN_00016490(param_1,0);
    uVar5 = 0x25c;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        ExFreePoolWithTag();
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      *(undefined4 *)(plVar1 + 3) = 0;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
      *(undefined4 *)(plVar1 + 4) = 0;
      ExFreePoolWithTag(plVar1);
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    puVar2 = FUN_0001347c(0x40);
    puVar3 = puVar4;
    if (puVar2 != (ulonglong *)0x0) {
      param_4 = (ulonglong)*(uint *)(param_1 + 0xcc);
      param_3 = *(longlong *)(param_1 + 0xe0) - (ulonglong)*(uint *)(param_1 + 0xd0);
      puVar3 = FUN_000137f8(puVar2,(ulonglong)*(uint *)(param_1 + 0xd0) +
                                   *(longlong *)(param_1 + 0xd8),param_3,*(uint *)(param_1 + 0xcc),
                            local_res8);
      iVar6 = local_res8[0];
    }
    *(undefined8 **)(param_1 + 0x118) = puVar3;
    if ((puVar3 == (undefined8 *)0x0) || (iVar6 < 0)) {
      FUN_00016490(param_1,0);
      uVar5 = 0x270;
    }
    else {
      if ((*(int *)(puVar3 + 4) != 0) && ((ulonglong *)*puVar3 != (ulonglong *)0x0)) {
        param_3 = (ulonglong)*(uint *)(puVar3 + 4);
        FUN_0001c770((ulonglong *)*puVar3,0,param_3);
      }
      plVar1 = *(longlong **)(param_1 + 0x120);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          ExFreePoolWithTag();
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        *(undefined4 *)(plVar1 + 3) = 0;
        *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
        *(undefined4 *)(plVar1 + 4) = 0;
        ExFreePoolWithTag(plVar1);
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      puVar2 = FUN_0001347c(0x40);
      puVar3 = puVar4;
      if (puVar2 != (ulonglong *)0x0) {
        param_4 = (ulonglong)*(uint *)(param_1 + 0xcc);
        param_3 = *(longlong *)(param_1 + 0xe0) - (ulonglong)*(uint *)(param_1 + 0xd0);
        puVar3 = FUN_000137f8(puVar2,(ulonglong)*(uint *)(param_1 + 0xd0) +
                                     *(longlong *)(param_1 + 0xd8),param_3,*(uint *)(param_1 + 0xcc)
                              ,local_res8);
        iVar6 = local_res8[0];
      }
      *(undefined8 **)(param_1 + 0x120) = puVar3;
      if ((puVar3 == (undefined8 *)0x0) || (iVar6 < 0)) {
        FUN_00016490(param_1,0);
        uVar5 = 0x285;
      }
      else {
        if ((*(int *)(puVar3 + 4) != 0) && ((ulonglong *)*puVar3 != (ulonglong *)0x0)) {
          param_3 = (ulonglong)*(uint *)(puVar3 + 4);
          FUN_0001c770((ulonglong *)*puVar3,0,param_3);
        }
        if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
          FUN_000155a4(*(longlong **)(param_1 + 0x128));
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
        puVar2 = FUN_0001347c(0x10);
        puVar3 = puVar4;
        if (puVar2 != (ulonglong *)0x0) {
          puVar3 = FUN_0001c04c(puVar2);
        }
        *(undefined8 **)(param_1 + 0x128) = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          FUN_00016490(param_1,0);
          uVar5 = 0x295;
        }
        else {
          if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
            FUN_000155a4(*(longlong **)(param_1 + 0x130));
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          puVar2 = FUN_0001347c(0x10);
          if (puVar2 != (ulonglong *)0x0) {
            puVar4 = FUN_0001c04c(puVar2);
          }
          *(undefined8 **)(param_1 + 0x130) = puVar4;
          if (*(longlong *)(param_1 + 0x128) != 0) {
            return iVar6;
          }
          FUN_00016490(param_1,0);
          uVar5 = 0x2a3;
        }
      }
    }
  }
LAB_00015ff0:
  FUN_00011008("StartBackup %u",uVar5,param_3,param_4);
  return -0x3fffffe9;
}




ulonglong FUN_0001601c(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 extraout_var;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint local_res18 [4];
  
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_00011008("StartBackup %u",0x2b1,param_3,param_4);
  uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = uVar3;
  iVar1 = *(int *)(param_1 + 0x38);
  KeReleaseSpinLock(param_1 + 0x40,uVar3);
  if (iVar1 != 3) {
    return 0xc0000001;
  }
  FUN_00011008("StartBackup %u",0x2b7,param_3,param_4);
  if ((*(longlong *)(param_2 + 0x14) != 0) && (*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0xcc))
     ) {
    return 0xc000000d;
  }
  FUN_00011008("StartBackup %u",0x2bd,param_3,param_4);
  uVar11 = 0;
  if (*(longlong *)(param_2 + 0x14) != 0) {
    uVar11 = *(uint *)(param_2 + 0x1c);
    *(uint *)(param_1 + 0xd0) = uVar11;
    *(ulonglong *)(param_1 + 0xe0) =
         (ulonglong)*(uint *)(param_1 + 0xcc) * (ulonglong)*(uint *)(param_2 + 0x20) +
         (ulonglong)uVar11;
    uVar11 = *(int *)(param_2 + 0x20) + 7U >> 3;
  }
  FUN_00011008("StartBackup %u",0x2cc,param_3,param_4);
  if ((*(longlong *)(param_1 + 0xe0) - (ulonglong)*(uint *)(param_1 + 0xd0)) %
      (ulonglong)*(uint *)(param_1 + 0xcc) != 0) {
    return 0xc000000d;
  }
  FUN_00011008("StartBackup %u",0x2d2,param_3,param_4);
  uVar5 = FUN_00015c24(param_1,param_2,param_3,(ulonglong)param_4);
  if ((int)uVar5 < 0) {
    return CONCAT44(extraout_var,uVar5);
  }
  local_res18[0] = uVar5;
  FUN_00011008("StartBackup %u",0x2d8,param_3,param_4);
  FUN_00011008("StartBackup %u",0x2e0,param_3,param_4);
  if ((*(longlong *)(param_2 + 0x14) != 0) && (uVar11 != 0)) {
    FUN_00011008("StartBackup %u",0x2e6,param_3,param_4);
    uVar10 = (ulonglong)uVar11;
    param_3 = 1;
    ProbeForRead(*(undefined8 *)(param_2 + 0x14),uVar11);
    FUN_00011008("StartBackup %u",0x2e9,param_3,param_4);
    if (uVar11 == *(uint *)(*(undefined8 **)(param_1 + 0x110) + 4)) {
      memcpy((void *)**(undefined8 **)(param_1 + 0x110),*(void **)(param_2 + 0x14),uVar10);
      uVar5 = 0;
      param_3 = uVar10;
    }
    else {
      uVar5 = 0xc000000d;
    }
    uVar8 = 0x2eb;
    local_res18[0] = uVar5;
    FUN_00011008("StartBackup %u",0x2eb,param_3,param_4);
    if (-1 < (int)uVar5) {
      pbVar13 = *(byte **)(param_2 + 0x14);
      puVar2 = *(undefined8 **)(param_1 + 0x118);
      uVar5 = 0;
      if (uVar11 == *(uint *)(puVar2 + 4)) {
        if ((*(int *)(puVar2 + 4) == 0) || (param_4 = (uint *)*puVar2, param_4 == (uint *)0x0)) {
          FUN_00011008("SetBitmapAndRevertMerg no buf",uVar8,param_3,param_4);
          uVar5 = 0xc000000d;
          local_res18[0] = uVar5;
        }
        else {
          for (param_3 = 0; local_res18[0] = uVar5, (uint)param_3 < *(uint *)(puVar2 + 4);
              param_3 = (ulonglong)((uint)param_3 + 1)) {
            uVar11 = *param_4;
            bVar4 = *pbVar13;
            *(byte *)param_4 = ~bVar4;
            *(byte *)param_4 = ~(byte)uVar11 & ~bVar4;
            param_4 = (uint *)((longlong)param_4 + 1);
            pbVar13 = pbVar13 + 1;
          }
        }
      }
      else {
        param_3 = (ulonglong)uVar11;
        FUN_00011008("SetBitmapAndRevertMerg n=%u, t=%u",(ulonglong)uVar11,param_3,param_4);
        uVar5 = 0xc000000d;
        local_res18[0] = uVar5;
      }
    }
    FUN_00011008("StartBackup %u",0x2ee,param_3,param_4);
    if ((int)uVar5 < 0) goto LAB_000163f5;
  }
  FUN_00011008("StartBackup %u",0x2fd,param_3,param_4);
  if (*(uint *)(param_2 + 0x10) % (uint)(*(int *)(param_1 + 0xcc) * *(int *)(param_1 + 200)) == 0) {
    FUN_00011008("StartBackup %u",0x305,param_3,param_4);
    puVar6 = FUN_0001347c(0x20);
    if (puVar6 == (ulonglong *)0x0) {
      puVar6 = (ulonglong *)0x0;
    }
    else {
      param_4 = local_res18;
      param_3 = (ulonglong)*(uint *)(param_2 + 0x10);
      puVar6 = FUN_00013598(puVar6,*(ulonglong *)(param_2 + 8),param_3,(int *)param_4);
      uVar5 = local_res18[0];
    }
    *(ulonglong **)(param_1 + 0xf8) = puVar6;
    if ((puVar6 == (ulonglong *)0x0) || ((int)uVar5 < 0)) {
      FUN_00016490(param_1,0);
      return 0xc0000017;
    }
    FUN_00011008("StartBackup %u",0x30e,param_3,param_4);
    puVar2 = *(undefined8 **)(param_1 + 0x110);
    uVar10 = 0;
    puVar9 = (uint *)*puVar2;
    for (uVar11 = *(uint *)((longlong)puVar2 + 0x1c) >> 5; uVar11 != 0; uVar11 = uVar11 - 1) {
      for (uVar5 = *puVar9; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
      }
      puVar9 = puVar9 + 1;
    }
    uVar11 = *(uint *)((longlong)puVar2 + 0x1c) & 0x1f;
    uVar12 = (ulonglong)uVar11;
    if (uVar11 != 0) {
      for (uVar11 = uVar11 + 7 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        for (bVar4 = (byte)*puVar9; bVar4 != 0; bVar4 = bVar4 >> 1) {
          if ((bVar4 & 1) != 0) {
            uVar10 = (ulonglong)((int)uVar10 + 1);
          }
        }
        puVar9 = (uint *)((longlong)puVar9 + 1);
      }
    }
    uVar11 = *(int *)(puVar2 + 3) * (int)uVar10 + *(int *)(param_1 + 0xd0);
    *(ulonglong *)(param_1 + 0xf0) = (ulonglong)uVar11;
    if (uVar11 == 0) {
      uVar5 = 0xc000000d;
    }
    else {
      FUN_00011008("StartBackup %u",0x317,uVar10,uVar12);
      uVar7 = FUN_00017ca8(*(undefined4 **)(param_1 + 0x100));
      uVar5 = (uint)uVar7;
      if (-1 < (int)uVar5) {
        FUN_00011008("StartBackup %u",800,uVar10,uVar12);
        uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
        *(undefined1 *)(param_1 + 0x48) = uVar3;
        *(undefined4 *)(param_1 + 0x38) = 4;
        KeReleaseSpinLock(param_1 + 0x40,*(undefined1 *)(param_1 + 0x48));
        if (300 < *(int *)(param_1 + 0x80)) {
          return uVar7 & 0xffffffff;
        }
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x78) = uVar3;
        FUN_00013454(param_1 + 0x50);
        KeReleaseSpinLock(param_1 + 0x70,*(undefined1 *)(param_1 + 0x78));
        return uVar7 & 0xffffffff;
      }
    }
  }
  else {
    uVar5 = 0xc000000d;
  }
LAB_000163f5:
  FUN_00016490(param_1,0);
  return (ulonglong)uVar5;
}




undefined8 FUN_00016490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = 5;
  KeReleaseSpinLock(param_1 + 0x40);
  if (*(int *)(param_1 + 0x80) < 0x12d) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x78) = uVar3;
    FUN_00013454(param_1 + 0x50);
    KeReleaseSpinLock(param_1 + 0x70);
  }
  KeWaitForSingleObject(param_1 + 0x90,0,0,0,0);
  plVar1 = *(longlong **)(param_1 + 0x110);
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      ExFreePoolWithTag();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    ExFreePoolWithTag(plVar1);
  }
  plVar1 = *(longlong **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      ExFreePoolWithTag();
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    ExFreePoolWithTag(plVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      MmUnlockPages(*(undefined8 *)(lVar2 + 0x18));
    }
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      ExFreePoolWithTag();
    }
    ExFreePoolWithTag(lVar2);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (param_2 != 0) {
    if (*(ulonglong *)(param_1 + 0xf0) != 0) {
      uVar4 = (undefined4)
              ((ulonglong)(*(longlong *)(param_1 + 0xe8) * 100) / *(ulonglong *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  KeReleaseMutex(param_1 + 0x90,0);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001664c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint *************pppppppppppppuVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  
  lVar1 = param_2[2];
  lVar2 = param_2[4];
  pppppppppppppuVar3 = (uint *************)param_2[5];
  uVar6 = *(uint *)(param_2 + 6);
  ppppuVar9 = (undefined8 ****)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  FUN_0001bf1c(param_1 + 0x158,param_2);
  if (lVar1 == 0) {
    plVar8 = FUN_000182f0(*(longlong *)(param_1 + 0x138));
    while (plVar8 != (longlong *)0x0) {
      lVar1 = plVar8[2];
      lVar2 = plVar8[4];
      lVar5 = plVar8[3];
      FUN_0001bf1c(param_1 + 0x158,plVar8);
      if (lVar1 != 0) {
        if (**(char **)(lVar1 + 0xb8) == '\x04') {
          if (lVar5 != 0) {
            FUN_00018890(lVar2,lVar1);
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0x30) = 0xc000000d;
          IofCompleteRequest(lVar1,0);
        }
      }
      plVar8 = FUN_000182f0(*(longlong *)(param_1 + 0x138));
    }
    PsTerminateSystemThread(0);
  }
  else {
    ppppuVar4 = *(undefined8 *****)(lVar1 + 0xb8);
    if (*(char *)ppppuVar4 == '\x04') {
      FUN_000167f4(param_1,pppppppppppppuVar3,uVar6);
      FUN_00018890(lVar2,lVar1);
    }
    else {
      if (*(char *)ppppuVar4 == '\x0e') {
        if (*(int *)(ppppuVar4 + 3) - _DAT_00020144 == -0x7ff3d518) {
          if (*(uint *)(ppppuVar4 + 2) < 0x1e) {
            *(undefined4 *)(lVar1 + 0x30) = 0xc000000d;
          }
          else {
            uVar6 = FUN_00017620(param_1,*(longlong *)(lVar1 + 0x18),ppppuVar9,ppppuVar4);
            *(uint *)(lVar1 + 0x30) = uVar6;
            *(undefined8 *)(lVar1 + 0x38) = 0x1e;
          }
        }
        else if ((*(int *)(ppppuVar4 + 3) - _DAT_00020144 == -0x7ff3d520) &&
                (0x27 < *(uint *)(ppppuVar4 + 2))) {
          uVar7 = FUN_0001601c(param_1,*(longlong *)(lVar1 + 0x18),(ulonglong)ppppuVar9,
                               (uint *)ppppuVar4);
          *(int *)(lVar1 + 0x30) = (int)uVar7;
        }
        else {
          *(undefined4 *)(lVar1 + 0x30) = 0xc000000d;
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x30) = 0xc000000d;
      }
      IofCompleteRequest(lVar1,0);
    }
  }
  return;
}




uint FUN_000167f4(longlong param_1,uint *************param_2,uint param_3)

{
  uint *************pppppppppppppuVar1;
  uint *************pppppppppppppuVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint *************pppppppppppppuVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *************pppppppppppppuVar15;
  uint *************pppppppppppppuVar16;
  ulonglong uVar17;
  uint local_res8;
  uint *************local_res10;
  uint *************local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar13 = (undefined8 *)(ulonglong)param_3;
  local_res10 = param_2;
  uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
  while (*(undefined1 *)(param_1 + 0x48) = uVar3, *(int *)(param_1 + 0x38) == 3) {
    KeReleaseSpinLock(param_1 + 0x40,*(undefined1 *)(param_1 + 0x48));
    if (0 < *(int *)(param_1 + 0x80)) {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    }
    iVar5 = KeWaitForSingleObject(param_1 + 0x50,0,0,0,0);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      KeBugCheckEx(0x9995,0,0,0,0);
    }
    uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
  }
  KeReleaseSpinLock(param_1 + 0x40,uVar3);
  pppppppppppppuVar15 = (uint *************)0x0;
  KeWaitForSingleObject(param_1 + 0x90,0,0,0,0);
  if (((*(longlong *)(param_1 + 0xf8) == 0) || (*(int **)(param_1 + 0x100) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x100) < 0)) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_00011008("cache pre cache %I64u,%u",param_2,puVar13,pppppppppppppuVar15);
    }
  }
  else {
    pppppppppppppuVar11 = *(uint **************)(param_1 + 0xd8);
    pppppppppppppuVar1 =
         (uint *************)((longlong)pppppppppppppuVar11 + *(longlong *)(param_1 + 0xe0));
    if ((param_2 < pppppppppppppuVar1) &&
       (pppppppppppppuVar11 <= (uint *************)((longlong)puVar13 + -1 + (longlong)param_2))) {
      if (param_2 < pppppppppppppuVar11) {
        puVar13 = (undefined8 *)(ulonglong)(param_3 + ((int)param_2 - (int)pppppppppppppuVar11));
        param_2 = pppppppppppppuVar11;
        local_res10 = pppppppppppppuVar11;
      }
      if (pppppppppppppuVar1 < (uint *************)((longlong)puVar13 + (longlong)param_2)) {
        puVar13 = (undefined8 *)(ulonglong)(uint)((int)pppppppppppppuVar1 - (int)param_2);
      }
      if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
        FUN_000138a8(*(longlong **)(param_1 + 0x118),(longlong *)&local_res10,(ulonglong)puVar13);
      }
      puVar14 = puVar13;
      FUN_00016bf4(param_1,(uint *******)param_2,(ulonglong)puVar13);
      pppppppppppppuVar1 = (uint *************)((longlong)puVar13 + -1 + (longlong)param_2);
      while (param_2 <= pppppppppppppuVar1) {
        plVar8 = (longlong *)FUN_000158b4(param_1,(ulonglong)param_2);
        if (plVar8 == (longlong *)0x0) {
          FUN_00011008("cache UrgentRead  no bitmap2 %I64u",param_2,puVar14,pppppppppppppuVar15);
        }
        else {
          pppppppppppppuVar11 = (uint *************)&local_res10;
          puVar14 = puVar13;
          uVar4 = FUN_00013aa4(plVar8,(longlong *)pppppppppppppuVar11,(ulonglong)puVar13);
          pppppppppppppuVar2 = local_res10;
          uVar17 = (ulonglong)uVar4;
          if (uVar4 == 0) {
            FUN_00011008("cache UrgentRead  no bitmap %I64u secs=%u",local_res10,puVar13,
                         pppppppppppppuVar15);
            break;
          }
          uVar12 = *(uint *)(plVar8 + 3);
          uVar10 = uVar17;
          pppppppppppppuVar16 = local_res10;
          local_res8 = uVar4;
          do {
            if ((uint)uVar10 < uVar12) {
              uVar12 = (uint)uVar10;
            }
            if (((*(longlong *)(param_1 + 0x118) == 0) || (*(longlong *)(param_1 + 0x120) == 0)) ||
               ((*(longlong *)(param_1 + 0x128) == 0 || (*(longlong *)(param_1 + 0x130) == 0)))) {
              FUN_00011008("Cache UrgentSrcData not init",pppppppppppppuVar11,puVar14,
                           pppppppppppppuVar15);
              iVar5 = -0x3fffffe9;
              goto LAB_00016aa9;
            }
            puVar14 = (undefined8 *)(ulonglong)uVar12;
            iVar5 = FUN_00016bf4(param_1,(uint *******)pppppppppppppuVar16,(ulonglong)puVar14);
            if (iVar5 < 0) {
LAB_00016aae:
              FUN_00011008("cache UrgentRead2 %I64u\n",pppppppppppppuVar16,puVar14,
                           pppppppppppppuVar15);
              puVar14 = (undefined8 *)(ulonglong)uVar12;
              pppppppppppppuVar11 = pppppppppppppuVar16;
              pppppppppppppuVar15 = pppppppppppppuVar16;
              uVar7 = FUN_00017348(param_1,(longlong)pppppppppppppuVar16,uVar12,
                                   (ulonglong)pppppppppppppuVar16);
              if ((int)uVar7 < 0) {
                if (*(uint **)(param_1 + 0x100) != (uint *)0x0) {
                  **(uint **)(param_1 + 0x100) = uVar7;
                }
                FUN_00011008("UrgentRead %I64u,%u error=0x%X",pppppppppppppuVar16,(ulonglong)uVar12,
                             (ulonglong)uVar7);
                KeReleaseMutex(param_1 + 0x90,0);
                return uVar7;
              }
            }
            else {
              local_58 = 0;
              local_50 = 0;
              local_48 = 0;
              local_res20 = pppppppppppppuVar16;
              iVar6 = FUN_00013aa4(*(longlong **)(param_1 + 0x120),(longlong *)&local_res20,
                                   (ulonglong)uVar12);
              if (iVar6 == 0) {
                pppppppppppppuVar15 = (uint *************)0x0;
                puVar14 = (undefined8 *)(ulonglong)uVar12;
                pppppppppppppuVar11 = pppppppppppppuVar16;
                uVar10 = FUN_00016fa0(param_1,(uint *******)pppppppppppppuVar16,(ulonglong)puVar14,0
                                      ,(uint *******)pppppppppppppuVar16);
                iVar5 = (int)uVar10;
                if (-1 < iVar5) goto LAB_00016aa9;
                goto LAB_00016aae;
              }
              puVar14 = &local_58;
              uVar9 = FUN_0001c278(*(longlong **)(param_1 + 0x128),(ulonglong)pppppppppppppuVar16,
                                   puVar14);
              if ((int)uVar9 == 0) {
                FUN_00011008("cache exist not found %I64u",pppppppppppppuVar16,puVar14,
                             pppppppppppppuVar15);
                goto LAB_00016aae;
              }
              pppppppppppppuVar11 = pppppppppppppuVar16;
              FUN_00011008("cache exist %I64u ",pppppppppppppuVar16,puVar14,pppppppppppppuVar15);
LAB_00016aa9:
              if (iVar5 < 0) goto LAB_00016aae;
            }
            pppppppppppppuVar16 =
                 (uint *************)((longlong)pppppppppppppuVar16 + (ulonglong)uVar12);
            local_res8 = local_res8 - uVar12;
            uVar10 = (ulonglong)local_res8;
          } while (local_res8 != 0);
          puVar14 = (undefined8 *)(ulonglong)uVar4;
          FUN_000138a8(plVar8,(longlong *)&local_res10,(ulonglong)puVar14);
          param_2 = (uint *************)((longlong)pppppppppppppuVar2 + uVar17);
          *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + uVar17;
          local_res10 = param_2;
        }
      }
    }
  }
  iVar5 = KeReleaseMutex(param_1 + 0x90,0);
  return -(uint)(iVar5 != 0) & 0xc000000d;
}




int FUN_00016bf4(longlong param_1,uint *******param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  uint *******pppppppuVar14;
  uint ********ppppppppuVar15;
  uint *******pppppppuVar16;
  uint *******pppppppuVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *******local_res10;
  uint *******local_50;
  uint *******local_48;
  uint local_40;
  
  iVar3 = 0;
  uVar6 = param_3 & 0xffffffff;
  if (param_2 < (uint *******)(ulonglong)*(uint *)(param_1 + 0xd0)) {
    FUN_00011008("cache CacheTransmitData preSecs=%I64u",param_2,param_3,uVar6);
  }
  else {
    uVar19 = (ulonglong)*(uint *)(param_1 + 0xd0);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0xcc);
    pppppppuVar14 = (uint *******)((((longlong)param_2 - uVar19) / uVar7) * uVar7 + uVar19);
    uVar19 = ((((uVar6 - uVar19) + uVar7 + -1 + (longlong)param_2) / uVar7) * uVar7 -
             (longlong)pppppppuVar14) + uVar19;
    FUN_00011008("cache CacheTransmitData1 %I64u(sS=%I64u) nsec=%u, realSec=%I64u",pppppppuVar14,
                 param_2,uVar6);
    uVar10 = (uint)uVar19;
    uVar6 = uVar19 & 0xffffffff;
    uVar19 = uVar19 & 0xffffffff;
    pppppppuVar9 = param_2;
    FUN_00011008("cache CacheTransmitData2 %I64u(sS=%I64u) nsec=%u, realSec=%I64u",pppppppuVar14,
                 param_2,uVar19);
    while ((uVar2 = uVar10, uVar10 != 0 && (uVar2 = (uint)uVar6, -1 < iVar3))) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0xcc);
      if (uVar2 < *(uint *)(param_1 + 0xcc)) {
        uVar7 = uVar6;
      }
      FUN_00011008("cache CacheTransmitData0 is used %I64u",pppppppuVar14,pppppppuVar9,uVar19);
      local_res10 = pppppppuVar14;
      uVar2 = FUN_00013aa4(*(longlong **)(param_1 + 0x120),(longlong *)&local_res10,uVar7);
      param_2 = local_res10;
      FUN_00011008("cache CacheTransmitData is used %I64u,%u",local_res10,(ulonglong)uVar2,uVar19);
      if (uVar2 != 0) {
        local_50 = (uint *******)0x0;
        local_48 = (uint *******)0x0;
        local_40 = 0;
        uVar5 = FUN_0001c278(*(longlong **)(param_1 + 0x130),(ulonglong)pppppppuVar14,&local_50);
        pppppppuVar17 = local_48;
        pppppppuVar9 = local_50;
        if ((int)uVar5 != 0) {
          FUN_00011008("cache CacheTransmitData %I64u of %I64u\n",local_48,local_50,uVar19);
          ppppppppuVar15 = (uint ********)(ulonglong)local_40;
          pppppppuVar16 = (uint *******)CONCAT71((int7)(uVar19 >> 8),1);
          pppppppuVar8 = pppppppuVar9;
          uVar6 = FUN_00016fa0(param_1,pppppppuVar9,(ulonglong)ppppppppuVar15,pppppppuVar16,
                               pppppppuVar17);
          iVar3 = (int)uVar6;
          if (iVar3 < 0) {
            FUN_00011008("cache CacheTransmitData UrgentRead %I64u\n",param_2,ppppppppuVar15,
                         pppppppuVar16);
            ppppppppuVar15 = (uint ********)(ulonglong)local_40;
            iVar3 = FUN_00017348(param_1,(longlong)pppppppuVar9,local_40,(ulonglong)pppppppuVar17);
            pppppppuVar8 = pppppppuVar9;
            pppppppuVar16 = pppppppuVar17;
          }
          lVar1 = **(longlong **)(param_1 + 0x130);
          if (lVar1 != 0) {
            uVar2 = *(uint *)(*(longlong **)(param_1 + 0x130) + 1);
            local_res10 = (uint *******)CONCAT44(local_res10._4_4_,uVar2);
            if (uVar2 != 0) {
              uVar6 = 0;
              lVar11 = 0;
              if (uVar2 != 0) {
                puVar13 = (ulonglong *)(lVar1 + 0x10);
                do {
                  if ((((puVar13[-2] != 0) && ((int)puVar13[-1] != 0)) &&
                      ((uint *******)*puVar13 <= pppppppuVar14)) &&
                     (pppppppuVar14 < (uint *******)puVar13[1])) {
                    local_50 = (uint *******)0x0;
                    ppppppppuVar15 = &local_50;
                    local_48 = (uint *******)0x0;
                    local_40 = 0;
                    pppppppuVar8 = pppppppuVar14;
                    uVar5 = FUN_0001c3a4((longlong *)(uVar6 * 0x20 + lVar1),(ulonglong)pppppppuVar14
                                         ,ppppppppuVar15);
                    if ((int)uVar5 != 0) {
                      plVar12 = (longlong *)(lVar11 * 0x20 + lVar1);
                      lVar1 = *plVar12;
                      if ((lVar1 != 0) && (uVar2 = *(uint *)(plVar12 + 1), uVar2 != 0)) {
                        ppppppppuVar15 = &local_res10;
                        local_res10 = (uint *******)CONCAT44(local_res10._4_4_,0xffffffff);
                        pppppppuVar8 = pppppppuVar14;
                        iVar4 = FUN_0001c428(plVar12,(ulonglong)pppppppuVar14,(uint *)ppppppppuVar15
                                            );
                        if (iVar4 != 0) {
                          if ((uint)local_res10 < uVar2) {
                            if ((uint)local_res10 + 1 < uVar2) {
                              memcpy((void *)(lVar1 + ((ulonglong)local_res10 & 0xffffffff) * 0x14),
                                     (void *)(lVar1 + (ulonglong)((uint)local_res10 + 1) * 0x14),
                                     (ulonglong)((uVar2 - (uint)local_res10) - 1) * 0x14);
                            }
                            *(int *)(plVar12 + 1) = (int)plVar12[1] + -1;
                            FUN_0001c4ac(plVar12);
                            goto LAB_00016e5d;
                          }
                        }
                      }
                      break;
                    }
                    uVar2 = (uint)local_res10;
                  }
                  uVar18 = (int)uVar6 + 1;
                  uVar6 = (ulonglong)uVar18;
                  lVar11 = lVar11 + 1;
                  puVar13 = puVar13 + 4;
                } while (uVar18 < uVar2);
              }
            }
          }
          FUN_00011008("cache delete fail.",pppppppuVar8,ppppppppuVar15,pppppppuVar16);
        }
      }
LAB_00016e5d:
      FUN_00011008("cache CacheTransmitData3 %I64u(sS=%I64u) nsec=%u, realSec=%I64u nread=%u",
                   pppppppuVar14,param_2,(ulonglong)uVar10);
      pppppppuVar14 = (uint *******)((longlong)pppppppuVar14 + uVar7);
      uVar10 = uVar10 - (int)uVar7;
      uVar6 = (ulonglong)uVar10;
      uVar19 = (ulonglong)uVar10;
      pppppppuVar9 = param_2;
      FUN_00011008("cache CacheTransmitData4 %I64u(sS=%I64u) nsec=%u, realSec=%I64u nread=%u status=0x%x"
                   ,pppppppuVar14,param_2,uVar19);
    }
    FUN_00011008("cache CacheTransmitData5 %I64u(sS=%I64u) nsec=%u, realSec=%I64u",pppppppuVar14,
                 param_2,(ulonglong)uVar2);
    if ((iVar3 < 0) && (*(int **)(param_1 + 0x100) != (int *)0x0)) {
      **(int **)(param_1 + 0x100) = iVar3;
    }
  }
  return iVar3;
}




/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_00016fa0(longlong param_1,uint *******param_2,ulonglong param_3,undefined8 param_4,
                      uint *******param_5)

{
  longlong lVar1;
  uint *************pppppppppppppuVar2;
  uint *************pppppppppppppuVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint *************pppppppppppppuVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint *************pppppppppppppuVar16;
  uint *************pppppppppppppuVar17;
  uint *************pppppppppppppuVar18;
  uint *************pppppppppppppuVar19;
  uint *************pppppppppppppuVar20;
  uint uVar21;
  uint ************local_res8;
  uint *************local_res10;
  uint local_res18 [2];
  char local_res20;
  uint *************local_80;
  uint *************local_78;
  uint local_70;
  uint ************local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_res20 = (char)param_4;
  pppppppppppppuVar12 = (uint *************)&local_res10;
  pppppppppppppuVar18 = (uint *************)0x0;
  pppppppppppppuVar16 = (uint *************)(param_3 & 0xffffffff);
  local_res8 = (uint ************)0x0;
  local_res10 = (uint *************)param_2;
  FUN_000138a8(*(longlong **)(param_1 + 0x118),(longlong *)pppppppppppppuVar12,param_3);
  plVar14 = *(longlong **)(param_1 + 0x118);
  uVar7 = 0;
  uVar15 = (uint)param_3;
  if (((&stack0x00000000 != (undefined1 *)0xfffffffffffffff8) && (uVar15 != 0)) &&
     ((ulonglong)plVar14[7] < (ulonglong)(plVar14[1] + plVar14[2]))) {
    do {
      local_res8 = (uint ************)plVar14[7];
      pppppppppppppuVar12 = &local_res8;
      uVar4 = FUN_00013aa4(plVar14,(longlong *)pppppppppppppuVar12,(ulonglong)pppppppppppppuVar16);
      uVar7 = (ulonglong)uVar4;
      pppppppppppppuVar18 = (uint *************)local_res8;
      if (uVar4 != 0) {
        plVar14[7] = (longlong)local_res8;
        break;
      }
      plVar14[7] = plVar14[7] + (longlong)pppppppppppppuVar16;
    } while ((ulonglong)plVar14[7] < (ulonglong)(plVar14[1] + plVar14[2]));
  }
  if ((uint)uVar7 < uVar15) {
    FUN_00011008("cache no space\n",pppppppppppppuVar12,uVar7,param_4);
    return 0xc0000802;
  }
  FUN_000138a8(*(longlong **)(param_1 + 0x118),(longlong *)&local_res8,param_3 & 0xffffffff);
  uVar7 = FUN_000139a8(*(longlong **)(param_1 + 0x120),(longlong *)&local_res8,param_3 & 0xffffffff)
  ;
  if ((int)uVar7 < 0) {
    return uVar7 & 0xffffffff;
  }
  pppppppppppppuVar12 = (uint *************)&local_res10;
  uVar7 = FUN_000139a8(*(longlong **)(param_1 + 0x120),(longlong *)pppppppppppppuVar12,
                       param_3 & 0xffffffff);
  if ((int)uVar7 < 0) {
    return uVar7 & 0xffffffff;
  }
  pppppppppppppuVar20 = *(uint **************)(param_1 + 0x148);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar7 = 0;
  uVar8 = param_3 & 0xffffffff;
  pppppppppppppuVar19 = (uint *************)0xc0000017;
  if ((pppppppppppppuVar20 != (uint *************)0x0) &&
     (uVar4 = *(uint *)(param_1 + 200), uVar4 != 0)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x150) / (ulonglong)uVar4;
    pppppppppppppuVar12 =
         (uint *************)((ulonglong)*(uint *)(param_1 + 0x150) % (ulonglong)uVar4);
    local_res18[0] = (uint)uVar9;
    pppppppppppppuVar2 = (uint *************)param_2;
    pppppppppppppuVar3 = pppppppppppppuVar18;
    uVar4 = uVar15;
    if (local_res18[0] != 0) {
      while (pppppppppppppuVar17 = pppppppppppppuVar20,
            local_res8 = (uint ************)pppppppppppppuVar20, uVar4 != 0) {
        uVar21 = (uint)uVar8;
        uVar4 = (uint)uVar9;
        if (uVar21 < (uint)uVar9) {
          uVar4 = uVar21;
        }
        pppppppppppppuVar17 = (uint *************)(ulonglong)uVar4;
        pppppppppppppuVar12 = pppppppppppppuVar2;
        uVar5 = FUN_00014300(lVar1,(longlong)pppppppppppppuVar2,uVar4,pppppppppppppuVar20);
        uVar7 = (ulonglong)uVar5;
        param_2 = (uint *******)local_res10;
        pppppppppppppuVar19 = pppppppppppppuVar20;
        if ((int)uVar5 < 0) break;
        pppppppppppppuVar17 = (uint *************)(ulonglong)uVar4;
        pppppppppppppuVar12 = pppppppppppppuVar3;
        pppppppppppppuVar19 = (uint *************)local_res8;
        uVar8 = FUN_000141f8(lVar1,(longlong)pppppppppppppuVar3,uVar4,local_res8);
        uVar7 = uVar8 & 0xffffffff;
        param_2 = (uint *******)local_res10;
        if ((int)uVar8 < 0) break;
        uVar8 = (ulonglong)(uVar21 - uVar4);
        uVar9 = (ulonglong)local_res18[0];
        pppppppppppppuVar20 = (uint *************)local_res8;
        pppppppppppppuVar2 = (uint *************)((longlong)pppppppppppppuVar2 + (ulonglong)uVar4);
        pppppppppppppuVar3 = (uint *************)((longlong)pppppppppppppuVar3 + (ulonglong)uVar4);
        uVar4 = uVar21 - uVar4;
      }
      goto LAB_00017183;
    }
  }
  uVar7 = 0xc0000017;
  pppppppppppppuVar17 = pppppppppppppuVar20;
  local_res8 = (uint ************)pppppppppppppuVar20;
LAB_00017183:
  if (-1 < (int)uVar7) {
    local_78 = pppppppppppppuVar18;
    local_70 = uVar15;
    if (local_res20 == '\0') {
      pppppppppppppuVar12 = (uint *************)&local_80;
      local_80 = (uint *************)param_2;
      uVar10 = FUN_0001c0f8(*(longlong **)(param_1 + 0x128),pppppppppppppuVar12);
      param_5 = (uint *******)local_80;
      if ((int)uVar10 == 0) {
        pcVar11 = "cache insert fail";
      }
      else {
        FUN_00011008("cache CacheSrcData insert %I64u->%I64u smp.nSectorCount=%u\n",local_80,
                     pppppppppppppuVar18,pppppppppppppuVar16);
        pppppppppppppuVar17 = pppppppppppppuVar18;
LAB_000172fd:
        pppppppppppppuVar12 = (uint *************)&local_80;
        local_80 = local_78;
        local_78 = (uint *************)param_5;
        uVar10 = FUN_0001c0f8(*(longlong **)(param_1 + 0x130),pppppppppppppuVar12);
        if ((int)uVar10 != 0) {
          return uVar7;
        }
        pcVar11 = "cache m_pMapCacheDst insert fail";
        pppppppppppppuVar19 = pppppppppppppuVar16;
      }
    }
    else {
      lVar1 = **(longlong **)(param_1 + 0x128);
      local_80 = (uint *************)param_5;
      pppppppppppppuVar16 = pppppppppppppuVar19;
      if (((lVar1 != 0) && (uVar15 = *(uint *)(*(longlong **)(param_1 + 0x128) + 1), uVar15 != 0))
         && (uVar8 = 0, uVar15 != 0)) {
        puVar13 = (ulonglong *)(lVar1 + 0x10);
        do {
          if ((((puVar13[-2] != 0) && ((int)puVar13[-1] != 0)) &&
              ((uint *******)*puVar13 <= param_5)) && (param_5 < (uint *******)puVar13[1])) {
            local_68 = (uint ************)0x0;
            pppppppppppppuVar17 = &local_68;
            local_60 = 0;
            local_58 = 0;
            pppppppppppppuVar12 = (uint *************)param_5;
            uVar10 = FUN_0001c3a4((longlong *)(uVar8 * 0x20 + lVar1),(ulonglong)param_5,
                                  pppppppppppppuVar17);
            if ((int)uVar10 != 0) {
              plVar14 = (longlong *)(uVar8 * 0x20 + lVar1);
              lVar1 = *plVar14;
              if ((lVar1 != 0) && ((int)plVar14[1] != 0)) {
                local_res18[0] = 0xffffffff;
                pppppppppppppuVar17 = (uint *************)local_res18;
                pppppppppppppuVar12 = (uint *************)param_5;
                iVar6 = FUN_0001c428(plVar14,(ulonglong)param_5,(uint *)pppppppppppppuVar17);
                if ((iVar6 != 0) &&
                   (uVar8 = (ulonglong)local_res18[0], local_res18[0] < *(uint *)(plVar14 + 1))) {
                  *(uint **************)(lVar1 + uVar8 * 0x14) = local_80;
                  *(uint **************)(lVar1 + 8 + uVar8 * 0x14) = local_78;
                  *(uint *)(lVar1 + 0x10 + uVar8 * 0x14) = local_70;
                  FUN_0001c4ac(plVar14);
                  pppppppppppppuVar17 = pppppppppppppuVar18;
                  FUN_00011008("cache CacheSrcData update %I64u->%I64u\n",param_5,
                               pppppppppppppuVar18,pppppppppppppuVar16);
                  local_78 = pppppppppppppuVar18;
                  goto LAB_000172fd;
                }
              }
              break;
            }
          }
          uVar4 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar4;
          puVar13 = puVar13 + 4;
        } while (uVar4 < uVar15);
      }
      pcVar11 = "cache update fail";
      pppppppppppppuVar19 = pppppppppppppuVar16;
    }
    FUN_00011008(pcVar11,pppppppppppppuVar12,pppppppppppppuVar17,pppppppppppppuVar19);
    uVar7 = 0xc0000017;
  }
  return uVar7;
}




int FUN_00017348(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *_Dst;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 local_58 [8];
  ulonglong local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  local_44 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  if (*(ulonglong *)(param_1 + 0xf0) == 0) {
    local_40 = 0;
  }
  else {
    local_40 = (undefined4)
               ((ulonglong)(*(longlong *)(param_1 + 0xe8) * 100) / *(ulonglong *)(param_1 + 0xf0));
  }
  iVar6 = 10;
  local_50 = param_4;
  local_48 = param_3;
  while (lVar2 = *(longlong *)(param_1 + 0x100),
        0x32 < (byte)((ulonglong)((longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + 0x15) * 100) /
                     (ulonglong)(longlong)*(int *)(lVar2 + 0x28))) {
    FUN_00011008("UrgentRead m_pUrgentMgr=%u",
                 (ulonglong)((longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + 0x15) * 100) /
                 (ulonglong)(longlong)*(int *)(lVar2 + 0x28) & 0xff,lVar2,param_4);
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
    local_res8 = -1000000;
    KeDelayExecutionThread(0,0,&local_res8);
  }
  iVar6 = 600;
  do {
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x98);
    uVar9 = (ulonglong)uVar11;
    iVar5 = **(int **)(param_1 + 0x100);
    if (-1 < iVar5) {
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x98);
      param_4 = (ulonglong)uVar1;
      uVar7 = FUN_00017dac((longlong)*(int **)(param_1 + 0x100),(longlong)local_58,uVar11,uVar1,
                           &local_res8);
      lVar2 = local_res8;
      iVar5 = (int)uVar7;
      if (-1 < iVar5) {
        if ((*(longlong *)(param_1 + 0x148) == 0) || (*(uint *)(param_1 + 0x150) == 0)) {
          FUN_00017f7c(*(uint **)(param_1 + 0x100),local_res8);
          FUN_00011008("UrgentRead m_pUrgentMgr3=%u ",
                       (ulonglong)
                       ((longlong)
                        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x20) + 0x15) * 100)
                       / (ulonglong)(longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x28) & 0xff
                       ,uVar9,param_4);
          return -0x3fffffe9;
        }
        lVar8 = *(longlong *)(param_1 + 0x18);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x150) / (ulonglong)*(uint *)(lVar8 + 0x98);
        _Dst = (void *)((ulonglong)*(uint *)(local_res8 + 0x1c) + local_res8);
        if (param_3 != 0) {
          do {
            uVar7 = (ulonglong)param_3;
            if ((int)uVar9 < (int)param_3) {
              uVar7 = uVar9;
            }
            uVar11 = (uint)uVar7;
            iVar6 = FUN_00014300(lVar8,param_2,uVar11,*(undefined8 *)(param_1 + 0x148));
            if (iVar6 < 0) {
              DbgPrint("********************************************\n");
              DbgPrint("ReadSectors failed, status = %x\n",iVar6);
              DbgPrint("********************************************\n");
              FUN_00017f7c(*(uint **)(param_1 + 0x100),lVar2);
              return iVar6;
            }
            memcpy(_Dst,*(void **)(param_1 + 0x148),
                   (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x98) * uVar11));
            lVar8 = *(longlong *)(param_1 + 0x18);
            _Dst = (void *)((longlong)_Dst + (ulonglong)(*(int *)(lVar8 + 0x98) * uVar11));
            param_2 = param_2 + uVar7;
            param_3 = param_3 - uVar11;
          } while (param_3 != 0);
        }
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 8);
        uVar4 = KeAcquireSpinLockRaiseToDpc(plVar3 + 1);
        *(undefined1 *)(plVar3 + 2) = uVar4;
        FUN_00013454(*plVar3);
        KeReleaseSpinLock(plVar3 + 1,(char)plVar3[2]);
        return 0;
      }
    }
    puVar10 = &local_res20;
    local_res20 = 0xffffffffffff3cb0;
    KeDelayExecutionThread(0);
    bVar12 = iVar6 == 0;
    iVar6 = iVar6 + -1;
    if (bVar12) {
      FUN_00011008("UrgentRead m_pUrgentMgr2=%u",
                   (ulonglong)
                   ((longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x20) + 0x15)
                   * 100) / (ulonglong)(longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x28) &
                   0xff,puVar10,param_4);
      FUN_00017d4c(*(undefined4 **)(param_1 + 0x100));
      return iVar5;
    }
  } while( true );
}




uint FUN_00017620(longlong param_1,longlong param_2,undefined8 ****param_3,undefined8 ****param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *******_Size;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  uint uVar15;
  undefined8 *******pppppppuVar16;
  int iVar17;
  bool bVar18;
  undefined8 ******local_res8;
  undefined8 ******local_res10;
  undefined8 ******local_res18;
  undefined8 ******local_res20;
  undefined8 ******local_68;
  longlong local_60;
  uint local_58;
  
  pppppppuVar11 = (undefined8 *******)0x0;
  if (((*(longlong *)(param_1 + 0xf8) == 0) || (*(int **)(param_1 + 0x100) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x100) < 0)) {
    uVar15 = 0xc0000120;
LAB_00017ac7:
    if (*(ulonglong *)(param_1 + 0xf0) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)
              ((ulonglong)(*(longlong *)(param_1 + 0xe8) * 100) / *(ulonglong *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_2 + 0x18) = uVar7;
    *(char *)(param_2 + 0x1c) =
         (char)((ulonglong)
                ((longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x20) + 0x15) *
                100) / (ulonglong)(longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x28));
    *(bool *)(param_2 + 0x1d) = -1 < **(int **)(param_1 + 0x100);
    if ((int)uVar15 < 0) {
      FUN_00011008("GetNextBlock failed status = 0x%x",(ulonglong)uVar15,param_3,param_4);
    }
    return uVar15;
  }
  pppppppuVar14 = *(undefined8 ********)(param_2 + 8);
  param_4 = (undefined8 *******)0x0;
  _Size = (undefined8 *******)0x0;
  local_res10 = pppppppuVar14;
  KeWaitForSingleObject(param_1 + 0x90,0,0,0,0);
  plVar8 = (longlong *)FUN_000158b4(param_1,(ulonglong)pppppppuVar14);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  local_res8 = *(undefined8 *******)(*(longlong *)(param_1 + 0xf8) + 8);
  pppppppuVar16 =
       (undefined8 *******)
       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + 0x10) /
       (ulonglong)*(uint *)(param_1 + 200));
  if (*(uint *)(param_2 + 0x10) < (uint)pppppppuVar16) {
    pppppppuVar16 = (undefined8 *******)(ulonglong)*(uint *)(param_2 + 0x10);
  }
  local_res18 = (undefined8 ******)((longlong)pppppppuVar16 + (longlong)pppppppuVar14);
  bVar18 = pppppppuVar14 < local_res18;
  local_res20 = pppppppuVar14;
LAB_000176dd:
  uVar15 = (uint)pppppppuVar11;
  iVar12 = (int)pppppppuVar14;
  param_3 = _Size;
  if ((!bVar18) || (uVar13 = (uint)pppppppuVar16, uVar13 == 0)) goto LAB_00017a96;
  param_3 = (undefined8 *******)0x0;
  if (plVar8 == (longlong *)0x0) {
LAB_00017890:
    if ((*(longlong **)(param_1 + 0x128) == (longlong *)0x0) ||
       (&stack0x00000000 == (undefined1 *)0xfffffffffffffff8)) {
      pppppppuVar11 = (undefined8 *******)0xc0000017;
    }
    else {
      local_68 = (undefined8 *******)0x0;
      _Size = &local_68;
      local_60 = 0;
      local_58 = 0;
      uVar9 = FUN_0001c278(*(longlong **)(param_1 + 0x128),(ulonglong)pppppppuVar14,_Size);
      if ((int)uVar9 == 0) {
        FUN_00011008("cache ReadFromCache no cache s=%I64u",pppppppuVar14,_Size,param_4);
      }
      else {
        if (local_68 <= pppppppuVar14) {
          uVar15 = local_58 - (int)((longlong)pppppppuVar14 - (longlong)local_68);
          param_3 = pppppppuVar16;
          if (uVar15 < uVar13) {
            param_3 = (undefined8 ****)(ulonglong)uVar15;
          }
          _Size = (undefined8 *******)param_3;
          param_4 = local_res8;
          uVar15 = FUN_00014300(*(longlong *)(param_1 + 0x18),
                                local_60 + ((longlong)pppppppuVar14 - (longlong)local_68),
                                (uint)param_3,local_res8);
          pppppppuVar11 = (undefined8 *******)(ulonglong)uVar15;
          goto LAB_00017946;
        }
        _Size = (undefined8 *******)(ulonglong)local_58;
        param_4 = pppppppuVar14;
        FUN_00011008("cache ReadFromCache not align save=%I64u(%u) current=%I64u(%u)",local_68,_Size
                     ,pppppppuVar14);
      }
      pppppppuVar11 = (undefined8 *******)0xc0000225;
    }
LAB_00017946:
    if ((int)pppppppuVar11 < 0) {
      lVar1 = *(longlong *)(param_1 + 0x100);
      uVar15 = *(uint *)(param_1 + 200);
      param_3 = (undefined8 *******)0x0;
      param_4 = (undefined8 *******)0x0;
      _Size = (undefined8 *******)0x0;
      pppppppuVar11 = (undefined8 *******)0x0;
      iVar17 = KeWaitForSingleObject(**(undefined8 **)(lVar1 + 0x10),0,0,0,0);
      if (-1 < iVar17) {
        lVar2 = *(longlong *)(lVar1 + 0x20);
        if (*(int *)(lVar2 + 0x11) == 0) goto LAB_00017994;
        param_4 = (undefined8 ****)((ulonglong)*(uint *)(lVar2 + 9) + lVar2);
        while ((undefined8 *******)param_4 != (undefined8 *******)0x0) {
          if ((((undefined8 *******)param_4)[1] <= pppppppuVar14) &&
             (pppppppuVar14 <
              (undefined8 *******)
              ((ulonglong)*(uint *)((longlong)param_4 + 0x14) +
              (longlong)((undefined8 *******)param_4)[1]))) {
            uVar10 = (ulonglong)*(uint *)((longlong)param_4 + 0x14) +
                     (longlong)((undefined8 *******)param_4)[1];
            if ((ulonglong)((longlong)pppppppuVar16 + (longlong)pppppppuVar14) < uVar10) {
              uVar10 = (longlong)pppppppuVar16 + (longlong)pppppppuVar14;
            }
            uVar6 = (int)uVar10 - iVar12;
            param_3 = (undefined8 ****)(ulonglong)uVar6;
            _Size = (undefined8 *******)(ulonglong)(uVar6 * uVar15);
            memcpy(local_res8,
                   (void *)((longlong)param_4 +
                           (ulonglong)*(uint *)((longlong)param_4 + 0x1c) +
                           ((longlong)pppppppuVar14 - (longlong)((undefined8 *******)param_4)[1]) *
                           (ulonglong)uVar15),(size_t)_Size);
            break;
          }
          if (*(uint *)((longlong)param_4 + 0x24) == 0) {
LAB_00017994:
            param_4 = (undefined8 *******)0x0;
          }
          else {
            param_4 = (undefined8 ****)(lVar2 + (ulonglong)*(uint *)((longlong)param_4 + 0x24));
          }
        }
        KeReleaseMutex(**(undefined8 **)(lVar1 + 0x10),0);
      }
      if ((int)param_3 == 0) {
        param_3 = (undefined8 *******)0x0;
        uVar15 = 0xc0000225;
        FUN_00011008("cache GetNextBlock GetUrgBlock get failed s=%I64u,secs=%u",pppppppuVar14,0,
                     param_4);
        goto LAB_00017a96;
      }
    }
  }
  else {
    uVar5 = KeAcquireSpinLockRaiseToDpc(plVar8 + 5);
    *(undefined1 *)(plVar8 + 6) = uVar5;
    pppppppuVar11 = pppppppuVar16;
    if ((ulonglong)(plVar8[1] + plVar8[2]) <
        (ulonglong)((longlong)pppppppuVar16 + (longlong)pppppppuVar14)) {
      pppppppuVar11 =
           (undefined8 *******)(ulonglong)(uint)(((int)plVar8[1] - iVar12) + (int)plVar8[2]);
    }
    uVar15 = *(uint *)(plVar8 + 3);
    uVar10 = CONCAT44(0,uVar15);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)pppppppuVar14 - plVar8[1];
    auVar4 = auVar4 / auVar3;
    _Size = auVar4._0_8_;
    uVar6 = auVar4._0_4_;
    param_4 = (undefined8 ****)
              ((ulonglong)
               ((((int)(((longlong)pppppppuVar11 + (uVar10 - plVar8[1]) + -1 +
                        (longlong)pppppppuVar14) / uVar10) - uVar6) + 1) * uVar15 - 1) /
              (ulonglong)uVar15);
    if ((((uint)param_4 != 0) && (uVar6 < *(uint *)((longlong)plVar8 + 0x1c))) &&
       ((*(byte *)((((ulonglong)_Size & 0xffffffff) >> 3) + *plVar8) >> (auVar4[0] & 7) & 1) != 0))
    {
      uVar6 = *(int *)((longlong)plVar8 + 0x1c) - uVar6;
      if (uVar6 < (uint)param_4) {
        param_4 = (undefined8 ****)(ulonglong)uVar6;
      }
      uVar15 = (uint)param_4;
      param_3 = (undefined8 *******)0x0;
      while (((uVar15 != 0 && ((uint)_Size < *(uint *)((longlong)plVar8 + 0x1c))) &&
             ((*(byte *)((((ulonglong)_Size & 0xffffffff) >> 3) + *plVar8) >> ((byte)_Size & 7) & 1)
              != 0))) {
        param_3 = (undefined8 ****)(ulonglong)(uint)((int)param_3 + (int)plVar8[3]);
        _Size = (undefined8 *******)(ulonglong)((uint)_Size + 1);
        uVar15 = (int)param_4 - 1;
        param_4 = (undefined8 ****)(ulonglong)uVar15;
      }
    }
    KeReleaseSpinLock(plVar8 + 5);
    if ((int)param_3 == 0) goto LAB_00017890;
    uVar15 = (int)param_3 - (uint)(iVar12 - (int)plVar8[1]) % *(uint *)(plVar8 + 3);
    param_3 = pppppppuVar11;
    if (uVar15 < (uint)pppppppuVar11) {
      param_3 = (undefined8 ****)(ulonglong)uVar15;
    }
    if ((uint)param_3 == 0) goto LAB_00017890;
    iVar17 = 10;
    if (uVar13 < (uint)param_3) {
      uVar15 = 0xc0000225;
      FUN_00011008("Read Sectors nFindSectors > nSectors ns=%u,nf=%u,\n",pppppppuVar16,param_3,
                   param_4);
LAB_00017a96:
      KeReleaseMutex(param_1 + 0x90);
      uVar13 = iVar12 - (int)local_res20;
      *(undefined8 *******)(param_2 + 8) = local_res20;
      *(uint *)(param_2 + 0x10) = uVar13;
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + (ulonglong)uVar13;
      goto LAB_00017ac7;
    }
    while( true ) {
      uVar6 = (uint)param_3;
      _Size = (undefined8 *******)param_3;
      param_4 = local_res8;
      uVar15 = FUN_00014300(*(longlong *)(param_1 + 0x18),(longlong)pppppppuVar14,uVar6,local_res8);
      pppppppuVar11 = (undefined8 *******)(ulonglong)uVar15;
      if (-1 < (int)uVar15) break;
      param_3 = pppppppuVar16;
      DbgPrint("Read Sectors Error %I64X, %X. Code %d.\n");
      iVar17 = iVar17 + -1;
      uVar6 = uVar6 - 1;
      param_4 = pppppppuVar11;
      if ((uVar6 == 0) || (iVar17 == 0)) goto LAB_00017a96;
      param_3 = (undefined8 ****)(ulonglong)uVar6;
    }
    if (*(char *)(param_2 + 0x1d) != '\0') {
      _Size = (undefined8 *******)param_3;
      FUN_000138a8(plVar8,(longlong *)&local_res10,(ulonglong)param_3);
    }
  }
  uVar15 = (uint)param_3;
  if ((uVar15 == 0) || (uVar13 < uVar15)) {
    uVar15 = 0xc0000225;
    FUN_00011008("GetNextBlock failed s=%I64u,find_secs=%u,secs=%u",pppppppuVar14,param_3,
                 pppppppuVar16);
    param_4 = pppppppuVar16;
    goto LAB_00017a96;
  }
  pppppppuVar16 = (undefined8 *******)(ulonglong)(uVar13 - uVar15);
  local_res8 = (undefined8 ******)
               ((longlong)local_res8 + (ulonglong)(*(int *)(param_1 + 200) * uVar15));
  pppppppuVar14 = (undefined8 *******)((longlong)pppppppuVar14 + (longlong)param_3);
  local_res10 = pppppppuVar14;
  plVar8 = (longlong *)FUN_000158b4(param_1,(ulonglong)pppppppuVar14);
  bVar18 = pppppppuVar14 < local_res18;
  goto LAB_000176dd;
}




undefined4 *
FUN_00017b48(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
            undefined8 param_5,int *param_6)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int local_res8 [2];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  puVar2 = FUN_0001347c(0x18);
  if (puVar2 == (ulonglong *)0x0) {
    puVar2 = (ulonglong *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    local_res8[0] = ObReferenceObjectByHandle(param_4,0,0,1,puVar2,0);
  }
  *(ulonglong **)(param_1 + 2) = puVar2;
  iVar1 = local_res8[0];
  if (puVar2 == (ulonglong *)0x0) {
    iVar1 = -0x3fffffe9;
  }
  if (-1 < iVar1) {
    puVar2 = FUN_0001347c(8);
    if (puVar2 == (ulonglong *)0x0) {
      puVar2 = (ulonglong *)0x0;
    }
    else {
      *puVar2 = 0;
      iVar1 = ObReferenceObjectByHandle(param_5,0,0,1,puVar2,0);
    }
    *(ulonglong **)(param_1 + 4) = puVar2;
    if (puVar2 == (ulonglong *)0x0) {
      iVar1 = -0x3fffffe9;
    }
    if (-1 < iVar1) {
      local_res8[0] = iVar1;
      puVar2 = FUN_0001347c(0x20);
      if (puVar2 == (ulonglong *)0x0) {
        puVar2 = (ulonglong *)0x0;
      }
      else {
        puVar2 = FUN_00013598(puVar2,param_2,param_3 & 0xffffffff,local_res8);
        iVar1 = local_res8[0];
      }
      *(ulonglong **)(param_1 + 6) = puVar2;
      if (puVar2 == (ulonglong *)0x0) {
        iVar1 = -0x3fffffe9;
      }
      if (-1 < iVar1) {
        *(ulonglong *)(param_1 + 8) = puVar2[1];
        uVar3 = FUN_00017ca8(param_1);
        iVar1 = (int)uVar3;
      }
    }
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar1;
  }
  return param_1;
}




ulonglong FUN_00017ca8(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = KeWaitForSingleObject(**(undefined8 **)(param_1 + 4),0,0,0,0);
  if (-1 < (int)uVar2) {
    **(undefined1 **)(param_1 + 8) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x11) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x15) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 1) = 0x19;
    *(int *)(*(longlong *)(param_1 + 8) + 5) = *(int *)(*(longlong *)(param_1 + 6) + 0x10) + -1;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 9) = 0x19;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd) = 0x19;
    param_1[10] = (*(int *)(*(longlong *)(param_1 + 8) + 5) -
                  *(int *)(*(longlong *)(param_1 + 8) + 1)) + 1;
    iVar1 = KeReleaseMutex(**(undefined8 **)(param_1 + 4),0);
    uVar2 = (ulonglong)(-(uint)(iVar1 != 0) & 0xc000000d);
    *param_1 = 0;
  }
  return uVar2;
}




int FUN_00017d4c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = KeWaitForSingleObject(**(undefined8 **)(param_1 + 4),0,0,0,0);
  if (-1 < iVar1) {
    **(undefined1 **)(param_1 + 8) = 1;
    *param_1 = 0xc0000017;
    KeReleaseMutex(**(undefined8 **)(param_1 + 4),0);
  }
  return iVar1;
}




ulonglong FUN_00017dac(longlong param_1,longlong param_2,int param_3,uint param_4,
                      undefined8 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if ((((param_5 == (undefined8 *)0x0) || (param_2 == 0)) || (param_3 == 0)) ||
     (*(int *)(param_2 + 0x10) == 0)) {
    return 0xc000000d;
  }
  uVar6 = KeWaitForSingleObject(**(undefined8 **)(param_1 + 0x10),0,0,0,0);
  uVar7 = uVar6 & 0xffffffff;
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  iVar5 = *(int *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x20);
  iVar10 = iVar5 * param_3 + 0x29 + param_4;
  if (*(int *)(lVar4 + 0x11) == 0) {
    uVar6 = (ulonglong)*(uint *)(lVar4 + 1);
LAB_00017e41:
    puVar9 = (undefined4 *)(uVar6 + lVar4);
    if (*(int *)(lVar4 + 0x11) == 0) {
      puVar9[8] = 0;
    }
    else {
      puVar9[8] = *(undefined4 *)(lVar4 + 0xd);
    }
    if (puVar9[8] != 0) {
      *(int *)((ulonglong)(uint)puVar9[8] + 0x24 + *(longlong *)(param_1 + 0x20)) = (int)uVar6;
    }
    puVar9[9] = 0;
    *(int *)(*(longlong *)(param_1 + 0x20) + 0xd) = (int)uVar6;
    lVar4 = *(longlong *)(param_1 + 0x20);
    *param_5 = puVar9;
    piVar1 = (int *)(lVar4 + 0x15);
    *piVar1 = *piVar1 + iVar10;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x11);
    *piVar1 = *piVar1 + 1;
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    puVar9[4] = param_3;
    *puVar9 = uVar2;
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    puVar9[5] = iVar5;
    puVar9[1] = uVar2;
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(param_2 + 8);
    iVar5 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x15);
    puVar9[6] = iVar10;
    *(char *)(puVar9 + 10) = (char)((ulonglong)((longlong)iVar3 * 100) / (ulonglong)(longlong)iVar5)
    ;
    puVar9[7] = (param_4 + 0x29 + (int)puVar9 & ~param_4) - (int)puVar9;
  }
  else {
    uVar8 = *(uint *)(lVar4 + 0xd) + *(int *)((ulonglong)*(uint *)(lVar4 + 0xd) + 0x18 + lVar4);
    uVar6 = (ulonglong)uVar8;
    if (*(uint *)(lVar4 + 9) < uVar8) {
      if (*(uint *)(lVar4 + 5) < (uVar8 - 1) + iVar10) {
        uVar6 = (ulonglong)*(uint *)(lVar4 + 1);
LAB_00017e7a:
        if (*(uint *)(lVar4 + 9) < (uint)((int)uVar6 + iVar10)) {
          uVar7 = 0xc0000017;
          goto LAB_00017e89;
        }
      }
      goto LAB_00017e41;
    }
    if (uVar8 < *(uint *)(lVar4 + 9)) goto LAB_00017e7a;
    uVar7 = 0xc0000017;
  }
  if (-1 < (int)uVar7) {
    iVar5 = KeReleaseMutex(**(undefined8 **)(param_1 + 0x10),0);
    return (ulonglong)(-(uint)(iVar5 != 0) & 0xc000000d);
  }
LAB_00017e89:
  KeReleaseMutex(**(undefined8 **)(param_1 + 0x10),0);
  return uVar7;
}




ulonglong FUN_00017f7c(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_1;
  if (-1 < (int)*param_1) {
    if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x11) == 0)) {
      *param_1 = 0xc000000d;
      uVar5 = 0xc000000d;
    }
    else {
      uVar5 = KeWaitForSingleObject(**(undefined8 **)(param_1 + 4),0,0,0,0);
      *param_1 = (uint)uVar5;
      if (-1 < (int)(uint)uVar5) {
        *(int *)(*(longlong *)(param_1 + 8) + 0x11) =
             *(int *)(*(longlong *)(param_1 + 8) + 0x11) + -1;
        lVar2 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar2 + 0x11) == 0) {
          *(undefined4 *)(lVar2 + 9) = *(undefined4 *)(lVar2 + 1);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd) =
               *(undefined4 *)(*(longlong *)(param_1 + 8) + 9);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x15) = 0;
        }
        else {
          uVar4 = *(uint *)(param_2 + 0x20);
          uVar1 = *(uint *)(param_2 + 0x24);
          if (uVar4 == 0) {
            *(uint *)(lVar2 + 9) = uVar1;
          }
          else {
            *(uint *)((ulonglong)uVar4 + 0x24 + lVar2) = uVar1;
          }
          if (uVar1 == 0) {
            *(uint *)(*(longlong *)(param_1 + 8) + 0xd) = uVar4;
          }
          else {
            *(uint *)((ulonglong)uVar1 + 0x20 + *(longlong *)(param_1 + 8)) = uVar4;
          }
          *(int *)(*(longlong *)(param_1 + 8) + 0x15) =
               *(int *)(*(longlong *)(param_1 + 8) + 0x15) - *(int *)(param_2 + 0x18);
        }
        iVar3 = KeReleaseMutex(**(undefined8 **)(param_1 + 4),0);
        uVar4 = -(uint)(iVar3 != 0) & 0xc000000d;
        uVar5 = (ulonglong)uVar4;
        *param_1 = uVar4;
      }
    }
  }
  return uVar5;
}




longlong * FUN_0001806c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  KeWaitForSingleObject(param_1 + 0x10,0,0,0,0);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = (longlong)puVar1;
  *puVar1 = param_2;
  *(longlong **)(param_1 + 8) = param_2;
  KeReleaseMutex(param_1 + 0x10,0);
  return param_2;
}




longlong * FUN_000180d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  KeWaitForSingleObject(param_1 + 0x10,0,0,0,0);
  plVar1 = (longlong *)param_2[1];
  lVar2 = *param_2;
  *plVar1 = lVar2;
  *(longlong **)(lVar2 + 8) = plVar1;
  KeReleaseMutex(param_1 + 0x10,0);
  return param_2;
}




void FUN_00018128(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong local_18;
  longlong local_10;
  
  local_10 = param_1 + 0x18;
  bVar4 = false;
  local_18 = param_1;
  do {
    iVar6 = KeWaitForMultipleObjects(2,&local_18,1,0,0,0,0,0);
    if (iVar6 == 0) {
      bVar4 = true;
LAB_0001818d:
      uVar5 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x48);
      plVar1 = (longlong *)(param_1 + 0x38);
      while( true ) {
        *(undefined1 *)(param_1 + 0x50) = uVar5;
        if ((longlong *)*plVar1 == plVar1) break;
        plVar2 = (longlong *)*plVar1;
        lVar3 = *plVar2;
        *plVar1 = lVar3;
        *(longlong **)(lVar3 + 8) = plVar1;
        KeReleaseSpinLock(param_1 + 0x48,*(undefined1 *)(param_1 + 0x50));
        (**(code **)(param_1 + 0x58))(plVar2);
        uVar5 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x48);
      }
      KeReleaseSpinLock(param_1 + 0x48,uVar5);
    }
    else if (iVar6 == 1) goto LAB_0001818d;
    if (bVar4) {
      PsTerminateSystemThread(0);
      return;
    }
  } while( true );
}




longlong FUN_0001820c(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res10;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_res10 = param_2;
  KeInitializeSemaphore(param_1,0,0x4000);
  lVar1 = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(code **)(param_1 + 0x60) = FUN_0001664c;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  iVar2 = PsCreateSystemThread(&local_res10,0,0,0,0,FUN_00018348,param_1);
  if (-1 < iVar2) {
    iVar2 = ObReferenceObjectByHandle(local_res10,0x1f01ff,0,0,(undefined8 *)(param_1 + 0x38),0);
    ZwClose(local_res10);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  return param_1;
}




longlong * FUN_000182f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = uVar3;
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((longlong *)*plVar1 == plVar1) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)*plVar1;
    lVar2 = *plVar4;
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
  }
  KeReleaseSpinLock(param_1 + 0x50,*(undefined1 *)(param_1 + 0x58));
  return plVar4;
}




void FUN_00018348(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  KeSetPriorityThread(SystemReserved1[0xf],0x10);
  while( true ) {
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
    iVar1 = KeWaitForSingleObject(param_1,0,0,0,0);
    if (iVar1 != 0) break;
    while (plVar2 = FUN_000182f0(param_1), plVar2 != (longlong *)0x0) {
      (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68));
    }
  }
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0x9995,0,0,0,0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000183c8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  byte in_CR8;
  
  uVar4 = 1;
  puVar2 = (undefined8 *)ExAllocatePool(0,0x18);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    *puVar2 = param_1;
    puVar2[1] = param_2;
    do {
    } while (DAT_000201fc != 0);
    bVar5 = in_CR8 < 2;
    if (bVar5) {
      DAT_00020200 = KeAcquireSpinLockRaiseToDpc(&DAT_000201f0);
    }
    else {
      KeAcquireSpinLockAtDpcLevel();
    }
    _DAT_000201f8 = (uint)!bVar5;
    DAT_000201fc = 1;
    if (bVar5) {
      KeReleaseSpinLock(&DAT_000201f0,DAT_00020200);
    }
    else {
      KeReleaseSpinLockFromDpcLevel(&DAT_000201f0);
    }
    puVar3 = DAT_000206b0;
    puVar1 = puVar2;
    if (param_2 == 0) {
      puVar3 = DAT_000206b8;
      puVar1 = DAT_000206b0;
      DAT_000206b8 = puVar2;
    }
    DAT_000206b0 = puVar1;
    puVar2[2] = puVar3;
    bVar5 = in_CR8 < 2;
    if (bVar5) {
      DAT_00020200 = KeAcquireSpinLockRaiseToDpc(&DAT_000201f0);
    }
    else {
      KeAcquireSpinLockAtDpcLevel();
    }
    _DAT_000201f8 = (uint)!bVar5;
    DAT_000201fc = 0;
    if (bVar5) {
      KeReleaseSpinLock(&DAT_000201f0,DAT_00020200);
    }
    else {
      KeReleaseSpinLockFromDpcLevel();
    }
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_00018510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00011008("DrvHKSetNewHookFuns type=%d pfn=0x%x\n",param_1,param_2,param_4);
  uVar1 = DAT_000203f0;
  uVar2 = param_2;
  if (((param_1 != 1) && (uVar1 = param_2, uVar2 = DAT_000206a0, param_1 != 2)) &&
     (uVar1 = DAT_000203f0, param_1 == 3)) {
    DAT_000203f8 = param_2;
  }
  DAT_000206a0 = uVar2;
  DAT_000203f0 = uVar1;
  return 0;
}




void FUN_00018570(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = **(byte **)(param_2 + 0xb8);
  if (((DAT_000206a0 == (code *)0x0) || (bVar1 < 3)) ||
     ((4 < bVar1 && (((bVar1 != 9 && (bVar1 != 0xe)) && (bVar1 != 0x10)))))) {
    (*(code *)(&DAT_000204e0)[bVar1])();
  }
  else {
    (*DAT_000206a0)();
  }
  return;
}




int FUN_000185c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((DAT_0002023c == 1) || (DAT_0002023c == 2)) {
    FUN_00011008("DrvHKSelfAddDevice eHKNotHOOK return\n",param_2,param_3,param_4);
    iVar1 = -0x3ffffff2;
  }
  else {
    FUN_00011008("DrvHKSelfAddDevice\n",param_2,param_3,param_4);
    iVar1 = (*DAT_000203e0)(param_1,param_2);
    if ((iVar1 == 0) && (DAT_000203f8 != (code *)0x0)) {
      (*DAT_000203f8)(param_1,param_2);
    }
  }
  return iVar1;
}




int FUN_0001864c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1b9;
  FUN_00011008("%s %d\n","?DrvHookNextAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z",
               0x1b9,param_4);
  if (DAT_000203f0 == (code *)0x0) {
    iVar1 = (*DAT_000203e8)(param_1,param_2);
    if ((iVar1 == 0) && (lVar2 = FUN_00018ea0(L"\\Driver\\VolSnap"), lVar2 != 0)) {
      FUN_00011008("DrvHKHookNewDevice driver=0x%x",lVar2,uVar5,param_4);
      for (puVar4 = *(uint **)(lVar2 + 8); plVar3 = DAT_000206b0, puVar4 != (uint *)0x0;
          puVar4 = *(uint **)(puVar4 + 4)) {
        for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[2]) {
          if ((uint *)*plVar3 == puVar4) {
            if (plVar3[1] != 0) goto LAB_000186fd;
            break;
          }
        }
        FUN_00018b50(puVar4,puVar4,uVar5,param_4);
        FUN_00011008("DrvHKHookNewDevice 2 dev 0x%x",puVar4,uVar5,param_4);
LAB_000186fd:
      }
    }
  }
  else {
    iVar1 = (*DAT_000203f0)();
  }
  FUN_00011008("%s %d\n","?DrvHookNextAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z",
               0x1c7,param_4);
  return iVar1;
}




void FUN_00018734(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  longlong *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar2 = "?DrvHKHookSelfNewDevice@@YAXPEAU_DRIVER_OBJECT@@@Z";
  uVar4 = 0x1ce;
  FUN_00011008("%s %d\n","?DrvHKHookSelfNewDevice@@YAXPEAU_DRIVER_OBJECT@@@Z",0x1ce,param_4);
  pcVar3 = *(char **)(param_1 + 8);
  do {
    plVar1 = DAT_000206b0;
    if (pcVar3 == (char *)0x0) {
      FUN_00011008("%s %d\n","?DrvHKHookSelfNewDevice@@YAXPEAU_DRIVER_OBJECT@@@Z",0x1d9,param_4);
      return;
    }
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      if ((char *)*plVar1 == pcVar3) {
        if (plVar1[1] != 0) goto LAB_00018793;
        break;
      }
    }
    FUN_00018f38((longlong)pcVar3,pcVar2,uVar4,param_4);
    pcVar2 = pcVar3;
    FUN_00011008("DrvHKHookSelfNewDevice 2 dev 0x%x",pcVar3,uVar4,param_4);
LAB_00018793:
    pcVar3 = *(char **)(pcVar3 + 0x10);
  } while( true );
}




undefined8 FUN_000187c0(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = "?DrvHookSelfAddDeviceWithHookVersion@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z";
  uVar2 = 0x1e2;
  FUN_00011008("%s %d\n",
               "?DrvHookSelfAddDeviceWithHookVersion@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z"
               ,0x1e2,param_4);
  if (param_1 != 0) {
    FUN_00018734(param_1,pcVar1,uVar2,param_4);
  }
  FUN_00011008("%s %d\n",
               "?DrvHookSelfAddDeviceWithHookVersion@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z"
               ,0x1ea,param_4);
  return 0;
}




int FUN_00018818(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1f5;
  FUN_00011008("%s %d\n",
               "?DrvHookSelfAddDeviceWithNoHookVersion@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z"
               ,0x1f5,param_4);
  iVar1 = (*DAT_000203e8)(param_1);
  if ((iVar1 == 0) && (DAT_000203d8 != 0)) {
    FUN_00018734(DAT_000203d8,param_2,uVar2,param_4);
  }
  FUN_00011008("%s %d\n",
               "?DrvHookSelfAddDeviceWithNoHookVersion@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z"
               ,0x1fd,param_4);
  return iVar1;
}




undefined8 FUN_00018890(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (lVar3 = *(longlong *)(DAT_000203d0 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    if (lVar3 == param_1) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if ((DAT_0002023c != 3) && (DAT_0002023c != 0)) {
        param_1 = *(longlong *)(lVar3 + 0x118);
        if ((code *)(&DAT_00020400)[**(byte **)(param_2 + 0xb8)] != (code *)0x0) {
          uVar1 = (*(code *)(&DAT_00020400)[**(byte **)(param_2 + 0xb8)])(param_1,param_2);
          return uVar1;
        }
        goto LAB_00018986;
      }
      if (((*(int *)(param_1 + 0x48) != 7) || (DAT_0002023c != 3)) || (DAT_000206a8 == 0))
      goto LAB_0001896f;
      lVar2 = *(longlong *)(DAT_000206a8 + 8);
      if (lVar2 != 0) goto LAB_0001893e;
      goto LAB_00018955;
    }
  }
  if ((code *)(&DAT_00020400)[**(byte **)(param_2 + 0xb8)] != (code *)0x0) {
    uVar1 = (*(code *)(&DAT_00020400)[**(byte **)(param_2 + 0xb8)])(param_1,param_2);
    return uVar1;
  }
  goto LAB_00018986;
  while (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0) {
LAB_0001893e:
    if (lVar2 == *(longlong *)(lVar3 + 0x118)) break;
  }
  if (lVar2 == 0) {
LAB_00018955:
    *(undefined4 *)(param_2 + 0x30) = 0xc0000010;
    IofCompleteRequest(param_2,0);
    return 0xc0000010;
  }
LAB_0001896f:
  *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
  *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
  param_1 = *(longlong *)(lVar3 + 0x118);
LAB_00018986:
  uVar1 = IofCallDriver(param_1,param_2);
  return uVar1;
}




undefined8 FUN_00018998(uint param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  
  if ((param_2 == 0) || (plVar1 = DAT_000206b8, param_3 == 0)) {
    uVar2 = 0xc000000d;
  }
  else {
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      if (*plVar1 == param_2) {
        lVar3 = FUN_00018dc0(param_2,(wchar_t *)0x0);
        if ((lVar3 == 0) && (lVar3 = FUN_00018dc0(param_2,L"\\Driver\\volmgr"), lVar3 == 0)) {
          return 0xc0000005;
        }
        *(char *)(param_3 + 0x43) = *(char *)(param_3 + 0x43) + '\x01';
        *(longlong *)(param_3 + 0xb8) = *(longlong *)(param_3 + 0xb8) + 0x48;
        goto LAB_00018a52;
      }
    }
    if (((param_1 < 0x1b) && (pcVar4 = (code *)(&DAT_000205c0)[param_1], pcVar4 != (code *)0x0)) ||
       (pcVar4 = (code *)(&DAT_00020400)[**(byte **)(param_3 + 0xb8)], lVar3 = param_2,
       pcVar4 != (code *)0x0)) {
      uVar2 = (*pcVar4)(param_2,param_3);
    }
    else {
LAB_00018a52:
      uVar2 = IofCallDriver(lVar3,param_3);
    }
  }
  return uVar2;
}




void FUN_00018a70(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  bVar1 = **(byte **)(param_2 + 0xb8);
  plVar3 = DAT_000206b0;
  do {
    if (plVar3 == (longlong *)0x0) {
LAB_00018a98:
      FUN_00018998((uint)bVar1,param_1,param_2);
      return;
    }
    if (*plVar3 == param_1) {
      lVar2 = plVar3[1];
      if (lVar2 != 0) {
        if (DAT_0002023c == 3) {
          if ((2 < bVar1) && (((bVar1 < 5 || (bVar1 == 9)) || ((bVar1 == 0xe || (bVar1 == 0x10))))))
          {
            FUN_00018570(lVar2,param_2);
            return;
          }
          (*(code *)(&DAT_000205c0)[bVar1])(param_1);
          return;
        }
        if ((2 < bVar1) && ((((bVar1 < 5 || (bVar1 == 9)) || (bVar1 == 0xe)) || (bVar1 == 0x10)))) {
          if (DAT_000206a0 != (code *)0x0) {
            (*DAT_000206a0)(param_1);
            return;
          }
          (*(code *)(&DAT_000204e0)[bVar1])(lVar2);
          return;
        }
        FUN_00018890(param_1,param_2);
        return;
      }
      goto LAB_00018a98;
    }
    plVar3 = (longlong *)plVar3[2];
  } while( true );
}




undefined8 FUN_00018b50(uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = FUN_00011620(DAT_000203d0,param_1,param_3,param_4);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0xc000000e;
  }
  else {
    lVar1 = puVar2[8];
    *(uint **)(lVar1 + 0x118) = param_1;
    *(char *)((longlong)puVar2 + 0x4c) = (char)param_1[0x13] + '\x01';
    *(undefined8 *)(lVar1 + 0x120) = param_2;
    FUN_000183c8(param_2,(longlong)puVar2);
    FUN_00011008("current device stack size=%u",
                 (ulonglong)(uint)(int)*(char *)((longlong)puVar2 + 0x4c),param_3,param_4);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_00018bd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *local_res8;
  undefined2 local_18;
  undefined8 local_16;
  undefined4 local_e;
  undefined2 local_a;
  
  local_18 = 0;
  local_res8 = (uint *)0x0;
  uVar8 = 0xc000000e;
  local_16 = 0;
  local_e = 0;
  local_a = 0;
  FUN_00011008("DrvHKHookDrv ",param_2,param_3,param_4);
  RtlInitUnicodeString(&local_18,L"\\Driver\\VolSnap");
  puVar11 = (uint *)0x0;
  iVar4 = ObReferenceObjectByName
                    (&local_18,0x40,0,0,**(undefined8 **)IoDriverObjectType_exref,0,0,&local_res8);
  lVar6 = param_1;
  if (-1 < iVar4) {
    puVar9 = local_res8;
    FUN_00011008("Get %ws Driver=0x%x",L"\\Driver\\VolSnap",local_res8,puVar11);
    puVar7 = *(uint **)(local_res8 + 2);
    DAT_000203d0 = param_1;
    FUN_00011008("driver DO = 0x%x",puVar7,puVar9,puVar11);
    bVar3 = false;
    lVar6 = DAT_000203d0;
    if (puVar7 != (uint *)0x0) {
      do {
        if (puVar7[0x12] == 7) {
          FUN_00018b50(puVar7,puVar7,puVar9,puVar11);
          puVar9 = puVar7;
          FUN_00011008("Get2 %ws=0x%x",L"\\Driver\\VolSnap",puVar7,puVar11);
          bVar3 = true;
        }
        puVar7 = *(uint **)(puVar7 + 4);
      } while (puVar7 != (uint *)0x0);
      lVar6 = DAT_000203d0;
      if (bVar3) {
        FUN_000116e8(param_1);
        DAT_0002023c = 1;
        lVar6 = 0x70;
        do {
          *(undefined8 *)(&DAT_00020390 + lVar6) = *(undefined8 *)(lVar6 + (longlong)local_res8);
          *(code **)(lVar6 + (longlong)local_res8) = FUN_00018a70;
          lVar6 = lVar6 + 8;
        } while (lVar6 < 0x148);
        uVar8 = *(undefined8 *)(*(longlong *)(local_res8 + 0xc) + 8);
        *(code **)(*(longlong *)(local_res8 + 0xc) + 8) = FUN_0001864c;
        for (lVar6 = *(longlong *)(DAT_000203d0 + 8); DAT_000203e8 = uVar8, lVar6 != 0;
            lVar6 = *(longlong *)(lVar6 + 0x10)) {
          lVar1 = *(longlong *)(lVar6 + 0x40);
          puVar5 = &DAT_00020400;
          puVar10 = (undefined8 *)(lVar1 + 8);
          do {
            uVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar10 = uVar2;
            puVar10 = puVar10 + 1;
          } while ((longlong)puVar5 < 0x204d8);
          *(undefined8 *)(lVar1 + 0xe8) = uVar8;
          FUN_00011008("save low majorFun\n",uVar8,puVar10,lVar1);
          uVar8 = DAT_000203e8;
        }
        uVar8 = 0;
        lVar6 = DAT_000203d0;
      }
    }
  }
  DAT_000203d0 = lVar6;
  return uVar8;
}




longlong FUN_00018dc0(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res10 [3];
  undefined2 local_18;
  undefined8 local_16;
  undefined4 local_e;
  undefined2 local_a;
  
  local_res10[0] = 0;
  lVar5 = 0;
  local_18 = 0;
  local_16 = 0;
  local_e = 0;
  local_a = 0;
  if (param_2 == (wchar_t *)0x0) {
    param_2 = L"\\Driver\\VolSnap";
  }
  RtlInitUnicodeString(&local_18,param_2);
  uVar7 = 0;
  iVar3 = ObReferenceObjectByName
                    (&local_18,0x40,0,0,**(undefined8 **)IoDriverObjectType_exref,0,0,local_res10);
  if ((-1 < iVar3) && (local_res10[0] != 0)) {
    lVar4 = *(longlong *)(local_res10[0] + 8);
    while ((lVar4 != 0 && (lVar2 = lVar4, lVar5 == 0))) {
      do {
        lVar6 = lVar5;
        if (lVar2 == 0) break;
        plVar1 = (longlong *)(lVar2 + 0x18);
        lVar6 = lVar2;
        lVar2 = *plVar1;
      } while (*plVar1 != param_1);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = lVar6;
    }
  }
  FUN_00011008("Get Low obj=0x%x FOR UPOBJ=0X%X",lVar5,param_1,uVar7);
  return lVar5;
}




undefined8 FUN_00018ea0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined2 local_18;
  undefined8 local_16;
  undefined4 local_e;
  undefined2 local_a;
  
  local_res10[0] = 0;
  local_18 = 0;
  local_16 = 0;
  local_e = 0;
  local_a = 0;
  RtlInitUnicodeString(&local_18,param_1);
  uVar2 = 0;
  iVar1 = ObReferenceObjectByName
                    (&local_18,0x40,0,0,**(undefined8 **)IoDriverObjectType_exref,0,0,local_res10);
  if (-1 < iVar1) {
    FUN_00011008("Get %ws Driver=0x%x",param_1,local_res10[0],uVar2);
  }
  return local_res10[0];
}




undefined8 FUN_00018f38(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x48) == 7)) {
    puVar2 = (uint *)FUN_00018dc0(param_1,(wchar_t *)0x0);
    if (puVar2 != (uint *)0x0) {
      puVar3 = FUN_00011620(DAT_000203d0,puVar2,param_3,param_4);
      if (puVar3 != (undefined8 *)0x0) {
        bVar6 = DAT_000206a8 == 0;
        lVar1 = puVar3[8];
        *(uint **)(lVar1 + 0x118) = puVar2;
        *(longlong *)(lVar1 + 0x120) = param_1;
        *(undefined1 *)((longlong)puVar3 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
        puVar3[3] = *(undefined8 *)(param_1 + 0x18);
        if (bVar6) {
          DAT_000206a8 = *(longlong *)(puVar2 + 2);
        }
        FUN_00011008("DrvHkAttachToSelfOb t0 0x%x",param_1,param_3,param_4);
        uVar4 = FUN_000183c8(param_1,(longlong)puVar3);
        uVar5 = 1;
        goto LAB_00018fdf;
      }
    }
  }
  uVar4 = FUN_000183c8(param_1,0);
LAB_00018fdf:
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar5);
}




void FUN_00019000(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_1 != 0) {
    DAT_000203e8 = *(undefined8 *)(param_1 + 0xe8);
    puVar1 = &DAT_00020400;
    do {
      *puVar1 = *(undefined8 *)(param_2 + -0x20400 + (longlong)puVar1);
      puVar1 = puVar1 + 1;
    } while ((longlong)puVar1 < 0x204d8);
    FUN_00011008("set fun=0x%x\n",*(undefined8 *)(param_1 + 0xe0),puVar1,param_4);
    (**(code **)(param_1 + 0xe0))(1,FUN_00018a70);
    (**(code **)(param_1 + 0xe0))(2,FUN_0001864c);
    (**(code **)(param_1 + 0xe0))(3,FUN_000187c0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00019098(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  
  piVar7 = (int *)0x0;
  puVar12 = &DAT_000205c0;
  DAT_0002023c = 0;
  _DAT_00020248 = 0;
  DAT_000203d0 = 0;
  DAT_000203d8 = 0;
  DAT_000203e8 = 0;
  DAT_000203f0 = 0;
  DAT_000203f8 = 0;
  _DAT_000201f0 = 0;
  _DAT_000201f8 = 0;
  DAT_000201fc = 0;
  DAT_000206b0 = 0;
  DAT_000206b8 = 0;
  DAT_000206a8 = 0;
  FUN_0001c770(&DAT_000205c0,0,0xe0);
  FUN_0001c770(&DAT_000204e0,0,0xe0);
  puVar11 = (uint *)0xe0;
  FUN_0001c770(&DAT_00020400,0,0xe0);
  DAT_000206a0 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x70);
  piVar4 = piVar7;
  do {
    piVar4[0x8100] = 0;
    piVar4[0x8101] = 0;
    piVar4[0x8170] = 0;
    piVar4[0x8171] = 0;
    *(undefined8 *)(piVar4 + 0x8138) = *puVar5;
    piVar4 = piVar4 + 2;
    *puVar5 = FUN_00018570;
    puVar5 = puVar5 + 1;
  } while ((longlong)piVar4 < 0xd8);
  DAT_000203e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8);
  *(code **)(*(longlong *)(param_1 + 0x30) + 8) = FUN_000185c8;
  lVar2 = FUN_00018ea0(param_2);
  piVar4 = (int *)0xc000000e;
  DAT_000203d0 = param_1;
  if (lVar2 != 0) {
    puVar9 = *(uint **)(lVar2 + 8);
    FUN_00011008("driver DO = 0x%x",puVar9,puVar11,param_4);
    bVar1 = false;
    if (puVar9 != (uint *)0x0) {
      if (puVar9[0x12] != 7) {
        if (*(longlong *)(puVar9 + 4) == 0) {
          return (int *)0xc000000e;
        }
        if (puVar9[0x12] != 7) {
          puVar9 = *(uint **)(puVar9 + 4);
        }
      }
      puVar10 = puVar9;
      piVar4 = piVar7;
      if (puVar9 == (uint *)0x0) {
LAB_00019367:
        FUN_00011008("hook %d\n",0x4f4,puVar11,param_4);
        lVar3 = FUN_00018ea0(L"\\Driver\\VolSnap");
        if (lVar3 != 0) {
          puVar9 = *(uint **)(lVar3 + 8);
        }
        FUN_00011008("hook %d\n",0x4fb,puVar11,param_4);
        if (puVar9 != (uint *)0x0) {
          bVar1 = true;
          do {
            FUN_00018b50(puVar9,puVar9,puVar11,param_4);
            puVar11 = puVar9;
            FUN_00011008("Get3 %ws=0x%x",param_2,puVar9,param_4);
            puVar9 = *(uint **)(puVar9 + 4);
          } while (puVar9 != (uint *)0x0);
        }
        FUN_00011008("hook %d\n",0x506,puVar11,param_4);
        lVar2 = *(longlong *)(lVar2 + 8);
        while ((piVar8 = (int *)0x0, lVar2 != 0 &&
               ((piVar8 = *(int **)(lVar2 + 0x40), *piVar8 != -0x2d371b3b ||
                (*(longlong *)(piVar8 + 2) == 0))))) {
          lVar2 = *(longlong *)(lVar2 + 0x10);
        }
        DAT_0002023c = 2;
        if ((bVar1) && (piVar8 != (int *)0x0)) {
          FUN_00011008("hook %d\n",0x50c,puVar11,param_4);
          FUN_000116e8(param_1);
          FUN_00011008("hook %d\n",0x50f,puVar11,param_4);
          piVar7 = piVar8 + 2;
LAB_0001943f:
          FUN_00019000((longlong)piVar8,(longlong)piVar7,puVar11,param_4);
        }
      }
      else {
LAB_00019210:
        uVar6 = 0;
        lVar3 = FUN_00018dc0((longlong)puVar10,(wchar_t *)0x0);
        if (lVar3 == 0) goto code_r0x0001921f;
        lVar3 = *(longlong *)(lVar3 + 8);
        if (**(int **)(puVar9 + 0x10) == -0x2d371b3b) {
          FUN_00011008("hook the hk version drv\n",uVar6,puVar11,param_4);
          do {
            FUN_00018f38((longlong)puVar9,uVar6,puVar11,param_4);
            puVar9 = *(uint **)(puVar9 + 4);
          } while (puVar9 != (uint *)0x0);
          puVar5 = (undefined8 *)(lVar2 + 0x70);
          do {
            uVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar12 = uVar6;
            puVar12 = puVar12 + 1;
          } while ((longlong)puVar12 < 0x20698);
          lVar2 = *(longlong *)(lVar2 + 8);
          while ((piVar8 = piVar7, lVar2 != 0 &&
                 ((piVar8 = *(int **)(lVar2 + 0x40), *piVar8 != -0x2d371b3b ||
                  (*(longlong *)(piVar8 + 0x38) == 0))))) {
            lVar2 = *(longlong *)(lVar2 + 0x10);
          }
          DAT_0002023c = 3;
          FUN_00011008("hook the hk version drv dev = 0x%x\n",piVar8,puVar11,param_4);
          if (piVar8 == (int *)0x0) {
            return (int *)0;
          }
          FUN_000116e8(param_1);
          piVar7 = (int *)(lVar3 + 0x70);
          goto LAB_0001943f;
        }
        do {
          FUN_00018f38((longlong)puVar9,uVar6,puVar11,param_4);
          puVar9 = *(uint **)(puVar9 + 4);
        } while (puVar9 != (uint *)0x0);
        FUN_000116e8(param_1);
        DAT_0002023c = 3;
        puVar5 = (undefined8 *)(lVar2 + 0x70);
        do {
          *(undefined8 *)(piVar7 + 0x8100) = *(undefined8 *)((longlong)puVar5 + (lVar3 - lVar2));
          *(undefined8 *)(piVar7 + 0x8170) = *puVar5;
          piVar7 = piVar7 + 2;
          *puVar5 = FUN_00018a70;
          puVar5 = puVar5 + 1;
        } while ((longlong)piVar7 < 0xd8);
        DAT_000203e8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 8);
        _DAT_00020248 = 1;
        DAT_000203d8 = lVar2;
        *(code **)(*(longlong *)(lVar2 + 0x30) + 8) = FUN_00018818;
      }
    }
  }
  return piVar4;
code_r0x0001921f:
  puVar10 = *(uint **)(puVar10 + 4);
  if (puVar10 == (uint *)0x0) goto LAB_00019367;
  goto LAB_00019210;
}




undefined8 *
FUN_00019470(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0xd) = 1;
  plVar1 = param_1 + 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_0001f2f0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[8] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_0001f2d0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *plVar1 = 0;
  FUN_0001c770(param_1 + 4,0,0x20);
  iVar4 = IoCreateDevice(param_3,0x130,0,7,0x100,0,plVar1);
  if (-1 < iVar4) {
    *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) | 0x10;
    lVar2 = *(longlong *)(*plVar1 + 0x40);
    *(undefined8 **)(lVar2 + 0xf0) = param_1;
    param_1[0x14] = param_4;
    *(undefined4 *)(lVar2 + 0x110) = 0;
    KeInitializeEvent(lVar2 + 0xf8,0,1);
    *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) | 0x2000;
    *(uint *)(*plVar1 + 0x30) = *(uint *)(*plVar1 + 0x30) & 0xffffff7f;
    FUN_0001806c(param_1[8],param_1 + 9);
    if ((*plVar1 != 0) && (puVar3 = *(undefined4 **)(*plVar1 + 0x40), puVar3 != (undefined4 *)0x0))
    {
      *puVar3 = 0xd2c8e4c5;
      *(code **)(puVar3 + 0x38) = FUN_00018510;
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar4;
  }
  return param_1;
}




undefined8 FUN_000195d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  
  FUN_00011008("StartHookDevice %d",0x7c,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x118);
    }
    *(uint *)(lVar1 + 0x34) =
         *(uint *)(lVar1 + 0x34) | *(uint *)(*(longlong *)(param_1 + 0x10) + 0x34) & 7;
  }
  FUN_0001416c(param_1);
  LOCK();
  UNLOCK();
  iVar2 = DAT_00020140 + 1;
  DAT_00020140 = DAT_00020140 + 1;
  *(int *)(param_1 + 0x18) = iVar2;
  FUN_00011008("StartHookDevice %d",0x8e,param_3,param_4);
  return 0;
}




void FUN_0001965c(uint param_1,longlong param_2,void *param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 in_register_0000000c;
  uint uVar5;
  undefined1 local_48;
  undefined8 local_47;
  undefined8 local_3f;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  
  uVar5 = param_1 & 3;
  lVar3 = IoAllocateIrp(CONCAT71((int7)(CONCAT44(in_register_0000000c,param_1) >> 8),
                                 *(undefined1 *)(param_2 + 0x4c)),0);
  if (lVar3 == 0) {
    param_7[1] = 0;
    *(undefined4 *)param_7 = 0xc000009a;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xb8);
    *(undefined1 *)(lVar4 + -0x48) = 0xe;
    *(uint *)(lVar4 + -0x40) = param_5;
    *(undefined4 *)(lVar4 + -0x38) = 0;
    *(uint *)(lVar4 + -0x30) = param_1;
    if (uVar5 == 0) {
      lVar4 = ExAllocatePoolWithTag(4,(ulonglong)param_5,0x45754d6e);
      *(longlong *)(lVar3 + 0x18) = lVar4;
      if (lVar4 == 0) {
        IoFreeIrp(lVar3);
        param_7[1] = 0;
        *(undefined4 *)param_7 = 0xc000009a;
        return;
      }
      *(void **)(lVar3 + 0x70) = param_3;
    }
    else if (uVar5 != 0) {
      if (uVar5 < 3) {
        lVar4 = IoAllocateMdl(param_3,param_5,0,0,0);
        *(longlong *)(lVar3 + 8) = lVar4;
        if (lVar4 == 0) {
          IoFreeIrp(lVar3);
          param_7[1] = 0;
          *(undefined4 *)param_7 = 0xc000009a;
          return;
        }
        MmProbeAndLockPages(lVar4,0,uVar5 != 1);
      }
      else if (uVar5 == 3) {
        IoFreeIrp(lVar3);
        param_7[1] = 0;
        *(undefined4 *)param_7 = 0xc00000bb;
        return;
      }
    }
    *(void **)(lVar3 + 0x98) = SystemReserved1[0xf];
    local_48 = 0;
    local_47 = 0;
    local_3f = 0;
    local_37 = 0;
    local_33 = 0;
    local_31 = 0;
    KeInitializeEvent(&local_48,1,0);
    lVar4 = *(longlong *)(lVar3 + 0xb8);
    *(code **)(lVar4 + -0x10) = FUN_00013fc0;
    *(undefined1 **)(lVar4 + -8) = &local_48;
    *(undefined1 *)(lVar4 + -0x45) = 0xe0;
    iVar2 = IofCallDriver(param_2,lVar3);
    if (iVar2 == 0x103) {
      KeWaitForSingleObject(&local_48,0,0,0,0);
    }
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    *param_7 = *(undefined8 *)(lVar3 + 0x30);
    param_7[1] = uVar1;
    if (uVar5 == 0) {
      memcpy(param_3,*(void **)(lVar3 + 0x18),(ulonglong)param_5);
      ExFreePoolWithTag(*(undefined8 *)(lVar3 + 0x18),0);
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    else if ((uVar5 != 0) && (uVar5 < 3)) {
      MmUnlockPages(*(undefined8 *)(lVar3 + 8));
      IoFreeMdl(*(undefined8 *)(lVar3 + 8));
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    IoFreeIrp(lVar3);
  }
  return;
}




void FUN_000198ec(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  pbVar6 = param_3 + 0x1c;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_3 + 3);
  *(ushort *)(param_2 + 0xc) = (ushort)(byte)param_3[0xc] * 0x100 + (ushort)(byte)param_3[0xb];
  param_2[0xe] = param_3[0xd];
  *(ushort *)(param_2 + 0x10) = (ushort)(byte)param_3[0xf] * 0x100 + (ushort)(byte)param_3[0xe];
  param_2[0x12] = param_3[0x10];
  *(ushort *)(param_2 + 0x14) = (ushort)(byte)param_3[0x12] * 0x100 + (ushort)(byte)param_3[0x11];
  *(ushort *)(param_2 + 0x16) = (ushort)(byte)param_3[0x14] * 0x100 + (ushort)(byte)param_3[0x13];
  param_2[0x18] = param_3[0x15];
  *(ushort *)(param_2 + 0x1a) = (ushort)(byte)param_3[0x17] * 0x100 + (ushort)(byte)param_3[0x16];
  *(ushort *)(param_2 + 0x1c) = (ushort)(byte)param_3[0x19] * 0x100 + (ushort)(byte)param_3[0x18];
  iVar5 = 0;
  *(ushort *)(param_2 + 0x1e) = (ushort)(byte)param_3[0x1b] * 0x100 + (ushort)(byte)param_3[0x1a];
  iVar7 = 0;
  iVar4 = 0;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + ((uint)bVar1 << (bVar3 & 0x1f));
  } while (iVar4 < 0x20);
  *(int *)(param_2 + 0x20) = iVar7;
  iVar7 = 0;
  iVar4 = 0;
  pbVar6 = param_3 + 0x20;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + ((uint)bVar1 << (bVar3 & 0x1f));
  } while (iVar4 < 0x20);
  *(int *)(param_2 + 0x24) = iVar7;
  iVar4 = 0;
  if (*(short *)(param_2 + 0x1a) != 0) {
    pbVar6 = param_3 + 0x27;
    param_2[0x28] = param_3[0x24];
    param_2[0x29] = param_3[0x25];
    param_2[0x2a] = param_3[0x26];
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar3 = (byte)iVar4;
      iVar4 = iVar4 + 8;
      iVar5 = iVar5 + ((uint)bVar1 << (bVar3 & 0x1f));
    } while (iVar4 < 0x20);
    *(int *)(param_2 + 0x2c) = iVar5;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x2b);
    *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(param_3 + 0x33);
    param_2[0x3a] = param_3[0x35];
    uVar2 = *(undefined8 *)(param_3 + 0x36);
    *(undefined4 *)(param_2 + 0x60) = 2;
    *(undefined8 *)(param_2 + 0x3b) = uVar2;
    return;
  }
  iVar7 = 0;
  pbVar6 = param_3 + 0x24;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + ((uint)bVar1 << (bVar3 & 0x1f));
  } while (iVar4 < 0x20);
  *(int *)(param_2 + 0x28) = iVar7;
  iVar7 = 0;
  pbVar6 = param_3 + 0x2c;
  *(ushort *)(param_2 + 0x2c) = (ushort)(byte)param_3[0x29] * 0x100 + (ushort)(byte)param_3[0x28];
  *(ushort *)(param_2 + 0x2e) = (ushort)(byte)param_3[0x2b] * 0x100 + (ushort)(byte)param_3[0x2a];
  iVar4 = 0;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + ((uint)bVar1 << (bVar3 & 0x1f));
  } while (iVar4 < 0x20);
  *(int *)(param_2 + 0x30) = iVar7;
  pbVar6 = param_3 + 0x43;
  *(ushort *)(param_2 + 0x34) = (ushort)(byte)param_3[0x31] * 0x100 + (ushort)(byte)param_3[0x30];
  *(ushort *)(param_2 + 0x36) = (ushort)(byte)param_3[0x33] * 0x100 + (ushort)(byte)param_3[0x32];
  iVar4 = 0;
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x34);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x3c);
  param_2[0x44] = param_3[0x40];
  param_2[0x45] = param_3[0x41];
  param_2[0x46] = param_3[0x42];
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar3 = (byte)iVar4;
    iVar4 = iVar4 + 8;
    iVar5 = iVar5 + ((uint)bVar1 << (bVar3 & 0x1f));
  } while (iVar4 < 0x20);
  *(int *)(param_2 + 0x48) = iVar5;
  *(undefined8 *)(param_2 + 0x4c) = *(undefined8 *)(param_3 + 0x47);
  *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x4f);
  param_2[0x56] = param_3[0x51];
  uVar2 = *(undefined8 *)(param_3 + 0x52);
  *(int *)(param_2 + 0x60) = iVar7;
  *(undefined8 *)(param_2 + 0x57) = uVar2;
  return;
}




undefined8 * FUN_00019b64(undefined8 *param_1,ulonglong param_2)

{
  FUN_00019ba4(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (undefined8 *)0x0)) {
    ExFreePoolWithTag(param_1,0);
  }
  return param_1;
}




void FUN_00019ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0001f2d8;
  if (param_1[8] != 0) {
    (*(code *)param_1[2])();
  }
  return;
}




void FUN_00019bcc(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  (**(code **)(param_1 + 0x18))
            (param_4,param_3 * (uint)*(ushort *)(param_1 + 0x58),
             param_2 * (ulonglong)*(ushort *)(param_1 + 0x58),0,local_res18,
             *(undefined8 *)(param_1 + 0x24));
  return;
}




int FUN_00019c1c(undefined8 param_1,char *param_2,uint param_3,longlong param_4)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = 1;
LAB_00019c41:
  if (iVar8 != 0) {
    return iVar8;
  }
  if (((*param_2 != -0x1b) && (*param_2 != '\0')) && (param_2[0xb] != '\x0f')) {
    uVar5 = 0;
    lVar3 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      if (*(char *)(lVar3 + param_4) == '\0') {
LAB_00019cce:
        if (uVar5 < 0xb) {
          pcVar2 = param_2 + lVar3;
          goto LAB_00019cd8;
        }
        break;
      }
      bVar1 = param_2[lVar3];
      if ((char)bVar1 < '\0') {
        iVar7 = iVar4;
        if (*(short *)(param_2 + lVar3) != *(short *)(lVar3 + param_4)) goto LAB_00019cce;
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 1;
        iVar7 = iVar6;
      }
      else if (*(char *)(lVar3 + param_4) != '?') {
        if (((0x60 < bVar1) && (bVar1 < 0x7b)) &&
           (((uVar5 & 1) == 0 && ((param_2[lVar3 + 1] & 0x80U) == 0)))) {
          bVar1 = bVar1 - 0x20;
        }
        iVar7 = iVar4;
        if ((bVar1 <= *(byte *)(lVar3 + param_4)) &&
           (iVar7 = iVar6, bVar1 < *(byte *)(lVar3 + param_4))) {
          iVar7 = -1;
        }
      }
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 1;
      iVar6 = iVar7;
    } while (uVar5 < 0xb);
    goto LAB_00019cf0;
  }
  goto LAB_00019d05;
  while( true ) {
    if (*pcVar2 != ' ') {
      iVar7 = iVar4;
    }
    uVar5 = uVar5 + 1;
    pcVar2 = pcVar2 + 1;
    if (10 < uVar5) break;
LAB_00019cd8:
    if (iVar7 != 0) goto LAB_00019d05;
  }
LAB_00019cf0:
  if (iVar7 == 0) {
    iVar8 = CONCAT22(*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x1a));
  }
LAB_00019d05:
  if (param_3 < 0x20) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 - 0x20;
  }
  param_2 = param_2 + 0x20;
  if (param_3 == 0) {
    return iVar8;
  }
  goto LAB_00019c41;
}




int FUN_00019d3c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 0x66) == 0) {
    uVar6 = *(uint *)(param_1 + 0x74);
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x66);
  }
  uVar1 = *(ushort *)(param_1 + 0x58);
  uVar6 = *(byte *)(param_1 + 0x5e) * uVar6 + (uint)*(ushort *)(param_1 + 0x5c);
  iVar2 = (uint)*(ushort *)(param_1 + 0x60) * 0x20 + -1 + (uint)uVar1;
  iVar5 = iVar2 / (int)(uint)uVar1;
  if (uVar6 != 0) {
    pcVar4 = (char *)(**(code **)(param_1 + 8))
                               ((uint)*(ushort *)(param_1 + 0x58) * iVar5,
                                (longlong)iVar2 % (longlong)(int)(uint)uVar1 & 0xffffffff);
    if (pcVar4 != (char *)0x0) {
      iVar2 = FUN_00019bcc(param_1,(ulonglong)uVar6,iVar5,pcVar4);
      if (iVar2 == 0) {
        iVar3 = FUN_00019c1c(param_1,pcVar4,(uint)*(ushort *)(param_1 + 0x58) * iVar5,param_2);
      }
      (**(code **)(param_1 + 0x10))(pcVar4);
    }
  }
  return iVar3;
}




uint FUN_00019e00(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar5 = 0xffffffff;
  uVar6 = 0xffffffff;
  if ((((uVar1 != 0xffffffff) && (lVar2 = *(longlong *)(param_1 + 0x40), uVar6 = uVar5, lVar2 != 0))
      && (uVar1 <= param_2)) && (param_2 < uVar1 + *(int *)(param_1 + 0x34))) {
    iVar3 = 4;
    if (*(short *)(param_1 + 0x66) != 0) {
      iVar3 = 2;
    }
    uVar4 = (ulonglong)((param_2 - uVar1) * iVar3);
    if (iVar3 == 2) {
      uVar6 = (uint)*(ushort *)(uVar4 + lVar2);
    }
    else {
      uVar6 = *(uint *)(uVar4 + lVar2);
    }
  }
  return uVar6;
}




uint FUN_00019e5c(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_00019e00(param_1,param_2);
  if (uVar4 == 0xffffffff) {
    uVar1 = *(ushort *)(param_1 + 0x5c);
    uVar2 = 4;
    if (*(short *)(param_1 + 0x66) != 0) {
      uVar2 = 2;
    }
    uVar3 = 4;
    if (*(short *)(param_1 + 0x66) != 0) {
      uVar3 = 2;
    }
    *(uint *)(param_1 + 0x30) =
         ((int)(((ulonglong)(uVar3 * param_2) / (ulonglong)*(ushort *)(param_1 + 0x58)) /
               (ulonglong)*(byte *)(param_1 + 0x5a)) * (uint)*(byte *)(param_1 + 0x5a) *
         (uint)*(ushort *)(param_1 + 0x58)) / uVar3;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar6 = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x40) = uVar6;
    }
    iVar5 = FUN_00019bcc(param_1,(ulonglong)(*(int *)(param_1 + 0x30) * uVar2) /
                                 (ulonglong)*(ushort *)(param_1 + 0x58) + (ulonglong)uVar1,
                         (uint)*(byte *)(param_1 + 0x5a),*(undefined8 *)(param_1 + 0x40));
    if (iVar5 == 0) {
      uVar4 = FUN_00019e00(param_1,param_2);
    }
  }
  return uVar4;
}




int FUN_00019f48(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar6 = (uint)*(ushort *)(param_1 + 0x58) * (uint)*(byte *)(param_1 + 0x5a);
  pcVar2 = (char *)(**(code **)(param_1 + 8))(uVar6);
  uVar3 = 0;
  uVar5 = 0xfffffff;
  if (*(short *)(param_1 + 0x66) != 0) {
    uVar5 = 0xffff;
  }
  uVar4 = 2;
  if (pcVar2 != (char *)0x0) {
    while( true ) {
      FUN_00019bcc(param_1,((ulonglong)uVar4 - (ulonglong)*(uint *)(param_1 + 0xac)) *
                           (ulonglong)*(byte *)(param_1 + 0x5a) +
                           (ulonglong)*(uint *)(param_1 + 0x48),(uint)*(byte *)(param_1 + 0x5a),
                   pcVar2);
      iVar1 = FUN_00019c1c(param_1,pcVar2,uVar6,param_2);
      if ((iVar1 != 0) || (uVar3 = uVar3 + 1, 0x63fff < uVar3)) break;
      uVar4 = FUN_00019e5c(param_1,uVar4);
      if (((uVar4 & 0xfffffff) == uVar5) || (uVar4 < *(uint *)(param_1 + 0xac))) break;
    }
    (**(code **)(param_1 + 0x10))(pcVar2);
  }
  return iVar1;
}




longlong FUN_0001a040(longlong param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = 0;
  uVar4 = 0;
  iVar3 = 0;
  lVar5 = param_4;
  uVar1 = param_2;
  uVar6 = 0xfffffff;
  if (*(short *)(param_1 + 0x66) != 0) {
    uVar6 = 0xffff;
  }
  do {
    iVar3 = iVar3 + 1;
    uVar1 = FUN_00019e5c(param_1,uVar1);
    if (uVar1 != iVar3 + param_2) {
      FUN_00014d2c((ulonglong)(param_2 - *(int *)(param_1 + 0xac)) *
                   (ulonglong)*(byte *)(param_1 + 0x5a) + (ulonglong)*(uint *)(param_1 + 0x48),
                   (uint)*(byte *)(param_1 + 0x5a) * iVar3,param_4,lVar5);
      iVar3 = 0;
      param_2 = uVar1;
    }
    uVar4 = uVar4 + 1;
  } while (((uVar4 < 0x8000000) && (lVar2 = lVar2 + 1, (uVar1 & 0xfffffff) != uVar6)) &&
          (param_2 != 0));
  return lVar2;
}




void FUN_0001a10c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_00020100 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  uVar6 = 0xffffffff;
  pcVar1 = "PAGEFILE.SYS";
  uVar4 = uVar2;
  do {
    iVar5 = (int)uVar6;
    if (*pcVar1 == '\0') break;
    if (*pcVar1 == '.') {
      uVar6 = uVar4;
    }
    iVar5 = (int)uVar6;
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pcVar1 = pcVar1 + 1;
  } while (uVar3 < 0x80000000);
  builtin_strncpy(local_28,"           ",0xb);
  uVar4 = uVar2;
  do {
    if ((10 < (longlong)uVar4) || ("PAGEFILE.SYS"[uVar2] == '\0')) break;
    if (uVar2 == (longlong)iVar5) {
      uVar4 = 8;
    }
    else {
      local_28[uVar4] = "PAGEFILE.SYS"[uVar2];
      uVar4 = uVar4 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x8000000000000000);
  if ((int)((uint)*(ushort *)(param_1 + 0x60) * 0x20 + -1 + (uint)*(ushort *)(param_1 + 0x58)) /
      (int)(uint)*(ushort *)(param_1 + 0x58) == 0) {
    uVar3 = FUN_00019f48(param_1,(longlong)local_28);
  }
  else {
    uVar3 = FUN_00019d3c(param_1,(longlong)local_28);
  }
  if (uVar3 != 0) {
    FUN_0001a040(param_1,uVar3,FUN_00014d2c,param_4);
  }
  FUN_0001c500(local_18 ^ (ulonglong)auStack_48);
  return;
}




undefined8 * FUN_0001a228(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_0001f2e0;
  if ((param_2 & 1) != 0) {
    ExFreePoolWithTag(param_1,0);
  }
  return param_1;
}




undefined8 * FUN_0001a258(undefined8 *param_1,ulonglong param_2)

{
  FUN_0001a298(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (undefined8 *)0x0)) {
    ExFreePoolWithTag(param_1,0);
  }
  return param_1;
}




void FUN_0001a298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0001f2e8;
  if (param_1[0xe] != 0) {
    (*(code *)param_1[2])();
  }
  param_1[0xe] = 0;
  if (param_1[0x25] != 0) {
    (*(code *)param_1[2])();
  }
  param_1[0x25] = 0;
  param_1[0xf] = &PTR_FUN_0001f2e0;
  return;
}




char * FUN_0001a2ec(longlong param_1,int *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  ushort uVar9;
  char *pcVar10;
  char *pcVar3;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  pcVar10 = (char *)0x0;
  uVar9 = 0;
  pcVar5 = (char *)0xffffffff;
  if (param_2 != (int *)0x0) {
    if ((*param_2 == 0x454c4946) || (pcVar8 = pcVar10, *param_2 == 0x58444e49)) {
      uVar9 = *(ushort *)((longlong)param_2 + 6);
      pcVar8 = (char *)((ulonglong)*(byte *)(param_2 + 1) + (longlong)param_2);
    }
    uVar2 = 0;
    if (param_3 == 0) {
      if (*param_2 == 0x454c4946) {
        uVar7 = 0x200;
      }
      param_3 = *(uint *)(param_1 + 0x58) / uVar7;
    }
    pcVar5 = (char *)0xffffffff;
    if ((pcVar8 != (char *)0x0) && ((uint)uVar9 == param_3 + 1)) {
      lVar4 = (longlong)(int)uVar7;
      if (0 < (longlong)(int)param_3) {
        pcVar5 = pcVar8 + 3;
        pcVar3 = pcVar10;
        pcVar6 = pcVar10;
        do {
          uVar2 = (uint)pcVar3;
          if ((*(char *)(lVar4 + -2 + (longlong)param_2) != *pcVar8) ||
             (*(char *)(lVar4 + -1 + (longlong)param_2) != pcVar8[1])) break;
          pcVar6 = pcVar6 + 1;
          uVar2 = uVar2 + 1;
          pcVar3 = (char *)(ulonglong)uVar2;
          *(char *)(lVar4 + -2 + (longlong)param_2) = pcVar5[-1];
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 2;
          *(char *)(lVar4 + -1 + (longlong)param_2) = cVar1;
          param_2 = (int *)((longlong)param_2 + (ulonglong)uVar7);
        } while ((longlong)pcVar6 < (longlong)(int)param_3);
      }
      pcVar5 = (char *)0xffffffff;
      if (uVar2 == param_3) {
        pcVar5 = pcVar10;
      }
    }
  }
  return pcVar5;
}




int * FUN_0001a3e0(undefined8 param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar2 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    uVar4 = param_2[6] - (uint)*(ushort *)(param_2 + 5);
    uVar1 = (ulonglong)*(ushort *)(param_2 + 5);
    while ((((param_2 = (int *)((longlong)param_2 + uVar1), piVar3 = piVar2, uVar4 != 0 &&
             (piVar3 = param_2, *param_2 != param_3)) && (piVar3 = piVar2, param_2[1] != 0)) &&
           ((uint)param_2[1] <= uVar4))) {
      uVar4 = uVar4 - param_2[1];
      uVar1 = (ulonglong)(uint)param_2[1];
    }
    return piVar3;
  }
  return (int *)0x0;
}




undefined8
FUN_0001a42c(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,longlong *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar4 = 0;
  iVar6 = 0x10;
  uVar5 = *(longlong *)(param_1 + 0x48) * *(longlong *)(param_1 + 0x38);
  while( true ) {
    if (param_3 == (int *)0x0) {
      return 1;
    }
    iVar1 = FUN_0001b948(param_1,uVar5,*(uint *)(param_1 + 0x58),param_3);
    if (iVar1 != 0) break;
    if (*param_3 != 0x454c4946) {
      return 1;
    }
    FUN_0001a2ec(param_1,param_3,*(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30));
    piVar2 = FUN_0001a3e0(param_1,param_3,0x30);
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)(byte)(*(char *)((longlong)piVar2 + (longlong)(short)piVar2[5] + 0x40) * '\x02')
      ;
      if (uVar3 < 2) {
        uVar3 = 2;
      }
      iVar1 = memcmp((void *)((longlong)piVar2 + (longlong)(short)piVar2[5] + 0x42),&LAB_0001eb80,
                     (ulonglong)uVar3);
      if (iVar1 == 0) {
        if (param_5 == (longlong *)0x0) {
          return 0;
        }
        *param_5 = lVar4;
        return 0;
      }
    }
    iVar6 = iVar6 + -1;
    lVar4 = lVar4 + 1;
    uVar5 = uVar5 + *(uint *)(param_1 + 0x58);
    if (iVar6 < 1) {
      return 1;
    }
  }
  return 1;
}




int FUN_0001a544(undefined8 param_1,byte *param_2,undefined8 param_3,longlong *param_4,
                undefined4 *param_5,uint *param_6)

{
  byte bVar1;
  undefined4 *_Dst;
  byte bVar2;
  int iVar3;
  byte bVar4;
  
  _Dst = param_5;
  *param_5 = 0;
  iVar3 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    bVar2 = bVar1 & 0xf;
    iVar3 = 0;
    if (bVar2 != 0) {
      bVar4 = bVar1 >> 4;
      iVar3 = (uint)bVar2 + (uint)bVar4;
      if (*param_6 < iVar3 + 1U) {
        iVar3 = 0;
      }
      else {
        param_5 = (undefined4 *)0x0;
        *param_6 = (*param_6 - iVar3) - 1;
        memcpy(&param_5,param_2 + (ulonglong)bVar2 + 1,(ulonglong)bVar4);
        if (bVar1 >> 4 != 0) {
          memcpy(_Dst,param_2 + 1,(ulonglong)bVar2);
        }
        if (((ulonglong)param_5 & 0x80L << (bVar4 * '\b' - 8 & 0x3f)) == 0) {
          *param_4 = *param_4 + (longlong)param_5;
        }
        else {
          *param_4 = *param_4 - (~(-1L << (bVar4 * '\b' & 0x3f) | (ulonglong)param_5) + 1);
        }
      }
    }
  }
  return iVar3;
}




ulonglong FUN_0001a644(undefined8 param_1,ulonglong *param_2,short *param_3,uint param_4,
                      uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  short *psVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  puVar12 = param_2;
  do {
    if (((param_4 == 0) || (param_2 == (ulonglong *)0x0)) ||
       ((*(byte *)((longlong)puVar12 + 0xc) & 2) != 0)) {
      return 0;
    }
    uVar6 = 0;
    uVar13 = 0;
    sVar3 = *param_3;
    psVar5 = param_3;
    while (sVar3 != 0) {
      psVar5 = psVar5 + 1;
      uVar6 = uVar6 + 1;
      sVar3 = *psVar5;
    }
    bVar8 = (byte)puVar12[10];
    if (bVar8 == uVar6) {
      uVar6 = (uint)bVar8 + (uint)bVar8;
      iVar10 = 0;
      pbVar1 = (byte *)((longlong)puVar12 + 0x52);
      if (param_5 == uVar6) {
        uVar11 = 0;
        lVar9 = 0;
        if (uVar6 != 0) {
          pbVar7 = pbVar1;
          do {
            bVar8 = *pbVar7;
            if (((0x60 < bVar8) && (bVar8 < 0x7b)) &&
               (((uVar11 & 1) == 0 && ((pbVar1[lVar9 + 1] & 0x80) == 0)))) {
              bVar8 = bVar8 - 0x20;
            }
            bVar2 = pbVar7[(longlong)param_3 - (longlong)pbVar1];
            if ((bVar2 != *pbVar7) && (bVar2 != 0x3f)) {
              if (bVar2 < bVar8) {
                iVar10 = 1;
              }
              else if (bVar8 < bVar2) {
                iVar10 = -1;
              }
            }
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (uVar11 < uVar6);
          if (iVar10 != 0) goto LAB_0001a730;
        }
        uVar13 = *puVar12 & 0xffffffffffff;
      }
    }
LAB_0001a730:
    if (uVar13 != 0) {
      return uVar13;
    }
    uVar4 = (ushort)puVar12[1];
    if (uVar4 == 0) {
      return 0;
    }
    if (uVar4 < param_4) {
      param_4 = param_4 - uVar4;
    }
    else {
      param_4 = 0;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar4);
  } while( true );
}




longlong FUN_0001a780(longlong param_1,longlong param_2,short *param_3,undefined8 param_4,
                     uint param_5)

{
  ushort *puVar1;
  ulonglong uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  int local_res8 [2];
  int local_res10;
  short *local_res18;
  uint local_68 [2];
  longlong local_60;
  byte *local_58;
  ulonglong local_50;
  int *local_48;
  longlong local_40;
  
  uVar8 = 0;
  local_res18 = param_3;
  piVar7 = (int *)(**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x58));
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      uVar9 = *(uint *)(param_2 + 0x10);
      piVar12 = (int *)(*(short *)(param_2 + 0x14) + param_2);
      if (uVar9 != 0) {
        while (*piVar12 != 0) {
          uVar2 = *(ulonglong *)(piVar12 + 4);
          iVar5 = FUN_0001b8f0(param_1,uVar2 & 0xffffffffffff,*(uint *)(param_1 + 0x58),piVar7);
          if (iVar5 == 0) {
            FUN_0001a2ec(param_1,piVar7,
                         *(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30));
            uVar8 = FUN_0001aa80(param_1,piVar7,param_3,uVar2 & 0xffffffffffff,param_5);
          }
          if (((short)piVar12[1] == 0) || (uVar9 < *(ushort *)(piVar12 + 1))) break;
          puVar1 = (ushort *)(piVar12 + 1);
          piVar12 = (int *)((longlong)piVar12 + (ulonglong)*puVar1);
          uVar9 = uVar9 - *puVar1;
          if (uVar9 == 0) break;
        }
      }
    }
    else {
      local_60 = 0;
      pbVar10 = (byte *)((ulonglong)*(ushort *)(param_2 + 0x20) + param_2);
      local_68[0] = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        local_68[0] = *(uint *)(param_1 + 0x58);
      }
      local_58 = pbVar10;
      if (pbVar10 != (byte *)0x0) {
        piVar12 = (int *)(**(code **)(param_1 + 8))
                                   ((uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34));
        local_48 = piVar12;
        while( true ) {
          if (piVar12 == (int *)0x0) goto LAB_0001aa51;
          local_res10 = FUN_0001a544(param_1,pbVar10,0,&local_60,local_res8,local_68);
          if (local_res10 == 0) break;
          lVar13 = local_60;
          if (local_res8[0] != 0) {
            do {
              iVar5 = local_res8[0] + -1;
              local_res8[0] = iVar5;
              if (uVar8 != 0) goto LAB_0001aa33;
              iVar6 = FUN_0001b948(param_1,lVar13 * *(longlong *)(param_1 + 0x38),
                                   *(uint *)(param_1 + 0x38),piVar12);
              local_40 = lVar13 + 1;
              if (iVar6 != 0) goto LAB_0001aa33;
              FUN_0001a2ec(param_1,piVar12,*(uint *)(param_1 + 0x34));
              psVar4 = local_res18;
              iVar6 = (uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
              piVar11 = piVar12;
              iVar3 = local_res8[0];
              for (; (local_res8[0] = iVar5, iVar6 != 0 &&
                     (pbVar10 = local_58, piVar12 = local_48, local_res8[0] = iVar3,
                     (char)*piVar11 != '\0'));
                  piVar11 = (int *)((longlong)piVar11 + (ulonglong)*(ushort *)(piVar11 + 1))) {
                if (*piVar11 == 0x90) {
                  local_50 = *(ulonglong *)(piVar11 + 4) & 0xffffffffffff;
                  iVar5 = FUN_0001b8f0(param_1,local_50,*(uint *)(param_1 + 0x58),piVar7);
                  if (iVar5 == 0) {
                    FUN_0001a2ec(param_1,piVar7,
                                 *(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30));
                    uVar8 = FUN_0001aa80(param_1,piVar7,psVar4,local_50,param_5);
                    pbVar10 = local_58;
                    piVar12 = local_48;
                    if (uVar8 != 0) break;
                  }
                }
                pbVar10 = local_58;
                piVar12 = local_48;
                if ((short)piVar11[1] == 0) break;
                iVar6 = iVar6 - (uint)*(ushort *)(piVar11 + 1);
                iVar5 = local_res8[0];
                iVar3 = local_res8[0];
              }
              lVar13 = local_40;
            } while (local_res8[0] != 0);
            local_res8[0] = 0;
          }
          local_res8[0] = local_res8[0] + -1;
LAB_0001aa33:
          pbVar10 = pbVar10 + (local_res10 + 1);
          local_58 = pbVar10;
          if ((local_res10 == 0) || (uVar8 != 0)) break;
        }
        (**(code **)(param_1 + 0x10))(piVar12);
      }
    }
LAB_0001aa51:
    if (piVar7 != (int *)0x0) {
      (**(code **)(param_1 + 0x10))(piVar7);
    }
  }
  return uVar8;
}




ulonglong FUN_0001aa80(longlong param_1,int *param_2,short *param_3,longlong param_4,uint param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint local_res10 [2];
  short *local_res18;
  uint local_58;
  int local_54;
  byte *local_50;
  longlong local_48;
  longlong local_40;
  
  if ((param_2 == (int *)0x0) || (*param_2 != 0x454c4946)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    local_res18 = param_3;
    piVar6 = FUN_0001a3e0(param_1,param_2,0x90);
    if (piVar6 != (int *)0x0) {
      puVar1 = (ulonglong *)((ulonglong)*(ushort *)(piVar6 + 5) + 0x20 + (longlong)piVar6);
      uVar9 = (int)puVar1 - (int)param_2;
      if (*(uint *)(param_1 + 0x58) < uVar9) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x58) - uVar9;
      }
      uVar14 = piVar6[4] - 0x20U;
      if (uVar9 < piVar6[4] - 0x20U) {
        uVar14 = uVar9;
      }
      uVar7 = FUN_0001a644(param_1,puVar1,param_3,uVar14,param_5);
      param_3 = local_res18;
    }
    uVar9 = 0;
    if (*(uint *)(param_1 + 0x120) != 0) {
      plVar8 = (longlong *)(param_1 + 0x80);
      do {
        if (*plVar8 == param_4) {
          return uVar7;
        }
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x120));
    }
    if (*(uint *)(param_1 + 0x120) < 0x14) {
      *(longlong *)(param_1 + 0x80 + (ulonglong)*(uint *)(param_1 + 0x120) * 8) = param_4;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      if ((uVar7 == 0) && (piVar6 = FUN_0001a3e0(param_1,param_2,0x20), piVar6 != (int *)0x0)) {
        uVar7 = FUN_0001a780(param_1,(longlong)piVar6,param_3,param_4,param_5);
      }
      piVar6 = FUN_0001a3e0(param_1,param_2,0xa0);
      if ((piVar6 != (int *)0x0) && (uVar7 == 0)) {
        local_48 = 0;
        local_50 = (byte *)0x0;
        if ((char)piVar6[2] != '\0') {
          local_50 = (byte *)((ulonglong)*(ushort *)(piVar6 + 8) + (longlong)piVar6);
          local_58 = (int)piVar6 - (int)param_2;
          if (local_58 < *(uint *)(param_1 + 0x58)) {
            local_58 = *(uint *)(param_1 + 0x58) - local_58;
          }
          else {
            local_58 = 0;
          }
        }
        pbVar13 = local_50;
        if (local_50 != (byte *)0x0) {
          uVar14 = *(int *)(param_1 + 0x34) * (uint)*(ushort *)(param_1 + 0x30);
          uVar9 = *(uint *)(param_1 + 0x5c);
          if (*(uint *)(param_1 + 0x5c) < uVar14) {
            uVar9 = uVar14;
          }
          piVar6 = (int *)(**(code **)(param_1 + 8))(uVar9);
LAB_0001ac27:
          if (piVar6 == (int *)0x0) goto LAB_0001adfb;
          local_54 = FUN_0001a544(param_1,pbVar13,0,&local_48,local_res10,&local_58);
          uVar10 = local_res10[0];
          pbVar3 = local_50;
          lVar16 = local_48;
          if (local_54 != 0) {
            do {
              while( true ) {
                local_50 = pbVar13;
                local_res10[0] = uVar10;
                if ((uVar10 == 0) || (local_50 = pbVar3, uVar7 != 0)) goto LAB_0001addd;
                uVar11 = *(longlong *)(param_1 + 0x38) * lVar16;
                if (uVar14 <= *(uint *)(param_1 + 0x5c)) break;
                iVar5 = FUN_0001b948(param_1,uVar11,uVar9,piVar6);
                psVar4 = local_res18;
                local_40 = lVar16 + 1;
                if (iVar5 != 0) goto LAB_0001addd;
                uVar11 = 0;
                if (uVar14 != 0) {
                  piVar12 = piVar6 + 6;
                  do {
                    FUN_0001a2ec(param_1,(int *)(uVar11 + (longlong)piVar6),
                                 uVar9 / *(ushort *)(param_1 + 0x30));
                    uVar10 = *piVar12 + 0x18;
                    if (uVar10 < uVar9) {
                      uVar15 = piVar12[1];
                      if (uVar9 - uVar10 < (uint)piVar12[1]) {
                        uVar15 = uVar9 - uVar10;
                      }
                      uVar7 = FUN_0001a644(param_1,(ulonglong *)
                                                   (((ulonglong)uVar10 - 0x18) + (longlong)piVar12),
                                           psVar4,uVar15,param_5);
                      uVar10 = local_res10[0];
                      if (uVar7 != 0) break;
                    }
                    else {
                      uVar7 = 0;
                    }
                    uVar15 = (int)uVar11 + uVar9;
                    uVar11 = (ulonglong)uVar15;
                    piVar12 = (int *)((longlong)piVar12 + (longlong)(int)uVar9);
                    uVar10 = local_res10[0];
                  } while (uVar15 < uVar14);
                }
                uVar10 = uVar10 - 1;
                pbVar13 = local_50;
                pbVar3 = local_50;
                lVar16 = local_40;
              }
              iVar5 = FUN_0001b948(param_1,uVar11,uVar9,piVar6);
              if (iVar5 != 0) goto LAB_0001addd;
              FUN_0001a2ec(param_1,piVar6,uVar9 / *(ushort *)(param_1 + 0x30));
              uVar15 = piVar6[6] + 0x18;
              if (uVar15 < uVar9) {
                uVar2 = piVar6[7];
                if (uVar9 - uVar15 < (uint)piVar6[7]) {
                  uVar2 = uVar9 - uVar15;
                }
                uVar7 = FUN_0001a644(param_1,(ulonglong *)((ulonglong)uVar15 + (longlong)piVar6),
                                     local_res18,uVar2,param_5);
              }
              else {
                uVar7 = 0;
              }
              uVar11 = (ulonglong)*(uint *)(param_1 + 0x5c) / (ulonglong)uVar14;
              uVar15 = (uint)uVar11;
              if (uVar10 < uVar15) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 - uVar15;
              }
              lVar16 = lVar16 + uVar11;
              pbVar13 = local_50;
              pbVar3 = local_50;
            } while( true );
          }
LAB_0001adf5:
          (**(code **)(param_1 + 0x10))(piVar6);
        }
      }
LAB_0001adfb:
      if (*(int *)(param_1 + 0x120) != 0) {
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
      }
    }
  }
  return uVar7;
LAB_0001addd:
  pbVar13 = local_50 + (local_54 + 1);
  local_50 = pbVar13;
  if ((local_54 == 0) || (uVar7 != 0)) goto LAB_0001adf5;
  goto LAB_0001ac27;
}




void FUN_0001ae34(longlong param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  int local_res8 [2];
  int local_res10;
  undefined *local_res18;
  undefined8 local_res20;
  uint local_68 [2];
  longlong local_60;
  byte *local_58;
  int *local_50;
  
  local_res18 = param_3;
  local_res20 = param_4;
  piVar6 = (int *)(**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x58));
  if (param_2 != 0) {
    if (*(char *)(param_2 + 8) == '\0') {
      iVar9 = *(int *)(param_2 + 0x10);
      piVar7 = (int *)(param_2 + (ulonglong)*(ushort *)(param_2 + 0x14));
      while (0 < iVar9) {
        uVar1 = *(ushort *)(piVar7 + 1);
        if ((*piVar7 == 0x80) &&
           (iVar5 = FUN_0001b8f0(param_1,*(ulonglong *)(piVar7 + 4) & 0xffffffffffff,
                                 *(uint *)(param_1 + 0x58),piVar6), iVar5 == 0)) {
          FUN_0001a2ec(param_1,piVar6,*(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30))
          ;
          FUN_0001b0e4(param_1,piVar6,param_3,param_4);
        }
        if (uVar1 == 0) break;
        if (iVar9 < (int)(uint)uVar1) {
          iVar9 = 0;
        }
        else {
          iVar9 = iVar9 - (uint)uVar1;
        }
        piVar7 = (int *)((longlong)piVar7 + (ulonglong)uVar1);
      }
    }
    else {
      local_60 = 0;
      pbVar10 = (byte *)((ulonglong)*(ushort *)(param_2 + 0x20) + param_2);
      local_68[0] = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        local_68[0] = *(uint *)(param_1 + 0x58);
      }
      local_58 = pbVar10;
      if (pbVar10 != (byte *)0x0) {
        piVar7 = (int *)(**(code **)(param_1 + 8))
                                  ((uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34));
        local_50 = piVar7;
        do {
          if (piVar7 == (int *)0x0) goto LAB_0001b0bf;
          local_res10 = FUN_0001a544(param_1,pbVar10,0,&local_60,local_res8,local_68);
          if (local_res10 == 0) break;
          lVar11 = local_60;
          if (local_res8[0] != 0) {
            do {
              iVar9 = local_res8[0] + -1;
              local_res8[0] = iVar9;
              iVar5 = FUN_0001b948(param_1,*(longlong *)(param_1 + 0x38) * lVar11,
                                   *(uint *)(param_1 + 0x38),piVar7);
              if (iVar5 != 0) goto LAB_0001b0a6;
              FUN_0001a2ec(param_1,piVar7,*(uint *)(param_1 + 0x34));
              uVar4 = local_res20;
              puVar3 = local_res18;
              iVar5 = (uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
              piVar8 = piVar7;
              iVar2 = local_res8[0];
              for (; (local_res8[0] = iVar9, iVar5 != 0 &&
                     (pbVar10 = local_58, piVar7 = local_50, local_res8[0] = iVar2,
                     (char)*piVar8 != '\0'));
                  piVar8 = (int *)((longlong)piVar8 + (ulonglong)*(ushort *)(piVar8 + 1))) {
                if (((char)*piVar8 == -0x80) &&
                   (iVar9 = FUN_0001b8f0(param_1,*(ulonglong *)(piVar8 + 4) & 0xffffffffffff,
                                         *(uint *)(param_1 + 0x58),piVar6), iVar9 == 0)) {
                  FUN_0001a2ec(param_1,piVar6,
                               *(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30));
                  FUN_0001b0e4(param_1,piVar6,puVar3,uVar4);
                }
                pbVar10 = local_58;
                piVar7 = local_50;
                if ((short)piVar8[1] == 0) break;
                iVar5 = iVar5 - (uint)*(ushort *)(piVar8 + 1);
                iVar9 = local_res8[0];
                iVar2 = local_res8[0];
              }
              lVar11 = lVar11 + 1;
            } while (local_res8[0] != 0);
            local_res8[0] = 0;
          }
          local_res8[0] = local_res8[0] + -1;
LAB_0001b0a6:
          pbVar10 = pbVar10 + (local_res10 + 1);
          local_58 = pbVar10;
        } while (local_res10 != 0);
        (**(code **)(param_1 + 0x10))(piVar7);
      }
    }
LAB_0001b0bf:
    if (piVar6 != (int *)0x0) {
      (**(code **)(param_1 + 0x10))(piVar6);
    }
  }
  return;
}




void FUN_0001b0e4(longlong param_1,int *param_2,undefined *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint local_res10 [2];
  int local_28 [2];
  longlong local_20;
  
  if ((param_2 != (int *)0x0) && (*param_2 == 0x454c4946)) {
    piVar2 = FUN_0001a3e0(param_1,param_2,0x80);
    if (piVar2 != (int *)0x0) {
      local_20 = 0;
      pbVar3 = (byte *)0x0;
      if ((char)piVar2[2] != '\0') {
        pbVar3 = (byte *)((ulonglong)*(ushort *)(piVar2 + 8) + (longlong)piVar2);
        local_res10[0] = (int)piVar2 - (int)param_2;
        if (local_res10[0] < *(uint *)(param_1 + 0x58)) {
          local_res10[0] = *(uint *)(param_1 + 0x58) - local_res10[0];
        }
        else {
          local_res10[0] = 0;
        }
      }
      if (pbVar3 != (byte *)0x0) {
        do {
          iVar1 = FUN_0001a544(param_1,pbVar3,0,&local_20,local_28,local_res10);
          if (iVar1 == 0) break;
          (*(code *)param_3)((ulonglong)*(uint *)(param_1 + 0x34) * local_20,
                             *(uint *)(param_1 + 0x34) * local_28[0]);
          pbVar3 = pbVar3 + (iVar1 + 1U);
        } while (iVar1 + 1U != 0);
      }
    }
    piVar2 = FUN_0001a3e0(param_1,param_2,0x20);
    if (piVar2 != (int *)0x0) {
      FUN_0001ae34(param_1,(longlong)piVar2,param_3,param_4);
    }
  }
  return;
}




undefined8 FUN_0001b1f8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong local_res10;
  
  iVar5 = 0;
  pwVar1 = L"PAGEFILE.SYS";
  do {
    if (*pwVar1 == L'\0') break;
    iVar5 = iVar5 + 1;
    pwVar1 = pwVar1 + 1;
  } while (pwVar1 != (wchar_t *)0x0);
  uVar4 = 0;
  local_res10 = param_2;
  piVar2 = (int *)(**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_0001a42c(param_1,&LAB_0001eb80,piVar2,2,&local_res10);
    if ((int)uVar3 == 0) {
      uVar4 = FUN_0001aa80(param_1,piVar2,L"PAGEFILE.SYS",local_res10,iVar5 * 2);
    }
    (**(code **)(param_1 + 0x10))(piVar2);
    if (uVar4 != 0) {
      piVar2 = (int *)(**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x58));
      if (piVar2 != (int *)0x0) {
        iVar5 = FUN_0001b8f0(param_1,uVar4,*(uint *)(param_1 + 0x58),piVar2);
        if (iVar5 == 0) {
          FUN_0001a2ec(param_1,piVar2,*(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30))
          ;
          FUN_0001b0e4(param_1,piVar2,FUN_00014d2c,param_4);
        }
        (**(code **)(param_1 + 0x10))(piVar2);
      }
    }
  }
  return 0;
}




undefined8
FUN_0001b30c(longlong param_1,int *param_2,uint param_3,longlong *param_4,longlong *param_5,
            ulonglong *param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int *piVar6;
  uint uVar7;
  longlong local_res10;
  
  piVar6 = param_2;
  if (param_3 != 0) {
    do {
      if (param_2 == (int *)0x0) {
        return 0;
      }
      if (*piVar6 == 0) {
        return 0;
      }
      if (*piVar6 == 0x80) {
        if (*(int *)(param_1 + 100) == 0) {
LAB_0001b406:
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        }
        else if (*(longlong *)(param_1 + 0x70) != 0) {
          uVar3 = ((*(ulonglong *)(piVar6 + 2) & 0xffffffffffff) * *(longlong *)(param_1 + 0x38)) /
                  (ulonglong)*(uint *)(param_1 + 0x58);
          if (*(uint *)(param_1 + 0x60) < *(uint *)(param_1 + 100)) {
            uVar7 = 0;
            if (*(uint *)(param_1 + 0x60) != 0) {
              puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + 8);
              do {
                if (*puVar5 == (*(ulonglong *)(piVar6 + 4) & 0xffffffffffff)) goto LAB_0001b40a;
                uVar7 = uVar7 + 1;
                puVar5 = puVar5 + 2;
              } while (uVar7 < *(uint *)(param_1 + 0x60));
            }
            uVar4 = FUN_0001b7b8(param_1,*(ulonglong *)(piVar6 + 4) & 0xffffffffffff,&local_res10);
            *param_6 = uVar3;
            uVar2 = *param_4;
            *param_5 = uVar4;
            if (uVar4 != uVar2) {
              *(ulonglong *)
               (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x10) = uVar4
              ;
              *(ulonglong *)
               (*(longlong *)(param_1 + 0x70) + 8 + (ulonglong)*(uint *)(param_1 + 0x60) * 0x10) =
                   uVar3;
              goto LAB_0001b406;
            }
          }
        }
      }
LAB_0001b40a:
      uVar1 = *(ushort *)(piVar6 + 1);
      if (uVar1 == 0) {
        return 0;
      }
      if (param_3 < uVar1) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 - uVar1;
      }
      piVar6 = (int *)((longlong)piVar6 + (ulonglong)uVar1);
    } while (param_3 != 0);
  }
  return 0;
}




undefined8 FUN_0001b460(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong local_res10 [2];
  longlong local_res20;
  longlong local_58 [3];
  longlong local_40;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(char *)(param_2 + 8) == '\0') {
      local_res10[0] = 0;
      local_res20 = *(longlong *)(param_1 + 0x48) * *(longlong *)(param_1 + 0x38);
      if ((int)*(short *)(param_2 + 0x14) + 4U < *(uint *)(param_2 + 0x10)) {
        local_58[0] = local_res20;
        uVar4 = FUN_0001b30c(param_1,(int *)(*(short *)(param_2 + 0x14) + param_2),
                             *(uint *)(param_2 + 0x10) - (int)*(short *)(param_2 + 0x14),local_58,
                             &local_res20,local_res10);
      }
    }
    else {
      local_58[0] = 0;
      pbVar7 = (byte *)((ulonglong)*(ushort *)(param_2 + 0x20) + param_2);
      uVar1 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x58);
      }
      local_res20 = CONCAT44(local_res20._4_4_,uVar1);
      if (pbVar7 != (byte *)0x0) {
        piVar5 = (int *)(**(code **)(param_1 + 8))
                                  ((uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34));
        local_58[1] = 0;
        local_58[2] = *(longlong *)(param_1 + 0x48) * *(longlong *)(param_1 + 0x38);
        local_40 = local_58[2];
        do {
          if (piVar5 == (int *)0x0) {
            return 0;
          }
          iVar2 = FUN_0001a544(param_1,pbVar7,0,local_58,(undefined4 *)local_res10,
                               (uint *)&local_res20);
          if (iVar2 == 0) break;
          lVar8 = local_58[0];
          iVar6 = (int)local_res10[0];
          while (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            local_res10[0] = CONCAT44(local_res10[0]._4_4_,iVar6);
            iVar3 = FUN_0001b948(param_1,lVar8 * *(longlong *)(param_1 + 0x38),
                                 *(uint *)(param_1 + 0x38),piVar5);
            lVar8 = lVar8 + 1;
            if (iVar3 != 0) goto LAB_0001b614;
            FUN_0001a2ec(param_1,piVar5,*(uint *)(param_1 + 0x34));
            FUN_0001b30c(param_1,piVar5,(uint)*(ushort *)(param_1 + 0x30) * *(int *)(param_1 + 0x34)
                         ,&local_40,local_58 + 2,(ulonglong *)(local_58 + 1));
          }
          local_res10[0] = CONCAT44(local_res10[0]._4_4_,0xffffffff);
LAB_0001b614:
          pbVar7 = pbVar7 + (iVar2 + 1);
        } while (iVar2 != 0);
        (**(code **)(param_1 + 0x10))(piVar5);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}




longlong FUN_0001b64c(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  uint local_res8 [2];
  uint local_res18 [2];
  longlong local_res20;
  
  lVar5 = 0;
  piVar2 = (int *)(**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x58));
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x58) * param_3;
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_0001b948(param_1,param_2,*(uint *)(param_1 + 0x58),piVar2);
    if (iVar1 == 0) {
      FUN_0001a2ec(param_1,piVar2,*(uint *)(param_1 + 0x58) / (uint)*(ushort *)(param_1 + 0x30));
      if (*piVar2 == 0x454c4946) {
        piVar3 = FUN_0001a3e0(param_1,piVar2,0x80);
        if (piVar3 != (int *)0x0) {
          local_res20 = 0;
          pbVar4 = (byte *)0x0;
          if ((char)piVar3[2] != '\0') {
            pbVar4 = (byte *)((ulonglong)*(ushort *)(piVar3 + 8) + (longlong)piVar3);
            local_res8[0] = (int)piVar3 - (int)piVar2;
            if (local_res8[0] < *(uint *)(param_1 + 0x58)) {
              local_res8[0] = *(uint *)(param_1 + 0x58) - local_res8[0];
            }
            else {
              local_res8[0] = 0;
            }
          }
          bVar7 = pbVar4 == (byte *)0x0;
          while (!bVar7) {
            iVar1 = FUN_0001a544(param_1,pbVar4,0,&local_res20,local_res18,local_res8);
            if (iVar1 == 0) break;
            local_res18[0] = local_res18[0] * *(int *)(param_1 + 0x38);
            if (uVar6 < local_res18[0]) {
              lVar5 = *(longlong *)(param_1 + 0x38) * local_res20 + uVar6;
              if (lVar5 != 0) goto LAB_0001b796;
              break;
            }
            uVar6 = uVar6 - local_res18[0];
            pbVar4 = pbVar4 + (iVar1 + 1);
            bVar7 = iVar1 == 0;
          }
        }
        piVar3 = FUN_0001a3e0(param_1,piVar2,0x20);
        if (piVar3 != (int *)0x0) {
          lVar5 = FUN_0001b460(param_1,(longlong)piVar3);
        }
      }
    }
LAB_0001b796:
    (**(code **)(param_1 + 0x10))(piVar2);
  }
  return lVar5;
}




ulonglong FUN_0001b7b8(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x68) < 0x33) {
    if (*(int *)(param_1 + 100) == 0) {
      FUN_0001b64c(param_1,*(longlong *)(param_1 + 0x38) * *(longlong *)(param_1 + 0x48),
                   0x1000000000000);
      piVar1 = (int *)(param_1 + 0x60);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) {
        uVar4 = (**(code **)(param_1 + 8))(*(int *)(param_1 + 0x60) << 4);
        *(undefined8 *)(param_1 + 0x70) = uVar4;
      }
      if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x60) = 1;
        *(undefined4 *)(param_1 + 100) = uVar2;
        **(longlong **)(param_1 + 0x70) =
             *(longlong *)(param_1 + 0x38) * *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8) = 0;
        FUN_0001b64c(param_1,*(longlong *)(param_1 + 0x38) * *(longlong *)(param_1 + 0x48),
                     0x1000000000000);
      }
    }
    if ((*(int *)(param_1 + 100) != 0) && (lVar3 = *(longlong *)(param_1 + 0x70), lVar3 != 0)) {
      if (*(int *)(param_1 + 0x60) != 0) {
        puVar5 = (ulonglong *)(lVar3 + 8);
        do {
          if (param_2 <= *puVar5) break;
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
          puVar5 = puVar5 + 2;
        } while (uVar7 < *(uint *)(param_1 + 0x60));
      }
      if ((*(uint *)(param_1 + 0x60) <= (uint)uVar6) ||
         (param_2 < *(ulonglong *)(lVar3 + 8 + uVar6 * 0x10))) {
        uVar6 = (ulonglong)((uint)uVar6 - 1);
      }
      lVar3 = *(longlong *)(lVar3 + 8 + uVar6 * 0x10);
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar3;
      }
      uVar6 = FUN_0001b64c(param_1,*(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar6 * 0x10),
                           param_2 - lVar3);
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}




int FUN_0001b8f0(longlong param_1,ulonglong param_2,uint param_3,void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar2 = FUN_0001b7b8(param_1,param_2,(longlong *)0x0);
  if (uVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_0001b948(param_1,uVar2,param_3,param_4);
  }
  return iVar1;
}




int FUN_0001b948(longlong param_1,ulonglong param_2,uint param_3,void *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  uint uVar4;
  ulonglong uVar6;
  uint local_res8 [2];
  undefined4 local_28 [4];
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  do {
    uVar1 = *(ushort *)(param_1 + 0x30);
    _Size = 0;
    local_res8[0] = 0;
    if ((uVar1 == 0) ||
       ((param_2 % (ulonglong)uVar1 == 0 && ((int)(uVar5 % (ulonglong)uVar1) == 0)))) {
      iVar2 = (**(code **)(param_1 + 0x18))
                        (param_4,uVar5,param_2,0,local_res8,*(undefined8 *)(param_1 + 0x24));
LAB_0001ba56:
      _Size = (size_t)local_res8[0];
    }
    else {
      local_28[0] = 0;
      iVar2 = 1;
      if (((*(longlong *)(param_1 + 0x128) != 0) &&
          (&stack0x00000000 != (undefined1 *)0xfffffffffffffff8)) && (param_4 != (void *)0x0)) {
        uVar6 = (ulonglong)*(ushort *)(param_1 + 0x30);
        lVar3 = (param_2 / uVar6) * uVar6;
        iVar2 = (**(code **)(param_1 + 0x18))
                          (*(longlong *)(param_1 + 0x128),uVar6,lVar3,0,local_28,
                           *(undefined8 *)(param_1 + 0x24));
        if (iVar2 != 0) goto LAB_0001ba56;
        lVar3 = param_2 - lVar3;
        _Size = (ulonglong)*(ushort *)(param_1 + 0x30) - lVar3;
        if ((uint)uVar5 < (uint)_Size) {
          _Size = uVar5;
        }
        memcpy(param_4,(void *)(lVar3 + *(longlong *)(param_1 + 0x128)),_Size);
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((int)_Size == 0) {
      return 1;
    }
    param_4 = (void *)((longlong)param_4 + (_Size & 0xffffffff));
    param_2 = param_2 + (_Size & 0xffffffff);
    uVar4 = (uint)uVar5 - (int)_Size;
    uVar5 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      return 0;
    }
  } while( true );
}




void FUN_0001bab0(longlong param_1)

{
  if (param_1 != 0) {
    ExFreePoolWithTag(param_1,0);
  }
  return;
}




undefined8
FUN_0001bacc(longlong param_1,uint param_2,ulonglong param_3,undefined8 param_4,uint *param_5,
            longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong local_res8;
  ulonglong local_48;
  
  uVar8 = 1;
  if (param_6 != 0) {
    uVar1 = *(uint *)(param_6 + 0x128);
    if ((param_2 < uVar1) || (param_2 % uVar1 != 0)) {
      FUN_00011008("eumonSysReadWriteVolBmpFile iBytess=%u secSize=%u",(ulonglong)param_2,
                   (ulonglong)uVar1,param_4);
    }
    else if (param_3 % (ulonglong)(longlong)(int)uVar1 == 0) {
      lVar2 = *(longlong *)(param_6 + 0x118);
      uVar11 = param_2;
      local_res8 = param_1;
      local_48 = param_3;
      do {
        if (local_res8 == 0) break;
        uVar3 = uVar11;
        if (uVar1 << 4 < uVar11) {
          uVar3 = uVar1 << 4;
        }
        uVar9 = (ulonglong)uVar3;
        iVar4 = -0x3fffff66;
        puVar5 = FUN_0001347c(0x20);
        if (puVar5 != (ulonglong *)0x0) {
          KeInitializeEvent(puVar5,0,0);
          lVar6 = IoAllocateIrp(*(undefined1 *)(lVar2 + 0x4c));
          if (lVar6 == 0) {
LAB_0001bbbe:
            iVar4 = -0x3fffff66;
          }
          else {
            lVar7 = IoAllocateMdl(local_res8,uVar9,0,0,0);
            *(longlong *)(lVar6 + 8) = lVar7;
            if (lVar7 == 0) {
              IoFreeIrp(lVar6);
              goto LAB_0001bbbe;
            }
            lVar7 = *(longlong *)(lVar6 + 0xb8);
            *(undefined4 *)(lVar6 + 0x30) = 0;
            *(undefined8 *)(lVar6 + 0x38) = 0;
            *(undefined4 *)(lVar6 + 0x10) = 1;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            *(ulonglong **)(lVar6 + 0x70) = puVar5;
            *(undefined1 *)(lVar6 + 0x44) = 0;
            *(undefined1 *)(lVar6 + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x68) = 0;
            *(longlong *)(lVar7 + -0x20) = lVar2;
            *(uint *)(lVar7 + -0x40) = uVar3;
            *(undefined4 *)(lVar7 + -0x38) = 0;
            *(char *)(lVar7 + -0x48) = ((int)param_4 != 0) + '\x03';
            *(ulonglong *)(lVar7 + -0x30) = local_48;
            MmBuildMdlForNonPagedPool(*(undefined8 *)(lVar6 + 8));
            lVar6 = *(longlong *)(lVar6 + 0xb8);
            *(ulonglong **)(lVar6 + -8) = puVar5;
            *(code **)(lVar6 + -0x10) = FUN_0001bd50;
            *(undefined1 *)(lVar6 + -0x45) = 0xe0;
            iVar4 = IofCallDriver(lVar2);
            if (iVar4 == 0x103) {
              KeWaitForSingleObject(puVar5,0,0,0,0);
              iVar4 = (int)puVar5[3];
            }
          }
          ExFreePoolWithTag(puVar5);
        }
        if (iVar4 != 0) {
          uVar9 = (ulonglong)*(uint *)(param_6 + 0x128);
          uVar10 = (ulonglong)param_2;
          FUN_00011008("eumonSysReadWriteVolBmpFile2 iStartByte=%I64u secSize=%u iBytess=%u",param_3
                       ,uVar9,uVar10);
          FUN_00011008("eumonSysReadWriteVolBmpFile rw error",param_3,uVar9,uVar10);
          return 1;
        }
        local_48 = local_48 + uVar9;
        local_res8 = local_res8 + uVar9;
        uVar11 = uVar11 - uVar3;
      } while (uVar11 != 0);
      if (param_5 != (uint *)0x0) {
        *param_5 = param_2;
      }
      uVar8 = 0;
    }
    else {
      FUN_00011008("eumonSysReadWriteVolBmpFile iStartByte=%I64u secSize=%u",param_3,
                   (ulonglong)uVar1,param_4);
    }
  }
  return uVar8;
}




undefined8 FUN_0001bd50(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    DbgPrint("diskperf !!!!!!!!!!SysReadWrite_Callback Error Code====0x%x\n");
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  while (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 8) = **(undefined8 **)(param_2 + 8);
    IoFreeMdl();
  }
  IoFreeIrp(param_2);
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x18) = uVar1;
    KeSetEvent(param_3,0,0);
  }
  return 0xc0000016;
}




undefined8 * FUN_0001bdd0(undefined8 *param_1,ulonglong param_2)

{
  FUN_0001be10(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (undefined8 *)0x0)) {
    ExFreePoolWithTag(param_1,0);
  }
  return param_1;
}




void FUN_0001be10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0001f2f0;
  if (param_1[1] != 0) {
    ExFreePoolWithTag(param_1[1],0);
  }
  return;
}




undefined8 FUN_0001be3c(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = 0;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)param_4;
    if (param_3 < *(ulonglong *)(lVar1 + uVar3 * 0x10)) {
      uVar2 = 0xffffffff;
    }
    else if ((ulonglong)*(uint *)(lVar1 + 8 + uVar3 * 0x10) + *(longlong *)(lVar1 + uVar3 * 0x10) <=
             param_2) {
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 * FUN_0001be8c(undefined8 *param_1,ulonglong param_2)

{
  FUN_0001becc(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (undefined8 *)0x0)) {
    ExFreePoolWithTag(param_1,0);
  }
  return param_1;
}




void FUN_0001becc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0001f2f8;
  if ((*(int *)((longlong)param_1 + 0x2c) != 0) && (param_1[1] != 0)) {
    ExFreePoolWithTag(param_1[1],0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = &PTR_FUN_0001f2e0;
  return;
}




ulonglong FUN_0001bf1c(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte in_CR8;
  
  if ((param_2 < *(undefined8 **)(param_1 + 8)) || (*(undefined8 **)(param_1 + 0x10) <= param_2)) {
    uVar3 = ExFreePoolWithTag(param_2,0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    *param_2 = 0;
    if (in_CR8 < 2) {
      uVar1 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x50) = uVar1;
    }
    else {
      KeAcquireSpinLockAtDpcLevel();
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x18) = param_2;
    }
    else {
      **(undefined8 **)(param_1 + 0x20) = param_2;
    }
    *(undefined8 **)(param_1 + 0x20) = param_2;
    if (*(int *)(param_1 + 0x48) == 1) {
      uVar2 = KeReleaseSpinLockFromDpcLevel();
    }
    else {
      uVar2 = KeReleaseSpinLock(param_1 + 0x40,*(undefined1 *)(param_1 + 0x50));
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}




ulonglong * FUN_0001bfb8(longlong param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  ulonglong *puVar3;
  byte in_CR8;
  
  puVar3 = (ulonglong *)0x0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (in_CR8 < 2) {
      uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x50) = uVar2;
    }
    else {
      KeAcquireSpinLockAtDpcLevel();
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
    puVar3 = *(ulonglong **)(param_1 + 0x18);
    uVar1 = *puVar3;
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    if (uVar1 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(param_1 + 0x48) == 1) {
      KeReleaseSpinLockFromDpcLevel();
    }
    else {
      KeReleaseSpinLock(param_1 + 0x40);
    }
    if (puVar3 != (ulonglong *)0x0) {
      FUN_0001c770(puVar3,0,(longlong)*(int *)(param_1 + 0x28));
    }
  }
  return puVar3;
}




undefined8 * FUN_0001c04c(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = SUB168(ZEXT816(0x20) * ZEXT816(100),0);
  if (SUB168(ZEXT816(0x20) * ZEXT816(100),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = uVar1 + 8;
  if (0xfffffffffffffff7 < uVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  if (uVar2 == 0) {
    puVar3 = (ulonglong *)0x0;
  }
  else {
    puVar3 = FUN_0001347c(uVar2);
  }
  if (puVar3 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *(undefined4 *)puVar3 = 100;
    iVar5 = 99;
    puVar3 = puVar4;
    do {
      FUN_0001c320(puVar3);
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *param_1 = puVar4;
  if (puVar4 != (ulonglong *)0x0) {
    *(undefined4 *)(param_1 + 1) = 100;
  }
  return param_1;
}




undefined8 FUN_0001c0f8(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar7;
  
  plVar12 = (longlong *)*param_1;
  uVar11 = 0;
  if (plVar12 != (longlong *)0x0) {
    if (((int)param_1[1] != 0) && (uVar7 = uVar11, (int)param_1[1] != 0)) {
      do {
        if (*plVar12 == 0) {
          return 0;
        }
        if (*(uint *)(plVar12 + 1) < 0x266) {
          uVar7 = (ulonglong)*(uint *)(plVar12 + 1);
          lVar3 = *plVar12;
          *(undefined8 *)(lVar3 + uVar7 * 0x14) = *param_2;
          *(undefined8 *)(lVar3 + 8 + uVar7 * 0x14) = param_2[1];
          *(undefined4 *)(lVar3 + 0x10 + uVar7 * 0x14) = *(undefined4 *)(param_2 + 2);
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          if (((*plVar12 != 0) && ((int)plVar12[1] != 0)) &&
             (uVar6 = (int)plVar12[1] - 1, uVar7 = uVar11, uVar15 = uVar11, uVar6 != 0)) {
            do {
              uVar8 = uVar11;
              uVar10 = uVar11;
              uVar14 = uVar11;
              iVar9 = 0;
              if (uVar6 != 0) {
                do {
                  lVar3 = *plVar12;
                  uVar1 = uVar8 + 0x14;
                  if (*(ulonglong *)(uVar1 + lVar3) < *(ulonglong *)(uVar8 + lVar3)) {
                    uVar4 = *(undefined8 *)(uVar8 + lVar3);
                    uVar5 = *(undefined8 *)(uVar8 + 8 + lVar3);
                    uVar2 = *(undefined4 *)(uVar8 + 0x10 + lVar3);
                    uVar10 = 1;
                    *(undefined8 *)(uVar8 + lVar3) = *(undefined8 *)(uVar1 + lVar3);
                    *(undefined8 *)(uVar8 + 8 + lVar3) = *(undefined8 *)(uVar8 + 0x1c + lVar3);
                    *(undefined4 *)(uVar8 + 0x10 + lVar3) = *(undefined4 *)(uVar8 + 0x24 + lVar3);
                    lVar3 = *plVar12;
                    *(undefined8 *)(lVar3 + uVar1) = uVar4;
                    *(undefined8 *)(lVar3 + 8 + uVar1) = uVar5;
                    *(undefined4 *)(lVar3 + 0x10 + uVar1) = uVar2;
                    uVar7 = uVar14;
                  }
                  iVar9 = (int)uVar10;
                  uVar13 = (int)uVar14 + 1;
                  uVar8 = uVar1;
                  uVar14 = (ulonglong)uVar13;
                } while (uVar13 < uVar6);
              }
              uVar6 = (uint)uVar7;
            } while ((iVar9 != 0) &&
                    (uVar13 = (int)uVar15 + 1, uVar15 = (ulonglong)uVar13,
                    uVar13 < (int)plVar12[1] - 1U));
          }
          FUN_0001c4ac(plVar12);
          return 1;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        plVar12 = plVar12 + 4;
      } while (uVar6 < *(uint *)(param_1 + 1));
    }
  }
  return 0;
}




undefined8 FUN_0001c278(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  
  lVar1 = *param_1;
  uVar3 = 0;
  if (((lVar1 != 0) && ((int)param_1[1] != 0)) && ((int)param_1[1] != 0)) {
    puVar5 = (ulonglong *)(lVar1 + 0x10);
    do {
      if (((puVar5[-2] != 0) && ((int)puVar5[-1] != 0)) &&
         ((*puVar5 <= param_2 &&
          ((param_2 < puVar5[1] &&
           (uVar2 = FUN_0001c3a4((longlong *)(uVar3 * 0x20 + lVar1),param_2,param_3),
           (int)uVar2 != 0)))))) {
        return 1;
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      puVar5 = puVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 1));
  }
  return 0;
}




undefined8 * FUN_0001c320(undefined8 *param_1)

{
  ulonglong *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = FUN_0001347c(0x2ff8);
  *param_1 = puVar1;
  if (puVar1 != (ulonglong *)0x0) {
    FUN_0001c770(puVar1,0,0x2ff8);
  }
  return param_1;
}




void FUN_0001c36c(longlong *param_1)

{
  if (*param_1 != 0) {
    ExFreePoolWithTag(*param_1,0);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




undefined8 FUN_0001c3a4(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  
  lVar1 = *param_1;
  uVar4 = 0;
  if ((lVar1 != 0) && ((int)param_1[1] != 0)) {
    local_res8[0] = 0xffffffff;
    iVar2 = FUN_0001c428(param_1,param_2,local_res8);
    if ((iVar2 != 0) &&
       (uVar3 = (ulonglong)local_res8[0], uVar4 = 0, local_res8[0] < *(uint *)(param_1 + 1))) {
      uVar4 = 1;
      *param_3 = *(undefined8 *)(lVar1 + uVar3 * 0x14);
      param_3[1] = *(undefined8 *)(lVar1 + 8 + uVar3 * 0x14);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(lVar1 + 0x10 + uVar3 * 0x14);
    }
  }
  return uVar4;
}




undefined4 FUN_0001c428(longlong *param_1,ulonglong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  uVar4 = 0;
  if ((((lVar1 != 0) && ((int)param_1[1] != 0)) && ((ulonglong)param_1[2] <= param_2)) &&
     (param_2 < (ulonglong)param_1[3])) {
    uVar5 = (int)param_1[1] - 1;
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      uVar2 = *(ulonglong *)(lVar1 + (ulonglong)uVar3 * 0x14);
      if (param_2 < uVar2) {
        uVar5 = uVar3 - 1;
      }
      else {
        if (param_2 < *(uint *)(lVar1 + 0x10 + (ulonglong)uVar3 * 0x14) + uVar2) {
          *param_3 = uVar3;
          return 1;
        }
        uVar4 = uVar3 + 1;
      }
    } while (uVar4 <= uVar5);
  }
  return 0;
}




void FUN_0001c4ac(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && ((int)param_1[1] != 0)) {
    param_1[2] = *plVar1;
    uVar2 = (ulonglong)((int)param_1[1] - 1);
    param_1[3] = (ulonglong)*(uint *)((longlong)plVar1 + uVar2 * 0x14 + 0x10) +
                 *(longlong *)((longlong)plVar1 + uVar2 * 0x14);
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_0001c500(longlong param_1)

{
  if ((param_1 == DAT_00020100) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0xf7,param_1,DAT_00020100,DAT_00020108,0);
}




/* Library Function - Single Match
    StringVPrintfWorkerW
   
   Library: Visual Studio 2008 Release */

HRESULT __stdcall
StringVPrintfWorkerW
          (STRSAFE_LPWSTR pszDest,size_t cchDest,size_t *pcchNewDestLength,STRSAFE_LPCWSTR pszFormat
          ,va_list argList)

{
  size_t _Count;
  int iVar1;
  size_t sVar2;
  HRESULT HVar3;
  
  _Count = cchDest - 1;
  HVar3 = 0;
  iVar1 = _vsnwprintf(pszDest,_Count,pszFormat,argList);
  if (-1 < iVar1) {
    sVar2 = (size_t)iVar1;
    if (sVar2 <= _Count) {
      if (sVar2 == _Count) {
        pszDest[_Count] = L'\0';
        sVar2 = _Count;
        HVar3 = 0;
      }
      goto LAB_0001c5ba;
    }
  }
  pszDest[_Count] = L'\0';
  HVar3 = -0x7ffffffb;
  sVar2 = _Count;
LAB_0001c5ba:
  if (pcchNewDestLength != (size_t *)0x0) {
    *pcchNewDestLength = sVar2;
  }
  return HVar3;
}




/* Library Function - Single Match
    StringLengthWorkerW
   
   Library: Visual Studio 2008 Release */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz,size_t cchMax,size_t *pcchLength)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = 0;
  sVar2 = cchMax;
  if (cchMax != 0) {
    do {
      if (*psz == L'\0') break;
      psz = psz + 1;
      sVar2 = sVar2 - 1;
    } while (sVar2 != 0);
    if (sVar2 != 0) goto LAB_0001c603;
  }
  iVar1 = -0x3ffffff3;
LAB_0001c603:
  if (pcchLength != (size_t *)0x0) {
    if (-1 < iVar1) {
      *pcchLength = cchMax - sVar2;
      return iVar1;
    }
    *pcchLength = 0;
  }
  return iVar1;
}




/* Library Function - Single Match
    StringValidateDestW
   
   Library: Visual Studio 2008 Release */

HRESULT __stdcall StringValidateDestW(STRSAFE_PCNZWCH pszDest,size_t cchDest,size_t cchMax)

{
  int iVar1;
  ulonglong in_R9;
  
  iVar1 = 0;
  if ((cchDest == 0) || (in_R9 < cchDest)) {
    iVar1 = -0x3ffffff3;
  }
  if (cchMax != 0) {
    if (iVar1 < 0) {
      *(undefined8 *)cchMax = 0;
    }
    else {
      iVar1 = StringLengthWorkerW(pszDest,cchDest,(size_t *)cchMax);
    }
  }
  return iVar1;
}




ulonglong FUN_0001c654(undefined1 *param_1,ulonglong param_2,ushort *param_3,undefined8 param_4,
                      ulonglong *param_5)

{
  ulonglong uVar1;
  undefined1 *local_38;
  int local_30;
  undefined1 *local_28;
  undefined4 local_20;
  
  if ((param_3 == (ushort *)0x0) || ((param_2 != 0 && (param_1 == (undefined1 *)0x0)))) {
    FUN_0001c870();
    uVar1 = 0xffffffff;
  }
  else {
    local_20 = 0x42;
    if (param_2 < 0x40000000) {
      local_30 = (int)param_2 * 2;
    }
    else {
      local_30 = 0x7fffffff;
    }
    local_38 = param_1;
    local_28 = param_1;
    uVar1 = FUN_0001c9b4((longlong *)&local_38,param_3,param_4,param_5);
    if (param_1 != (undefined1 *)0x0) {
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        FUN_0001c860(0,(longlong)&local_38);
      }
      else {
        *local_38 = 0;
        local_38 = local_38 + 1;
      }
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        FUN_0001c860(0,(longlong)&local_38);
        uVar1 = uVar1 & 0xffffffff;
      }
      else {
        *local_38 = 0;
        uVar1 = uVar1 & 0xffffffff;
      }
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    _vsnwprintf
   
   Library: Visual Studio 2008 Release */

int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0001c654((undefined1 *)_Dest,_Count,(ushort *)_Format,0,(ulonglong *)_Args);
  return (int)uVar1;
}




void FUN_0001c770(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3;
  if (7 < param_3) {
    param_2 = (param_2 & 0xff) * 0x101010101010101;
    if (0x3f < param_3) {
      uVar1 = -(int)param_1 & 7;
      if (uVar1 != 0) {
        uVar3 = param_3 - uVar1;
        *param_1 = param_2;
      }
      param_1 = (ulonglong *)((ulonglong)uVar1 + (longlong)param_1);
      param_3 = uVar3 & 0x3f;
      uVar3 = uVar3 >> 6;
      if (uVar3 != 0) {
        puVar2 = param_1;
        if (uVar3 < 0x1c00) {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
        }
        else {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
          LOCK();
          UNLOCK();
        }
      }
    }
    uVar3 = param_3 & 7;
    for (uVar4 = param_3 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_1 = (char)param_2;
    param_1 = (ulonglong *)((longlong)param_1 + 1);
  }
  return;
}




undefined8 FUN_0001c860(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffffffff;
}




void FUN_0001c870(void)

{
  DbgPrint("Invalid parameter passed to C runtime function.\n");
  return;
}




void FUN_0001c884(ushort param_1,longlong *param_2,int *param_3)

{
  ulonglong uVar1;
  
  if (((*(byte *)(param_2 + 3) & 0x40) == 0) || (param_2[2] != 0)) {
    uVar1 = FUN_0001d2a0(param_1,param_2);
    if (((short)uVar1 == -1) && ((*(byte *)(param_2 + 3) & 0x20) != 0)) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}




void FUN_0001c8d4(ushort param_1,int param_2,longlong *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_0001c884(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}




void FUN_0001c92c(ushort *param_1,int param_2,longlong *param_3,int *param_4)

{
  if (((*(byte *)(param_3 + 3) & 0x40) == 0) || (param_3[2] != 0)) {
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        FUN_0001c884(*param_1,param_3,param_4);
        param_1 = param_1 + 1;
        if (*param_4 == -1) {
          if (DAT_000206c0 != 0x2a) {
            return;
          }
          FUN_0001c884(0x3f,param_3,param_4);
        }
      } while (0 < param_2);
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}




void FUN_0001c9b4(longlong *param_1,ushort *param_2,undefined8 param_3,ulonglong *param_4)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined7 extraout_var;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulonglong uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort *puVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_488;
  uint local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  ushort local_474;
  short local_472;
  longlong *local_470;
  uint local_468;
  char local_464;
  undefined1 local_463;
  ushort local_460 [2];
  int local_45c;
  undefined4 local_458;
  ushort *local_450;
  ushort local_448 [255];
  undefined2 local_249;
  ulonglong local_48;
  
  local_48 = DAT_00020100 ^ (ulonglong)auStack_4b8;
  uVar14 = 0;
  local_458 = 0;
  local_478 = 0;
  local_47c = 0;
  local_484 = 0;
  local_45c = 0;
  local_488 = 0;
  local_470 = param_1;
  if ((param_1 == (longlong *)0x0) || (param_2 == (ushort *)0x0)) {
    local_498 = 0;
    FUN_0001c870();
  }
  else {
    uVar1 = *param_2;
    local_480 = 0;
    uVar12 = uVar14;
    uVar16 = uVar14;
    uVar17 = uVar14;
    uVar19 = uVar14;
    uVar21 = uVar14;
    uVar24 = uVar14;
    puVar11 = local_450;
    while (uVar1 != 0) {
      uVar9 = 0xffffffffffffffff;
      uVar18 = (uint)uVar19;
      uVar5 = (uint)uVar17;
      puVar20 = param_2 + 1;
      local_450 = puVar20;
      if ((int)uVar21 < 0) break;
      if ((ushort)(uVar1 - 0x20) < 0x59) {
        uVar8 = *(byte *)((longlong)L"(null)" + (ulonglong)uVar1) & 0xf;
      }
      else {
        uVar8 = 0;
      }
      local_468 = (int)(char)(&DAT_0001f230)[(longlong)(int)uVar14 + (longlong)(int)uVar8 * 8] >> 4;
      uVar14 = (ulonglong)local_468;
      if (local_468 == 0) {
LAB_0001d077:
        local_488 = 1;
        FUN_0001c884(uVar1,param_1,(int *)&local_480);
        uVar21 = (ulonglong)local_480;
LAB_0001d094:
        uVar19 = (ulonglong)local_484;
LAB_0001d099:
        uVar14 = (ulonglong)local_468;
        uVar16 = (ulonglong)local_478;
        uVar17 = (ulonglong)local_47c;
        param_1 = local_470;
        param_2 = puVar20;
      }
      else {
        uVar8 = (uint)uVar12;
        if (local_468 == 1) {
          local_45c = 0;
          uVar16 = 0;
          uVar19 = 0;
          uVar12 = 0;
          uVar17 = 0xffffffff;
          local_478 = 0;
          local_484 = 0;
          local_47c = 0xffffffff;
          local_488 = 0;
          param_2 = puVar20;
        }
        else if (local_468 == 2) {
          if (uVar1 == 0x20) {
            uVar12 = (ulonglong)(uVar8 | 2);
            param_2 = puVar20;
          }
          else if (uVar1 == 0x23) {
            uVar12 = (ulonglong)(uVar8 | 0x80);
            param_2 = puVar20;
          }
          else if (uVar1 == 0x2b) {
            uVar12 = (ulonglong)(uVar8 | 1);
            param_2 = puVar20;
          }
          else if (uVar1 == 0x2d) {
            uVar12 = (ulonglong)(uVar8 | 4);
            param_2 = puVar20;
          }
          else {
            param_2 = puVar20;
            if (uVar1 == 0x30) {
              uVar12 = (ulonglong)(uVar8 | 8);
            }
          }
        }
        else if (local_468 == 3) {
          if (uVar1 == 0x2a) {
            local_478 = (uint)*param_4;
            uVar16 = (ulonglong)local_478;
            param_4 = param_4 + 1;
            param_2 = puVar20;
            if (-1 < (int)local_478) goto LAB_0001d0ac;
            uVar12 = (ulonglong)(uVar8 | 4);
            local_478 = -local_478;
          }
          else {
            local_478 = (uVar1 - 0x30) + (int)uVar16 * 10;
          }
          uVar16 = (ulonglong)local_478;
          param_2 = puVar20;
        }
        else if (local_468 == 4) {
          uVar17 = 0;
LAB_0001d119:
          local_47c = (uint)uVar17;
          param_2 = puVar20;
        }
        else if (local_468 == 5) {
          if (uVar1 != 0x2a) {
            uVar17 = (ulonglong)((uVar1 - 0x30) + uVar5 * 10);
            goto LAB_0001d119;
          }
          local_47c = (uint)*param_4;
          uVar17 = (ulonglong)local_47c;
          param_4 = param_4 + 1;
          param_2 = puVar20;
          if ((int)local_47c < 0) {
            uVar17 = 0xffffffff;
            local_47c = 0xffffffff;
          }
        }
        else if (local_468 == 6) {
          if (uVar1 == 0x49) {
            uVar12 = (ulonglong)(uVar8 | 0x8000);
            if ((*puVar20 == 0x36) && (param_2[2] == 0x34)) {
              uVar12 = (ulonglong)(uVar8 | 0x8000);
              param_2 = param_2 + 3;
            }
            else if ((*puVar20 == 0x33) && (param_2[2] == 0x32)) {
              uVar12 = (ulonglong)(uVar8 & 0xffff7fff);
              param_2 = param_2 + 3;
            }
            else {
              param_2 = puVar20;
              if (((((*puVar20 != 100) && (*puVar20 != 0x69)) && (*puVar20 != 0x6f)) &&
                  ((*puVar20 != 0x75 && (*puVar20 != 0x78)))) && (*puVar20 != 0x58)) {
                local_468 = 0;
                goto LAB_0001d077;
              }
            }
          }
          else if (uVar1 == 0x68) {
            uVar12 = (ulonglong)(uVar8 | 0x20);
            param_2 = puVar20;
          }
          else if (uVar1 == 0x6c) {
            if (*puVar20 == 0x6c) {
              uVar12 = (ulonglong)(uVar8 | 0x1000);
              param_2 = param_2 + 2;
            }
            else {
              uVar12 = (ulonglong)(uVar8 | 0x10);
              param_2 = puVar20;
            }
          }
          else {
            param_2 = puVar20;
            if (uVar1 == 0x77) {
              uVar12 = (ulonglong)(uVar8 | 0x800);
            }
          }
        }
        else {
          param_2 = puVar20;
          if (local_468 == 7) {
            iVar6 = local_488;
            if (uVar1 < 0x6a) {
              if (uVar1 == 0x69) {
LAB_0001cb26:
                uVar12 = (ulonglong)(uVar8 | 0x40);
LAB_0001cb29:
                iVar22 = 10;
                goto LAB_0001cd21;
              }
              if (uVar1 == 0x43) {
                if ((uVar12 & 0x830) == 0) {
                  uVar12 = (ulonglong)(uVar8 | 0x20);
                }
LAB_0001cc14:
                local_460[0] = (ushort)*param_4;
                param_4 = param_4 + 1;
                local_488 = 1;
                uVar1 = local_460[0];
                if ((uVar12 & 0x20) != 0) {
                  local_464 = (char)local_460[0];
                  local_463 = 0;
                  lVar7 = FUN_0001d2ec(local_448,&local_464,(longlong)DAT_00020128);
                  uVar19 = (ulonglong)local_484;
                  uVar1 = local_448[0];
                  if ((int)lVar7 < 0) {
                    local_45c = 1;
                  }
                }
                local_448[0] = uVar1;
                uVar24 = 1;
                puVar11 = local_448;
                iVar6 = 1;
              }
              else if (uVar1 == 0x53) {
                if ((uVar12 & 0x830) == 0) {
                  uVar12 = (ulonglong)(uVar8 | 0x20);
                }
LAB_0001cbb6:
                puVar11 = (ushort *)*param_4;
                if (uVar5 == 0xffffffff) {
                  uVar17 = 0x7fffffff;
                }
                param_4 = param_4 + 1;
                if ((uVar12 & 0x20) == 0) {
                  if (puVar11 == (ushort *)0x0) {
                    puVar11 = (ushort *)PTR_u__null__00020118;
                  }
                  local_488 = 1;
                  for (puVar10 = puVar11;
                      ((int)uVar17 != 0 && (uVar17 = (ulonglong)((int)uVar17 - 1), *puVar10 != 0));
                      puVar10 = puVar10 + 1) {
                  }
                  uVar24 = (longlong)puVar10 - (longlong)puVar11 >> 1 & 0xffffffff;
                  iVar6 = 1;
                }
                else {
                  if (puVar11 == (ushort *)0x0) {
                    puVar11 = (ushort *)PTR_s__null__00020110;
                  }
                  uVar24 = 0;
                  puVar10 = puVar11;
                  uVar14 = 0;
                  if (0 < (int)uVar17) {
                    do {
                      uVar24 = uVar14;
                      if ((char)*puVar10 == '\0') break;
                      uVar5 = (int)uVar24 + 1;
                      uVar24 = (ulonglong)uVar5;
                      puVar10 = (ushort *)((longlong)puVar10 + 1);
                      uVar14 = uVar24;
                    } while ((int)uVar5 < (int)uVar17);
                  }
                }
              }
              else {
                if (uVar1 == 0x58) goto LAB_0001cce8;
                if (uVar1 == 0x5a) {
                  puVar10 = (ushort *)*param_4;
                  param_4 = param_4 + 1;
                  puVar13 = (ushort *)PTR_s__null__00020110;
                  if ((puVar10 == (ushort *)0x0) ||
                     (puVar11 = *(ushort **)(puVar10 + 4), puVar11 == (ushort *)0x0)) {
                    do {
                      if (uVar9 == 0) break;
                      uVar9 = uVar9 - 1;
                      uVar1 = *puVar13;
                      puVar13 = (ushort *)((longlong)puVar13 + 1);
                    } while ((char)uVar1 != '\0');
                    uVar24 = ~uVar9 - 1;
                    puVar11 = (ushort *)PTR_s__null__00020110;
                  }
                  else {
                    uVar1 = *puVar10;
                    if (puVar10[1] < uVar1) {
LAB_0001d1cb:
                      local_498 = 0;
                      FUN_0001c870();
                      break;
                    }
                    if ((uVar8 >> 0xb & 1) == 0) {
                      local_488 = 0;
                    }
                    else {
                      if (((~uVar1 & 1) == 0) || ((~(uint)puVar11 & 1) == 0)) goto LAB_0001d1cb;
                      uVar1 = uVar1 >> 1;
                      local_488 = 1;
                    }
                    uVar24 = (ulonglong)uVar1;
                    iVar6 = local_488;
                  }
                }
                else {
                  if (uVar1 == 99) goto LAB_0001cc14;
                  if (uVar1 == 100) goto LAB_0001cb26;
                }
              }
            }
            else {
              if (uVar1 == 0x6e) {
                piVar2 = (int *)*param_4;
                param_4 = param_4 + 1;
                bVar4 = FUN_0001d280();
                if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_0001d1cb;
                if ((uVar12 & 0x20) == 0) {
                  *piVar2 = (int)uVar21;
                }
                else {
                  *(short *)piVar2 = (short)uVar21;
                }
                uVar19 = (ulonglong)local_484;
                local_45c = 1;
                iVar6 = local_488;
                goto LAB_0001ce58;
              }
              if (uVar1 == 0x6f) {
                iVar22 = 8;
                if ((char)uVar12 < '\0') {
                  uVar12 = (ulonglong)(uVar8 | 0x200);
                }
              }
              else {
                if (uVar1 == 0x70) {
                  uVar5 = 0x10;
                  uVar12 = (ulonglong)(uVar8 | 0x8000);
LAB_0001cce8:
                  local_458 = 7;
                }
                else {
                  if (uVar1 == 0x73) goto LAB_0001cbb6;
                  if (uVar1 == 0x75) goto LAB_0001cb29;
                  if (uVar1 != 0x78) goto LAB_0001ce58;
                  local_458 = 0x27;
                }
                iVar22 = 0x10;
                if ((char)uVar12 < '\0') {
                  local_472 = (short)local_458 + 0x51;
                  local_474 = 0x30;
                  uVar18 = 2;
                }
              }
LAB_0001cd21:
              uVar8 = (uint)uVar12;
              if ((uVar8 >> 0xf == 0) && ((uVar8 >> 0xc & 1) == 0)) {
                if ((uVar12 & 0x20) == 0) {
                  if ((uVar12 & 0x40) == 0) {
                    uVar14 = (ulonglong)(uint)*param_4;
                  }
                  else {
                    uVar14 = (ulonglong)(int)(uint)*param_4;
                  }
                }
                else if ((uVar12 & 0x40) == 0) {
                  uVar14 = (ulonglong)(ushort)*param_4;
                }
                else {
                  uVar14 = (ulonglong)(short)(ushort)*param_4;
                }
              }
              else {
                uVar14 = *param_4;
              }
              param_4 = param_4 + 1;
              if (((uVar12 & 0x40) != 0) && ((longlong)uVar14 < 0)) {
                uVar14 = -uVar14;
                uVar12 = (ulonglong)(uVar8 | 0x100);
              }
              uVar8 = (uint)uVar12;
              if ((uVar8 >> 0xf == 0) && ((uVar8 >> 0xc & 1) == 0)) {
                uVar14 = uVar14 & 0xffffffff;
              }
              if ((int)uVar5 < 0) {
                uVar5 = 1;
              }
              else {
                uVar12 = (ulonglong)(uVar8 & 0xfffffff7);
                if (0x200 < (int)uVar5) {
                  uVar5 = 0x200;
                }
              }
              puVar10 = &local_249;
              local_484 = -(uint)(uVar14 != 0) & uVar18;
              while ((local_47c = uVar5 - 1, 0 < (int)uVar5 || (uVar14 != 0))) {
                uVar5 = (int)(uVar14 % (ulonglong)(longlong)iVar22) + 0x30;
                cVar3 = (char)uVar5;
                if (0x39 < uVar5) {
                  cVar3 = cVar3 + (char)local_458;
                }
                *(char *)puVar10 = cVar3;
                puVar10 = (ushort *)((longlong)puVar10 + -1);
                uVar14 = uVar14 / (ulonglong)(longlong)iVar22;
                uVar5 = local_47c;
              }
              uVar19 = (ulonglong)local_484;
              uVar5 = (int)&local_249 - (int)puVar10;
              puVar11 = (ushort *)((longlong)puVar10 + 1);
              uVar24 = (ulonglong)uVar5;
              if ((((uint)uVar12 >> 9 & 1) != 0) && ((uVar5 == 0 || (*(char *)puVar11 != '0')))) {
                uVar24 = (ulonglong)(uVar5 + 1);
                *(char *)puVar10 = '0';
                puVar11 = puVar10;
              }
            }
LAB_0001ce58:
            if (local_45c == 0) {
              if ((uVar12 & 0x40) != 0) {
                if (((uint)uVar12 >> 8 & 1) == 0) {
                  if ((uVar12 & 1) == 0) {
                    if ((uVar12 & 2) == 0) goto LAB_0001cea6;
                    local_474 = 0x20;
                  }
                  else {
                    local_474 = 0x2b;
                  }
                }
                else {
                  local_474 = 0x2d;
                }
                local_484 = 1;
              }
LAB_0001cea6:
              uVar5 = local_484;
              iVar23 = (int)uVar24;
              iVar22 = (local_478 - iVar23) - local_484;
              if ((uVar12 & 0xc) == 0) {
                FUN_0001c8d4(0x20,iVar22,local_470,(int *)&local_480);
              }
              FUN_0001c92c(&local_474,uVar5,local_470,(int *)&local_480);
              if (((uVar12 & 8) != 0) && ((uVar12 & 4) == 0)) {
                FUN_0001c8d4(0x30,iVar22,local_470,(int *)&local_480);
              }
              plVar15 = local_470;
              if ((iVar6 == 0) && (0 < iVar23)) {
                uVar14 = uVar24 & 0xffffffff;
                puVar20 = puVar11;
                do {
                  uVar5 = (int)uVar14 - 1;
                  lVar7 = FUN_0001d2ec(local_460,(char *)puVar20,(longlong)DAT_00020128);
                  iVar6 = (int)lVar7;
                  if (iVar6 == 2) {
                    uVar5 = (int)uVar14 - 2;
                  }
                  uVar14 = (ulonglong)uVar5;
                  if (iVar6 < 1) {
                    uVar21 = 0xffffffff;
                    local_480 = 0xffffffff;
                    plVar15 = local_470;
                    goto LAB_0001cf90;
                  }
                  FUN_0001c884(local_460[0],local_470,(int *)&local_480);
                  puVar20 = (ushort *)((longlong)puVar20 + (longlong)iVar6);
                  plVar15 = local_470;
                } while (0 < (int)uVar5);
              }
              else {
                FUN_0001c92c(puVar11,iVar23,local_470,(int *)&local_480);
              }
              uVar21 = (ulonglong)local_480;
LAB_0001cf90:
              puVar20 = local_450;
              if ((-1 < (int)uVar21) && ((uVar12 & 4) != 0)) {
                FUN_0001c8d4(0x20,iVar22,plVar15,(int *)&local_480);
                uVar21 = (ulonglong)local_480;
                puVar20 = local_450;
              }
              goto LAB_0001d094;
            }
            goto LAB_0001d099;
          }
        }
      }
LAB_0001d0ac:
      uVar1 = *param_2;
    }
  }
  FUN_0001c500(local_48 ^ (ulonglong)auStack_4b8);
  return;
}




/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  FUN_0001c500(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}




bool FUN_0001d280(void)

{
  return DAT_000201e8 == (DAT_00020100 | 1);
}




ulonglong FUN_0001d2a0(ushort param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_0001c870();
    uVar4 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0xffff);
  }
  else {
    plVar1 = param_2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if ((int)*plVar1 < 0) {
      uVar4 = FUN_0001d344((ulonglong)param_1,(longlong)param_2);
    }
    else {
      puVar2 = (ushort *)*param_2;
      *puVar2 = param_1;
      *param_2 = *param_2 + 2;
      uVar4 = CONCAT62((int6)((ulonglong)puVar2 >> 0x10),param_1);
    }
  }
  return uVar4;
}




longlong FUN_0001d2ec(undefined2 *param_1,char *param_2,longlong param_3)

{
  undefined2 uVar1;
  char *local_res10 [3];
  
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    if (*param_2 != '\0') {
      local_res10[0] = param_2;
      uVar1 = RtlAnsiCharToUnicodeChar(local_res10);
      *param_1 = uVar1;
      return (longlong)local_res10[0] - (longlong)param_2;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}




undefined8 FUN_0001d344(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffff;
}




/* Library Function - Single Match
    memcpy
   
   Library: Visual Studio 2019 Release */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (longlong)_Src - (longlong)_Dst;
  if (_Src < _Dst) {
    puVar4 = (undefined8 *)((longlong)_Dst + _Size);
    puVar3 = puVar4;
    if (_Size < 8) goto LAB_0001d584;
    if (((ulonglong)puVar4 & 7) != 0) {
      if (((ulonglong)puVar4 & 1) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -1);
        _Size = _Size - 1;
        *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 2) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -2);
        _Size = _Size - 2;
        *(undefined2 *)puVar4 = *(undefined2 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 4) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -4);
        _Size = _Size - 4;
        *(undefined4 *)puVar4 = *(undefined4 *)(uVar5 + (longlong)puVar4);
      }
    }
    while (uVar6 = _Size >> 5, puVar3 = puVar4, uVar6 != 0) {
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_0001d5c0;
      do {
        iVar2 = 0x20;
        do {
          puVar3 = puVar4;
          iVar2 = iVar2 + -1;
          puVar4 = puVar3 + -0x10;
        } while (iVar2 != 0);
        iVar2 = 0x40;
        puVar3 = puVar3 + 0x1f0;
        do {
          uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
          puVar3[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
          puVar3[-2] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x20) + (longlong)puVar3);
          puVar3[-3] = *(undefined8 *)((uVar5 - 0x18) + (longlong)puVar3);
          puVar3[-4] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x30) + (longlong)puVar3);
          puVar4 = puVar3 + -8;
          puVar3[-5] = *(undefined8 *)((uVar5 - 0x28) + (longlong)puVar3);
          puVar3[-6] = uVar1;
          uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar4);
          iVar2 = iVar2 + -1;
          puVar3[-7] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
          *puVar4 = uVar1;
          puVar3 = puVar4;
        } while (iVar2 != 0);
        _Size = _Size - 0x1000;
      } while (0xfff < _Size);
      LOCK();
      UNLOCK();
    }
    goto LAB_0001d567;
  }
  puVar4 = (undefined8 *)_Dst;
  if (_Size < 8) goto LAB_0001d3e4;
  puVar3 = (undefined8 *)_Dst;
  if (((ulonglong)_Dst & 7) != 0) {
    if (((ulonglong)_Dst & 1) != 0) {
      _Size = _Size - 1;
      *(undefined1 *)_Dst = *(undefined1 *)(uVar5 + (longlong)_Dst);
      puVar3 = (undefined8 *)((longlong)_Dst + 1);
    }
    if (((ulonglong)puVar3 & 2) != 0) {
      _Size = _Size - 2;
      *(undefined2 *)puVar3 = *(undefined2 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 2);
    }
    if (((ulonglong)puVar3 & 4) != 0) {
      _Size = _Size - 4;
      *(undefined4 *)puVar3 = *(undefined4 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    }
  }
  while (uVar6 = _Size >> 5, puVar4 = puVar3, uVar6 != 0) {
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_0001d420;
    do {
      iVar2 = 0x20;
      do {
        puVar4 = puVar3;
        iVar2 = iVar2 + -1;
        puVar3 = puVar4 + 0x10;
      } while (iVar2 != 0);
      iVar2 = 0x40;
      puVar4 = puVar4 + -0x1f0;
      do {
        uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
        *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
        puVar4[1] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x18 + (longlong)puVar4);
        puVar4[2] = *(undefined8 *)(uVar5 + 0x10 + (longlong)puVar4);
        puVar4[3] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x28 + (longlong)puVar4);
        puVar3 = puVar4 + 8;
        puVar4[4] = *(undefined8 *)(uVar5 + 0x20 + (longlong)puVar4);
        puVar4[5] = uVar1;
        uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
        iVar2 = iVar2 + -1;
        puVar4[6] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
        puVar4[7] = uVar1;
        puVar4 = puVar3;
      } while (iVar2 != 0);
      _Size = _Size - 0x1000;
    } while (0xfff < _Size);
    LOCK();
    UNLOCK();
  }
  goto LAB_0001d3c7;
LAB_0001d5c0:
  do {
    uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3 = puVar4 + -4;
    puVar4[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    puVar4[-2] = uVar1;
    uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    uVar6 = uVar6 - 1;
    puVar4[-3] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    *puVar3 = uVar1;
    puVar4 = puVar3;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_0001d567:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_0001d584:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_0001d420:
  do {
    uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    puVar4 = puVar3 + 4;
    *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    puVar3[1] = uVar1;
    uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    uVar6 = uVar6 - 1;
    puVar3[2] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3[3] = uVar1;
    puVar3 = puVar4;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_0001d3c7:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_0001d3e4:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}




/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    uVar4 = (ulonglong)_Buf1 & 7;
    while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
      bVar5 = (byte)*_Buf1 < *(byte *)(lVar3 + (longlong)_Buf1);
      if ((byte)*_Buf1 != *(byte *)(lVar3 + (longlong)_Buf1)) goto LAB_0001d703;
      _Buf1 = (void *)((longlong)_Buf1 + 1);
      _Size = _Size - 1;
      uVar4 = (ulonglong)_Buf1 & 7;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)(lVar3 + (longlong)_Buf1)) goto LAB_0001d774;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)(lVar3 + 8 + (longlong)_Buf1)) {
LAB_0001d770:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_0001d774;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)(lVar3 + 0x10 + (longlong)_Buf1)) {
LAB_0001d76c:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_0001d770;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)(lVar3 + 0x18 + (longlong)_Buf1)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_0001d76c;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)(lVar3 + (longlong)_Buf1)) {
LAB_0001d774:
            uVar4 = *(ulonglong *)((longlong)_Buf1 + lVar3);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    bVar5 = (byte)*_Buf1 < *(byte *)(lVar3 + (longlong)_Buf1);
    if ((byte)*_Buf1 != *(byte *)(lVar3 + (longlong)_Buf1)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_0001d703:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_00020100 == 0) || (DAT_00020100 == 0x2b992ddfa232)) {
    param_3 = 0xffffffffffff;
    DAT_00020100 = (_DAT_fffff78000000320 ^ 0x20100) & 0xffffffffffff;
    if (DAT_00020100 == 0) {
      DAT_00020100 = 0x2b992ddfa232;
    }
  }
  DAT_00020108 = ~DAT_00020100;
  FUN_0001155c(param_1,param_2,param_3,(uint *)0x2b992ddfa232);
  return;
}



