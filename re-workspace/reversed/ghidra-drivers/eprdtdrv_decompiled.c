
void FUN_00011008(wchar_t *param_1,ulonglong param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  uVar1 = FUN_00012710(param_1,param_2 >> 1,0x7fffffff);
  if (-1 < (int)uVar1) {
    RtlStringVPrintfWorkerW(param_1,param_2 >> 1,(size_t *)0x0,param_3,(va_list)&local_res20);
  }
  return;
}




void FUN_00011060(void)

{
  IoDeleteSymbolicLink(&DAT_00015190);
  IoDeleteDevice(DAT_000151a0);
  RtlFreeUnicodeString(&DAT_00015180);
  RtlFreeUnicodeString(&DAT_00015190);
  DbgPrint("[EPMNtDrv]DriverUnload called\r\n");
  return;
}




void FUN_000110b0(undefined8 param_1,longlong param_2)

{
  ushort *puVar1;
  short *_Src;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  uint uVar14;
  short *psVar15;
  char *pcVar16;
  wchar_t *pwVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_108 [2];
  ulonglong local_100;
  undefined8 local_f8;
  short local_f0;
  ushort local_ee;
  void *local_e8;
  ulonglong local_e0;
  short local_d8;
  ushort local_d6;
  void *local_d0;
  longlong local_c8;
  wchar_t local_b8;
  ulonglong local_b6 [15];
  ulonglong local_38;
  
  local_38 = DAT_00015100 ^ (ulonglong)auStack_138;
  uVar14 = 0;
  local_108[0] = 0;
  local_e0 = local_e0 & 0xffffffff00000000;
  local_d0 = (void *)0x0;
  local_c8 = param_2;
  if ((*(longlong *)(param_2 + 0xb8) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30), lVar3 == 0)) {
    uVar14 = 0xc000000d;
    goto LAB_00011277;
  }
  puVar1 = (ushort *)(lVar3 + 0x58);
  if (*puVar1 < 2) goto LAB_00011277;
  uVar2 = *puVar1;
  bVar4 = false;
  uVar18 = (uint)(uVar2 >> 1);
  uVar6 = 1;
  local_100 = local_100 & 0xffffffff00000000;
  if (*(longlong *)(lVar3 + 0x60) == 0) {
    bVar4 = false;
    uVar6 = uVar14;
LAB_00011244:
    param_2 = local_c8;
    if (!bVar4) goto LAB_00011249;
    bVar4 = false;
    if (puVar1 == (ushort *)0x0) {
LAB_00011398:
      bVar4 = false;
    }
    else {
      uVar14 = (*puVar1 >> 1) - uVar6;
      if (8 < uVar14) {
        uVar18 = 0;
        bVar4 = true;
        pwVar17 = L"\\Volume";
        pwVar11 = (wchar_t *)(*(longlong *)(lVar3 + 0x60) + (longlong)(int)uVar6 * 2);
        do {
          if (*pwVar11 != *pwVar17) goto LAB_00011398;
          uVar18 = uVar18 + 1;
          pwVar11 = pwVar11 + 1;
          pwVar17 = pwVar17 + 1;
        } while (uVar18 < 7);
        uVar14 = uVar14 - 8;
        local_e8 = (void *)ExAllocatePoolWithTag(0,*puVar1,0x72647365);
        if (local_e8 != (void *)0x0) {
          local_f0 = (short)uVar14 * 2;
          local_ee = *puVar1;
          memcpy(local_e8,(void *)(*(longlong *)(lVar3 + 0x60) + 0x10 + (longlong)(int)uVar6 * 2),
                 (ulonglong)uVar14 * 2);
          iVar7 = RtlUnicodeStringToInteger(&local_f0,10,local_108);
          if (iVar7 < 0) {
            local_108[0] = 0;
          }
          ExFreePoolWithTag(local_e8);
        }
      }
    }
    uVar19 = 0;
    if (bVar4) {
      local_e0 = 0;
      local_100 = 0;
      local_b8 = L'\0';
      FUN_000128b0(local_b6,0,0x76);
      iVar7 = FUN_00011008(&local_b8,0x78,L"\\Device\\HarddiskVolume%u",(ulonglong)local_108[0]);
      if (iVar7 == 0) {
        RtlInitUnicodeString(&local_f0,&local_b8);
        iVar7 = IoGetDeviceObjectPointer(&local_f0,0,&local_100,&local_e0);
        if (iVar7 == 0) {
          ObfReferenceObject(local_e0);
          uVar12 = local_e0;
          *(ulonglong *)(lVar3 + 0x18) = local_100;
          if ((local_e0 != 0) && (uVar9 = IoGetAttachedDeviceReference(local_e0), uVar9 != 0)) {
            ObfDereferenceObject(uVar12);
            uVar14 = 0;
LAB_00011753:
            puVar13 = (ulonglong *)ExAllocatePoolWithTag(0,0x10,0x72647365);
            if (puVar13 == (ulonglong *)0x0) {
              uVar14 = 0xc000009a;
            }
            else {
              *puVar13 = uVar9;
              *(int *)(puVar13 + 1) = (int)uVar19;
              *(ulonglong **)(lVar3 + 0x20) = puVar13;
              *(undefined8 *)(param_2 + 0x38) = 0;
            }
            goto LAB_00011251;
          }
        }
        else {
          DbgPrint("[GetVolumeDeviceObejct] %ws open error 0x%x,that\'s it!\r\n",&local_b8,iVar7);
        }
      }
      else {
        DbgPrint("[GetVolumeDeviceObejct] RtlStringCbPrintfW error ,0x%x\r\n",iVar7);
      }
      uVar14 = 0xc000000d;
    }
    else {
      local_d0 = (void *)ExAllocatePoolWithTag(0,*puVar1,0x72647365);
      if (local_d0 == (void *)0x0) {
        uVar14 = 0xc000009a;
      }
      else {
        iVar7 = uVar6 + 1;
        local_d8 = *puVar1 + (short)iVar7 * -2;
        local_d6 = *puVar1;
        memcpy(local_d0,(void *)((longlong)iVar7 * 2 + *(longlong *)(lVar3 + 0x60)),
               (ulonglong)*puVar1 + (longlong)iVar7 * -2);
        uVar14 = RtlUnicodeStringToInteger(&local_d8,10,local_108);
        uVar6 = local_108[0];
        if (uVar14 == 0) {
          if (199 < local_108[0]) goto LAB_00011249;
          local_100 = 0;
          local_f8 = 0;
          local_b8 = L'\0';
          FUN_000128b0(local_b6,0,0x76);
          iVar7 = FUN_00011008(&local_b8,0x78,L"\\Device\\Harddisk%u\\Partition0",(ulonglong)uVar6);
          if (iVar7 == 0) {
            RtlInitUnicodeString(&local_f0,&local_b8);
            iVar7 = IoGetDeviceObjectPointer(&local_f0,0,&local_f8,&local_100);
            if (iVar7 != 0) {
              DbgPrint("[GetDiskDeviceObejct] %ws open error 0x%x,retry \r\n",&local_b8,iVar7);
              local_118 = uVar6;
              iVar7 = FUN_00011008(&local_b8,0x78,L"\\Device\\Harddisk%u\\DR%u",(ulonglong)uVar6);
              if (iVar7 != 0) {
                pcVar16 = "[GetDiskDeviceObejct] RtlStringCbPrintfW 2 error ,0x%x\r\n";
                goto LAB_00011577;
              }
              RtlInitUnicodeString(&local_f0,&local_b8);
              iVar7 = IoGetDeviceObjectPointer(&local_f0,0,&local_f8,&local_100);
              if (iVar7 != 0) {
                DbgPrint("[GetDiskDeviceObejct] %ws open error 0x%x,that\'s it!\r\n",&local_b8,iVar7
                        );
                goto LAB_00011249;
              }
            }
            ObfReferenceObject(local_100);
            uVar12 = local_100;
            *(undefined8 *)(lVar3 + 0x18) = local_f8;
            if ((local_100 != 0) && (uVar10 = IoGetAttachedDeviceReference(local_100), uVar10 != 0))
            {
              ObfDereferenceObject(uVar12);
              local_100 = local_100 & 0xffffffff00000000;
              RtlInitUnicodeString(&local_f0,L"Disk");
              puVar13 = (ulonglong *)ExAllocatePoolWithTag(0,0x200,0x72647365);
              uVar12 = uVar10;
              do {
                uVar9 = uVar12;
                if ((uVar19 != 0) && (uVar10 != uVar19)) {
                  ObfDereferenceObject(uVar19);
                }
                local_100 = local_100 & 0xffffffff00000000;
                FUN_000128b0(puVar13,0,0x200);
                iVar7 = ObQueryNameString(uVar9,puVar13,0x200,&local_100);
                if (((-1 < iVar7) && ((short)*puVar13 != 0)) &&
                   (pwVar11 = wcsstr((wchar_t *)puVar13[1],L"\\Device\\Harddisk"),
                   pwVar11 != (wchar_t *)0x0)) {
                  iVar7 = RtlCompareUnicodeString
                                    (*(longlong *)(*(longlong *)(uVar9 + 8) + 0x30) + 0x18,&local_f0
                                     ,1);
                  uVar19 = (ulonglong)(iVar7 != 0);
                  goto LAB_00011731;
                }
                uVar12 = IoGetLowerDeviceObject(uVar9);
                uVar19 = uVar9;
              } while (uVar12 != 0);
              uVar19 = local_e0 & 0xffffffff;
LAB_00011731:
              ExFreePoolWithTag(puVar13,0);
              if (uVar9 != 0) {
                ObfDereferenceObject(uVar10);
                goto LAB_00011753;
              }
            }
          }
          else {
            pcVar16 = "[GetDiskDeviceObejct] RtlStringCbPrintfW error ,0x%x\r\n";
LAB_00011577:
            DbgPrint(pcVar16,iVar7);
          }
          goto LAB_00011249;
        }
      }
    }
  }
  else {
    if (1 < uVar18) {
      _Src = (short *)(*(longlong *)(lVar3 + 0x60) + 2);
      psVar15 = _Src;
      do {
        if (*psVar15 == 0x5c) {
          if (uVar6 != 0) {
            local_e8 = (void *)ExAllocatePoolWithTag(0,uVar18 * 2,0x72647365);
            if (local_e8 != (void *)0x0) {
              local_ee = (uVar2 >> 1) * 2;
              local_f0 = (short)(uVar6 - 1) * 2;
              memcpy(local_e8,_Src,(ulonglong)(uVar6 - 1) * 2);
              iVar7 = RtlUnicodeStringToInteger(&local_f0,10,&local_100);
              bVar4 = false;
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
                bVar4 = false;
                if ((int)local_f8 == (int)local_100) {
                  bVar4 = true;
                }
              }
              ExFreePoolWithTag(local_e8);
            }
            goto LAB_00011244;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        psVar15 = psVar15 + 1;
      } while (uVar6 < uVar18);
    }
LAB_00011249:
    uVar14 = 0xc000000d;
  }
LAB_00011251:
  if (local_d0 != (void *)0x0) {
    ExFreePoolWithTag(local_d0,0);
    local_d0 = (void *)0x0;
    local_d8 = 0;
    local_d6 = 0;
  }
LAB_00011277:
  *(uint *)(param_2 + 0x30) = uVar14;
  IofCompleteRequest(param_2,0);
  FUN_000125b0(local_38 ^ (ulonglong)auStack_138);
  return;
}




