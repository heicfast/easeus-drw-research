
void FUN_00011008(STRSAFE_PCNZWCH param_1,size_t param_2,STRSAFE_LPCWSTR param_3,undefined8 param_4)

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




void FUN_0001105c(STRSAFE_PCNZWCH param_1,ulonglong param_2,STRSAFE_LPCWSTR param_3,
                 undefined8 param_4)

{
  HRESULT HVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  HVar1 = StringValidateDestW(param_1,param_2 >> 1,0);
  if (-1 < HVar1) {
    StringVPrintfWorkerW(param_1,param_2 >> 1,(size_t *)0x0,param_3,(va_list)&local_res20);
  }
  return;
}




void FUN_000110b4(void)

{
  IoDeleteSymbolicLink(&DAT_00014160);
  IoDeleteDevice(DAT_00014170);
  RtlFreeUnicodeString(&DAT_00014150);
                    /* WARNING: Could not recover jumptable at 0x000110ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlFreeUnicodeString(&DAT_00014160);
  return;
}




void FUN_000110f8(undefined8 param_1,longlong param_2)

{
  short *_Src;
  longlong lVar1;
  ushort uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  short *psVar12;
  uint uVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_f8;
  uint local_f0 [2];
  ulonglong local_e8;
  short local_e0;
  undefined2 local_de;
  void *local_d8;
  short local_d0;
  short local_ce;
  void *local_c8;
  wchar_t local_b8;
  ulonglong local_b6 [15];
  ulonglong local_38;
  
  local_38 = DAT_00014100 ^ (ulonglong)auStack_128;
  local_f0[0] = 0;
  local_d8 = (void *)0x0;
  if (((*(longlong *)(param_2 + 0xb8) == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30), lVar1 == 0)) ||
     (*(ushort *)(lVar1 + 0x58) < 2)) {
    iVar7 = -0x3ffffff3;
    goto LAB_000111c3;
  }
  local_e8 = local_e8 & 0xffffffff00000000;
  uVar2 = *(ushort *)(lVar1 + 0x58) >> 1;
  uVar13 = (uint)uVar2;
  bVar3 = false;
  uVar6 = 1;
  if (*(longlong *)(lVar1 + 0x60) == 0) {
    bVar3 = false;
    uVar6 = 0;
LAB_000112bb:
    if (!bVar3) goto LAB_00011197;
    local_d8 = (void *)ExAllocatePoolWithTag(0,*(undefined2 *)(lVar1 + 0x58),0x72647365);
    if (local_d8 == (void *)0x0) {
      iVar7 = -0x3fffff66;
    }
    else {
      iVar7 = uVar6 + 1;
      local_e0 = *(short *)(lVar1 + 0x58) + (short)iVar7 * -2;
      local_de = *(undefined2 *)(lVar1 + 0x58);
      memcpy(local_d8,(void *)((longlong)iVar7 * 2 + *(longlong *)(lVar1 + 0x60)),
             (ulonglong)*(ushort *)(lVar1 + 0x58) + (longlong)iVar7 * -2);
      iVar7 = RtlUnicodeStringToInteger(&local_e0,10,local_f0);
      if (iVar7 == 0) {
        if (local_f0[0] < 100) {
          local_e8 = 0;
          local_f8 = 0;
          local_b8 = L'\0';
          FUN_00011ff0(local_b6,0,0x76);
          local_108 = 0;
          iVar9 = FUN_0001105c(&local_b8,0x78,L"\\Device\\Harddisk%u\\Partition0",
                               (ulonglong)local_f0[0]);
          if (iVar9 == 0) {
            RtlInitUnicodeString(&local_d0,&local_b8);
            iVar9 = IoGetDeviceObjectPointer(&local_d0,0,&local_f8,&local_e8);
            if (iVar9 == 0) {
              ObfReferenceObject(local_e8);
              uVar4 = local_e8;
              *(undefined8 *)(lVar1 + 0x18) = local_f8;
              if ((local_e8 != 0) && (lVar10 = IoGetAttachedDeviceReference(local_e8), lVar10 != 0))
              {
                ObfDereferenceObject(uVar4);
                RtlInitUnicodeString(&local_d0,L"Disk");
                lVar11 = lVar10;
                do {
                  if (*(longlong *)(lVar11 + 8) != 0) {
                    iVar9 = RtlCompareUnicodeString
                                      (*(longlong *)(*(longlong *)(lVar11 + 8) + 0x30) + 0x18,
                                       &local_d0,1);
                    if (iVar9 == 0) break;
                    if (lVar10 != lVar11) {
                      ObfDereferenceObject(lVar11);
                    }
                  }
                  lVar11 = IoGetLowerDeviceObject(lVar11);
                } while (lVar11 != 0);
                if (lVar11 != 0) {
                  ObfDereferenceObject(lVar10);
                  *(longlong *)(lVar1 + 0x20) = lVar11;
                  *(undefined8 *)(param_2 + 0x38) = 0;
                  goto LAB_0001119c;
                }
              }
            }
          }
        }
        goto LAB_00011197;
      }
    }
  }
  else {
    if (1 < uVar13) {
      _Src = (short *)(*(longlong *)(lVar1 + 0x60) + 2);
      psVar12 = _Src;
      do {
        if (*psVar12 == 0x5c) {
          if (uVar6 != 0) {
            local_c8 = (void *)ExAllocatePoolWithTag(0,uVar13 * 2,0x72647365);
            if (local_c8 != (void *)0x0) {
              local_ce = uVar2 * 2;
              local_d0 = (short)(uVar6 - 1) * 2;
              memcpy(local_c8,_Src,(ulonglong)(uVar6 - 1) * 2);
              iVar7 = RtlUnicodeStringToInteger(&local_d0,10,&local_e8);
              if (-1 < iVar7) {
                uVar8 = PsGetCurrentProcessId();
                local_f8._2_1_ = (char)((uint)uVar8 >> 0x10);
                local_f8._1_1_ = (char)((uint)uVar8 >> 8);
                local_f8._3_1_ = (char)((uint)uVar8 >> 0x18);
                cVar5 = local_f8._2_1_ + local_f8._1_1_;
                local_f8._0_1_ = (char)uVar8;
                local_f8._1_1_ = local_f8._1_1_ + (char)local_f8;
                local_f8 = CONCAT62(CONCAT51(CONCAT41(local_f8._4_4_,local_f8._3_1_ + local_f8._2_1_
                                                     ),cVar5),
                                    CONCAT11(local_f8._1_1_,(char)local_f8));
                bVar3 = false;
                if ((int)local_f8 == (int)local_e8) {
                  bVar3 = true;
                }
              }
              ExFreePoolWithTag(local_c8,0);
            }
            goto LAB_000112bb;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        psVar12 = psVar12 + 1;
      } while (uVar6 < uVar13);
    }
LAB_00011197:
    iVar7 = -0x3ffffff3;
  }
LAB_0001119c:
  if (local_d8 != (void *)0x0) {
    ExFreePoolWithTag(local_d8,0);
    local_d8 = (void *)0x0;
    local_e0 = 0;
    local_de = 0;
  }
LAB_000111c3:
  *(int *)(param_2 + 0x30) = iVar7;
  IofCompleteRequest(param_2,0);
  FUN_00011d80(local_38 ^ (ulonglong)auStack_128);
  return;
}




undefined8 FUN_00011488(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_2 + 0xb8) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x20) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    ObfDereferenceObject();
    if (lVar1 != 0) {
      ObfDereferenceObject(lVar1);
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}




undefined8 FUN_000114f4(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_2 + 0x18) != 0) && ((*(byte *)(param_2 + 0x10) & 0x20) != 0)) {
    ExFreePoolWithTag(*(longlong *)(param_2 + 0x18),0);
  }
  while (*(longlong *)(param_2 + 8) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = *puVar1;
    MmUnlockPages(puVar1);
    IoFreeMdl(puVar1);
  }
  if ((*(char *)(param_2 + 0x41) != '\0') && (param_3 != 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    puVar1 = *(undefined8 **)(param_2 + 0x48);
    *puVar1 = *(undefined8 *)(param_2 + 0x30);
    puVar1[1] = uVar2;
    KeSetEvent(param_3,1);
  }
  IoFreeIrp(param_2);
  return 0xc0000016;
}




int FUN_00011594(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_2 + 0xb8);
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x30) == 0)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x20) == 0)) {
    iVar2 = -0x3ffffff3;
  }
  else {
    lVar3 = IoGetAttachedDeviceReference();
    if ((lVar3 == 0) || (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 == 0)) {
      iVar2 = -0x3ffffff3;
    }
    else {
      KeInitializeEvent(local_28,0,0);
      lVar4 = IoBuildDeviceIoControlRequest
                        (*(undefined4 *)(lVar4 + 0x18),lVar3,lVar1,*(undefined4 *)(lVar4 + 0x10),
                         lVar1,*(undefined4 *)(lVar4 + 8),0,local_28,local_38);
      if (lVar4 == 0) {
        iVar2 = -0x3fffff66;
      }
      else {
        iVar2 = IofCallDriver(lVar3,lVar4);
        if (iVar2 == 0x103) {
          KeWaitForSingleObject(local_28,0,0,0,0);
          iVar2 = local_38[0];
        }
        *(undefined8 *)(param_2 + 0x38) = local_30;
      }
    }
    if (lVar3 != 0) {
      ObDereferenceObjectDeferDelete(lVar3);
    }
  }
  *(int *)(param_2 + 0x30) = iVar2;
  IofCompleteRequest(param_2,0);
  return iVar2;
}




undefined8 FUN_000116cc(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}




int FUN_000116f4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  int local_38 [4];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x30) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x20), lVar2 == 0)) {
LAB_00011825:
    iVar4 = -0x3ffffff3;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar5 + 10) & 5) == 0) {
      lVar5 = MmMapLockedPagesSpecifyCache
                        (lVar5,0,1,0,in_stack_ffffffffffffffb8 & 0xffffffff00000000,0x10);
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x18);
    }
    if (lVar5 != 0) {
      local_res10 = *(longlong *)(lVar1 + 0x18);
      if (local_res10 < 0) goto LAB_00011825;
      lVar5 = IoBuildAsynchronousFsdRequest
                        (4,lVar2,lVar5,*(undefined4 *)(lVar1 + 8),&local_res10,local_38);
      if (lVar5 != 0) {
        KeInitializeEvent(local_28,0,0);
        lVar3 = *(longlong *)(lVar5 + 0xb8);
        *(code **)(lVar3 + -0x10) = FUN_000114f4;
        *(undefined1 *)(lVar3 + -0x45) = 0xe0;
        *(undefined1 **)(lVar3 + -8) = local_28;
        iVar4 = IofCallDriver(lVar2,lVar5);
        if (iVar4 == 0x103) {
          KeWaitForSingleObject(local_28,0,0,0,0);
          iVar4 = local_38[0];
        }
        if (iVar4 == 0) {
          *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(*(int *)(lVar1 + 8) << 9);
        }
        goto LAB_0001182a;
      }
    }
    iVar4 = -0x3fffff66;
  }
LAB_0001182a:
  *(int *)(param_2 + 0x30) = iVar4;
  IofCompleteRequest(param_2,0);
  return iVar4;
}




int FUN_00011858(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  int local_38 [4];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x30) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x20), lVar2 == 0)) {
LAB_00011989:
    iVar4 = -0x3ffffff3;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar5 + 10) & 5) == 0) {
      lVar5 = MmMapLockedPagesSpecifyCache
                        (lVar5,0,1,0,in_stack_ffffffffffffffb8 & 0xffffffff00000000,0x10);
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x18);
    }
    if (lVar5 != 0) {
      local_res10 = *(longlong *)(lVar1 + 0x18);
      if (local_res10 < 0) goto LAB_00011989;
      lVar5 = IoBuildAsynchronousFsdRequest
                        (3,lVar2,lVar5,*(undefined4 *)(lVar1 + 8),&local_res10,local_38);
      if (lVar5 != 0) {
        KeInitializeEvent(local_28,0,0);
        lVar3 = *(longlong *)(lVar5 + 0xb8);
        *(code **)(lVar3 + -0x10) = FUN_000114f4;
        *(undefined1 *)(lVar3 + -0x45) = 0xe0;
        *(undefined1 **)(lVar3 + -8) = local_28;
        iVar4 = IofCallDriver(lVar2,lVar5);
        if (iVar4 == 0x103) {
          KeWaitForSingleObject(local_28,0,0,0,0);
          iVar4 = local_38[0];
        }
        if (iVar4 == 0) {
          *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(*(int *)(lVar1 + 8) << 9);
        }
        goto LAB_0001198e;
      }
    }
    iVar4 = -0x3fffff66;
  }
LAB_0001198e:
  *(int *)(param_2 + 0x30) = iVar4;
  IofCompleteRequest(param_2,0);
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000119bc(undefined8 param_1)

{
  wchar_t wVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  STRSAFE_PCNZWCH pwVar5;
  undefined4 local_res8 [2];
  longlong local_res10;
  short local_58;
  ushort local_56;
  void *local_50;
  undefined1 local_48 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  local_38[0] = 0x30;
  local_20 = 0x40;
  local_28 = param_1;
  iVar2 = ZwOpenKey(&local_res10,0xf003f,local_38);
  lVar4 = local_res10;
  if (iVar2 < 0) goto LAB_00011c0b;
  local_res8[0] = 0;
  RtlInitUnicodeString(local_48,L"DeviceName");
  iVar2 = ZwQueryValueKey(lVar4,local_48,2,0,0,local_res8);
  if ((iVar2 == -0x3fffffdd) || (iVar2 == -0x7ffffffb)) {
    lVar3 = ExAllocatePool(1,local_res8[0]);
    if (lVar3 == 0) {
LAB_00011a89:
      iVar2 = -0x3fffff66;
    }
    else {
      iVar2 = ZwQueryValueKey(lVar4,local_48,2,lVar3,local_res8[0],local_res8);
      if (-1 < iVar2) {
        if (((*(int *)(lVar3 + 4) == 1) && (*(uint *)(lVar3 + 8) < 0xffff)) &&
           (2 < *(uint *)(lVar3 + 8))) {
          _Dst = (void *)ExAllocatePool(0,*(undefined4 *)(lVar3 + 8));
          if (_Dst == (void *)0x0) goto LAB_00011a89;
          local_56 = *(ushort *)(lVar3 + 8);
          iVar2 = 0;
          local_50 = _Dst;
          memcpy(_Dst,(void *)(lVar3 + 0xc),(ulonglong)local_56);
          local_58 = local_56 - 2;
        }
        else {
          iVar2 = -0x3ffffff3;
        }
      }
    }
    if (lVar3 != 0) {
      ExFreePoolWithTag(lVar3,0);
    }
  }
  if (-1 < iVar2) {
    DAT_00014152 = 200;
    DAT_00014158 = (STRSAFE_PCNZWCH)ExAllocatePool(1,200);
    if (DAT_00014158 != (STRSAFE_PCNZWCH)0x0) {
      FUN_00011008(DAT_00014158,(ulonglong)DAT_00014152,L"\\Device\\%s",local_50);
      lVar4 = -1;
      pwVar5 = DAT_00014158;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      DAT_00014162 = 200;
      _DAT_00014150 = (~(ushort)lVar4 - 1) * 2;
      DAT_00014168 = (STRSAFE_PCNZWCH)ExAllocatePool(1,200);
      if (DAT_00014168 != (STRSAFE_PCNZWCH)0x0) {
        FUN_00011008(DAT_00014168,(ulonglong)DAT_00014162,L"\\DosDevices\\%s",local_50);
        lVar4 = -1;
        pwVar5 = DAT_00014168;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        _DAT_00014160 = (~(ushort)lVar4 - 1) * 2;
        RtlFreeUnicodeString(&local_58);
        goto LAB_00011c0b;
      }
    }
    iVar2 = -0x3fffff66;
  }
LAB_00011c0b:
  if (local_res10 != 0) {
    ZwClose();
    local_res10 = 0;
  }
  if (iVar2 < 0) {
    RtlFreeUnicodeString(&local_58);
    RtlFreeUnicodeString(&DAT_00014150);
    RtlFreeUnicodeString(&DAT_00014160);
  }
  return iVar2;
}




int FUN_00011c70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_000119bc(param_2);
  if (-1 < iVar1) {
    iVar1 = IoCreateDevice(param_1,0,&DAT_00014150,0x22,0,0,&DAT_00014170);
    if (-1 < iVar1) {
      iVar1 = IoCreateSymbolicLink(&DAT_00014160,&DAT_00014150);
      if (iVar1 < 0) {
        IoDeleteDevice(DAT_00014170);
      }
      else {
        *(uint *)(DAT_00014170 + 0x30) = *(uint *)(DAT_00014170 + 0x30) | 0x10;
        *(code **)(param_1 + 0x70) = FUN_000110f8;
        *(code **)(param_1 + 0x80) = FUN_00011488;
        *(code **)(param_1 + 0xe0) = FUN_00011594;
        *(code **)(param_1 + 0x100) = FUN_000116cc;
        *(code **)(param_1 + 0x88) = FUN_00011858;
        *(code **)(param_1 + 0x90) = FUN_000116f4;
        *(code **)(param_1 + 0x68) = FUN_000110b4;
      }
    }
  }
  return iVar1;
}




void FUN_00011d80(longlong param_1)

{
  if ((param_1 == DAT_00014100) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0xf7,param_1,DAT_00014100,DAT_00014108,0);
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
      goto LAB_00011e3a;
    }
  }
  pszDest[_Count] = L'\0';
  HVar3 = -0x7ffffffb;
  sVar2 = _Count;
LAB_00011e3a:
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
    if (sVar2 != 0) goto LAB_00011e83;
  }
  iVar1 = -0x3ffffff3;
LAB_00011e83:
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




ulonglong FUN_00011ed4(undefined1 *param_1,ulonglong param_2,ushort *param_3,undefined8 param_4,
                      ulonglong *param_5)

{
  ulonglong uVar1;
  undefined1 *local_38;
  int local_30;
  undefined1 *local_28;
  undefined4 local_20;
  
  if ((param_3 == (ushort *)0x0) || ((param_2 != 0 && (param_1 == (undefined1 *)0x0)))) {
    FUN_000120f0();
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
    uVar1 = FUN_00012234((longlong *)&local_38,param_3,param_4,param_5);
    if (param_1 != (undefined1 *)0x0) {
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        FUN_000120e0(0,(longlong)&local_38);
      }
      else {
        *local_38 = 0;
        local_38 = local_38 + 1;
      }
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        FUN_000120e0(0,(longlong)&local_38);
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
  
  uVar1 = FUN_00011ed4((undefined1 *)_Dest,_Count,(ushort *)_Format,0,(ulonglong *)_Args);
  return (int)uVar1;
}




void FUN_00011ff0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

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




undefined8 FUN_000120e0(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffffffff;
}




void FUN_000120f0(void)

{
  DbgPrint("Invalid parameter passed to C runtime function.\n");
  return;
}




void FUN_00012104(ushort param_1,longlong *param_2,int *param_3)

{
  ulonglong uVar1;
  
  if (((*(byte *)(param_2 + 3) & 0x40) == 0) || (param_2[2] != 0)) {
    uVar1 = FUN_00012b20(param_1,param_2);
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




void FUN_00012154(ushort param_1,int param_2,longlong *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_00012104(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}




void FUN_000121ac(ushort *param_1,int param_2,longlong *param_3,int *param_4)

{
  if (((*(byte *)(param_3 + 3) & 0x40) == 0) || (param_3[2] != 0)) {
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        FUN_00012104(*param_1,param_3,param_4);
        param_1 = param_1 + 1;
        if (*param_4 == -1) {
          if (DAT_00014178 != 0x2a) {
            return;
          }
          FUN_00012104(0x3f,param_3,param_4);
        }
      } while (0 < param_2);
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}




void FUN_00012234(longlong *param_1,ushort *param_2,undefined8 param_3,ulonglong *param_4)

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
  
  local_48 = DAT_00014100 ^ (ulonglong)auStack_4b8;
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
    FUN_000120f0();
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
      local_468 = (int)(char)(&DAT_00013160)[(longlong)(int)uVar14 + (longlong)(int)uVar8 * 8] >> 4;
      uVar14 = (ulonglong)local_468;
      if (local_468 == 0) {
LAB_000128f7:
        local_488 = 1;
        FUN_00012104(uVar1,param_1,(int *)&local_480);
        uVar21 = (ulonglong)local_480;
LAB_00012914:
        uVar19 = (ulonglong)local_484;
LAB_00012919:
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
            if (-1 < (int)local_478) goto LAB_0001292c;
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
LAB_00012999:
          local_47c = (uint)uVar17;
          param_2 = puVar20;
        }
        else if (local_468 == 5) {
          if (uVar1 != 0x2a) {
            uVar17 = (ulonglong)((uVar1 - 0x30) + uVar5 * 10);
            goto LAB_00012999;
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
                goto LAB_000128f7;
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
LAB_000123a6:
                uVar12 = (ulonglong)(uVar8 | 0x40);
LAB_000123a9:
                iVar22 = 10;
                goto LAB_000125a1;
              }
              if (uVar1 == 0x43) {
                if ((uVar12 & 0x830) == 0) {
                  uVar12 = (ulonglong)(uVar8 | 0x20);
                }
LAB_00012494:
                local_460[0] = (ushort)*param_4;
                param_4 = param_4 + 1;
                local_488 = 1;
                uVar1 = local_460[0];
                if ((uVar12 & 0x20) != 0) {
                  local_464 = (char)local_460[0];
                  local_463 = 0;
                  lVar7 = FUN_00012b6c(local_448,&local_464,(longlong)DAT_00014128);
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
LAB_00012436:
                puVar11 = (ushort *)*param_4;
                if (uVar5 == 0xffffffff) {
                  uVar17 = 0x7fffffff;
                }
                param_4 = param_4 + 1;
                if ((uVar12 & 0x20) == 0) {
                  if (puVar11 == (ushort *)0x0) {
                    puVar11 = (ushort *)PTR_u__null__00014118;
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
                    puVar11 = (ushort *)PTR_s__null__00014110;
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
                if (uVar1 == 0x58) goto LAB_00012568;
                if (uVar1 == 0x5a) {
                  puVar10 = (ushort *)*param_4;
                  param_4 = param_4 + 1;
                  puVar13 = (ushort *)PTR_s__null__00014110;
                  if ((puVar10 == (ushort *)0x0) ||
                     (puVar11 = *(ushort **)(puVar10 + 4), puVar11 == (ushort *)0x0)) {
                    do {
                      if (uVar9 == 0) break;
                      uVar9 = uVar9 - 1;
                      uVar1 = *puVar13;
                      puVar13 = (ushort *)((longlong)puVar13 + 1);
                    } while ((char)uVar1 != '\0');
                    uVar24 = ~uVar9 - 1;
                    puVar11 = (ushort *)PTR_s__null__00014110;
                  }
                  else {
                    uVar1 = *puVar10;
                    if (puVar10[1] < uVar1) {
LAB_00012a4b:
                      local_498 = 0;
                      FUN_000120f0();
                      break;
                    }
                    if ((uVar8 >> 0xb & 1) == 0) {
                      local_488 = 0;
                    }
                    else {
                      if (((~uVar1 & 1) == 0) || ((~(uint)puVar11 & 1) == 0)) goto LAB_00012a4b;
                      uVar1 = uVar1 >> 1;
                      local_488 = 1;
                    }
                    uVar24 = (ulonglong)uVar1;
                    iVar6 = local_488;
                  }
                }
                else {
                  if (uVar1 == 99) goto LAB_00012494;
                  if (uVar1 == 100) goto LAB_000123a6;
                }
              }
            }
            else {
              if (uVar1 == 0x6e) {
                piVar2 = (int *)*param_4;
                param_4 = param_4 + 1;
                bVar4 = FUN_00012b00();
                if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_00012a4b;
                if ((uVar12 & 0x20) == 0) {
                  *piVar2 = (int)uVar21;
                }
                else {
                  *(short *)piVar2 = (short)uVar21;
                }
                uVar19 = (ulonglong)local_484;
                local_45c = 1;
                iVar6 = local_488;
                goto LAB_000126d8;
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
LAB_00012568:
                  local_458 = 7;
                }
                else {
                  if (uVar1 == 0x73) goto LAB_00012436;
                  if (uVar1 == 0x75) goto LAB_000123a9;
                  if (uVar1 != 0x78) goto LAB_000126d8;
                  local_458 = 0x27;
                }
                iVar22 = 0x10;
                if ((char)uVar12 < '\0') {
                  local_472 = (short)local_458 + 0x51;
                  local_474 = 0x30;
                  uVar18 = 2;
                }
              }
LAB_000125a1:
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
LAB_000126d8:
            if (local_45c == 0) {
              if ((uVar12 & 0x40) != 0) {
                if (((uint)uVar12 >> 8 & 1) == 0) {
                  if ((uVar12 & 1) == 0) {
                    if ((uVar12 & 2) == 0) goto LAB_00012726;
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
LAB_00012726:
              uVar5 = local_484;
              iVar23 = (int)uVar24;
              iVar22 = (local_478 - iVar23) - local_484;
              if ((uVar12 & 0xc) == 0) {
                FUN_00012154(0x20,iVar22,local_470,(int *)&local_480);
              }
              FUN_000121ac(&local_474,uVar5,local_470,(int *)&local_480);
              if (((uVar12 & 8) != 0) && ((uVar12 & 4) == 0)) {
                FUN_00012154(0x30,iVar22,local_470,(int *)&local_480);
              }
              plVar15 = local_470;
              if ((iVar6 == 0) && (0 < iVar23)) {
                uVar14 = uVar24 & 0xffffffff;
                puVar20 = puVar11;
                do {
                  uVar5 = (int)uVar14 - 1;
                  lVar7 = FUN_00012b6c(local_460,(char *)puVar20,(longlong)DAT_00014128);
                  iVar6 = (int)lVar7;
                  if (iVar6 == 2) {
                    uVar5 = (int)uVar14 - 2;
                  }
                  uVar14 = (ulonglong)uVar5;
                  if (iVar6 < 1) {
                    uVar21 = 0xffffffff;
                    local_480 = 0xffffffff;
                    plVar15 = local_470;
                    goto LAB_00012810;
                  }
                  FUN_00012104(local_460[0],local_470,(int *)&local_480);
                  puVar20 = (ushort *)((longlong)puVar20 + (longlong)iVar6);
                  plVar15 = local_470;
                } while (0 < (int)uVar5);
              }
              else {
                FUN_000121ac(puVar11,iVar23,local_470,(int *)&local_480);
              }
              uVar21 = (ulonglong)local_480;
LAB_00012810:
              puVar20 = local_450;
              if ((-1 < (int)uVar21) && ((uVar12 & 4) != 0)) {
                FUN_00012154(0x20,iVar22,plVar15,(int *)&local_480);
                uVar21 = (ulonglong)local_480;
                puVar20 = local_450;
              }
              goto LAB_00012914;
            }
            goto LAB_00012919;
          }
        }
      }
LAB_0001292c:
      uVar1 = *param_2;
    }
  }
  FUN_00011d80(local_48 ^ (ulonglong)auStack_4b8);
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
  FUN_00011d80(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
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




bool FUN_00012b00(void)

{
  return DAT_00014148 == (DAT_00014100 | 1);
}




ulonglong FUN_00012b20(ushort param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_000120f0();
    uVar4 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),0xffff);
  }
  else {
    plVar1 = param_2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    if ((int)*plVar1 < 0) {
      uVar4 = FUN_00012bc4((ulonglong)param_1,(longlong)param_2);
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




longlong FUN_00012b6c(undefined2 *param_1,char *param_2,longlong param_3)

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




undefined8 FUN_00012bc4(undefined8 param_1,longlong param_2)

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
    if (_Size < 8) goto LAB_00012e04;
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
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_00012e40;
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
    goto LAB_00012de7;
  }
  puVar4 = (undefined8 *)_Dst;
  if (_Size < 8) goto LAB_00012c64;
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
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_00012ca0;
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
  goto LAB_00012c47;
LAB_00012e40:
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
LAB_00012de7:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00012e04:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_00012ca0:
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
LAB_00012c47:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00012c64:
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(longlong param_1,undefined8 param_2)

{
  if (((DAT_00014100 == 0) || (DAT_00014100 == 0x2b992ddfa232)) &&
     (DAT_00014100 = (_DAT_fffff78000000320 ^ 0x14100) & 0xffffffffffff, DAT_00014100 == 0)) {
    DAT_00014100 = 0x2b992ddfa232;
  }
  DAT_00014108 = ~DAT_00014100;
  FUN_00011c70(param_1,param_2);
  return;
}