undefined8 FUN_000117b8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x30) + 0x20), plVar2 != (longlong *)0x0)) {
    if (*plVar2 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x18);
      ObfDereferenceObject();
      if (lVar1 != 0) {
        ObfDereferenceObject(lVar1);
      }
    }
    ExFreePoolWithTag(plVar2,0);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}




undefined8 FUN_00011844(undefined8 param_1,longlong param_2,longlong param_3)

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
  if (*(int *)(param_2 + 0x30) < 0) {
    DbgPrint("[FltReadWriteSectorsCompletion] Io error 0x%x,%p\r\n",*(int *)(param_2 + 0x30),param_1
            );
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




int FUN_00011908(longlong param_1)

{
  uint *_Dst;
  int iVar1;
  ushort *puVar2;
  uint local_res8 [2];
  undefined8 local_res10;
  ulonglong local_58 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_58[1] = 0;
  local_res10 = 0;
  local_58[0] = 0;
  local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0xb8) + 8);
  iVar1 = -0x3ffffff3;
  if ((*(int *)(*(longlong *)(param_1 + 0xb8) + 0x10) == 4) && (0x207 < local_res8[0])) {
    _Dst = *(uint **)(param_1 + 0x18);
    local_58[0] = (ulonglong)*_Dst;
    local_48[0] = 0x30;
    local_40 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    iVar1 = NtOpenProcess(&local_res10,0x20000,local_48,local_58);
    if (iVar1 < 0) {
      DbgPrint("[GetProcName] OpenProcess error 0x%x!\r\n",iVar1);
    }
    else {
      puVar2 = (ushort *)ExAllocatePoolWithTag(1,0x400,0x72647365);
      *(ushort **)(puVar2 + 4) = puVar2 + 8;
      *puVar2 = 0;
      puVar2[1] = 0x3f0;
      iVar1 = ZwQueryInformationProcess(local_res10,0x1b,puVar2,0x400,local_res8);
      if (iVar1 < 0) {
        DbgPrint("[GetProcName] QueryInfo error 0x%x!\r\n",iVar1);
      }
      else {
        memcpy(_Dst,*(void **)(puVar2 + 4),(ulonglong)*puVar2);
        *(undefined2 *)((longlong)_Dst + (ulonglong)(*puVar2 >> 1) * 2) = 0;
        *(ulonglong *)(param_1 + 0x38) = (ulonglong)*puVar2 + 2;
      }
      ExFreePoolWithTag(puVar2,0);
      ZwClose(local_res10);
    }
  }
  else {
    DbgPrint("[GetProcName] para error %d,%d!\r\n");
  }
  return iVar1;
}




int FUN_00011a90(undefined8 param_1,void *param_2,longlong *param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined4 local_res20 [2];
  longlong local_28 [2];
  
  local_28[0] = 0;
  local_res20[0] = 0;
  iVar1 = ObReferenceObjectByHandle
                    (param_1,0x80000000,*(undefined8 *)IoFileObjectType_exref,0,local_28,0);
  if (iVar1 < 0) {
    DbgPrint("[GetFileObjName] ObReferenceObjectByHandle %d error 0x%x!\r\n",param_1,iVar1);
  }
  else {
    if (*(longlong *)(local_28[0] + 8) != 0) {
      puVar2 = (ushort *)ExAllocatePoolWithTag(1,0x400,0x72647365);
      if (puVar2 == (ushort *)0x0) {
        iVar1 = -0x3fffff66;
      }
      else {
        iVar1 = ObQueryNameString(*(undefined8 *)(local_28[0] + 8),puVar2,0x400,local_res20);
        if (-1 < iVar1) {
          puVar2[1] = 0x3f0;
          iVar1 = RtlAppendUnicodeStringToString(puVar2,local_28[0] + 0x58);
          if (-1 < iVar1) {
            memcpy(param_2,*(void **)(puVar2 + 4),(ulonglong)*puVar2);
            *(undefined2 *)((longlong)param_2 + (ulonglong)(*puVar2 >> 1) * 2) = 0;
            *param_3 = (ulonglong)*puVar2 + 2;
          }
        }
        ExFreePoolWithTag(puVar2,0);
      }
    }
    ObfDereferenceObject(local_28[0]);
  }
  return iVar1;
}




int FUN_00011bcc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_2 + 0xb8);
  if ((((lVar4 == 0) || (lVar3 = *(longlong *)(lVar4 + 0x30), lVar3 == 0)) ||
      (*(longlong **)(lVar3 + 0x20) == (longlong *)0x0)) || (**(longlong **)(lVar3 + 0x20) == 0)) {
    if (*(int *)(lVar4 + 0x18) == 0x60002400) {
      iVar2 = FUN_00011908(param_2);
    }
    else {
      iVar2 = -0x3ffffff3;
      if (*(int *)(lVar4 + 0x18) == 0x60002404) {
        if ((*(int *)(lVar4 + 0x10) == 4) && (0x207 < *(uint *)(lVar4 + 8))) {
          iVar2 = FUN_00011a90((ulonglong)**(uint **)(param_2 + 0x18),*(uint **)(param_2 + 0x18),
                               (longlong *)(param_2 + 0x38));
        }
        else {
          DbgPrint("[GetFileObjName] para error %d,%d!\r\n");
        }
      }
    }
  }
  else {
    if (*(int *)(lVar4 + 0x18) == 0x60002408) {
      iVar2 = -0x3ffffff3;
      if (*(int *)(lVar4 + 8) == 4) {
        if ((lVar4 == 0) || (lVar3 == 0)) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(lVar3 + 0x20);
        }
        iVar2 = 0;
        **(undefined4 **)(param_2 + 0x18) = *(undefined4 *)(lVar4 + 8);
        *(undefined8 *)(param_2 + 0x38) = 4;
      }
      else {
        DbgPrint("[GetDiskContextMode] para error %d,%d!\r\n");
      }
      *(int *)(param_2 + 0x30) = iVar2;
      goto LAB_00011d88;
    }
    lVar3 = IoGetAttachedDeviceReference();
    if (lVar3 == 0) {
      iVar2 = -0x3ffffff3;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      KeInitializeEvent(local_28,0,0);
      lVar4 = IoBuildDeviceIoControlRequest
                        (*(undefined4 *)(lVar4 + 0x18),lVar3,uVar1,*(undefined4 *)(lVar4 + 0x10),
                         uVar1,*(undefined4 *)(lVar4 + 8),0,local_28,local_38);
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
LAB_00011d88:
  IofCompleteRequest(param_2,0);
  return iVar2;
}




undefined8 FUN_00011dbc(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  IofCompleteRequest(param_2,0);
  return 0;
}




int FUN_00011de4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar10;
  int local_48 [4];
  undefined1 local_38 [32];
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) ||
      (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x30) + 0x20), plVar3 == (longlong *)0x0)) ||
     (lVar4 = *plVar3, lVar4 == 0)) {
    if (*(int *)(lVar2 + 8) == 4) {
      lVar2 = *(longlong *)(param_2 + 8);
      if ((*(byte *)(lVar2 + 10) & 5) == 0) {
        puVar9 = (uint *)MmMapLockedPagesSpecifyCache(lVar2,0,1,0,(ulonglong)uVar10 << 0x20,0x10);
      }
      else {
        puVar9 = *(uint **)(lVar2 + 0x18);
      }
      DAT_00015170 = (ulonglong)*puVar9;
      iVar7 = 0;
      *(undefined8 *)(param_2 + 0x38) = 4;
    }
    else {
      iVar7 = -0x3ffffff3;
    }
  }
  else {
    lVar8 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar8 + 10) & 5) == 0) {
      lVar8 = MmMapLockedPagesSpecifyCache(lVar8,0,1,0,(ulonglong)uVar10 << 0x20,0x10);
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x18);
    }
    if (lVar8 == 0) {
      iVar7 = -0x3fffff66;
    }
    else {
      lVar5 = *(longlong *)(lVar2 + 0x18);
      uVar1 = *(undefined4 *)(lVar2 + 8);
      local_res10 = lVar5;
      if (lVar5 < 0) {
        iVar7 = -0x3ffffff3;
      }
      else {
        lVar8 = IoBuildAsynchronousFsdRequest(4,lVar4,lVar8,uVar1,&local_res10,local_48);
        if (lVar8 == 0) {
          iVar7 = -0x3fffff66;
        }
        else {
          KeInitializeEvent(local_38,0,0);
          lVar6 = *(longlong *)(lVar8 + 0xb8);
          *(code **)(lVar6 + -0x10) = FUN_00011844;
          *(undefined1 *)(lVar6 + -0x45) = 0xe0;
          *(undefined1 **)(lVar6 + -8) = local_38;
          iVar7 = IofCallDriver(lVar4,lVar8);
          if (iVar7 == 0x103) {
            KeWaitForSingleObject(local_38,0,0,0,0);
            iVar7 = local_48[0];
          }
          if (iVar7 == 0) {
            *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(*(int *)(lVar2 + 8) << 9);
            goto LAB_00011fa5;
          }
        }
      }
      DbgPrint("[epmntdrvDispatchWrite] Write error 0x%x,%u,%I64u,0x%x\r\n",
               *(undefined4 *)(param_2 + 0x30),uVar1,lVar5,lVar4);
    }
  }
LAB_00011fa5:
  *(int *)(param_2 + 0x30) = iVar7;
  IofCompleteRequest(param_2,0);
  return iVar7;
}




int FUN_00011fd8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar8;
  int local_38 [4];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((((lVar1 == 0) || (*(longlong *)(lVar1 + 0x30) == 0)) ||
      (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x30) + 0x20), plVar2 == (longlong *)0x0)) ||
     (lVar3 = *plVar2, lVar3 == 0)) {
    if (DAT_00015170 != 0) {
      lVar3 = *(longlong *)(param_2 + 8);
      if ((*(byte *)(lVar3 + 10) & 5) == 0) {
        pvVar7 = (void *)MmMapLockedPagesSpecifyCache(lVar3,0,1,0,(ulonglong)uVar8 << 0x20,0x10);
      }
      else {
        pvVar7 = *(void **)(lVar3 + 0x18);
      }
      if (0x207 < *(uint *)(lVar1 + 8)) {
        iVar5 = FUN_00011a90(DAT_00015170,pvVar7,(longlong *)(param_2 + 0x38));
        goto LAB_00012175;
      }
    }
LAB_00012170:
    iVar5 = -0x3ffffff3;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(lVar6 + 10) & 5) == 0) {
      lVar6 = MmMapLockedPagesSpecifyCache(lVar6,0,1,0,(ulonglong)uVar8 << 0x20,0x10);
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 0x18);
    }
    if (lVar6 != 0) {
      local_res10 = *(longlong *)(lVar1 + 0x18);
      if (local_res10 < 0) goto LAB_00012170;
      lVar6 = IoBuildAsynchronousFsdRequest
                        (3,lVar3,lVar6,*(undefined4 *)(lVar1 + 8),&local_res10,local_38);
      if (lVar6 != 0) {
        KeInitializeEvent(local_28,0,0);
        lVar4 = *(longlong *)(lVar6 + 0xb8);
        *(code **)(lVar4 + -0x10) = FUN_00011844;
        *(undefined1 *)(lVar4 + -0x45) = 0xe0;
        *(undefined1 **)(lVar4 + -8) = local_28;
        iVar5 = IofCallDriver(lVar3,lVar6);
        if (iVar5 == 0x103) {
          KeWaitForSingleObject(local_28,0,0,0,0);
          iVar5 = local_38[0];
        }
        if (iVar5 == 0) {
          *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(*(int *)(lVar1 + 8) << 9);
        }
        goto LAB_00012175;
      }
    }
    iVar5 = -0x3fffff66;
  }
LAB_00012175:
  *(int *)(param_2 + 0x30) = iVar5;
  IofCompleteRequest(param_2,0);
  return iVar5;
}




int FUN_000121a4(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  wchar_t wVar2;
  HRESULT HVar3;
  int iVar4;
  STRSAFE_LPWSTR pwVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  STRSAFE_LPCWSTR pwVar11;
  STRSAFE_LPCWSTR pwVar12;
  size_t local_res10;
  ulonglong in_stack_ffffffffffffffb8;
  
  DAT_00015182 = 0x80;
  pwVar5 = (STRSAFE_LPWSTR)ExAllocatePool(1,0x80);
  uVar1 = DAT_00015182 >> 1;
  DAT_00015188 = pwVar5;
  uVar6 = FUN_00012710(pwVar5,(ulonglong)uVar1,0x7fffffff);
  if (-1 < (int)uVar6) {
    in_stack_ffffffffffffffb8 = 0;
    StringCopyWorkerW(pwVar5,(ulonglong)uVar1,(size_t *)0x0,L"\\Device\\",0x7ffffffe);
  }
  lVar7 = -1;
  pwVar12 = DAT_00015188;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    wVar2 = *pwVar12;
    pwVar12 = pwVar12 + 1;
  } while (wVar2 != L'\0');
  DAT_00015192 = 0x80;
  DAT_00015180 = (~(ushort)lVar7 - 1) * 2;
  pwVar5 = (STRSAFE_LPWSTR)ExAllocatePool(1);
  uVar1 = DAT_00015192 >> 1;
  DAT_00015198 = pwVar5;
  uVar6 = FUN_00012710(pwVar5,(ulonglong)uVar1,0x7fffffff);
  if (-1 < (int)uVar6) {
    in_stack_ffffffffffffffb8 = 0;
    StringCopyWorkerW(pwVar5,(ulonglong)uVar1,(size_t *)0x0,L"\\DosDevices\\",0x7ffffffe);
  }
  pwVar12 = DAT_00015188;
  lVar7 = -1;
  pwVar11 = DAT_00015198;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    wVar2 = *pwVar11;
    pwVar11 = pwVar11 + 1;
  } while (wVar2 != L'\0');
  DAT_00015190 = (~(ushort)lVar7 - 1) * 2;
  if (((param_2 != (ushort *)0x0) && (*(longlong *)(param_2 + 4) != 0)) && (2 < *param_2)) {
    uVar8 = *param_2 >> 1;
    uVar1 = uVar8;
    do {
      uVar9 = uVar1;
      uVar1 = uVar9 - 1;
      if (uVar1 == 0) break;
    } while (*(short *)(*(longlong *)(param_2 + 4) + (ulonglong)uVar1 * 2) != 0x5c);
    if (uVar9 < uVar8) {
      do {
        wVar2 = RtlUpcaseUnicodeChar
                          (*(undefined2 *)(*(longlong *)(param_2 + 4) + (ulonglong)uVar9 * 2));
        DAT_00015188[DAT_00015180 >> 1] = wVar2;
        DAT_00015180 = DAT_00015180 + 2;
        DAT_00015198[DAT_00015190 >> 1] = wVar2;
        DAT_00015190 = DAT_00015190 + 2;
        if ((DAT_00015182 <= DAT_00015180) || (DAT_00015192 <= DAT_00015190)) break;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
      goto LAB_00012486;
    }
  }
  uVar10 = (ulonglong)(longlong)(int)((uint)DAT_00015182 - (uint)DAT_00015180) >> 1;
  HVar3 = StringValidateDestAndLengthW(DAT_00015188,uVar10,&local_res10,0x7fffffff);
  if (-1 < HVar3) {
    in_stack_ffffffffffffffb8 = 0;
    StringCopyWorkerW(pwVar12 + local_res10,uVar10 - local_res10,(size_t *)0x0,L"EPMNTDRV",
                      0x7fffffff);
  }
  pwVar12 = DAT_00015198;
  lVar7 = -1;
  pwVar11 = DAT_00015188;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    wVar2 = *pwVar11;
    pwVar11 = pwVar11 + 1;
  } while (wVar2 != L'\0');
  DAT_00015180 = (~(ushort)lVar7 - 1) * 2;
  uVar10 = (ulonglong)(longlong)(int)((uint)DAT_00015192 - (uint)DAT_00015190) >> 1;
  HVar3 = StringValidateDestAndLengthW(DAT_00015198,uVar10,&local_res10,0x7fffffff);
  if (-1 < HVar3) {
    in_stack_ffffffffffffffb8 = 0;
    StringCopyWorkerW(pwVar12 + local_res10,uVar10 - local_res10,(size_t *)0x0,L"EPMNTDRV",
                      0x7fffffff);
  }
  lVar7 = -1;
  pwVar12 = DAT_00015198;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    wVar2 = *pwVar12;
    pwVar12 = pwVar12 + 1;
  } while (wVar2 != L'\0');
  DAT_00015190 = (~(ushort)lVar7 - 1) * 2;
LAB_00012486:
  iVar4 = IoCreateDevice(param_1,0,&DAT_00015180,0x22,in_stack_ffffffffffffffb8 & 0xffffffff00000000
                         ,0,&DAT_000151a0);
  DbgPrint("[EPMNtDrv]IoCreateDevice ret,0x%x,%wZ\r\n",iVar4,&DAT_00015180);
  if (-1 < iVar4) {
    iVar4 = IoCreateSymbolicLink(&DAT_00015190,&DAT_00015180);
    DbgPrint("[EPMNtDrv]IoCreateSymbolicLink ret,0x%x,%wZ\r\n",iVar4,&DAT_00015190);
    if (iVar4 < 0) {
      IoDeleteDevice(DAT_000151a0);
    }
    else {
      *(uint *)(DAT_000151a0 + 0x30) = *(uint *)(DAT_000151a0 + 0x30) | 0x10;
      *(code **)(param_1 + 0x70) = FUN_000110b0;
      *(code **)(param_1 + 0x80) = FUN_000117b8;
      *(code **)(param_1 + 0xe0) = FUN_00011bcc;
      *(code **)(param_1 + 0x100) = FUN_00011dbc;
      *(code **)(param_1 + 0x88) = FUN_00011fd8;
      *(code **)(param_1 + 0x90) = FUN_00011de4;
      *(code **)(param_1 + 0x68) = FUN_00011060;
    }
  }
  DbgPrint("[EPMNtDrv]DriverEntry ret,0x%x\r\n",iVar4);
  return iVar4;
}




void FUN_000125b0(longlong param_1)

{
  if ((param_1 == DAT_00015100) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_000125d8(param_1);
  return;
}




void FUN_000125d8(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0xf7,param_1,DAT_00015100,DAT_00015108,0);
}




/* Library Function - Single Match
    RtlStringVPrintfWorkerW
   
   Library: Visual Studio 2019 Release */

undefined8
RtlStringVPrintfWorkerW
          (wchar_t *param_1,longlong param_2,size_t *param_3,wchar_t *param_4,va_list param_5)

{
  size_t _Count;
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  _Count = param_2 - 1;
  uVar3 = 0;
  iVar1 = _vsnwprintf(param_1,_Count,param_4,param_5);
  if (iVar1 < 0) {
LAB_00012663:
    uVar3 = 0x80000005;
  }
  else {
    sVar2 = (size_t)iVar1;
    if (_Count < sVar2) goto LAB_00012663;
    if (sVar2 != _Count) goto LAB_0001266e;
  }
  param_1[_Count] = L'\0';
  sVar2 = _Count;
LAB_0001266e:
  if (param_3 != (size_t *)0x0) {
    *param_3 = sVar2;
  }
  return uVar3;
}




/* Library Function - Single Match
    StringCopyWorkerW
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2015 Release */

HRESULT __stdcall
StringCopyWorkerW(STRSAFE_LPWSTR pszDest,size_t cchDest,size_t *pcchNewDestLength,
                 STRSAFE_PCNZWCH pszSrc,size_t cchToCopy)

{
  HRESULT HVar1;
  size_t sVar2;
  
  sVar2 = 0;
  HVar1 = 0;
  if (cchDest != 0) {
    do {
      if ((cchToCopy == 0) || (*pszSrc == L'\0')) break;
      cchDest = cchDest - 1;
      *pszDest = *pszSrc;
      pszSrc = pszSrc + 1;
      pszDest = pszDest + 1;
      cchToCopy = cchToCopy - 1;
      sVar2 = sVar2 + 1;
    } while (cchDest != 0);
    if (cchDest != 0) goto LAB_000126f4;
  }
  pszDest = pszDest + -1;
  HVar1 = -0x7ffffffb;
  sVar2 = sVar2 - 1;
LAB_000126f4:
  *pszDest = L'\0';
  if (pcchNewDestLength != (size_t *)0x0) {
    *pcchNewDestLength = sVar2;
  }
  return HVar1;
}




undefined8 FUN_00012710(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 == 0) || (param_3 < param_2)) {
    uVar1 = 0xc000000d;
  }
  return uVar1;
}




/* Library Function - Single Match
    StringLengthWorkerW
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2015 Release */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz,size_t cchMax,size_t *pcchLength)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = cchMax;
  if (cchMax != 0) {
    do {
      if (*psz == L'\0') break;
      psz = psz + 1;
      sVar1 = sVar1 - 1;
    } while (sVar1 != 0);
    if (sVar1 != 0) goto LAB_00012750;
  }
  iVar2 = -0x3ffffff3;
LAB_00012750:
  if (pcchLength != (size_t *)0x0) {
    if (-1 < iVar2) {
      *pcchLength = cchMax - sVar1;
      return iVar2;
    }
    *pcchLength = 0;
  }
  return iVar2;
}




/* Library Function - Single Match
    StringValidateDestAndLengthW
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2015 Release */

HRESULT __stdcall
StringValidateDestAndLengthW
          (STRSAFE_LPCWSTR pszDest,size_t cchDest,size_t *pcchDestLength,size_t cchMax)

{
  int iVar1;
  
  iVar1 = 0;
  if ((cchDest == 0) || (cchMax < cchDest)) {
    iVar1 = -0x3ffffff3;
  }
  if (iVar1 < 0) {
    *pcchDestLength = 0;
  }
  else {
    iVar1 = StringLengthWorkerW(pszDest,cchDest,pcchDestLength);
  }
  return iVar1;
}




/* Library Function - Single Match
    _vsnwprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  FILE local_38;
  
  if ((_Format == (wchar_t *)0x0) || ((_MaxCount != 0 && (_DstBuf == (wchar_t *)0x0)))) {
    FUN_000129b0();
    iVar1 = -1;
  }
  else {
    local_38._flag = 0x42;
    if (_MaxCount < 0x40000000) {
      local_38._cnt = (int)_MaxCount * 2;
    }
    else {
      local_38._cnt = 0x7fffffff;
    }
    local_38._ptr = (char *)_DstBuf;
    local_38._base = (char *)_DstBuf;
    iVar1 = _woutput_l(&local_38,_Format,_Locale,_ArgList);
    if (_DstBuf != (wchar_t *)0x0) {
      local_38._cnt = local_38._cnt + -1;
      if (local_38._cnt < 0) {
        FUN_000129a0(0,(longlong)&local_38);
      }
      else {
        *local_38._ptr = 0;
        local_38._ptr = (char *)((longlong)local_38._ptr + 1);
      }
      local_38._cnt = local_38._cnt + -1;
      if (local_38._cnt < 0) {
        FUN_000129a0(0,(longlong)&local_38);
      }
      else {
        *local_38._ptr = 0;
      }
    }
  }
  return iVar1;
}




/* Library Function - Single Match
    _vsnwprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = _vsnwprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}




void FUN_000128b0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

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




undefined8 FUN_000129a0(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffffffff;
}




void FUN_000129b0(void)

{
  return;
}




/* Library Function - Single Match
    write_char
   
   Library: Visual Studio 2019 Release */

void write_char(wchar_t param_1,FILE *param_2,int *param_3)

{
  wint_t wVar1;
  
  if (((param_2->_flag & 0x40) == 0) || (param_2->_base != (char *)0x0)) {
    wVar1 = _fputwc_nolock(param_1,param_2);
    if ((wVar1 == 0xffff) && ((param_2->_flag & 0x20) != 0)) {
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




/* Library Function - Single Match
    write_multi_char
   
   Library: Visual Studio 2019 Release */

void write_multi_char(wchar_t param_1,int param_2,FILE *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      write_char(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}




/* Library Function - Single Match
    write_string
   
   Library: Visual Studio 2019 Release */

void write_string(wchar_t *param_1,int param_2,FILE *param_3,int *param_4)

{
  if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char(*param_1,param_3,param_4);
        param_1 = param_1 + 1;
        if (*param_4 == -1) {
          if (DAT_00015178 != 0x2a) {
            return;
          }
          write_char(L'?',param_3,param_4);
        }
      } while (0 < param_2);
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}




/* Library Function - Single Match
    _woutput_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _woutput_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  wchar_t wVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FILE *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_488;
  uint local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  wchar_t local_474;
  short local_472;
  FILE *local_470;
  uint local_468;
  char local_464;
  undefined1 local_463;
  wchar_t local_460 [2];
  int local_45c;
  undefined4 local_458;
  wchar_t *local_450;
  wchar_t local_448 [255];
  undefined2 local_249;
  ulonglong local_48;
  
  local_48 = DAT_00015100 ^ (ulonglong)auStack_4b8;
  uVar13 = 0;
  local_458 = 0;
  local_478 = 0;
  local_47c = 0;
  local_484 = 0;
  local_45c = 0;
  local_488 = 0;
  local_470 = _File;
  if ((_File == (FILE *)0x0) || (_Format == (wchar_t *)0x0)) {
    local_498 = 0;
    FUN_000129b0();
  }
  else {
    wVar1 = *_Format;
    local_480 = 0;
    uVar11 = uVar13;
    uVar15 = uVar13;
    uVar16 = uVar13;
    uVar18 = uVar13;
    uVar20 = uVar13;
    uVar23 = uVar13;
    pwVar10 = local_450;
    while (wVar1 != L'\0') {
      uVar8 = 0xffffffffffffffff;
      uVar17 = (uint)uVar18;
      uVar12 = (uint)uVar16;
      pwVar19 = _Format + 1;
      local_450 = pwVar19;
      if ((int)uVar20 < 0) break;
      if ((ushort)(wVar1 + L'￠') < 0x59) {
        uVar7 = (int)*(char *)((longlong)L"(null)" + (ulonglong)(ushort)wVar1) & 0xf;
      }
      else {
        uVar7 = 0;
      }
      local_468 = (int)(char)(&DAT_00014190)[(longlong)(int)uVar13 + (longlong)(int)uVar7 * 8] >> 4;
      uVar13 = (ulonglong)local_468;
      if (local_468 == 0) {
LAB_0001320d:
        local_488 = 1;
        write_char(wVar1,_File,(int *)&local_480);
        uVar20 = (ulonglong)local_480;
LAB_0001322a:
        uVar18 = (ulonglong)local_484;
LAB_0001322f:
        uVar13 = (ulonglong)local_468;
        uVar15 = (ulonglong)local_478;
        uVar16 = (ulonglong)local_47c;
        _File = local_470;
        _Format = pwVar19;
      }
      else if (local_468 == 1) {
        uVar15 = 0;
        uVar16 = 0xffffffff;
        local_47c = 0xffffffff;
        local_45c = 0;
        local_478 = 0;
        local_484 = 0;
        uVar11 = 0;
        local_488 = 0;
        uVar18 = uVar15;
        _Format = pwVar19;
      }
      else {
        uVar7 = (uint)uVar11;
        if (local_468 == 2) {
          if (wVar1 == L' ') {
            uVar11 = (ulonglong)(uVar7 | 2);
            _Format = pwVar19;
          }
          else if (wVar1 == L'#') {
            uVar11 = (ulonglong)(uVar7 | 0x80);
            _Format = pwVar19;
          }
          else if (wVar1 == L'+') {
            uVar11 = (ulonglong)(uVar7 | 1);
            _Format = pwVar19;
          }
          else if (wVar1 == L'-') {
            uVar11 = (ulonglong)(uVar7 | 4);
            _Format = pwVar19;
          }
          else {
            _Format = pwVar19;
            if (wVar1 == L'0') {
              uVar11 = (ulonglong)(uVar7 | 8);
            }
          }
        }
        else if (local_468 == 3) {
          if (wVar1 == L'*') {
            local_478 = *(uint *)_ArgList;
            uVar15 = (ulonglong)local_478;
            _ArgList = (va_list)((longlong)_ArgList + 8);
            _Format = pwVar19;
            if (-1 < (int)local_478) goto LAB_00013242;
            uVar11 = (ulonglong)(uVar7 | 4);
            local_478 = -local_478;
          }
          else {
            local_478 = ((ushort)wVar1 - 0x30) + (int)uVar15 * 10;
          }
          uVar15 = (ulonglong)local_478;
          _Format = pwVar19;
        }
        else if (local_468 == 4) {
          uVar16 = 0;
          local_47c = 0;
          _Format = pwVar19;
        }
        else if (local_468 == 5) {
          if (wVar1 == L'*') {
            local_47c = *(uint *)_ArgList;
            uVar16 = (ulonglong)local_47c;
            _ArgList = (va_list)((longlong)_ArgList + 8);
            _Format = pwVar19;
            if ((int)local_47c < 0) {
              uVar16 = 0xffffffff;
              local_47c = 0xffffffff;
            }
          }
          else {
            local_47c = ((ushort)wVar1 - 0x30) + uVar12 * 10;
            uVar16 = (ulonglong)local_47c;
            _Format = pwVar19;
          }
        }
        else if (local_468 == 6) {
          if (wVar1 == L'I') {
            uVar11 = (ulonglong)(uVar7 | 0x8000);
            if ((*pwVar19 == L'6') && (_Format[2] == L'4')) {
              uVar11 = (ulonglong)(uVar7 | 0x8000);
              _Format = _Format + 3;
            }
            else if ((*pwVar19 == L'3') && (_Format[2] == L'2')) {
              uVar11 = (ulonglong)(uVar7 & 0xffff7fff);
              _Format = _Format + 3;
            }
            else {
              _Format = pwVar19;
              if (((((*pwVar19 != L'd') && (*pwVar19 != L'i')) && (*pwVar19 != L'o')) &&
                  ((*pwVar19 != L'u' && (*pwVar19 != L'x')))) && (*pwVar19 != L'X')) {
                local_468 = 0;
                goto LAB_0001320d;
              }
            }
          }
          else if (wVar1 == L'h') {
            uVar11 = (ulonglong)(uVar7 | 0x20);
            _Format = pwVar19;
          }
          else if (wVar1 == L'l') {
            if (*pwVar19 == L'l') {
              uVar11 = (ulonglong)(uVar7 | 0x1000);
              _Format = _Format + 2;
            }
            else {
              uVar11 = (ulonglong)(uVar7 | 0x10);
              _Format = pwVar19;
            }
          }
          else {
            _Format = pwVar19;
            if (wVar1 == L'w') {
              uVar11 = (ulonglong)(uVar7 | 0x800);
            }
          }
        }
        else {
          _Format = pwVar19;
          if (local_468 == 7) {
            iVar6 = local_488;
            if ((ushort)wVar1 < 0x6a) {
              if (wVar1 == L'i') {
LAB_00012dee:
                uVar11 = (ulonglong)(uVar7 | 0x40);
LAB_00012df1:
                iVar21 = 10;
                goto LAB_00012eb1;
              }
              if (wVar1 == L'C') {
                if ((uVar11 & 0x830) == 0) {
                  uVar11 = (ulonglong)(uVar7 | 0x20);
                }
LAB_00012d8b:
                local_460[0] = *(wchar_t *)_ArgList;
                _ArgList = (va_list)((longlong)_ArgList + 8);
                local_488 = 1;
                wVar1 = local_460[0];
                if ((uVar11 & 0x20) != 0) {
                  local_464 = (char)local_460[0];
                  local_463 = 0;
                  iVar6 = mbtowc(local_448,&local_464,(longlong)DAT_00015128);
                  uVar18 = (ulonglong)local_484;
                  wVar1 = local_448[0];
                  if (iVar6 < 0) {
                    local_45c = 1;
                  }
                }
                local_448[0] = wVar1;
                pwVar10 = local_448;
                uVar23 = 1;
                iVar6 = 1;
              }
              else if (wVar1 == L'S') {
                if ((uVar11 & 0x830) == 0) {
                  uVar11 = (ulonglong)(uVar7 | 0x20);
                }
LAB_00012d26:
                pwVar10 = *(wchar_t **)_ArgList;
                if (uVar12 == 0xffffffff) {
                  uVar16 = 0x7fffffff;
                }
                _ArgList = (va_list)((longlong)_ArgList + 8);
                uVar13 = 0;
                if ((uVar11 & 0x20) == 0) {
                  if (pwVar10 == (wchar_t *)0x0) {
                    pwVar10 = (wchar_t *)PTR_u__null__00015118;
                  }
                  local_488 = 1;
                  for (pwVar9 = pwVar10;
                      ((int)uVar16 != 0 && (uVar16 = (ulonglong)((int)uVar16 - 1), *pwVar9 != L'\0')
                      ); pwVar9 = pwVar9 + 1) {
                  }
                  uVar23 = (longlong)pwVar9 - (longlong)pwVar10 >> 1 & 0xffffffff;
                  iVar6 = 1;
                }
                else {
                  if (pwVar10 == (wchar_t *)0x0) {
                    pwVar10 = (wchar_t *)PTR_s__null__00015110;
                  }
                  pwVar9 = pwVar10;
                  uVar23 = 0;
                  if (0 < (int)uVar16) {
                    do {
                      uVar23 = uVar13;
                      if ((char)*pwVar9 == '\0') break;
                      uVar12 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar12;
                      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
                      uVar23 = uVar13;
                    } while ((int)uVar12 < (int)uVar16);
                  }
                }
              }
              else {
                if (wVar1 == L'X') goto LAB_00012e6f;
                if (wVar1 == L'Z') {
                  puVar3 = *(ushort **)_ArgList;
                  _ArgList = (va_list)((longlong)_ArgList + 8);
                  pwVar9 = (wchar_t *)PTR_s__null__00015110;
                  if ((puVar3 == (ushort *)0x0) ||
                     (pwVar10 = *(wchar_t **)(puVar3 + 4), pwVar10 == (wchar_t *)0x0)) {
                    do {
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      wVar1 = *pwVar9;
                      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
                    } while ((char)wVar1 != '\0');
                    pwVar10 = (wchar_t *)PTR_s__null__00015110;
                    uVar23 = ~uVar8 - 1;
                  }
                  else {
                    uVar2 = *puVar3;
                    if (puVar3[1] < uVar2) {
LAB_0001337a:
                      local_498 = 0;
                      FUN_000129b0();
                      break;
                    }
                    if ((uVar7 >> 0xb & 1) == 0) {
                      local_488 = 0;
                      uVar23 = (ulonglong)uVar2;
                      iVar6 = 0;
                    }
                    else {
                      if (((~uVar2 & 1) == 0) || ((~(uint)pwVar10 & 1) == 0)) goto LAB_0001337a;
                      local_488 = 1;
                      uVar23 = (ulonglong)(uVar2 >> 1);
                      iVar6 = 1;
                    }
                  }
                }
                else {
                  if (wVar1 == L'c') goto LAB_00012d8b;
                  if (wVar1 == L'd') goto LAB_00012dee;
                }
              }
            }
            else {
              if (wVar1 == L'n') {
                piVar4 = *(int **)_ArgList;
                _ArgList = (va_list)((longlong)_ArgList + 8);
                iVar6 = _get_printf_count_output();
                if (iVar6 == 0) goto LAB_0001337a;
                if ((uVar11 & 0x20) == 0) {
                  *piVar4 = (int)uVar20;
                }
                else {
                  *(short *)piVar4 = (short)uVar20;
                }
                uVar18 = (ulonglong)local_484;
                local_45c = 1;
                iVar6 = local_488;
                goto LAB_00012c78;
              }
              if (wVar1 == L'o') {
                iVar21 = 8;
                if ((char)uVar11 < '\0') {
                  uVar11 = (ulonglong)(uVar7 | 0x200);
                }
              }
              else {
                if (wVar1 == L'p') {
                  uVar12 = 0x10;
                  uVar11 = (ulonglong)(uVar7 | 0x8000);
LAB_00012e6f:
                  local_458 = 7;
                }
                else {
                  if (wVar1 == L's') goto LAB_00012d26;
                  if (wVar1 == L'u') goto LAB_00012df1;
                  if (wVar1 != L'x') goto LAB_00012c78;
                  local_458 = 0x27;
                }
                iVar21 = 0x10;
                if ((char)uVar11 < '\0') {
                  local_472 = (short)local_458 + 0x51;
                  local_474 = L'0';
                  uVar17 = 2;
                }
              }
LAB_00012eb1:
              uVar7 = (uint)uVar11;
              if ((uVar7 >> 0xf == 0) && ((uVar7 >> 0xc & 1) == 0)) {
                if ((uVar11 & 0x20) == 0) {
                  if ((uVar11 & 0x40) == 0) {
                    uVar13 = (ulonglong)*(uint *)_ArgList;
                  }
                  else {
                    uVar13 = (ulonglong)(int)*(uint *)_ArgList;
                  }
                }
                else if ((uVar11 & 0x40) == 0) {
                  uVar13 = (ulonglong)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar13 = (ulonglong)*(wchar_t *)_ArgList;
                }
              }
              else {
                uVar13 = *(ulonglong *)_ArgList;
              }
              _ArgList = (va_list)((longlong)_ArgList + 8);
              if (((uVar11 & 0x40) != 0) && ((longlong)uVar13 < 0)) {
                uVar13 = -uVar13;
                uVar11 = (ulonglong)(uVar7 | 0x100);
              }
              uVar7 = (uint)uVar11;
              if ((uVar7 >> 0xf == 0) && ((uVar7 >> 0xc & 1) == 0)) {
                uVar13 = uVar13 & 0xffffffff;
              }
              if ((int)uVar12 < 0) {
                uVar12 = 1;
              }
              else {
                uVar11 = (ulonglong)(uVar7 & 0xfffffff7);
                if (0x200 < (int)uVar12) {
                  uVar12 = 0x200;
                }
              }
              pwVar9 = &local_249;
              local_484 = -(uint)(uVar13 != 0) & uVar17;
              while ((local_47c = uVar12 - 1, 0 < (int)uVar12 || (uVar13 != 0))) {
                uVar12 = (int)(uVar13 % (ulonglong)(longlong)iVar21) + 0x30;
                cVar5 = (char)uVar12;
                if (0x39 < uVar12) {
                  cVar5 = cVar5 + (char)local_458;
                }
                *(char *)pwVar9 = cVar5;
                pwVar9 = (wchar_t *)((longlong)pwVar9 + -1);
                uVar13 = uVar13 / (ulonglong)(longlong)iVar21;
                uVar12 = local_47c;
              }
              uVar18 = (ulonglong)local_484;
              uVar12 = (int)&local_249 - (int)pwVar9;
              pwVar10 = (wchar_t *)((longlong)pwVar9 + 1);
              uVar23 = (ulonglong)uVar12;
              if ((((uint)uVar11 >> 9 & 1) != 0) && ((uVar12 == 0 || (*(char *)pwVar10 != '0')))) {
                *(char *)pwVar9 = '0';
                pwVar10 = pwVar9;
                uVar23 = (ulonglong)(uVar12 + 1);
              }
            }
LAB_00012c78:
            if (local_45c == 0) {
              if ((uVar11 & 0x40) != 0) {
                if (((uint)uVar11 >> 8 & 1) == 0) {
                  if ((uVar11 & 1) == 0) {
                    if ((uVar11 & 2) == 0) goto LAB_0001302e;
                    local_474 = L' ';
                  }
                  else {
                    local_474 = L'+';
                  }
                }
                else {
                  local_474 = L'-';
                }
                local_484 = 1;
              }
LAB_0001302e:
              uVar12 = local_484;
              iVar22 = (int)uVar23;
              iVar21 = (local_478 - iVar22) - local_484;
              if ((uVar11 & 0xc) == 0) {
                write_multi_char(L' ',iVar21,local_470,(int *)&local_480);
              }
              write_string(&local_474,uVar12,local_470,(int *)&local_480);
              if (((uVar11 & 8) != 0) && ((uVar11 & 4) == 0)) {
                write_multi_char(L'0',iVar21,local_470,(int *)&local_480);
              }
              pFVar14 = local_470;
              if ((iVar6 == 0) && (0 < iVar22)) {
                uVar13 = uVar23 & 0xffffffff;
                pwVar19 = pwVar10;
                do {
                  uVar12 = (int)uVar13 - 1;
                  iVar6 = mbtowc(local_460,(char *)pwVar19,(longlong)DAT_00015128);
                  if (iVar6 == 2) {
                    uVar12 = (int)uVar13 - 2;
                  }
                  uVar13 = (ulonglong)uVar12;
                  if (iVar6 < 1) {
                    uVar20 = 0xffffffff;
                    local_480 = 0xffffffff;
                    pFVar14 = local_470;
                    goto LAB_0001311d;
                  }
                  write_char(local_460[0],local_470,(int *)&local_480);
                  pwVar19 = (wchar_t *)((longlong)pwVar19 + (longlong)iVar6);
                  pFVar14 = local_470;
                } while (0 < (int)uVar12);
              }
              else {
                write_string(pwVar10,iVar22,local_470,(int *)&local_480);
              }
              uVar20 = (ulonglong)local_480;
LAB_0001311d:
              pwVar19 = local_450;
              if ((-1 < (int)uVar20) && ((uVar11 & 4) != 0)) {
                write_multi_char(L' ',iVar21,pFVar14,(int *)&local_480);
                uVar20 = (ulonglong)local_480;
                pwVar19 = local_450;
              }
              goto LAB_0001322a;
            }
            goto LAB_0001322f;
          }
        }
      }
LAB_00013242:
      wVar1 = *_Format;
    }
  }
  iVar6 = FUN_000125b0(local_48 ^ (ulonglong)auStack_4b8);
  return iVar6;
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
  FUN_000125b0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
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




/* Library Function - Single Match
    _get_printf_count_output
   
   Library: Visual Studio 2019 Release */

int __cdecl _get_printf_count_output(void)

{
  return (int)(DAT_00015168 == (DAT_00015100 | 1));
}




/* Library Function - Single Match
    _fputwc_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (_File == (FILE *)0x0) {
    FUN_000129b0();
    _Ch = L'\xffff';
  }
  else {
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -2;
    if (*piVar1 < 0) {
      uVar2 = FUN_000134f0((ulonglong)(ushort)_Ch,(longlong)_File);
      _Ch = (wchar_t)uVar2;
    }
    else {
      *(wchar_t *)_File->_ptr = _Ch;
      _File->_ptr = _File->_ptr + 2;
    }
  }
  return _Ch;
}




/* Library Function - Single Match
    mbtowc
   
   Library: Visual Studio 2019 Release */

int __cdecl mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  wchar_t wVar1;
  int iVar2;
  char *local_res10 [3];
  
  iVar2 = 0;
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh == '\0') {
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = L'\0';
        iVar2 = 0;
      }
    }
    else {
      local_res10[0] = _SrcCh;
      wVar1 = RtlAnsiCharToUnicodeChar(local_res10);
      *_DstCh = wVar1;
      iVar2 = (int)local_res10[0] - (int)_SrcCh;
    }
  }
  return iVar2;
}




undefined8 FUN_000134f0(undefined8 param_1,longlong param_2)

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
    if (_Size < 8) goto LAB_00013734;
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
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_00013770;
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
    goto LAB_00013717;
  }
  puVar4 = (undefined8 *)_Dst;
  if (_Size < 8) goto LAB_00013594;
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
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_000135d0;
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
  goto LAB_00013577;
LAB_00013770:
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
LAB_00013717:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00013734:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_000135d0:
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
LAB_00013577:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00013594:
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

void FUN_00017008(void)

{
  if (((DAT_00015100 == 0) || (DAT_00015100 == 0x2b992ddfa232)) &&
     (DAT_00015100 = (_DAT_fffff78000000320 ^ 0x15100) & 0xffffffffffff, DAT_00015100 == 0)) {
    DAT_00015100 = 0x2b992ddfa232;
  }
  DAT_00015108 = ~DAT_00015100;
  return;
}




void entry(longlong param_1,ushort *param_2)

{
  FUN_00017008();
  FUN_000121a4(param_1,param_2);
  return;
}



