
/* Library Function - Single Match
    RtlStringCbCopyW
   
   Library: Visual Studio 2019 Release */

int RtlStringCbCopyW(short *param_1,ulonglong param_2,longlong param_3)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = param_2 >> 1;
  iVar5 = 0;
  if ((uVar2 == 0) || (0x7fffffff < uVar2)) {
    iVar5 = -0x3ffffff3;
  }
  if (iVar5 < 0) {
    return iVar5;
  }
  iVar5 = 0;
  if (uVar2 != 0) {
    lVar3 = 0x7ffffffe - uVar2;
    lVar4 = param_3 - (longlong)param_1;
    do {
      if ((lVar3 + uVar2 == 0) || (sVar1 = *(short *)(lVar4 + (longlong)param_1), sVar1 == 0))
      break;
      *param_1 = sVar1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (uVar2 != 0) goto LAB_00011071;
  }
  param_1 = param_1 + -1;
  iVar5 = -0x7ffffffb;
LAB_00011071:
  *param_1 = 0;
  return iVar5;
}




/* Library Function - Single Match
    RtlStringCbCatW
   
   Library: Visual Studio 2019 Release */

int RtlStringCbCatW(short *param_1,ulonglong param_2,longlong param_3)

{
  short sVar1;
  ulonglong uVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar9 = param_2 >> 1;
  iVar8 = 0;
  if ((uVar9 == 0) || (0x7fffffff < uVar9)) {
    iVar8 = -0x3ffffff3;
  }
  iVar6 = 0;
  if ((iVar8 < 0) || (uVar2 = uVar9, psVar3 = param_1, iVar8 = -0x3ffffff3, uVar9 == 0)) {
LAB_000110e0:
    lVar7 = 0;
  }
  else {
    do {
      if (*psVar3 == 0) break;
      psVar3 = psVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (uVar2 == 0) goto LAB_000110e0;
    lVar7 = uVar9 - uVar2;
    iVar8 = iVar6;
  }
  if (iVar8 < 0) {
    return iVar8;
  }
  psVar3 = param_1 + lVar7;
  lVar4 = uVar9 - lVar7;
  if (lVar4 != 0) {
    lVar5 = param_3 - (longlong)psVar3;
    lVar7 = (lVar4 - uVar9) + 0x7fffffff + lVar7;
    do {
      if ((lVar7 == 0) || (sVar1 = *(short *)(lVar5 + (longlong)psVar3), sVar1 == 0)) break;
      lVar4 = lVar4 + -1;
      *psVar3 = sVar1;
      lVar7 = lVar7 + -1;
      psVar3 = psVar3 + 1;
    } while (lVar4 != 0);
    if (lVar4 != 0) goto LAB_00011137;
  }
  psVar3 = psVar3 + -1;
  iVar6 = -0x7ffffffb;
LAB_00011137:
  *psVar3 = 0;
  return iVar6;
}




void FUN_00011150(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  FUN_0001c430(&local_30,0,0x28);
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  local_38[0] = 0x30;
  local_20 = 0x240;
  local_28 = param_1;
  iVar1 = ZwCreateFile(param_2,0x100000,local_38,&local_48,0,0x80,7,3,0xa0,0,0);
  if ((iVar1 != 0) || (*param_2 == -1)) {
    *param_2 = -1;
  }
  return;
}




undefined4 FUN_00011224(longlong param_1)

{
  short sVar1;
  wchar_t wVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong local_res8;
  short local_38;
  short local_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 local_2e;
  undefined2 local_2a;
  
  psVar12 = *(short **)(param_1 + 0x1c8);
  uVar11 = *(uint *)(param_1 + 0x1c0);
  lVar4 = *(longlong *)(param_1 + 0x58);
  uVar9 = 0;
  uStack_34 = 0;
  uStack_30 = SUB82(psVar12,0);
  local_2e = (undefined4)((ulonglong)psVar12 >> 0x10);
  local_2a = (undefined2)((ulonglong)psVar12 >> 0x30);
  local_res8 = 0;
  lVar7 = -1;
  psVar13 = psVar12;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    sVar1 = *psVar13;
    psVar13 = psVar13 + 1;
  } while (sVar1 != 0);
  local_38 = (~(ushort)lVar7 - 1) * 2;
  local_36 = local_38;
  uVar5 = FUN_00011150(&local_38,&local_res8);
  if ((local_res8 != -1) && (ZwClose(), uVar8 = uVar9, uVar11 != 0)) {
    do {
      uVar10 = (uint)uVar8;
      if (*psVar12 == 0x3a) break;
      uVar10 = uVar10 + 2;
      uVar8 = (ulonglong)uVar10;
      psVar12 = psVar12 + 1;
    } while (uVar10 < uVar11);
    if ((((1 < uVar10) && (uVar10 < uVar11)) && (0x40 < (ushort)psVar12[-1])) &&
       ((ushort)psVar12[-1] < 0x5b)) {
      uVar8 = 0xffffffffffffffff;
      pwVar14 = L"\\EuShare.com";
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        wVar2 = *pwVar14;
        pwVar14 = pwVar14 + 1;
      } while (wVar2 != L'\0');
      KeWaitForSingleObject(lVar4 + 0x6c0,0,0,0,0);
      do {
        uVar11 = (uint)uVar9;
        pwVar14 = (wchar_t *)(uVar9 * 0x180 + 0x6d8 + lVar4);
        if ((char)pwVar14[0x88] != '\0') {
          uVar9 = 0xffffffffffffffff;
          pwVar15 = pwVar14;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            wVar2 = *pwVar15;
            pwVar15 = pwVar15 + 1;
          } while (wVar2 != L'\0');
          iVar6 = _wcsnicmp(psVar12 + ~uVar8 + 1,pwVar14,~uVar9 - 1);
          if (iVar6 == 0) break;
        }
        uVar11 = uVar11 + 1;
        uVar9 = (ulonglong)uVar11;
      } while (uVar11 < 8);
      if (uVar11 < 8) {
        uVar3 = psVar12[-1];
        *(undefined1 *)((ulonglong)(uVar3 - 0x41) + 0x688 + lVar4) = 1;
        *(char *)((ulonglong)(uVar3 - 0x41) + 0x6a2 + lVar4) = (char)uVar11;
        KeSetEvent(lVar4 + 0x6c0,0,0);
        return uVar5;
      }
      KeSetEvent();
    }
  }
  return 0xc00000cc;
}




undefined4 FUN_000113d4(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar1 = 0x103;
  }
  else {
    uVar1 = FUN_00011224(param_1);
  }
  return uVar1;
}




undefined8 FUN_00011404(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  puVar2 = *(undefined8 **)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d0) < 0x1a) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    KeWaitForSingleObject(lVar1 + 0x6c0,0,0,0,0);
    *puVar2 = *(undefined8 *)(lVar1 + 0x688);
    puVar2[1] = *(undefined8 *)(lVar1 + 0x690);
    puVar2[2] = *(undefined8 *)(lVar1 + 0x698);
    *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(lVar1 + 0x6a0);
    KeSetEvent(lVar1 + 0x6c0,0,0);
    *(undefined8 *)(param_1 + 0xb8) = 0x1a;
  }
  return 0;
}




void FUN_000114bc(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  short *_Dst;
  longlong lVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  ushort local_268 [5];
  undefined4 local_25e;
  undefined2 local_25a;
  short local_258 [26];
  ulonglong local_224 [61];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStack_298;
  lVar6 = *(longlong *)(param_1 + 0x58);
  puVar5 = *(ushort **)(param_1 + 0x1c8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x1d0);
  _Dst = *(short **)(param_1 + 0x1d8);
  local_268[0] = 0;
  local_268[1] = 0;
  local_268[2] = 0;
  local_268[3] = 0;
  local_268[4] = 0;
  local_25e = 0;
  local_25a = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_258[2] = 0;
  local_258[3] = 0;
  local_258[4] = 0;
  local_258[5] = 0;
  local_258[6] = 0;
  local_258[7] = 0;
  lVar4 = *(longlong *)(lVar6 + 0x2a0);
  if (*(uint *)(param_1 + 0x1c0) < 3) goto LAB_00011772;
  lVar1 = lVar6 + 0x6c0;
  local_278 = 0;
  KeWaitForSingleObject(lVar1,0,0);
  memcpy(local_258 + 8,L"\\;0:\\EuShare.com\\",0x24);
  FUN_0001c430(local_224,0,0x1e4);
  local_258[10] = *puVar5;
  if (*(char *)((ulonglong)((ushort)local_258[10] - 0x41) + 0x688 + lVar6) == '\0') {
    KeSetEvent(lVar1,0,0);
    goto LAB_00011772;
  }
  lVar6 = (longlong)*(char *)((ulonglong)((ushort)local_258[10] - 0x41) + 0x6a2 + lVar6) * 0x180 +
          0x6d8 + lVar6;
  RtlStringCbCatW(local_258 + 8,0x208,lVar6);
  RtlStringCbCopyW(_Dst,uVar10,0x1c900);
  RtlStringCbCatW(_Dst,uVar10,0x1c950);
  RtlStringCbCatW(_Dst,uVar10,lVar6);
  lVar6 = -1;
  psVar8 = _Dst;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    sVar2 = *psVar8;
    psVar8 = psVar8 + 1;
  } while (sVar2 != 0);
  uVar7 = (~(uint)lVar6 - 1) * 2;
  KeSetEvent(lVar1,0,0);
  psVar8 = local_258 + 8;
  lVar6 = -1;
  local_268[4] = (ushort)psVar8;
  local_25e = (undefined4)((ulonglong)psVar8 >> 0x10);
  local_25a = (undefined2)((ulonglong)psVar8 >> 0x30);
  psVar9 = local_258 + 8;
  do {
    if (lVar6 == 0) break;
    lVar6 = lVar6 + -1;
    sVar2 = *psVar9;
    psVar9 = psVar9 + 1;
  } while (sVar2 != 0);
  local_268[1] = 0x208;
  local_268[0] = (~(ushort)lVar6 - 1) * 2;
  ExAcquireResourceSharedLite(lVar4 + 0x18,CONCAT71((int7)((ulonglong)psVar8 >> 8),1));
  puVar5 = RxPrefixTableLookupName(lVar4,local_268,local_258,(longlong *)0x0);
  if (puVar5 != (ushort *)0x0) {
    uVar3 = *puVar5;
    if (uVar3 == 0xeb10) {
      FUN_00036fe8();
LAB_00011746:
      RxDereference(puVar5,1);
      uVar7 = 0;
    }
    else {
      if (uVar3 == 0xeb11) {
        memcpy(_Dst,*(void **)(*(ushort **)(puVar5 + 0x1c) + 4),
               (ulonglong)**(ushort **)(puVar5 + 0x1c));
      }
      else {
        if (uVar3 != 0xeb12) goto LAB_00011746;
        puVar5 = *(ushort **)(puVar5 + 4);
        memcpy(_Dst,*(void **)(*(ushort **)(puVar5 + 0x1c) + 4),
               (ulonglong)**(ushort **)(puVar5 + 0x1c));
      }
      uVar7 = (uint)**(ushort **)(puVar5 + 0x1c);
      FUN_00036fe8();
      RxDereference(puVar5,1);
    }
  }
  ExReleaseResourceLite(lVar4 + 0x18);
  *(ulonglong *)(param_1 + 0xb8) = (ulonglong)uVar7;
LAB_00011772:
  FUN_00015570(local_38 ^ (ulonglong)auStack_298);
  return;
}




uint FUN_000117ac(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  longlong ***ppplVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  short *psVar9;
  longlong local_res8;
  longlong local_res10;
  short local_38;
  short local_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 local_2e;
  undefined2 local_2a;
  
  psVar8 = *(short **)(param_1 + 0x1c8);
  uVar2 = *(uint *)(param_1 + 0x1c0);
  lVar3 = *(longlong *)(param_1 + 0x58);
  uVar6 = 0;
  uStack_34 = 0;
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar5 = 0x103;
  }
  else {
    lVar7 = -1;
    uStack_30 = SUB82(psVar8,0);
    local_2e = (undefined4)((ulonglong)psVar8 >> 0x10);
    local_2a = (undefined2)((ulonglong)psVar8 >> 0x30);
    local_res10 = 0;
    psVar9 = psVar8;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    local_res8 = 0;
    local_38 = (~(ushort)lVar7 - 1) * 2;
    local_36 = local_38;
    uVar5 = FUN_00011150(&local_38,&local_res10);
    if (local_res10 != -1) {
      uVar5 = ObReferenceObjectByHandle(local_res10,0,0,0,&local_res8,0);
      if (-1 < (int)uVar5) {
        ppplVar4 = *(longlong ****)(local_res8 + 0x20);
        if (*(short *)ppplVar4 == -0x14ee) {
          uVar5 = RxFinalizeConnection((ushort *)ppplVar4[1],ppplVar4,1);
        }
        else {
          uVar5 = 0xc0000010;
        }
        ObfDereferenceObject(local_res8);
      }
      ZwClose(local_res10);
    }
    if ((-1 < (int)uVar5) && (uVar2 != 0)) {
      do {
        if (*psVar8 == 0x3a) break;
        uVar6 = uVar6 + 2;
        psVar8 = psVar8 + 1;
      } while (uVar6 < uVar2);
      if ((((1 < uVar6) && (uVar6 < uVar2)) && (0x40 < (ushort)psVar8[-1])) &&
         ((ushort)psVar8[-1] < 0x5b)) {
        KeWaitForSingleObject(lVar3 + 0x6c0,0,0,0,0);
        *(undefined1 *)((ulonglong)(ushort)psVar8[-1] + 0x647 + lVar3) = 0;
        *(undefined1 *)((ulonglong)(ushort)psVar8[-1] + 0x661 + lVar3) = 0;
        KeSetEvent(lVar3 + 0x6c0,0,0);
      }
    }
  }
  return uVar5;
}




wchar_t * FUN_0001194c(longlong param_1)

{
  longlong lVar1;
  wchar_t *_Str1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *_Str2;
  uint uVar10;
  undefined8 *puVar12;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  wchar_t *pwVar11;
  
  pwVar6 = (wchar_t *)0x0;
  lVar1 = *(longlong *)(param_1 + 0x58);
  local_48 = lVar1 + 0x670;
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    pwVar7 = (wchar_t *)0x103;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _Str1 = *(wchar_t **)(param_1 + 0x1c8);
    if ((*(uint *)(param_1 + 0x1c0) < 0x308) || (_Str1 == (wchar_t *)0x0)) {
      pwVar7 = (wchar_t *)0xc000000d;
    }
    else {
      local_50 = *(undefined8 **)(param_1 + 0x1d8);
      if ((*(uint *)(param_1 + 0x1d0) < 8) || (local_50 == (undefined8 *)0x0)) {
        pwVar7 = (wchar_t *)0x80000005;
      }
      else {
        lVar4 = lVar1 + 0x6c0;
        KeWaitForSingleObject(lVar4,0,0,0,0);
        _Str2 = (wchar_t *)(lVar1 + 0x6d8);
        pwVar8 = pwVar6;
        pwVar11 = pwVar6;
        while (pwVar7 = pwVar6, pwVar9 = pwVar8, *(longlong *)(_Str2 + 0xb4) != 0) {
          pwVar7 = (wchar_t *)0x0;
          if ((char)_Str2[0x88] == '\0') {
            if (pwVar8 == (wchar_t *)0x0) {
              pwVar9 = _Str2;
            }
          }
          else {
            iVar3 = _wcsicmp(_Str1,_Str2);
            if (iVar3 == 0) {
              cVar2 = FUN_00013de8(*(longlong *)(_Str2 + 0x84));
              pwVar9 = _Str2;
              if (cVar2 != '\0') {
                pwVar7 = (wchar_t *)0xc0000708;
                pwVar9 = pwVar8;
              }
              break;
            }
          }
          uVar10 = (int)pwVar11 + 1;
          pwVar11 = (wchar_t *)(ulonglong)uVar10;
          _Str2 = _Str2 + 0xc0;
          pwVar8 = pwVar9;
          if (7 < uVar10) break;
        }
        if ((int)pwVar7 == 0) {
          if (pwVar9 == (wchar_t *)0x0) {
            pwVar7 = (wchar_t *)0xc000009a;
            KeSetEvent(lVar4,0,0);
          }
          else {
            local_58 = 0xfffffffffff0bdc0;
            puVar12 = &local_58;
            iVar3 = KeWaitForSingleObject(pwVar9 + 0x8c,0,0,0,puVar12);
            while (iVar3 != 0) {
              KeSetEvent(pwVar9 + 0xa4,0,0);
              puVar12 = &local_58;
              iVar3 = KeWaitForSingleObject(pwVar9 + 0x8c,0,0,0,puVar12);
            }
            pwVar7 = (wchar_t *)0x0;
            lVar4 = PsGetCurrentProcessId();
            if ((*(longlong *)(pwVar9 + 0x84) == lVar4) && (*(longlong *)(pwVar9 + 0xb8) != 0)) {
              MmUnmapLockedPages(*(longlong *)(pwVar9 + 0xb8),*(undefined8 *)(pwVar9 + 0xb4));
            }
            pwVar9[0xb8] = L'\0';
            pwVar9[0xb9] = L'\0';
            pwVar9[0xba] = L'\0';
            pwVar9[0xbb] = L'\0';
            uVar5 = MmMapLockedPagesSpecifyCache
                              (*(undefined8 *)(pwVar9 + 0xb4),1,1,0,
                               (ulonglong)puVar12 & 0xffffffff00000000,0x20);
            puVar12 = local_50;
            *(undefined8 *)(pwVar9 + 0xb8) = uVar5;
            if (*(longlong *)(pwVar9 + 0xb8) == 0) {
              pwVar7 = (wchar_t *)0xc000009a;
              KeSetEvent(pwVar9 + 0x8c,0,0);
              KeSetEvent(lVar1 + 0x6c0,0,0);
            }
            else {
              KeSetEvent(pwVar9 + 0xa4,0,0);
              FUN_00013424((longlong)pwVar9);
              KeResetEvent(pwVar9 + 0x98);
              KeResetEvent(pwVar9 + 0xa4);
              RtlStringCbCopyW(pwVar9,0x100,(longlong)_Str1);
              uVar5 = PsGetCurrentProcessId();
              *(undefined8 *)(pwVar9 + 0x84) = uVar5;
              *(undefined1 *)(pwVar9 + 0x88) = 1;
              *(undefined8 *)(param_1 + 0xb8) = 8;
              *puVar12 = *(undefined8 *)(pwVar9 + 0xb8);
              KeSetEvent(pwVar9 + 0x8c,0,0);
              KeSetEvent(lVar1 + 0x6c0,0,0);
            }
          }
        }
        else {
          KeSetEvent(lVar4,0,0);
        }
      }
    }
  }
  return pwVar7;
}




ulonglong FUN_00011cb0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar6;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar3 = 0x103;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1d8);
    if ((*(uint *)(param_1 + 0x1d0) < 0x1844) || (piVar2 == (int *)0x0)) {
      uVar3 = 0x80000005;
    }
    else {
      KeWaitForSingleObject(lVar1 + 0x6c0,0,0,0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0x1844;
      *piVar2 = 0;
      pcVar6 = (char *)(lVar1 + 0x7e8);
      uVar5 = uVar3;
      do {
        if (*(longlong *)(pcVar6 + 0x58) == 0) break;
        if (*pcVar6 != '\0') {
          RtlStringCbCopyW((short *)(piVar2 + uVar5 * 0xc2 + 1),0x100,(longlong)(pcVar6 + -0x110));
          *piVar2 = *piVar2 + 1;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        pcVar6 = pcVar6 + 0x180;
      } while (uVar4 < 8);
      KeSetEvent(lVar1 + 0x6c0,0,0);
    }
  }
  return uVar3;
}




uint FUN_00011dac(longlong param_1)

{
  longlong lVar1;
  wchar_t *_Str1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x58);
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar4 = 0x103;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    _Str1 = *(wchar_t **)(param_1 + 0x1c8);
    if ((*(uint *)(param_1 + 0x1c0) < 0x308) || (_Str1 == (wchar_t *)0x0)) {
      uVar4 = 0xc000000d;
    }
    else {
      lVar1 = lVar5 + 0x6c0;
      KeWaitForSingleObject(lVar1,0,0,0,0);
      plVar6 = (longlong *)(lVar5 + 0x7e0);
      uVar7 = uVar4;
      do {
        if (plVar6[0xc] == 0) break;
        if (((char)plVar6[1] != '\0') &&
           (iVar3 = _wcsicmp(_Str1,(wchar_t *)(plVar6 + -0x21)), iVar3 == 0)) {
          cVar2 = FUN_00013de8(*plVar6);
          if ((cVar2 != '\0') && (lVar5 = PsGetCurrentProcessId(), *plVar6 != lVar5)) {
            uVar4 = 0x123;
            break;
          }
          local_res8 = 0xfffffffffff0bdc0;
          uVar4 = KeWaitForSingleObject(plVar6 + 2,0,0,0,&local_res8);
          if (uVar4 != 0) {
            do {
              KeSetEvent(plVar6 + 8,0,0);
              iVar3 = KeWaitForSingleObject(plVar6 + 2);
            } while (iVar3 != 0);
            uVar4 = 0;
          }
          KeSetEvent(plVar6 + 8,0,0);
          FUN_00013424((longlong)(plVar6 + -0x21));
          *(undefined1 *)(plVar6 + 1) = 0;
          lVar5 = PsGetCurrentProcessId();
          if ((*plVar6 == lVar5) && (plVar6[0xd] != 0)) {
            MmUnmapLockedPages();
          }
          FUN_0001c430((ulonglong *)(plVar6 + -0x21),0,0x100);
          *plVar6 = 0;
          plVar6[0xd] = 0;
          KeSetEvent(plVar6 + 2,0);
        }
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 0x30;
      } while (uVar7 < 8);
      KeSetEvent(lVar1,0,0);
    }
  }
  return uVar4;
}




undefined8 FUN_00011f9c(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar6 = 0x103;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    puVar2 = *(uint **)(param_1 + 0x1c8);
    if (((3 < *(uint *)(param_1 + 0x1c0)) && (puVar2 != (uint *)0x0)) && (*puVar2 < 8)) {
      uVar1 = *puVar2;
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar5 = PsGetCurrentProcessId();
      if (*(longlong *)((ulonglong)uVar1 * 0x180 + 0x7e0 + lVar3) == lVar5) {
        uVar4 = KeSetEvent((ulonglong)uVar1 * 0x180 + 0x820 + lVar3,0,0);
        if (*(uint *)(param_1 + 0x1d0) < 4) {
          return 0;
        }
        if (*(undefined4 **)(param_1 + 0x1d8) == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0xb8) = 4;
        **(undefined4 **)(param_1 + 0x1d8) = uVar4;
        return 0;
      }
    }
    uVar6 = 0xc000000d;
  }
  return uVar6;
}




undefined8 FUN_00012064(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  if ((*(uint *)(param_1 + 0xa8) >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar6 = 0x103;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    puVar2 = *(uint **)(param_1 + 0x1c8);
    if (((0x17 < *(uint *)(param_1 + 0x1c0)) && (puVar2 != (uint *)0x0)) && (*puVar2 < 8)) {
      uVar1 = *puVar2;
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar5 = PsGetCurrentProcessId();
      if (*(longlong *)(lVar3 + 0x7e0 + (ulonglong)uVar1 * 0x180) == lVar5) {
        local_res8 = *(longlong *)(puVar2 + 4) * -10000;
        uVar4 = KeWaitForSingleObject(lVar3 + 0x808 + (ulonglong)uVar1 * 0x180,0,0,0,&local_res8);
        if (*(uint *)(param_1 + 0x1d0) < 4) {
          return 0;
        }
        if (*(undefined4 **)(param_1 + 0x1d8) == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0xb8) = 4;
        **(undefined4 **)(param_1 + 0x1d8) = uVar4;
        return 0;
      }
    }
    uVar6 = 0xc000000d;
  }
  return uVar6;
}




/* WARNING: Removing unreachable block (ram,0x0001218c) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_0001215c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 local_res10 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_68 [5];
  ulonglong local_40 [2];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (DAT_00021168 == 0) {
    LOCK();
    DAT_00021168 = 1;
    UNLOCK();
  }
  else if (DAT_00021168 != 1) {
    if (DAT_00021168 == 2) {
      return 0;
    }
    return 0xc000000d;
  }
  uVar2 = RxStartMinirdr(param_1,(char *)(param_1 + 0x1b));
  if (uVar2 == 0xc00000fc) {
    return 0;
  }
  if (uVar2 == 0x103) {
    if (*(char *)(param_1 + 0x1b) != '\0') {
      return 0xc0000016;
    }
    return (ulonglong)uVar2;
  }
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
  RtlInitUnicodeString(local_88);
  FUN_0001c430(local_68,0,0x28);
  uVar3 = RtlCreateSecurityDescriptor(local_68);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  FUN_0001c430(local_40,0,0x30);
  local_40[1] = 0;
  local_20 = 0;
  local_18 = 0;
  local_30 = local_88;
  local_28 = 0x200;
  local_40[0]._0_4_ = 0x30;
  uVar2 = ZwOpenFile(local_res10,0x40000,local_40,local_78,0,0);
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
  uVar2 = ZwSetSecurityObject(local_res10[0],4,local_68);
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
  uVar2 = ZwClose(local_res10[0]);
  if (uVar2 == 0) {
    LOCK();
    iVar1 = 2;
    if (DAT_00021168 != 1) {
      iVar1 = DAT_00021168;
    }
    DAT_00021168 = iVar1;
    UNLOCK();
    return (ulonglong)uVar2;
  }
  return (ulonglong)uVar2;
}




uint FUN_000122d8(longlong param_1)

{
  uint uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x58) + 0x1a8) == 0) {
    LOCK();
    if (DAT_00021168 == 2) {
      DAT_00021168 = 0;
    }
    UNLOCK();
    uVar1 = RxStopMinirdr(param_1,(char *)(param_1 + 0x1b));
    if (uVar1 == 0x103) {
      if (*(char *)(param_1 + 0x1b) != '\0') {
        uVar1 = 0xc0000016;
      }
    }
    else if (uVar1 == 0xc00000fb) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x80000023;
  }
  return uVar1;
}




undefined8 FUN_00012348(longlong param_1)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort local_18 [5];
  undefined4 local_e;
  undefined2 local_a;
  
  uVar5 = *(uint *)(param_1 + 0x180);
  puVar2 = *(ulonglong **)(param_1 + 0x178);
  iVar3 = *(int *)(param_1 + 0x170);
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[0] = 0;
  local_e = 0;
  local_a = 0;
  if (iVar3 == 1) {
    if (0x17 < uVar5) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0xbabaface;
      *(undefined1 *)(puVar2 + 2) = 0;
      RtlInitUnicodeString(local_18,L"EuMrx");
      uVar5 = uVar5 - 0x12;
      uVar4 = uVar5;
      if (local_18[0] <= uVar5) {
        uVar4 = (uint)local_18[0];
      }
      memcpy((void *)((longlong)puVar2 + 0x12),
             (void *)CONCAT26(local_a,CONCAT42(local_e,local_18[4])),(ulonglong)uVar4);
      *(uint *)((longlong)puVar2 + 0xc) = uVar4;
LAB_00012506:
      *(uint *)(param_1 + 0x180) = uVar5 - uVar4;
      return 0;
    }
LAB_000124a9:
    *(undefined8 *)(param_1 + 0xb8) = 0x18;
    return 0x80000005;
  }
  if (iVar3 == 3) {
    if (uVar5 < 0x18) goto LAB_000124a9;
    *(undefined4 *)(puVar2 + 2) = 2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x200;
    iVar3 = uVar5 - 0x18;
  }
  else {
    if (iVar3 == 4) {
      if (uVar5 < 8) {
        *(undefined8 *)(param_1 + 0xb8) = 8;
        return 0x80000005;
      }
      uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x30);
      *(undefined4 *)((longlong)puVar2 + 4) = 0x10;
      *(undefined4 *)puVar2 = uVar1;
      iVar3 = uVar5 - 8;
      goto LAB_000123f4;
    }
    if (iVar3 == 5) {
      if (uVar5 < 0x10) {
        *(undefined8 *)(param_1 + 0xb8) = 0x10;
        return 0x80000005;
      }
      FUN_0001c430(puVar2,0,0x10);
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)((longlong)puVar2 + 4) = 0xff;
      uVar5 = uVar5 - 0xc;
      RtlInitUnicodeString(local_18,L"SampleFS");
      uVar4 = uVar5;
      if (local_18[0] <= uVar5) {
        uVar4 = (uint)local_18[0];
      }
      *(uint *)(puVar2 + 1) = uVar4;
      memcpy((void *)((longlong)puVar2 + 0xc),
             (void *)CONCAT26(local_a,CONCAT42(local_e,local_18[4])),(ulonglong)uVar4);
      goto LAB_00012506;
    }
    if (iVar3 != 7) {
      return 0xc000000d;
    }
    if (uVar5 < 0x20) {
      *(undefined8 *)(param_1 + 0xb8) = 0x20;
      return 0x80000005;
    }
    *(undefined4 *)(puVar2 + 3) = 2;
    puVar2[2] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x200;
    iVar3 = uVar5 - 0x20;
  }
  puVar2[1] = 0;
  *puVar2 = 0;
LAB_000123f4:
  *(int *)(param_1 + 0x180) = iVar3;
  return 0;
}




void FUN_00012534(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x2d) == '\x01') {
    ZwQueryInformationFile
              (*(undefined8 *)(lVar1 + 8),param_1 + 0xb0,*(undefined8 *)(param_1 + 0x178),
               *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x170));
  }
  else {
    FUN_00014914(param_1);
  }
  return;
}




undefined4 FUN_00012594(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  uVar1 = 0xc0000002;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x2d) == '\x01') {
    uVar1 = ZwSetInformationFile
                      (*(undefined8 *)(lVar2 + 8),param_1 + 0xb0,*(undefined8 *)(param_1 + 0x178),
                       *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x170));
  }
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_000125f4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint extraout_EAX;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  undefined1 auStackY_148 [32];
  undefined1 local_100 [10];
  undefined4 local_f6;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined8 local_ee;
  undefined4 local_e6;
  undefined2 local_e2;
  undefined8 local_e0;
  ulonglong *local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [4];
  int local_74;
  uint local_6c;
  
  local_90 = auStackY_148;
  puVar6 = (ulonglong *)0x0;
  uVar8 = 2;
  local_100._0_2_ = 0;
  local_100._2_8_ = 0;
  local_f6 = 0;
  local_f2 = 0;
  local_f0 = 0;
  local_ee = 0;
  local_e6 = 0;
  local_e2 = 0;
  local_d8 = (ulonglong *)0x0;
  RtlInitUnicodeString
            (local_a0,L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EuMrx\\Parameters"
            );
  local_d0[0] = 0x30;
  local_c8 = 0;
  local_b8 = 0x240;
  local_c0 = local_a0;
  local_b0 = 0;
  local_a8 = 0;
  iVar2 = ZwOpenKey(&local_e0,&DAT_00020019,local_d0);
  uVar5 = local_e0;
  if (iVar2 < 0) goto LAB_00012765;
  RtlInitUnicodeString(local_88,L"LogRate");
  iVar2 = ZwQueryValueKey(uVar5,local_88,2,local_78);
  if (iVar2 < 0) {
LAB_0001273b:
    local_6c = 0;
    if (-1 < iVar2) goto LAB_0001273f;
  }
  else {
    if (local_74 != 4) {
      iVar2 = -0x3ffffff3;
      goto LAB_0001273b;
    }
LAB_0001273f:
    _DAT_0002116c = local_6c;
    if (0x1f < local_6c) {
      _DAT_0002116c = 0x1f;
    }
  }
  ZwClose(local_e0);
LAB_00012765:
  uVar4 = RxDriverEntry(param_1,param_2);
  if ((int)uVar4 == 0) {
    RtlInitUnicodeString(local_100,L"\\Device\\EuRdr");
    RxRegisterMinirdr(&DAT_00020f40,param_1,0x20f50,2,(undefined8 *)local_100,0xc70,0x14,0x10);
    puVar9 = puVar6;
    uVar3 = extraout_EAX;
    if (extraout_EAX == 0) {
      uVar8 = 1;
      puVar9 = (ulonglong *)(DAT_00020f40 + 0x670);
      local_d8 = puVar9;
      uVar4 = FUN_0001301c(puVar9);
      uVar3 = (uint)uVar4;
      if (uVar3 == 0) {
        uVar5 = FUN_00012b98();
        uVar3 = (uint)uVar5;
        if (uVar3 == 0) {
          RtlInitUnicodeString(&local_f0,L"\\??\\EuRdrDN");
          uVar3 = IoCreateSymbolicLink(&local_f0,local_100);
        }
      }
    }
    if (uVar3 != 0) {
      if (uVar8 < 2) {
        lVar1 = *(longlong *)(DAT_00020f40 + 0x160);
        RxpUnregisterMinirdr(DAT_00020f40);
        if (lVar1 != 0) {
          ObfDereferenceObject(lVar1);
        }
      }
      FUN_00013254((longlong)puVar9);
      FUN_00012e9c();
    }
    if (uVar3 == 0) {
      *(code **)(param_1 + 0x68) = FUN_00012934;
      puVar7 = puVar6;
      do {
        *(code **)(param_1 + 0x70 + (longlong)puVar7 * 8) = FUN_00012e58;
        uVar8 = (int)puVar6 + 1;
        puVar6 = (ulonglong *)(ulonglong)uVar8;
        puVar7 = (ulonglong *)((longlong)puVar7 + 1);
      } while (uVar8 < 0x1b);
      puVar9[0x18d] = *(ulonglong *)(param_1 + 0xe0);
      puVar6 = RxCreateRxContext((undefined8 *)0x0,DAT_00020f40,0x200);
      if (puVar6 != (ulonglong *)0x0) {
        iVar2 = RxStartMinirdr((longlong)puVar6,(undefined1 *)((longlong)puVar6 + 0x1b));
        if (iVar2 == 0) {
          LOCK();
          if (DAT_00021168 == 0) {
            DAT_00021168 = 2;
          }
          UNLOCK();
        }
        RxDereferenceAndDeleteRxContext_Real((longlong)puVar6);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)uVar3;
    }
  }
  else {
    _local_unwind(local_90,0x1278e);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}




void FUN_00012934(void)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res10;
  undefined2 local_28;
  undefined8 local_26;
  undefined4 local_1e;
  undefined2 local_1a;
  
  lVar7 = DAT_00020f40;
  local_26 = 0;
  iVar6 = 0;
  local_28 = 0;
  local_1e = 0;
  local_1a = 0;
  DbgPrint("MrxUnload Enter\n");
  FUN_00013254(lVar7 + 0x670);
  local_res10 = 0xffffffffff676980;
  puVar3 = RxCreateRxContext((undefined8 *)0x0,DAT_00020f40,0x200);
  if (puVar3 == (ulonglong *)0x0) {
    DbgPrint("MrxUnload RxCreateRxContext failed!\n");
  }
  else {
    uVar1 = *(undefined4 *)(DAT_00020f40 + 0x1a8);
    while (DbgPrint("MrxUnload fcb: %d\n",uVar1), *(int *)(DAT_00020f40 + 0x1a8) != 0) {
      KeDelayExecutionThread(0,0,&local_res10);
      uVar1 = *(undefined4 *)(DAT_00020f40 + 0x1a8);
    }
    DbgPrint("MrxUnload active contexts: %d\n",*(undefined4 *)(DAT_00020f40 + 0x1ac));
    while (DbgPrint("MrxUnload async requests: %d\n",*(undefined4 *)(DAT_00020f40 + 0x270)),
          *(int *)(DAT_00020f40 + 0x270) != 0) {
      KeDelayExecutionThread(0,0,&local_res10);
    }
    lVar7 = 0x220;
    iVar5 = iVar6;
    do {
      while (DbgPrint("MrxUnload PostedRequestCount[%d]: %d\n",iVar5,
                      *(undefined4 *)(lVar7 + DAT_00020f40)), *(int *)(lVar7 + DAT_00020f40) != 0) {
        KeDelayExecutionThread(0,0,&local_res10);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar5 < 3);
    lVar7 = 0x22c;
    do {
      pcVar4 = "MrxUnload OverflowQueueCount[%d]: %d\n";
      while (DbgPrint(pcVar4,iVar6,*(undefined4 *)(lVar7 + DAT_00020f40)),
            *(int *)(lVar7 + DAT_00020f40) != 0) {
        KeDelayExecutionThread(0,0,&local_res10);
        pcVar4 = "MrxUnload PostedRequestCount[%d]: %d\n";
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar6 < 3);
    uVar2 = RxStopMinirdr((longlong)puVar3,(undefined1 *)((longlong)puVar3 + 0x1b));
    if (uVar2 == 0) {
      DbgPrint("MrxUnload RxStopMinirdr success!\n");
      LOCK();
      if (DAT_00021168 == 2) {
        DAT_00021168 = 0;
      }
      UNLOCK();
    }
    else {
      DbgPrint("MrxUnload RxStopMinirdr failed! Status: 0x%x\n",uVar2);
    }
    DbgPrint("MrxUnload RxDereferenceAndDeleteRxContext\n");
    RxDereferenceAndDeleteRxContext_Real((longlong)puVar3);
  }
  lVar7 = *(longlong *)(DAT_00020f40 + 0x160);
  RxpUnregisterMinirdr(DAT_00020f40);
  if (lVar7 != 0) {
    ObfDereferenceObject(lVar7);
  }
  RtlInitUnicodeString(&local_28,L"\\??\\EuRdrDN");
  IoDeleteSymbolicLink(&local_28);
  FUN_00012e9c();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00012b98(void)

{
  FUN_0001c430((ulonglong *)&DAT_00020f50,0,0x218);
  _DAT_00020f58 = 0;
  _DAT_00020f60 = 0;
  _DAT_00020f68 = 0;
  _DAT_00020f80 = 0;
  _DAT_00020f50 = 0xebff;
  _DAT_00020f70 = &LAB_000138f8;
  _DAT_00020f52 = 0x218;
  _DAT_00020f78 = &LAB_000138f8;
  _DAT_00020f54 = 0x2a;
  _DAT_00021148 = FUN_00024014;
  _DAT_00020f5c = 0x10;
  _DAT_00021128 = FUN_00013b3c;
  _DAT_00020f64 = 4;
  _DAT_00021138 = &LAB_00013bb0;
  _DAT_00020f6c = 0x270;
  _DAT_00021100 = FUN_000134b0;
  _DAT_00021118 = &LAB_000138ec;
  _DAT_00021120 = FUN_0001371c;
  _DAT_00021140 = &LAB_00013ba0;
  _DAT_00021110 = &LAB_000138f8;
  _DAT_00021108 = &LAB_000138f8;
  _DAT_00020f88 = FUN_0002412c;
  _DAT_00020f90 = FUN_00013878;
  _DAT_00020f98 = &LAB_000240f0;
  _DAT_000210e8 = &LAB_000138f8;
  _DAT_000210f0 = &LAB_000138f8;
  _DAT_00020fb0 = &LAB_000138ec;
  _DAT_00020fb8 = &LAB_000138f8;
  _DAT_00020fc0 = &LAB_000138f8;
  _DAT_00020fa0 = &LAB_000240fc;
  _DAT_00020fe0 = &LAB_000138f8;
  _DAT_00020fc8 = &LAB_000138f8;
  _DAT_00020fd0 = FUN_00013904;
  _DAT_00021020 = &DAT_0001233c;
  _DAT_00021070 = FUN_00012348;
  _DAT_00021040 = FUN_00024008;
  _DAT_00021048 = &LAB_000240f0;
  _DAT_00021050 = &LAB_00013854;
  _DAT_00021058 = &LAB_00013830;
  _DAT_00021028 = FUN_00012534;
  _DAT_00021030 = FUN_00012594;
  _DAT_00021038 = &LAB_000138f8;
  _DAT_00021088 = &LAB_000138ec;
  _DAT_00021090 = &LAB_00013950;
  _DAT_00021098 = &LAB_00013bc8;
  _DAT_000210a0 = &LAB_000240f0;
  _DAT_000210a8 = &LAB_000240f0;
  _DAT_000210b0 = &LAB_000240f0;
  _DAT_000210b8 = &LAB_000240f0;
  _DAT_000210c0 = FUN_0001378c;
  _DAT_000210c8 = &LAB_00024120;
  _DAT_000210d0 = &LAB_00013830;
  _DAT_000210f8 = &LAB_000240f0;
  return 0;
}




ulonglong FUN_00012e58(ulonglong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == DAT_00020f40) {
    uVar1 = RxFsdDispatch(DAT_00020f40,param_2);
  }
  else {
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 6) = 0xc0000010;
    IofCompleteRequest(param_2,0);
    uVar1 = 0xc0000010;
  }
  return uVar1;
}




void FUN_00012e9c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  local_res10 = 0xffffffffff676980;
  if (DAT_00021b70 != 0) {
    DbgPrint("MrxUnload RxDispatcher.NumberOfProcessors: %d\n",DAT_00021b60);
    iVar2 = 0;
    if (0 < DAT_00021b60) {
      do {
        iVar3 = 0;
        lVar4 = 0;
        do {
          DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] NumberOfWorkItemsToBeDispatched: %d\n",
                   iVar2,iVar3,*(undefined4 *)(lVar4 + 0x1c + DAT_00021b70));
          iVar1 = *(int *)(lVar4 + 0x1c + DAT_00021b70);
          while (0 < iVar1) {
            KeDelayExecutionThread(0,0,&local_res10);
            DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] MaximumNumberOfWorkerThreads: %d\n",
                     iVar2,iVar3,*(undefined4 *)(lVar4 + 0x1c + DAT_00021b70));
            iVar1 = *(int *)(lVar4 + 0x1c + DAT_00021b70);
          }
          DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] MaximumNumberOfWorkerThreads: %d\n",iVar2,
                   iVar3,*(undefined4 *)(lVar4 + 0x28 + DAT_00021b70));
          DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] MinimumNumberOfWorkerThreads: %d\n",iVar2,
                   iVar3,*(undefined4 *)(lVar4 + 0x2c + DAT_00021b70));
          DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] NumberOfActiveWorkerThreads: %d\n",iVar2,
                   iVar3,*(undefined4 *)(lVar4 + 0x30 + DAT_00021b70));
          DbgPrint("MrxUnload Processor[%d] WorkQueue[%d] NumberOfIdleWorkerThreads: %d\n",iVar2,
                   iVar3,*(undefined4 *)(lVar4 + 0x34 + DAT_00021b70));
          iVar3 = iVar3 + 1;
          lVar4 = lVar4 + 0x100;
        } while (iVar3 < 3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00021b60);
    }
  }
  DbgPrint("MrxUnload RxUnload\n");
  RxUnload();
  DbgPrint("MrxUnload Driver Unoaded\n");
  return;
}




ulonglong FUN_0001301c(ulonglong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  uint local_res18 [2];
  
  uVar8 = 0;
  uVar4 = 0xc0000001;
  if (param_1 != (ulonglong *)0x0) {
    FUN_0001c430(param_1,0,0xc70);
    *(undefined2 *)param_1 = 0xff00;
    *(undefined2 *)((longlong)param_1 + 2) = 0xc70;
    param_1[1] = DAT_00020f40;
    lVar2 = IoGetCurrentProcess();
    uVar4 = uVar8;
    while ((uVar5 = (uint)uVar4, uVar6 = 0, uVar5 < 0x3000 &&
           (iVar1 = strncmp("System",(char *)(uVar4 + lVar2),6), uVar6 = uVar5, iVar1 != 0))) {
      uVar4 = (ulonglong)(uVar5 + 1);
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
    KeInitializeEvent(param_1 + 10,1,1);
    uVar7 = uVar8;
    while (uVar6 = (uint)uVar7, uVar4 = uVar8, uVar6 < 8) {
      KeInitializeEvent(param_1 + uVar7 * 0x30 + 0x30,1,1);
      KeInitializeEvent(param_1 + uVar7 * 0x30 + 0x33,1,0);
      KeInitializeEvent(param_1 + uVar7 * 0x30 + 0x36,1,0);
      uVar4 = (ulonglong)DAT_000206e0;
      if (DAT_000206e0 == 0xffffffff) {
        local_res10[0] = 0;
        local_res18[0] = 0;
        PsGetVersion(local_res10,local_res18,0,0);
        if (((local_res10[0] == 6) && (1 < local_res18[0])) || (6 < local_res10[0])) {
          DAT_000206e0 = 0x200;
          uVar4 = 0x200;
        }
        else {
          DAT_000206e0 = 0;
          uVar4 = uVar8;
        }
      }
      puVar3 = (ulonglong *)ExAllocatePoolWithTag(uVar4,0x200240,0x78726d4e);
      param_1[uVar7 * 0x30 + 0x39] = (ulonglong)puVar3;
      if (puVar3 == (ulonglong *)0x0) {
        return 0xc000009a;
      }
      FUN_0001c430(puVar3,0,0x200240);
      *(uint *)(param_1[uVar7 * 0x30 + 0x39] + 0x208) = uVar6;
      uVar4 = IoAllocateMdl(param_1[uVar7 * 0x30 + 0x39],0x200240,0,1,0);
      param_1[uVar7 * 0x30 + 0x3a] = uVar4;
      if (uVar4 == 0) {
        return 0xc000009a;
      }
      MmProbeAndLockPages(uVar4,0,0);
      uVar7 = (ulonglong)(uVar6 + 1);
    }
  }
  return uVar4;
}




void FUN_00013254(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_58;
  ulonglong local_50 [5];
  
  if (param_1 != 0) {
    DbgPrint("MrxFinalizeDeviceExtension Enter\n");
    KeWaitForSingleObject(param_1 + 0x50,0,0,0,0);
    lVar3 = param_1 + 0x180;
    lVar2 = 8;
    do {
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        local_res10 = 0xfffffffffff0bdc0;
        while( true ) {
          iVar1 = KeWaitForSingleObject(lVar3,0,0,0,&local_res10);
          if (iVar1 == 0) break;
          KeSetEvent(lVar3 + 0x30);
        }
        KeSetEvent();
        FUN_00013424(lVar3 + -0x118);
        if (((*(longlong *)(lVar3 + -0x10) != 0) && (*(longlong *)(lVar3 + 0x58) != 0)) &&
           (*(longlong *)(lVar3 + 0x50) != 0)) {
          iVar1 = PsLookupProcessByProcessId();
          if (-1 < iVar1) {
            local_58 = 0;
            FUN_0001c430(local_50,0,0x28);
            KeStackAttachProcess(0,&local_58);
            MmUnmapLockedPages(*(undefined8 *)(lVar3 + 0x58));
            KeUnstackDetachProcess(&local_58);
            ObfDereferenceObject(0);
          }
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined8 *)(lVar3 + -0x10) = 0;
        }
        *(undefined1 *)(lVar3 + -8) = 0;
        if (*(longlong *)(lVar3 + 0x50) != 0) {
          MmUnlockPages();
          IoFreeMdl(*(undefined8 *)(lVar3 + 0x50));
          *(undefined8 *)(lVar3 + 0x50) = 0;
        }
        if ((*(longlong *)(lVar3 + 0x58) == 0) && (*(longlong *)(lVar3 + 0x48) != 0)) {
          ExFreePoolWithTag();
          *(undefined8 *)(lVar3 + 0x48) = 0;
        }
        KeSetEvent(lVar3);
      }
      lVar3 = lVar3 + 0x180;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    KeSetEvent(param_1 + 0x50,0,0);
    DbgPrint("MrxFinalizeDeviceExtension End\n");
  }
  return;
}




void FUN_00013424(longlong param_1)

{
  longlong local_res8 [4];
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    local_res8[0] = 0;
    ObReferenceObjectByHandle(*(longlong *)(param_1 + 0x178),0x1fffff,0,0,local_res8,0);
    if (local_res8[0] != 0) {
      KeWaitForSingleObject(local_res8[0],0,0,0,0);
      ObfDereferenceObject(local_res8[0]);
    }
    ZwClose(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  return;
}




void FUN_000134b0(longlong *param_1)

{
  longlong lVar1;
  wchar_t wVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  uint local_258;
  wchar_t *local_250;
  wchar_t local_248;
  ulonglong local_246 [65];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStack_288;
  uVar14 = 0;
  lVar5 = *(longlong *)(*param_1 + 0x58);
  lVar6 = *(longlong *)(param_1[1] + 8);
  bVar8 = false;
  *(undefined1 *)(lVar6 + 0x2c) = 0;
  uVar4 = **(ushort **)(*(longlong *)(lVar6 + 8) + 0x20);
  local_258 = (uint)**(ushort **)(lVar6 + 0x38) - (uint)uVar4;
  local_250 = (wchar_t *)
              (*(longlong *)(*(ushort **)(lVar6 + 0x38) + 4) + (ulonglong)(uVar4 >> 1) * 2);
  if (*(char *)(lVar6 + 0x2d) == '\x01') {
    uVar10 = 0xffffffffffffffff;
    pwVar12 = L"\\IPC$";
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      wVar2 = *pwVar12;
      pwVar12 = pwVar12 + 1;
    } while (wVar2 != L'\0');
    if ((local_258 >> 1 < ((uint)(~uVar10 - 1) & 0xffff)) ||
       (iVar9 = _wcsnicmp(L"\\IPC$",local_250,~uVar10 - 1), uVar10 = uVar14, iVar9 != 0))
    goto LAB_0001356c;
LAB_0001365b:
    iVar9 = 0;
    puVar7 = *(undefined2 **)(lVar6 + 0x10);
    *puVar7 = 0xff02;
    *(ulonglong *)(puVar7 + 4) = uVar10;
    puVar7[1] = 0x10;
  }
  else {
LAB_0001356c:
    lVar1 = lVar5 + 0x6c0;
    local_268 = 0;
    KeWaitForSingleObject(lVar1,0,0,0);
    local_248 = L'\0';
    FUN_0001c430(local_246,0,0x206);
    uVar11 = lVar5 + 0x6d8;
    do {
      uVar10 = uVar11;
      if (*(char *)(uVar10 + 0x110) != '\0') {
        FUN_0001c430((ulonglong *)&local_248,0,0x208);
        RtlStringCbCopyW(&local_248,0x208,0x1c950);
        RtlStringCbCatW(&local_248,0x208,uVar10);
        uVar11 = 0xffffffffffffffff;
        pwVar12 = &local_248;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          wVar2 = *pwVar12;
          pwVar12 = pwVar12 + 1;
        } while (wVar2 != L'\0');
        if ((local_258 >> 1 == ((uint)(~uVar11 - 1) & 0xffff)) &&
           (iVar9 = _wcsnicmp(&local_248,local_250,~uVar11 - 1), iVar9 == 0)) {
          bVar8 = true;
          break;
        }
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar11 = uVar10 + 0x180;
    } while (uVar13 < 8);
    KeSetEvent(lVar1,0,0);
    if (bVar8) goto LAB_0001365b;
    iVar9 = -0x3fffff34;
  }
  cVar3 = *(char *)(lVar6 + 0x2d);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      *(undefined4 *)(lVar6 + 0x30) = 0x11;
      goto LAB_000136b1;
    }
    if (cVar3 == '\x02') {
      *(undefined4 *)(lVar6 + 0x30) = 0x1b;
      goto LAB_000136b1;
    }
    if (cVar3 == '\x03') {
      *(undefined4 *)(lVar6 + 0x30) = 0x18;
      goto LAB_000136b1;
    }
    if (cVar3 != '\x04') {
      if (cVar3 == '\x05') {
        *(undefined4 *)(lVar6 + 0x30) = 0xc;
      }
      goto LAB_000136b1;
    }
    *(undefined1 *)(lVar6 + 0x2d) = 0;
  }
  *(undefined4 *)(lVar6 + 0x30) = 7;
LAB_000136b1:
  if (iVar9 != 0x103) {
    *(int *)(param_1 + 5) = iVar9;
    *(int *)((longlong)param_1 + 0x2c) = iVar9;
    (*(code *)param_1[0xb])(param_1);
  }
  FUN_00015570(local_38 ^ (ulonglong)auStack_288);
  return;
}




void FUN_0001371c(ushort *param_1,longlong param_2,short *param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short local_18 [12];
  
  psVar4 = (short *)((ulonglong)*param_1 + *(longlong *)(param_1 + 4));
  psVar2 = (short *)(*(longlong *)(param_1 + 4) +
                    (ulonglong)(**(ushort **)(param_2 + 0x20) >> 1) * 2);
  *(short **)(param_3 + 4) = psVar2;
  for (psVar3 = psVar2; (psVar3 < psVar4 && ((*psVar3 != 0x5c || (psVar3 == psVar2))));
      psVar3 = psVar3 + 1) {
  }
  sVar1 = (short)psVar3 - (short)psVar2;
  param_3[1] = sVar1;
  *param_3 = sVar1;
  psVar2 = local_18;
  if (param_4 != (short *)0x0) {
    psVar2 = param_4;
  }
  sVar1 = (short)psVar4 - (short)psVar3;
  *(short **)(psVar2 + 4) = psVar3;
  psVar2[1] = sVar1;
  *psVar2 = sVar1;
  return;
}




undefined4 FUN_0001378c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  uVar1 = 0xc0000010;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58) + 0x2d) == '\x01') {
    uVar1 = ZwFsControlFile(*(undefined8 *)(lVar2 + 8),0,0,0,param_1 + 0xb0,
                            *(undefined4 *)(param_1 + 0x1bc),*(undefined8 *)(param_1 + 0x1c8),
                            *(undefined4 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1d8),
                            *(undefined4 *)(param_1 + 0x1d0));
  }
  return uVar1;
}




undefined8 FUN_00013878(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar4 = RxCreateNetFobx(param_1,*(ushort **)(param_1 + 0x48));
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (lVar4 == 0) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  psVar2 = *(short **)(lVar4 + 0x18);
  if (*psVar2 != -0xfc) {
    *psVar2 = -0xfc;
    psVar2[1] = 0x270;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x40) = 1;
  *(undefined8 *)(lVar1 + 0x38) = 1;
  return 0;
}




ulonglong FUN_00013904(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8) + 0x2d) ==
      '\x01') {
    ZwClose(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  else {
    uVar2 = FUN_000153ac(param_1);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}




void FUN_00013ab0(longlong *param_1)

{
  short sVar1;
  longlong lVar2;
  ushort *puVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  short *psVar7;
  
  lVar2 = *param_1;
  uVar6 = 0xffffffffffffffff;
  puVar3 = *(ushort **)(*(longlong *)(lVar2 + 0x30) + 0x20);
  psVar7 = (short *)PTR_u__EuShare_com_000206e8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    sVar1 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar1 != 0);
  bVar4 = 1;
  if ((ushort)(~uVar6 - 1) <= *puVar3 >> 1) {
    iVar5 = _wcsnicmp((wchar_t *)PTR_u__EuShare_com_000206e8,*(wchar_t **)(puVar3 + 4),~uVar6 - 1);
    if (iVar5 == 0) goto LAB_00013b0d;
  }
  bVar4 = 0;
LAB_00013b0d:
  *(uint *)(param_1 + 3) = ~-(uint)bVar4 & 0xc00000be;
                    /* WARNING: Could not recover jumptable at 0x00013b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_1);
  return;
}




int FUN_00013b3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = IoGetCurrentProcess();
  lVar3 = FUN_000188bc();
  if (lVar2 == lVar3) {
    FUN_00013ab0(param_2);
    iVar1 = (int)param_2[3];
  }
  else {
    iVar1 = RxDispatchToWorkerThread(DAT_00020f40,1,FUN_00013ab0,param_2);
    if (iVar1 == 0) {
      iVar1 = 0x103;
    }
  }
  return iVar1;
}




longlong FUN_00013d2c(short *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = 0;
  lVar2 = 0x104;
  psVar3 = param_1;
  do {
    if (*psVar3 == 0) break;
    psVar3 = psVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (lVar2 == 0) {
    lVar6 = 0xc000000d;
    lVar2 = lVar4;
  }
  else {
    lVar2 = 0x104 - lVar2;
    lVar6 = lVar4;
  }
  if ((int)lVar6 < 0) {
    return lVar6;
  }
  if (0x7ffffffe < param_4 >> 1) {
    return 0xc000000d;
  }
  lVar6 = 0x104 - lVar2;
  psVar3 = param_1 + lVar2;
  if (lVar6 != 0) {
    lVar5 = param_3 - (longlong)psVar3;
    lVar2 = lVar6 + (param_4 >> 1) + -0x104 + lVar2;
    do {
      if ((lVar2 == 0) || (sVar1 = *(short *)(lVar5 + (longlong)psVar3), sVar1 == 0)) break;
      lVar6 = lVar6 + -1;
      *psVar3 = sVar1;
      lVar2 = lVar2 + -1;
      psVar3 = psVar3 + 1;
    } while (lVar6 != 0);
    if (lVar6 != 0) goto LAB_00013dcf;
  }
  psVar3 = psVar3 + -1;
  lVar4 = 0x80000005;
LAB_00013dcf:
  *psVar3 = 0;
  return lVar4;
}




undefined1 FUN_00013de8(longlong param_1)

{
  undefined1 uVar1;
  longlong local_res8;
  longlong local_48 [2];
  undefined4 local_38 [2];
  ulonglong local_30 [2];
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38[0] = 0;
  FUN_0001c430(local_30,0,0x28);
  local_res8 = 0;
  if (param_1 != 0) {
    local_38[0] = 0x30;
    local_30[0] = 0;
    local_20 = 0x200;
    local_30[1] = 0;
    local_18 = 0;
    local_10 = 0;
    local_48[0] = param_1;
    ZwOpenProcess(&local_res8,0x80000000,local_38,local_48);
    if (local_res8 != 0) {
      uVar1 = 1;
      ZwClose();
    }
  }
  return uVar1;
}




ulonglong FUN_00013f04(undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
                      uint *param_5)

{
  ulonglong uVar1;
  undefined8 local_res8;
  undefined4 local_88 [2];
  ulonglong local_80 [2];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint *local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FUN_0001c430(&local_50,0,0x40);
  local_88[0] = 0;
  FUN_0001c430(local_80,0,0x28);
  local_30 = 0;
  local_38 = param_5;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  KeInitializeEvent(local_28,1);
  local_80[0] = 0;
  local_80[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0x30;
  local_70 = 0x200;
  uVar1 = PsCreateSystemThread(&local_res8,0,local_88,0,0,&LAB_00013e88,&local_58);
  *param_5 = (uint)uVar1;
  if (-1 < (int)(uint)uVar1) {
    KeWaitForSingleObject(local_28,0,0,0,0);
    ZwClose(local_res8);
    uVar1 = (ulonglong)*param_5;
  }
  return uVar1;
}




ulonglong FUN_00014044(undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
                      uint *param_5)

{
  ulonglong uVar1;
  undefined8 local_res8;
  undefined4 local_88 [2];
  ulonglong local_80 [2];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint *local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  local_res8 = 0;
  FUN_0001c430(&local_50,0,0x40);
  local_88[0] = 0;
  FUN_0001c430(local_80,0,0x28);
  local_38 = param_5;
  local_30 = 1;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  KeInitializeEvent(local_28,1,0);
  local_80[0] = 0;
  local_80[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0x30;
  local_70 = 0x200;
  uVar1 = PsCreateSystemThread(&local_res8,0,local_88,0,0,&LAB_00013e88,&local_58);
  *param_5 = (uint)uVar1;
  if (-1 < (int)(uint)uVar1) {
    KeWaitForSingleObject(local_28,0,0,0,0);
    ZwClose(local_res8);
    uVar1 = (ulonglong)*param_5;
  }
  return uVar1;
}




void FUN_00014184(longlong param_1)

{
  DbgPrint("MrxWaitForKernalEvent Enter, handle: %I64u\n",*(undefined8 *)(param_1 + 0x178));
  KeWaitForSingleObject(param_1 + 0x148,0,0,0,0);
  KeSetEvent(param_1 + 0x118,0,0);
  DbgPrint("MrxWaitForKernalEvent End, handle: %I64u\n",*(undefined8 *)(param_1 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x000141e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PsTerminateSystemThread(0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_000141f4(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  char local_res8 [8];
  undefined8 local_res10;
  ulonglong local_res18;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined4 local_40;
  
  lVar9 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58);
  if (lVar2 != 0) {
    lVar9 = *(longlong *)(lVar2 + 0x10);
  }
  puVar3 = *(ushort **)(param_1 + 0x48);
  puVar4 = *(ushort **)(puVar3 + 0x1c);
  local_60 = (undefined1  [8])((ulonglong)local_60 & 0xffffffff00000000);
  local_res8[0] = '\0';
  FUN_0001c430((ulonglong *)(local_60 + 4),0,0x24);
  local_78 = (undefined1  [8])((ulonglong)(uint)local_78._4_4_ << 0x20);
  FUN_0001c430((ulonglong *)(local_78 + 4),0,0x14);
  lVar2 = *(longlong *)(lVar9 + 8);
  puVar5 = *(undefined1 **)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 400) & 2) == 0) {
    local_res10 = 0xfffffffffd050f80;
    uVar7 = KeWaitForSingleObject(lVar2 + 0x118,0,0,0,&local_res10);
    uVar11 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      FUN_00013424(lVar2);
      if (*(char *)(lVar2 + 0x110) == '\0') {
        uVar11 = 0xc000000d;
      }
      else {
        local_40 = 0x80;
        local_78 = (undefined1  [8])0x0;
        local_70 = 0;
        local_60 = (undefined1  [8])_DAT_fffff78000000014;
        local_58 = _DAT_fffff78000000014;
        local_50 = _DAT_fffff78000000014;
        local_48 = _DAT_fffff78000000014;
        local_68 = 0;
        psVar6 = *(short **)(lVar2 + 0x160);
        local_res18 = _DAT_fffff78000000014;
        *(undefined1 *)(psVar6 + 0x114) = *puVar5;
        *(undefined1 *)((longlong)psVar6 + 0x229) = puVar5[1];
        lVar9 = *(longlong *)(puVar4 + 4);
        uVar11 = (ulonglong)(*puVar4 >> 1);
        if (uVar11 < 0x7fffffff) {
          lVar10 = 0x104;
          psVar8 = psVar6;
          do {
            if ((uVar11 == 0) ||
               (sVar1 = *(short *)((lVar9 - (longlong)psVar6) + (longlong)psVar8), sVar1 == 0))
            break;
            lVar10 = lVar10 + -1;
            *psVar8 = sVar1;
            uVar11 = uVar11 - 1;
            psVar8 = psVar8 + 1;
          } while (lVar10 != 0);
          if (lVar10 == 0) {
            psVar8 = psVar8 + -1;
          }
          *psVar8 = 0;
        }
        else {
          *psVar6 = 0;
        }
        psVar6[0x108] = 0;
        psVar6[0x109] = 0;
        psVar6[0x10a] = 0;
        psVar6[0x10b] = 0;
        psVar6[0x10c] = 0;
        psVar6[0x10d] = 0;
        psVar6[0x10e] = 0;
        psVar6[0x10f] = 0;
        psVar6[0x11c] = 0;
        psVar6[0x11d] = 0;
        KeSetEvent(lVar2 + 0x130,0,0);
        uVar7 = KeWaitForSingleObject(lVar2 + 0x148,0,0,0,&local_res10);
        uVar11 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uVar11 = (ulonglong)*(uint *)(psVar6 + 0x11c);
          if (-1 < (int)*(uint *)(psVar6 + 0x11c)) {
            lVar9 = RxCreateNetFobx(param_1,puVar3);
            *(longlong *)(param_1 + 0x40) = lVar9;
            if (lVar9 == 0) {
              uVar11 = 0xc000009a;
            }
            else {
              psVar8 = *(short **)(lVar9 + 0x18);
              if (*psVar8 != -0xfc) {
                *psVar8 = -0xfc;
                psVar8[1] = 0x270;
              }
              memcpy(psVar8 + 0x10,psVar6 + 0x11e,0x250);
              *(undefined8 *)(psVar8 + 4) = *(undefined8 *)(psVar6 + 0x108);
              if (*puVar4 != 0) {
                local_60 = *(undefined1 (*) [8])(psVar6 + 0x120);
                local_58 = *(ulonglong *)(psVar6 + 0x124);
                local_50 = *(ulonglong *)(psVar6 + 0x128);
                local_40 = *(undefined4 *)(psVar6 + 0x11e);
                local_78._4_4_ = *(undefined4 *)(psVar6 + 300);
                local_78._0_4_ = *(undefined4 *)(psVar6 + 0x12e);
                local_70 = CONCAT44(*(undefined4 *)(psVar6 + 300),*(undefined4 *)(psVar6 + 0x12e));
              }
              uVar11 = FUN_000244cc(param_1,local_res8,3,2,(longlong)local_60,(longlong)local_78);
              uVar11 = uVar11 & 0xffffffff;
            }
          }
        }
        else {
          DbgPrint("CreateFile WaitForSingleObject Timeout %I64u\n",local_res10);
          PsCreateSystemThread(lVar2 + 0x178,0,0,0,0,FUN_00014184,lVar2);
        }
      }
    }
  }
  else {
    uVar11 = 0xc0000022;
  }
  if (*(longlong *)(lVar2 + 0x178) == 0) {
    KeSetEvent(lVar2 + 0x118,0,0);
  }
  return uVar11;
}




int FUN_00014560(longlong param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  short *psVar7;
  undefined8 uVar8;
  int iVar9;
  short *psVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar16;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar14 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58);
  lVar13 = lVar14;
  if (lVar4 != 0) {
    lVar13 = *(longlong *)(lVar4 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  local_res20 = *(uint *)(param_1 + 0x1d0);
  uVar2 = *(uint *)(param_1 + 0xa8);
  lVar4 = *(longlong *)(param_1 + 0x1c0);
  lVar13 = *(longlong *)(lVar13 + 8);
  puVar5 = *(undefined1 **)(param_1 + 0x30);
  local_58 = *(longlong *)(param_1 + 0x1c8);
  puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x48) + 0x38);
  local_res8 = 0;
  if ((*(byte *)(lVar4 + 10) & 5) != 0) {
    local_60 = *(longlong *)(lVar4 + 0x18);
    goto LAB_00014665;
  }
  if (DAT_000206e4 == -1) {
    local_res10[0] = 0;
    local_res18[0] = 0;
    PsGetVersion(local_res10,local_res18,0,0);
    DAT_000206e4 = 0;
    if (local_res10[0] == 6) {
      if (1 < local_res18[0]) {
LAB_000146c7:
        DAT_000206e4 = 0x40000000;
      }
    }
    else if (6 < local_res10[0]) goto LAB_000146c7;
  }
  local_60 = MmMapLockedPagesSpecifyCache
                       (lVar4,0,1,0,(ulonglong)uVar15 << 0x20,CONCAT44(uVar16,DAT_000206e4) | 0x10);
LAB_00014665:
  local_68 = 0xfffffffffd050f80;
  iVar9 = KeWaitForSingleObject(lVar13 + 0x118,0,0,0,&local_68);
  if (iVar9 == 0) {
    FUN_00013424(lVar13);
    if (*(char *)(lVar13 + 0x110) == '\0') {
      iVar9 = -0x3ffffff3;
    }
    else {
      psVar7 = *(short **)(lVar13 + 0x160);
      *(undefined1 *)(psVar7 + 0x114) = *puVar5;
      *(undefined1 *)((longlong)psVar7 + 0x229) = puVar5[1];
      lVar4 = *(longlong *)(puVar6 + 4);
      uVar11 = (ulonglong)(*puVar6 >> 1);
      if (uVar11 < 0x7fffffff) {
        lVar12 = 0x104;
        psVar10 = psVar7;
        do {
          if ((uVar11 == 0) ||
             (sVar1 = *(short *)((lVar4 - (longlong)psVar7) + (longlong)psVar10), sVar1 == 0))
          break;
          lVar12 = lVar12 + -1;
          *psVar10 = sVar1;
          uVar11 = uVar11 - 1;
          psVar10 = psVar10 + 1;
        } while (lVar12 != 0);
        if (lVar12 == 0) {
          psVar10 = psVar10 + -1;
        }
        *psVar10 = 0;
      }
      else {
        *psVar7 = 0;
      }
      *(undefined8 *)(psVar7 + 0x108) = *(undefined8 *)(lVar14 + 8);
      uVar8 = *(undefined8 *)(lVar14 + 0x18);
      psVar7[0x11c] = 0;
      psVar7[0x11d] = 0;
      *(undefined8 *)(psVar7 + 0x110) = uVar8;
      uVar15 = local_res20;
      if (local_res20 != 0) {
        while( true ) {
          *(uint *)(psVar7 + 0x116) = uVar15;
          *(ulonglong *)(psVar7 + 0x118) = local_58 + (ulonglong)local_res8;
          if (0x200000 < uVar15) {
            psVar7[0x116] = 0;
            psVar7[0x117] = 0x20;
          }
          KeSetEvent(lVar13 + 0x130,0,0);
          iVar9 = KeWaitForSingleObject(lVar13 + 0x148,0,0,0,&local_68);
          if (iVar9 != 0) break;
          iVar9 = *(int *)(psVar7 + 0x11c);
          if (iVar9 < 0) goto LAB_000148a9;
          uVar3 = *(uint *)(psVar7 + 0x116);
          if (((uVar3 == 0) || (0x200000 < uVar3)) || (uVar15 < uVar3)) goto LAB_000148a9;
          memcpy((void *)((ulonglong)local_res8 + local_60),psVar7 + 0x11e,(ulonglong)uVar3);
          local_res8 = local_res8 + *(int *)(psVar7 + 0x116);
          uVar15 = uVar15 - *(int *)(psVar7 + 0x116);
          *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(psVar7 + 0x108);
          *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(psVar7 + 0x110);
          if (uVar15 == 0) goto LAB_000148a9;
        }
        DbgPrint("ReadFile WaitForSingleObject Timeout %I64u\n");
        PsCreateSystemThread(lVar13 + 0x178,0,0,0,0,FUN_00014184,lVar13);
      }
    }
  }
LAB_000148a9:
  if (*(longlong *)(lVar13 + 0x178) == 0) {
    KeSetEvent(lVar13 + 0x118,0,0);
  }
  *(ulonglong *)(param_1 + 0xb8) = (ulonglong)local_res8;
  if (local_res8 != 0) {
    iVar9 = 0;
  }
  FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x10);
  *(uint *)(param_1 + 0xcc) = (-(uint)((~(byte)(uVar2 >> 0xc) & 1) != 0) & 0xfffffff1) + 0x10;
  return iVar9;
}




void FUN_00014914(longlong param_1)

{
  uint uVar1;
  short sVar2;
  wchar_t wVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  short *psVar11;
  wchar_t *pwVar12;
  int *piVar13;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStack_58;
  lVar9 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x58);
  lVar8 = lVar9;
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(lVar7 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  iVar4 = *(int *)(param_1 + 0x170);
  uVar10 = *(uint *)(param_1 + 0x180);
  piVar5 = *(int **)(param_1 + 0x178);
  psVar6 = *(short **)(lVar8 + 8);
  if (iVar4 == 4) {
    if (uVar10 < 0x28) {
      *(undefined8 *)(param_1 + 0xb8) = 0x28;
    }
    else {
      uVar10 = uVar10 - 0x28;
      *piVar5 = *(int *)(lVar9 + 0x24);
      piVar5[1] = *(int *)(lVar9 + 0x28);
      piVar5[2] = *(int *)(lVar9 + 0x2c);
      piVar5[3] = *(int *)(lVar9 + 0x30);
      piVar5[4] = *(int *)(lVar9 + 0x34);
      piVar5[5] = *(int *)(lVar9 + 0x38);
      piVar5[8] = *(int *)(lVar9 + 0x20);
    }
  }
  else if (iVar4 == 5) {
    if (uVar10 < 0x18) {
      *(undefined8 *)(param_1 + 0xb8) = 0x18;
    }
    else {
      piVar5[1] = *(int *)(lVar9 + 0x3c);
      *piVar5 = *(int *)(lVar9 + 0x40);
      piVar5[3] = *(int *)(lVar9 + 0x3c);
      piVar5[2] = *(int *)(lVar9 + 0x40);
      uVar10 = uVar10 - 0x18;
      *(byte *)((longlong)piVar5 + 0x15) = *(byte *)(lVar9 + 0x20) & 0x10;
    }
  }
  else if (iVar4 == 6) {
    if (uVar10 < 8) {
      *(undefined8 *)(param_1 + 0xb8) = 8;
    }
    else {
      uVar10 = uVar10 - 8;
    }
  }
  else if (iVar4 == 7) {
    if (uVar10 < 4) {
      *(undefined8 *)(param_1 + 0xb8) = 4;
    }
    else {
      uVar10 = uVar10 - 4;
    }
  }
  else if (iVar4 == 0x22) {
    if (uVar10 < 0x38) {
      *(undefined8 *)(param_1 + 0xb8) = 0x38;
    }
    else {
      uVar10 = uVar10 - 0x38;
      *piVar5 = *(int *)(lVar9 + 0x24);
      piVar5[1] = *(int *)(lVar9 + 0x28);
      piVar5[2] = *(int *)(lVar9 + 0x2c);
      piVar5[3] = *(int *)(lVar9 + 0x30);
      piVar5[4] = *(int *)(lVar9 + 0x34);
      piVar5[5] = *(int *)(lVar9 + 0x38);
      piVar5[9] = *(int *)(lVar9 + 0x3c);
      piVar5[8] = *(int *)(lVar9 + 0x40);
      piVar5[0xb] = *(int *)(lVar9 + 0x3c);
      piVar5[10] = *(int *)(lVar9 + 0x40);
      piVar5[0xc] = *(int *)(lVar9 + 0x20);
    }
  }
  else if (iVar4 == 0x31) {
    lVar7 = -1;
    psVar11 = psVar6;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      sVar2 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar2 != 0);
    lVar8 = -1;
    pwVar12 = L"\\127.0.0.1\\";
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      wVar3 = *pwVar12;
      pwVar12 = pwVar12 + 1;
    } while (wVar3 != L'\0');
    uVar1 = (~(uint)lVar7 + (~(uint)lVar8 - 2)) * 2 + 8;
    if (uVar10 < uVar1) {
      *(ulonglong *)(param_1 + 0xb8) = (ulonglong)uVar1;
    }
    else {
      piVar13 = piVar5 + 1;
      RtlStringCbCopyW((short *)piVar13,(ulonglong)uVar1,0x1cf90);
      RtlStringCbCatW((short *)piVar13,(ulonglong)uVar1,(longlong)psVar6);
      lVar7 = -1;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        iVar4 = *piVar13;
        piVar13 = (int *)((longlong)piVar13 + 2);
      } while ((short)iVar4 != 0);
      uVar10 = uVar10 - uVar1;
      *piVar5 = (~(uint)lVar7 - 1) * 2;
    }
  }
  *(uint *)(param_1 + 0x180) = uVar10;
  FUN_00015570(local_38 ^ (ulonglong)auStack_58);
  return;
}




undefined8 FUN_000153ac(longlong param_1)

{
  short sVar1;
  ushort *puVar2;
  longlong lVar3;
  short *psVar4;
  undefined8 uVar5;
  int iVar6;
  short *psVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res8;
  
  lVar9 = 0;
  lVar10 = lVar9;
  if (param_1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x18);
  }
  puVar2 = *(ushort **)(*(longlong *)(param_1 + 8) + 0x38);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8);
  if (lVar3 != 0) {
    lVar9 = *(longlong *)(lVar3 + 0x10);
  }
  lVar9 = *(longlong *)(lVar9 + 8);
  local_res8 = 0xfffffffffd050f80;
  iVar6 = KeWaitForSingleObject(lVar9 + 0x118,0,0,0,&local_res8);
  if (iVar6 == 0) {
    FUN_00013424(lVar9);
    if (*(char *)(lVar9 + 0x110) != '\0') {
      psVar4 = *(short **)(lVar9 + 0x160);
      *(undefined1 *)(psVar4 + 0x114) = 2;
      lVar3 = *(longlong *)(puVar2 + 4);
      uVar8 = (ulonglong)(*puVar2 >> 1);
      if (uVar8 < 0x7fffffff) {
        lVar11 = 0x104;
        psVar7 = psVar4;
        do {
          if ((uVar8 == 0) ||
             (sVar1 = *(short *)((lVar3 - (longlong)psVar4) + (longlong)psVar7), sVar1 == 0)) break;
          lVar11 = lVar11 + -1;
          *psVar7 = sVar1;
          uVar8 = uVar8 - 1;
          psVar7 = psVar7 + 1;
        } while (lVar11 != 0);
        if (lVar11 == 0) {
          psVar7 = psVar7 + -1;
        }
        *psVar7 = 0;
      }
      else {
        *psVar4 = 0;
      }
      *(undefined8 *)(psVar4 + 0x108) = *(undefined8 *)(lVar10 + 8);
      uVar5 = *(undefined8 *)(lVar10 + 0x10);
      psVar4[0x11c] = 0;
      psVar4[0x11d] = 0;
      *(undefined8 *)(psVar4 + 0x10c) = uVar5;
      KeSetEvent(lVar9 + 0x130,0,0);
      iVar6 = KeWaitForSingleObject(lVar9 + 0x148,0,0,0,&local_res8);
      if (iVar6 != 0) {
        DbgPrint("QueryInformation WaitForSingleObject Timeout %I64u\n",local_res8);
        PsCreateSystemThread(lVar9 + 0x178,0,0,0,0,FUN_00014184,lVar9);
      }
    }
  }
  if (*(longlong *)(lVar9 + 0x178) == 0) {
    KeSetEvent(lVar9 + 0x118,0,0);
  }
  return 0;
}




void FUN_00015570(longlong param_1)

{
  if ((param_1 == DAT_00020100) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0xf7,param_1,DAT_00020100,DAT_00020108,0);
}




/* Library Function - Single Match
    RxStopMinirdr
   
   Library: Visual Studio 2019 Release */

uint RxStopMinirdr(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if ((~(byte)(*(uint *)(param_1 + 0xa8) >> 9) & 1) == 0) {
    cVar5 = ExAcquireResourceExclusiveLite
                      (&DAT_000214d0,
                       CONCAT71((int7)((ulonglong)param_2 >> 8),
                                (char)(*(uint *)(param_1 + 0xa8) >> 1)) & 0xffffffffffffff01);
    if (cVar5 == '\0') {
      *param_2 = 1;
      uVar7 = 0x103;
    }
    else {
      if (*(int *)(lVar2 + 0x280) == 1) {
        RxTerminateScavenging(param_1);
        uVar6 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
        lVar3 = *(longlong *)(param_1 + 8);
        plVar4 = *(longlong **)(param_1 + 0x10);
        *plVar4 = lVar3;
        *(longlong **)(lVar3 + 8) = plVar4;
        *(undefined4 *)(lVar2 + 0x280) = 2;
        *(longlong *)(lVar2 + 0x288) = param_1;
        KeReleaseSpinLock(&DAT_00020e70,CONCAT71((int7)((ulonglong)lVar3 >> 8),uVar6));
        LOCK();
        piVar1 = (int *)(lVar2 + 0x1ac);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 != 0) {
          *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x100000;
          KeWaitForSingleObject(param_1 + 0x130,0,0,0,0);
        }
        RxUnstart(param_1,lVar2);
        RxSpinDownMRxDispatcher(lVar2);
        if ((DAT_00021698 != 0) && (*(code **)(DAT_00021698 + 0x28) != (code *)0x0)) {
          (**(code **)(DAT_00021698 + 0x28))(param_1);
        }
        if ((*(longlong *)(*(longlong *)(lVar2 + 0x168) + 0x28) != 0) &&
           ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          (**(code **)(*(longlong *)(lVar2 + 0x168) + 0x28))(param_1,lVar2);
        }
        uVar7 = -(uint)(*(int *)(lVar2 + 0x1a8) != 0) & 0x80000023;
        RxSpinDownMRxDispatcher(lVar2);
        uVar6 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
        *(undefined4 *)(lVar2 + 0x280) = 0;
        KeReleaseSpinLock(&DAT_00020e70,uVar6);
      }
      else {
        uVar7 = 0xc00000fb;
      }
      ExReleaseResourceLite(&DAT_000214d0);
    }
  }
  else {
    *param_2 = 1;
    uVar7 = 0x103;
  }
  return uVar7;
}




/* Library Function - Single Match
    RxStartMinirdr
   
   Library: Visual Studio 2019 Release */

int RxStartMinirdr(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong local_50 [5];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  bVar2 = false;
  if ((~(byte)(*(uint *)(param_1 + 0xa8) >> 9) & 1) == 0) {
    cVar3 = ExAcquireResourceExclusiveLite
                      (&DAT_000214d0,
                       CONCAT71((int7)((ulonglong)param_2 >> 8),
                                (char)(*(uint *)(param_1 + 0xa8) >> 1)) & 0xffffffffffffff01);
    if (cVar3 == '\0') {
      *param_2 = 1;
      iVar5 = 0x103;
    }
    else {
      cVar3 = ExAcquireResourceExclusiveLite
                        (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18);
      if (cVar3 == '\0') {
        ExReleaseResourceLite(&DAT_000214d0);
        *param_2 = 1;
        iVar5 = 0x103;
      }
      else {
        if (*(int *)(lVar1 + 0x280) == 1) {
          bVar2 = true;
          iVar5 = -0x3fffff04;
        }
        else if (*(longlong *)(*(longlong *)(lVar1 + 0x168) + 0x20) == 0) {
          iVar5 = -0x3ffffffe;
        }
        else {
          if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
            FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
            iVar5 = (**(code **)(*(longlong *)(lVar1 + 0x168) + 0x20))(param_1,lVar1);
          }
          else {
            iVar5 = -0x3ffffee0;
          }
          if (iVar5 == 0) {
            *(int *)(lVar1 + 0x284) = *(int *)(lVar1 + 0x284) + 1;
            uVar4 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
            *(undefined4 *)(lVar1 + 0x280) = 1;
            KeReleaseSpinLock(&DAT_00020e70,uVar4);
            LOCK();
            DAT_00021450 = DAT_00021450 + 1;
            UNLOCK();
            uVar6 = RxInitializeMRxDispatcher(lVar1);
            iVar5 = (int)uVar6;
            bVar2 = false;
          }
        }
        if ((iVar5 < 0) && (!bVar2)) {
          RxUnstart(param_1,lVar1);
        }
        ExReleaseResourceLite(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18);
        ExReleaseResourceLite(&DAT_000214d0);
      }
    }
  }
  else {
    SeCaptureSubjectContext(local_50);
    uVar6 = RxGetUid(local_50);
    *(undefined8 *)(param_1 + 400) = uVar6;
    SeReleaseSubjectContext(local_50);
    *param_2 = 1;
    iVar5 = 0x103;
  }
  return iVar5;
}




/* Library Function - Single Match
    RxSpinDownOutstandingAsynchronousRequests
   
   Library: Visual Studio 2019 Release */

void RxSpinDownOutstandingAsynchronousRequests(longlong param_1)

{
  int iVar1;
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  iVar1 = *(int *)(param_1 + 0x270);
  *(undefined1 **)(param_1 + 0x278) = local_28;
  KeReleaseMutex(&DAT_00021800,0);
  if (iVar1 != 0) {
    KeWaitForSingleObject(local_28,0,0,0,0);
  }
  return;
}




/* Library Function - Single Match
    RxIsMemberOfTopLevelIrpAllocatedContextsList
   
   Library: Visual Studio 2019 Release */

undefined1 RxIsMemberOfTopLevelIrpAllocatedContextsList(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_000211a8);
  puVar2 = DAT_000211b0;
  do {
    if ((undefined8 **)puVar2 == &DAT_000211b0) {
LAB_00015a2b:
      KeReleaseSpinLock(&DAT_000211a8,uVar1);
      return uVar3;
    }
    if (puVar2 == param_1) {
      uVar3 = 1;
      goto LAB_00015a2b;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}




/* Library Function - Single Match
    RxSystemControl
   
   Library: Visual Studio 2019 Release */

ulonglong RxSystemControl(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 local_38 [16];
  undefined *local_28;
  undefined4 local_20;
  undefined1 *local_10;
  
  if (DAT_00020e05 == '\0') {
    uVar1 = 0xc0000010;
    *(undefined4 *)(param_2 + 0x30) = 0xc0000010;
    IofCompleteRequest(param_2,0);
  }
  else {
    RtlInitUnicodeString(local_38);
    FUN_0001c430((ulonglong *)&local_28,0,0x20);
    local_10 = local_38;
    local_28 = &DAT_000204a0;
    local_20 = 1;
    uVar1 = WmlTinySystemControl((longlong *)&local_28,param_1,param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}




/* Library Function - Single Match
    RxIsThisAnRdbssTopLevelContext
   
   Library: Visual Studio 2019 Release */

undefined1 RxIsThisAnRdbssTopLevelContext(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong local_res8;
  undefined8 *local_res10 [3];
  
  if ((undefined8 *)0xffff < param_1) {
    IoGetStackLimits(local_res10,&local_res8);
    if (((undefined8 *)(local_res8 + -0x48) < param_1) || (param_1 < local_res10[0])) {
      uVar1 = RxIsMemberOfTopLevelIrpAllocatedContextsList(param_1);
      return uVar1;
    }
    if ((((ulonglong)param_1 & 3) == 0) && (*(int *)(param_1 + 2) == 0x4c547852)) {
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    RxRemoveFromTopLevelIrpAllocatedContextsList
   
   Library: Visual Studio 2019 Release */

void RxRemoveFromTopLevelIrpAllocatedContextsList(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = KeAcquireSpinLockRaiseToDpc(&DAT_000211a8);
  plVar1 = (longlong *)param_1[1];
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(longlong **)(lVar2 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00015b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(&DAT_000211a8,CONCAT71((int7)((ulonglong)plVar1 >> 8),uVar3));
  return;
}




/* Library Function - Single Match
    RxAddToTopLevelIrpAllocatedContextsList
   
   Library: Visual Studio 2019 Release */

void RxAddToTopLevelIrpAllocatedContextsList(longlong *param_1)

{
  undefined1 uVar1;
  
  uVar1 = KeAcquireSpinLockRaiseToDpc(&DAT_000211a8);
  *param_1 = (longlong)DAT_000211b0;
  param_1[1] = (longlong)&DAT_000211b0;
  *(longlong **)((longlong)DAT_000211b0 + 8) = param_1;
  DAT_000211b0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00015bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseSpinLock(&DAT_000211a8,uVar1);
  return;
}




/* Library Function - Single Match
    RxGetTopDeviceObjectIfRdbssIrp
   
   Library: Visual Studio 2019 Release */

undefined8 RxGetTopDeviceObjectIfRdbssIrp(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)IoGetTopLevelIrp();
  cVar1 = RxIsThisAnRdbssTopLevelContext(puVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar2[3];
  }
  return uVar3;
}




/* Library Function - Single Match
    RxGetTopIrpIfRdbssIrp
   
   Library: Visual Studio 2019 Release */

undefined8 RxGetTopIrpIfRdbssIrp(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)IoGetTopLevelIrp();
  cVar1 = RxIsThisAnRdbssTopLevelContext(puVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar2[5];
  }
  return uVar3;
}




/* Library Function - Single Match
    RxIsThisTheTopLevelIrp
   
   Library: Visual Studio 2019 Release */

bool RxIsThisTheTopLevelIrp(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)IoGetTopLevelIrp();
  cVar1 = RxIsThisAnRdbssTopLevelContext(puVar2);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)puVar2[5];
  }
  return puVar2 == param_1;
}




/* Library Function - Single Match
    RxUnwindTopLevelIrp
   
   Library: Visual Studio 2019 Release */

void RxUnwindTopLevelIrp(longlong *param_1)

{
  if ((param_1 == (longlong *)0x0) &&
     (param_1 = (longlong *)IoGetTopLevelIrp(), param_1 == (longlong *)0x0)) {
    return;
  }
  IoSetTopLevelIrp(param_1[7]);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    RxRemoveFromTopLevelIrpAllocatedContextsList(param_1);
    ExFreePoolWithTag(param_1,0);
  }
  return;
}




/* Library Function - Single Match
    __RxInitializeTopLevelIrpContext
   
   Library: Visual Studio 2019 Release */

void __RxInitializeTopLevelIrpContext
               (ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  
  FUN_0001c430(param_1,0,0x48);
  *(undefined4 *)(param_1 + 2) = 0x4c547852;
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = param_4;
  param_1[3] = param_3;
  uVar1 = IoGetTopLevelIrp();
  param_1[7] = uVar1;
  param_1[8] = (ulonglong)SystemReserved1[0xf];
  if ((param_1[6] & 1) != 0) {
    RxAddToTopLevelIrpAllocatedContextsList((longlong *)param_1);
  }
  return;
}




/* Library Function - Single Match
    RxFsdCommonDispatch
   
   Library: Visual Studio 2019 Release */

ulonglong RxFsdCommonDispatch(undefined **param_1,undefined8 *param_2,longlong param_3,
                             ulonglong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  code *pcVar17;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_98;
  code *local_90;
  ulonglong local_88 [10];
  
  uVar10 = 0;
  uVar16 = 0;
  pbVar1 = (byte *)param_2[0x17];
  bVar5 = false;
  bVar7 = false;
  KeEnterCriticalRegion();
  lVar11 = IoGetTopLevelIrp();
  if (lVar11 == 0) {
    __RxInitializeTopLevelIrpContext(local_88,(ulonglong)param_2,param_4,0);
    IoSetTopLevelIrp(local_88);
  }
  cVar8 = '\x01';
  bVar6 = true;
  if (*pbVar1 == 2) {
LAB_00015e3d:
    bVar6 = false;
    bVar5 = true;
  }
  else if (2 < *pbVar1) {
    if (0xc < *pbVar1) {
      if (*pbVar1 == 0xd) {
        if (param_3 == 0) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = IoIsOperationSynchronous(param_2);
        }
        goto LAB_00015e4a;
      }
      if ((*pbVar1 != 0xe) && (*pbVar1 != 0x11)) {
        if (*pbVar1 == 0x12) goto LAB_00015e3d;
        if ((*pbVar1 < 0x14) || (0x15 < *pbVar1)) goto LAB_00015e4a;
      }
    }
    cVar8 = IoIsOperationSynchronous(param_2);
  }
LAB_00015e4a:
  uVar9 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  bVar4 = true;
  if (*(int *)(param_4 + 0x280) == 0) {
    if ((param_1 == &PTR_LAB_000202e0) ||
       ((*(short *)(param_3 + 0x58) == 0 && (*(longlong *)(param_3 + 0x40) == 0)))) {
      if (((*pbVar1 == 0xe) || (*pbVar1 == 0xf)) &&
         ((*(int *)(pbVar1 + 0x18) == 0x14018f || (*(int *)(pbVar1 + 0x18) == 0x140193)))) {
        bVar4 = false;
        uVar16 = 0xc00000fb;
      }
    }
    else {
      bVar4 = false;
      uVar16 = 0xc00000fb;
    }
  }
  else if ((*(int *)(param_4 + 0x280) == 2) && (uVar16 = 0, !bVar5)) {
    bVar4 = false;
    uVar16 = 0xc00000fb;
  }
  KeReleaseSpinLock(&DAT_00020e70,uVar9);
  lVar2 = *(longlong *)(pbVar1 + 0x30);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) {
    local_a0 = *(longlong *)(lVar2 + 0x18);
    bVar14 = 0;
    if (((*(longlong *)(lVar2 + 0x20) != 0xff444653) &&
        (((lVar3 = *(longlong *)(lVar2 + 0x20), lVar3 != 0x11444653 &&
          (*(undefined **)(lVar2 + 0x18) != &DAT_00021560)) &&
         (uVar15 = *(uint *)(local_a0 + 0x74) >> 7, bVar14 = (byte)uVar15 & 1, (uVar15 & 1) == 0))))
       && ((lVar3 != 0 && (*(longlong *)(lVar3 + 8) != 0)))) {
      bVar14 = (byte)(*(uint *)(*(longlong *)(lVar3 + 8) + 0x30) >> 10) & 1;
    }
    if (bVar14 != 0) {
      if (bVar5) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        uVar16 = 0xc00000c4;
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(3,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
      }
    }
  }
  if (bVar4) {
    if (cVar8 != '\0') {
      uVar10 = 2;
    }
    puVar12 = RxCreateRxContext(param_2,param_4,uVar10);
    if (puVar12 == (ulonglong *)0x0) {
      uVar16 = 0xc000009a;
      RxCompleteRequest_Real(DAT_00020f10,(longlong)param_2,0xc000009a);
    }
    else {
      if (bVar6) {
        LOCK();
        param_2[0xd] = RxCancelRoutine;
        UNLOCK();
      }
      else {
        LOCK();
        param_2[0xd] = 0;
        UNLOCK();
      }
      param_2[7] = 0;
      *(undefined4 *)(param_2 + 6) = 0;
      bVar14 = *pbVar1;
      pcVar17 = (code *)param_1[(ulonglong)bVar14 * 2];
      local_90 = pcVar17;
      if ((byte)(bVar14 - 3) < 2) {
        if ((pbVar1[1] & 4) == 0) {
          if ((pbVar1[1] & 1) == 0) {
            if ((bVar14 == 3) &&
               (IoGetStackLimits(&local_98,local_a8), local_a8 + -local_98 < (undefined1 *)0xe00)) {
              *(undefined1 *)((longlong)puVar12 + 0x1a) = 1;
              uVar13 = RxPostStackOverflowRead
                                 ((longlong)puVar12,
                                  *(longlong *)(*(longlong *)(pbVar1 + 0x30) + 0x18));
              uVar16 = uVar13 & 0xffffffff;
              if ((int)uVar13 != 0x103) {
                *(undefined1 *)((longlong)puVar12 + 0x1a) = 0;
                RxCompleteRequest((longlong)puVar12,uVar13 & 0xffffffff);
              }
              goto LAB_00016295;
            }
          }
          else {
            bVar7 = true;
          }
        }
        else {
          pcVar17 = RxCompleteMdl;
          local_90 = RxCompleteMdl;
          bVar7 = false;
        }
      }
      puVar12[0x1e] = (ulonglong)pcVar17;
      if (pcVar17 == (code *)0x0) {
        uVar16 = 0xc0000002;
      }
      else {
        *(undefined1 *)((longlong)puVar12 + 0x1a) = 1;
        if (bVar7) {
          uVar16 = RxFsdPostRequest((longlong)puVar12);
          uVar16 = uVar16 & 0xffffffff;
        }
        else {
          do {
            uVar10 = (*pcVar17)(puVar12,param_2);
            uVar16 = (ulonglong)uVar10;
          } while (uVar10 == 0xc000022d);
          if (uVar10 != 0x103) {
            if (((((undefined8 *)puVar12[5] != param_2) || ((byte *)puVar12[6] != pbVar1)) ||
                ((byte)puVar12[3] != *pbVar1)) || (*(byte *)((longlong)puVar12 + 0x19) != pbVar1[1])
               ) {
              DbgPrint("RXCONTEXT CONTAMINATED!!!! rxc=%08lx\n",puVar12);
              DbgPrint("-irp> %08lx %08lx\n",puVar12[5],param_2);
              DbgPrint("--sp> %08lx %08lx\n",puVar12[6],pbVar1);
              DbgPrint("--mj> %08lx %08lx\n",(char)puVar12[3],*pbVar1);
              DbgPrint("--mn> %08lx %08lx\n",*(undefined1 *)((longlong)puVar12 + 0x19),pbVar1[1]);
            }
            *(undefined1 *)((longlong)puVar12 + 0x1a) = 0;
            uVar16 = RxCompleteRequest((longlong)puVar12,uVar16);
            uVar16 = uVar16 & 0xffffffff;
          }
        }
      }
    }
  }
  else if ((*pbVar1 == 0xc) && (pbVar1[1] == 2)) {
    *(int *)(param_2 + 6) = (int)uVar16;
    param_2[7] = 0;
    IofCompleteRequest(param_2,0);
  }
  else {
    *(byte *)(param_2[0x17] + 3) = *(byte *)(param_2[0x17] + 3) | 1;
    *(int *)(param_2 + 6) = (int)uVar16;
    param_2[7] = 0;
    IofCompleteRequest(param_2,0);
    uVar16 = 0x103;
  }
LAB_00016295:
  if (lVar11 == 0) {
    RxUnwindTopLevelIrp((longlong *)local_88);
  }
  KeLeaveCriticalRegion();
  return uVar16;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxCcLogError
   
   Library: Visual Studio 2019 Release */

undefined1
RxCcLogError(undefined8 param_1,ushort *param_2,int param_3,undefined4 param_4,undefined1 param_5,
            undefined8 param_6)

{
  undefined1 *_Dst;
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  uVar4 = 0;
  if ((longlong)(int)(*param_2 + 0x30) + 2U < 0xf1) {
    bVar3 = (char)(*param_2 + 0x30) + 2;
  }
  else {
    bVar3 = 0xf0;
  }
  if (param_3 == -0x7ffbffce) {
    IoRaiseInformationalHardError(0xc0000222,param_2,0);
    LOCK();
    _DAT_00020e10 = _DAT_00020e10 + 1;
    UNLOCK();
    _DAT_00021190 = _DAT_fffff78000000014;
    _DAT_000211a0 = param_6;
    _DAT_00021198 = param_4;
  }
  puVar2 = (undefined1 *)IoAllocateErrorLogEntry(param_1,bVar3);
  if (puVar2 != (undefined1 *)0x0) {
    *(int *)(puVar2 + 0xc) = param_3;
    *(undefined4 *)(puVar2 + 0x14) = param_4;
    *puVar2 = param_5;
    *(undefined4 *)(puVar2 + 0x28) = param_4;
    *(undefined2 *)(puVar2 + 2) = 4;
    *(undefined2 *)(puVar2 + 4) = 1;
    *(undefined2 *)(puVar2 + 6) = 0x30;
    _Dst = puVar2 + 0x30;
    uVar7 = bVar3 - 0x32;
    if (uVar7 < *param_2) {
      uVar1 = (uVar7 >> 2) * 2 - 4;
      uVar7 = (uVar7 - uVar1) - 8;
      memcpy(_Dst,*(void **)(param_2 + 4),(ulonglong)uVar1);
      puVar5 = (undefined8 *)(_Dst + uVar1);
      *puVar5 = 0x20002e002e0020;
      memcpy(puVar5 + 1,(void *)((ulonglong)(*param_2 - uVar7) + *(longlong *)(param_2 + 4)),
             (ulonglong)uVar7);
      puVar6 = (undefined2 *)((longlong)(puVar5 + 1) + (ulonglong)uVar7);
    }
    else {
      memcpy(_Dst,*(void **)(param_2 + 4),(ulonglong)*param_2);
      puVar6 = (undefined2 *)(_Dst + (ulonglong)(*param_2 >> 1) * 2);
    }
    *puVar6 = 0;
    IoWriteErrorLogEntry(puVar2);
    uVar4 = 1;
  }
  return uVar4;
}




/* Library Function - Single Match
    RxLogEventWithAnnotation
   
   Library: Visual Studio 2019 Release */

void RxLogEventWithAnnotation
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
               ushort param_5,ushort *param_6,uint param_7)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined2 *_Dst;
  ushort *puVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_7;
  uVar2 = 0;
  uVar4 = 0;
  puVar5 = param_6;
  uVar6 = uVar3;
  if (param_7 != 0) {
    do {
      uVar6 = uVar6 - 1;
      uVar2 = (ulonglong)((int)uVar2 + 2 + (uint)*puVar5);
      puVar5 = puVar5 + 8;
    } while (uVar6 != 0);
  }
  if (param_4 != (void *)0x0) {
    uVar4 = param_5 + 1 & 0xfffe;
  }
  if ((uVar4 + 0x30 + (int)uVar2 < 0x100) &&
     (puVar1 = (undefined1 *)
               IoAllocateErrorLogEntry
                         (param_1,CONCAT71((int7)(uVar2 >> 8),(char)uVar2 + (char)uVar4 + '0')),
     puVar1 != (undefined1 *)0x0)) {
    *(undefined4 *)(puVar1 + 0xc) = param_2;
    *(undefined4 *)(puVar1 + 0x14) = param_3;
    *(ushort *)(puVar1 + 2) = param_5;
    *(short *)(puVar1 + 4) = (short)param_7;
    *(ushort *)(puVar1 + 6) = uVar4 + 0x28;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    if (param_4 != (void *)0x0) {
      memcpy(puVar1 + 0x28,param_4,(ulonglong)param_5);
    }
    _Dst = (undefined2 *)(puVar1 + (ulonglong)uVar4 + 0x28);
    if (param_7 != 0) {
      do {
        memcpy(_Dst,*(void **)(param_6 + 4),(ulonglong)*param_6);
        uVar4 = *param_6;
        param_6 = param_6 + 8;
        _Dst[uVar4 >> 1] = 0;
        _Dst = _Dst + (uVar4 >> 1) + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    IoWriteErrorLogEntry(puVar1);
  }
  return;
}




/* Library Function - Single Match
    RxLogEventDirect
   
   Library: Visual Studio 2019 Release */

void RxLogEventDirect(undefined8 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = param_5;
  if ((param_2 == (ushort *)0x0) || (*param_2 == 0)) {
    param_2 = (ushort *)&DAT_000204f0;
  }
  local_res14 = param_4;
  RxLogEventWithAnnotation(param_1,param_3,param_4,&local_res10,8,param_2,1);
  return;
}




/* Library Function - Single Match
    RxFastIoDeviceControl
   
   Library: Visual Studio 2019 Release */

undefined1
RxFastIoDeviceControl
          (longlong param_1,undefined1 param_2,uint *param_3,int param_4,undefined8 param_5,
          undefined4 param_6,int param_7,uint *param_8,longlong param_9)

{
  ushort *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined4 in_register_0000008c;
  longlong local_18 [2];
  
  if (param_7 == 0x1400f0) {
    uVar7 = 1;
    if (param_4 == 8) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      iVar5 = ObReferenceObjectByHandle
                        (*(undefined8 *)param_3,0,*(undefined8 *)IoFileObjectType_exref,
                         CONCAT71((int7)(CONCAT44(in_register_0000008c,param_4) >> 8),1),local_18,0)
      ;
      if (iVar5 == 0) {
        if (((*(longlong *)(local_18[0] + 8) == param_9) &&
            (puVar1 = *(ushort **)(local_18[0] + 0x18), puVar1 != (ushort *)0x0)) &&
           (((*puVar1 & 0xff00) == 0xec00 || ((*puVar1 & 0xfff0) == 0xeb90)))) {
          *param_8 = -(uint)(*(longlong *)(*(longlong *)(lVar3 + 0x58) + 8) !=
                            *(longlong *)(*(longlong *)(puVar1 + 0x2c) + 8)) & 0xc00000d4;
        }
        ObfDereferenceObject();
      }
      else {
        *param_8 = 0xc000000d;
      }
    }
    else {
      *param_8 = 0xc000000d;
    }
  }
  else if (param_7 == 0x140397) {
    *param_8 = 0xc00000bb;
    param_8[2] = 0;
    param_8[3] = 0;
    if (((((*(byte *)(param_1 + 0x50) & 2) == 0) && (param_3 != (uint *)0x0)) && (param_4 == 0x10))
       && (((*(short **)(param_1 + 0x18) != (short *)0x0 &&
            (**(short **)(param_1 + 0x18) == -0x13fd)) &&
           ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0 ||
            (**(longlong **)(param_1 + 0x28) == 0)))))) {
      KeSetEvent(param_1 + 0x98,0,0);
      *param_8 = *param_3;
      *(undefined8 *)(param_8 + 2) = *(undefined8 *)(param_3 + 2);
    }
    uVar7 = 1;
  }
  else if (param_7 == 0x14039b) {
    *param_8 = 0xc00000bb;
    param_8[2] = 0;
    param_8[3] = 0;
    if ((((*(byte *)(param_1 + 0x50) & 2) == 0) && (*(short **)(param_1 + 0x18) != (short *)0x0)) &&
       ((**(short **)(param_1 + 0x18) == -0x13fd &&
        ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0 ||
         (**(longlong **)(param_1 + 0x28) == 0)))))) {
      KeClearEvent(param_1 + 0x98);
      *param_8 = 0;
      *(ulonglong *)(param_8 + 2) = (ulonglong)*(byte *)(param_1 + 0x48);
    }
    uVar7 = 1;
  }
  else {
    puVar1 = *(ushort **)(param_1 + 0x18);
    uVar7 = 0;
    if (((puVar1 != (ushort *)0x0) &&
        ((((uVar6 = *puVar1, (uVar6 & 0xff00) == 0xec00 || (uVar6 = uVar6 & 0xfff0, uVar6 == 0xeb90)
           ) && ((puVar1[0x3a] & 8) != 0)) &&
         ((*(longlong *)(puVar1 + 0xa0) != 0 &&
          (pcVar2 = *(code **)(*(longlong *)(puVar1 + 0xa0) + 0x50), pcVar2 != (code *)0x0)))))) &&
       (cVar4 = (*pcVar2)(param_1,CONCAT11((char)(uVar6 >> 8),param_2),param_3,param_4,param_5,
                          param_6,param_7,param_8,param_9), cVar4 != '\0')) {
      uVar7 = 1;
    }
  }
  return uVar7;
}




/* Library Function - Single Match
    RxCancelOperationInOverflowQueue
   
   Library: Visual Studio 2019 Release */

char RxCancelOperationInOverflowQueue(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  
  lVar3 = DAT_00021538;
  cVar5 = '\0';
  uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00021538 + 0x268);
  if (((*(uint *)(param_1 + 0xa8) & 0x18000) != 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x128);
    lVar2 = *(longlong *)(param_1 + 0x120);
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
    *(undefined8 *)(param_1 + 0x120) = 0;
    if ((*(uint *)(param_1 + 0xa8) >> 0x10 & 1) == 0) {
      *(int *)(lVar3 + 0x230) = *(int *)(lVar3 + 0x230) + -1;
    }
    else {
      *(int *)(lVar3 + 0x22c) = *(int *)(lVar3 + 0x22c) + -1;
    }
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffe7fff;
    cVar5 = '\x01';
  }
  KeReleaseSpinLock(lVar3 + 0x268,uVar4);
  if (cVar5 != '\0') {
    RxRemoveOperationFromBlockingQueue(param_1);
    RxCompleteRequest(param_1,0xc0000120);
  }
  return cVar5;
}




/* Library Function - Single Match
    RxRemoveOverflowEntry
   
   Library: Visual Studio 2019 Release */

longlong * RxRemoveOverflowEntry(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = (longlong)param_2;
  uVar4 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x268);
  uVar2 = *(uint *)(param_1 + 0x22c + lVar6 * 4);
  plVar5 = (longlong *)(ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    plVar7 = (longlong *)0x0;
    LOCK();
    piVar1 = (int *)(param_1 + 0x220 + lVar6 * 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    *(uint *)(param_1 + 0x22c + lVar6 * 4) = uVar2 - 1;
    plVar5 = (longlong *)(param_1 + 0x238 + lVar6 * 0x10);
    plVar3 = (longlong *)*plVar5;
    lVar6 = *plVar3;
    plVar7 = plVar3 + -0x24;
    *plVar5 = lVar6;
    *(longlong **)(lVar6 + 8) = plVar5;
    *plVar3 = 0;
    *(uint *)(plVar3 + -0xf) = *(uint *)(plVar3 + -0xf) & 0xfffe7fff;
  }
  KeReleaseSpinLock(param_1 + 0x268,CONCAT71((int7)((ulonglong)plVar5 >> 8),uVar4));
  return plVar7;
}




/* Library Function - Single Match
    RxPrePostIrp
   
   Library: Visual Studio 2019 Release */

void RxPrePostIrp(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0xb8);
  if ((*(uint *)(param_1 + 0xa8) >> 0x15 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x200000;
  cVar2 = *(char *)(param_1 + 0x18);
  if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
    if ((*(byte *)(param_1 + 0x19) & 2) != 0) goto LAB_00016af1;
    iVar5 = *(int *)(lVar3 + 8);
    uVar4 = (uint)(cVar2 == '\x03');
  }
  else if (((cVar2 == '\f') && (*(char *)(param_1 + 0x19) == '\x01')) || (cVar2 == '\a')) {
    iVar5 = *(int *)(lVar3 + 8);
    uVar4 = 1;
  }
  else {
    if (cVar2 != '\b') goto LAB_00016af1;
    iVar5 = *(int *)(lVar3 + 8);
    uVar4 = 0;
  }
  RxLockUserBuffer(param_1,param_2,uVar4,iVar5);
LAB_00016af1:
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0xb8) + 3);
  *pbVar1 = *pbVar1 | 1;
  return;
}




/* Library Function - Single Match
    RxAddToWorkque
   
   Library: Visual Studio 2019 Release */

void RxAddToWorkque(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar5 = *(longlong *)(param_2 + 0xb8);
  lVar9 = *(longlong *)(lVar5 + 0x30);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if ((*(char *)(param_1 + 0x18) == '\x0e') &&
     ((*(int *)(lVar5 + 0x18) == 0x14018f || (*(int *)(lVar5 + 0x18) == 0x140193)))) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x8000;
    iVar8 = 1;
  }
  else {
    iVar8 = 0;
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10000;
  }
  lVar5 = DAT_00021538;
  if (lVar9 != 0) {
    uVar7 = KeAcquireSpinLockRaiseToDpc(DAT_00021538 + 0x268);
    lVar9 = (longlong)iVar8;
    LOCK();
    piVar2 = (int *)(lVar5 + 0x220 + lVar9 * 4);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (1 < iVar4 + 1) {
      LOCK();
      piVar2 = (int *)(lVar5 + 0x220 + lVar9 * 4);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar1 = (longlong *)(param_1 + 0x120);
      lVar3 = lVar5 + 0x238 + lVar9 * 0x10;
      plVar6 = *(longlong **)(lVar3 + 8);
      *plVar1 = lVar3;
      *(longlong **)(param_1 + 0x128) = plVar6;
      *plVar6 = (longlong)plVar1;
      *(longlong **)(lVar3 + 8) = plVar1;
      piVar2 = (int *)(lVar5 + 0x22c + lVar9 * 4);
      *piVar2 = *piVar2 + 1;
      KeReleaseSpinLock(lVar5 + 0x268,uVar7);
      return;
    }
    KeReleaseSpinLock(lVar5 + 0x268,uVar7);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 **)(param_1 + 0x108) = &LAB_00025d94;
  *(longlong *)(param_1 + 0x110) = param_1;
  ExQueueWorkItem((undefined8 *)(param_1 + 0xf8),iVar8);
  return;
}




/* Library Function - Single Match
    RxFsdPostRequest
   
   Library: Visual Studio 2019 Release */

undefined8 RxFsdPostRequest(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0xa8) >> 0x15 & 1) == 0) {
    RxPrePostIrp(param_1,lVar2);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    lVar3 = -1;
    pcVar4 = (&PTR_s__nowait_CREATE_00020530)[*(byte *)(param_1 + 0x18)] + 8;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    WmlTrace(0x77,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxAddToWorkque(param_1,lVar2);
  return 0x103;
}




/* Library Function - Single Match
    RxpCancelRoutine
   
   Library: Visual Studio 2019 Release */

void RxpCancelRoutine(longlong param_1)

{
  char cVar1;
  
  if (*(code **)(param_1 + 0xe8) == (code *)0x0) {
    cVar1 = RxCancelOperationInOverflowQueue(param_1);
    if (cVar1 == '\0') {
      RxCancelBlockingOperation(param_1,*(longlong *)(param_1 + 0x28));
    }
  }
  else {
    (**(code **)(param_1 + 0xe8))();
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x30,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxDereferenceAndDeleteRxContext_Real(param_1);
  return;
}




/* Library Function - Single Match
    RxCancelNotifyChangeDirectoryRequestsForFobx
   
   Library: Visual Studio 2019 Release */

void RxCancelNotifyChangeDirectoryRequestsForFobx(longlong ***param_1)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  undefined1 uVar3;
  longlong ****pppplVar4;
  longlong ****pppplVar5;
  longlong ***local_18;
  longlong ***local_10;
  
  local_10 = (longlong ***)&local_18;
  local_18 = (longlong ***)&local_18;
  uVar3 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  pppplVar4 = DAT_00021420;
  while (pppplVar5 = pppplVar4, (longlong *****)pppplVar5 != &DAT_00021420) {
    pppplVar4 = (longlong ****)*pppplVar5;
    if ((((*(char *)(pppplVar5 + 2) == '\f') && (*(char *)((longlong)pppplVar5 + 0x11) == '\x02'))
        && ((*(uint *)(pppplVar5 + 0x14) >> 0x13 & 1) == 0)) &&
       ((pppplVar5[7] == param_1 && (pppplVar5[0x1c] != (longlong ***)0x0)))) {
      *(uint *)(pppplVar5 + 0x14) = *(uint *)(pppplVar5 + 0x14) | 0x80000;
      ppplVar2 = *pppplVar5;
      ppplVar1 = pppplVar5[1];
      *ppplVar1 = (longlong **)ppplVar2;
      ppplVar2[1] = (longlong **)ppplVar1;
      pppplVar5[1] = local_10;
      *pppplVar5 = (longlong ***)&local_18;
      *local_10 = (longlong **)pppplVar5;
      LOCK();
      *(int *)((longlong)pppplVar5 + -4) = *(int *)((longlong)pppplVar5 + -4) + 1;
      UNLOCK();
      local_10 = (longlong ***)pppplVar5;
    }
  }
  KeReleaseSpinLock(&DAT_00020e70,uVar3);
  pppplVar4 = (longlong ****)local_18;
  if ((longlong ****)local_18 != &local_18) {
    do {
      pppplVar5 = (longlong ****)*pppplVar4;
      pppplVar5[1] = (longlong ***)&local_18;
      pppplVar4[1] = (longlong ***)pppplVar4;
      *pppplVar4 = (longlong ***)pppplVar4;
      local_18 = (longlong ***)pppplVar5;
      if (pppplVar4[4] != (longlong ***)0x0) {
        ppplVar2 = pppplVar4[0x1c];
        pppplVar4[0x1c] = (longlong ***)0x0;
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0x32,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        (*(code *)ppplVar2)(pppplVar4 + -1);
      }
      RxDereferenceAndDeleteRxContext_Real((longlong)(pppplVar4 + -1));
      pppplVar4 = (longlong ****)local_18;
    } while ((longlong ****)local_18 != &local_18);
  }
  return;
}




/* Library Function - Single Match
    RxCancelNotifyChangeDirectoryRequestsForVNetRoot
   
   Library: Visual Studio 2019 Release */

int RxCancelNotifyChangeDirectoryRequestsForVNetRoot(longlong ***param_1,char param_2)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  undefined1 uVar3;
  longlong ****pppplVar4;
  undefined7 in_register_00000011;
  int iVar5;
  longlong ****pppplVar6;
  longlong ***local_18;
  longlong ***local_10;
  
  local_10 = (longlong ***)&local_18;
  local_18 = (longlong ***)&local_18;
  iVar5 = 0;
  uVar3 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  pppplVar4 = DAT_00021420;
  do {
    do {
      pppplVar6 = pppplVar4;
      if ((longlong *****)pppplVar6 == &DAT_00021420) {
LAB_00017067:
        KeReleaseSpinLock(&DAT_00020e70,CONCAT71(in_register_00000011,uVar3));
        if ((iVar5 == 0) &&
           (pppplVar4 = (longlong ****)local_18, (longlong ****)local_18 != &local_18)) {
          do {
            pppplVar6 = (longlong ****)*pppplVar4;
            pppplVar6[1] = (longlong ***)&local_18;
            pppplVar4[1] = (longlong ***)pppplVar4;
            *pppplVar4 = (longlong ***)pppplVar4;
            local_18 = (longlong ***)pppplVar6;
            if (pppplVar4[4] != (longlong ***)0x0) {
              ppplVar1 = pppplVar4[0x1c];
              pppplVar4[0x1c] = (longlong ***)0x0;
              if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
                WmlTrace(0x31,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
              }
              (*(code *)ppplVar1)(pppplVar4 + -1);
            }
            RxDereferenceAndDeleteRxContext_Real((longlong)(pppplVar4 + -1));
            pppplVar4 = (longlong ****)local_18;
          } while ((longlong ****)local_18 != &local_18);
        }
        return iVar5;
      }
      pppplVar4 = (longlong ****)*pppplVar6;
    } while (((((*(char *)(pppplVar6 + 2) != '\f') ||
               (*(char *)((longlong)pppplVar6 + 0x11) != '\x02')) ||
              (pppplVar6[6] == (longlong ***)0x0)) ||
             (((*(uint *)(pppplVar6 + 0x14) >> 0x13 & 1) != 0 || (pppplVar6[0x31] != param_1)))) ||
            (pppplVar6[0x1c] == (longlong ***)0x0));
    if (param_2 == '\0') {
      iVar5 = -0x3ffffef9;
      goto LAB_00017067;
    }
    *(uint *)(pppplVar6 + 0x14) = *(uint *)(pppplVar6 + 0x14) | 0x80000;
    ppplVar1 = *pppplVar6;
    ppplVar2 = pppplVar6[1];
    *ppplVar2 = (longlong **)ppplVar1;
    ppplVar1[1] = (longlong **)ppplVar2;
    pppplVar6[1] = local_10;
    *pppplVar6 = (longlong ***)&local_18;
    *local_10 = (longlong **)pppplVar6;
    LOCK();
    *(int *)((longlong)pppplVar6 + -4) = *(int *)((longlong)pppplVar6 + -4) + 1;
    UNLOCK();
    local_10 = (longlong ***)pppplVar6;
  } while( true );
}




/* Library Function - Single Match
    RxCancelRoutine
   
   Library: Visual Studio 2019 Release */

void RxCancelRoutine(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte in_CR8;
  
  KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  puVar2 = DAT_00021420;
  if ((undefined8 **)DAT_00021420 != &DAT_00021420) {
    do {
      puVar1 = puVar2;
      puVar3 = puVar1 + -1;
      puVar2 = puVar1;
      if (puVar1[4] == param_2) break;
      puVar2 = (undefined8 *)*puVar1;
    } while ((undefined8 **)puVar2 != &DAT_00021420);
    if (((undefined8 **)puVar2 != &DAT_00021420) && ((*(uint *)(puVar1 + 0x14) >> 0x13 & 1) == 0)) {
      *(uint *)(puVar1 + 0x14) = *(uint *)(puVar1 + 0x14) | 0x80000;
      LOCK();
      *(int *)((longlong)puVar1 + -4) = *(int *)((longlong)puVar1 + -4) + 1;
      UNLOCK();
      goto LAB_000171bd;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_000171bd:
  KeReleaseSpinLock(&DAT_00020e70);
  IoReleaseCancelSpinLock(*(undefined1 *)(param_2 + 0x45));
  if (puVar3 != (undefined8 *)0x0) {
    if (in_CR8 < 2) {
      RxpCancelRoutine((longlong)puVar3);
    }
    else {
      RxDispatchToWorkerThread(DAT_00021538,0,RxpCancelRoutine,puVar3);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxExceptionFilter
   
   Library: Visual Studio 2019 Release */

undefined8 RxExceptionFilter(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_2;
  _DAT_00021188 = *(undefined8 *)(*param_2 + 0x10);
  _DAT_00021170 = *param_2;
  _DAT_00021180 = param_2[1];
  _DAT_00021178 = iVar2;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x6e,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  if (iVar2 == -0x3ffffffa) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x6f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (2 < *(uint *)(*param_2 + 0x18)) {
      iVar2 = *(int *)(*param_2 + 0x30);
    }
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb0) == 0)) {
    cVar1 = FsRtlIsNtstatusExpected(iVar2);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      KeBugCheckEx(0x27,0xbaad0080,*param_2,param_2[1],*(undefined8 *)(*param_2 + 0x10));
    }
    if (param_1 != 0) {
      *(int *)(param_1 + 0xb0) = iVar2;
    }
  }
  return 1;
}




/* Library Function - Single Match
    RxIsOkToPurgeFcb
   
   Library: Visual Studio 2019 Release */

undefined1 RxIsOkToPurgeFcb(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + 0x98)) {
      return 1;
    }
    if ((*(int *)(puVar1 + -5) != 0) && ((*(uint *)(puVar1 + -3) & 0xffefffff) != 0x80)) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return 0;
}




/* Library Function - Single Match
    RxpPrepareCreateContextForReuse
   
   Library: Visual Studio 2019 Release */

void RxpPrepareCreateContextForReuse(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x220) != '\0') {
    __RxReleaseFcb(param_1,*(longlong *)(param_1 + 0x38),0x91d,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  RxFreeCanonicalNameBuffer(param_1);
  if ((*(longlong *)(param_1 + 0x1f8) != 0) || (*(longlong *)(param_1 + 0x1e0) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0);
    ExAcquireResourceSharedLite(lVar1 + 0x18,1);
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      FUN_00036fe8();
      RxDereference(*(ushort **)(param_1 + 0x1f8),1);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    ExReleaseResourceLite(lVar1 + 0x18);
  }
  return;
}




/* Library Function - Single Match
    RxCopyCreateParameters
   
   Library: Visual Studio 2019 Release */

void RxCopyCreateParameters(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x1b0);
  lVar4 = *(longlong *)(lVar3 + 0xb8);
  lVar5 = *(longlong *)(lVar4 + 8);
  lVar6 = *(longlong *)(lVar4 + 0x30);
  *plVar1 = lVar5;
  lVar5 = *(longlong *)(lVar5 + 8);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) {
    uVar7 = RtlLengthSecurityDescriptor();
    *(undefined4 *)(param_1 + 0x20c) = uVar7;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x23,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  if (*(longlong *)*plVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1b8) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(*(longlong *)*plVar1 + 4);
  }
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(*plVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar3 + 0x58);
  *(uint *)(param_1 + 0x1a0) = *(ushort *)(lVar4 + 0x18) & 0x7fb7;
  *(uint *)(param_1 + 0x1a4) = *(ushort *)(lVar4 + 0x1a) & 7;
  *(uint *)(param_1 + 0x1a8) = (uint)*(byte *)(lVar4 + 0x13);
  *(uint *)(param_1 + 0x1ac) = *(uint *)(lVar4 + 0x10) & 0xffffff;
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((*(byte *)(param_1 + 0x21c) & 2) != 0) {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 1;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  iVar2 = *(int *)(lVar4 + 0x20);
  *(int *)(param_1 + 0x208) = iVar2;
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(lVar3 + 0x18);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x24,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  return;
}




/* Library Function - Single Match
    RxpCommonMiscOp
   
   Library: Visual Studio 2019 Release */

ulonglong RxpCommonMiscOp(longlong param_1,undefined8 param_2,short *param_3,undefined *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  if ((*param_3 == -0x13fd) || (*param_3 == -0x13fe)) {
    if ((*(byte *)(param_1 + 0xa8) & 2) == 0) {
      uVar2 = RxFsdPostRequest(param_1);
    }
    else {
      uVar1 = __RxAcquireFcb((longlong)param_3,param_1,1,99,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\ea.c"
                            );
      uVar2 = CONCAT44(extraout_var,uVar1);
      if (uVar1 == 0) {
        uVar1 = (*(code *)param_4)(param_1,param_2,param_3);
        uVar2 = (ulonglong)uVar1;
        __RxReleaseFcb(param_1,(longlong)param_3,0x72,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\ea.c");
      }
    }
  }
  else {
    uVar2 = 0xc000000d;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxpCommonSetQuotaInformation
   
   Library: Visual Studio 2019 Release */

undefined8 RxpCommonSetQuotaInformation(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xb8) + 8);
  RxLockUserBuffer(param_1,param_2,2,iVar1);
  lVar2 = RxMapUserBuffer(param_1,param_2);
  if ((lVar2 == 0) && (iVar1 != 0)) {
    uVar3 = 0xc000009a;
  }
  else {
    *(longlong *)(param_1 + 0x178) = lVar2;
    *(int *)(param_1 + 0x180) = iVar1;
    if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x118) == 0) {
      uVar3 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar3 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x118))(param_1);
    }
    else {
      uVar3 = 0xc0000120;
    }
  }
  return uVar3;
}




/* Library Function - Single Match
    RxpCommonQueryQuotaInformation
   
   Library: Visual Studio 2019 Release */

undefined4 RxpCommonQueryQuotaInformation(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  iVar1 = *(int *)(lVar3 + 8);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar3 + 0x20);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar3 + 8);
  *(byte *)(param_1 + 0x1ac) = *(byte *)(lVar3 + 2) & 1;
  *(byte *)(param_1 + 0x1ad) = *(byte *)(lVar3 + 2) >> 1 & 1;
  *(byte *)(param_1 + 0x1ae) = *(byte *)(lVar3 + 2) >> 2 & 1;
  RxLockUserBuffer(param_1,param_2,2,iVar1);
  lVar3 = RxMapUserBuffer(param_1,param_2);
  if ((lVar3 == 0) && (iVar1 != 0)) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    uVar2 = 0xc000009a;
  }
  else {
    *(longlong *)(param_1 + 0x178) = lVar3;
    *(int *)(param_1 + 0x180) = iVar1;
    if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x110) == 0) {
      uVar2 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar2 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x110))(param_1);
    }
    else {
      uVar2 = 0xc0000120;
    }
    *(longlong *)(param_2 + 0x38) = (longlong)*(int *)(param_1 + 0x180);
  }
  return uVar2;
}




/* Library Function - Single Match
    RxpCommonSetEa
   
   Library: Visual Studio 2019 Release */

undefined8 RxpCommonSetEa(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_res10 [2];
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 0xb8) + 8);
  puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30) + 0x50);
  *puVar1 = *puVar1 | 0x1000;
  RxLockUserBuffer(param_1,param_2,2,iVar2);
  lVar3 = RxMapUserBuffer(param_1,param_2);
  if ((lVar3 == 0) && (iVar2 != 0)) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    uVar4 = 0xc000009a;
  }
  else {
    uVar4 = IoCheckEaBufferValidity(lVar3,iVar2,local_res10);
    if ((int)uVar4 < 0) {
      *(ulonglong *)(param_2 + 0x38) = (ulonglong)local_res10[0];
    }
    else {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(longlong *)(param_1 + 0x178) = lVar3;
      *(int *)(param_1 + 0x180) = iVar2;
      if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xf8) == 0) {
        uVar4 = 0xc0000002;
      }
      else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
        FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
        uVar4 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xf8))(param_1);
      }
      else {
        uVar4 = 0xc0000120;
      }
    }
  }
  return uVar4;
}




/* Library Function - Single Match
    RxpCommonQueryEa
   
   Library: Visual Studio 2019 Release */

undefined4 RxpCommonQueryEa(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  iVar1 = *(int *)(lVar2 + 8);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar2 + 0x20);
  *(byte *)(param_1 + 0x1a0) = *(byte *)(lVar2 + 2) & 1;
  *(byte *)(param_1 + 0x1a1) = *(byte *)(lVar2 + 2) >> 1 & 1;
  *(byte *)(param_1 + 0x1a2) = *(byte *)(lVar2 + 2) >> 2 & 1;
  RxLockUserBuffer(param_1,param_2,2,iVar1);
  lVar4 = RxMapUserBuffer(param_1,param_2);
  if ((lVar4 == 0) && (iVar1 != 0)) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    uVar3 = 0xc000009a;
  }
  else {
    *(longlong *)(param_1 + 0x178) = lVar4;
    *(int *)(param_1 + 0x180) = iVar1;
    if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xf0) == 0) {
      uVar3 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar3 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xf0))(param_1);
    }
    else {
      uVar3 = 0xc0000120;
    }
    *(ulonglong *)(param_2 + 0x38) =
         (ulonglong)(uint)(*(int *)(lVar2 + 8) - *(int *)(param_1 + 0x180));
  }
  return uVar3;
}




/* Library Function - Single Match
    RxpCommonSetSecurity
   
   Library: Visual Studio 2019 Release */

undefined8 RxpCommonSetSecurity(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar1 + 8);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar1 + 0x10);
  if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x108) == 0) {
    uVar2 = 0xc0000002;
  }
  else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
    FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
    uVar2 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x108))(param_1);
  }
  else {
    uVar2 = 0xc0000120;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxpCommonQuerySecurity
   
   Library: Visual Studio 2019 Release */

undefined4 RxpCommonQuerySecurity(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0x10);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 8);
  RxLockUserBuffer(param_1,param_2,2,iVar1);
  lVar3 = RxMapUserBuffer(param_1,param_2);
  if ((lVar3 == 0) && (iVar1 != 0)) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    uVar2 = 0xc000009a;
  }
  else {
    *(longlong *)(param_1 + 0x178) = lVar3;
    *(int *)(param_1 + 0x180) = iVar1;
    if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x100) == 0) {
      uVar2 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar2 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x100))(param_1);
    }
    else {
      uVar2 = 0xc0000120;
    }
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0xb8);
  }
  return uVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    RxCommonQueryQuotaInformation
    RxCommonQuerySecurity
    RxCommonSetEa
    RxCommonSetQuotaInformation
   
   Library: Visual Studio 2019 Release */

ulonglong FID_conflict_RxCommonSetEa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    sVar2 = -0x1400;
  }
  else {
    psVar4 = *(short **)(lVar1 + 0x18);
    sVar2 = *psVar4;
  }
  if ((sVar2 == -0x13fd) || (sVar2 == -0x13fe)) {
    uVar3 = RxpCommonMiscOp(param_1,param_2,psVar4,RxpCommonSetQuotaInformation);
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Multiple Matches With Different Base Names
    RxCommonQueryQuotaInformation
    RxCommonQuerySecurity
    RxCommonSetEa
    RxCommonSetQuotaInformation
   
   Library: Visual Studio 2019 Release */

ulonglong FID_conflict_RxCommonSetEa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    sVar2 = -0x1400;
  }
  else {
    psVar4 = *(short **)(lVar1 + 0x18);
    sVar2 = *psVar4;
  }
  if ((sVar2 == -0x13fd) || (sVar2 == -0x13fe)) {
    uVar3 = RxpCommonMiscOp(param_1,param_2,psVar4,RxpCommonQueryQuotaInformation);
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxpQueryInfoMiniRdr
   
   Library: Visual Studio 2019 Release */

undefined8
RxpQueryInfoMiniRdr(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x170) = param_3;
  *(undefined8 *)(param_1 + 0x178) = param_4;
  if (*(longlong *)(*(longlong *)(param_2 + 0x138) + 0xd8) == 0) {
    uVar1 = 0xc0000002;
  }
  else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
    FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x138) + 0xd8))(param_1);
  }
  else {
    uVar1 = 0xc0000120;
  }
  return uVar1;
}




/* Library Function - Single Match
    RxpSetInfoMiniRdr
   
   Library: Visual Studio 2019 Release */

undefined8 RxpSetInfoMiniRdr(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x170) = param_4;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar1 + 8);
  if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xe0) == 0) {
    uVar2 = 0xc0000002;
  }
  else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
    FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
    uVar2 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xe0))(param_1);
  }
  else {
    uVar2 = 0xc0000120;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitiateOrContinueThrottling
   
   Library: Visual Studio 2019 Release */

void RxInitiateOrContinueThrottling(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = _DAT_fffff78000000014;
  if (*(uint *)(param_1 + 1) < *(uint *)((longlong)param_1 + 0xc)) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = param_1[2];
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  *param_1 = lVar2 * (ulonglong)uVar1 + lVar3;
                    /* WARNING: Could not recover jumptable at 0x00017f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(&DAT_00021800,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxShouldRequestBeThrottled
   
   Library: Visual Studio 2019 Release */

bool RxShouldRequestBeThrottled(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = _DAT_fffff78000000014;
  bVar3 = false;
  if (((int)param_1[1] != 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    LOCK();
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    UNLOCK();
    KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
    lVar1 = *param_1;
    KeReleaseMutex(&DAT_00021800,0);
    bVar3 = lVar2 < lVar1;
  }
  return bVar3;
}




/* Library Function - Single Match
    RxIsThisACscAgentOpen
   
   Library: Visual Studio 2019 Release */

undefined8 RxIsThisACscAgentOpen(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  uint *puVar3;
  char *pcVar4;
  uint *puVar5;
  bool bVar6;
  
  uVar2 = 0;
  bVar6 = *(int *)(param_1 + 0x208) == 0;
  if (bVar6) {
LAB_00017fcc:
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == -0x55555556)) {
      uVar2 = 1;
    }
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),uVar2);
  }
  puVar5 = *(uint **)(param_1 + 0x200);
  do {
    lVar1 = 9;
    puVar3 = puVar5 + 2;
    pcVar4 = "CscAgent";
    do {
      if (lVar1 == 0) break;
      lVar1 = lVar1 + -1;
      bVar6 = (char)*puVar3 == *pcVar4;
      puVar3 = (uint *)((longlong)puVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar6);
    if (bVar6) {
      uVar2 = 1;
      goto LAB_00017fcc;
    }
    if (*puVar5 == 0) goto LAB_00017fcc;
    puVar5 = (uint *)((longlong)puVar5 + (ulonglong)*puVar5);
    bVar6 = puVar5 == (uint *)0x0;
  } while( true );
}




/* Library Function - Single Match
    RxpDestroySrvCall
   
   Library: Visual Studio 2019 Release */

void RxpDestroySrvCall(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
  pcVar2 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168) + 0x1f0);
  bVar3 = (byte)(*(uint *)(param_1 + 0x38) >> 5) & 1;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,bVar3);
  }
  ExAcquireResourceExclusiveLite(lVar1 + 0x18,1);
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  UNLOCK();
  RxFinalizeSrvCall(param_1,bVar3);
                    /* WARNING: Could not recover jumptable at 0x0001806b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseResourceLite(lVar1 + 0x18);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxDereferenceAndDeleteRxContext_Real
   
   Library: Visual Studio 2019 Release */

void RxDereferenceAndDeleteRxContext_Real(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  ushort uVar8;
  longlong lVar9;
  byte local_res8;
  
  lVar9 = 0;
  uVar7 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  LOCK();
  piVar1 = (int *)(param_1 + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    local_res8 = *(byte *)(param_1 + 0xa8) & 1;
    if (param_1 == *(longlong *)(lVar4 + 0x288)) {
      *(undefined8 *)(lVar4 + 0x288) = 0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x10);
      lVar6 = *(longlong *)(param_1 + 8);
      *plVar5 = lVar6;
      *(longlong **)(lVar6 + 8) = plVar5;
      LOCK();
      piVar1 = (int *)(lVar4 + 0x1ac);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(longlong *)(lVar4 + 0x288) != 0)) {
        lVar9 = *(longlong *)(lVar4 + 0x288);
      }
    }
  }
  KeReleaseSpinLock(&DAT_00020e70,uVar7);
  if (iVar2 + -1 < 1) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(undefined1 *)(param_1 + 0x21f) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    if (lVar9 != 0) {
      *(uint *)(lVar9 + 0xa8) = *(uint *)(lVar9 + 0xa8) & 0xffefffff;
      KeSetEvent(lVar9 + 0x130,0,0);
    }
    if (local_res8 != 0) {
      _DAT_00020d9c = _DAT_00020d9c + 1;
      uVar8 = ExQueryDepthSList(&DAT_00020d80);
      if (uVar8 < DAT_00020d90) {
        ExpInterlockedPushEntrySList(&DAT_00020d80,param_1);
      }
      else {
        _DAT_00020da0 = _DAT_00020da0 + 1;
        (*DAT_00020db8)(param_1);
      }
    }
  }
  return;
}




/* Library Function - Single Match
    RxCompleteRequest_Real
   
   Library: Visual Studio 2019 Release */

void RxCompleteRequest_Real(longlong param_1,longlong param_2,uint param_3)

{
  short *psVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 local_res10;
  
  if (param_2 == 0) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(6,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    local_res10 = 0;
  }
  else {
    pcVar3 = *(char **)(param_2 + 0xb8);
    LOCK();
    *(undefined8 *)(param_2 + 0x68) = 0;
    UNLOCK();
    if (((param_3 & 0xc0000000) == 0xc0000000) && ((*(byte *)(param_2 + 0x10) & 0x40) != 0)) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      local_res10 = 0;
    }
    else {
      local_res10 = 1;
    }
    *(uint *)(param_2 + 0x30) = param_3;
    if ((((param_1 != 0) && (*(char *)(param_1 + 0x18) != '\x0e')) && (3 < DAT_000204e4)) &&
       ((DAT_000204e0 & 2) != 0)) {
      lVar4 = -1;
      pcVar5 = (&PTR_s__nowait_CREATE_00020530)[*(byte *)(param_1 + 0x18)] + 8;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      WmlTrace(5,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((*pcVar3 == '\0') && (param_3 != 0x103)) {
      if (param_1 == 0) goto LAB_000183e8;
      if ((*(byte *)(param_1 + 0x21c) & 2) != 0) {
        psVar1 = (short *)(*(longlong *)(pcVar3 + 0x30) + 0x58);
        *psVar1 = *psVar1 + 2;
      }
      RxpPrepareCreateContextForReuse(param_1);
    }
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    RxDereferenceAndDeleteRxContext_Real(param_1);
  }
LAB_000183e8:
  if (param_2 != 0) {
    IofCompleteRequest(param_2,local_res10);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxCreateRxContext
   
   Library: Visual Studio 2019 Release */

ulonglong * RxCreateRxContext(undefined8 *param_1,longlong param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  ulonglong *puVar3;
  
  LOCK();
  *(int *)(param_2 + 0x1ac) = *(int *)(param_2 + 0x1ac) + 1;
  UNLOCK();
  _DAT_00020d94 = _DAT_00020d94 + 1;
  puVar3 = (ulonglong *)ExpInterlockedPopEntrySList(&DAT_00020d80);
  if (puVar3 == (ulonglong *)0x0) {
    _DAT_00020d98 = _DAT_00020d98 + 1;
    puVar3 = (ulonglong *)(*DAT_00020db0)(DAT_00020da4,DAT_00020dac,DAT_00020da8);
    if (puVar3 == (ulonglong *)0x0) {
      return (ulonglong *)0x0;
    }
  }
  FUN_0001c430(puVar3,0,0x580);
  *(undefined4 *)(puVar3 + 0x15) = 1;
  *(undefined1 *)((longlong)puVar3 + 0xae) = 0;
  RxInitializeContext(param_1,param_2,param_3,(undefined2 *)puVar3);
  uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  puVar1 = puVar3 + 1;
  puVar3[2] = (ulonglong)DAT_00021428;
  *puVar1 = (ulonglong)&DAT_00021420;
  *DAT_00021428 = (ulonglong)puVar1;
  DAT_00021428 = puVar1;
  KeReleaseSpinLock(&DAT_00020e70,uVar2);
  return puVar3;
}




/* Library Function - Single Match
    RxTrackPagingIoResource
   
   Library: Visual Studio 2019 Release */

void RxTrackPagingIoResource(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    if (param_2 < 3) {
      *(undefined8 *)(param_1 + 0x280) = param_4;
      *(undefined4 *)(param_1 + 0x288) = param_3;
    }
    else if (param_2 == 3) {
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined4 *)(param_1 + 0x288) = 0;
      return;
    }
  }
  return;
}




/* Library Function - Single Match
    RxTrackerUpdateHistory
   
   Library: Visual Studio 2019 Release */

void RxTrackerUpdateHistory
               (longlong param_1,longlong param_2,int param_3,undefined2 param_4,undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    iVar5 = 1;
  }
  else if (param_1 == -1) {
    iVar5 = 2;
  }
  else {
    iVar5 = 0;
    if (param_1 == -2) {
      iVar5 = 3;
    }
  }
  if (param_2 != 0) {
    if (param_3 == 0x61616161) {
      piVar2 = (int *)(param_2 + 0x260 + (longlong)iVar5 * 4);
      *piVar2 = *piVar2 + 1;
    }
    else {
      piVar2 = (int *)(param_2 + 0x270 + (longlong)iVar5 * 4);
      *piVar2 = *piVar2 + 1;
    }
  }
  if (iVar5 == 0) {
    if (param_3 == 0x61616161) {
      LOCK();
      *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -1;
      UNLOCK();
    }
    LOCK();
    puVar1 = (uint *)(param_1 + 0x27c);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar3 < 0x20) {
      uVar4 = (ulonglong)uVar3;
      *(undefined8 *)(param_1 + (uVar4 * 3 + 0x51) * 8) = param_5;
      *(int *)(param_1 + 0x280 + uVar4 * 0x18) = param_3;
      *(undefined2 *)(param_1 + 0x286 + uVar4 * 0x18) = param_4;
      *(undefined2 *)(param_1 + 0x284 + uVar4 * 0x18) = *(undefined2 *)(param_1 + 0x278);
      *(undefined4 *)(param_1 + 0x290 + uVar4 * 0x18) = *(undefined4 *)(param_1 + 0xa8);
    }
  }
  return;
}




/* Library Function - Single Match
    __RxReleaseFcbForThread
   
   Library: Visual Studio 2019 Release */

void __RxReleaseFcbForThread
               (longlong param_1,longlong param_2,undefined8 param_3,undefined2 param_4,
               undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  uVar1 = *(uint *)(param_2 + 0x74);
  KeReleaseMutex(&DAT_00021800,0);
  if ((uVar1 >> 6 & 1) == 0) {
    iVar2 = 0x72727474;
  }
  else {
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x1a) & 0x80) != 0) {
      RxTrackerUpdateHistory(param_1,param_2,0x72727431,param_4,param_5);
      RxProcessFcbChangeBufferingStateRequest(param_2);
      goto LAB_000186bd;
    }
    iVar2 = 0x72727430;
  }
  RxTrackerUpdateHistory(param_1,param_2,iVar2,param_4,param_5);
LAB_000186bd:
                    /* WARNING: Could not recover jumptable at 0x000186de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseResourceForThreadLite(*(undefined8 *)(param_2 + 8),param_3);
  return;
}




/* Library Function - Single Match
    __RxReleaseFcb
   
   Library: Visual Studio 2019 Release */

void __RxReleaseFcb(longlong param_1,longlong param_2,undefined2 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  uVar4 = *(uint *)(param_2 + 0x74) >> 6;
  bVar3 = *(byte *)(*(longlong *)(param_2 + 8) + 0x1a) & 0x80;
  if ((uVar4 & 1) == 0) {
    iVar2 = 0x72727272;
  }
  else {
    if (bVar3 != 0) goto LAB_00018783;
    iVar2 = 0x72727230;
  }
  RxTrackerUpdateHistory(param_1,param_2,iVar2,param_3,param_4);
  ExReleaseResourceLite(*(undefined8 *)(param_2 + 8));
LAB_00018783:
  KeReleaseMutex(&DAT_00021800,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (bVar3 != 0) {
    iVar2 = ExIsResourceAcquiredSharedLite(*(undefined8 *)(param_2 + 0x10));
    if ((iVar2 == 0) ||
       (cVar1 = ExIsResourceAcquiredExclusiveLite(*(undefined8 *)(param_2 + 0x10)), cVar1 != '\0'))
    {
      RxProcessFcbChangeBufferingStateRequest(param_2);
    }
    RxTrackerUpdateHistory(param_1,param_2,0x72727231,param_3,param_4);
    ExReleaseResourceLite(*(undefined8 *)(param_2 + 8));
    return;
  }
  return;
}




/* Library Function - Single Match
    RxReleaseFcbResourceForThreadInMRx
   
   Library: Visual Studio 2019 Release */

void RxReleaseFcbResourceForThreadInMRx(longlong param_1,longlong param_2,undefined8 param_3)

{
  __RxReleaseFcbForThread
            (param_1,param_2,param_3,0xd9,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  return;
}




/* Library Function - Single Match
    RxAcquireSharedFcbResourceInMRxEx
   
   Library: Visual Studio 2019 Release */

uint RxAcquireSharedFcbResourceInMRxEx(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = __RxAcquireFcb(param_2,0,2,0xc4,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  RxTrackerUpdateHistory
            (param_1,param_2,0x61616161,0xc6,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  return uVar1;
}




undefined8 FUN_000188bc(void)

{
  return DAT_000214a8;
}




void FUN_000188cc(longlong param_1)

{
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000188e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExFreePoolWithTag(param_1,0);
  return;
}




/* Library Function - Single Match
    RxSpinDownWorkerThreads
   
   Library: Visual Studio 2019 Release */

void RxSpinDownWorkerThreads(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x30);
  KeReleaseSpinLock(param_1 + 8,uVar2);
  if (1 < iVar1) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      *(undefined8 *)(param_1 + 0xb0) = DAT_00021538;
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(code **)(param_1 + 0xa0) = RxSpinDownWorkerThreads;
    *(longlong *)(param_1 + 0xa8) = param_1;
    KeInsertQueue(param_1 + 0xb8);
  }
  return;
}




/* Library Function - Single Match
    RxSpinUpWorkerThread
   
   Library: Visual Studio 2019 Release */

int RxSpinUpWorkerThread(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int local_res20;
  undefined8 local_18 [2];
  
  uVar1 = KeAcquireSpinLockRaiseToDpc(param_1 + 4);
  if (*param_1 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    local_res20 = 0;
  }
  else {
    local_res20 = -0x3fffffff;
  }
  KeReleaseSpinLock(param_1 + 4,uVar1);
  if (-1 < local_res20) {
    local_res20 = PsCreateSystemThread(local_18,0x1fffff,0,0,0,param_2,param_3);
    if (local_res20 < 0) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 3) != 0)) {
        WmlTrace(0xbe,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      uVar1 = KeAcquireSpinLockRaiseToDpc(param_1 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if ((*(int *)(param_1 + 0x18) == 0) && (*param_1 == 2)) {
        KeSetEvent(*(undefined8 *)(param_1 + 8),0,0);
      }
      KeReleaseSpinLock(param_1 + 4,uVar1);
    }
    else {
      ZwClose(local_18[0]);
    }
  }
  return local_res20;
}




/* Library Function - Single Match
    RxTearDownWorkQueue
   
   Library: Visual Studio 2019 Release */

void RxTearDownWorkQueue(undefined2 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar6 = ExAllocatePoolWithTag(0,(longlong)*(int *)(param_1 + 0x14) * 8 + 0x28,0x71577852);
  if (lVar6 != 0) {
    KeInitializeEvent(lVar6,0,0);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(longlong *)(lVar6 + 0x20) = lVar6 + 0x28;
    uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 4);
    iVar5 = *(int *)(param_1 + 0x18);
    *param_1 = 2;
    *(longlong *)(param_1 + 8) = lVar6;
    KeReleaseSpinLock(param_1 + 4,uVar3);
    if (iVar5 != 0) {
      *(longlong *)(param_1 + 0x30) = DAT_00021538;
      LOCK();
      *(int *)(DAT_00021538 + 0x290) = *(int *)(DAT_00021538 + 0x290) + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(code **)(param_1 + 0x28) = RxSpinDownWorkerThreads;
      *(undefined2 **)(param_1 + 0x2c) = param_1;
      KeInsertQueue(param_1 + 0x5c);
      KeWaitForSingleObject(*(undefined8 *)(param_1 + 8),0,0,0,0);
    }
    if ((0 < *(int *)(lVar6 + 0x18)) &&
       (iVar5 = *(int *)(lVar6 + 0x18) + -1, lVar8 = (longlong)iVar5, -1 < iVar5)) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar6 + 0x20) + lVar8 * 8);
        cVar4 = PsIsThreadTerminating(uVar1);
        if (cVar4 == '\0') {
          KeWaitForSingleObject(uVar1,0,0,0,0);
        }
        ObfDereferenceObject(uVar1);
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    ExFreePoolWithTag(lVar6,0);
  }
  plVar7 = (longlong *)KeRundownQueue(param_1 + 0x5c);
  plVar9 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    do {
      plVar2 = (longlong *)*plVar9;
      if ((code *)plVar9[2] == FUN_000188cc) {
        ExFreePoolWithTag(plVar9,0);
      }
      plVar9 = plVar2;
    } while (plVar2 != plVar7);
  }
  return;
}




/* Library Function - Single Match
    RxpWorkerThreadDispatcher
   
   Library: Visual Studio 2019 Release */

void RxpWorkerThreadDispatcher(short *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  short sVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *local_res18;
  
  local_res18 = (undefined8 *)0x0;
  pcVar10 = (code *)0x0;
  uVar11 = 0;
  LOCK();
  *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + 1;
  pvVar8 = SystemReserved1[0xf];
  UNLOCK();
  ObReferenceObjectByPointer(SystemReserved1[0xf],0x1fffff,*(undefined8 *)PsThreadType_exref,0);
  bVar6 = false;
  bVar7 = false;
  do {
    puVar9 = (undefined8 *)KeRemoveQueue(param_1 + 0x5c,0,param_2);
    if ((int)puVar9 != 0x102) {
      LOCK();
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 0xe) = *(int *)(param_1 + 0xe) + -1;
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + -1;
      UNLOCK();
      uVar11 = puVar9[3];
      pcVar10 = (code *)puVar9[2];
      lVar5 = puVar9[4];
      puVar9[1] = puVar9;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[4] = 0;
      (*pcVar10)();
      LOCK();
      piVar1 = (int *)(lVar5 + 0x290);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        LOCK();
        plVar2 = (longlong *)(lVar5 + 0x298);
        lVar5 = *plVar2;
        *plVar2 = 0;
        UNLOCK();
        if (lVar5 != 0) {
          KeSetEvent(lVar5,0,0);
        }
      }
      LOCK();
      *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + 1;
      UNLOCK();
      local_res18 = puVar9;
    }
    KeAcquireSpinLockRaiseToDpc(param_1 + 4);
    sVar4 = *param_1;
    if (sVar4 == 0) {
      if (*(int *)(param_1 + 0xe) < 1) goto LAB_00018da4;
LAB_00018db7:
      if (bVar6) goto LAB_00018dbc;
    }
    else {
      if (sVar4 == 1) {
LAB_00018da4:
        if (*(int *)(param_1 + 0x16) < *(int *)(param_1 + 0x18)) {
          bVar6 = true;
          bVar7 = true;
          LOCK();
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          UNLOCK();
        }
        goto LAB_00018db7;
      }
      if (sVar4 != 2) goto LAB_00018db7;
      lVar5 = *(longlong *)(param_1 + 8);
      *(void **)(*(longlong *)(lVar5 + 0x20) + (longlong)*(int *)(lVar5 + 0x18) * 8) = pvVar8;
      *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
      bVar7 = false;
      bVar6 = true;
      if (*(int *)(param_1 + 0x18) == 0) {
        KeSetEvent(*(undefined8 *)(param_1 + 8),0,0);
      }
LAB_00018dbc:
      LOCK();
      *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + -1;
      UNLOCK();
    }
    KeReleaseSpinLock(param_1 + 4);
    if (bVar6) {
      if (bVar7) {
        ObfDereferenceObject(pvVar8);
      }
      if (DAT_00020f38 != '\0') {
        DbgPrint("Dispatch routine %lx %lx %lx\n",pcVar10,uVar11,local_res18);
      }
                    /* WARNING: Could not recover jumptable at 0x00018e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      PsTerminateSystemThread(0);
      return;
    }
  } while( true );
}




/* Library Function - Single Match
    RxSpinUpRequestsDispatcher
   
   Library: Visual Studio 2019 Release */

void RxSpinUpRequestsDispatcher(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong ***ppplVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  void *pvVar6;
  int iVar7;
  longlong **local_38;
  longlong **pplStack_30;
  
  pvVar6 = SystemReserved1[0xf];
  iVar7 = ObReferenceObjectByPointer
                    (SystemReserved1[0xf],0x1fffff,*(undefined8 *)PsThreadType_exref,0);
  if (iVar7 == 0) {
    DAT_00020f30 = pvVar6;
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      pplStack_30 = (longlong **)&local_38;
      local_38 = (longlong **)&local_38;
      KeWaitForSingleObject(param_1 + 0x38,0,0,0,&DAT_00021418);
      KeAcquireSpinLockRaiseToDpc(param_1 + 0x30);
      if ((longlong *)*plVar1 == plVar1) {
        pplStack_30 = (longlong **)&local_38;
        local_38 = (longlong **)&local_38;
      }
      else {
        local_38 = (longlong **)*plVar1;
        pplStack_30 = *(longlong ***)(param_1 + 0x28);
        ((longlong ***)local_38)[1] = (longlong **)&local_38;
        *pplStack_30 = (longlong *)&local_38;
        *(longlong **)(param_1 + 0x28) = plVar1;
        *plVar1 = (longlong)plVar1;
      }
      iVar7 = *(int *)(param_1 + 0x18);
      KeResetEvent(param_1 + 0x38);
      KeReleaseSpinLock(param_1 + 0x30);
      while ((longlong ***)local_38 != &local_38) {
        ppplVar3 = (longlong ***)*local_38;
        ppplVar3[1] = (longlong **)&local_38;
        pplVar4 = (longlong **)local_38[2];
        pplVar5 = (longlong **)local_38[3];
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0x3c);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_38 = (longlong **)ppplVar3;
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0xbf,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        (*(code *)pplVar4)(pplVar5);
      }
    } while (iVar7 == 0);
    KeSetEvent(param_1 + 0x50,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00018ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PsTerminateSystemThread(0);
  return;
}




/* Library Function - Single Match
    RxSpinUpWorkerThreads
   
   Library: Visual Studio 2019 Release */

void RxSpinUpWorkerThreads(short *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  char in_CR8;
  
  lVar4 = IoGetCurrentProcess();
  if ((lVar4 == DAT_00021b68) && (in_CR8 == '\0')) {
    uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 4);
    if (*param_1 == 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0xe) < iVar5) {
        iVar5 = *(int *)(param_1 + 0xe);
      }
    }
    *(undefined1 *)(param_1 + 1) = 0;
    KeReleaseSpinLock(param_1 + 4,uVar2);
    do {
      if (iVar5 < 1) {
        return;
      }
      iVar5 = iVar5 + -1;
      iVar3 = RxSpinUpWorkerThread(param_1,&LAB_00038c4c,param_1);
    } while (iVar3 == 0);
    LOCK();
    piVar1 = (int *)(param_1 + 0x1e);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (1 < iVar5 + 1) {
LAB_0001912a:
      LOCK();
      *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + -1;
      UNLOCK();
      return;
    }
    psVar6 = param_1 + 0x34;
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6[2] = 0;
    psVar6[3] = 0;
    *(code **)(param_1 + 0x3c) = RxpSpinUpWorkerThreads;
    *(short **)(param_1 + 0x40) = param_1;
    uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 4);
    *(undefined1 *)(param_1 + 1) = 1;
    KeReleaseSpinLock(param_1 + 4,uVar2);
    uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_00021b90);
    LOCK();
    *(int *)(DAT_00021538 + 0x290) = *(int *)(DAT_00021538 + 0x290) + 1;
    UNLOCK();
    *(short **)(param_1 + 0x38) = DAT_00021b88;
    *(undefined **)psVar6 = &DAT_00021b80;
    *(short **)DAT_00021b88 = psVar6;
    DAT_00021b88 = psVar6;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0x1e);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (1 < iVar5 + 1) goto LAB_0001912a;
    LOCK();
    *(int *)(DAT_00021538 + 0x290) = *(int *)(DAT_00021538 + 0x290) + 1;
    UNLOCK();
    *(short **)(param_1 + 0x40) = param_1;
    *(code **)(param_1 + 0x3c) = RxpSpinUpWorkerThreads;
    psVar6 = param_1 + 0x34;
    psVar6[0] = 0;
    psVar6[1] = 0;
    psVar6[2] = 0;
    psVar6[3] = 0;
    uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_00021b90);
    *(short **)(param_1 + 0x38) = DAT_00021b88;
    *(undefined **)psVar6 = &DAT_00021b80;
    *(short **)DAT_00021b88 = psVar6;
    DAT_00021b88 = psVar6;
    KeSetEvent(&DAT_00021b98,0,0);
  }
  KeReleaseSpinLock(&DAT_00021b90,uVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInsertWorkQueueItem
   
   Library: Visual Studio 2019 Release */

int RxInsertWorkQueueItem(longlong param_1,int param_2,longlong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar1 = false;
  psVar3 = (short *)((longlong)param_2 * 0x100 + DAT_00021b70);
  if (DAT_00021b78 == 0) {
    uVar2 = KeAcquireSpinLockRaiseToDpc(psVar3 + 4);
    if ((*psVar3 == 0) && (*(longlong *)(param_1 + 0x298) == 0)) {
      *(longlong *)(param_3 + 0x20) = param_1;
      LOCK();
      *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
      UNLOCK();
      *(int *)(psVar3 + 0x10) = *(int *)(psVar3 + 0x10) + *(int *)(psVar3 + 0xe);
      LOCK();
      *(int *)(psVar3 + 0xe) = *(int *)(psVar3 + 0xe) + 1;
      UNLOCK();
      if (((*(int *)(psVar3 + 0x1a) < *(int *)(psVar3 + 0xe)) &&
          (*(int *)(psVar3 + 0x18) < *(int *)(psVar3 + 0x14))) && ((char)psVar3[1] == '\0')) {
        *(undefined1 *)(psVar3 + 1) = 1;
        bVar1 = true;
      }
    }
    else {
      iVar4 = -0x3fffffff;
    }
    KeReleaseSpinLock(psVar3 + 4,uVar2);
    if (iVar4 == 0) {
      KeInsertQueue(psVar3 + 0x5c,param_3);
      if (bVar1) {
        RxSpinUpWorkerThreads(psVar3);
      }
    }
    else if ((3 < DAT_000204e4) && ((_DAT_000204e0 & (iVar4 < 0 | 2)) != 0)) {
      WmlTrace(0xd0,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    iVar4 = -0x3fffffff;
  }
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxPostToWorkerThread
   
   Library: Visual Studio 2019 Release */

int RxPostToWorkerThread
              (longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  
  *param_3 = 0;
  param_3[2] = param_4;
  param_3[3] = param_5;
  iVar1 = RxInsertWorkQueueItem(param_1,param_2,(longlong)param_3);
  if (((iVar1 != 0) && (3 < DAT_000204e4)) && ((_DAT_000204e0 & (iVar1 < 0 | 2)) != 0)) {
    WmlTrace(0xc3,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxDispatchToWorkerThread
   
   Library: Visual Studio 2019 Release */

int RxDispatchToWorkerThread(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_18;
  
  puVar1 = (undefined8 *)ExAllocatePoolWithTag(0,0x38,0x71577852);
  if (puVar1 == (undefined8 *)0x0) {
    local_18 = -0x3fffff66;
  }
  else {
    puVar1[5] = param_3;
    *puVar1 = 0;
    puVar1[6] = param_4;
    puVar1[3] = puVar1;
    puVar1[2] = FUN_000188cc;
    local_18 = RxInsertWorkQueueItem(param_1,param_2,(longlong)puVar1);
  }
  if (local_18 != 0) {
    if (puVar1 != (undefined8 *)0x0) {
      ExFreePoolWithTag(puVar1,0);
    }
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 & (local_18 < 0 | 2)) != 0)) {
      WmlTrace(0xc2,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
    }
  }
  return local_18;
}




/* Library Function - Single Match
    RxpScavengeFobxs
   
   Library: Visual Studio 2019 Release */

void RxpScavengeFobxs(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  uint uVar6;
  
  plVar1 = (longlong *)*param_2;
  while (plVar1 != param_2) {
    plVar2 = (longlong *)plVar1[1];
    lVar3 = *plVar1;
    *plVar2 = lVar3;
    *(longlong **)(lVar3 + 8) = plVar2;
    puVar4 = *(ushort **)(plVar1[-0xb] + 8);
    uVar6 = __RxAcquireFcb((longlong)puVar4,0,1,0x50a,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c")
    ;
    if (uVar6 == 0) {
      FUN_00019e08();
      RxpReferenceNetFcb((longlong)puVar4);
      FUN_00036fe8();
      RxDereference((ushort *)(plVar1 + -0xc),2);
      FUN_00036fe8();
      cVar5 = RxpDereferenceAndFinalizeNetFcb(puVar4,(char *)0x0,'\0','\0');
      if (cVar5 == '\0') {
        __RxReleaseFcb(0,(longlong)puVar4,0x513,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
      }
    }
    else {
      FUN_00036fe8();
      RxDereference((ushort *)(plVar1 + -0xc),0);
    }
    plVar1 = (longlong *)*param_2;
  }
  return;
}




/* Library Function - Single Match
    RxScavengeFobxsForNetRoot
   
   Library: Visual Studio 2019 Release */

void RxScavengeFobxsForNetRoot(undefined8 ****param_1,undefined8 *****param_2,char param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 *****pppppuVar4;
  code *pcVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***local_38;
  undefined8 ***local_30;
  
  ppuVar1 = param_1[1][3];
  puVar2 = ppuVar1[0xa7];
  if (param_3 != '\0') {
    KeWaitForSingleObject(puVar2 + 0x1d,0,0,0,0);
  }
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  if (*(int *)((longlong)puVar2 + 0x2c) == 0) {
    KeReleaseMutex(&DAT_000213c0,0);
  }
  else {
    local_38 = &local_38;
    ppppuVar3 = (undefined8 ****)puVar2[0x10];
    local_30 = &local_38;
LAB_000197c7:
    ppppuVar7 = ppppuVar3;
    if (ppppuVar7 != (undefined8 ****)(puVar2 + 0x10)) {
      ppppuVar3 = (undefined8 ****)*ppppuVar7;
      if ((ppppuVar7[-0xb] != (undefined8 ***)0x0) &&
         (pppppuVar4 = (undefined8 *****)ppppuVar7[-0xb][1], pppppuVar4[0xb] == param_1)) {
        if ((param_2 != (undefined8 *****)0x0) &&
           ((pppppuVar4 != param_2 && (pcVar5 = (code *)ppuVar1[0x2d][0x13], pcVar5 != (code *)0x0))
           )) {
          iVar6 = (*pcVar5)(pppppuVar4,param_2);
          if (iVar6 == 0) goto LAB_000197c7;
        }
        FUN_00019e08();
        RxReference((ushort *)(ppppuVar7 + -0xc));
        ppppuVar7[1] = local_30;
        *ppppuVar7 = &local_38;
        *local_30 = ppppuVar7;
        local_30 = ppppuVar7;
      }
      goto LAB_000197c7;
    }
    KeReleaseMutex(&DAT_000213c0,0);
    RxpScavengeFobxs(puVar2,(longlong *)&local_38);
  }
  if (param_3 != '\0') {
    KeSetEvent(puVar2 + 0x1d,0,0);
  }
  return;
}




/* Library Function - Single Match
    RxUndoScavengerFinalizationMarking
   
   Library: Visual Studio 2019 Release */

void RxUndoScavengerFinalizationMarking(ushort *param_1)

{
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  RxpUndoScavengerFinalizationMarking(param_1);
                    /* WARNING: Could not recover jumptable at 0x00019872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(&DAT_000213c0,0);
  return;
}




/* Library Function - Single Match
    RxSynchronizeWithScavenger
   
   Library: Visual Studio 2019 Release */

void RxSynchronizeWithScavenger(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x130) + 0x538);
  bVar2 = false;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  if ((*(void **)(lVar1 + 0x100) != SystemReserved1[0xf]) &&
     (*(longlong *)(lVar1 + 0x110) == param_2)) {
    bVar2 = true;
    __RxReleaseFcb(param_1,param_2,0x20e,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
    while (*(longlong *)(lVar1 + 0x110) == param_2) {
      KeReleaseMutex(&DAT_000213c0,0);
      KeWaitForSingleObject(lVar1 + 0x118,0,0,1,0);
      KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    }
  }
  KeReleaseMutex(&DAT_000213c0,0);
  if (bVar2) {
    __RxAcquireFcb(param_2,param_1,1,0x221,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
  }
  return;
}




/* Library Function - Single Match
    RxPostOneShotTimerRequest
   
   Library: Visual Studio 2019 Release */

undefined8
RxPostOneShotTimerRequest
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5)

{
  ulonglong uVar1;
  undefined1 uVar2;
  bool bVar3;
  
  *param_2 = 0;
  param_2[4] = param_1;
  param_2[2] = param_3;
  param_2[3] = param_4;
  uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_00021310);
  *(int *)(param_2 + 5) = DAT_000212f8 + (int)(param_5 / 550000) + 1;
  bVar3 = (undefined8 **)DAT_000213a0 == &DAT_000213a0;
  param_2[1] = DAT_000213a8;
  *param_2 = &DAT_000213a0;
  *DAT_000213a8 = param_2;
  uVar1 = (ulonglong)DAT_000213a8 >> 8;
  DAT_000213a8 = param_2;
  KeReleaseSpinLock(&DAT_00021310,CONCAT71((int7)uVar1,uVar2));
  if (bVar3) {
    KeSetTimer(&DAT_00021320,DAT_00021318,&DAT_00021360);
  }
  return 0;
}




/* Library Function - Single Match
    RxCancelTimerRequest
   
   Library: Visual Studio 2019 Release */

undefined8 RxCancelTimerRequest(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  uVar7 = 0xc0000225;
  lVar6 = 0;
  uVar4 = KeAcquireSpinLockRaiseToDpc(&DAT_00021310);
  puVar5 = &DAT_000213a0;
  plVar8 = DAT_000213a0;
  do {
    if ((longlong **)plVar8 == &DAT_000213a0) {
LAB_00019c4d:
      KeReleaseSpinLock(&DAT_00021310,CONCAT71((int7)((ulonglong)puVar5 >> 8),uVar4));
      if (lVar6 != 0) {
        ExFreePoolWithTag(lVar6,0);
      }
      return uVar7;
    }
    if (((plVar8[4] == param_1) && (plVar8[2] == param_2)) && (plVar8[3] == param_3)) {
      puVar3 = (undefined8 *)plVar8[1];
      puVar5 = (undefined8 *)*plVar8;
      uVar7 = 0;
      *puVar3 = puVar5;
      puVar5[1] = puVar3;
      lVar6 = 0;
      goto LAB_00019c4d;
    }
    if ((code *)plVar8[2] == RxRecurrentTimerWorkItemDispatcher) {
      lVar6 = plVar8[3];
      if ((*(longlong *)(lVar6 + 0x48) == param_2) && (*(longlong *)(lVar6 + 0x50) == param_3)) {
        plVar1 = (longlong *)plVar8[1];
        lVar2 = *plVar8;
        uVar7 = 0;
        *plVar1 = lVar2;
        *(longlong **)(lVar2 + 8) = plVar1;
        plVar1 = *(longlong **)(lVar6 + 0x38);
        lVar2 = *(longlong *)(lVar6 + 0x30);
        *plVar1 = lVar2;
        *(longlong **)(lVar2 + 8) = plVar1;
      }
      else {
        lVar6 = 0;
      }
    }
    plVar8 = (longlong *)*plVar8;
  } while( true );
}




/* Library Function - Single Match
    RxLowIoCompletionTail
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoCompletionTail(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  byte in_CR8;
  
  uVar1 = *(ushort *)(param_1 + 0x198);
  if (((*(byte *)(param_1 + 0x19a) & 8) == 0) && (1 < in_CR8)) {
    uVar5 = 0xc0000016;
  }
  else {
    uVar4 = (**(code **)(param_1 + 0x1a0))();
    uVar5 = (ulonglong)uVar4;
    if ((uVar4 != 0xc0000016) && (uVar4 != 0xc000022d)) {
      if ((uVar1 < 2) && ((*(byte *)(param_1 + 0x1b8) & 1) != 0)) {
        ExAcquireFastMutexUnsafe(&DAT_000212c0);
        plVar2 = *(longlong **)(param_1 + 0x168);
        lVar3 = *(longlong *)(param_1 + 0x160);
        *plVar2 = lVar3;
        *(longlong **)(lVar3 + 8) = plVar2;
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        ExReleaseFastMutexUnsafe(&DAT_000212c0);
        RxResumeBlockedOperations_ALL(param_1);
      }
      if ((*(byte *)(param_1 + 0x19a) & 1) == 0) {
        RxCompleteRequest(param_1,uVar5);
      }
    }
  }
  return uVar5;
}




/* Library Function - Single Match
    RxLowIoCompletion
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoCompletion(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1) == 0) {
    uVar2 = RxLowIoCompletionTail(param_1);
    uVar1 = uVar2 & 0xffffffff;
    if ((int)uVar2 == -0x3fffffea) {
      RxPostToWorkerThread(DAT_00021538,2,(undefined8 *)(param_1 + 0xf8),RxLowIoCompletion,param_1);
    }
    else if ((int)uVar2 == -0x3ffffdd3) {
      *(undefined1 **)(param_1 + 0xf0) = &LAB_0003ade8;
      RxFsdPostRequest(param_1);
      uVar1 = 0xc0000016;
    }
  }
  else {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xffefffff;
    KeSetEvent(param_1 + 0x130,0,0);
    uVar1 = 0xc0000016;
  }
  return uVar1;
}




void FUN_00019e08(void)

{
  return;
}




/* Library Function - Single Match
    RxLastChanceHandlerForChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxLastChanceHandlerForChangeBufferingStateRequests(ushort *param_1)

{
  longlong ****pppplVar1;
  longlong ***ppplVar2;
  longlong ***ppplVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong *****ppppplVar7;
  ulonglong in_stack_ffffffffffffffc0;
  longlong ****local_38;
  longlong ****local_30;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    in_stack_ffffffffffffffc0 = 0;
    WmlTrace(0x15,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  ppplVar3 = (longlong ***)(param_1 + 0x9c);
  local_38 = (longlong ****)&local_38;
  local_30 = (longlong ****)&local_38;
  while( true ) {
    ppppplVar7 = (longlong *****)0x0;
    ExAcquireFastMutex(param_1 + 0xe0);
    uVar4 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
    if ((longlong ***)*ppplVar3 == ppplVar3) {
      *(undefined1 *)(param_1 + 0x7d) = 0;
    }
    else {
      ppppplVar7 = (longlong *****)*ppplVar3;
      pppplVar1 = *ppppplVar7;
      *ppplVar3 = (longlong **)pppplVar1;
      pppplVar1[1] = ppplVar3;
    }
    KeReleaseSpinLock(param_1 + 0x80,uVar4);
    ExReleaseFastMutex(param_1 + 0xe0);
    if (ppppplVar7 == (longlong *****)0x0) break;
    pppplVar1 = ppppplVar7[3];
    ppplVar2 = pppplVar1[1];
    FUN_00019e08();
    RxpReferenceNetFcb((longlong)ppplVar2);
    in_stack_ffffffffffffffc0 = in_stack_ffffffffffffffc0 & 0xffffffff00000000;
    uVar6 = __RxAcquireFcb((longlong)ppppplVar7[3][1],-2,1,0x52d,
                           "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    if ((uVar6 == 0) && (((ulonglong)pppplVar1[6] & 4) == 0)) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        in_stack_ffffffffffffffc0 = 0;
        WmlTrace(0x16,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      RxChangeBufferingState((longlong)pppplVar1,ppppplVar7[5],'\x01');
    }
    KeWaitForSingleObject(&DAT_00021800,0,0,0,0,in_stack_ffffffffffffffc0);
    *(uint *)(pppplVar1 + 6) = *(uint *)(pppplVar1 + 6) & 0xffffffbf;
    *(uint *)((longlong)pppplVar1[1] + 0x74) = *(uint *)((longlong)pppplVar1[1] + 0x74) & 0xffffffbf
    ;
    KeSetEvent(pppplVar1[1][0x1a],2);
    KeReleaseMutex(&DAT_00021800,0);
    ppppplVar7[1] = local_30;
    *ppppplVar7 = (longlong ****)&local_38;
    *local_30 = (longlong ***)ppppplVar7;
    local_30 = (longlong ****)ppppplVar7;
    if (uVar6 == 0) {
      __RxReleaseFcb(-1,(longlong)ppplVar2,0x544,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    }
  }
  ppppplVar7 = (longlong *****)local_38;
  if ((longlong *****)local_38 != &local_38) {
    do {
      local_38 = *ppppplVar7;
      ((longlong *****)local_38)[1] = (longlong ****)&local_38;
      ppplVar3 = ppppplVar7[3][1];
      uVar6 = __RxAcquireFcb((longlong)ppplVar3,-2,1,0x551,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
      RxPrepareRequestForReuse((longlong)ppppplVar7);
      FUN_00036fe8();
      cVar5 = RxpDereferenceAndFinalizeNetFcb
                        ((ushort *)ppplVar3,(char *)0xfffffffffffffffe,'\0','\0');
      if ((cVar5 == '\0') && (uVar6 == 0)) {
        __RxReleaseFcb(-1,(longlong)ppplVar3,0x55d,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
      }
      ExFreePoolWithTag(ppppplVar7,0);
      ppppplVar7 = (longlong *****)local_38;
    } while ((longlong *****)local_38 != &local_38);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x17,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  FUN_00036fe8();
  RxDereference(param_1,0);
  return;
}




/* Library Function - Single Match
    RxpProcessChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxpProcessChangeBufferingStateRequests(ushort *param_1,char param_2)

{
  uint *puVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong in_stack_ffffffffffffffc0;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    in_stack_ffffffffffffffc0 = 0;
    WmlTrace(0x10,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  puVar2 = param_1 + 0x94;
  plVar11 = (longlong *)0x0;
  while( true ) {
    plVar10 = (longlong *)0x0;
    bVar6 = false;
    ExAcquireFastMutex(param_1 + 0xe0);
    KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
    if (*(ushort **)puVar2 != puVar2) {
      plVar10 = *(longlong **)puVar2;
      lVar3 = *plVar10;
      *(longlong *)puVar2 = lVar3;
      *(ushort **)(lVar3 + 8) = puVar2;
    }
    plVar12 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      puVar5 = param_1 + 0x9c;
      puVar4 = *(undefined8 **)(param_1 + 0xa0);
      *plVar11 = (longlong)puVar5;
      plVar11[1] = (longlong)puVar4;
      *puVar4 = plVar11;
      *(longlong **)(param_1 + 0xa0) = plVar11;
      plVar12 = (longlong *)0x0;
      if (((char)param_1[0x7d] == '\0') && (*(ushort **)puVar5 != puVar5)) {
        *(undefined1 *)(param_1 + 0x7d) = 1;
        bVar6 = true;
      }
    }
    if ((plVar10 == (longlong *)0x0) && (param_2 != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
    }
    KeReleaseSpinLock(param_1 + 0x80);
    ExReleaseFastMutex(param_1 + 0xe0);
    if (bVar6) {
      FUN_00019e08();
      RxReference(param_1);
      RxPostToWorkerThread
                (DAT_00021538,1,(undefined8 *)(param_1 + 0xcc),
                 RxLastChanceHandlerForChangeBufferingStateRequests,param_1);
    }
    if (plVar10 == (longlong *)0x0) break;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      in_stack_ffffffffffffffc0 = 0;
      WmlTrace(0x11,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    uVar9 = RxPrepareRequestForHandling((longlong)plVar10);
    if ((int)uVar9 == 0) {
      in_stack_ffffffffffffffc0 = in_stack_ffffffffffffffc0 & 0xffffffff00000000;
      uVar8 = __RxAcquireFcb(*(longlong *)(plVar10[3] + 8),-1,1,0x470,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
      plVar11 = plVar10;
      if (uVar8 == 0) {
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          in_stack_ffffffffffffffc0 = 0;
          WmlTrace(0x12,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        lVar3 = plVar10[3];
        puVar5 = *(ushort **)(lVar3 + 8);
        FUN_00019e08();
        RxpReferenceNetFcb((longlong)puVar5);
        if ((*(byte *)(lVar3 + 0x30) & 4) == 0) {
          if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
            in_stack_ffffffffffffffc0 = 0;
            WmlTrace(0x13,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
          RxChangeBufferingState(lVar3,plVar10[5],'\x01');
        }
        KeWaitForSingleObject(&DAT_00021800,0,0,0,0,in_stack_ffffffffffffffc0);
        *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) & 0xffffffbf;
        puVar1 = (uint *)(*(longlong *)(lVar3 + 8) + 0x74);
        *puVar1 = *puVar1 & 0xffffffbf;
        KeSetEvent(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0xd0),2);
        KeReleaseMutex(&DAT_00021800,0);
        RxPrepareRequestForReuse((longlong)plVar10);
        FUN_00036fe8();
        cVar7 = RxpDereferenceAndFinalizeNetFcb(puVar5,(char *)0xfffffffffffffffe,'\0','\0');
        if (cVar7 == '\0') {
          __RxReleaseFcb(-1,(longlong)puVar5,0x49b,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
        }
        ExFreePoolWithTag(plVar10,0);
        plVar11 = plVar12;
      }
    }
    else {
      RxPrepareRequestForReuse((longlong)plVar10);
      ExFreePoolWithTag(plVar10,0);
      plVar11 = plVar12;
    }
  }
  FUN_00036fe8();
  RxDereference(param_1,0);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x14,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return;
}




/* Library Function - Single Match
    RxInitializeBufferingManager
   
   Library: Visual Studio 2019 Release */

undefined8 RxInitializeBufferingManager(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x128;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(longlong *)(param_1 + 0x130) = lVar1;
  *(longlong *)lVar1 = lVar1;
  lVar1 = param_1 + 0x138;
  *(longlong *)(param_1 + 0x140) = lVar1;
  *(longlong *)lVar1 = lVar1;
  lVar1 = param_1 + 0x118;
  *(longlong *)(param_1 + 0x120) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  lVar1 = param_1 + 0x1f8;
  *(longlong *)(param_1 + 0x200) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  KeInitializeEvent();
  return 0;
}




/* Library Function - Single Match
    RxProcessChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxProcessChangeBufferingStateRequests(ushort *param_1)

{
  RxUndoScavengerFinalizationMarking(param_1);
  RxpProcessChangeBufferingStateRequests(param_1,'\x01');
  return;
}




/* Library Function - Single Match
    RxDispatchChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxDispatchChangeBufferingStateRequests(ushort *param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong ***local_18 [2];
  
  bVar3 = false;
  RxUndoScavengerFinalizationMarking(param_1);
  KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  KeReleaseSpinLock(param_1 + 0x80);
  ExAcquireFastMutex(param_1 + 0xe0);
  RxpDispatchChangeBufferingStateRequests(param_1,(longlong ****)0x0,local_18);
  ExReleaseFastMutex(param_1 + 0xe0);
  uVar2 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
  puVar1 = param_1 + 0x94;
  if ((*(ushort **)puVar1 != puVar1) && (bVar3 = *(char *)((longlong)param_1 + 0xf9) == '\0', bVar3)
     ) {
    *(bool *)((longlong)param_1 + 0xf9) = bVar3;
  }
  KeReleaseSpinLock(param_1 + 0x80,CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar2));
  if (bVar3) {
    RxUndoScavengerFinalizationMarking(param_1);
    RxpProcessChangeBufferingStateRequests(param_1,'\x01');
  }
  else {
    FUN_00036fe8();
    RxDereference(param_1,0);
  }
  RxpDiscardChangeBufferingStateRequests((longlong *)local_18);
  return;
}




/* Library Function - Single Match
    RxpDispatchChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxpDispatchChangeBufferingStateRequests
               (ushort *param_1,longlong ****param_2,longlong ****param_3)

{
  longlong *****ppppplVar1;
  longlong ******pppppplVar2;
  longlong *****ppppplVar3;
  longlong *****ppppplVar4;
  undefined1 uVar5;
  int iVar6;
  longlong ******pppppplVar8;
  bool bVar9;
  longlong *****local_48;
  longlong *****ppppplStack_40;
  longlong ****local_38;
  longlong *****local_30;
  ushort *puVar7;
  
  local_30 = &local_38;
  local_38 = (longlong ****)&local_38;
  param_3[1] = (longlong ***)param_3;
  *param_3 = (longlong ***)param_3;
  bVar9 = false;
  uVar5 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
  ppppplVar1 = (longlong *****)(param_1 + 0x8c);
  if ((longlong *****)*ppppplVar1 == ppppplVar1) {
    ppppplStack_40 = (longlong *****)&local_48;
    local_48 = (longlong *****)&local_48;
  }
  else {
    local_48 = (longlong *****)*ppppplVar1;
    ppppplStack_40 = *(longlong ******)(param_1 + 0x90);
    ((longlong ******)local_48)[1] = (longlong *****)&local_48;
    *ppppplStack_40 = (longlong ****)&local_48;
    *(longlong ******)(param_1 + 0x90) = ppppplVar1;
    *ppppplVar1 = (longlong ****)ppppplVar1;
  }
  KeReleaseSpinLock(param_1 + 0x80,uVar5);
  pppppplVar2 = (longlong ******)local_48;
LAB_0001a8cd:
  while( true ) {
    pppppplVar8 = pppppplVar2;
    if (pppppplVar8 == &local_48) {
      uVar5 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
      if ((longlong ******)local_48 != &local_48) {
        local_48[1] = (longlong ****)*(longlong ******)(param_1 + 0x90);
        **(undefined8 **)(param_1 + 0x90) = local_48;
        *ppppplStack_40 = (longlong ****)ppppplVar1;
        bVar9 = (char)param_1[0x7c] == '\0';
        *(longlong ******)(param_1 + 0x90) = ppppplStack_40;
        if (bVar9) {
          *(bool *)(param_1 + 0x7c) = bVar9;
        }
      }
      if ((longlong *****)local_38 != &local_38) {
        local_38[1] = (longlong ***)*(longlong *****)(param_1 + 0x98);
        **(undefined8 **)(param_1 + 0x98) = local_38;
        *local_30 = (longlong ****)(param_1 + 0x94);
        *(longlong ******)(param_1 + 0x98) = local_30;
      }
      KeReleaseSpinLock(param_1 + 0x80,uVar5);
      if (bVar9) {
        FUN_00019e08();
        RxReference(param_1);
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0xf,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        RxPostToWorkerThread
                  (DAT_00021538,2,(undefined8 *)(param_1 + 0xa4),
                   RxDispatchChangeBufferingStateRequests,param_1);
      }
      return;
    }
    pppppplVar2 = (longlong ******)*pppppplVar8;
    if (param_2 == (longlong ****)0x0) break;
    if (pppppplVar8[4] != (longlong *****)param_2[9]) {
      iVar6 = 0x103;
      goto LAB_0001a89b;
    }
    pppppplVar8[3] = (longlong *****)param_2;
    FUN_00019e08();
    RxReference((ushort *)param_2);
LAB_0001a86d:
    ppppplVar3 = pppppplVar8[1];
    ppppplVar4 = *pppppplVar8;
    *ppppplVar3 = (longlong ****)ppppplVar4;
    ppppplVar4[1] = (longlong ****)ppppplVar3;
    pppppplVar8[1] = local_30;
    *pppppplVar8 = &local_38;
    *local_30 = (longlong ****)pppppplVar8;
    local_30 = (longlong *****)pppppplVar8;
  }
  puVar7 = RxpLookupSrvOpenForRequestLite((longlong)param_1,(longlong)pppppplVar8);
  iVar6 = (int)puVar7;
LAB_0001a89b:
  if (iVar6 != -0x3ffffddb) {
    if (iVar6 == 0) goto LAB_0001a86d;
    if (iVar6 == 0x103) goto LAB_0001a8cd;
  }
  ppppplVar3 = pppppplVar8[1];
  ppppplVar4 = *pppppplVar8;
  *ppppplVar3 = (longlong ****)ppppplVar4;
  ppppplVar4[1] = (longlong ****)ppppplVar3;
  ppppplVar3 = (longlong *****)param_3[1];
  pppppplVar8[1] = ppppplVar3;
  *pppppplVar8 = (longlong *****)param_3;
  *ppppplVar3 = (longlong ****)pppppplVar8;
  param_3[1] = (longlong ***)pppppplVar8;
  goto LAB_0001a8cd;
}




/* Library Function - Single Match
    RxCompleteSrvOpenKeyAssociation
   
   Library: Visual Studio 2019 Release */

void RxCompleteSrvOpenKeyAssociation(longlong ****param_1)

{
  longlong ****pppplVar1;
  ushort *puVar2;
  ushort *puVar3;
  longlong ***ppplVar4;
  undefined1 uVar5;
  bool bVar6;
  longlong ****local_18;
  longlong ****local_10;
  
  bVar6 = false;
  puVar3 = (ushort *)param_1[1][0x16][1][1];
  if (*(int *)((longlong)param_1 + 0x7c) == 3) {
    local_10 = (longlong ****)&local_18;
    local_18 = (longlong ****)&local_18;
    ExAcquireFastMutex(puVar3 + 0xe0);
    pppplVar1 = param_1 + 0x18;
    ppplVar4 = *(longlong ****)(puVar3 + 0x100);
    *pppplVar1 = (longlong ***)(puVar3 + 0xfc);
    param_1[0x19] = ppplVar4;
    *ppplVar4 = (longlong **)pppplVar1;
    *(longlong *****)(puVar3 + 0x100) = pppplVar1;
    LOCK();
    *(int *)(puVar3 + 0x8a) = *(int *)(puVar3 + 0x8a) + -1;
    UNLOCK();
    RxpDispatchChangeBufferingStateRequests(puVar3,param_1,(longlong ****)&local_18);
    ExReleaseFastMutex(puVar3 + 0xe0);
    uVar5 = KeAcquireSpinLockRaiseToDpc(puVar3 + 0x80);
    puVar2 = puVar3 + 0x94;
    if ((*(ushort **)puVar2 != puVar2) &&
       (bVar6 = *(char *)((longlong)puVar3 + 0xf9) == '\0', bVar6)) {
      *(bool *)((longlong)puVar3 + 0xf9) = bVar6;
    }
    KeReleaseSpinLock(puVar3 + 0x80,CONCAT71((int7)((ulonglong)puVar2 >> 8),uVar5));
    if (bVar6) {
      FUN_00019e08();
      RxReference(puVar3);
      RxPostToWorkerThread
                (DAT_00021538,2,(undefined8 *)(puVar3 + 0xb8),RxProcessChangeBufferingStateRequests,
                 puVar3);
    }
    RxpDiscardChangeBufferingStateRequests((longlong *)&local_18);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 0x8a) = *(int *)(puVar3 + 0x8a) + -1;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    RxGatherRequestsForSrvOpen
   
   Library: Visual Studio 2019 Release */

void RxGatherRequestsForSrvOpen(ushort *param_1,longlong ****param_2,longlong *param_3)

{
  longlong ***ppplVar1;
  ushort *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  ushort *puVar6;
  longlong ***local_18 [2];
  
  ppplVar1 = param_2[9];
  RxpDispatchChangeBufferingStateRequests(param_1,param_2,local_18);
  uVar5 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x80);
  puVar2 = *(ushort **)(param_1 + 0x94);
  while (puVar6 = puVar2, puVar6 != param_1 + 0x94) {
    puVar2 = *(ushort **)puVar6;
    if ((*(longlong ****)(puVar6 + 0x10) == ppplVar1) &&
       (*(longlong *****)(puVar6 + 0xc) == param_2)) {
      plVar3 = *(longlong **)(puVar6 + 4);
      lVar4 = *(longlong *)puVar6;
      *plVar3 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar3;
      lVar4 = *param_3;
      *(longlong *)puVar6 = lVar4;
      *(longlong **)(puVar6 + 4) = param_3;
      *(ushort **)(lVar4 + 8) = puVar6;
      *param_3 = (longlong)puVar6;
    }
  }
  KeReleaseSpinLock(param_1 + 0x80,uVar5);
  puVar2 = *(ushort **)(param_1 + 0x9c);
  while (puVar6 = puVar2, puVar6 != param_1 + 0x9c) {
    puVar2 = *(ushort **)puVar6;
    if ((*(longlong ****)(puVar6 + 0x10) == param_2[9]) &&
       (*(longlong *****)(puVar6 + 0xc) == param_2)) {
      plVar3 = *(longlong **)(puVar6 + 4);
      lVar4 = *(longlong *)puVar6;
      *plVar3 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar3;
      lVar4 = *param_3;
      *(longlong *)puVar6 = lVar4;
      *(longlong **)(puVar6 + 4) = param_3;
      *(ushort **)(lVar4 + 8) = puVar6;
      *param_3 = (longlong)puVar6;
    }
  }
  return;
}




/* Library Function - Single Match
    RxCheckVNetRootCredentials
   
   Library: Visual Studio 2019 Release */

int RxCheckVNetRootCredentials
              (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
              longlong param_5,longlong param_6,longlong param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  PVOID pvVar4;
  PVOID local_28 [2];
  
  local_28[0] = (PVOID)0x0;
  if (((*(byte *)(param_1 + 0x21c) & 1) != 0) && (((*(uint *)(param_3 + 0x20) ^ param_8) & 1) != 0))
  {
    return unaff_EBX;
  }
  lVar3 = RtlCompareMemory(param_3 + 0x2c,param_4,8);
  if ((lVar3 == 8) && (((param_5 != 0 || (param_6 != 0)) || (param_7 != 0)))) {
    pvVar4 = *(PVOID *)(param_3 + 0x40);
    lVar3 = *(longlong *)(param_3 + 0x38);
    if ((pvVar4 == (PVOID)0x0) || (lVar3 == 0)) {
      iVar2 = GetSecurityUserInfo(param_4,1,local_28);
      if (iVar2 < 0) goto LAB_0001ae0f;
      if (pvVar4 == (PVOID)0x0) {
        pvVar4 = local_28[0];
      }
      if (lVar3 == 0) {
        lVar3 = (longlong)local_28[0] + 0x10;
      }
    }
    if (((((param_5 == 0) || (pvVar4 == (PVOID)0x0)) ||
         (cVar1 = RtlEqualUnicodeString(pvVar4,param_5,1), cVar1 != '\0')) &&
        (((param_6 == 0 || (cVar1 = RtlEqualUnicodeString(lVar3,param_6,1), cVar1 != '\0')) &&
         (*(longlong *)(param_3 + 0x48) != 0)))) && (param_7 != 0)) {
      RtlEqualUnicodeString(*(longlong *)(param_3 + 0x48),param_7,0);
    }
  }
LAB_0001ae0f:
  if (local_28[0] != (PVOID)0x0) {
    LsaFreeReturnBuffer(local_28[0]);
  }
  return unaff_EBX;
}




/* Library Function - Single Match
    RxFinishSrvCallConstruction
   
   Library: Visual Studio 2019 Release */

uint RxFinishSrvCallConstruction(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar3 = *(ushort **)(param_1 + 0x30);
  uVar7 = 4;
  lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0x2a0);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar6 = *(uint *)(param_1 + 0x70);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x4c);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xbb,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x168) + 0x1e8);
    if (pcVar5 == (code *)0x0) {
      uVar6 = 0xc0000002;
    }
    else {
      uVar6 = (*pcVar5)(puVar3,1,*(undefined8 *)(param_1 + (ulonglong)uVar6 * 0x28 + 0x78));
      if (uVar6 == 0) {
        uVar7 = 3;
      }
    }
  }
  ExAcquireResourceExclusiveLite(lVar4 + 0x18,1);
  RxUpdateCondition(uVar7,(undefined4 *)(puVar3 + 0x58),(undefined8 *)(puVar3 + 0x60));
  ExFreePoolWithTag(param_1,0);
  if ((*(uint *)(lVar2 + 0xa8) >> 0xc & 1) != 0) {
    ExReleaseResourceLite(lVar4 + 0x18);
    if ((*(uint *)(lVar2 + 0xa8) >> 0x13 & 1) != 0) {
      uVar6 = 0xc0000120;
    }
    if (*(char *)(lVar2 + 0x18) == '\0') {
      RxpPrepareCreateContextForReuse(lVar2);
    }
    if (uVar6 == 0) {
      uVar6 = (**(code **)(lVar2 + 0xf0))(lVar2,*(undefined8 *)(lVar2 + 0x28));
      if (uVar6 == 0x103) goto LAB_0001aff6;
    }
    else {
      lVar4 = *(longlong *)(lVar2 + 0x28);
      cVar1 = **(char **)(lVar4 + 0xb8);
      *(char *)(lVar2 + 0x18) = cVar1;
      if ((cVar1 == '\x0e') && (*(longlong *)(lVar2 + 0x178) != 0)) {
        ExFreePoolWithTag(*(longlong *)(lVar2 + 0x178),0);
        *(undefined8 *)(lVar2 + 0x178) = 0;
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(uint *)(lVar4 + 0x30) = uVar6;
    }
    RxCompleteRequest(lVar2,(ulonglong)uVar6);
  }
LAB_0001aff6:
  FUN_00036fe8();
  RxDereference(puVar3,0);
  return uVar6;
}




/* Library Function - Single Match
    RxFinishSrvCallConstructionDispatcher
   
   Library: Visual Studio 2019 Release */

void RxFinishSrvCallConstructionDispatcher(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  while( true ) {
    uVar2 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
    puVar1 = DAT_00021b40;
    DAT_00021b40 = (undefined8 *)*DAT_00021b40;
    DAT_00021b40[1] = &DAT_00021b40;
    if ((undefined8 **)puVar1 == &DAT_00021b40) {
      DAT_00020f39 = 0;
    }
    KeReleaseSpinLock(&DAT_00020e70,uVar2);
    if ((undefined8 **)puVar1 == &DAT_00021b40) break;
    if (param_1 == 0) {
      puVar1[7] = 0;
    }
    RxFinishSrvCallConstruction((longlong)(puVar1 + -3));
  }
  return;
}




/* Library Function - Single Match
    RxCreateSrvCallCallBack
   
   Library: Visual Studio 2019 Release */

void RxCreateSrvCallCallBack(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  uVar5 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  if ((int)param_1[3] == 0) {
    *(longlong *)(lVar3 + 0x50) = param_1[2];
    *(int *)(lVar3 + 0x4c) = (int)param_1[1];
  }
  *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + -1;
  iVar6 = *(int *)(lVar3 + 0x44);
  *(int *)(lVar4 + 0x40) = (int)param_1[3];
  KeReleaseSpinLock(&DAT_00020e70,uVar5);
  if (iVar6 == 0) {
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x28) + 0xa8);
    if ((uVar2 >> 0xc & 1) == 0) {
      KeSetEvent(lVar3,2,0);
    }
    else if ((uVar2 >> 10 & 1) == 0) {
      KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
      puVar1 = (undefined8 *)(lVar3 + 0x18);
      *(undefined8 **)(lVar3 + 0x20) = DAT_00021b48;
      *puVar1 = &DAT_00021b40;
      *DAT_00021b48 = puVar1;
      bVar7 = DAT_00020f39 == '\0';
      if (DAT_00020f39 == '\0') {
        DAT_00020f39 = '\x01';
      }
      DAT_00021b48 = puVar1;
      KeReleaseSpinLock(&DAT_00020e70);
      if (bVar7) {
        iVar6 = RxDispatchToWorkerThread
                          (DAT_00021538,0,RxFinishSrvCallConstructionDispatcher,&DAT_00021b40);
        if (iVar6 != 0) {
          RxFinishSrvCallConstructionDispatcher(0);
        }
      }
    }
    else {
      RxFinishSrvCallConstruction(lVar3);
    }
  }
  return;
}




/* Library Function - Single Match
    RxShadowCancelRoutine
   
   Library: Visual Studio 2019 Release */

undefined8 RxShadowCancelRoutine(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong *plVar6;
  
  uVar5 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  KeReleaseSpinLock(&DAT_00020e70,uVar5);
  if (lVar3 != 0) {
    IoCancelIrp(lVar3);
    LOCK();
    piVar1 = (int *)(param_1 + 0xcc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      plVar6 = *(longlong **)(lVar3 + 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          plVar6 = (longlong *)*plVar6;
          MmUnlockPages();
        } while (plVar6 != (longlong *)0x0);
        puVar4 = *(undefined8 **)(lVar3 + 8);
        while (puVar4 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar4;
          IoFreeMdl();
        }
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      IoFreeIrp(lVar3);
    }
  }
  return 0;
}




/* Library Function - Single Match
    RxShadowCommonCompletion
   
   Library: Visual Studio 2019 Release */

undefined8
RxShadowCommonCompletion(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong *plVar6;
  
  uVar3 = *(uint *)(param_1 + 0xa8);
  if ((*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 0x1c0)) &&
     ((*(char *)(param_1 + 0x18) == '\x03' || (*(char *)(param_1 + 0x18) == '\x04')))) {
    *(undefined8 *)(param_2 + 8) = 0;
  }
  if (*(char *)(param_1 + 200) == '\0') goto LAB_0001b368;
  uVar5 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
  param_2 = *(longlong *)(param_1 + 0xc0);
  if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_0001b353:
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1 + 0xcc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) goto LAB_0001b353;
    param_2 = 0;
  }
  KeReleaseSpinLock(&DAT_00020e70,uVar5);
LAB_0001b368:
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + param_4;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  if ((~(byte)(uVar3 >> 0xc) & 1) == 0) {
    RxLowIoCompletion(param_1);
  }
  else {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xffefffff;
    KeSetEvent(param_1 + 0x130,0,0);
  }
  if (param_2 != 0) {
    plVar6 = *(longlong **)(param_2 + 8);
    if (plVar6 != (longlong *)0x0) {
      do {
        plVar6 = (longlong *)*plVar6;
        MmUnlockPages();
      } while (plVar6 != (longlong *)0x0);
      puVar4 = *(undefined8 **)(param_2 + 8);
      while (puVar4 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar4;
        IoFreeMdl();
      }
      *(undefined8 *)(param_2 + 8) = 0;
    }
    IoFreeIrp(param_2);
  }
  return 0xc0000016;
}




/* Library Function - Single Match
    RxShadowVerifyIoParameters
   
   Library: Visual Studio 2019 Release */

undefined8
RxShadowVerifyIoParameters
          (longlong param_1,longlong param_2,uint param_3,uint param_4,uint *param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((*(uint *)(param_2 + 0x50) & 8) == 0) {
LAB_0001b4c0:
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x130);
    if ((((uVar1 == 0) || ((param_4 & uVar1 - 1) == 0)) &&
        ((param_3 & *(uint *)(param_1 + 0x98)) == 0)) ||
       (((uVar1 == 0 || (param_4 % (uint)uVar1 == 0)) &&
        ((param_3 & *(uint *)(param_1 + 0x98)) == 0)))) {
      uVar2 = *param_5;
      if ((((uVar2 == 0xffffffff) && (param_5[1] == 0xffffffff)) ||
          (((uVar2 == 0xfffffffe &&
            ((param_5[1] == 0xffffffff && ((*(uint *)(param_2 + 0x50) & 2) != 0)))) || (uVar1 == 0))
          )) || ((uVar2 & uVar1 - 1) == 0)) goto LAB_0001b4c0;
    }
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxShadowFastLowIo
   
   Library: Visual Studio 2019 Release */

int RxShadowFastLowIo(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  byte bVar10;
  undefined8 local_res20;
  uint *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  
  iVar9 = -0x3fffffea;
  lVar2 = *(longlong *)(param_2 + 0xb8);
  sVar1 = *(short *)(param_1 + 0x198);
  if ((sVar1 != 0) && (sVar1 != 1)) {
    return -0x3fffffea;
  }
  if ((*(byte *)(param_1 + 400) & 1) != 0) {
    return -0x3fffffea;
  }
  lVar3 = *(longlong *)(lVar2 + 0x30);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x48) != '\0')) {
    return -0x3fffffea;
  }
  if (lVar3 == 0) {
    return -0x3fffffea;
  }
  bVar10 = *(byte *)(param_1 + 0x1b8) & 1;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x28);
  if ((((bVar10 != 0) && (sVar1 == 0)) || (plVar4 == (longlong *)0x0)) ||
     ((*plVar4 == 0 || ((*(byte *)(lVar3 + 0x50) & 8) != 0)))) {
    return -0x3fffffea;
  }
  local_res20 = *(undefined8 *)(param_1 + 0x1c8);
  if ((*(uint *)(param_1 + 0xa8) >> 9 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x70);
  }
  else {
    uVar7 = RxLowIoGetBufferAddress(param_1);
  }
  puVar11 = (uint *)&local_res20;
  uVar8 = RxShadowVerifyIoParameters
                    (plVar4[1],*(longlong *)(lVar2 + 0x30),(uint)uVar7,*(uint *)(param_1 + 0x1d0),
                     puVar11);
  uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
  if ((int)uVar8 != 0) {
    return -0x3fffffea;
  }
  bVar5 = ~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1;
  if (bVar10 != 0) {
    bVar5 = 0;
  }
  uVar8 = IoGetTopLevelIrp();
  IoSetTopLevelIrp(0);
  if ((*(short *)(param_1 + 0x198) == 0) && ((code *)plVar4[3] != (code *)0x0)) {
    uVar12 = CONCAT44(uVar13,*(undefined4 *)(param_1 + 0x1d4));
    cVar6 = (*(code *)plVar4[3])
                      (*plVar4,&local_res20,*(undefined4 *)(param_1 + 0x1d0),bVar5,uVar12,uVar7,
                       &local_48,plVar4[1]);
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (cVar6 != '\0') {
      *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_44,local_48);
      *(longlong *)(param_2 + 0x38) = lStack_40;
      *(int *)(param_1 + 0xb0) = local_48;
      *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + lStack_40;
      iVar9 = local_48;
      goto LAB_0001b74e;
    }
  }
  if (((*(short *)(param_1 + 0x198) == 1) && ((code *)plVar4[4] != (code *)0x0)) &&
     (cVar6 = (*(code *)plVar4[4])
                        (*plVar4,&local_res20,*(undefined4 *)(param_1 + 0x1d0),bVar5,
                         CONCAT44(uVar13,*(undefined4 *)(param_1 + 0x1d4)),uVar7,&local_48,plVar4[1]
                        ), cVar6 != '\0')) {
    *(ulonglong *)(param_2 + 0x30) = CONCAT44(uStack_44,local_48);
    *(longlong *)(param_2 + 0x38) = lStack_40;
    *(int *)(param_1 + 0xb0) = local_48;
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + lStack_40;
    iVar9 = local_48;
  }
LAB_0001b74e:
  if ((iVar9 != 0) && (bVar10 != 0)) {
    iVar9 = -0x3fffffea;
  }
  IoSetTopLevelIrp(uVar8);
  return iVar9;
}




/* Library Function - Single Match
    RxShadowIrpCompletion
   
   Library: Visual Studio 2019 Release */

undefined8 RxShadowIrpCompletion(undefined8 param_1,longlong param_2,longlong param_3)

{
  RxShadowCommonCompletion
            (param_3,param_2,*(undefined4 *)(param_2 + 0x30),*(longlong *)(param_2 + 0x38));
  return 0xc0000016;
}




/* Library Function - Single Match
    RxShadowBuildAsynchronousRequest
   
   Library: Visual Studio 2019 Release */

undefined8
RxShadowBuildAsynchronousRequest
          (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5,
          undefined8 param_6,longlong param_7,undefined8 param_8,longlong *param_9)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  cVar1 = *(char *)(param_5 + 0x18);
  *param_9 = 0;
  if (((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x11')) {
    lVar7 = IoAllocateIrp(*(undefined1 *)(param_2 + 0x4c),0);
    uVar6 = DAT_00020f30;
    if (lVar7 == 0) {
      uVar6 = 0xc000009a;
    }
    else {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      lVar3 = *(longlong *)(lVar7 + 0xb8);
      *(undefined8 *)(lVar7 + 0x98) = uVar6;
      *(longlong *)(lVar7 + 0xc0) = param_3;
      *(undefined1 *)(lVar7 + 0x40) = 0;
      *(char *)(lVar3 + -0x48) = cVar1;
      *(undefined1 *)(lVar3 + -0x47) = 0;
      *(longlong *)(lVar3 + -0x18) = param_3;
      *(longlong *)(lVar3 + -0x20) = param_2;
      if (param_7 != 0) {
        lVar4 = *(longlong *)(lVar7 + 0xb8);
        *(longlong *)(lVar4 + -0x10) = param_7;
        *(undefined1 *)(lVar4 + -0x45) = 0xe0;
        *(undefined8 *)(lVar4 + -8) = param_8;
      }
      *(undefined4 *)(lVar7 + 0x10) = 0;
      uVar5 = *(uint *)(param_1 + 0x10) & 5;
      *(uint *)(lVar7 + 0x10) = uVar5;
      if (cVar1 == '\x11') {
        *(undefined1 *)(param_3 + 0x48) = 1;
        *(undefined1 *)(lVar3 + -0x47) = *(undefined1 *)(param_5 + 0x19);
        *(undefined1 *)(lVar3 + -0x46) = *(undefined1 *)(param_5 + 0x1c0);
        *(longlong *)(lVar3 + -0x40) = param_5 + 0x1b8;
        *(undefined4 *)(lVar3 + -0x38) = *(undefined4 *)(param_5 + 0x1d0);
        *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(param_5 + 0x1c8);
        *(undefined8 *)(lVar7 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
      }
      else {
        if ((*(byte *)(param_3 + 0x50) & 8) != 0) {
          *(uint *)(lVar7 + 0x10) = uVar5 | 1;
        }
        uVar2 = *(undefined4 *)(param_5 + 0x1d0);
        if ((cVar1 == '\x04') && ((*(byte *)(param_3 + 0x50) & 0x10) != 0)) {
          *(undefined1 *)(lVar3 + -0x46) = 4;
        }
        uVar6 = *(undefined8 *)(param_5 + 0x1c8);
        *(undefined4 *)(lVar3 + -0x40) = uVar2;
        *(undefined8 *)(lVar3 + -0x30) = uVar6;
        *(undefined4 *)(lVar3 + -0x38) = *(undefined4 *)(param_5 + 0x1d4);
        *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_5 + 0x1c0);
        *(longlong *)(lVar7 + 8) = lVar3;
        if ((lVar3 != 0) &&
           (*(ulonglong *)(lVar7 + 0x70) =
                 (ulonglong)*(uint *)(lVar3 + 0x2c) + *(longlong *)(lVar3 + 0x20),
           (*(uint *)(param_5 + 0xa8) >> 9 & 1) != 0)) {
          if ((*(byte *)(lVar3 + 10) & 5) == 0) {
            uVar6 = MmMapLockedPagesSpecifyCache(lVar3,0,1,0,0,0x10);
          }
          else {
            uVar6 = *(undefined8 *)(lVar3 + 0x18);
          }
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x70) = uVar6;
        }
      }
      uVar6 = 0;
      *param_9 = lVar7;
    }
  }
  else {
    uVar6 = 0xc00000bb;
  }
  return uVar6;
}




/* Library Function - Single Match
    RxShadowIoHandler
   
   Library: Visual Studio 2019 Release */

ulonglong RxShadowIoHandler(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x28);
  bVar9 = ~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    uVar7 = 0xc000026e;
  }
  else {
    lVar5 = plVar3[1];
    if (bVar9 != 0) {
      KeInitializeEvent(param_1 + 0x130,0,0);
    }
    uVar7 = RxShadowBuildAsynchronousRequest
                      (param_2,lVar5,lVar4,param_3,param_1,plVar3,0x1b798,param_1,&local_30);
    lVar4 = local_30;
    if ((int)uVar7 == 0) {
      *(longlong *)(param_1 + 0xc0) = local_30;
      *(char *)(param_1 + 200) = param_4;
      *(undefined4 *)(param_1 + 0xcc) = 1;
      uVar8 = IoGetTopLevelIrp();
      IoSetTopLevelIrp(0);
      IofCallDriver(lVar5,lVar4);
      IoSetTopLevelIrp(uVar8);
      if (param_4 == '\x01') {
        local_38 = 0;
        uVar6 = KeAcquireSpinLockRaiseToDpc(&DAT_00020e70);
        lVar4 = *(longlong *)(param_1 + 0xc0);
        if ((lVar4 == 0) || ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) != 0)) {
          if (lVar4 != 0) {
            *(undefined8 *)(param_1 + 0xc0) = 0;
            LOCK();
            *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
            UNLOCK();
            local_38 = lVar4;
          }
        }
        else {
          *(code **)(param_1 + 0xe8) = RxShadowCancelRoutine;
        }
        KeReleaseSpinLock(&DAT_00020e70,uVar6);
        if (local_38 != 0) {
          IoCancelIrp(local_38);
          LOCK();
          piVar1 = (int *)(param_1 + 0xcc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if (*(longlong *)(local_38 + 8) != 0) {
              *(undefined8 *)(local_38 + 8) = 0;
            }
            IoFreeIrp();
          }
        }
      }
      if (bVar9 == 0) {
        uVar7 = 0x103;
      }
      else {
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x100000;
        KeWaitForSingleObject(param_1 + 0x130,0,0,0,0);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0xb0);
      }
    }
  }
  return uVar7;
}




/* Library Function - Single Match
    RxShadowLowIo
   
   Library: Visual Studio 2019 Release */

ulonglong RxShadowLowIo(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar9;
  undefined8 local_res8;
  undefined8 uVar8;
  
  lVar4 = *(longlong *)(param_2 + 0xb8);
  sVar3 = *(short *)(param_1 + 0x198);
  if (((((sVar3 == 0) || (sVar3 == 1)) || (*(char *)(param_1 + 0x18) == '\x11')) ||
      (*(char *)(param_1 + 0x18) == '\x12')) &&
     (((*(char *)(param_1 + 0x18) != '\x12' || (sVar3 == 5)) &&
      (((*(byte *)(param_1 + 400) & 1) == 0 &&
       ((plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x28), plVar5 != (longlong *)0x0 &&
        (*plVar5 != 0)))))))) {
    if ((code *)plVar5[5] == (code *)0x0) {
      if ((sVar3 == 0) || (sVar3 == 1)) {
        local_res8 = *(undefined8 *)(param_1 + 0x1c8);
        if (*(longlong *)(param_1 + 0x1c0) == 0) {
          uVar6 = (uint)*(undefined8 *)(param_2 + 0x70);
        }
        else {
          uVar8 = RxLowIoGetBufferAddress(param_1);
          uVar6 = (uint)uVar8;
        }
        uVar7 = RxShadowVerifyIoParameters
                          (plVar5[1],*(longlong *)(lVar4 + 0x30),uVar6,*(uint *)(param_1 + 0x1d0),
                           (uint *)&local_res8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      if ((*(char *)(param_1 + 0x18) == '\x11') &&
         (((*(short *)(param_1 + 0x198) == 2 || (*(short *)(param_1 + 0x198) == 3)) &&
          ((*(byte *)(param_1 + 0x1c0) & 1) == 0)))) {
        RxReleaseFcbResourceForThreadInMRx(param_1,param_3,*(undefined8 *)(param_1 + 0x1b0));
        *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
      }
      if (*(short *)(param_1 + 0x198) == 5) {
        plVar5 = *(longlong **)(param_1 + 0x1b8);
        if (plVar5 == (longlong *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar1 = *(undefined1 *)(param_1 + 0x18);
          uVar2 = *(undefined1 *)(param_1 + 0x19);
          *(undefined1 *)(param_1 + 0x18) = 0x11;
          *(undefined1 *)(param_1 + 0x19) = 2;
          plVar9 = plVar5;
          do {
            *(longlong *)(param_1 + 0x1c8) = plVar9[2];
            *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)((longlong)plVar9 + 0x24);
            *(longlong *)(param_1 + 0x1b8) = plVar9[3];
            *(undefined4 *)(param_1 + 0x1c0) = 0;
            uVar7 = RxShadowIoHandler(param_1,param_2,param_3,'\0');
            plVar9 = (longlong *)*plVar9;
          } while (plVar9 != (longlong *)0x0);
          *(undefined1 *)(param_1 + 0x18) = uVar1;
          *(undefined1 *)(param_1 + 0x19) = uVar2;
          *(longlong **)(param_1 + 0x1b8) = plVar5;
        }
      }
      else {
        uVar7 = RxShadowIoHandler(param_1,param_2,param_3,*(char *)(param_1 + 0x18) == '\x11');
      }
    }
    else {
      uVar7 = (*(code *)plVar5[5])(param_1);
    }
  }
  else {
    uVar7 = 0xc0000016;
  }
  return uVar7;
}




/* Library Function - Single Match
    WmlTrace
   
   Library: Visual Studio 2019 Release */

undefined8 WmlTrace(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_11c;
  undefined8 local_118;
  int local_110 [62];
  undefined8 local_18 [3];
  
  local_res20 = param_4;
  local_130 = *param_2;
  uStack_128 = param_2[1];
  local_11c = 0x120000;
  puVar2 = &local_118;
  puVar3 = &local_res18;
  do {
    iVar1 = *(int *)(puVar3 + 1);
    *(int *)(puVar2 + 1) = iVar1;
    if (iVar1 == 0) break;
    puVar3 = puVar3 + 2;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 2;
  } while (puVar2 < local_18);
  local_148 = (int)puVar2 - (int)&local_148;
  local_res18 = param_3;
  local_144 = param_1;
  local_140 = param_3;
  IoWMIWriteEvent(&local_148);
  return 0;
}




/* Library Function - Single Match
    WmlpFindGuid
   
   Library: Visual Studio 2019 Release */

ulonglong WmlpFindGuid(longlong param_1,uint param_2,ulonglong *param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ulonglong *)(param_1 + uVar3 * 0x50);
      bVar4 = *param_3 < uVar1;
      if ((*param_3 == uVar1) &&
         (uVar1 = *(ulonglong *)(param_1 + 8 + uVar3 * 0x50), bVar4 = param_3[1] < uVar1,
         param_3[1] == uVar1)) {
        in_RAX = 0;
      }
      else {
        in_RAX = (ulonglong)((1 - (uint)bVar4) - (uint)(bVar4 != 0));
      }
      if ((int)in_RAX == 0) {
        *param_4 = (int)uVar3;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}




/* Library Function - Single Match
    WmlTinySystemControl
   
   Library: Visual Studio 2019 Release */

ulonglong WmlTinySystemControl(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  uint local_res20 [2];
  ushort local_48 [4];
  undefined8 local_40;
  
  lVar5 = *(longlong *)(param_3 + 0xb8);
  uVar11 = 0;
  uVar13 = 0;
  bVar2 = *(byte *)(lVar5 + 1);
  if ((((9 < bVar2) || (*(longlong *)(lVar5 + 8) != param_2)) ||
      ((bVar2 != 8 && ((int)param_1[1] == 0)))) || (*param_1 == 0)) {
    if (param_1[2] != 0) {
      *(char *)(param_3 + 0x43) = *(char *)(param_3 + 0x43) + '\x01';
      *(longlong *)(param_3 + 0xb8) = lVar5 + 0x48;
      uVar11 = IofCallDriver(param_1[2],param_3);
      return uVar11;
    }
    uVar11 = 0xc0000010;
    *(undefined4 *)(param_3 + 0x30) = 0xc0000010;
    goto LAB_0001c0ad;
  }
  uVar3 = *(uint *)(lVar5 + 0x18);
  puVar6 = *(ulonglong **)(lVar5 + 0x20);
  if ((bVar2 != 8) &&
     (uVar9 = WmlpFindGuid(*param_1,*(uint *)(param_1 + 1),*(ulonglong **)(lVar5 + 0x10),
                           (int *)local_res20), (char)uVar9 == '\0')) {
    uVar13 = 0xc0000295;
LAB_0001c001:
    *(uint *)(param_3 + 0x30) = uVar13;
    IofCompleteRequest(param_3,0);
    return (ulonglong)uVar13;
  }
  if (bVar2 < 4) {
LAB_0001c06b:
    uVar11 = 0xc0000010;
  }
  else if (bVar2 < 6) {
    lVar12 = (ulonglong)local_res20[0] * 0x50 + *param_1;
    if (*(uint *)(lVar5 + 0x18) < 0x30) {
      uVar11 = 0xc000000d;
    }
    else {
      uVar11 = 0;
      if (bVar2 == 5) {
        *(undefined4 *)(lVar12 + 0x44) = 0;
        *(undefined4 *)(lVar12 + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
      }
      else {
        *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 8);
        *(uint *)(lVar12 + 0x44) = (uint)*(byte *)(lVar12 + 0x4a);
        *(undefined4 *)(lVar12 + 0x40) = *(undefined4 *)(lVar12 + 0x4c);
      }
    }
  }
  else if (7 < bVar2) {
    if (bVar2 == 8) {
      puVar14 = (ushort *)param_1[3];
      puVar16 = (ulonglong *)*param_1;
      uVar4 = *(uint *)(param_1 + 1);
      uVar11 = (ulonglong)uVar4;
      if (puVar14 == (ushort *)0x0) {
        local_40 = 0;
        local_48[0] = 0;
        local_48[1] = 0;
        puVar14 = local_48;
      }
      uVar15 = uVar4 * 0x20 + 0x18;
      uVar1 = *puVar14 + 2 + uVar15;
      uVar9 = (ulonglong)uVar1;
      if (uVar3 < uVar1) {
        *(uint *)puVar6 = uVar1;
        uVar13 = 0xc0000023;
        uVar9 = 4;
      }
      else {
        FUN_0001c430(puVar6,0,(ulonglong)uVar1);
        *(uint *)puVar6 = uVar1;
        *(uint *)(puVar6 + 1) = uVar15;
        *(uint *)(puVar6 + 2) = uVar4;
        if (uVar4 != 0) {
          puVar10 = puVar6 + 3;
          do {
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            *(undefined4 *)(puVar10 + 2) = 0x81000;
            puVar16 = puVar16 + 10;
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10 = puVar10 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        *(ushort *)((ulonglong)uVar15 + (longlong)puVar6) = *puVar14;
        memcpy((ushort *)((ulonglong)uVar15 + (longlong)puVar6) + 1,*(void **)(puVar14 + 4),
               (ulonglong)*puVar14);
      }
      *(ulonglong *)(param_3 + 0x38) = uVar9;
      goto LAB_0001c001;
    }
    goto LAB_0001c06b;
  }
  *(int *)(param_3 + 0x30) = (int)uVar11;
  *(undefined8 *)(param_3 + 0x38) = 0;
LAB_0001c0ad:
  IofCompleteRequest(param_3,0);
  return uVar11;
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
    if (_Size < 8) goto LAB_0001c2f4;
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
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_0001c330;
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
    goto LAB_0001c2d7;
  }
  puVar4 = (undefined8 *)_Dst;
  if (_Size < 8) goto LAB_0001c154;
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
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_0001c190;
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
  goto LAB_0001c137;
LAB_0001c330:
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
LAB_0001c2d7:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_0001c2f4:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_0001c190:
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
LAB_0001c137:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_0001c154:
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




void FUN_0001c430(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

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




/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

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
  FUN_00015570(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
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
    __GSHandlerCheck_SEH
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

EXCEPTION_DISPOSITION
__GSHandlerCheck_SEH
          (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,_DISPATCHER_CONTEXT *param_4)

{
  uint *puVar1;
  uint uVar2;
  EXCEPTION_DISPOSITION EVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_4 + 0x38) + (ulonglong)**(uint **)(param_4 + 0x38) * 4 + 1;
  __GSHandlerCheckCommon((ulonglong)param_2,(longlong)param_4,puVar1);
  uVar2 = *puVar1;
  EVar3 = ExceptionContinueSearch;
  uVar4 = uVar2 & 2;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    uVar4 = uVar2 & 1;
  }
  if (uVar4 != 0) {
    EVar3 = __C_specific_handler(param_1,param_2,param_3,param_4);
  }
  return EVar3;
}




void FUN_0001cfea(void)

{
  ExReleaseResourceLite(&DAT_000214d0);
  return;
}




void FUN_0001d074(longlong *param_1,longlong param_2)

{
  RxExceptionFilter(*(longlong *)(param_2 + 0x40),param_1);
  return;
}




void FUN_0001d0cb(undefined8 param_1,longlong param_2)

{
  IoSetTopLevelIrp(*(undefined8 *)(param_2 + 0x50));
  return;
}




void FUN_0001d0ea(void)

{
  return;
}




void FUN_0001d0ff(void)

{
  return;
}




void FUN_0001d10c(void)

{
  return;
}




undefined8 FUN_00024008(void)

{
  return 0;
}




wchar_t * FUN_00024014(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  
  if (*(char *)(param_1 + 0x18) == '\r') {
    return (wchar_t *)(ulonglong)(-(uint)(*(char *)(param_1 + 0x1e0) != '\0') & 0xc0000010);
  }
  if (*(char *)(param_1 + 0x18) == '\x0e') {
    uVar1 = *(uint *)(param_1 + 0x1bc);
    if (uVar1 < 0x140325) {
      if (uVar1 == 0x140324) {
        pwVar3 = (wchar_t *)FUN_00011cb0(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x140190) {
        uVar2 = FUN_000113d4(param_1);
        return (wchar_t *)CONCAT44(extraout_var_00,uVar2);
      }
      if (uVar1 == 0x140194) {
        pwVar3 = (wchar_t *)FUN_000114bc(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x140198) {
        uVar1 = FUN_000117ac(param_1);
        return (wchar_t *)CONCAT44(extraout_var,uVar1);
      }
      if (uVar1 == 0x14019c) {
        pwVar3 = (wchar_t *)FUN_00011404(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x140320) {
        pwVar3 = FUN_0001194c(param_1);
        return pwVar3;
      }
    }
    else {
      if (uVar1 == 0x140328) {
        uVar1 = FUN_00011dac(param_1);
        return (wchar_t *)CONCAT44(extraout_var_02,uVar1);
      }
      if (uVar1 == 0x1404b0) {
        pwVar3 = (wchar_t *)FUN_00011f9c(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x1404b4) {
        pwVar3 = (wchar_t *)FUN_00012064(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x140640) {
        pwVar3 = (wchar_t *)FUN_0001215c(param_1);
        return pwVar3;
      }
      if (uVar1 == 0x140644) {
        uVar1 = FUN_000122d8(param_1);
        return (wchar_t *)CONCAT44(extraout_var_01,uVar1);
      }
    }
  }
  return (wchar_t *)0xc0000010;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002412c(longlong param_1)

{
  short sVar1;
  ushort *puVar2;
  ushort *puVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStackY_358 [32];
  char local_2f8 [8];
  short local_2f0 [5];
  undefined4 local_2e6;
  undefined2 local_2e2;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0 [8];
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [8];
  ulonglong local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  undefined4 local_288;
  undefined4 local_280 [2];
  ulonglong local_278;
  short *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  ulonglong local_248 [2];
  undefined2 local_238;
  ulonglong local_236 [63];
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStackY_358;
  lVar7 = *(longlong *)(param_1 + 0x38);
  puVar2 = *(ushort **)(param_1 + 0x48);
  lVar10 = *(longlong *)(lVar7 + 0x58);
  puVar3 = *(ushort **)(puVar2 + 0x1c);
  local_2a8 = (undefined1  [8])((ulonglong)local_2a8 & 0xffffffff00000000);
  local_2f8[0] = '\0';
  FUN_0001c430((ulonglong *)(local_2a8 + 4),0,0x24);
  local_2c0 = (undefined1  [8])((ulonglong)(uint)local_2c0._4_4_ << 0x20);
  FUN_0001c430((ulonglong *)(local_2c0 + 4),0,0x14);
  local_2d8 = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_280[0] = 0;
  FUN_0001c430(&local_278,0,0x28);
  local_248[0] = 0x5c003f003f005c;
  local_248[1] = 0x65007000690070;
  local_238 = 0;
  FUN_0001c430(local_236,0,0x1f6);
  local_2f0[0] = 0;
  local_2f0[1] = 0;
  local_2f0[2] = 0;
  local_2f0[3] = 0;
  local_2f0[4] = 0;
  local_2e6 = 0;
  local_2e2 = 0;
  cVar5 = ExIsResourceAcquiredExclusiveLite(*(undefined8 *)(lVar7 + 8));
  if (cVar5 == '\0') {
    RxAcquireExclusiveFcbResourceInMRx(lVar7);
  }
  cVar5 = *(char *)(lVar10 + 0x2d);
  if (cVar5 == '\x01') {
    local_288 = 0x80;
    local_2c0 = (undefined1  [8])0x0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2c8 = _DAT_fffff78000000014;
    local_2a8 = (undefined1  [8])_DAT_fffff78000000014;
    local_2a0 = _DAT_fffff78000000014;
    local_298 = _DAT_fffff78000000014;
    local_290 = _DAT_fffff78000000014;
    lVar7 = RxCreateNetFobx(param_1,puVar2);
    *(longlong *)(param_1 + 0x40) = lVar7;
    if (lVar7 != 0) {
      psVar4 = *(short **)(lVar7 + 0x18);
      if (*psVar4 != -0xfc) {
        *psVar4 = -0xfc;
        psVar4[1] = 0x270;
      }
      lVar7 = *(longlong *)(puVar3 + 4);
      uVar8 = (ulonglong)(*puVar3 >> 2);
      if (uVar8 < 0x7fffffff) {
        lVar10 = 0x104;
        puVar9 = local_248;
        do {
          if ((uVar8 == 0) ||
             (sVar1 = *(short *)((lVar7 - (longlong)local_248) + (longlong)puVar9), sVar1 == 0))
          break;
          lVar10 = lVar10 + -1;
          *(short *)puVar9 = sVar1;
          uVar8 = uVar8 - 1;
          puVar9 = (ulonglong *)((longlong)puVar9 + 2);
        } while (lVar10 != 0);
        if (lVar10 == 0) {
          puVar9 = (ulonglong *)((longlong)puVar9 + -2);
        }
        *(short *)puVar9 = 0;
      }
      else {
        local_248[0] = local_248[0] & 0xffffffffffff0000;
      }
      lVar7 = -1;
      local_2f0[4] = (short)local_248;
      local_2e6 = (undefined4)((ulonglong)local_248 >> 0x10);
      local_2e2 = (undefined2)((ulonglong)local_248 >> 0x30);
      puVar9 = local_248;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        uVar8 = *puVar9;
        puVar9 = (ulonglong *)((longlong)puVar9 + 2);
      } while ((short)uVar8 != 0);
      local_2f0[1] = 0x208;
      local_270 = local_2f0;
      local_2f0[0] = (~(ushort)lVar7 - 1) * 2;
      local_280[0] = 0x30;
      local_278 = 0;
      local_268 = 0x240;
      local_260 = 0;
      local_258 = 0;
      local_2e0 = 0;
      iVar6 = ZwCreateFile(&local_2e0,*(uint *)(param_1 + 400) | 0x100000,local_280,&local_2d8);
      if (-1 < iVar6) {
        *(undefined8 *)(psVar4 + 4) = local_2e0;
        FUN_000244cc(param_1,local_2f8,3,2,(longlong)local_2a8,(longlong)local_2c0);
      }
    }
  }
  else if ((cVar5 == '\0') || (cVar5 == '\x04')) {
    FUN_000141f4(param_1);
  }
  FUN_00015570(local_38 ^ (ulonglong)auStackY_358);
  return;
}




undefined8
FUN_000244cc(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
            longlong param_6)

{
  uint *puVar1;
  short *psVar2;
  longlong lVar3;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  psVar2 = *(short **)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*param_2 != '\0') {
    RxAcquireExclusiveFcbResourceInMRx((longlong)psVar2);
    *param_2 = '\0';
  }
  *(undefined4 *)(param_1 + 0x1d0) = 2;
  local_58 = param_5 + 0x20;
  local_48 = param_5;
  local_28 = param_6;
  local_50 = param_6 + 0x10;
  local_40 = param_5 + 8;
  local_38 = param_5 + 0x10;
  local_30 = param_5 + 0x18;
  local_20 = param_6 + 8;
  if (*(int *)(psVar2 + 0x40) == 0) {
    local_18 = local_20;
    RxFinishFcbInitialization(psVar2,-0x13fd,&local_58);
  }
  puVar1 = (uint *)(lVar3 + 0x5c);
  *puVar1 = *puVar1 | 0xf380000;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x40) = 1;
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxUnstart
   
   Library: Visual Studio 2019 Release */

void RxUnstart(undefined8 param_1,longlong param_2)

{
  if (DAT_00021450 == 1) {
    RxFinalizeNetTable(param_2,'\x01');
    DAT_00021450 = 0;
    if (DAT_00020f28 != 0) {
      ExFreePoolWithTag(DAT_00020f28,0);
      _DAT_00020f20 = 0;
      DAT_00020f28 = 0;
    }
  }
  else {
    LOCK();
    DAT_00021450 = DAT_00021450 + -1;
    UNLOCK();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxpUnregisterMinirdr
   
   Library: Visual Studio 2019 Release */

void RxpUnregisterMinirdr(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FsRtlDeregisterUncProvider();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(char *)(param_1 + 0x192) != '\0') {
    IoUnregisterFileSystem(param_1);
  }
  ExAcquireFastMutexUnsafe(&DAT_00021458);
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  lVar2 = *(longlong *)(param_1 + 0x198);
  *plVar1 = lVar2;
  *(longlong **)(lVar2 + 8) = plVar1;
  _DAT_000214a0 = _DAT_000214a0 + -1;
  if (_DAT_000214a0 == 0) {
    *(code **)(DAT_00021448 + 0x68) = RxUnload;
  }
  ExReleaseFastMutexUnsafe(&DAT_00021458);
  if ((*(byte *)(param_1 + 0x150) & 8) == 0) {
    RxFinalizeNetTable(param_1,'\x01');
    FUN_0003bf68(param_1 + 0x2a8);
  }
  RxSpinDownOutstandingAsynchronousRequests(param_1);
  RxSpinDownMRxDispatcher(param_1);
                    /* WARNING: Could not recover jumptable at 0x000246be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IoDeleteDevice(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxRegisterMinirdr
   
   Library: Visual Studio 2019 Release */

ulonglong RxRegisterMinirdr(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,
                           undefined8 *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong unaff_RBX;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  
  puVar7 = (undefined8 *)0x0;
  if (param_1 == (longlong *)0x0) {
    return unaff_RBX;
  }
  bVar5 = ~(byte)param_4 & 1;
  if ((DAT_000212a0 == (code *)0x0) || (bVar1 = true, (param_4 >> 4 & 1) != 0)) {
    bVar1 = false;
  }
  puVar6 = param_5;
  if (bVar1) {
    puVar6 = puVar7;
  }
  iVar2 = IoCreateDevice(param_2,param_6 + 0x520,puVar6,param_7,
                         CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),param_8) |
                         0x10,in_stack_ffffffffffffffa0 & 0xffffffffffffff00,&local_res8);
  if (iVar2 != 0) {
    return unaff_RBX;
  }
  *(uint *)(local_res8 + 0x30) = *(uint *)(local_res8 + 0x30) & 0xffffff7f;
  if (DAT_00021448 == 0) {
    return unaff_RBX;
  }
  *(undefined8 *)(local_res8 + 0x160) = 0;
  *(int *)(DAT_00021538 + 4) = *(int *)(DAT_00021538 + 4) + 1;
  *param_1 = local_res8;
  *(undefined **)(local_res8 + 0x158) = &DAT_000217f0;
  *(longlong *)(local_res8 + 0x168) = param_3;
  *(uint *)(local_res8 + 0x150) = param_4;
  uVar3 = param_5[1];
  *(undefined8 *)(local_res8 + 0x170) = *param_5;
  *(undefined8 *)(local_res8 + 0x178) = uVar3;
  *(byte *)(local_res8 + 400) = bVar5;
  *(byte *)(local_res8 + 0x191) = ~(byte)(param_4 >> 1) & 1;
  do {
    lVar4 = (longlong)puVar7 + local_res8 + 0x238;
    puVar7 = puVar7 + 2;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)lVar4 = lVar4;
  } while ((longlong)puVar7 < 0x30);
  *(undefined8 *)(local_res8 + 0x268) = 0;
  uVar3 = FUN_00024e34();
  *(int *)(local_res8 + 0x180) = (int)uVar3;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x69,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  ExAcquireFastMutexUnsafe(&DAT_00021458);
  puVar7 = (undefined8 *)(local_res8 + 0x198);
  *puVar7 = &DAT_00021490;
  *(undefined8 **)(local_res8 + 0x1a0) = DAT_00021498;
  *DAT_00021498 = puVar7;
  _DAT_000214a0 = _DAT_000214a0 + 1;
  DAT_00021498 = puVar7;
  ExReleaseFastMutexUnsafe(&DAT_00021458);
  if ((param_4 & 4) == 0) {
    FUN_00033658();
  }
  if ((param_4 & 8) == 0) {
    *(longlong *)(local_res8 + 0x2a0) = local_res8 + 0x2a8;
    RxInitializePrefixTable(*(undefined2 **)(local_res8 + 0x2a0),0,0);
    *(undefined1 *)(local_res8 + 0x331) = 1;
    if ((ulonglong)(*(short *)(param_3 + 2) + param_3) < param_3 + 0x214U) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)*(uint *)(param_3 + 0x210) * 10000000;
    }
    *(longlong *)(local_res8 + 0x538) = local_res8 + 0x540;
    **(undefined4 **)(local_res8 + 0x538) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x18) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x1c) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x20) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x24) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x28) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 0x2c) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 8) = 0;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x538) + 4) = 0x32;
    *(undefined8 *)(*(longlong *)(local_res8 + 0x538) + 0x110) = 0;
    *(undefined8 *)(*(longlong *)(local_res8 + 0x538) + 0x108) = 0;
    if (lVar4 == 0) {
      *(undefined8 *)(*(longlong *)(local_res8 + 0x538) + 0x10) = 100000000;
    }
    else {
      *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x10) = lVar4;
    }
    KeInitializeEvent(*(longlong *)(local_res8 + 0x538) + 0xd0,0,0);
    KeInitializeEvent(*(longlong *)(local_res8 + 0x538) + 0xe8,1,1);
    KeInitializeEvent(*(longlong *)(local_res8 + 0x538) + 0x118,0,0);
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x30;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x38) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x40;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x48) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x50;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x58) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x70;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x78) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x60;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x68) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x80;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x88) = lVar4;
    *(longlong *)lVar4 = lVar4;
    lVar4 = *(longlong *)(local_res8 + 0x538) + 0x90;
    *(longlong *)(*(longlong *)(local_res8 + 0x538) + 0x98) = lVar4;
    *(longlong *)lVar4 = lVar4;
  }
  *(undefined8 *)(local_res8 + 0x278) = 0;
  if (bVar5 == 0) {
    return unaff_RBX;
  }
  if (bVar1) {
    iVar2 = (*DAT_000212a0)(local_res8 + 0x188,local_res8 + 0x170,local_res8,
                            *(char *)(local_res8 + 0x191) != '\0');
  }
  else {
    iVar2 = FsRtlRegisterUncProvider
                      (local_res8 + 0x188,local_res8 + 0x170,*(undefined1 *)(local_res8 + 0x191));
    if (iVar2 < 0) goto LAB_00024c86;
    IoRegisterFileSystem(local_res8);
    *(undefined1 *)(local_res8 + 0x192) = 1;
  }
  if (-1 < iVar2) {
    return unaff_RBX;
  }
LAB_00024c86:
  lVar4 = *(longlong *)(local_res8 + 0x160);
  RxpUnregisterMinirdr(local_res8);
  if (lVar4 != 0) {
    ObfDereferenceObject(lVar4);
  }
  return unaff_RBX;
}




/* Library Function - Single Match
    RxReadRegistryParameters
   
   Library: Visual Studio 2019 Release */

void RxReadRegistryParameters(void)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [4];
  int local_44;
  uint local_3c;
  
  RtlInitUnicodeString
            (local_58,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LanmanWorkStation\\Parameters"
            );
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = local_58;
  local_88[0] = 0x30;
  local_70 = 0x240;
  iVar1 = ZwOpenKey(local_res10,&DAT_00020019,local_88);
  if (-1 < iVar1) {
    RtlInitUnicodeString(local_98,L"DisableByteRangeLockingOnReadOnlyFiles");
    iVar1 = ZwQueryValueKey(local_res10[0],local_98,2,local_48,0x40,local_res8);
    if ((-1 < iVar1) && (local_44 == 4)) {
      DAT_00020e04 = local_3c != 0;
    }
    RtlInitUnicodeString(local_98,L"ReadAheadGranularity");
    iVar1 = ZwQueryValueKey(local_res10[0],local_98,2,local_48,0x40,local_res8);
    if ((-1 < iVar1) && (local_44 == 4)) {
      if (0x1000 < local_3c) {
        local_3c = 0x1000;
      }
      DAT_00020114 = local_3c << 0xc;
    }
    ZwClose(local_res10[0]);
  }
  return;
}




undefined8 FUN_00024e34(void)

{
  return 1;
}




/* Library Function - Single Match
    RxUnload
   
   Library: Visual Studio 2019 Release */

void RxUnload(void)

{
  int iVar1;
  
  RxTearDownRxTimer();
  ExDeleteResourceLite(&DAT_000214d0);
  RxTearDownDispatcher();
  FUN_00019e08();
  ExDeleteNPagedLookasideList(&DAT_00020d80);
  RxUninitializeLog();
  if (DAT_00020e05 != '\0') {
    iVar1 = IoWMIRegistrationControl(DAT_00021538,2);
    if (iVar1 != 0) {
      DbgPrint("Rdbss fails to deregister WMI %lx\n",iVar1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitializeRegistrationStructures
   
   Library: Visual Studio 2019 Release */

undefined8 RxInitializeRegistrationStructures(void)

{
  _DAT_00021460 = 0;
  _DAT_00021468 = 0;
  _DAT_00021458 = 1;
  KeInitializeEvent(&DAT_00021470,1,0);
  _DAT_000214a0 = 0;
  DAT_00021450 = 0;
  DAT_00021498 = &DAT_00021490;
  _DAT_00021490 = &DAT_00021490;
  return 0;
}




/* Library Function - Single Match
    RxTryToBecomeTheTopLevelIrp
   
   Library: Visual Studio 2019 Release */

ulonglong RxTryToBecomeTheTopLevelIrp
                    (ulonglong *param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  puVar1 = (ulonglong *)IoGetTopLevelIrp();
  if ((puVar1 == (ulonglong *)0x0) || (param_4 != '\0')) {
    puVar1 = param_1;
    if (param_1 == (ulonglong *)0x0) {
      puVar1 = (ulonglong *)ExAllocatePoolWithTag(0,0x48,0x72497852);
      if (puVar1 == (ulonglong *)0x0) goto LAB_00024f43;
      uVar4 = 1;
    }
    __RxInitializeTopLevelIrpContext(puVar1,param_2,param_3,uVar4);
    uVar3 = IoSetTopLevelIrp(puVar1);
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
LAB_00024f43:
    uVar2 = (ulonglong)puVar1 & 0xffffffffffffff00;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxFsdDispatch
   
   Library: Visual Studio 2019 Release */

ulonglong RxFsdDispatch(ulonglong param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ushort *puVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  undefined4 local_res10;
  
  pcVar2 = (char *)param_2[0x17];
  cVar1 = *pcVar2;
  lVar3 = *(longlong *)(pcVar2 + 0x30);
  if (cVar1 == '\x17') {
    uVar5 = RxSystemControl(param_1,(longlong)param_2);
    return uVar5;
  }
  if ((cVar1 == '\x13') || (cVar1 == '\x01')) {
    local_res10 = 0xc0000033;
LAB_00025081:
    ppuVar6 = (undefined **)0x0;
  }
  else {
    if (cVar1 == '\0') {
      ppuVar6 = &PTR_RxCommonCreate_00020120;
      goto LAB_00025088;
    }
    if ((lVar3 == 0) || (puVar4 = *(ushort **)(lVar3 + 0x18), puVar4 == (ushort *)0x0)) {
      local_res10 = 0xc0000010;
      goto LAB_00025058;
    }
    if ((((*puVar4 & 0xff00) != 0xec00) && ((*puVar4 & 0xfff0) != 0xeb90)) ||
       (ppuVar6 = *(undefined ***)(puVar4 + 0x94), ppuVar6 == (undefined **)0x0)) {
      ppuVar6 = &PTR_RxCommonCreate_00020120;
    }
    if (param_1 == DAT_00021538) {
      local_res10 = 0xc0000010;
      goto LAB_00025081;
    }
  }
  if (ppuVar6 == (undefined **)0x0) {
LAB_00025058:
    pcVar2[3] = pcVar2[3] | 1;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 6) = local_res10;
    IofCompleteRequest(param_2,0);
    return 0x103;
  }
LAB_00025088:
  uVar5 = RxFsdCommonDispatch(ppuVar6,param_2,lVar3,param_1);
  return uVar5;
}




/* Library Function - Single Match
    RxDevFcbQueryDeviceInfo
   
   Library: Visual Studio 2019 Release */

undefined8
RxDevFcbQueryDeviceInfo
          (longlong param_1,short *param_2,undefined1 *param_3,undefined4 *param_4,uint param_5,
          undefined4 *param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_5 < 8) {
    uVar4 = 0x80000005;
  }
  else {
    param_4[1] = 0x10;
    *param_6 = 8;
    uVar4 = 0;
    if (param_2 == (short *)0x0) {
      *param_4 = 0x14;
      uVar4 = 0;
    }
    else {
      cVar3 = ExAcquireResourceSharedLite
                        (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18,
                         CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01);
      if (cVar3 == '\0') {
        *param_3 = 1;
        uVar4 = 0x103;
      }
      else {
        if (*param_2 == -0x14ee) {
          lVar2 = *(longlong *)(param_2 + 4);
          if (*(char *)(lVar2 + 0x2d) == '\x01') {
            *(undefined4 *)(lVar2 + 0x30) = 0x11;
          }
          *param_4 = *(undefined4 *)(lVar2 + 0x30);
        }
        else {
          uVar4 = 0xc0000002;
        }
        ExReleaseResourceLite(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18);
      }
    }
  }
  return uVar4;
}




/* Library Function - Single Match
    RxGetUid
   
   Library: Visual Studio 2019 Release */

undefined8 RxGetUid(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[2];
  }
  SeQueryAuthenticationIdToken(lVar1,local_res8);
  return local_res8[0];
}




/* Library Function - Single Match
    RxXXXControlFileCallthru
   
   Library: Visual Studio 2019 Release */

undefined8 RxXXXControlFileCallthru(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x168) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    uVar1 = 0xc0000010;
  }
  else {
    uVar1 = RxLowIoPopulateFsctlInfo(param_1,param_2);
    if ((int)uVar1 == 0) {
      if (((*(int *)(param_1 + 0x1c0) == 0) || (*(longlong *)(param_1 + 0x1c8) != 0)) &&
         ((*(int *)(param_1 + 0x1d0) == 0 || (*(longlong *)(param_1 + 0x1d8) != 0)))) {
        uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x168) + 0x1f8))(param_1)
        ;
        if ((int)uVar1 != 0x103) {
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0xb8);
        }
      }
      else {
        uVar1 = 0xc000000d;
      }
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    RxCommonDevFCBQueryVolInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonDevFCBQueryVolInfo(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short sVar6;
  short *psVar7;
  char local_res10 [8];
  int local_res18;
  uint local_res20 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  local_res18 = *(int *)(lVar2 + 0x10);
  puVar3 = *(undefined4 **)(param_2 + 0x18);
  local_res10[0] = '\0';
  uVar1 = *(uint *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x30);
  if (lVar2 == 0) {
    psVar7 = (short *)0x0;
    sVar6 = -0x1400;
  }
  else {
    psVar7 = *(short **)(lVar2 + 0x20);
    sVar6 = **(short **)(lVar2 + 0x18);
  }
  if (sVar6 == -0x1466) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x6d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (local_res18 == 4) {
      uVar5 = RxDevFcbQueryDeviceInfo(param_1,psVar7,local_res10,puVar3,uVar1,local_res20);
      uVar4 = uVar5 & 0xffffffff;
      if (local_res10[0] == '\0') {
        if ((int)uVar5 == 0) {
          *(ulonglong *)(param_2 + 0x38) = (ulonglong)local_res20[0];
        }
      }
      else {
        *(code **)(param_1 + 0xf0) = RxCommonDevFCBQueryVolInfo;
        uVar4 = RxFsdPostRequest(param_1);
      }
    }
    else {
      uVar4 = 0xc0000002;
    }
  }
  else {
    uVar4 = 0xc0000010;
  }
  return uVar4;
}




/* Library Function - Single Match
    RxCommonDevFCBIoCtl
   
   Library: Visual Studio 2019 Release */

void RxCommonDevFCBIoCtl(ulonglong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  short sVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar2 == 0) {
    lVar4 = 0;
    sVar5 = -0x1400;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x20);
    sVar5 = **(short **)(lVar2 + 0x18);
  }
  if ((sVar5 == -0x1466) && (lVar4 == 0)) {
    if ((iVar1 == 0x14018f) || (iVar1 == 0x140193)) {
      if (*(char *)(param_2 + 0x40) == '\0') {
        FUN_0002a020(param_1);
      }
    }
    else {
      uVar3 = RxXXXControlFileCallthru(param_1,param_2);
      if (((int)uVar3 != 0x103) && (*(char *)(param_1 + 0x1b) != '\0')) {
        *(code **)(param_1 + 0xf0) = RxCommonDevFCBIoCtl;
        RxFsdPostRequest(param_1);
      }
    }
  }
  return;
}




/* Library Function - Single Match
    RxCommonDevFCBFsCtl
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonDevFCBFsCtl(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short *psVar3;
  longlong lVar4;
  short sVar5;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  lVar4 = *(longlong *)(lVar1 + 0x30);
  if (lVar4 == 0) {
    psVar3 = (short *)0x0;
    sVar5 = -0x1400;
    lVar4 = 0;
  }
  else {
    psVar3 = *(short **)(lVar4 + 0x18);
    lVar4 = *(longlong *)(lVar4 + 0x20);
    sVar5 = *psVar3;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x6c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (sVar5 == -0x1466) {
    if (*(char *)(lVar1 + 1) == '\0') {
      uVar2 = RxXXXControlFileCallthru(param_1,param_2);
      if (((int)uVar2 == -0x3ffffff0) && (lVar4 != 0)) {
        uVar2 = RxLowIoFsCtlShell(param_1,param_2,(longlong)psVar3,lVar4);
      }
    }
    else {
      uVar2 = RxXXXControlFileCallthru(param_1,param_2);
    }
    if (*(char *)(param_1 + 0x1b) != '\0') {
      *(code **)(param_1 + 0xf0) = RxCommonDevFCBFsCtl;
      uVar2 = RxFsdPostRequest(param_1);
    }
  }
  else {
    uVar2 = 0xc0000010;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxCommonDevFCBCleanup
   
   Library: Visual Studio 2019 Release */

short * RxCommonDevFCBCleanup(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  psVar2 = (short *)0x0;
  if (lVar1 == 0) {
    sVar5 = -0x1400;
    psVar3 = psVar2;
    psVar4 = psVar2;
  }
  else {
    sVar5 = **(short **)(lVar1 + 0x18);
    psVar3 = *(short **)(lVar1 + 0x20);
    psVar4 = *(short **)(lVar1 + 0x18);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x6b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (sVar5 == -0x1466) {
    if (psVar3 == (short *)0x0) {
      *(int *)(psVar4 + 0x3c) = *(int *)(psVar4 + 0x3c) + -1;
      psVar2 = (short *)0x0;
    }
    else {
      ExAcquireResourceSharedLite(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18,1);
      if (*psVar3 != -0x14ee) {
        psVar2 = (short *)0xc0000010;
      }
      ExReleaseResourceLite(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18);
    }
  }
  else {
    psVar2 = (short *)0xc0000010;
  }
  return psVar2;
}




/* Library Function - Single Match
    RxCommonDevFCBClose
   
   Library: Visual Studio 2019 Release */

ushort * RxCommonDevFCBClose(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  
  puVar3 = (ushort *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0);
  if (lVar1 == 0) {
    uVar6 = 0xec00;
    puVar4 = puVar3;
    puVar5 = puVar3;
  }
  else {
    uVar6 = **(ushort **)(lVar1 + 0x18);
    puVar4 = *(ushort **)(lVar1 + 0x20);
    puVar5 = *(ushort **)(lVar1 + 0x18);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x6a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (uVar6 == 0xeb9a) {
    if (puVar4 == (ushort *)0x0) {
      *(int *)(puVar5 + 0x40) = *(int *)(puVar5 + 0x40) + -1;
      puVar3 = (ushort *)0x0;
    }
    else {
      ExAcquireResourceExclusiveLite(lVar2 + 0x18,1);
      if (*puVar4 == 0xeb12) {
        *(int *)(puVar4 + 0x12) = *(int *)(puVar4 + 0x12) + -1;
        FUN_00036fe8();
        RxDereference(puVar4,2);
      }
      else {
        puVar3 = (ushort *)0xc0000002;
      }
      ExReleaseResourceLite(lVar2 + 0x18);
    }
  }
  else {
    puVar3 = (ushort *)0xc0000010;
  }
  return puVar3;
}




/* Library Function - Single Match
    RxFastIoWrite
   
   Library: Visual Studio 2019 Release */

char RxFastIoWrite(longlong param_1,uint *param_2,uint param_3,char param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 *param_7,ulonglong param_8)

{
  char cVar1;
  ulonglong local_78 [10];
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x30) & 2) == 0) {
    __RxInitializeTopLevelIrpContext(local_78,4,param_8,0);
    cVar1 = FsRtlCopyWrite2(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_78
                           );
    if (cVar1 == '\0') {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x74,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
    else if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x73,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}




/* Library Function - Single Match
    RxFastIoRead
   
   Library: Visual Studio 2019 Release */

char RxFastIoRead(longlong param_1,uint *param_2,uint param_3,char param_4,undefined4 param_5,
                 undefined8 param_6,undefined4 *param_7,ulonglong param_8)

{
  char cVar1;
  ulonglong local_68 [10];
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x70,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  __RxInitializeTopLevelIrpContext(local_68,4,param_8,0);
  cVar1 = FsRtlCopyRead2(param_1,param_2,(ulonglong)param_3,param_4,param_5,param_6,param_7,param_8,
                         local_68);
  if (cVar1 == '\0') {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x72,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x71,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return cVar1;
}




/* Library Function - Single Match
    RxFastIoCheckIfPossible
   
   Library: Visual Studio 2019 Release */

ulonglong RxFastIoCheckIfPossible
                    (longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                    undefined4 param_5,char param_6)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  short *psVar7;
  ulonglong local_18 [2];
  
  uVar6 = param_3 & 0xffffffff;
  if (param_1 == 0) {
    psVar7 = (short *)0x0;
    lVar4 = 0;
  }
  else {
    psVar7 = *(short **)(param_1 + 0x18);
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  lVar4 = *(longlong *)(lVar4 + 8);
  uVar2 = 0xec03;
  if (*psVar7 == -0x13fd) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar2 = *(ulonglong *)(psVar7 + 0x5c);
      if (*(int *)(uVar2 + 0x100) == 0) {
        if ((*(uint *)(lVar4 + 0x30) >> 10 & 1) == 0) {
          if ((*(byte *)(psVar7 + 0x3a) & 0x80) == 0) {
            if ((*(byte *)(lVar4 + 0x30) & 0x40) == 0) {
              if ((*(byte *)(lVar4 + 0x30) & 0x30) == 0) {
                KeEnterCriticalRegion();
                RxProcessChangeBufferingStateRequestsForSrvOpen(lVar4);
                uVar2 = KeLeaveCriticalRegion();
                local_18[0] = uVar6;
                if (param_6 == '\0') {
                  if ((*(uint *)(psVar7 + 0x3a) >> 0x1b & 1) == 0) {
                    pcVar5 = "notwriteC";
                  }
                  else {
                    uVar3 = IoGetCurrentProcess();
                    uVar2 = FsRtlFastCheckLockForWrite
                                      (psVar7 + 0xe0,param_2,local_18,param_5,param_1,uVar3);
                    if ((char)uVar2 != '\0') goto LAB_00025ced;
                    pcVar5 = "writelock";
                  }
                }
                else if ((*(uint *)(psVar7 + 0x3a) >> 0x19 & 1) == 0) {
                  pcVar5 = "notreadC";
                }
                else {
                  uVar3 = IoGetCurrentProcess();
                  uVar2 = FsRtlFastCheckLockForRead
                                    (psVar7 + 0xe0,param_2,local_18,param_5,param_1,uVar3);
                  if ((char)uVar2 != '\0') {
LAB_00025ced:
                    return CONCAT71((int7)(uVar2 >> 8),1);
                  }
                  pcVar5 = "readlock";
                }
              }
              else {
                pcVar5 = "ren/del";
              }
            }
            else {
              pcVar5 = "buf state change";
            }
          }
          else {
            pcVar5 = "orphaned";
          }
        }
        else {
          pcVar5 = "srvopen orphaned";
        }
      }
      else {
        pcVar5 = "asynW";
      }
    }
    else {
      pcVar5 = "delpend";
    }
  }
  else {
    pcVar5 = "notfile";
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    lVar4 = -1;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = WmlTrace(0x75,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return uVar2 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    RxCompleteMdl
   
   Library: Visual Studio 2019 Release */

undefined8 RxCompleteMdl(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (cVar1 == '\x03') {
    CcMdlReadComplete(uVar2);
  }
  else {
    if (cVar1 != '\x04') {
                    /* WARNING: Subroutine does not return */
      KeBugCheckEx(0x27,0xca550071,cVar1,0,0);
    }
    CcMdlWriteComplete(uVar2,*(longlong *)(param_2 + 0xb8) + 0x18,*(undefined8 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  RxCompleteRequest(param_1,0);
  return 0;
}




/* Library Function - Single Match
    RxLowIoReadShellCompletion
   
   Library: Visual Studio 2019 Release */

int RxLowIoReadShellCompletion(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  int local_res10;
  longlong local_res18;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 400);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + 0x30);
  uVar5 = *(uint *)(lVar3 + 0x10) >> 1;
  bVar7 = *(byte *)(param_1 + 400) & 1;
  if (lVar4 == 0) {
    lVar6 = 0;
    local_res18 = 0;
  }
  else {
    local_res18 = *(longlong *)(lVar4 + 0x20);
    lVar6 = *(longlong *)(lVar4 + 0x18);
  }
  local_res10 = *(int *)(param_1 + 0xb0);
  plVar1 = (longlong *)(lVar3 + 0x38);
  *plVar1 = *(longlong *)(param_1 + 0xb8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x81,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((((uVar5 & 1) != 0) && (-1 < local_res10)) && (*plVar1 == 0)) {
    local_res10 = -0x3fffffef;
  }
  if ((local_res10 == -0x3fffffac) && ((*(byte *)(param_1 + 400) & 8) != 0)) {
    return -0x3ffffdd3;
  }
  if ((*(byte *)(param_1 + 0x19a) & 1) != 0) {
    return local_res10;
  }
  if (local_res10 < 0) {
LAB_000261ab:
    if ((uVar5 & 1) == 0) {
LAB_000261f1:
      if ((uVar2 >> 1 & 1) == 0) {
        __RxReleaseFcbForThread
                  (param_1,lVar6,*(undefined8 *)(param_1 + 0x1b0),0x4c8,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
      }
      else {
        RxResumeBlockedOperations_Serially(param_1,(longlong *)(local_res18 + 0xd0));
      }
      goto LAB_00026232;
    }
  }
  else if ((uVar5 & 1) == 0) {
    if (bVar7 == 0) {
      *(uint *)(lVar4 + 0x50) = *(uint *)(lVar4 + 0x50) | 0x80000;
      goto LAB_000261ab;
    }
    goto LAB_000261f1;
  }
  RxTrackPagingIoResource(lVar6,3,0x4c4,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xad) = 0;
  }
  ExReleaseResourceForThreadLite(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(param_1 + 0x1b0));
LAB_00026232:
  if (bVar7 != 0) {
    if (*plVar1 == 0) {
      if (((*(int *)(local_res18 + 0x98) == 1) &&
          (RxInitiateOrContinueThrottling((longlong *)(local_res18 + 0xb0)), 3 < DAT_000204e4)) &&
         ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x82,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      if ((*(int *)(local_res18 + 0x90) == 1) && (local_res10 == 0)) {
        local_res10 = -0x3fffff27;
      }
    }
    else {
      *(undefined4 *)(local_res18 + 0xb8) = 0;
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x83,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
  }
  return local_res10;
}




/* Library Function - Single Match
    RxLowIoReadShell
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoReadShell(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x84,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*(char *)(param_3 + 0x97) == '\0') {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x1d0);
    *plVar1 = *plVar1 + (ulonglong)*(uint *)(param_1 + 0x1d0);
    UNLOCK();
  }
  uVar2 = RxLowIoSubmit(param_1,param_2,param_3,RxLowIoReadShellCompletion);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x85,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxCommonRead
   
   Library: Visual Studio 2019 Release */

uint RxCommonRead(ulonglong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong *puVar18;
  undefined7 uVar19;
  uint unaff_EBX;
  uint uVar20;
  uint uVar21;
  short sVar22;
  bool bVar23;
  bool bVar24;
  char *pcVar25;
  ulonglong in_stack_fffffffffffffef0;
  short *local_a0;
  longlong local_80;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_40;
  
  lVar16 = *(longlong *)(param_2 + 0xb8);
  lVar2 = *(longlong *)(lVar16 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x58);
  bVar24 = false;
  bVar7 = false;
  uVar10 = *(uint *)(param_1 + 0xa8) >> 0x17;
  bVar6 = false;
  if (lVar2 == 0) {
    local_a0 = (short *)0x0;
    local_80 = 0;
    sVar22 = -0x1400;
  }
  else {
    local_a0 = *(short **)(lVar2 + 0x18);
    local_80 = *(longlong *)(lVar2 + 0x20);
    sVar22 = *local_a0;
  }
  local_58 = *(longlong *)(local_a0 + 0x2c);
  bVar23 = *(char *)(local_58 + 0x2d) == '\x01';
  uVar11 = *(uint *)(param_1 + 0xa8) >> 1;
  uVar12 = *(uint *)(param_2 + 0x10) >> 1;
  bVar8 = *(byte *)(param_2 + 0x10) & 1;
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar13 = *(uint *)(param_1 + 0xa8) >> 9;
  local_50 = lVar2;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    in_stack_fffffffffffffef0 = 0;
    WmlTrace(0x7d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    in_stack_fffffffffffffef0 = 0;
    WmlTrace(0x7e,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar4 = *(longlong *)(lVar16 + 0x18);
  uVar21 = *(uint *)(lVar16 + 8);
  if (((*(uint *)(param_1 + 0xa8) >> 9 & 1) == 0) && (*(char *)((longlong)local_a0 + 0x97) == '\0'))
  {
    LOCK();
    *(int *)(lVar3 + 0x1d8) = *(int *)(lVar3 + 0x1d8) + 1;
    UNLOCK();
    if (lVar4 != *(longlong *)(local_80 + 0x90)) {
      LOCK();
      *(int *)(lVar3 + 0x1e0) = *(int *)(lVar3 + 0x1e0) + 1;
      UNLOCK();
    }
    uVar15 = (ulonglong)uVar21;
    *(ulonglong *)(local_80 + 0x90) = uVar15 + lVar4;
    if ((uVar12 & 1) == 0) {
      if (bVar8 == 0) {
        LOCK();
        *(longlong *)(lVar3 + 0x1c0) = *(longlong *)(lVar3 + 0x1c0) + uVar15;
        UNLOCK();
      }
      else {
        LOCK();
        *(longlong *)(lVar3 + 0x1b8) = *(longlong *)(lVar3 + 0x1b8) + uVar15;
        UNLOCK();
      }
    }
    else {
      LOCK();
      *(longlong *)(lVar3 + 0x1b0) = *(longlong *)(lVar3 + 0x1b0) + uVar15;
      UNLOCK();
    }
  }
  if ((bVar23) && ((uVar12 & 1) != 0)) {
    return unaff_EBX;
  }
  uVar20 = 0;
  if (uVar21 == 0) {
    return unaff_EBX;
  }
  if ((sVar22 != -0x13fd) && (sVar22 != -0x14e1)) {
    return unaff_EBX;
  }
  uVar17 = 0;
  local_60 = lVar4;
  local_40 = lVar4;
  RxInitializeLowIoContext(param_1,0,(undefined2 *)(param_1 + 0x198));
  uVar19 = (undefined7)((ulonglong)uVar17 >> 8);
  if ((((bVar8 == 0) && ((*(uint *)(local_a0 + 0x3a) >> 0x19 & 1) != 0)) || ((uVar12 & 1) != 0)) ||
     (**(longlong **)(lVar2 + 0x28) == 0)) {
LAB_00026a3e:
    if ((uVar12 & 1) == 0) {
      if ((uVar10 & 1) != 0) goto LAB_00026c45;
      if (((uVar11 & 1) == 0) && (bVar8 != 0)) {
        uVar14 = __RxAcquireFcb((longlong)local_a0,param_1,3,0x20f,
                                "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        if (uVar14 == 0xc0000055) {
          if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
            WmlTrace(0x7f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
        }
        else {
          if (uVar14 != 0) {
            if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
              WmlTrace(0x80,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
            }
            goto LAB_000271fa;
          }
          uVar14 = ExIsResourceAcquiredSharedLite(*(undefined8 *)(local_a0 + 4));
          if (uVar14 < 0xf001) {
            *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(local_a0 + 4);
            goto LAB_00026c45;
          }
          bVar24 = true;
        }
      }
      else {
        uVar14 = __RxAcquireFcb((longlong)local_a0,param_1,2,0x22e,
                                "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        if (uVar14 != 0xc0000055) {
          if (uVar14 != 0) goto LAB_000271fa;
          goto LAB_00026c45;
        }
      }
    }
    else {
      cVar9 = ExAcquireResourceSharedLite
                        (*(undefined8 *)(local_a0 + 8),
                         CONCAT71(uVar19,(byte)uVar11) & 0xffffffffffffff01);
      if (cVar9 != '\0') {
        if ((uVar11 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(local_a0 + 8);
        }
LAB_00026c45:
        bVar24 = (uVar10 & 1) == 0;
        if (bVar23) {
          if (((uVar10 & 1) == 0) &&
             ((*(int *)(local_80 + 0x90) == 1 ||
              ((*(int *)(local_80 + 0x90) == 0 && ((*(byte *)(local_80 + 0x98) & 1) == 0)))))) {
            uVar14 = __RxSynchronizeBlockingOperations
                               (param_1,(longlong)local_a0,(longlong *)(local_80 + 0xd0),'\x01');
            bVar24 = false;
            if (((int)uVar14 < 0) || (uVar14 == 0x103)) goto LAB_000271fa;
          }
          *(uint *)(param_1 + 0x1d0) = uVar21;
          *(longlong *)(param_1 + 0x1c8) = lVar4;
          *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 1;
          if (((uVar13 & 1) != 0) && (bVar24)) {
            *(ulonglong *)(param_1 + 0x1b0) = param_1 | 3;
            ExSetResourceOwnerPointer(*(undefined8 *)(local_a0 + 4));
            bVar6 = true;
          }
          uVar15 = RxLowIoReadShell(param_1,param_2,(longlong)local_a0);
          uVar14 = (uint)uVar15;
        }
        else {
          FUN_00033664((longlong)local_a0,&local_68);
          lVar16 = *(longlong *)(local_a0 + 0x14);
          if (((uVar12 & 1) == 0) &&
             (cVar9 = FsRtlCheckLockForReadAccess(local_a0 + 0xe0,param_2), cVar9 == '\0')) {
            uVar14 = 0xc0000054;
          }
          else {
            uVar10 = *(uint *)(local_a0 + 0x3a) & 0x2000000;
            if (uVar10 != 0) {
              if (local_68 <= lVar4) {
                uVar14 = 0xc0000011;
                goto LAB_000271fa;
              }
              if (local_68 - lVar4 < (longlong)(ulonglong)uVar21) {
                uVar21 = (uint)(local_68 - lVar4);
              }
            }
            if (((((uVar12 & 1) == 0) && (bVar8 == 0)) && (uVar10 != 0)) &&
               ((*(byte *)(*(longlong *)(local_80 + 8) + 0x30) & 1) == 0)) {
              if (*(longlong *)(lVar2 + 0x30) == 0) {
                if ((*(uint *)(lVar2 + 0x50) >> 0xe & 1) != 0) {
                  uVar14 = 0xc0000128;
                  goto LAB_000271fa;
                }
                if (*(longlong *)(local_a0 + 0xc) < *(longlong *)(local_a0 + 0x10)) {
                  *(ulonglong *)(local_a0 + 0xc) =
                       *(longlong *)(local_a0 + 0x10) +
                       (ulonglong)*(uint *)(*(longlong *)(local_a0 + 0x2c) + 0x54) &
                       ~((ulonglong)*(uint *)(*(longlong *)(local_a0 + 0x2c) + 0x54) - 1);
                }
                CcInitializeCacheMap(lVar2,local_a0 + 0xc,0,&DAT_000214b0,local_a0);
                if ((*(uint *)(*(longlong *)(local_a0 + 0x9c) + 4) >> 0xc & 1) == 0) {
                  CcSetAdditionalCacheAttributes(lVar2,1,0);
                  *(uint *)(local_a0 + 0x3a) = *(uint *)(local_a0 + 0x3a) | 0x100;
                }
                else {
                  CcSetAdditionalCacheAttributes(lVar2,0,0);
                }
                CcSetReadAheadGranularity(lVar2,*(undefined4 *)(local_58 + 0x58));
              }
              if ((*(byte *)(param_1 + 0x19) & 2) == 0) {
                lVar16 = RxMapUserBuffer(param_1,param_2);
                if (lVar16 == 0) {
                  uVar14 = 0xc000009a;
                }
                else {
                  cVar9 = CcCopyRead(lVar2,&local_60,uVar21,(byte)uVar11 & 1,lVar16,
                                     (uint *)(param_2 + 0x30));
                  if (cVar9 == '\0') goto LAB_00027001;
                  uVar14 = *(uint *)(param_2 + 0x30);
                }
              }
              else {
                CcMdlRead(lVar2,&local_60,uVar21,param_2 + 8,(uint *)(param_2 + 0x30));
                uVar14 = *(uint *)(param_2 + 0x30);
              }
            }
            else {
              if (((*(longlong *)(lVar2 + 0x30) != 0) &&
                  ((*(uint *)(local_a0 + 0x3a) >> 8 & 1) != 0)) && (0xfff < lVar4)) {
                CcSetAdditionalCacheAttributes(lVar2,0,0);
                *(uint *)(local_a0 + 0x3a) = *(uint *)(local_a0 + 0x3a) & 0xfffffeff;
              }
              if (((*(char *)((longlong)local_a0 + 0x97) == '\0') &&
                  ((*(uint *)(local_a0 + 0x3a) >> 0x19 & 1) != 0)) && (lVar16 <= lVar4)) {
                if (lVar4 < local_68) {
                  if (local_68 < (longlong)((ulonglong)uVar21 + lVar4)) {
                    uVar21 = (int)local_68 - (int)lVar4;
                  }
                  puVar18 = (ulonglong *)RxMapUserBuffer(param_1,param_2);
                  FUN_0001c430(puVar18,0,(ulonglong)uVar21);
                  uVar20 = uVar21;
                }
                *(ulonglong *)(param_2 + 0x38) = (ulonglong)uVar20;
                uVar14 = 0;
              }
              else {
                *(uint *)(param_1 + 0x1d0) = uVar21;
                *(longlong *)(param_1 + 0x1c8) = lVar4;
                if (((uVar13 & 1) != 0) && (bVar24)) {
                  *(ulonglong *)(param_1 + 0x1b0) = param_1 | 3;
                  if ((uVar12 & 1) == 0) {
                    ExSetResourceOwnerPointer(*(undefined8 *)(local_a0 + 4));
                  }
                  else {
                    ExSetResourceOwnerPointer(*(undefined8 *)(local_a0 + 8));
                  }
                  bVar6 = true;
                }
                uVar15 = RxLowIoReadShell(param_1,param_2,(longlong)local_a0);
                uVar14 = (uint)uVar15;
              }
            }
          }
        }
LAB_000271fa:
        bVar5 = false;
        if ((((!bVar23) && ((uVar12 & 1) == 0)) && ((~(byte)(uVar1 >> 0xc) & 1) != 0)) &&
           ((*(byte *)(lVar2 + 0x50) & 2) != 0)) {
          *(longlong *)(lVar2 + 0x68) = lVar4 + *(longlong *)(param_2 + 0x38);
        }
        goto LAB_00027234;
      }
    }
  }
  else {
    in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffff00000000;
    pcVar25 = "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c";
    uVar14 = __RxAcquireFcb((longlong)local_a0,param_1,1,0x1d1,
                            "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
    if (uVar14 != 0xc0000055) {
      if (uVar14 == 0) {
        ExAcquireResourceSharedLite(*(undefined8 *)(local_a0 + 8),1);
        CcFlushCache(*(undefined8 *)(lVar2 + 0x28),&local_60,uVar21,param_2 + 0x30,pcVar25,
                     in_stack_fffffffffffffef0);
        RxTrackPagingIoResource
                  ((longlong)local_a0,3,0x1e5,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(local_a0 + 8));
        __RxReleaseFcb(param_1,(longlong)local_a0,0x1e6,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        uVar14 = *(uint *)(param_2 + 0x30);
        if (-1 < (int)uVar14) {
          ExAcquireResourceExclusiveLite(*(undefined8 *)(local_a0 + 8),1);
          if (param_1 != 0) {
            *(undefined1 *)(param_1 + 0xad) = 1;
          }
          RxTrackPagingIoResource
                    ((longlong)local_a0,1,0x1ee,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
          uVar17 = 0;
          RxTrackPagingIoResource
                    ((longlong)local_a0,3,0x1ef,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
          if (param_1 != 0) {
            *(undefined1 *)(param_1 + 0xad) = 0;
          }
          ExReleaseResourceLite(*(undefined8 *)(local_a0 + 8));
          uVar19 = (undefined7)((ulonglong)uVar17 >> 8);
          goto LAB_00026a3e;
        }
      }
      goto LAB_000271fa;
    }
  }
LAB_00027001:
  bVar5 = true;
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  bVar7 = true;
  uVar17 = RxFsdPostRequest(param_1);
  uVar14 = (uint)uVar17;
LAB_00027234:
  if (((-1 < (int)uVar14) && (uVar14 != 0x103)) && (((uVar12 & 1) == 0 && (!bVar23)))) {
    *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x80000;
  }
  if ((uVar14 != 0x103) || (bVar5)) {
    if (bVar24) {
      if ((uVar12 & 1) == 0) {
        if (bVar6) {
          __RxReleaseFcbForThread
                    (param_1,(longlong)local_a0,*(undefined8 *)(param_1 + 0x1b0),0x3fa,
                     "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        }
        else {
          __RxReleaseFcb(param_1,(longlong)local_a0,0x3fe,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c"
                        );
        }
      }
      else if (bVar6) {
        RxTrackPagingIoResource
                  ((longlong)local_a0,3,0x3f0,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 0;
        }
        ExReleaseResourceForThreadLite
                  (*(undefined8 *)(local_a0 + 8),*(undefined8 *)(param_1 + 0x1b0));
      }
      else {
        RxTrackPagingIoResource
                  ((longlong)local_a0,3,0x3f4,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\read.c");
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(local_a0 + 8));
      }
    }
    if (bVar7) {
      RxDereferenceAndDeleteRxContext_Real(param_1);
    }
    if ((!bVar5) && ((*(byte *)(param_1 + 400) & 2) != 0)) {
      RxResumeBlockedOperations_Serially(param_1,(longlong *)(local_80 + 0xd0));
    }
  }
  else {
    RxDereferenceAndDeleteRxContext_Real(param_1);
  }
  return unaff_EBX;
}




/* Library Function - Single Match
    RxStackOverflowRead
   
   Library: Visual Studio 2019 Release */

void RxStackOverflowRead(ulonglong param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
  uVar1 = RxCommonRead(param_1,*(longlong *)(param_1 + 0x28));
  KeSetEvent(uVar1,0,0);
  return;
}




/* Library Function - Single Match
    RxPostStackOverflowRead
   
   Library: Visual Studio 2019 Release */

undefined8 RxPostStackOverflowRead(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  KeInitializeEvent(local_28,0,0);
  if (((*(byte *)(lVar1 + 0x10) & 2) == 0) || (lVar2 = *(longlong *)(param_2 + 0x10), lVar2 == 0)) {
    lVar2 = *(longlong *)(param_2 + 8);
  }
  ExAcquireResourceSharedLite(lVar2,1);
  RxPrePostIrp(param_1,lVar1);
  FsRtlPostStackOverflow(param_1,local_28,RxStackOverflowRead);
  KeWaitForSingleObject(local_28,0,0,0,0);
  ExReleaseResourceLite(lVar2);
  return 0x103;
}




/* Library Function - Single Match
    RxProcessException
   
   Library: Visual Studio 2019 Release */

uint RxProcessException(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    KeBugCheckEx(0x27,0xbaad00bc,0,0,0);
  }
  uVar1 = *(uint *)(param_1 + 0xb0);
  cVar3 = FsRtlIsNtstatusExpected(uVar1);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    KeBugCheckEx(0x27,0xbaad00c9,0,0,0);
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    RxpPrepareCreateContextForReuse(param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0xac) != '\0') {
      __RxReleaseFcb(param_1,lVar2,0xd7,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\ntexcept.c");
      *(undefined1 *)(param_1 + 0xac) = 0;
    }
    if (*(char *)(param_1 + 0xad) != '\0') {
      RxTrackPagingIoResource(lVar2,3,0xde,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\ntexcept.c");
      *(undefined1 *)(param_1 + 0xad) = 0;
      ExReleaseResourceLite(*(undefined8 *)(lVar2 + 0x10));
    }
  }
  RxCompleteRequest(param_1,(ulonglong)uVar1);
  return uVar1;
}




/* Library Function - Single Match
    RxUninitializeCacheMap
   
   Library: Visual Studio 2019 Release */

undefined8 RxUninitializeCacheMap(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 extraout_var;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  KeInitializeEvent(local_20,1);
  uVar2 = CcUninitializeCacheMap(param_2,param_3,local_28);
  __RxReleaseFcb(param_1,lVar1,0x3e2,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
  KeWaitForSingleObject(local_20,0,0,0,0);
  uVar3 = __RxAcquireFcb(lVar1,param_1,1,0x3f3,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar3) >> 8),uVar2);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxAdjustFileTimesAndSize
   
   Library: Visual Studio 2019 Release */

void RxAdjustFileTimesAndSize(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = _DAT_fffff78000000014;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar6 = *(uint *)(param_2 + 0x50) >> 0xd;
    uVar5 = *(uint *)(param_2 + 0x50) & 0x1000;
    if ((uVar5 == 0) || ((*(uint *)(param_4 + 0x28) >> 0x12 & 1) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((uVar5 == 0) || ((*(uint *)(param_4 + 0x28) >> 0x15 & 1) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar1) ||
       (((*(uint *)(param_2 + 0x50) >> 0x13 & 1) != 0 &&
        ((*(uint *)(param_4 + 0x28) >> 0x13 & 1) == 0)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((((uVar6 & 1) != 0) || (bVar1)) || (bVar2)) || (bVar3)) {
      FUN_0001c430(&local_50,0,0x28);
      if (bVar1) {
        *(undefined8 *)(param_3 + 0x1a8) = uVar4;
        local_40 = uVar4;
      }
      if (bVar2) {
        local_38 = *(undefined8 *)(param_3 + 0x1b0);
      }
      if (bVar3) {
        *(undefined8 *)(param_3 + 0x1a0) = uVar4;
        local_48 = uVar4;
      }
      if (bVar3 || (bVar2 || bVar1)) {
        *(undefined4 *)(param_1 + 0x170) = 4;
        *(ulonglong **)(param_1 + 0x178) = &local_50;
        *(undefined4 *)(param_1 + 0x180) = 0x28;
        if ((*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xe8) != 0) &&
           ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          (**(code **)(*(longlong *)(param_3 + 0x138) + 0xe8))(param_1);
        }
      }
      if ((uVar6 & 1) != 0) {
        local_58 = *(undefined8 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 0x170) = 0x14;
        *(undefined8 **)(param_1 + 0x178) = &local_58;
        *(undefined4 *)(param_1 + 0x180) = 8;
        if ((*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xe8) != 0) &&
           ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          (**(code **)(*(longlong *)(param_3 + 0x138) + 0xe8))(param_1);
        }
      }
    }
  }
  return;
}




/* Library Function - Single Match
    RxCleanupPipeQueues
   
   Library: Visual Studio 2019 Release */

void RxCleanupPipeQueues(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_28 [4];
  
  ExAcquireFastMutexUnsafe(&DAT_00021be0);
  uVar9 = 0;
  plVar5 = local_28;
  puVar7 = (undefined8 *)(param_3 + 0xd8);
  lVar6 = 2;
  lVar10 = (longlong)local_28 - (param_3 + 0xd0);
  do {
    puVar1 = puVar7 + -1;
    if ((undefined8 *)*puVar1 == puVar1) {
      *(longlong **)(lVar10 + (longlong)puVar7) = plVar5;
      *plVar5 = (longlong)plVar5;
    }
    else {
      plVar3 = (longlong *)*puVar1;
      lVar2 = param_3 + 0xd0 + uVar9 * 0x10;
      if (*plVar3 == lVar2) {
        *(longlong **)(lVar10 + (longlong)puVar7) = local_28 + uVar9 * 2;
        *plVar5 = (longlong)(local_28 + uVar9 * 2);
      }
      else {
        plVar4 = (longlong *)*puVar7;
        *(longlong **)(lVar10 + (longlong)puVar7) = plVar4;
        *plVar4 = (longlong)(local_28 + uVar9 * 2);
        *puVar7 = plVar3;
        *plVar5 = *plVar3;
        *plVar3 = lVar2;
        *(longlong **)(*plVar5 + 8) = local_28 + uVar9 * 2;
      }
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    puVar7 = puVar7 + 2;
    plVar5 = plVar5 + 2;
  } while (uVar8 < 2);
  ExReleaseFastMutexUnsafe(&DAT_00021be0);
  plVar5 = local_28;
  do {
    while ((longlong *)*plVar5 != plVar5) {
      plVar3 = (longlong *)*plVar5;
      lVar10 = *plVar3;
      plVar4 = (longlong *)plVar3[1];
      *plVar4 = lVar10;
      *(longlong **)(lVar10 + 8) = plVar4;
      *plVar3 = 0;
      plVar3[1] = 0;
      if ((*(uint *)(plVar3 + -0x17) >> 0xc & 1) == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc00000b1;
        *(uint *)(plVar3 + -0x17) = *(uint *)(plVar3 + -0x17) & 0xffefffff;
        KeSetEvent(plVar3 + -6,0,0);
      }
      else {
        RxCompleteRequest((longlong)(plVar3 + -0x2c),0xc00000b1);
      }
    }
    plVar5 = plVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}




/* Library Function - Single Match
    RxCommonCleanup
   
   Library: Visual Studio 2019 Release */

uint RxCommonCleanup(ulonglong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  undefined8 uVar10;
  byte local_res18 [8];
  char local_res20;
  char *pcVar11;
  undefined4 uVar12;
  short *local_80;
  longlong ***local_70;
  undefined8 *local_68;
  undefined8 local_48 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  local_68 = (undefined8 *)0x0;
  bVar5 = false;
  bVar4 = false;
  local_res18[0] = 0;
  local_res20 = '\0';
  bVar6 = false;
  if (lVar2 == 0) {
    local_80 = (short *)0x0;
    local_70 = (longlong ***)0x0;
    sVar8 = -0x1400;
  }
  else {
    local_80 = *(short **)(lVar2 + 0x18);
    local_70 = *(longlong ****)(lVar2 + 0x20);
    sVar8 = *local_80;
  }
  if (local_70 == (longlong ***)0x0) {
    if (*(int *)(local_80 + 0x3c) != 0) {
      LOCK();
      *(int *)(local_80 + 0x3c) = *(int *)(local_80 + 0x3c) + -1;
      UNLOCK();
    }
    return 0;
  }
  if ((((sVar8 != -0x13fd) && (sVar8 != -0x13fe)) && (sVar8 != -0x1400)) && (sVar8 != -0x1304)) {
                    /* WARNING: Subroutine does not return */
    KeBugCheckEx(0x27,0xc1ee00be,sVar8,0,0);
  }
  RxMarkFobxOnCleanup((longlong)local_70,local_res18);
  uVar12 = 0;
  pcVar11 = "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c";
  uVar9 = __RxAcquireFcb((longlong)local_80,param_1,1,0xd1,
                         "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
  if (uVar9 != 0) {
    return uVar9;
  }
  local_70[2] = (longlong **)0x0;
  if ((*(byte *)(local_80 + 0x3a) & 0x80) != 0) {
    LOCK();
    *(int *)(local_80 + 0x3c) = *(int *)(local_80 + 0x3c) + -1;
    UNLOCK();
    if ((*(byte *)(lVar2 + 0x50) & 8) != 0) {
      *(int *)(local_80 + 0x3e) = *(int *)(local_80 + 0x3e) + -1;
    }
    if ((*(longlong *)(*(longlong *)(local_80 + 0x9c) + 0x68) != 0) &&
       ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      (**(code **)(*(longlong *)(local_80 + 0x9c) + 0x68))(param_1);
    }
    *(int *)(local_70[1] + 8) = *(int *)(local_70[1] + 8) + -1;
    *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x4000;
    RxUninitializeCacheMap(param_1,lVar2,0);
    __RxReleaseFcb(param_1,(longlong)local_80,0xf0,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
    return 0;
  }
  lVar3 = *(longlong *)(local_80 + 0x2c);
  cVar1 = *(char *)(lVar3 + 0x2d);
  if ((*(uint *)(local_70 + 5) >> 0x17 & 1) != 0) {
    *(uint *)(local_80 + 0x3a) = *(uint *)(local_80 + 0x3a) | 1;
  }
  RxCancelNotifyChangeDirectoryRequestsForFobx(local_70);
  if ((*(int *)(local_80 + 0x3c) == 1) && (bVar4 = true, (*(byte *)(local_80 + 0x3a) & 1) != 0)) {
    cVar7 = ExAcquireResourceExclusiveLite(lVar3 + 0x150);
    if (cVar7 == '\0') {
      __RxReleaseFcb(param_1,(longlong)local_80,0x11d,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c")
      ;
      ExAcquireResourceExclusiveLite(lVar3 + 0x150,1);
      uVar12 = 0;
      pcVar11 = "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c";
      uVar9 = __RxAcquireFcb((longlong)local_80,param_1,1,0x122,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
      if (uVar9 != 0) {
        ExReleaseResourceLite(lVar3 + 0x150);
        return uVar9;
      }
    }
    bVar6 = true;
    if (*(int *)(local_80 + 0x3c) == 1) {
      local_res20 = '\x01';
    }
    else {
      ExReleaseResourceLite(lVar3 + 0x150);
      bVar6 = false;
      local_res20 = '\0';
    }
  }
  if (cVar1 != '\0') {
    if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      RxCleanupPipeQueues(param_1,local_80,(longlong)local_70);
      goto LAB_00027f9c;
    }
    if (cVar1 != '\x04') goto LAB_00027f9c;
  }
  if (sVar8 == -0x13fd) {
    *(ushort *)(param_1 + 0x19a) = *(ushort *)(param_1 + 0x19a) | 2;
    uVar10 = IoGetRequestorProcess(param_2);
    FsRtlFastUnlockAll(local_80 + 0xe0,lVar2,uVar10,param_1,pcVar11,uVar12);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      RxInitializeLowIoContext(param_1,5,(undefined2 *)(param_1 + 0x198));
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      RxLowIoLockControlShell(param_1,param_2,(longlong)local_80);
    }
    RxAdjustFileTimesAndSize(param_1,lVar2,(longlong)local_80,(longlong)local_70);
    cVar7 = local_res20;
    if (bVar4) {
      if (local_res20 == '\0') {
        if (((*(byte *)(local_80 + 0x3a) & 4) == 0) &&
           (*(longlong *)(local_80 + 0x14) < *(longlong *)(local_80 + 0x10))) {
          if ((*(longlong *)(*(longlong *)(local_80 + 0x9c) + 0x58) != 0) &&
             ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
            FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
            (**(code **)(*(longlong *)(local_80 + 0x9c) + 0x58))(param_1);
          }
          *(undefined8 *)(local_80 + 0x14) = *(undefined8 *)(local_80 + 0x10);
        }
      }
      else {
        ExAcquireResourceExclusiveLite(*(undefined8 *)(local_80 + 8),1);
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 1;
        }
        RxTrackPagingIoResource
                  ((longlong)local_80,1,0x175,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
        local_80[0x10] = 0;
        local_80[0x11] = 0;
        local_80[0x12] = 0;
        local_80[0x13] = 0;
        local_80[0x14] = 0;
        local_80[0x15] = 0;
        local_80[0x16] = 0;
        local_80[0x17] = 0;
        RxTrackPagingIoResource
                  ((longlong)local_80,3,0x17d,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(local_80 + 8));
      }
      if ((*(byte *)(local_80 + 0x3a) & 2) != 0) {
        if ((*(longlong *)(*(longlong *)(local_80 + 0x9c) + 0x60) != 0) &&
           ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          (**(code **)(*(longlong *)(local_80 + 0x9c) + 0x60))(param_1);
        }
        local_48[0] = *(undefined8 *)(local_80 + 0x10);
        local_68 = local_48;
        *(uint *)(local_80 + 0x3a) = *(uint *)(local_80 + 0x3a) & 0xfffffffd;
      }
    }
    if (local_res18[0] == 0) {
      local_res18[0] = 0;
      if ((bVar4) && ((cVar7 != '\0' || ((*(uint *)(local_80 + 0x3a) >> 0x16 & 1) == 0)))) {
        local_res18[0] = 1;
      }
    }
    else {
      local_res18[0] = -bVar4 & local_res18[0];
    }
    bVar5 = true;
  }
LAB_00027f9c:
  LOCK();
  *(int *)(local_80 + 0x3c) = *(int *)(local_80 + 0x3c) + -1;
  UNLOCK();
  if ((*(byte *)(lVar2 + 0x50) & 8) != 0) {
    *(int *)(local_80 + 0x3e) = *(int *)(local_80 + 0x3e) + -1;
  }
  if ((*(longlong *)(*(longlong *)(local_80 + 0x9c) + 0x68) != 0) &&
     ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)) {
    FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
    (**(code **)(*(longlong *)(local_80 + 0x9c) + 0x68))(param_1);
  }
  *(int *)(local_70[1] + 8) = *(int *)(local_70[1] + 8) + -1;
  if (*(longlong *)(*(longlong *)(local_80 + 0x5c) + 8) != 0) {
    RxFlushFcbInSystemCache((longlong)local_80,'\x01');
  }
  if (((((*(byte *)(lVar2 + 0x50) & 8) == 0) && (*(int *)(local_80 + 0x3e) != 0)) &&
      (*(int *)(local_80 + 0x3e) == *(int *)(local_80 + 0x3c))) &&
     (*(longlong *)(*(longlong *)(local_80 + 0x5c) + 8) != 0)) {
    RxPurgeFcbInSystemCache((ulonglong)local_80,0,0,0,'\x01');
  }
  cVar7 = local_res20;
  if ((local_res20 == '\0') && (local_res18[0] != 0)) {
    RxFlushFcbInSystemCache((longlong)local_80,'\x01');
  }
  if (bVar5) {
    *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x4000;
    RxUninitializeCacheMap(param_1,lVar2,local_68);
  }
  if (((cVar7 != '\0') || (local_res18[0] != 0)) &&
     (RxPurgeFcbInSystemCache((ulonglong)local_80,0,0,0,cVar7 == '\0'), cVar7 != '\0')) {
    RxRemoveNameNetFcb((longlong)local_80);
    ExReleaseResourceLite(lVar3 + 0x150);
    bVar6 = false;
  }
  if ((local_80 != (short *)0xfffffffffffffea8) && (cVar1 == '\0')) {
    IoRemoveShareAccess(lVar2);
  }
  *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x4000;
  __RxReleaseFcb(param_1,(longlong)local_80,0x253,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\cleanup.c");
  if (bVar6) {
    ExReleaseResourceLite(lVar3 + 0x150);
  }
  return 0;
}




/* Library Function - Single Match
    RxCloseFcbSection
   
   Library: Visual Studio 2019 Release */

void RxCloseFcbSection(undefined8 param_1,longlong param_2)

{
  MmFlushImageSection(*(longlong *)(param_2 + 0xb8) + 8,1);
  __RxReleaseFcb(0,param_2,0x131,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
  MmForceSectionClosed(*(longlong *)(param_2 + 0xb8) + 8);
  __RxAcquireFcb(param_2,0,1,0x135,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
  return;
}




/* Library Function - Single Match
    RxCloseAssociatedSrvOpen
   
   Library: Visual Studio 2019 Release */

undefined4 RxCloseAssociatedSrvOpen(ulonglong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong ****pppplVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined4 local_res18;
  longlong local_res20;
  
  if (param_2 == 0) {
    if (param_1 == (ulonglong *)0x0) {
      return 0;
    }
    uVar5 = param_1[7];
    local_res20 = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x28) >> 0x18 & 1) != 0) {
LAB_00028223:
      RxMarkFobxOnClose(param_2);
      return 0;
    }
    local_res20 = *(longlong *)(param_2 + 8);
    if ((*(byte *)(local_res20 + 0x30) & 4) != 0) {
      *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x1000000;
      if (*(int *)(local_res20 + 0x44) != 0) {
        *(int *)(local_res20 + 0x44) = *(int *)(local_res20 + 0x44) + -1;
      }
      goto LAB_00028223;
    }
    uVar5 = *(ulonglong *)(local_res20 + 8);
  }
  puVar4 = param_1;
  if (param_1 == (ulonglong *)0x0) {
    puVar4 = RxCreateRxContext((undefined8 *)0x0,
                               *(longlong *)(*(longlong *)(local_res20 + 8) + 0x130),0x10000002);
    if (puVar4 == (ulonglong *)0x0) {
      return 0xc000009a;
    }
    *(undefined1 *)(puVar4 + 3) = 2;
    puVar4[7] = uVar5;
    puVar4[8] = param_2;
    if (param_2 != 0) {
      puVar4[9] = *(ulonglong *)(param_2 + 8);
    }
  }
  if (param_2 == 0) {
    LOCK();
    *(int *)(uVar5 + 0x80) = *(int *)(uVar5 + 0x80) + -1;
    UNLOCK();
  }
  else {
    RxMarkFobxOnClose(param_2);
  }
  if (local_res20 == 0) {
    FUN_00036fe8();
    RxpDereferenceNetFcb(uVar5);
  }
  else if (*(int *)(local_res20 + 0x7c) == 3) {
    if (*(int *)(local_res20 + 0x44) != 0) {
      *(int *)(local_res20 + 0x44) = *(int *)(local_res20 + 0x44) + -1;
    }
    if ((((*(int *)(local_res20 + 0x44) == 1) &&
         (plVar1 = (longlong *)(local_res20 + 0xa8), (longlong *)*plVar1 != plVar1)) &&
        (*(longlong **)(*plVar1 + 0x10) != (longlong *)(*plVar1 + 0x10))) &&
       ((*(byte *)(local_res20 + 0x30) & 8) == 0)) {
      *(uint *)(local_res20 + 0x30) = *(uint *)(local_res20 + 0x30) | 8;
      LOCK();
      piVar2 = (int *)(*(longlong *)(*(longlong *)(uVar5 + 0x58) + 8) + 0xb8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if ((*(int *)(local_res20 + 0x44) == 0) && (param_1 == (ulonglong *)0x0)) {
      RxCloseFcbSection(puVar4,uVar5);
    }
    pppplVar3 = *(longlong *****)(param_2 + 8);
    if (((pppplVar3 == (longlong ****)0x0) ||
        ((*(int *)((longlong)pppplVar3 + 0x44) != 0 && ((*(uint *)(pppplVar3 + 6) >> 10 & 1) == 0)))
        ) || (((ulonglong)pppplVar3[6] & 4) != 0)) {
      local_res18 = 0;
    }
    else {
      if (*(longlong *)(*(longlong *)(uVar5 + 0x138) + 0x70) == 0) {
        local_res18 = 0xc0000002;
      }
      else if (((uint)puVar4[0x15] >> 0x13 & 1) == 0) {
        FUN_0001c430(puVar4 + 0x18,0,0x20);
        local_res18 = (**(code **)(*(longlong *)(uVar5 + 0x138) + 0x70))(puVar4);
      }
      else {
        local_res18 = 0xc0000120;
      }
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x2f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      *(uint *)(pppplVar3 + 6) = *(uint *)(pppplVar3 + 6) | 4;
      pppplVar3[9] = (longlong ***)0xffffffff;
      if (((ulonglong)pppplVar3[6] & 8) != 0) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(*(longlong *)(uVar5 + 0x58) + 8) + 0xb8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        *(uint *)(pppplVar3 + 6) = *(uint *)(pppplVar3 + 6) & 0xfffffff7;
      }
      RxRemoveShareAccessPerSrvOpens((longlong)pppplVar3);
      RxPurgeChangeBufferingStateRequestsForSrvOpen(pppplVar3);
      FUN_00036fe8();
      RxDereference((ushort *)pppplVar3,2);
    }
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x1000000;
    goto LAB_000285b8;
  }
  local_res18 = 0;
LAB_000285b8:
  if (puVar4 != param_1) {
    RxDereferenceAndDeleteRxContext_Real((longlong)puVar4);
  }
  return local_res18;
}




/* Library Function - Single Match
    RxCommonClose
   
   Library: Visual Studio 2019 Release */

uint RxCommonClose(ulonglong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  ushort uVar9;
  ushort *local_res18;
  ushort *local_res20;
  ulonglong in_stack_ffffffffffffff70;
  ulonglong uVar10;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar3 == 0) {
    local_res18 = (ushort *)0x0;
    local_res20 = (ushort *)0x0;
    uVar9 = 0xec00;
  }
  else {
    local_res18 = *(ushort **)(lVar3 + 0x18);
    local_res20 = *(ushort **)(lVar3 + 0x20);
    uVar9 = *local_res18;
  }
  if (local_res18 == (ushort *)0x0) {
    uVar8 = 0xc000000d;
  }
  else {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      in_stack_ffffffffffffff70 = 0;
      WmlTrace(0x2d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    uVar10 = in_stack_ffffffffffffff70 & 0xffffffff00000000;
    uVar8 = __RxAcquireFcb((longlong)local_res18,(longlong)param_1,1,0x7a,
                           "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
    if (uVar8 == 0) {
      bVar6 = false;
      if ((uVar9 != 0xec00) &&
         ((uVar9 < 0xec02 || ((0xec03 < uVar9 && ((uVar9 < 0xecfc || (0xecff < uVar9)))))))) {
                    /* WARNING: Subroutine does not return */
        KeBugCheckEx(0x27,0xc10e00f7,uVar9,0,0,uVar10);
      }
      FUN_00019e08();
      RxpReferenceNetFcb((longlong)local_res18);
      if (local_res20 != (ushort *)0x0) {
        lVar4 = *(longlong *)(local_res20 + 4);
        if ((((*local_res18 != 0xec02) && ((local_res18[0x3a] & 0x80) == 0)) &&
            ((local_res18[0x3a] & 1) == 0)) && ((*(uint *)(local_res18 + 0x3a) >> 0x16 & 1) != 0)) {
          lVar5 = *(longlong *)(*(longlong *)(local_res18 + 0x2c) + 8);
          if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
            WmlTrace(0x2e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
          if ((*(int *)(lVar4 + 0x44) == 1) && ((*(byte *)(lVar4 + 0x30) & 0x80) == 0)) {
            LOCK();
            piVar1 = (int *)(lVar5 + 0xb8);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            if (iVar2 + 1 < *(int *)(lVar5 + 0x3c)) {
              *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 8;
              bVar6 = true;
            }
            else {
              LOCK();
              *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + -1;
              UNLOCK();
              *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) & 0xfffffff7;
            }
          }
        }
        if ((((!bVar6) &&
             (lVar4 = *(longlong *)(local_res18 + 0x2c), *(char *)(lVar4 + 0x2d) != '\x03')) &&
            ((*(uint *)(local_res20 + 0x14) >> 0x17 & 1) != 0)) &&
           (*(int *)(local_res18 + 0x40) == 1)) {
          RxScavengeRelatedFobxs((longlong)local_res18);
          RxSynchronizeWithScavenger((longlong)param_1,(longlong)local_res18);
          __RxReleaseFcb(0,(longlong)local_res18,0xcd,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
          ExAcquireResourceExclusiveLite(lVar4 + 0x150);
          FUN_00036030(local_res18);
          ExReleaseResourceLite(lVar4 + 0x150);
          uVar8 = __RxAcquireFcb((longlong)local_res18,0,1,0xd3,
                                 "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
        }
        RxMarkFobxOnClose((longlong)local_res20);
      }
      if (bVar6) {
        FUN_00036fe8();
        RxDereference(local_res20,1);
      }
      else {
        uVar8 = RxCloseAssociatedSrvOpen(param_1,(ulonglong)local_res20);
        if (local_res20 != (ushort *)0x0) {
          FUN_00036fe8();
          RxDereference(local_res20,2);
        }
      }
      FUN_00036fe8();
      cVar7 = RxpDereferenceAndFinalizeNetFcb(local_res18,(char *)param_1,'\0','\0');
      *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
      if (cVar7 == '\0') {
        __RxReleaseFcb((longlong)param_1,(longlong)local_res18,0xeb,
                       "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
      }
      else {
        RxTrackerUpdateHistory
                  ((longlong)param_1,0,0x72724372,0xf2,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\close.c");
      }
    }
  }
  return uVar8;
}




/* Library Function - Single Match
    RxGetSessionId
   
   Library: Visual Studio 2019 Release */

undefined4 RxGetSessionId(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  if (*param_1 == '\x0e') {
    if (*(int *)(param_1 + 0x18) == 0x14018f) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0x140193) goto LAB_00028afb;
      lVar1 = **(longlong **)(param_1 + 0x20);
    }
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  else {
LAB_00028afb:
    if ((*param_1 != '\0') || (*(longlong *)(param_1 + 8) == 0)) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  }
  lVar2 = *(longlong *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
  }
  SeQuerySessionIdToken(lVar2,local_res8);
  return local_res8[0];
}




/* Library Function - Single Match
    RxRemoveShareAccessPerSrvOpens
   
   Library: Visual Studio 2019 Release */

void RxRemoveShareAccessPerSrvOpens(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  lVar3 = *(longlong *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x54);
  bVar4 = (uVar1 & 0x21) != 0;
  bVar5 = (uVar1 & 6) != 0;
  if (((bVar4) || (bVar5)) || ((uVar1 & 0x10000) != 0)) {
    *(int *)(lVar3 + 0x174) = *(int *)(lVar3 + 0x174) + -1;
    *(int *)(lVar3 + 0x178) = *(int *)(lVar3 + 0x178) - (uint)bVar4;
    *(int *)(lVar3 + 0x17c) = *(int *)(lVar3 + 0x17c) - (uint)bVar5;
    *(int *)(lVar3 + 0x180) = *(int *)(lVar3 + 0x180) - (uint)((byte)(uVar1 >> 0x10) & 1);
    *(int *)(lVar3 + 0x184) = *(int *)(lVar3 + 0x184) - (uVar2 & 1);
    *(int *)(lVar3 + 0x188) = *(int *)(lVar3 + 0x188) - (uVar2 >> 1 & 1);
    *(int *)(lVar3 + 0x18c) = *(int *)(lVar3 + 0x18c) - (uVar2 >> 2 & 1);
  }
  return;
}




/* Library Function - Single Match
    RxUpdateShareAccessPerSrvOpens
   
   Library: Visual Studio 2019 Release */

void RxUpdateShareAccessPerSrvOpens(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x30) >> 0x12 & 1) == 0) {
    bVar4 = (uVar1 & 0x21) != 0;
    bVar5 = (uVar1 & 6) != 0;
    if (((bVar4) || (bVar5)) || ((uVar1 & 0x10000) != 0)) {
      *(int *)(lVar3 + 0x174) = *(int *)(lVar3 + 0x174) + 1;
      *(int *)(lVar3 + 0x178) = *(int *)(lVar3 + 0x178) + (uint)bVar4;
      *(int *)(lVar3 + 0x17c) = *(int *)(lVar3 + 0x17c) + (uint)bVar5;
      *(int *)(lVar3 + 0x180) = *(int *)(lVar3 + 0x180) + (uint)((byte)(uVar1 >> 0x10) & 1);
      *(int *)(lVar3 + 0x184) = *(int *)(lVar3 + 0x184) + (uVar2 & 1);
      *(int *)(lVar3 + 0x188) = *(int *)(lVar3 + 0x188) + (uVar2 >> 1 & 1);
      *(int *)(lVar3 + 0x18c) = *(int *)(lVar3 + 0x18c) + (uVar2 >> 2 & 1);
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40000;
  }
  return;
}




/* Library Function - Single Match
    RxCheckShareAccessPerSrvOpens
   
   Library: Visual Studio 2019 Release */

undefined8 RxCheckShareAccessPerSrvOpens(longlong param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = (param_2 & 0x21) != 0;
  bVar3 = (param_2 & 6) != 0;
  if (((bVar2) || (bVar3)) || ((param_2 & 0x10000) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x174);
    if ((((((bVar2) && (*(uint *)(param_1 + 0x184) < uVar1)) ||
          ((bVar3 && (*(uint *)(param_1 + 0x188) < uVar1)))) ||
         (((param_2 & 0x10000) != 0 && (*(uint *)(param_1 + 0x18c) < uVar1)))) ||
        ((*(int *)(param_1 + 0x178) != 0 && ((param_3 & 1) == 0)))) ||
       (((*(int *)(param_1 + 0x17c) != 0 && ((param_3 >> 1 & 1) == 0)) ||
        ((*(int *)(param_1 + 0x180) != 0 && ((param_3 >> 2 & 1) == 0)))))) {
      return 0xc0000043;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxFindOrCreateFcb
   
   Library: Visual Studio 2019 Release */

uint RxFindOrCreateFcb(longlong param_1,longlong param_2,ushort *param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = 0;
  uVar6 = 0;
  puVar3 = *(ushort **)(param_1 + 0x1f8);
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  bVar5 = false;
  ExAcquireResourceSharedLite(lVar4 + 0x150,1);
  iVar2 = *(int *)(lVar4 + 0x13c);
  uVar1 = *param_3;
  plVar7 = RxFcbTableLookupFcb(lVar4 + 0x138,param_3);
  *param_4 = (longlong)plVar7;
  if ((plVar7 != (longlong *)0x0) && (*(char *)((longlong)plVar7 + 0x95) != '\0')) {
    FUN_00036fe8();
    RxpDereferenceNetFcb(*param_4);
    ExReleaseResourceLite(lVar4 + 0x150);
    ExAcquireResourceExclusiveLite(lVar4 + 0x150,1);
    bVar5 = true;
    puVar8 = (ushort *)RxFcbTableLookupFcb(lVar4 + 0x138,param_3);
    *param_4 = (longlong)puVar8;
    if ((puVar8 != (ushort *)0x0) && (*(char *)((longlong)puVar8 + 0x95) != '\0')) {
      FUN_00036030(puVar8);
      FUN_00036fe8();
      RxpDereferenceNetFcb(*param_4);
      *param_4 = 0;
    }
  }
  if ((*param_4 == 0) || (*(ushort *)(*param_4 + 0xe8) != uVar1)) {
    if (!bVar5) {
      ExReleaseResourceLite(lVar4 + 0x150);
      ExAcquireResourceExclusiveLite(lVar4 + 0x150,1);
    }
    if (iVar2 != *(int *)(lVar4 + 0x13c)) {
      plVar7 = RxFcbTableLookupFcb(lVar4 + 0x138,param_3);
      *param_4 = (longlong)plVar7;
    }
    if ((*param_4 == 0) || (*(ushort *)(*param_4 + 0xe8) != uVar1)) {
      lVar9 = RxCreateNetFcb(param_1,param_2,puVar3,param_3);
      *param_4 = lVar9;
      if (lVar9 == 0) {
        uVar6 = 0xc000009a;
      }
      else {
        if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
          WmlTrace(0xe5,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        uVar6 = __RxAcquireFcb(*param_4,param_1,1,0x591,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c"
                              );
        *(bool *)(param_1 + 0x220) = uVar6 == 0;
      }
    }
  }
  else {
    uVar6 = uVar10;
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xe6,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  ExReleaseResourceLite(lVar4 + 0x150);
  if (uVar6 == 0) {
    *(longlong *)(param_1 + 0x38) = *param_4;
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x25,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (*(char *)(param_1 + 0x220) == '\0') {
      RxWaitForStableCondition
                ((int *)(*param_4 + 0x124),*(longlong *)(*param_4 + 0xb8) + 0xf0,param_1,
                 (undefined4 *)0x0);
      uVar6 = __RxAcquireFcb(*param_4,param_1,1,0x5cd,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
      if (uVar6 == 0) {
        *(undefined1 *)(param_1 + 0x220) = 1;
      }
    }
  }
  return uVar6;
}




/* Library Function - Single Match
    RxCanonicalizeFileNameByServerSpecs
   
   Library: Visual Studio 2019 Release */

undefined8 RxCanonicalizeFileNameByServerSpecs(undefined8 param_1,ushort *param_2)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)(param_2 + 4);
  uVar4 = (uint)(*param_2 >> 1);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar8 = 0;
    uVar7 = 0;
    lVar5 = lVar6;
    if (*param_2 >> 1 != 0) {
LAB_00029145:
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 + 1;
        lVar6 = lVar6 + 1;
        if ((uVar8 < uVar4) && (*(short *)(lVar2 + lVar6 * 2) != 0x5c)) {
          if (*(short *)(lVar2 + lVar6 * 2) != 0x3a) goto LAB_00029145;
        }
        if (uVar3 == uVar7) {
          if ((((*(short *)(lVar2 + lVar5 * 2) == 0x5c) || (*(short *)(lVar2 + lVar5 * 2) == 0x3a))
              && (uVar7 != uVar4 - 1)) || (*(short *)(lVar2 + lVar5 * 2) == 0x2e)) {
            if (uVar3 == 0) {
              sVar1 = *(short *)(lVar2 + 2);
            }
            else {
              if (uVar4 - 1 <= uVar3) goto LAB_000291ea;
              sVar1 = *(short *)(lVar2 + lVar6 * 2);
            }
            if (sVar1 != 0x3a) {
              return 0xc000003b;
            }
          }
        }
        else if (uVar3 - uVar7 == 1) {
          if (*(short *)(lVar2 + 2 + lVar5 * 2) == 0x2e) {
            if (*(short *)(lVar2 + lVar5 * 2) == 0x5c) {
              return 0xc000003b;
            }
            if (*(short *)(lVar2 + lVar5 * 2) == 0x3a) {
              return 0xc000003b;
            }
            sVar1 = *(short *)(lVar2 + lVar5 * 2);
            goto LAB_000291a4;
          }
        }
        else if (((uVar3 - uVar7 == 2) &&
                 ((*(short *)(lVar2 + lVar5 * 2) == 0x5c || (*(short *)(lVar2 + lVar5 * 2) == 0x3a))
                 )) && (*(short *)(lVar2 + 2 + lVar5 * 2) == 0x2e)) {
          sVar1 = *(short *)(lVar2 + 4 + lVar5 * 2);
LAB_000291a4:
          if (sVar1 == 0x2e) {
            return 0xc000003b;
          }
        }
LAB_000291ea:
        uVar7 = uVar8;
        lVar5 = lVar6;
      } while (uVar8 < uVar4);
    }
  }
  return 0xc0000016;
}




/* Library Function - Single Match
    RxAllocateCanonicalNameBuffer
   
   Library: Visual Studio 2019 Release */

undefined8 RxAllocateCanonicalNameBuffer(longlong param_1,undefined2 *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 < 0xffff) {
    lVar2 = ExAllocatePoolWithTag(0x101,param_3,0x734d7852);
    *(longlong *)(param_2 + 4) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xc000009a;
    }
    else {
      *(longlong *)(param_1 + 0x1d8) = lVar2;
      *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 4);
      param_2[1] = (short)param_3;
      *param_2 = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xc0000039;
    *(undefined8 *)(param_2 + 4) = 0;
  }
  return uVar1;
}




/* Library Function - Single Match
    RxFreeCanonicalNameBuffer
   
   Library: Visual Studio 2019 Release */

void RxFreeCanonicalNameBuffer(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    ExFreePoolWithTag(*(longlong *)(param_1 + 0x1d8),0);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  return;
}




/* Library Function - Single Match
    RxSetupNetFileObject
   
   Library: Visual Studio 2019 Release */

void RxSetupNetFileObject(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0x74) & 0x20) != 0)) {
    if (uVar3 == 0) {
      return;
    }
    *(uint *)(uVar3 + 0x50) = *(uint *)(uVar3 + 0x50) | 0x8000;
  }
  if (uVar3 != 0) {
    *(longlong *)(uVar3 + 0x18) = param_3;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      IoGetStackLimits(local_res18,&local_res10);
      if ((local_res10 < uVar3) && (uVar3 < local_res18[0])) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10) = 0;
      }
      else {
        *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar3;
      }
      if (*(longlong *)(param_1 + 0x1c0) == 0xff444653) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x28);
        *puVar1 = *puVar1 | 1;
      }
      else {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
    }
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(param_1 + 0x40);
    *(longlong *)(uVar3 + 0x28) = *(longlong *)(param_3 + 0xb8) + 8;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8);
      puVar1 = (uint *)(lVar4 + 0x14);
      *puVar1 = *puVar1 | *(uint *)(lVar4 + 0x10);
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 0x10) = 0;
    }
  }
  return;
}




/* Library Function - Single Match
    RxSearchForCollapsibleOpen
   
   Library: Visual Studio 2019 Release */

ulonglong RxSearchForCollapsibleOpen(longlong param_1,ulonglong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  
  uVar2 = *(uint *)(param_1 + 0x1ac);
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  uVar11 = param_2;
  if (((uVar2 >> 0xe & 1) == 0) && ((uVar2 >> 0xc & 1) == 0)) {
    if ((*(int *)(param_1 + 0x1a8) == 1) || (*(int *)(param_1 + 0x1a8) == 3)) {
      bVar13 = true;
      if (*(longlong *)(param_2 + 0x138) != 0) {
        iVar8 = (**(code **)(*(longlong *)(param_2 + 0x138) + 0x48))();
        bVar13 = iVar8 == 0;
      }
    }
    else {
      bVar13 = false;
    }
    if ((*(uint *)(param_1 + 0x1ac) >> 0xc & 1) != 0) {
      bVar13 = false;
    }
    if (bVar13) {
      if ((*(longlong *)(param_2 + 0x58) == *(longlong *)(param_1 + 0x1f0)) &&
         (*(char *)(*(longlong *)(param_2 + 0x58) + 0x2d) == '\0')) {
        bVar13 = false;
        bVar6 = false;
LAB_000294b3:
        plVar12 = *(longlong **)(param_2 + 0x98);
        if (plVar12 != (longlong *)(param_2 + 0x98)) {
          lVar5 = *(longlong *)(param_1 + 0x1f8);
          do {
            if (plVar12[-0xb] == lVar5) {
              if (((((*(uint *)(plVar12 + -3) == param_3) &&
                    (*(uint *)((longlong)plVar12 + -0x14) == param_4)) &&
                   (uVar3 = *(uint *)(plVar12 + -7), -1 < (char)uVar3)) &&
                  (((uVar3 & 4) == 0 && ((uVar3 & 0x10) == 0)))) && ((uVar3 & 0x20) == 0)) {
                if (((*(uint *)(plVar12 + -2) ^ uVar2) >> 0x15 & 1) != 0) {
                  bVar13 = true;
                  bVar6 = true;
                  break;
                }
                if ((DAT_00020e04 != '\0') || ((*(byte *)(plVar12[-0xc] + 0x90) & 1) == 0)) {
                  *(longlong **)(param_1 + 0x48) = plVar12 + -0xd;
                  iVar8 = (**(code **)(*(longlong *)(param_2 + 0x138) + 0x48))(param_1);
                  if (iVar8 == 0) {
                    if ((*(byte *)(plVar12 + -7) & 8) != 0) {
                      lVar4 = *(longlong *)(lVar4 + 8);
                      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
                        WmlTrace(0x26,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
                      }
                      LOCK();
                      piVar1 = (int *)(lVar4 + 0xb8);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      *(uint *)(plVar12 + -7) = *(uint *)(plVar12 + -7) & 0xfffffff7;
                      return 0;
                    }
                    return 0;
                  }
                  uVar11 = 0xc0000225;
                  goto LAB_000295a3;
                }
              }
              else {
                if (plVar12[-0xb] != lVar5) goto LAB_0002954e;
                uVar10 = RxCheckShareAccessPerSrvOpens(param_2,(ulonglong)param_3,param_4);
                uVar11 = uVar10 & 0xffffffff;
                if ((int)uVar10 != 0) goto LAB_000295a3;
              }
            }
            else {
LAB_0002954e:
              *(undefined1 *)(param_1 + 0x221) = 1;
            }
            plVar12 = (longlong *)*plVar12;
          } while (plVar12 != (longlong *)(param_2 + 0x98));
        }
        uVar11 = 0xc0000225;
LAB_000295a3:
        if ((param_3 & 0xffefffff) != 0x80) {
          if (bVar13) {
            if ((bVar6) || (cVar7 = RxIsOkToPurgeFcb(param_2), cVar7 == '\0')) goto LAB_00029691;
            RxPurgeFcbInSystemCache(param_2,0,0,0,'\x01');
            bVar6 = true;
          }
          else {
            *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffbfffff;
            bVar13 = true;
            RxScavengeRelatedFobxs(param_2);
          }
          goto LAB_000294b3;
        }
        uVar11 = 0xc0000225;
      }
      else {
        uVar11 = 0xc0000225;
      }
LAB_00029691:
      if ((int)uVar11 != -0x3fffffbd) {
        return uVar11;
      }
      *(undefined1 *)(param_1 + 0x221) = 1;
      if (*(int *)(param_2 + 0x78) == 0) {
        MmForceSectionClosed(*(longlong *)(param_2 + 0xb8) + 8,1);
        return uVar11;
      }
      return uVar11;
    }
    uVar9 = RxCheckShareAccessPerSrvOpens(param_2,(ulonglong)param_3,param_4);
    if ((int)uVar9 == 0) {
      return 0xc0000225;
    }
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffbfffff;
  }
  else {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffbfffff;
  }
  RxScavengeRelatedFobxs(uVar11);
  RxPurgeFcbInSystemCache(param_2,0,0,0,'\x01');
  return 0xc0000225;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029704(longlong param_1,longlong param_2,ushort *param_3,short *param_4,byte *param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined6 uVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  short *psVar11;
  short *_Src;
  ushort uVar12;
  short *psVar13;
  undefined2 *_Dst;
  void *pvVar14;
  byte bVar15;
  char cVar16;
  ushort uVar17;
  undefined1 auStack_f8 [32];
  char local_d8;
  char local_d7;
  undefined8 local_c8;
  short *psStack_c0;
  ulonglong local_b8;
  short *psStack_b0;
  short *local_a8;
  longlong local_a0;
  ushort local_98 [4];
  undefined1 *local_90;
  byte *local_88;
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_00020100 ^ (ulonglong)auStack_f8;
  uVar12 = *param_3;
  local_88 = param_5;
  pcVar1 = *(char **)(param_2 + 0xb8);
  iVar8 = 0;
  cVar5 = '\0';
  local_d8 = '\0';
  local_a0 = param_1;
  if (uVar12 < 4) goto LAB_00029c41;
  if (((uVar12 < 0xb) || (psVar11 = *(short **)(param_3 + 4), *psVar11 != 0x5c)) ||
     (psVar11[1] != 0x3b)) {
    if ((**(short **)(param_3 + 4) != 0x5c) ||
       (psVar11 = *(short **)(param_3 + 4) + 1, *psVar11 == 0x3b)) {
      bVar15 = 4;
      goto LAB_00029a7f;
    }
    *(ushort *)(param_1 + 0x21c) = *(ushort *)(param_1 + 0x21c) | 1;
    local_d7 = '\x01';
    local_c8._0_4_ = CONCAT22(uVar12 - 2,(ushort)local_c8);
    psStack_c0 = psVar11;
    uVar7 = RxGetSessionId(pcVar1);
    local_98[1] = 0x20;
    local_90 = local_80;
    local_98[0] = 0;
    iVar8 = RtlIntegerToUnicodeString(uVar7,10,local_98);
    psVar13 = (short *)((ulonglong)(ushort)(uVar12 - 2) + (longlong)psVar11);
    for (_Src = psVar11; (_Src != psVar13 && (*_Src != 0x5c)); _Src = _Src + 1) {
    }
    uVar12 = (short)psVar13 - (short)_Src;
    uVar17 = (short)_Src - (short)psStack_c0;
    uVar4 = local_c8._2_6_;
    local_c8 = CONCAT62(local_c8._2_6_,uVar12);
    uVar3 = local_c8;
    psStack_c0 = _Src;
    local_a8 = psVar11;
    if ((uVar17 == 0) || (uVar12 < 3)) {
      cVar5 = '\0';
      bVar15 = 4;
      iVar8 = -0x3fffffcd;
      cVar6 = cVar5;
LAB_00029a5d:
      uVar10 = (uint)*param_3;
      cVar16 = local_d7;
    }
    else {
      if ((uVar12 != DAT_000206a0) &&
         ((uVar12 <= DAT_000206a0 || (_Src[DAT_000206a0 >> 1] != 0x5c)))) {
LAB_00029902:
        if ((uVar12 == DAT_000206d0) ||
           ((DAT_000206d0 < uVar12 && (_Src[DAT_000206d0 >> 1] == 0x5c)))) {
          local_b8 = CONCAT62(uVar4,DAT_000206d0);
          psStack_b0 = _Src;
          cVar6 = RtlEqualUnicodeString(&local_b8,&DAT_000206d0,1);
          if (cVar6 != '\0') {
            bVar15 = 1;
            cVar6 = local_d8;
            goto LAB_00029a5d;
          }
        }
        local_b8 = uVar3;
        if ((uVar12 == DAT_000206b0) ||
           ((psStack_b0 = _Src, DAT_000206b0 < uVar12 && (_Src[DAT_000206b0 >> 1] == 0x5c)))) {
          local_b8 = CONCAT62(uVar4,DAT_000206b0);
          psStack_b0 = _Src;
          cVar5 = RtlEqualUnicodeString(&local_b8,&DAT_000206b0,1);
          if (cVar5 != '\0') {
            *(uint *)(local_a0 + 0xa8) = *(uint *)(local_a0 + 0xa8) | 0x400;
            bVar15 = 5;
            cVar6 = '\0';
            if ((local_a8[(ulonglong)(uVar17 >> 1) - 1] != 0x2a) || (uVar17 != 2))
            goto LAB_000299fa;
            uVar12 = uVar12 - (ushort)local_b8;
            _Src = (short *)((longlong)_Src + (local_b8 & 0xffff));
            local_c8 = _DAT_00020f20;
            uVar3 = local_c8;
            psStack_c0 = DAT_00020f28;
            local_c8._0_2_ = (ushort)_DAT_00020f20;
            local_a8 = DAT_00020f28;
            uVar17 = (ushort)local_c8;
            local_c8 = uVar3;
            goto LAB_000299ff;
          }
        }
        bVar15 = 4;
        cVar6 = local_d8;
        goto LAB_00029a5d;
      }
      local_b8 = CONCAT62(local_c8._2_6_,DAT_000206a0);
      psStack_b0 = _Src;
      cVar5 = RtlEqualUnicodeString(&local_b8,&DAT_000206a0,1);
      if (cVar5 == '\0') goto LAB_00029902;
      local_b8 = CONCAT62(uRam00000000000206d2,DAT_000206d0);
      uVar12 = uVar12 - DAT_000206a0;
      bVar15 = 1;
      _Src = (short *)((longlong)_Src + (ulonglong)DAT_000206a0);
      psStack_b0 = psRam00000000000206d8;
      cVar6 = cVar5;
LAB_000299fa:
      cVar5 = cVar6;
LAB_000299ff:
      cVar6 = local_d8;
      if (cVar5 == '\0') goto LAB_00029a5d;
      uVar10 = (uint)(ushort)local_b8 + (uint)uVar17 + 2 + (uint)uVar12;
      cVar16 = local_d7;
      if ((*(uint *)(local_a0 + 0xa8) >> 10 & 1) != 0) {
        uVar10 = uVar10 + DAT_000206c0;
      }
    }
  }
  else {
    bVar15 = -(psVar11[3] != 0x3a) & 3;
LAB_00029a7f:
    local_a8 = psStack_c0;
    uVar10 = (uint)uVar12;
    _Src = psStack_c0;
    cVar16 = '\0';
    cVar6 = cVar5;
    uVar12 = (ushort)local_c8;
    uVar17 = (ushort)local_c8;
  }
  *local_88 = bVar15;
  if (iVar8 != 0) goto LAB_00029c41;
  iVar8 = 0;
  if (cVar16 == '\0') {
LAB_00029ac1:
    if (((cVar5 == '\0') && (cVar6 == '\0')) && (**(short **)(param_3 + 4) != 0x5c)) {
      iVar8 = -0x3fffffc7;
    }
  }
  else if (cVar5 == '\0') {
    cVar6 = '\x01';
    uVar10 = uVar10 + 6 + (uint)local_98[0];
    local_d8 = '\x01';
    goto LAB_00029ac1;
  }
  if (0xffff < uVar10) {
    iVar8 = -0x3fffffcd;
  }
  if ((iVar8 == 0) &&
     (uVar9 = RxAllocateCanonicalNameBuffer(local_a0,param_4,uVar10), (int)uVar9 == 0)) {
    if (cVar5 == '\0') {
      if (local_d8 == '\0') {
        RtlCopyUnicodeString(param_4,param_3);
      }
      else {
        **(undefined2 **)(param_4 + 4) = 0x5c;
        *(undefined2 *)(*(longlong *)(param_4 + 4) + 2) = 0x3b;
        *(undefined2 *)(*(longlong *)(param_4 + 4) + 4) = 0x3a;
        *param_4 = 6;
        RtlAppendUnicodeStringToString(param_4,local_98);
        RtlAppendUnicodeStringToString(param_4,param_3);
      }
    }
    else {
      puVar2 = *(undefined2 **)(param_4 + 4);
      *param_4 = (short)uVar10;
      *puVar2 = 0x5c;
      _Dst = puVar2 + 1;
      if (local_d8 != '\0') {
        _Dst = puVar2 + 4;
        *(undefined2 *)(*(longlong *)(param_4 + 4) + 2) = 0x3b;
        *(undefined2 *)(*(longlong *)(param_4 + 4) + 4) = 0x3a;
        *(undefined2 *)(*(longlong *)(param_4 + 4) + 6) = 0x5c;
      }
      if ((*(uint *)(local_a0 + 0xa8) >> 10 & 1) != 0) {
        memcpy(_Dst,PTR_u______000206c8,(ulonglong)DAT_000206c0);
        _Dst = (undefined2 *)((longlong)_Dst + (ulonglong)DAT_000206c0);
      }
      memcpy(_Dst,local_a8,(ulonglong)uVar17);
      pvVar14 = (void *)((longlong)_Dst + (ulonglong)uVar17);
      memcpy(pvVar14,psStack_b0,local_b8 & 0xffff);
      pvVar14 = (void *)((longlong)pvVar14 + (local_b8 & 0xffff));
      memcpy(pvVar14,_Src,(ulonglong)uVar12);
      *param_4 = ((short)pvVar14 - param_4[4]) + uVar12;
    }
  }
LAB_00029c41:
  FUN_00015570(local_60 ^ (ulonglong)auStack_f8);
  return;
}




/* Library Function - Single Match
    RxCreateTreeConnect
   
   Library: Visual Studio 2019 Release */

ulonglong RxCreateTreeConnect(ulonglong param_1)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  ushort *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  longlong lVar15;
  bool bVar16;
  byte local_res8 [8];
  longlong local_res10;
  ushort local_58 [4];
  undefined8 local_50;
  short local_48 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  local_res8[0] = 4;
  lVar10 = *(longlong *)(lVar3 + 0xb8);
  lVar15 = *(longlong *)(lVar10 + 0x30);
  local_58[1] = 0;
  local_58[0] = 0;
  local_50 = 0;
  local_res10 = lVar15;
  uVar9 = FUN_00029704(param_1,lVar3,(ushort *)(lVar15 + 0x58),(short *)local_58,local_res8);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  *(undefined1 *)(param_1 + 0x224) = 0;
  *(undefined2 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x22a) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x223) = 1;
  *(undefined2 *)(param_1 + 0x23a) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x24a) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (*(int *)(lVar10 + 0x20) != 0) {
    puVar14 = *(uint **)(lVar3 + 0x18);
    bVar16 = true;
    bVar5 = false;
    bVar7 = false;
    do {
      lVar10 = 10;
      puVar12 = puVar14 + 2;
      pcVar13 = "NoConnect";
      do {
        if (lVar10 == 0) break;
        lVar10 = lVar10 + -1;
        bVar16 = (char)*puVar12 == *pcVar13;
        puVar12 = (uint *)((longlong)puVar12 + 1);
        pcVar13 = pcVar13 + 1;
      } while (bVar16);
      bVar6 = true;
      if (!bVar16) {
        lVar10 = 9;
        puVar12 = puVar14 + 2;
        pcVar13 = "UserName";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar16 = (char)*puVar12 == *pcVar13;
          puVar12 = (uint *)((longlong)puVar12 + 1);
          pcVar13 = pcVar13 + 1;
        } while (bVar16);
        bVar6 = bVar7;
        if (!bVar16) {
          lVar10 = 9;
          puVar12 = puVar14 + 2;
          pcVar13 = "Password";
          do {
            if (lVar10 == 0) break;
            lVar10 = lVar10 + -1;
            bVar16 = (char)*puVar12 == *pcVar13;
            puVar12 = (uint *)((longlong)puVar12 + 1);
            pcVar13 = pcVar13 + 1;
          } while (bVar16);
          if (!bVar16) {
            lVar10 = 7;
            puVar12 = puVar14 + 2;
            pcVar13 = "Domain";
            do {
              if (lVar10 == 0) break;
              lVar10 = lVar10 + -1;
              bVar16 = (char)*puVar12 == *pcVar13;
              puVar12 = (uint *)((longlong)puVar12 + 1);
              pcVar13 = pcVar13 + 1;
            } while (bVar16);
            if (!bVar16) goto LAB_00029dab;
          }
        }
        bVar5 = true;
      }
LAB_00029dab:
      lVar10 = 10;
      puVar12 = puVar14 + 2;
      pcVar13 = "Transport";
      do {
        if (lVar10 == 0) break;
        lVar10 = lVar10 + -1;
        bVar16 = (char)*puVar12 == *pcVar13;
        puVar12 = (uint *)((longlong)puVar12 + 1);
        pcVar13 = pcVar13 + 1;
      } while (bVar16);
      if (bVar16) {
        puVar11 = (undefined2 *)(param_1 + 0x228);
LAB_00029e1d:
        if (puVar11 != (undefined2 *)0x0) {
          *puVar11 = *(undefined2 *)((longlong)puVar14 + 6);
          puVar11[1] = *(undefined2 *)((longlong)puVar14 + 6);
          *(ulonglong *)(puVar11 + 4) =
               (ulonglong)*(byte *)((longlong)puVar14 + 5) + 9 + (longlong)puVar14;
        }
      }
      else {
        lVar10 = 9;
        puVar12 = puVar14 + 2;
        pcVar13 = "UserName";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar16 = (char)*puVar12 == *pcVar13;
          puVar12 = (uint *)((longlong)puVar12 + 1);
          pcVar13 = pcVar13 + 1;
        } while (bVar16);
        if (bVar16) {
          puVar11 = (undefined2 *)(param_1 + 0x238);
          goto LAB_00029e1d;
        }
        lVar10 = 9;
        puVar12 = puVar14 + 2;
        pcVar13 = "Password";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar16 = (char)*puVar12 == *pcVar13;
          puVar12 = (uint *)((longlong)puVar12 + 1);
          pcVar13 = pcVar13 + 1;
        } while (bVar16);
        if (bVar16) {
          puVar11 = (undefined2 *)(param_1 + 0x248);
          goto LAB_00029e1d;
        }
        lVar10 = 7;
        puVar12 = puVar14 + 2;
        pcVar13 = "Domain";
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar16 = (char)*puVar12 == *pcVar13;
          puVar12 = (uint *)((longlong)puVar12 + 1);
          pcVar13 = pcVar13 + 1;
        } while (bVar16);
        if (bVar16) {
          puVar11 = (undefined2 *)(param_1 + 600);
          goto LAB_00029e1d;
        }
      }
      if (*puVar14 == 0) goto LAB_00029e56;
      puVar14 = (uint *)((longlong)puVar14 + (ulonglong)*puVar14);
      bVar16 = puVar14 == (uint *)0x0;
      bVar7 = bVar6;
    } while( true );
  }
LAB_00029e74:
  uVar8 = RxFindOrConstructVirtualNetRoot(param_1,lVar3,local_58,local_res8[0],local_48);
  if (uVar8 == 0xc0000195) {
    RxScavengeVNetRoots(*(longlong *)(param_1 + 0x58));
    uVar8 = RxFindOrConstructVirtualNetRoot(param_1,lVar3,local_58,local_res8[0],local_48);
  }
  if (uVar8 != 0) goto LAB_00029ffe;
  if (local_48[0] != 0) {
    if (*(longlong *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x18) + 0x168) + 0x130
         ) == 0) {
      uVar8 = 0xc0000002;
      goto LAB_00029ffe;
    }
    if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar8 = (**(code **)(*(longlong *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x18)
                            + 0x168) + 0x130))(param_1,local_48);
    }
    else {
      uVar8 = 0xc0000120;
    }
    if (uVar8 != 0) goto LAB_00029ffe;
  }
  puVar4 = *(ushort **)(param_1 + 0x1f8);
  FUN_00019e08();
  RxReference(puVar4);
  puVar1 = puVar4 + 0x34;
  LOCK();
  if (*(int *)puVar1 == 0) {
    puVar1[0] = 1;
    puVar1[1] = 0;
  }
  UNLOCK();
  if (*(int *)puVar1 != 0) {
    FUN_00036fe8();
    RxDereference(puVar4,0);
  }
  *(undefined **)(lVar15 + 0x18) = &DAT_00021560;
  *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined1 *)(puVar4 + 0x2c) = 1;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x1f8) + 0x24);
  *piVar2 = *piVar2 + 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
LAB_00029ffe:
  return (ulonglong)uVar8;
LAB_00029e56:
  lVar15 = local_res10;
  if ((!bVar5) && (bVar6)) {
    *(undefined1 *)(param_1 + 0x224) = 1;
  }
  goto LAB_00029e74;
}




uint FUN_0002a020(ulonglong param_1)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint unaff_EDI;
  uint *puVar9;
  byte local_res8 [8];
  undefined2 local_68;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ushort local_38 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar9 = (uint *)0x0;
  lVar6 = *(longlong *)(lVar1 + 0xb8);
  uStack_50 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  local_res8[0] = 4;
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    return unaff_EDI;
  }
  piVar2 = *(int **)(lVar1 + 0x70);
  bVar4 = false;
  if (*(char *)(param_1 + 0x18) == '\x0e') {
    if (*(int *)(lVar6 + 0x18) == 0x14018f) {
      puVar3 = *(uint **)(lVar6 + 0x20);
      if (0xfffe < *puVar3) goto LAB_0002a1d2;
      local_68 = (undefined2)*puVar3;
      puVar8 = puVar9;
      puVar9 = puVar3;
    }
    else {
      puVar8 = *(uint **)(lVar6 + 0x20);
      bVar4 = true;
      local_68 = (undefined2)*(undefined8 *)(puVar8 + 6);
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar6 = ExAllocatePoolWithTag(0,local_68,0x734d7852);
    *(longlong *)(param_1 + 0x178) = lVar6;
    if (lVar6 == 0) goto LAB_0002a1d2;
    *(undefined2 *)(param_1 + 0x170) = 0;
    *(undefined2 *)(param_1 + 0x172) = local_68;
    RtlCopyUnicodeString();
    FUN_0001c430((ulonglong *)(param_1 + 400),0,0xd8);
    *(undefined1 *)(param_1 + 0x223) = 1;
    if (bVar4) {
      uVar7 = *(undefined8 *)puVar8;
    }
    else {
      uVar7 = *(undefined8 *)(puVar9 + 2);
    }
    *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  }
  local_58 = *(ulonglong *)(param_1 + 0x170);
  uStack_50 = *(undefined8 *)(param_1 + 0x178);
  local_48 = local_58;
  uStack_40 = uStack_50;
  uVar5 = FUN_00029704(param_1,lVar1,(ushort *)&local_48,(short *)local_38,local_res8);
  if (uVar5 == 0) {
    uVar5 = RxFindOrConstructVirtualNetRoot(param_1,lVar1,local_38,local_res8[0],(short *)&local_58)
    ;
  }
  if (uVar5 == 0x103) {
    return unaff_EDI;
  }
  if (uVar5 == 0) {
    *piVar2 = (uint)*(ushort *)(param_1 + 0x170) - (uint)(ushort)local_58;
  }
LAB_0002a1d2:
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      ExFreePoolWithTag(*(longlong *)(param_1 + 0x178),0);
    }
    RxpPrepareCreateContextForReuse(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0xe;
  }
  return unaff_EDI;
}




/* Library Function - Single Match
    RxCollapseOrCreateSrvOpen
   
   Library: Visual Studio 2019 Release */

ulonglong RxCollapseOrCreateSrvOpen(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong ****pppplVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_res20;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  uVar12 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x10) & 0x1f01ff;
  uVar13 = *(ushort *)(lVar2 + 0x1a) & 7;
  iVar1 = *(int *)(param_1 + 0x1a8);
  uVar7 = *(uint *)(lVar2 + 0x10);
  *(int *)(param_3 + 0x78) = *(int *)(param_3 + 0x78) + 1;
  uVar8 = RxSearchForCollapsibleOpen(param_1,param_3,uVar12,uVar13);
  iVar6 = (int)uVar8;
  uVar8 = uVar8 & 0xffffffff;
  if (iVar6 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x38) = 1;
  }
  if (iVar6 == -0x3ffffddb) {
    pppplVar9 = (longlong ****)RxCreateSrvOpen(*(ushort **)(param_1 + 0x1f8),param_3);
    if (pppplVar9 == (longlong ****)0x0) {
      uVar8 = 0xc000009a;
    }
    else {
      *(uint *)(pppplVar9 + 10) = uVar12;
      *(uint *)((longlong)pppplVar9 + 0x54) = uVar13;
      uVar8 = 0;
    }
    *(longlong *****)(param_1 + 0x48) = pppplVar9;
    if ((int)uVar8 == 0) {
      RxInitiateSrvOpenKeyAssociation((longlong)pppplVar9);
      if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x38) == 0) {
        uVar8 = 0xc0000002;
      }
      else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
        FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
        uVar12 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x38))(param_1);
        uVar8 = (ulonglong)uVar12;
      }
      else {
        uVar8 = 0xc0000120;
      }
      iVar6 = (int)uVar8;
      if ((iVar1 == 4) || (iVar1 == 5)) {
        if (iVar6 == 0) {
          ExAcquireResourceExclusiveLite(*(undefined8 *)(param_3 + 0x10),1);
          *(undefined1 *)(param_1 + 0xad) = 1;
          RxTrackPagingIoResource(param_3,1,0x802,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x18) = 0;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(longlong *)(lVar3 + 0x28) = *(longlong *)(param_3 + 0xb8) + 8;
          CcSetFileSizes(lVar3,param_3 + 0x18);
          RxTrackPagingIoResource(param_3,3,0x809,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
          *(char *)(param_1 + 0xad) = (char)uVar8;
          ExReleaseResourceLite(*(undefined8 *)(param_3 + 0x10));
        }
      }
      else if (iVar6 == 0) {
        lVar2 = *(longlong *)(param_3 + 0xb8);
        lVar10 = lVar2 + 8;
        *(longlong *)(lVar3 + 0x28) = lVar10;
        if ((lVar10 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
          if (*(longlong *)(param_3 + 0x18) < *(longlong *)(param_3 + 0x20)) {
            uVar11 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x58) + 0x54);
            *(ulonglong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x20) + uVar11 & ~(uVar11 - 1);
          }
          CcSetFileSizes(lVar3,param_3 + 0x18);
        }
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x38) = (ulonglong)*(uint *)(param_1 + 0x1d0);
      *(int *)(pppplVar9 + 0x1a) = iVar6;
      RxUpdateCondition((iVar6 != 0) + 3,(undefined4 *)((longlong)pppplVar9 + 0x7c),pppplVar9 + 0x13
                       );
      RxCompleteSrvOpenKeyAssociation(pppplVar9);
      if (iVar6 == 0) {
        if ((uVar7 >> 0xc & 1) != 0) {
          *(uint *)(param_3 + 0x74) = *(uint *)(param_3 + 0x74) & 0xffbfffff;
        }
        *(undefined4 *)(pppplVar9 + 0xb) = *(undefined4 *)(param_1 + 0x1ac);
        local_res20 = 3;
      }
      else {
        local_res20 = 4;
        FUN_00036fe8();
        RxDereference((ushort *)pppplVar9,2);
        *(undefined8 *)(param_1 + 0x48) = 0;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_00036fe8();
          RxDereference(*(ushort **)(param_1 + 0x40),2);
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
      }
    }
    else {
      local_res20 = 4;
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x27,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxUpdateCondition(local_res20,(undefined4 *)(param_3 + 0x124),
                      (undefined8 *)(*(longlong *)(param_3 + 0xb8) + 0xf0));
  }
  else if (iVar6 == 0) {
    bVar5 = false;
    puVar4 = *(ushort **)(param_1 + 0x48);
    if (*(int *)(puVar4 + 0x3e) < 3) {
      bVar5 = true;
      FUN_00019e08();
      RxReference(puVar4);
      *(int *)(puVar4 + 0x22) = *(int *)(puVar4 + 0x22) + 1;
      __RxReleaseFcb(param_1,param_3,0x877,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
      *(undefined1 *)(param_1 + 0x220) = 0;
      RxWaitForStableCondition
                ((int *)(puVar4 + 0x3e),(longlong)(puVar4 + 0x4c),param_1,(undefined4 *)0x0);
      uVar7 = __RxAcquireFcb(param_3,param_1,1,0x87c,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
      if (uVar7 == 0) {
        *(undefined1 *)(param_1 + 0x220) = 1;
      }
    }
    if (*(int *)(puVar4 + 0x3e) == 3) {
      if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0x40) == 0) {
        uVar8 = 0xc0000002;
      }
      else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
        FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
        uVar7 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0x40))(param_1);
        uVar8 = (ulonglong)uVar7;
      }
      else {
        uVar8 = 0xc0000120;
      }
    }
    else {
      uVar8 = (ulonglong)*(uint *)(puVar4 + 0x68);
    }
    if (bVar5) {
      *(int *)(puVar4 + 0x22) = *(int *)(puVar4 + 0x22) + -1;
      FUN_00036fe8();
      RxDereference(puVar4,2);
    }
  }
  *(int *)(param_3 + 0x78) = *(int *)(param_3 + 0x78) + -1;
  return uVar8;
}




/* Library Function - Single Match
    RxCanonicalizeNameAndObtainNetRoot
   
   Library: Visual Studio 2019 Release */

ulonglong RxCanonicalizeNameAndObtainNetRoot
                    (ulonglong param_1,longlong param_2,ushort *param_3,ushort *param_4)

{
  longlong lVar1;
  ushort *puVar2;
  short *psVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte local_res10 [8];
  ushort local_38 [4];
  void *local_30;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30) + 0x40);
  local_30 = (void *)0x0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  local_res10[0] = 4;
  local_38[1] = 0;
  local_38[0] = 0;
  if (lVar1 == 0) {
    uVar7 = FUN_00029704(param_1,param_2,param_3,(short *)local_38,local_res10);
    bVar8 = local_res10[0];
    if ((int)uVar7 != 0) {
      return uVar7;
    }
LAB_0002a9ce:
    uVar6 = RxFindOrConstructVirtualNetRoot(param_1,param_2,local_38,bVar8,(short *)param_4);
    if (((uVar6 != 0) && (uVar6 != 0x103)) && ((*(uint *)(param_1 + 0xa8) >> 0xb & 1) != 0)) {
      RxFreeCanonicalNameBuffer(param_1);
      uVar6 = FUN_00029704(param_1,param_2,param_3,(short *)local_38,local_res10);
      if (uVar6 == 0) {
        uVar6 = RxFindOrConstructVirtualNetRoot
                          (param_1,param_2,local_38,local_res10[0],(short *)param_4);
      }
    }
    cVar5 = FsRtlDoesNameContainWildCards(param_4);
    if (cVar5 != '\0') {
      uVar6 = 0xc0000033;
    }
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = RxCanonicalizeFileNameByServerSpecs(param_1,param_4);
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 & 0xffffffff;
    }
    if (((-1 < (int)uVar6) || ((int)uVar7 == -0x3fffffea)) &&
       ((*(longlong *)(param_1 + 0x1f0) != 0 &&
        ((*(longlong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x18) + 0x168) +
           0x200) != 0 && ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0)))))) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      (**(code **)(*(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 8) + 0x18) + 0x168
                    ) + 0x200))(param_1,local_38);
    }
  }
  else {
    puVar2 = *(ushort **)(lVar1 + 0x18);
    lVar1 = *(longlong *)(lVar1 + 0x20);
    if ((puVar2 != (ushort *)0x0) && (lVar1 != 0)) {
      psVar3 = *(short **)(*(longlong *)(lVar1 + 8) + 0x10);
      if ((((*puVar2 & 0xff00) == 0xec00) || ((*puVar2 & 0xfff0) == 0xeb90)) &&
         ((psVar3 != (short *)0x0 && (*psVar3 == -0x14ee)))) {
        uVar6 = (uint)puVar2[0x74] + (uint)(ushort)psVar3[0x50] + 6 + (uint)*param_3;
        if (uVar6 < 0x10000) {
          uVar7 = RxAllocateCanonicalNameBuffer(param_1,local_38,uVar6);
        }
        else {
          uVar7 = 0xc0000039;
        }
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        memcpy(local_30,*(void **)(psVar3 + 0x54),(ulonglong)(ushort)psVar3[0x50]);
        memcpy((void *)((ulonglong)(ushort)psVar3[0x50] + (longlong)local_30),
               *(void **)(puVar2 + 0x78),(ulonglong)puVar2[0x74]);
        local_38[0] = puVar2[0x74] + psVar3[0x50];
        if (*param_3 != 0) {
          uVar4 = local_38[0] >> 1;
          if ((*(short *)((longlong)local_30 + (ulonglong)(uVar4 - 1) * 2) != 0x5c) &&
             (**(short **)(param_3 + 4) != 0x3a)) {
            local_38[0] = local_38[0] + 2;
            *(undefined2 *)((longlong)local_30 + (ulonglong)(uint)uVar4 * 2) = 0x5c;
          }
          memcpy((void *)((ulonglong)local_38[0] + (longlong)local_30),*(void **)(param_3 + 4),
                 (ulonglong)*param_3);
          local_38[0] = local_38[0] + *param_3;
        }
        bVar8 = 4;
        if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
          *(ushort *)(param_1 + 0x21c) = *(ushort *)(param_1 + 0x21c) | 1;
        }
        goto LAB_0002a9ce;
      }
    }
    uVar7 = 0xc000000d;
  }
  return uVar7;
}




/* Library Function - Single Match
    RxCreateFromNetRoot
   
   Library: Visual Studio 2019 Release */

uint RxCreateFromNetRoot(ushort *param_1,longlong param_2,ushort *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulonglong in_stack_ffffffffffffff98;
  uint in_stack_ffffffffffffffb8;
  ushort *local_40;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  puVar4 = *(ushort **)(param_1 + 0xfc);
  lVar5 = *(longlong *)(param_1 + 0xf8);
  local_40 = (ushort *)0x0;
  uVar8 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x10);
  if ((uVar8 >> 0x19 & 1) == 0) {
    uVar8 = uVar8 & 0x1f01ff;
  }
  else {
    uVar8 = 0x1f01ff;
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 0x14) = 0x1f01ff;
  }
  uVar13 = *(ushort *)(lVar2 + 0x1a) & 7;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    return in_stack_ffffffffffffffb8;
  }
  if (*(longlong *)(param_1 + 0x2c) !=
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 8) + 0x18)) {
    return in_stack_ffffffffffffffb8;
  }
  if ((*(longlong *)(param_1 + 0xe0) == 0xff444653) &&
     ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x38) & 0x10) == 0)) {
    return in_stack_ffffffffffffffb8;
  }
  if ((*(longlong *)(param_1 + 0xe0) == 0x11444653) && ((*(byte *)(lVar5 + 0x20) & 2) != 0)) {
    return in_stack_ffffffffffffffb8;
  }
  if (*(char *)(lVar5 + 0x2d) == '\x03') {
    uVar13 = 7;
  }
  if ((*(byte *)(lVar2 + 2) >> 2 & 1) != 0) {
    if ((*(uint *)(param_1 + 200) >> 0x10 & 1) != 0) {
      RxPurgeRelatedFobxs(*(longlong *)(puVar4 + 4),param_1,'\x01',(short *)0x0);
    }
    local_40 = (ushort *)RxCreateNetFcb((longlong)param_1,param_2,puVar4,param_3);
    if (local_40 == (ushort *)0x0) {
      return in_stack_ffffffffffffffb8;
    }
    *local_40 = 0xecff;
    *(undefined1 *)(param_1 + 0x110) = 0;
    param_1[0xf0] = 0;
    param_1[0xf1] = 0;
    param_1[0xf2] = 0;
    param_1[0xf3] = 0;
    *(ushort **)(lVar3 + 0x18) = local_40;
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar3 + 0x20) == 0xff444653) {
        *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) | 1;
      }
      else {
        *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) & 0xfffffffe;
      }
    }
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(int *)(local_40 + 0x3c) = *(int *)(local_40 + 0x3c) + 1;
    *(int *)(local_40 + 0x40) = *(int *)(local_40 + 0x40) + 1;
    uVar8 = __RxAcquireFcb((longlong)local_40,(longlong)param_1,1,0x9de,
                           "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
    if (uVar8 != 0) {
      return in_stack_ffffffffffffffb8;
    }
    FUN_00019e08();
    RxpReferenceNetFcb((longlong)local_40);
    __RxReleaseFcb((longlong)param_1,(longlong)local_40,0x9e1,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c");
    return in_stack_ffffffffffffffb8;
  }
  uVar9 = RxFindOrCreateFcb((longlong)param_1,param_2,param_3,(longlong *)&local_40);
  if (uVar9 != 0) {
    return in_stack_ffffffffffffffb8;
  }
  if (local_40 == (ushort *)0x0) {
    return in_stack_ffffffffffffffb8;
  }
  if ((*(uint *)(param_1 + 0x54) >> 10 & 1) != 0) {
    *local_40 = 0xecfd;
    RxUpdateCondition(3,(undefined4 *)(local_40 + 0x92),
                      (undefined8 *)(*(longlong *)(local_40 + 0x5c) + 0xf0));
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x27,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    *(int *)(local_40 + 0x40) = *(int *)(local_40 + 0x40) + 1;
    RxSetupNetFileObject((longlong)param_1,param_2,(longlong)local_40);
    return in_stack_ffffffffffffffb8;
  }
  if (*(int *)(local_40 + 0x40) != 0) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
    iVar10 = IoCheckShareAccess(uVar8,uVar13,lVar3,local_40 + 0xac,in_stack_ffffffffffffff98);
    if (iVar10 != 0) {
      FUN_00036fe8();
      RxpDereferenceNetFcb((longlong)local_40);
      return in_stack_ffffffffffffffb8;
    }
  }
  if (((*(uint *)(param_1 + 0xd6) >> 0xc & 1) != 0) &&
     ((*(uint *)(param_1 + 200) & 0xfffeffff) == 0)) {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
    RxPurgeFcbInSystemCache((ulonglong)local_40,0,0,1,'\0');
    RxScavengeRelatedFobxs((longlong)local_40);
  }
  uVar11 = RxCollapseOrCreateSrvOpen((longlong)param_1,param_2,(ulonglong)local_40);
  uVar9 = (uint)uVar11;
  if (uVar9 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x24);
    lVar6 = *(longlong *)(param_1 + 0x20);
    uVar1 = *(uint *)(lVar2 + 0x10);
    if (*(int *)(local_40 + 0x40) == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x2d) != '\x01') {
        IoSetShareAccess(uVar8,uVar13,lVar3,local_40 + 0xac);
      }
    }
    else {
      uVar9 = IoCheckShareAccess(uVar8,uVar13,lVar3,local_40 + 0xac,
                                 in_stack_ffffffffffffff98 & 0xffffffffffffff00);
      if (uVar9 != 0) {
        *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + 1;
        FUN_00036fe8();
        RxDereference(*(ushort **)(param_1 + 0x20),0);
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        goto LAB_0002b1be;
      }
    }
    RxSetupNetFileObject((longlong)param_1,param_2,(longlong)local_40);
    if ((*(int *)(local_40 + 0x40) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x2d) != '\x01')) {
      IoUpdateShareAccess(lVar3);
    }
    *(int *)(local_40 + 0x3c) = *(int *)(local_40 + 0x3c) + 1;
    if ((*(byte *)(lVar3 + 0x50) & 8) != 0) {
      *(int *)(local_40 + 0x3e) = *(int *)(local_40 + 0x3e) + 1;
    }
    if (((*(int *)(lVar5 + 0x44) == 0) && (*(int *)(local_40 + 0x3c) == 1)) &&
       ((*(uint *)(lVar5 + 0x30) >> 9 & 1) == 0)) {
      RxChangeBufferingState(lVar5,0,'\0');
    }
    *(uint *)(local_40 + 0x3a) = *(uint *)(local_40 + 0x3a) & 0xfffff7ff;
    *(int *)(local_40 + 0x40) = *(int *)(local_40 + 0x40) + 1;
    *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + 1;
    *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + 1;
    *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(local_40 + 0xdc);
    if ((uVar1 >> 3 & 1) != 0) {
      *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 1;
      *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 2;
      *(uint *)(local_40 + 0x3a) = *(uint *)(local_40 + 0x3a) & 0xfdffffff;
      *(uint *)(local_40 + 0x3a) = *(uint *)(local_40 + 0x3a) & 0xf7ffffff;
      RxPurgeFcbInSystemCache((ulonglong)local_40,0,0,1,'\x01');
    }
    RxUpdateShareAccessPerSrvOpens(lVar5);
    if ((uVar1 >> 0xc & 1) != 0) {
      *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 0x800000;
    }
    if (lVar6 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x2d) == '\x01') {
        *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) | 0x80;
      }
      else if (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x2d) != '\x03') {
        if (DAT_00021698 != 0) {
          uVar13 = *local_40;
          uVar12 = 0xec00;
          if ((((uVar13 & 0xff00) == 0xec00) || (uVar12 = 0xeb90, (uVar13 & 0xfff0) == 0xeb90)) &&
             ((uVar13 == 0xec03 &&
              ((*(byte *)(*(longlong *)(*(longlong *)(local_40 + 0x2c) + 8) + 0x38) & 0x40) != 0))))
          {
            ExAcquireResourceSharedLite(&DAT_000214d0,CONCAT71((int7)((ulonglong)uVar12 >> 8),1));
            if ((DAT_00021698 != 0) && (*(code **)(DAT_00021698 + 0x38) != (code *)0x0)) {
              (**(code **)(DAT_00021698 + 0x38))(param_1);
            }
            ExReleaseResourceLite(&DAT_000214d0);
          }
        }
        goto LAB_0002b1be;
      }
      *(undefined4 **)(lVar6 + 0x30) = (undefined4 *)(lVar6 + 0x90);
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      *(undefined4 *)(lVar6 + 0xa8) = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x54);
      *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)(lVar6 + 0x94) = *(undefined4 *)(param_1 + 0x10a);
      *(undefined4 *)(lVar6 + 0x98) = *(undefined4 *)(param_1 + 0x10c);
      lVar2 = lVar6 + 0xd0;
      *(longlong *)(lVar6 + 0xd8) = lVar2;
      *(longlong *)lVar2 = lVar2;
      lVar2 = lVar6 + 0xe0;
      *(longlong *)(lVar6 + 0xe8) = lVar2;
      *(longlong *)lVar2 = lVar2;
    }
  }
LAB_0002b1be:
  if (*(int *)(local_40 + 0x40) == 0) {
    if ((char)param_1[0x110] != '\0') {
      FUN_00036fe8();
      cVar7 = RxpDereferenceAndFinalizeNetFcb(local_40,(char *)param_1,'\0','\0');
      *(bool *)(param_1 + 0x110) = cVar7 == '\0';
      if (cVar7 != '\0') {
        RxTrackerUpdateHistory
                  ((longlong)param_1,0,0x72724372,0xb4a,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\create.c"
                  );
      }
    }
  }
  else {
    FUN_00036fe8();
    RxpDereferenceNetFcb((longlong)local_40);
  }
  return uVar9;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxCommonCreate
   
   Library: Visual Studio 2019 Release */

void RxCommonCreate(ushort *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  int extraout_EAX;
  ulonglong uVar5;
  int local_res10;
  ushort local_88 [8];
  undefined1 local_78 [64];
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if ((*(short *)(lVar2 + 0x58) == 0) && (*(longlong *)(lVar2 + 0x40) == 0)) {
    *(undefined **)(lVar2 + 0x18) = &DAT_00021560;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    _DAT_000215e0 = _DAT_000215e0 + 1;
    _DAT_000215d8 = _DAT_000215d8 + 1;
    *(undefined8 *)(param_2 + 0x38) = 1;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x28,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    if (3 < DAT_000204e4) {
      if ((DAT_000204e0 & 2) != 0) {
        WmlTrace(0x29,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x2a,(undefined8 *)&DAT_000204b0,DAT_000204e8,2);
      }
    }
    if (((*(longlong *)(lVar2 + 0x40) != 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x2b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((((*(byte *)(lVar1 + 2) & 4) != 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x2c,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
    }
    RxCopyCreateParameters((longlong)param_1);
    if ((*(byte *)(lVar1 + 0x10) & 0x80) == 0) {
      if (((2 < *(ushort *)(lVar2 + 0x58)) && ((*(short **)(lVar2 + 0x60))[1] == 0x5c)) &&
         (**(short **)(lVar2 + 0x60) == 0x5c)) {
        *(short *)(lVar2 + 0x58) = *(short *)(lVar2 + 0x58) + -2;
        memcpy(*(void **)(lVar2 + 0x60),(void *)((longlong)*(void **)(lVar2 + 0x60) + 2),
               (ulonglong)*(ushort *)(lVar2 + 0x58));
        if (((2 < *(ushort *)(lVar2 + 0x58)) && ((*(short **)(lVar2 + 0x60))[1] == 0x5c)) &&
           (**(short **)(lVar2 + 0x60) == 0x5c)) {
          return;
        }
      }
      do {
        if ((*(short *)(lVar2 + 0x58) != 0) &&
           (*(short *)(*(longlong *)(lVar2 + 0x60) + -2 +
                      (ulonglong)(*(ushort *)(lVar2 + 0x58) >> 1) * 2) == 0x5c)) {
          if ((*(byte *)(lVar1 + 0x10) & 0x40) != 0) {
            return;
          }
          *(short *)(lVar2 + 0x58) = *(short *)(lVar2 + 0x58) + -2;
          param_1[0x10e] = param_1[0x10e] | 2;
        }
        if ((param_1[0x54] & 4) != 0) {
          *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x10;
        }
        uVar5 = RxCanonicalizeNameAndObtainNetRoot
                          ((ulonglong)param_1,param_2,(ushort *)(lVar2 + 0x58),local_88);
        local_res10 = (int)uVar5;
        if (local_res10 != -0x3fffffea) break;
        RxCreateFromNetRoot(param_1,param_2,local_88);
        if (extraout_EAX == -0x3fffffbd) {
          if (*(int *)(param_1 + 0xd4) == 2) {
            local_res10 = -0x3fffffcb;
          }
          else {
            if (*(char *)((longlong)param_1 + 0x221) == '\0') {
              return;
            }
            if ((char)param_1[0x111] != '\0') {
              return;
            }
            if (*(longlong *)(param_1 + 0xfc) == 0) {
              return;
            }
            puVar3 = *(ushort **)(param_1 + 0xfc);
            memcpy(local_78,param_1 + 200,0x40);
            FUN_00019e08();
            RxReference(puVar3);
            RxpPrepareCreateContextForReuse((longlong)param_1);
            RxReinitializeContext(param_1);
            memcpy(param_1 + 200,local_78,0x40);
            RxCopyCreateParameters((longlong)param_1);
            RxPurgeRelatedFobxs(*(longlong *)(puVar3 + 4),param_1,'\0',(short *)0x0);
            RxScavengeFobxsForNetRoot(*(undefined8 *****)(puVar3 + 4),(undefined8 *****)0x0,'\x01');
            local_res10 = -0x3fffffea;
            *(undefined1 *)(param_1 + 0x111) = 1;
            puVar4 = *(ushort **)(*(longlong *)(puVar3 + 4) + 8);
            FUN_00019e08();
            RxReference(puVar4);
            RxpProcessChangeBufferingStateRequests(puVar4,'\0');
            FUN_00036fe8();
            RxDereference(puVar3,0);
          }
        }
        else {
          local_res10 = extraout_EAX;
          if (extraout_EAX == 0x104) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x14) + 0x38) = 0;
          }
        }
      } while (local_res10 == -0x3fffffea);
    }
    else {
      uVar5 = RxCreateTreeConnect((ulonglong)param_1);
      local_res10 = (int)uVar5;
    }
    if (local_res10 == -0x3ffffdd3) {
      RxpPrepareCreateContextForReuse((longlong)param_1);
    }
  }
  return;
}




/* Library Function - Single Match
    RxNotifyChangeDirectory
   
   Library: Visual Studio 2019 Release */

ulonglong RxNotifyChangeDirectory(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
  RxInitializeLowIoContext(param_1,8,(undefined2 *)(param_1 + 0x198));
  uVar2 = *(undefined4 *)(lVar3 + 0x10);
  bVar1 = *(byte *)(lVar3 + 2);
  RxLockUserBuffer(param_1,param_2,1,*(int *)(lVar3 + 8));
  *(byte *)(param_1 + 0x1b8) = bVar1 & 1;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar3 + 8);
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    uVar4 = 0xc000000d;
  }
  else {
    if ((*(byte *)(lVar3 + 10) & 5) == 0) {
      lVar3 = MmMapLockedPagesSpecifyCache(lVar3,0,1,0,0,0x10);
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x18);
    }
    *(longlong *)(param_1 + 0x1c8) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0xc000009a;
    }
    else {
      uVar4 = RxLowIoSubmit(param_1,param_2,param_3,&LAB_0002b854);
    }
  }
  return uVar4;
}




/* Library Function - Single Match
    RxQueryDirectory
   
   Library: Visual Studio 2019 Release */

ulonglong RxQueryDirectory(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  short *psVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar8;
  longlong lVar9;
  void *_Dst;
  undefined8 uVar10;
  
  lVar9 = *(longlong *)(param_2 + 0xb8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x34,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  uVar7 = 0;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x35,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  if (((*(longlong *)(lVar9 + 0x10) != 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x36,(undefined8 *)&DAT_000204b0,DAT_000204e8,2);
  }
  if (param_4 == 0) {
    return 0xc0000033;
  }
  uVar5 = 0;
  if (*(char *)(*(longlong *)(param_3 + 0x58) + 0x2d) != '\0') {
    return 0xc0000010;
  }
  iVar1 = *(int *)(lVar9 + 8);
  uVar2 = *(undefined4 *)(lVar9 + 0x18);
  puVar3 = *(ushort **)(lVar9 + 0x10);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar9 + 0x20);
  *(byte *)(param_1 + 0x194) = *(byte *)(lVar9 + 2) & 1;
  *(byte *)(param_1 + 0x195) = *(byte *)(lVar9 + 2) >> 1 & 1;
  *(byte *)(param_1 + 0x196) = *(byte *)(lVar9 + 2) >> 2 & 1;
  if ((*(longlong *)(param_4 + 0x38) == 0) && ((*(uint *)(param_4 + 0x28) >> 0x10 & 1) == 0)) {
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x197) = uVar5;
  if (*(char *)(param_1 + 0x196) != '\0') {
    return 0xc0000002;
  }
  if (*(char *)(param_1 + 0x197) == '\0') {
    uVar6 = __RxAcquireFcb(param_3,param_1,1,0x120,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\dirctrl.c");
    if (uVar6 == 0xc0000055) goto LAB_0002bf82;
    if (uVar6 != 0) {
      return CONCAT44(extraout_var_00,uVar6);
    }
  }
  else {
    uVar6 = __RxAcquireFcb(param_3,param_1,1,0x110,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\dirctrl.c");
    if (uVar6 == 0xc0000055) {
LAB_0002bf82:
      uVar8 = RxFsdPostRequest(param_1);
      return uVar8;
    }
    if (uVar6 != 0) {
      return CONCAT44(extraout_var,uVar6);
    }
    if (*(longlong *)(param_4 + 0x38) != 0) {
      *(undefined1 *)(param_1 + 0x197) = 0;
      ExConvertExclusiveToSharedLite(*(undefined8 *)(param_3 + 8));
    }
  }
  if ((*(byte *)(param_3 + 0x74) & 0x80) == 0) {
    if ((*(char *)(param_1 + 0x196) == '\0') && (*(char *)(param_1 + 0x194) != '\0')) {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (*(char *)(param_1 + 0x197) != '\0') {
      if (((((puVar3 == (ushort *)0x0) || (*puVar3 == 0)) ||
           (psVar4 = *(short **)(puVar3 + 4), psVar4 == (short *)0x0)) ||
          ((*puVar3 == 2 && (*psVar4 == 0x2a)))) ||
         ((*puVar3 == 0x18 &&
          (lVar9 = RtlCompareMemory(psVar4,u_>>>>>>>>_>>>__00020508,0x18), lVar9 == 0x18)))) {
        *(undefined1 *)(param_4 + 0x89) = 1;
        *(wchar_t **)(param_4 + 0x38) = u_>>>>>>>>_>>>__00020508 + 0xc;
        *(undefined2 *)(param_4 + 0x30) = 2;
        *(undefined2 *)(param_4 + 0x32) = 2;
        *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x10000;
      }
      else {
        uVar5 = FsRtlDoesNameContainWildCards(puVar3);
        *(undefined1 *)(param_4 + 0x89) = uVar5;
        _Dst = (void *)ExAllocatePoolWithTag
                                 (1,*puVar3,(-(uint)(DAT_00020e68 != 0) & 0xeff70000) + 0x734d7852);
        if (_Dst == (void *)0x0) {
          uVar7 = 0xc000009a;
        }
        else if ((*puVar3 & 1) == 0) {
          *(void **)(param_4 + 0x38) = _Dst;
          *(ushort *)(param_4 + 0x30) = *puVar3;
          *(ushort *)(param_4 + 0x32) = *puVar3;
          memcpy(_Dst,*(void **)(puVar3 + 4),(ulonglong)*puVar3);
          *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x20000;
        }
        else {
          uVar7 = 0xc000000d;
          ExFreePoolWithTag(_Dst,0);
        }
      }
      if (uVar7 == 0) {
        ExConvertExclusiveToSharedLite(*(undefined8 *)(param_3 + 8));
      }
    }
    if (uVar7 == 0) {
      RxLockUserBuffer(param_1,param_2,2,iVar1);
      *(undefined4 *)(param_1 + 0x170) = uVar2;
      uVar10 = RxMapUserBuffer(param_1,param_2);
      *(undefined8 *)(param_1 + 0x178) = uVar10;
      *(int *)(param_1 + 0x180) = iVar1;
      if (*(longlong *)(param_1 + 0x178) == 0) {
        uVar7 = (-(uint)(*(longlong *)(param_2 + 8) != 0) & 0x8d) + 0xc000000d;
      }
      else {
        if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xd0) == 0) {
          uVar7 = 0xc0000002;
        }
        else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          uVar7 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xd0))(param_1);
        }
        else {
          uVar7 = 0xc0000120;
        }
        if (*(char *)(param_1 + 0x1b) == '\0') {
          *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(iVar1 - *(int *)(param_1 + 0x180));
        }
        else {
          uVar10 = RxFsdPostRequest(param_1);
          uVar7 = (uint)uVar10;
        }
      }
    }
    __RxReleaseFcb(param_1,param_3,0x1c8,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\dirctrl.c");
    if ((*(char *)(param_1 + 0x197) != '\0') && ((int)uVar7 < 0)) {
      if ((*(uint *)(param_4 + 0x28) >> 0x11 & 1) != 0) {
        ExFreePoolWithTag(*(undefined8 *)(param_4 + 0x38),0);
        *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) & 0xfffdffff;
      }
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined2 *)(param_4 + 0x32) = 0;
      *(undefined2 *)(param_4 + 0x30) = 0;
      *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) & 0xfffeffff;
    }
    uVar8 = (ulonglong)uVar7;
  }
  else {
    __RxReleaseFcb(param_1,param_3,0x135,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\dirctrl.c");
    uVar8 = 0xc0000128;
  }
  return uVar8;
}




/* Library Function - Single Match
    RxCommonDirectoryControl
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonDirectoryControl(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_res18;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar5 = *(longlong *)(lVar2 + 0x30);
  if (lVar5 == 0) {
    lVar5 = 0;
    local_res18 = 0;
  }
  else {
    local_res18 = *(longlong *)(lVar5 + 0x18);
    lVar5 = *(longlong *)(lVar5 + 0x20);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x33,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  cVar1 = *(char *)(lVar2 + 1);
  if (cVar1 == '\x01') {
    uVar4 = RxQueryDirectory(param_1,param_2,local_res18,lVar5);
    uVar4 = uVar4 & 0xffffffff;
  }
  else if (cVar1 == '\x02') {
    uVar3 = RxNotifyChangeDirectory(param_1,param_2,local_res18);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 == 0x103) {
      RxDereferenceAndDeleteRxContext_Real(param_1);
    }
  }
  else {
    uVar4 = 0xc0000010;
  }
  return uVar4;
}




/* Library Function - Single Match
    RxCommonDeviceControl
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonDeviceControl(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  lVar3 = 0;
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x18);
  }
  if ((*(int *)(lVar1 + 0x18) == 0x14018f) || (*(int *)(lVar1 + 0x18) == 0x140193)) {
    uVar4 = 0xc0000010;
  }
  else {
    RxInitializeLowIoContext(param_1,7,(undefined2 *)(param_1 + 0x198));
    uVar2 = RxLowIoSubmit(param_1,param_2,lVar3,&LAB_0002c0cc);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 == 0x103) {
      RxDereferenceAndDeleteRxContext_Real(param_1);
    }
  }
  return uVar4;
}




/* Library Function - Multiple Matches With Different Base Names
    RxCommonQueryQuotaInformation
    RxCommonQuerySecurity
    RxCommonSetEa
    RxCommonSetQuotaInformation
   
   Library: Visual Studio 2019 Release */

ulonglong FID_conflict_RxCommonSetEa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    sVar2 = -0x1400;
  }
  else {
    psVar4 = *(short **)(lVar1 + 0x18);
    sVar2 = *psVar4;
  }
  if ((sVar2 == -0x13fd) || (sVar2 == -0x13fe)) {
    uVar3 = RxpCommonMiscOp(param_1,param_2,psVar4,RxpCommonSetEa);
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxCommonSetSecurity
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonSetSecurity(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    sVar2 = -0x1400;
  }
  else {
    psVar4 = *(short **)(lVar1 + 0x18);
    sVar2 = *psVar4;
  }
  if ((sVar2 == -0x13fd) || (sVar2 == -0x13fe)) {
    uVar3 = RxpCommonMiscOp(param_1,*(undefined8 *)(param_1 + 0x28),psVar4,RxpCommonSetSecurity);
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Multiple Matches With Different Base Names
    RxCommonQueryQuotaInformation
    RxCommonQuerySecurity
    RxCommonSetEa
    RxCommonSetQuotaInformation
   
   Library: Visual Studio 2019 Release */

ulonglong FID_conflict_RxCommonSetEa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  
  psVar4 = (short *)0x0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    sVar2 = -0x1400;
  }
  else {
    psVar4 = *(short **)(lVar1 + 0x18);
    sVar2 = *psVar4;
  }
  if ((sVar2 == -0x13fd) || (sVar2 == -0x13fe)) {
    uVar3 = RxpCommonMiscOp(param_1,param_2,psVar4,RxpCommonQuerySecurity);
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxConjureOriginalName
   
   Library: Visual Studio 2019 Release */

void RxConjureOriginalName
               (longlong param_1,longlong param_2,int *param_3,void *param_4,uint *param_5,
               int param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  short *_Src;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (((lVar2 == 0) || (_Src = *(short **)(lVar2 + 0xa8), _Src[1] != 0x3b)) ||
     ((*(uint *)(param_2 + 0x28) >> 0x19 & 1) != 0)) {
    _Src = *(short **)(*(longlong *)(param_1 + 0x58) + 0x110);
    uVar5 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x58) + 0x108);
    uVar4 = 0;
    param_6 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(lVar2 + 0xd0);
    uVar5 = (uint)*(ushort *)(lVar2 + 0xa0);
    if (param_6 == 1) {
      do {
        _Src = _Src + 1;
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) break;
      } while (*_Src != 0x5c);
    }
  }
  if ((*(uint *)(param_1 + 0x74) >> 0x1d & 1) != 0) {
    uVar4 = uVar4 + 2;
  }
  if (param_6 == 2) {
    uVar5 = 0;
    if ((uVar4 < *(ushort *)(param_1 + 0xe8)) &&
       (*(short *)((longlong)(int)uVar4 + *(longlong *)(param_1 + 0xf0)) != 0x5c)) {
      uVar4 = uVar4 - 2;
      uVar5 = 0;
    }
  }
  else {
    uVar3 = *param_5;
    if ((int)uVar3 < (int)uVar5) {
      *param_5 = 0xffffffff;
    }
    else {
      *param_5 = uVar3 - uVar5;
      uVar3 = uVar5;
    }
    memcpy(param_4,_Src,(longlong)(int)uVar3);
  }
  uVar3 = *(ushort *)(param_1 + 0xe8) - uVar4;
  if ((int)uVar3 < 1) {
    puVar6 = &LAB_0003e4c0;
    uVar3 = 2;
    uVar4 = 0;
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 0xf0);
  }
  *param_3 = uVar3 + uVar5;
  uVar1 = *param_5;
  if (uVar1 != 0xffffffff) {
    if ((int)uVar1 < (int)uVar3) {
      *param_5 = 0xffffffff;
      uVar3 = uVar1;
    }
    else {
      *param_5 = uVar1 - uVar3;
    }
    memcpy((void *)((longlong)(int)uVar5 + (longlong)param_4),puVar6 + (int)uVar4,
           (longlong)(int)uVar3);
  }
  return;
}




/* Library Function - Single Match
    RxQueryPipeInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxQueryPipeInfo(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                         undefined8 *param_5)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0x10);
  puVar1 = (uint *)(param_1 + 0x180);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*(char *)(*(longlong *)(param_3 + 0x58) + 0x2d) == '\x01') {
    if (iVar2 == 0x17) {
      if (7 < *puVar1) {
        *(undefined4 *)param_5 = *(undefined4 *)(param_4 + 0x94);
        *(undefined4 *)((longlong)param_5 + 4) = *(undefined4 *)(param_4 + 0x98);
        *puVar1 = *puVar1 - 8;
        return 0;
      }
    }
    else if (iVar2 == 0x18) {
      if (0x27 < *puVar1) {
        uVar3 = RxpQueryInfoMiniRdr(param_1,param_3,0x18,param_5);
        return uVar3 & 0xffffffff;
      }
    }
    else {
      if (iVar2 != 0x19) goto LAB_0002c4a7;
      if (0xf < *puVar1) {
        *param_5 = *(undefined8 *)(param_4 + 0xa0);
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0xa8);
        *puVar1 = *puVar1 - 0x10;
        return 0;
      }
    }
    uVar3 = 0x80000005;
  }
  else {
LAB_0002c4a7:
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxSetPipeInfo
   
   Library: Visual Studio 2019 Release */

int RxSetPipeInfo(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  iVar4 = *(int *)(lVar1 + 0x10);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*(char *)(*(longlong *)(param_3 + 0x58) + 0x2d) == '\x01') {
    if (iVar4 == 0x17) {
      if (*(int *)(lVar1 + 8) == 8) {
        piVar3 = *(int **)(param_2 + 0x18);
        if ((*piVar3 == *(int *)(param_4 + 0x94)) && (piVar3[1] == *(int *)(param_4 + 0x98))) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x170) = 0x17;
        *(int **)(param_1 + 0x178) = piVar3;
        *(undefined4 *)(param_1 + 0x180) = 8;
        if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xe0) == 0) {
          return -0x3ffffffe;
        }
        if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          iVar4 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xe0))(param_1);
        }
        else {
          iVar4 = -0x3ffffee0;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        *(int *)(param_4 + 0x94) = *piVar3;
        *(int *)(param_4 + 0x98) = piVar3[1];
        return 0;
      }
    }
    else if (((iVar4 != 0x18) && (iVar4 == 0x19)) && (*(int *)(lVar1 + 8) == 0x10)) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      *(undefined8 *)(param_4 + 0xa0) = *puVar2;
      *(undefined4 *)(param_4 + 0xa8) = *(undefined4 *)(puVar2 + 1);
      return 0;
    }
  }
  return -0x3ffffff3;
}




/* Library Function - Single Match
    RxQueryCompressedInfo
   
   Library: Visual Studio 2019 Release */

void RxQueryCompressedInfo(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  iVar1 = RxFlushFcbInSystemCache(param_3,'\x01');
  if (iVar1 < 0) {
    if (param_1 != 0) {
      *(int *)(param_1 + 0xb0) = iVar1;
    }
    if (iVar1 == -0x7fffffea) {
                    /* WARNING: Subroutine does not return */
      ExRaiseStatus();
    }
    uVar2 = FsRtlNormalizeNtstatus(iVar1,0xc00000e9);
                    /* WARNING: Subroutine does not return */
    ExRaiseStatus(uVar2);
  }
  RxpQueryInfoMiniRdr(param_1,param_3,0x1c,param_4);
  return;
}




/* Library Function - Single Match
    RxQueryAlternateNameInfo
   
   Library: Visual Studio 2019 Release */

void RxQueryAlternateNameInfo
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxpQueryInfoMiniRdr(param_1,param_3,0x15,param_4);
  return;
}




/* Library Function - Single Match
    RxQueryNameInfo
   
   Library: Visual Studio 2019 Release */

undefined8
RxQueryNameInfo(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int *param_5)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x180);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *puVar1 = *puVar1 - 4;
  if ((-1 < (int)*puVar1) &&
     (RxConjureOriginalName(param_3,param_4,param_5,param_5 + 1,puVar1,1), -1 < (int)*puVar1)) {
    return 0;
  }
  *puVar1 = 0;
  return 0x80000005;
}




/* Library Function - Single Match
    RxQueryPositionInfo
   
   Library: Visual Studio 2019 Release */

undefined8
RxQueryPositionInfo(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x49,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *param_4 = *(undefined8 *)(lVar1 + 0x68);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -8;
  return 0;
}




/* Library Function - Single Match
    RxQueryEaInfo
   
   Library: Visual Studio 2019 Release */

undefined8 RxQueryEaInfo(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x48,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  uVar2 = RxpQueryInfoMiniRdr(param_1,param_3,7,param_4);
  if ((*(int *)(lVar1 + 0x10) == 0x12) && ((int)uVar2 == -0x3ffffffe)) {
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -4;
    uVar2 = 0;
  }
  return uVar2;
}




/* Library Function - Single Match
    RxQueryInternalInfo
   
   Library: Visual Studio 2019 Release */

void RxQueryInternalInfo(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x47,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxpQueryInfoMiniRdr(param_1,param_3,6,param_4);
  return;
}




/* Library Function - Single Match
    RxQueryStandardInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxQueryStandardInfo(longlong param_1,undefined8 param_2,ushort *param_3,longlong param_4,
                             undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x46,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if ((*param_3 - 0xec02 < 2) && ((*(uint *)(*(longlong *)(param_4 + 8) + 0x58) >> 0xe & 1) == 0)) {
    iVar1 = *(int *)(param_3 + 200);
    *(int *)(param_5 + 2) = iVar1;
    *(byte *)((longlong)param_5 + 0x14) = (byte)param_3[0x3a] & 1;
    *(bool *)((longlong)param_5 + 0x15) = *param_3 == 0xec02;
    if (iVar1 == 0) {
      *(undefined4 *)(param_5 + 2) = 1;
    }
    if (*param_3 == 0xec03) {
      *param_5 = *(undefined8 *)(param_3 + 0xc);
      FUN_00033664((longlong)param_3,param_5 + 1);
    }
    if ((DAT_00020e14 == '\0') && ((*(uint *)(param_3 + 0x3a) >> 0x14 & 1) != 0)) {
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -0x18;
      return 0;
    }
  }
  uVar2 = RxpQueryInfoMiniRdr(param_1,(longlong)param_3,5,param_5);
  return uVar2 & 0xffffffff;
}




/* Library Function - Single Match
    RxQueryBasicInfo
   
   Library: Visual Studio 2019 Release */

void RxQueryBasicInfo(longlong param_1,undefined8 param_2,longlong param_3,ulonglong *param_4)

{
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x45,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  FUN_0001c430(param_4,0,0x28);
  RxpQueryInfoMiniRdr(param_1,param_3,4,param_4);
  return;
}




/* Library Function - Single Match
    RxSetPositionInfo
   
   Library: Visual Studio 2019 Release */

undefined8 RxSetPositionInfo(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (((*(byte *)(lVar2 + 0x50) & 8) == 0) ||
     ((**(uint **)(param_2 + 0x18) & *(uint *)(*(longlong *)(lVar1 + 0x28) + 0x98)) == 0)) {
    *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)*(uint **)(param_2 + 0x18);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xc000000d;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxCommonQueryInformation
   
   Library: Visual Studio 2019 Release */

uint RxCommonQueryInformation(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ushort *local_res18;
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  lVar3 = *(longlong *)(lVar2 + 0x30);
  iVar1 = *(int *)(lVar2 + 0x10);
  bVar4 = false;
  bVar5 = false;
  if (lVar3 == 0) {
    local_res18 = (ushort *)0x0;
    local_res20 = 0;
    uVar10 = 0xec00;
  }
  else {
    local_res18 = *(ushort **)(lVar3 + 0x18);
    local_res20 = *(longlong *)(lVar3 + 0x20);
    uVar10 = *local_res18;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x37,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x38,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar2 + 8);
  puVar7 = (ulonglong *)RxMapSystemBuffer(param_1,param_2);
  if (puVar7 == (ulonglong *)0x0) {
    uVar6 = 0xc000009a;
    goto LAB_0002d306;
  }
  FUN_0001c430(puVar7,0,(longlong)*(int *)(param_1 + 0x180));
  if (uVar10 != 0xec00) {
    if (0xec01 < uVar10) {
      if (uVar10 < 0xec04) goto LAB_0002cea6;
      if (uVar10 == 0xecfd) {
        uVar6 = 0xc0000002;
        goto LAB_0002d306;
      }
    }
    uVar6 = 0xc000000d;
    goto LAB_0002d306;
  }
LAB_0002cea6:
  if (((local_res18[0x3a] & 4) == 0) && (iVar1 != 9)) {
    if (iVar1 == 0x1c) {
      uVar6 = __RxAcquireFcb((longlong)local_res18,param_1,1,0x160,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    }
    else {
      uVar6 = __RxAcquireFcb((longlong)local_res18,param_1,2,0x15e,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    }
    if (uVar6 == 0xc0000055) {
      uVar6 = 0;
      bVar5 = true;
      goto LAB_0002d306;
    }
    if (uVar6 != 0) {
      bVar5 = false;
      goto LAB_0002d306;
    }
    bVar4 = true;
  }
  if (iVar1 < 0xf) {
    if (iVar1 == 0xe) {
      uVar9 = RxQueryPositionInfo(param_1,param_2,local_res18,puVar7);
      uVar6 = (uint)uVar9;
    }
    else if (iVar1 == 4) {
      uVar6 = RxQueryBasicInfo(param_1,param_2,(longlong)local_res18,puVar7);
    }
    else if (iVar1 == 5) {
      uVar8 = RxQueryStandardInfo(param_1,param_2,local_res18,local_res20,puVar7);
      uVar6 = (uint)uVar8;
    }
    else if (iVar1 == 6) {
      uVar6 = RxQueryInternalInfo(param_1,param_2,(longlong)local_res18,puVar7);
    }
    else if (iVar1 == 7) {
      uVar9 = RxQueryEaInfo(param_1,param_2,(longlong)local_res18,puVar7);
      uVar6 = (uint)uVar9;
    }
    else {
      if (iVar1 != 9) goto LAB_0002d0f1;
      uVar9 = RxQueryNameInfo(param_1,param_2,(longlong)local_res18,local_res20,(int *)puVar7);
      uVar6 = (uint)uVar9;
    }
  }
  else if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar2 + 8);
    uVar6 = RxQueryBasicInfo(param_1,param_2,(longlong)local_res18,puVar7);
    if (uVar6 == 0) {
      *(int *)(param_1 + 0x180) = *(int *)(lVar2 + 8) + -0x28;
      uVar8 = RxQueryStandardInfo(param_1,param_2,local_res18,local_res20,puVar7 + 5);
      uVar6 = (uint)uVar8;
      if (uVar6 == 0) {
        *(int *)(param_1 + 0x180) = *(int *)(lVar2 + 8) + -0x40;
        uVar6 = RxQueryInternalInfo(param_1,param_2,(longlong)local_res18,puVar7 + 8);
        if (uVar6 == 0) {
          *(int *)(param_1 + 0x180) = *(int *)(lVar2 + 8) + -0x48;
          uVar9 = RxQueryEaInfo(param_1,param_2,(longlong)local_res18,puVar7 + 9);
          uVar6 = (uint)uVar9;
          if (uVar6 == 0) {
            *(int *)(param_1 + 0x180) = *(int *)(lVar2 + 8) + -0x50;
            uVar9 = RxQueryPositionInfo(param_1,param_2,local_res18,puVar7 + 10);
            uVar6 = (uint)uVar9;
            if (uVar6 == 0) {
              *(int *)(param_1 + 0x180) = *(int *)(lVar2 + 8) + -0x60;
              uVar9 = RxQueryNameInfo(param_1,param_2,(longlong)local_res18,local_res20,
                                      (int *)(puVar7 + 0xc));
              uVar6 = (uint)uVar9;
            }
          }
        }
      }
    }
  }
  else if (iVar1 == 0x15) {
    uVar6 = RxQueryAlternateNameInfo(param_1,param_2,(longlong)local_res18,puVar7);
  }
  else if (iVar1 < 0x17) {
LAB_0002d0f1:
    uVar9 = RxpQueryInfoMiniRdr(param_1,(longlong)local_res18,iVar1,puVar7);
    uVar6 = (uint)uVar9;
    *(uint *)(param_1 + 0xb0) = uVar6;
  }
  else if (iVar1 < 0x1a) {
    uVar8 = RxQueryPipeInfo(param_1,param_2,(longlong)local_res18,local_res20,puVar7);
    uVar6 = (uint)uVar8;
  }
  else {
    if (iVar1 != 0x1c) goto LAB_0002d0f1;
    uVar6 = RxQueryCompressedInfo(param_1,param_2,(longlong)local_res18,puVar7);
  }
  if (*(int *)(param_1 + 0x180) < 0) {
    uVar6 = 0x80000005;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(lVar2 + 8);
  }
  *(ulonglong *)(param_2 + 0x38) =
       (ulonglong)(uint)(*(int *)(lVar2 + 8) - *(int *)(param_1 + 0x180));
LAB_0002d306:
  if (bVar4) {
    __RxReleaseFcb(param_1,(longlong)local_res18,0x20c,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
  }
  if ((-1 < (int)uVar6) && ((bVar5 || (*(char *)(param_1 + 0x1b) != '\0')))) {
    uVar9 = RxFsdPostRequest(param_1);
    uVar6 = (uint)uVar9;
  }
  return uVar6;
}




/* Library Function - Single Match
    RxSetSimpleInfo
   
   Library: Visual Studio 2019 Release */

void RxSetSimpleInfo(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 0x10);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0xe2,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxpSetInfoMiniRdr(param_1,param_2,param_3,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0002d6e9) */
/* Library Function - Single Match
    RxSetEndOfFileInfo
   
   Library: Visual Studio 2019 Release */

int RxSetEndOfFileInfo(longlong param_1,longlong param_2,short *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  int iVar12;
  
  iVar12 = -0x3fffffff;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  cVar10 = '\0';
  bVar8 = false;
  plVar3 = *(longlong **)(param_2 + 0x18);
  lVar4 = *plVar3;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x41,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*param_3 != -0x13fd) {
    return -0x3fffffff;
  }
  lVar5 = *(longlong *)(param_3 + 0x10);
  puVar1 = (ulonglong *)(param_3 + 0xc);
  uVar6 = *puVar1;
  uVar7 = *(undefined8 *)(param_3 + 0x14);
  if (((**(longlong **)(lVar2 + 0x28) != 0) && ((*(longlong **)(lVar2 + 0x28))[1] == 0)) &&
     (*(char *)(param_2 + 0x40) != '\0')) {
    if ((*(uint *)(lVar2 + 0x50) >> 0xe & 1) != 0) goto LAB_0002d709;
    if ((longlong)uVar6 < lVar5) {
      *puVar1 = lVar5 + (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x2c) + 0x54) &
                ~((ulonglong)*(uint *)(*(longlong *)(param_3 + 0x2c) + 0x54) - 1);
    }
    CcInitializeCacheMap(lVar2,puVar1,0,&DAT_000214b0,param_3);
    bVar8 = true;
  }
  if (*(longlong *)(param_3 + 0x10) == lVar4) {
    iVar12 = 0;
    cVar10 = '\0';
  }
  else {
    if ((lVar4 < *(longlong *)(param_3 + 0x10)) &&
       (cVar9 = MmCanFileBeTruncated(*(undefined8 *)(lVar2 + 0x28),plVar3), cVar9 == '\0')) {
      iVar12 = -0x3ffffdbd;
      goto LAB_0002d709;
    }
    cVar10 = ExAcquireResourceExclusiveLite(*(undefined8 *)(param_3 + 8),1);
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0xad) = 1;
    }
    RxTrackPagingIoResource
              ((longlong)param_3,1,0x6c2,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    *(longlong *)(param_3 + 0x10) = lVar4;
    if (lVar4 < *(longlong *)(param_3 + 0x14)) {
      *(longlong *)(param_3 + 0x14) = lVar4;
    }
    *(longlong *)(param_3 + 0xc) = lVar4;
    uVar11 = RxpSetInfoMiniRdr(param_1,param_2,(longlong)param_3,0x14);
    iVar12 = (int)uVar11;
    if (iVar12 == 0) {
      if (cVar10 != '\0') {
        RxTrackPagingIoResource
                  ((longlong)param_3,3,0x6e1,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
        if (param_1 != 0) {
          *(undefined1 *)(param_1 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(param_3 + 8));
        cVar10 = '\0';
      }
      CcSetFileSizes(lVar2,param_3 + 0xc);
    }
  }
  *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x1000;
LAB_0002d709:
  if (iVar12 < 0) {
    *(longlong *)(param_3 + 0x10) = lVar5;
    *(ulonglong *)(param_3 + 0xc) = uVar6;
    *(undefined8 *)(param_3 + 0x14) = uVar7;
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 8);
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 8) = lVar5;
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x43,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  if (cVar10 != '\0') {
    RxTrackPagingIoResource
              ((longlong)param_3,3,0x71f,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0xad) = 0;
    }
    ExReleaseResourceLite(*(undefined8 *)(param_3 + 8));
  }
  if (bVar8) {
    CcUninitializeCacheMap(lVar2,0,0);
  }
  if (((iVar12 == 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x44,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return iVar12;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxSetAllocationInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxSetAllocationInfo(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong unaff_R12;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  bVar4 = false;
  plVar2 = *(longlong **)(param_2 + 0x18);
  local_50 = *plVar2;
  local_48 = lVar1;
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3f,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  if (((**(longlong **)(lVar1 + 0x28) != 0) && ((*(longlong **)(lVar1 + 0x28))[1] == 0)) &&
     (*(char *)(param_2 + 0x40) != '\0')) {
    if ((*(uint *)(lVar1 + 0x50) >> 0xe & 1) != 0) {
      return unaff_R12;
    }
    if (*(longlong *)(param_3 + 0x18) < *(longlong *)(param_3 + 0x20)) {
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x58) + 0x54);
      *(ulonglong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x20) + uVar6 & ~(uVar6 - 1);
    }
    CcInitializeCacheMap(lVar1,param_3 + 0x18,0,&DAT_000214b0,param_3);
    bVar4 = true;
  }
  *(uint *)(lVar1 + 0x50) = *(uint *)(lVar1 + 0x50) | 0x1000;
  FUN_00033664(param_3,&local_40);
  if (*plVar2 < local_40) {
    cVar5 = MmCanFileBeTruncated(*(undefined8 *)(lVar1 + 0x28),plVar2);
    if (cVar5 == '\0') goto LAB_0002dbd5;
    ExAcquireResourceExclusiveLite(*(undefined8 *)(param_3 + 0x10),1);
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0xad) = 1;
    }
    RxTrackPagingIoResource(param_3,1,0x5d0,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xec,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxSetFileSizeWithLock(param_3,&local_50);
    if (local_50 < *(longlong *)(param_3 + 0x28)) {
      *(longlong *)(param_3 + 0x28) = local_50;
    }
    RxTrackPagingIoResource(param_3,3,0x5e5,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0xad) = 0;
    }
    ExReleaseResourceLite(*(undefined8 *)(param_3 + 0x10));
  }
  lVar3 = *(longlong *)(param_3 + 0x18);
  *(longlong *)(param_3 + 0x18) = local_50;
  local_38 = lVar3;
  uVar7 = RxpSetInfoMiniRdr(param_1,param_2,param_3,0x13);
  if ((int)uVar7 < 0) {
    *(longlong *)(param_3 + 0x18) = lVar3;
  }
  else if (lVar3 != local_50) {
    CcSetFileSizes(lVar1,param_3 + 0x18);
  }
LAB_0002dbd5:
  if (bVar4) {
    CcUninitializeCacheMap(lVar1,0,0);
  }
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x40,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  return unaff_R12;
}




/* Library Function - Single Match
    RxSetRenameInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxSetRenameInfo(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *(undefined1 *)(param_1 + 0x184) = *(undefined1 *)(lVar2 + 0x20);
  if (*(longlong *)(lVar2 + 0x18) == 0) {
    uVar6 = RxpSetInfoMiniRdr(param_1,param_2,param_3,*(undefined4 *)(lVar2 + 0x10));
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18);
    if (*(longlong *)(lVar3 + 0x58) == *(longlong *)(param_3 + 0x58)) {
      iVar1 = *(int *)(*(longlong *)(param_3 + 0x58) + 100) + 0x14 + (uint)*(ushort *)(lVar3 + 0xe8)
      ;
      puVar7 = (undefined8 *)ExAllocatePoolWithTag(1,iVar1,0x734d7852);
      if (puVar7 == (undefined8 *)0x0) {
        uVar6 = 0xc000009a;
      }
      else {
        puVar4 = *(undefined8 **)(param_2 + 0x18);
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        puVar7[2] = puVar4[2];
        *(uint *)(puVar7 + 2) = (uint)*(ushort *)(lVar3 + 0xe8);
        memcpy((void *)((longlong)puVar7 + 0x14),*(void **)(lVar3 + 0xf0),
               (ulonglong)*(ushort *)(lVar3 + 0xe8));
        *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar2 + 0x10);
        *(undefined8 **)(param_1 + 0x178) = puVar7;
        *(int *)(param_1 + 0x180) = iVar1;
        if (*(longlong *)(*(longlong *)(param_3 + 0x138) + 0xe0) == 0) {
          uVar6 = 0xc0000002;
        }
        else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          uVar5 = (**(code **)(*(longlong *)(param_3 + 0x138) + 0xe0))(param_1);
          uVar6 = (ulonglong)uVar5;
        }
        else {
          uVar6 = 0xc0000120;
        }
        ExFreePoolWithTag(puVar7,0);
      }
    }
    else {
      uVar6 = 0xc00000d4;
    }
  }
  return uVar6;
}




/* Library Function - Single Match
    RxSetDispositionInfo
   
   Library: Visual Studio 2019 Release */

undefined8 RxSetDispositionInfo(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  pcVar2 = *(char **)(param_2 + 0x18);
  uVar3 = RxpSetInfoMiniRdr(param_1,param_2,param_3,0xd);
  if (-1 < (int)uVar3) {
    if (*pcVar2 == '\0') {
      *(uint *)(param_3 + 0x74) = *(uint *)(param_3 + 0x74) & 0xfffffffe;
      *(undefined1 *)(lVar1 + 0x49) = 0;
    }
    else {
      *(uint *)(param_3 + 0x74) = *(uint *)(param_3 + 0x74) | 1;
      *(undefined1 *)(lVar1 + 0x49) = 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxSetBasicInfo
   
   Library: Visual Studio 2019 Release */

ulonglong RxSetBasicInfo(longlong param_1,longlong param_2,short *param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  uVar10 = RxpSetInfoMiniRdr(param_1,param_2,(longlong)param_3,4);
  uVar11 = uVar10;
  if (-1 < (int)uVar10) {
    plVar4 = *(longlong **)(param_2 + 0x18);
    lVar5 = *plVar4;
    lVar6 = plVar4[1];
    lVar7 = plVar4[2];
    lVar8 = plVar4[3];
    uVar2 = *(uint *)(plVar4 + 4);
    if (uVar2 != 0) {
      if (*param_3 == -0x13fe) {
        uVar9 = (ushort)uVar2 & 0xff7f | 0x10;
      }
      else {
        uVar9 = (ushort)uVar2 & 0xff6f;
      }
      if ((uVar2 >> 8 & 1) == 0) {
        *(uint *)(param_3 + 0x3a) = *(uint *)(param_3 + 0x3a) & 0xffffffdf;
        puVar1 = (uint *)(lVar3 + 0x50);
        *puVar1 = *puVar1 & 0xffff7fff;
      }
      else {
        *(uint *)(param_3 + 0x3a) = *(uint *)(param_3 + 0x3a) | 0x20;
        puVar1 = (uint *)(lVar3 + 0x50);
        *puVar1 = *puVar1 | 0x8000;
      }
      *(uint *)(param_3 + 0x48) = (uint)uVar9;
    }
    if (lVar5 != 0) {
      *(longlong *)(param_3 + 0xcc) = *plVar4;
      *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x100000;
    }
    if (lVar6 != 0) {
      *(longlong *)(param_3 + 0xd0) = plVar4[1];
      *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x80000;
    }
    if (lVar7 != 0) {
      *(longlong *)(param_3 + 0xd4) = plVar4[2];
      *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x40000;
    }
    uVar11 = uVar10 & 0xffffffff;
    if (lVar8 != 0) {
      *(longlong *)(param_3 + 0xd8) = plVar4[3];
      *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 0x200000;
    }
  }
  return uVar11;
}




/* Library Function - Single Match
    RxCommonSetInformation
   
   Library: Visual Studio 2019 Release */

undefined8 ***** RxCommonSetInformation(ushort *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****local_res18;
  longlong local_res20;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  iVar1 = *(int *)(lVar2 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x54);
  pppppuVar14 = (undefined8 *****)0x0;
  bVar7 = false;
  lVar3 = *(longlong *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    local_res18 = (undefined8 *****)0x0;
    local_res20 = 0;
    uVar12 = 0xec00;
  }
  else {
    local_res18 = *(undefined8 ******)(lVar3 + 0x18);
    local_res20 = *(longlong *)(lVar3 + 0x20);
    uVar12 = *(ushort *)local_res18;
  }
  ppppuVar4 = local_res18[0xb];
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x39,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x3a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  bVar5 = false;
  bVar6 = false;
  if (uVar12 != 0xec00) {
    if (0xec01 < uVar12) {
      if ((uVar12 < 0xec04) || (uVar12 == 0xecfc)) goto LAB_0002e279;
      if (uVar12 == 0xecfd) {
        pppppuVar13 = (undefined8 *****)0xc0000002;
        goto LAB_0002e723;
      }
    }
    DbgPrint("SetFile, Illegal TypeOfOpen = %08lx\n");
    pppppuVar13 = (undefined8 *****)0xc000000d;
    bVar5 = false;
    goto LAB_0002e723;
  }
LAB_0002e279:
  pppppuVar13 = pppppuVar14;
  bVar5 = bVar6;
  if ((iVar1 == 0x14) && (*(char *)(lVar2 + 0x21) != '\0')) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x42,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    if ((iVar1 == 0xd) || (iVar1 == 10)) {
      pppppuVar13 = local_res18;
      if (*(ushort *)local_res18 == 0xec02) {
        pppppuVar13 = pppppuVar14;
      }
      RxPurgeRelatedFobxs((longlong)ppppuVar4,param_1,'\x01',(short *)pppppuVar13);
      RxScavengeFobxsForNetRoot(ppppuVar4,pppppuVar13,'\x01');
      cVar8 = ExAcquireResourceExclusiveLite
                        (ppppuVar4 + 0x2a,
                         CONCAT71((int7)((ulonglong)pppppuVar13 >> 8),(char)(uVar10 >> 1)) &
                         0xffffffffffffff01);
      if (cVar8 != '\0') {
        bVar7 = true;
        goto LAB_0002e370;
      }
      *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
      pppppuVar13 = (undefined8 *****)0x103;
    }
    else {
LAB_0002e370:
      if ((*(byte *)((longlong)local_res18 + 0x74) & 4) == 0) {
        uVar9 = __RxAcquireFcb((longlong)local_res18,(longlong)param_1,1,0x2c8,
                               "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
        pppppuVar13 = (undefined8 *****)(ulonglong)uVar9;
        if (uVar9 == 0xc0000055) {
          *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
          pppppuVar13 = pppppuVar14;
        }
        else if (uVar9 == 0) {
          bVar5 = true;
          goto LAB_0002e3f4;
        }
      }
      else {
LAB_0002e3f4:
        if (iVar1 < 0x15) {
          if (iVar1 == 0x14) {
            RxSetEndOfFileInfo((longlong)param_1,param_2,(short *)local_res18);
            pppppuVar13 = (undefined8 *****)(ulonglong)extraout_EAX_00;
          }
          else if (iVar1 == 4) {
            uVar11 = RxSetBasicInfo((longlong)param_1,param_2,(short *)local_res18,local_res20);
            pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
          }
          else {
            if (iVar1 < 10) goto LAB_0002e6e5;
            if (iVar1 < 0xc) goto LAB_0002e63b;
            if (iVar1 == 0xd) {
              pppppuVar13 = pppppuVar14;
              if (**(char **)(param_2 + 0x18) != '\0') {
                cVar8 = MmFlushImageSection(local_res18[0x17] + 1,0);
                if (cVar8 == '\0') {
                  pppppuVar14 = (undefined8 *****)0xc0000121;
                }
                pppppuVar13 = pppppuVar14;
                if ((int)pppppuVar14 == 0) {
                  RxRemoveNameNetFcb((longlong)local_res18);
                  ExReleaseResourceLite(ppppuVar4 + 0x2a);
                  bVar7 = false;
                }
              }
              if ((int)pppppuVar13 == 0) {
                uVar11 = RxSetDispositionInfo((longlong)param_1,param_2,(longlong)local_res18);
                pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
              }
            }
            else if (iVar1 == 0xe) {
              uVar11 = RxSetPositionInfo(param_1,param_2);
              pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
            }
            else {
              if (iVar1 != 0x13) goto LAB_0002e6e5;
              RxSetAllocationInfo((longlong)param_1,param_2,(longlong)local_res18);
              pppppuVar13 = (undefined8 *****)(ulonglong)extraout_EAX;
            }
          }
        }
        else if (iVar1 < 0x17) {
LAB_0002e6e5:
          pppppuVar13 = (undefined8 *****)0xc000000d;
        }
        else if (iVar1 < 0x1a) {
          uVar10 = RxSetPipeInfo((longlong)param_1,param_2,(longlong)local_res18,local_res20);
          pppppuVar13 = (undefined8 *****)(ulonglong)uVar10;
        }
        else if (iVar1 == 0x1f) {
LAB_0002e63b:
          if ((uVar10 >> 1 & 1) == 0) {
            uVar11 = RxFsdPostRequest((longlong)param_1);
            pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
          }
          else {
            *(uint *)((longlong)local_res18 + 0x74) =
                 *(uint *)((longlong)local_res18 + 0x74) & 0xffbfffff;
            uVar11 = RxSetRenameInfo((longlong)param_1,param_2,(longlong)local_res18);
            pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
            if (((int)uVar11 == 0) && (iVar1 == 10)) {
              RxRemoveNameNetFcb((longlong)local_res18);
            }
          }
        }
        else if (iVar1 == 0x27) {
          cVar8 = MmCanFileBeTruncated(local_res18[0x17] + 1,0);
          if (cVar8 == '\0') {
            pppppuVar13 = (undefined8 *****)0xc0000243;
            goto LAB_0002e723;
          }
          uVar10 = RxSetSimpleInfo((longlong)param_1,param_2,(longlong)local_res18);
          pppppuVar13 = (undefined8 *****)(ulonglong)uVar10;
        }
        else {
          if (iVar1 != 0x28) goto LAB_0002e6e5;
          uVar10 = RxSetSimpleInfo((longlong)param_1,param_2,(longlong)local_res18);
          pppppuVar13 = (undefined8 *****)(ulonglong)uVar10;
        }
      }
    }
    if ((int)pppppuVar13 != 0) goto LAB_0002e723;
  }
  if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
    uVar11 = RxFsdPostRequest((longlong)param_1);
    pppppuVar13 = (undefined8 *****)(uVar11 & 0xffffffff);
  }
LAB_0002e723:
  if (bVar5) {
    __RxReleaseFcb((longlong)param_1,(longlong)local_res18,0x36e,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fileinfo.c");
  }
  if (bVar7) {
    ExReleaseResourceLite(ppppuVar4 + 0x2a);
  }
  return pppppuVar13;
}




/* Library Function - Single Match
    RxCommonFlushBuffers
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonFlushBuffers(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  short sVar5;
  short *local_res10;
  
  bVar2 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
  if (lVar1 == 0) {
    local_res10 = (short *)0x0;
    sVar5 = -0x1400;
  }
  else {
    local_res10 = *(short **)(lVar1 + 0x18);
    sVar5 = *local_res10;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x4f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((*(byte *)(param_1 + 0xa8) & 2) == 0) {
    uVar4 = RxFsdPostRequest(param_1);
  }
  else {
    if (sVar5 == -0x13fd) {
      uVar3 = __RxAcquireFcb((longlong)local_res10,param_1,1,0x73,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\flush.c");
      if (uVar3 == 0) {
        bVar2 = true;
        uVar3 = RxFlushFcbInSystemCache((longlong)local_res10,'\x01');
        if (-1 < (int)uVar3) {
          if (*(longlong *)(*(longlong *)(local_res10 + 0x9c) + 0x50) == 0) {
            uVar3 = 0xc0000002;
          }
          else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
            FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
            uVar3 = (**(code **)(*(longlong *)(local_res10 + 0x9c) + 0x50))(param_1);
          }
          else {
            uVar3 = 0xc0000120;
          }
        }
      }
    }
    else if (sVar5 == -0x1304) {
      uVar3 = __RxAcquireFcb((longlong)local_res10,param_1,1,0x88,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\flush.c");
      if (uVar3 == 0) {
        bVar2 = true;
        if (*(longlong *)(*(longlong *)(local_res10 + 0x9c) + 0x50) == 0) {
          uVar3 = 0xc0000002;
        }
        else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
          FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
          uVar3 = (**(code **)(*(longlong *)(local_res10 + 0x9c) + 0x50))(param_1);
        }
        else {
          uVar3 = 0xc0000120;
        }
      }
    }
    else {
      uVar3 = 0xc0000010;
    }
    if (bVar2) {
      __RxReleaseFcb(param_1,(longlong)local_res10,0x9c,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\flush.c")
      ;
    }
    uVar4 = (ulonglong)uVar3;
  }
  return uVar4;
}




/* Library Function - Single Match
    TranslateSisFsctlName
   
   Library: Visual Studio 2019 Release */

int TranslateSisFsctlName(undefined8 param_1,undefined8 param_2,longlong param_3,ushort *param_4)

{
  char cVar1;
  int iVar2;
  wchar_t *_Src;
  wchar_t *pwVar3;
  int unaff_EBX;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint local_88 [2];
  undefined8 local_80;
  ushort local_78;
  short local_76;
  wchar_t *local_70;
  ushort local_68;
  undefined2 local_66;
  wchar_t *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  ushort *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pwVar5 = (wchar_t *)0x0;
  RtlInitUnicodeString(&local_78,param_1);
  if (local_70 != (wchar_t *)0x0) {
    if (*local_70 == L'\\') {
      pwVar3 = local_70 + 1;
      _Src = local_70;
      if (*pwVar3 == L'\\') {
LAB_0002ed51:
        local_78 = local_78 + (short)((longlong)pwVar3 - (longlong)local_70 >> 1) * -2;
        local_70 = pwVar3;
        cVar1 = RtlPrefixUnicodeString(param_4,&local_78,1);
        if (((cVar1 != '\0') && (pwVar3[*param_4 >> 1] == L'\\')) &&
           ((pwVar3 + (*param_4 >> 1))[1] != L'\0')) {
          RtlCreateUnicodeString(param_2);
        }
      }
      else {
        do {
          while( true ) {
            _Src = wcschr(_Src + 1,L'\\');
            local_68 = local_78;
            if (_Src != (wchar_t *)0x0) {
              local_68 = (short)((longlong)_Src - (longlong)local_70 >> 1) * 2;
            }
            local_60 = local_70;
            uVar6 = ((uint)local_78 - (uint)local_68) + 2;
            local_48 = &local_68;
            local_58[0] = 0x30;
            local_50 = 0;
            local_40 = 0x240;
            local_38 = 0;
            local_30 = 0;
            iVar2 = ZwOpenDirectoryObject(&local_80,2,local_58);
            if (-1 < iVar2) break;
            if (iVar2 != -0x3fffffdc) goto LAB_0002edaa;
            iVar2 = ZwOpenSymbolicLinkObject(&local_80,1,local_58);
            if (iVar2 < 0) {
              if ((((iVar2 == -0x3fffffdc) &&
                   (cVar1 = RtlPrefixUnicodeString(param_3 + 0x170,&local_78,1), cVar1 != '\0')) &&
                  (pwVar3 = (wchar_t *)
                            ((ulonglong)(*(ushort *)(param_3 + 0x170) >> 1) + (longlong)local_70),
                  *pwVar3 == L'\\')) &&
                 ((pwVar3[1] != L';' ||
                  (pwVar3 = wcschr(pwVar3 + 1,L'\\'), pwVar3 != (wchar_t *)0x0))))
              goto LAB_0002ed51;
              goto LAB_0002edaa;
            }
            local_66 = 0;
            iVar2 = ZwQuerySymbolicLinkObject(local_80,&local_68,local_88);
            if ((iVar2 < 0) && (iVar2 != -0x3fffffdd)) {
LAB_0002ecab:
              ZwClose(local_80);
              goto LAB_0002edaa;
            }
            uVar4 = local_88[0] + uVar6;
            if (0xfffe < uVar4) goto LAB_0002edaa;
            pwVar3 = (wchar_t *)ExAllocatePoolWithTag(0x101,uVar4,0x734d7852);
            if (pwVar3 == (wchar_t *)0x0) goto LAB_0002ecab;
            local_66 = (undefined2)local_88[0];
            local_60 = pwVar3;
            iVar2 = ZwQuerySymbolicLinkObject(local_80,&local_68,0);
            ZwClose();
            if ((iVar2 < 0) || (local_88[0] < local_68)) {
              ExFreePoolWithTag(pwVar3,0);
              goto LAB_0002edaa;
            }
            if (_Src != (wchar_t *)0x0) {
              memcpy((void *)((ulonglong)local_68 + (longlong)pwVar3),_Src,(ulonglong)uVar6);
            }
            local_76 = (short)uVar4;
            local_78 = local_76 - 2;
            local_70 = pwVar3;
            if (pwVar5 != (wchar_t *)0x0) {
              ExFreePoolWithTag(pwVar5,0);
            }
            pwVar5 = pwVar3;
            _Src = pwVar3;
            if (*pwVar3 != L'\\') goto LAB_0002edaa;
          }
          ZwClose(local_80);
        } while (_Src != (wchar_t *)0x0);
      }
    }
LAB_0002edaa:
    if (pwVar5 != (wchar_t *)0x0) {
      ExFreePoolWithTag(pwVar5,0);
    }
  }
  return unaff_EBX;
}




/* Library Function - Single Match
    RxLowIoFsCtlShellCompletion
   
   Library: Visual Studio 2019 Release */

int RxLowIoFsCtlShellCompletion(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0x1bc) != 0x11400c) {
    if ((iVar1 == -0x7ffffffb) || (iVar1 == 0)) {
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0xb8);
    }
    goto LAB_0002eef7;
  }
  if ((iVar1 != 0) && (iVar1 != -0x7ffffffb)) goto LAB_0002eef7;
  if (*(int *)(*(longlong *)(param_1 + 0x1d8) + 4) == 0) {
    RxInitiateOrContinueThrottling((longlong *)(*(longlong *)(param_1 + 0x40) + 0xb0));
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      uVar3 = 0x52;
LAB_0002ee96:
      WmlTrace(uVar3,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0xb8) = 0;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      uVar3 = 0x53;
      goto LAB_0002ee96;
    }
  }
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0xb8);
LAB_0002eef7:
  *(int *)(lVar2 + 0x30) = iVar1;
  return iVar1;
}




/* Library Function - Single Match
    RxLowIoFsCtlShell
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoFsCtlShell(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  bool bVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  iVar1 = *(int *)(lVar2 + 0x18);
  RxInitializeLowIoContext(param_1,6,(undefined2 *)(param_1 + 0x198));
  if ((*(char *)(lVar2 + 1) == '\0') && (iVar1 == 0x11400c)) {
    puVar3 = *(ulonglong **)(param_2 + 0x18);
    if ((puVar3 == (ulonglong *)0x0) || (*(uint *)(lVar2 + 8) < 0x10)) {
      *(undefined4 *)(param_1 + 0xb0) = 0xc000000d;
    }
    else {
      FUN_0001c430(puVar3,0,(ulonglong)*(uint *)(lVar2 + 8));
      bVar4 = RxShouldRequestBeThrottled((longlong *)(param_4 + 0xb0));
      if ((bVar4) && (DAT_00020524 != 0)) {
        *(undefined8 *)(param_2 + 0x38) = 0x10;
        *(undefined4 *)((longlong)puVar3 + 4) = 0;
        *(undefined4 *)(puVar3 + 1) = 0xffffffff;
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *(undefined4 *)puVar3 = 3;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        return (ulonglong)*(uint *)(param_1 + 0xb0);
      }
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x51,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
  }
  uVar5 = RxLowIoSubmit(param_1,param_2,param_3,RxLowIoFsCtlShellCompletion);
  return uVar5;
}




void FUN_0002f084(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  short *psVar10;
  char cVar11;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStackY_138 [32];
  longlong local_d0;
  uint local_b8;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  short *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_38;
  
  local_38 = DAT_00020100 ^ (ulonglong)auStackY_138;
  lVar5 = *(longlong *)(param_2 + 0xb8);
  lVar6 = *(longlong *)(lVar5 + 0x30);
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (lVar6 == 0) {
    local_80 = (short *)0x0;
    local_d0 = 0;
  }
  else {
    local_80 = *(short **)(lVar6 + 0x18);
    local_d0 = *(longlong *)(lVar6 + 0x20);
  }
  psVar10 = local_80;
  local_a8 = lVar5;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x50,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((*(char *)(param_2 + 0x40) == '\x01') && ((*(uint *)(param_1 + 0xa8) >> 9 & 1) == 0)) {
    if ((uVar1 & 3) < 3) {
      local_b8 = 0;
    }
    else if ((uVar1 & 3) == 3) {
      local_98 = *(longlong *)(lVar5 + 0x20);
      lVar6 = *(longlong *)(param_2 + 0x70);
      local_88 = *(int *)(lVar5 + 8);
      if (local_98 == 0) {
        local_b8 = 0;
        if (*(int *)(lVar5 + 0x10) != 0) {
          local_b8 = 0xc00000e8;
        }
      }
      else {
        uVar2 = *(undefined4 *)(lVar5 + 0x10);
        ProbeForRead(local_98,uVar2,1);
        ProbeForWrite(local_98,uVar2,1);
        local_b8 = 0;
      }
      iVar14 = local_88;
      if (local_b8 == 0) {
        if (lVar6 == 0) {
          if (local_88 != 0) {
            local_b8 = 0xc00000e8;
          }
        }
        else {
          ProbeForRead(lVar6,local_88,1);
          ProbeForWrite(lVar6,iVar14,1);
        }
      }
    }
    if (local_b8 != 0) goto LAB_0002f989;
  }
  bVar15 = false;
  if ((*(char *)(lVar5 + 1) != '\0') && (*(char *)(lVar5 + 1) != '\x04')) {
    bVar15 = true;
    goto LAB_0002f942;
  }
  if (uVar1 < 0x90021) {
    if (uVar1 == 0x90020) {
LAB_0002f902:
      local_b8 = 0xc0000002;
      if (*psVar10 != -0x14e1) {
        local_b8 = 0xc000000d;
      }
      bVar15 = false;
      goto LAB_0002f942;
    }
    if (uVar1 < 0x9000d) {
      if (uVar1 != 0x9000c) {
        if ((uVar1 == 0x60194) || (uVar1 == 0x60198)) {
          if ((*(byte *)(*(longlong *)(*(longlong *)(psVar10 + 0x2c) + 8) + 0x38) & 0x10) == 0) {
            local_b8 = 0xc000026d;
          }
          else {
            bVar15 = true;
          }
        }
        else {
          if (((uVar1 == 0x90000) || (uVar1 == 0x90004)) || (uVar1 == 0x90008)) goto LAB_0002f8fb;
          bVar15 = true;
        }
        goto LAB_0002f942;
      }
    }
    else if ((uVar1 != 0x90010) && (uVar1 != 0x90014)) {
      if ((uVar1 != 0x90018) && (uVar1 != 0x9001c)) {
        bVar15 = true;
        goto LAB_0002f942;
      }
      goto LAB_0002f902;
    }
LAB_0002f8fb:
    local_b8 = 0xc0000002;
  }
  else {
    if ((uVar1 == 0x90028) || (uVar1 == 0x90030)) goto LAB_0002f902;
    if (uVar1 == 0x90050) goto LAB_0002f8fb;
    if (uVar1 == 0x900c4) {
LAB_0002f838:
      local_b8 = __RxAcquireFcb((longlong)psVar10,param_1,1,0x174,
                                "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fsctrl.c");
      if ((local_b8 == 0xc0000055) && ((*(byte *)(param_1 + 0xa8) & 2) == 0)) {
        *(undefined1 *)(param_1 + 0x1b) = 1;
      }
      if (local_b8 != 0) goto LAB_0002f961;
      *(uint *)(psVar10 + 0x3a) = *(uint *)(psVar10 + 0x3a) & 0xffbfffff;
      if (uVar1 == 0x900c4) {
        if (*psVar10 == -0x13fd) {
          *(uint *)(psVar10 + 0x48) = *(uint *)(psVar10 + 0x48) | 0x200;
          *(undefined4 *)(*(longlong *)(local_d0 + 8) + 0x5c) = 0;
          *(uint *)(psVar10 + 0x3a) = *(uint *)(psVar10 + 0x3a) | 0x10;
          RxChangeBufferingState(*(longlong *)(local_d0 + 8),0,'\0');
        }
        else {
          local_b8 = 0xc00000bb;
        }
      }
      __RxReleaseFcb(param_1,(longlong)psVar10,0x19b,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fsctrl.c");
      bVar15 = true;
    }
    else {
      if (uVar1 == 0x90100) {
        puVar7 = *(uint **)(param_2 + 0x18);
        uVar1 = *(uint *)(lVar5 + 0x10);
        local_a8 = 0;
        local_a0 = (void *)0x0;
        local_98 = 0;
        local_90 = (void *)0x0;
        if ((puVar7 == (uint *)0x0) || (uVar1 < 0x10)) {
          local_b8 = 0xc000000d;
        }
        else {
          uVar3 = *puVar7;
          lVar6 = (longlong)puVar7 + (ulonglong)(uVar3 >> 1) * 2 + 0xc;
          if ((((uVar1 < uVar3) || (uVar4 = puVar7[1], uVar1 < uVar4)) || (uVar3 < 4)) ||
             (((uVar4 < 4 || (uVar1 < uVar4 + 0xc + uVar3)) ||
              ((*(short *)(lVar6 + -2) != 0 ||
               (*(short *)(lVar6 + -2 + (ulonglong)(uVar4 >> 1) * 2) != 0)))))) {
            local_b8 = 0xc000000d;
          }
          else {
            iVar14 = TranslateSisFsctlName
                               (puVar7 + 3,&local_a8,*(longlong *)(psVar10 + 0x98),
                                (ushort *)(*(longlong *)(psVar10 + 0x2c) + 0x108));
            local_b8 = extraout_EAX;
            if (-1 < (int)extraout_EAX) {
              TranslateSisFsctlName
                        (CONCAT44((int)((ulonglong)lVar6 >> 0x20),iVar14),&local_98,
                         *(longlong *)(psVar10 + 0x98),
                         (ushort *)(*(longlong *)(psVar10 + 0x2c) + 0x108));
              local_b8 = extraout_EAX_00;
              if (-1 < (int)extraout_EAX_00) {
                puVar12 = puVar7;
                if (puVar7[1] + *puVar7 < (uint)local_98._2_2_ + (uint)local_a8._2_2_) {
                  iVar14 = (uint)local_98._2_2_ + (uint)local_a8._2_2_ + 0xc;
                  puVar12 = (uint *)ExAllocatePoolWithTag(0,iVar14,0x734d7852);
                  if (puVar12 == (uint *)0x0) {
                    local_b8 = 0xc000009a;
                    goto LAB_0002f961;
                  }
                  puVar12[2] = puVar7[2];
                  ExFreePoolWithTag(puVar7,0);
                  *(uint **)(param_2 + 0x18) = puVar12;
                  *(int *)(lVar5 + 0x10) = iVar14;
                }
                uVar13 = (ulonglong)local_a8._2_2_;
                *puVar12 = (uint)local_a8._2_2_;
                puVar12[1] = (uint)local_98._2_2_;
                memcpy(puVar12 + 3,local_a0,uVar13);
                memcpy((void *)((longlong)(puVar12 + 3) + (uVar13 & 0xfffffffffffffffe)),local_90,
                       (ulonglong)puVar12[1]);
                RtlFreeUnicodeString(&local_a8);
                RtlFreeUnicodeString(&local_98);
                bVar15 = true;
                goto LAB_0002f942;
              }
              RtlFreeUnicodeString(&local_a8);
            }
          }
        }
        goto LAB_0002f961;
      }
      if (uVar1 == 0x980c8) {
        if (*(uint *)(lVar5 + 0x10) < 0x10) {
          local_b8 = 0xc000000d;
        }
        else {
          plVar8 = *(longlong **)(param_2 + 0x18);
          if (((*plVar8 < 0) || (plVar8[1] < 0)) || (local_b8 = 0, plVar8[1] < *plVar8)) {
            local_b8 = 0xc000000d;
          }
          if ((local_b8 == 0) &&
             (cVar11 = MmCanFileBeTruncated(*(longlong *)(psVar10 + 0x5c) + 8,0), cVar11 == '\0')) {
            local_b8 = 0xc0000243;
          }
        }
        bVar15 = local_b8 == 0;
      }
      else {
        if (uVar1 == 0x9c040) goto LAB_0002f838;
        if (uVar1 == 0x1400e8) {
          puVar7 = *(uint **)(param_2 + 0x18);
          if (((*(uint *)(lVar5 + 8) < 0x14) || (puVar7 == (uint *)0x0)) ||
             (*(char *)(*(longlong *)(psVar10 + 0x2c) + 0x2d) != '\0')) {
            local_b8 = 0xc000000d;
          }
          else {
            *(undefined4 *)(param_1 + 0x170) = 8;
            *(undefined8 **)(param_1 + 0x178) = &local_78;
            *(undefined4 *)(param_1 + 0x180) = 0x40;
            if (*(longlong *)(*(longlong *)(psVar10 + 0x9c) + 0x120) == 0) {
              local_b8 = 0xc0000002;
            }
            else {
              if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
                FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
                local_b8 = (**(code **)(*(longlong *)(psVar10 + 0x9c) + 0x120))(param_1);
              }
              else {
                local_b8 = 0xc0000120;
              }
              if ((local_b8 == 0) || (local_b8 == 0x80000005)) {
                lVar5 = *(longlong *)(psVar10 + 0x2c);
                *(undefined8 *)(lVar5 + 0x68) = local_78;
                *(undefined8 *)(lVar5 + 0x70) = uStack_70;
                uVar9 = *(undefined8 *)(*(longlong *)(psVar10 + 0x2c) + 0x70);
                *(undefined8 *)(puVar7 + 1) = *(undefined8 *)(*(longlong *)(psVar10 + 0x2c) + 0x68);
                *(undefined8 *)(puVar7 + 3) = uVar9;
                *puVar7 = *(byte *)(*(longlong *)(psVar10 + 0x2c) + 0x20) >> 1 & 1;
                *(undefined8 *)(param_2 + 0x38) = 0x14;
                local_b8 = 0;
              }
            }
          }
          *(uint *)(param_2 + 0x30) = local_b8;
          bVar15 = false;
        }
        else {
          if (uVar1 == 0x140390) {
            if (*psVar10 == -0x13fd) {
              local_b8 = __RxAcquireFcb((longlong)psVar10,param_1,1,0x1a7,
                                        "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fsctrl.c");
              if ((local_b8 == 0xc0000055) && ((*(byte *)(param_1 + 0xa8) & 2) == 0)) {
                *(undefined1 *)(param_1 + 0x1b) = 1;
              }
              if (local_b8 == 0) {
                *(uint *)(psVar10 + 0x3a) = *(uint *)(psVar10 + 0x3a) | 0x10;
                RxChangeBufferingState(*(longlong *)(local_d0 + 8),0,'\0');
                __RxReleaseFcb(param_1,(longlong)psVar10,0x1bd,
                               "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\fsctrl.c");
              }
            }
            else {
              local_b8 = 0xc00000bb;
            }
            goto LAB_0002f961;
          }
          bVar15 = true;
        }
      }
    }
LAB_0002f942:
    if (bVar15) {
      uVar13 = RxLowIoFsCtlShell(param_1,param_2,(longlong)psVar10,local_d0);
      local_b8 = (uint)uVar13;
    }
  }
LAB_0002f961:
  if (*(char *)(param_1 + 0x1b) == '\0') {
    if (local_b8 == 0x103) {
      RxDereferenceAndDeleteRxContext_Real(param_1);
    }
  }
  else {
    RxFsdPostRequest(param_1);
  }
LAB_0002f989:
  FUN_00015570(local_38 ^ (ulonglong)auStackY_138);
  return;
}




/* Library Function - Single Match
    RxFinalizeLockList
   
   Library: Visual Studio 2019 Release */

void RxFinalizeLockList(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1b8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x67,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ExFreePoolWithTag(puVar1,0);
    puVar1 = puVar2;
  }
  return;
}




/* Library Function - Single Match
    RxUnlockOperation
   
   Library: Visual Studio 2019 Release */

void RxUnlockOperation(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(100,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x19a) & 2) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x38) + 0x74) >> 0x15 & 1) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x1b8);
    plVar2 = (longlong *)ExAllocatePoolWithTag(1,0x28,0x4c4c7852);
    if (plVar2 != (longlong *)0x0) {
      if (lVar1 == 0) {
        *(undefined4 *)(plVar2 + 1) = 1;
      }
      else {
        *(int *)(plVar2 + 1) = *(int *)(lVar1 + 8) + 1;
      }
      *plVar2 = lVar1;
      plVar2[2] = *param_2;
      plVar2[3] = param_2[1];
      *(undefined4 *)((longlong)plVar2 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(longlong **)(param_1 + 0x1b8) = plVar2;
    }
  }
  return;
}




/* Library Function - Single Match
    RxLowIoLockControlShellCompletion
   
   Library: Visual Studio 2019 Release */

int RxLowIoLockControlShellCompletion(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  iVar1 = *(int *)(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    uVar6 = 0;
    WmlTrace(0x65,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*(short *)(param_1 + 0x198) == 5) {
    RxFinalizeLockList(param_1);
  }
  if ((*(byte *)(param_1 + 0x19a) & 1) == 0) {
    if (((iVar1 != 0) && (*(char *)(param_1 + 0x18) == '\x11')) &&
       (*(char *)(param_1 + 0x19) == '\x01')) {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + 0x30);
      if ((*(byte *)(param_1 + 400) & 0x20) == 0) {
        *(void **)(param_1 + 0x1b0) = SystemReserved1[0xf];
        RxAcquireSharedFcbResourceInMRxEx(param_1,lVar3);
        *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x20;
      }
      uVar5 = IoGetRequestorProcess(lVar2);
      FsRtlFastUnlockSingle
                (lVar3 + 0x1c0,uVar4,param_1 + 0x1c8,param_1 + 0x1b8,uVar5,
                 CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x1d0)),0,1);
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x66,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
    LOCK();
    *(int *)(lVar3 + 0x84) = *(int *)(lVar3 + 0x84) + -1;
    UNLOCK();
    if ((*(byte *)(param_1 + 400) & 0x20) != 0) {
      __RxReleaseFcbForThread
                (param_1,lVar3,*(undefined8 *)(param_1 + 0x1b0),0x43b,
                 "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
      *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
    }
  }
  return iVar1;
}




/* Library Function - Single Match
    RxLowIoLockControlShell
   
   Library: Visual Studio 2019 Release */

void RxLowIoLockControlShell(ulonglong param_1,longlong param_2,longlong param_3)

{
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x68,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (((*(uint *)(param_1 + 0xa8) >> 0xc & 1) != 0) && ((*(uint *)(param_1 + 0xa8) >> 9 & 1) != 0))
  {
    *(ulonglong *)(param_1 + 0x1b0) = param_1 | 3;
    ExSetResourceOwnerPointer(*(undefined8 *)(param_3 + 8),param_1 | 3);
  }
  RxLowIoSubmit(param_1,param_2,param_3,RxLowIoLockControlShellCompletion);
  return;
}




/* Library Function - Single Match
    RxLockOperationCompletion
   
   Library: Visual Studio 2019 Release */

ulonglong RxLockOperationCompletion(ulonglong param_1,longlong param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint local_res8;
  
  local_res8 = *(uint *)(param_2 + 0x30);
  lVar6 = *(longlong *)(param_2 + 0xb8);
  lVar7 = *(longlong *)(param_1 + 0x38);
  puVar1 = (undefined2 *)(param_1 + 0x198);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x59,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  LOCK();
  pvVar3 = *(void **)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x70) = -0x55555556;
  UNLOCK();
  if ((pvVar3 != SystemReserved1[0xf]) && (pvVar3 != (void *)0xffffffffaaaaaaaa)) {
    if (local_res8 == 0) {
      LOCK();
      *(code **)(param_2 + 0x68) = RxCancelRoutine;
      UNLOCK();
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x5b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x1000;
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x40;
    if ((*(byte *)(param_1 + 400) & 0x20) != 0) {
      __RxReleaseFcb(param_1,lVar7,0x1d2,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
      *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
    }
    *(code **)(param_1 + 0xf0) = RxLockOperationCompletionWithAcquire;
    uVar10 = RxFsdPostRequest(param_1);
    return uVar10;
  }
  if ((*(byte *)(param_1 + 400) & 0x20) == 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x100;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x5c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    return 0;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x5d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  UNLOCK();
  if ((int)local_res8 < 0) {
    if ((*(uint *)(lVar7 + 0x74) >> 0x15 & 1) != 0) {
      LOCK();
      *(int *)(lVar7 + 0x250) = *(int *)(lVar7 + 0x250) + -1;
      UNLOCK();
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x5e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    goto LAB_0003032d;
  }
  if ((*(uint *)(lVar7 + 0x74) >> 0x15 & 1) != 0) {
    LOCK();
    *(int *)(lVar7 + 0x250) = *(int *)(lVar7 + 0x250) + -1;
    UNLOCK();
    if (DAT_000204e4 < 4) {
      return 0;
    }
    if ((DAT_000204e0 & 2) == 0) {
      return 0;
    }
    WmlTrace(0x5f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    return 0;
  }
  if ((*(uint *)(param_1 + 400) >> 9 & 1) != 0) {
    ExAcquireResourceExclusiveLite(*(undefined8 *)(lVar7 + 600),1);
    plVar11 = *(longlong **)(lVar7 + 0x248);
    if (plVar11 != (longlong *)0x0) {
      bVar9 = false;
      do {
        if (((plVar11[2] == *(longlong *)(lVar6 + 0x18)) &&
            (plVar11[1] == **(longlong **)(lVar6 + 8))) &&
           ((int)plVar11[3] == *(int *)(lVar6 + 0x10))) {
          bVar9 = true;
          break;
        }
        plVar11 = (longlong *)*plVar11;
      } while (plVar11 != (longlong *)0x0);
      LOCK();
      piVar2 = (int *)(lVar7 + 0x250);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        while (*(longlong *)(lVar7 + 0x248) != 0) {
          puVar8 = *(undefined8 **)(lVar7 + 0x248);
          *(undefined8 *)(lVar7 + 0x248) = *puVar8;
          ExFreePoolWithTag(puVar8,0);
        }
      }
      if (bVar9) {
        if (*(char *)(lVar6 + 1) == '\x01') {
LAB_00030255:
          local_res8 = 0;
          ExReleaseResourceLite(*(undefined8 *)(lVar7 + 600));
          goto LAB_0003032d;
        }
      }
      else if (*(char *)(lVar6 + 1) == '\x02') goto LAB_00030255;
    }
    ExReleaseResourceLite(*(undefined8 *)(lVar7 + 600));
  }
  RxInitializeLowIoContext(param_1,4,puVar1);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar6 + 0x18);
  uVar5 = *(undefined4 *)(lVar6 + 0x10);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar5;
  cVar4 = *(char *)(lVar6 + 1);
  if (cVar4 == '\x01') {
    if ((*(byte *)(lVar6 + 2) & 2) == 0) {
      *puVar1 = 2;
    }
    else {
      *puVar1 = 3;
    }
    *(uint *)(param_1 + 0x1c0) = (uint)*(byte *)(lVar6 + 2);
LAB_00030296:
    *(undefined8 *)(param_1 + 0x1b8) = **(undefined8 **)(lVar6 + 8);
  }
  else {
    if (cVar4 == '\x02') goto LAB_00030296;
    if ((byte)(cVar4 - 3U) < 2) {
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        return 0;
      }
      *puVar1 = 5;
    }
  }
  uVar10 = RxLowIoLockControlShell(param_1,param_2,lVar7);
  if ((int)uVar10 != 0x103) {
    return uVar10;
  }
  if ((*(byte *)(param_1 + 400) & 0x40) == 0) {
    return uVar10;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x60,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  RxDereferenceAndDeleteRxContext_Real(param_1);
  local_res8 = 0x103;
LAB_0003032d:
  return (ulonglong)local_res8;
}




/* Library Function - Single Match
    RxLockOperationCompletionWithAcquire
   
   Library: Visual Studio 2019 Release */

ulonglong RxLockOperationCompletionWithAcquire(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  byte local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_res10 = 0;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x61,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  uVar2 = __RxAcquireFcb(lVar1,param_1,2,0x2f5,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
  if (uVar2 == 0xc0000055) {
    *(code **)(param_1 + 0xf0) = RxLockOperationCompletionWithAcquire;
    uVar3 = RxFsdPostRequest(param_1);
  }
  else if (uVar2 == 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x20;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x62,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
    uVar3 = RxLockOperationCompletion(param_1,param_2);
    if ((int)uVar3 != 0x103) {
      local_res10 = (byte)(*(uint *)(param_1 + 400) >> 5) & 1;
    }
    if (local_res10 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x84) = *(int *)(lVar1 + 0x84) + -1;
      UNLOCK();
      if (((byte)*(undefined8 *)(param_1 + 0x1b0) & 3) == 3) {
        __RxReleaseFcbForThread
                  (param_1,lVar1,*(undefined8 *)(param_1 + 0x1b0),0x330,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
      }
      else {
        __RxReleaseFcb(param_1,lVar1,0x332,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
      }
      *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
    }
    uVar3 = uVar3 & 0xffffffff;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(99,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxDereferenceAndDeleteRxContext_Real(param_1);
  }
  else {
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    UNLOCK();
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxCommonLockControl
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonLockControl(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short *local_res18;
  uint local_64;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    local_res18 = (short *)0x0;
    sVar5 = -0x1400;
  }
  else {
    local_res18 = *(short **)(*(longlong *)(lVar1 + 0x30) + 0x18);
    sVar5 = *local_res18;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x54,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (sVar5 != -0x13fd) {
    return 0xc000000d;
  }
  uVar2 = __RxAcquireFcb((longlong)local_res18,param_1,2,0x79,
                         "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
  if (uVar2 == 0xc0000055) {
    uVar3 = RxFsdPostRequest(param_1);
    return uVar3;
  }
  if (uVar2 != 0) {
    return CONCAT44(extraout_var,uVar2);
  }
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x20;
  LOCK();
  *(int *)(local_res18 + 0x42) = *(int *)(local_res18 + 0x42) + 1;
  UNLOCK();
  if ((*(uint *)(local_res18 + 0x3a) >> 0x15 & 1) != 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x200;
    LOCK();
    *(int *)(local_res18 + 0x128) = *(int *)(local_res18 + 0x128) + 1;
    UNLOCK();
  }
  if (*(char *)(lVar1 + 1) == '\x01') {
    if ((*(longlong *)(local_res18 + 0x9c) == 0) ||
       (*(code **)(*(longlong *)(local_res18 + 0x9c) + 0x88) == (code *)0x0)) {
      local_64 = 0;
    }
    else {
      local_64 = (**(code **)(*(longlong *)(local_res18 + 0x9c) + 0x88))
                           (local_res18,lVar1 + 0x18,*(undefined8 *)(lVar1 + 8),
                            *(undefined1 *)(lVar1 + 2));
    }
    uVar3 = (ulonglong)local_64;
    if (local_64 != 0) goto LAB_00030aeb;
    if ((*(byte *)(lVar1 + 2) & 1) == 0) {
      __RxReleaseFcb(param_1,(longlong)local_res18,0xb4,
                     "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
      *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
    }
  }
  else if ((byte)(*(char *)(lVar1 + 1) - 3U) < 2) {
    *(ushort *)(param_1 + 0x19a) = *(ushort *)(param_1 + 0x19a) | 2;
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x55,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  LOCK();
  *(void **)(param_1 + 0x70) = SystemReserved1[0xf];
  UNLOCK();
  uVar2 = FsRtlProcessFileLock(local_res18 + 0xe0,param_2,param_1);
  uVar3 = (ulonglong)uVar2;
  if ((*(uint *)(param_1 + 400) >> 8 & 1) != 0) {
    uVar3 = 0;
  }
  local_64 = (uint)uVar3;
  if ((local_64 == 0) && ((*(uint *)(param_1 + 400) & 0x20) == 0)) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x56,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    LOCK();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    UNLOCK();
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x40;
    uVar4 = RxLockOperationCompletionWithAcquire(param_1,param_2);
    local_64 = (uint)uVar4;
    uVar3 = uVar4 & 0xffffffff;
    if (local_64 != 0x103) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x57,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      LOCK();
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      UNLOCK();
      uVar3 = uVar4 & 0xffffffff;
    }
  }
  else if (local_64 == 0x103) {
    LOCK();
    *(undefined8 *)(param_1 + 0x70) = 0;
    UNLOCK();
  }
LAB_00030aeb:
  if ((int)uVar3 == 0x103) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x58,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxDereferenceAndDeleteRxContext_Real(param_1);
  }
  else if ((*(byte *)(param_1 + 400) & 0x20) != 0) {
    LOCK();
    *(int *)(local_res18 + 0x42) = *(int *)(local_res18 + 0x42) + -1;
    UNLOCK();
    if (((byte)*(undefined8 *)(param_1 + 0x1b0) & 3) == 3) {
      __RxReleaseFcbForThread
                (param_1,(longlong)local_res18,*(undefined8 *)(param_1 + 0x1b0),0x135,
                 "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
    }
    else {
      __RxReleaseFcb(param_1,(longlong)local_res18,0x139,
                     "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\lockctrl.c");
    }
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xffffffdf;
    uVar3 = (ulonglong)local_64;
  }
  return uVar3;
}




/* Library Function - Single Match
    RxCommonSetVolumeInformation
   
   Library: Visual Studio 2019 Release */

undefined8 RxCommonSetVolumeInformation(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res20;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    local_res20 = 0;
  }
  else {
    local_res20 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x18);
  }
  if (local_res20 == 0) {
    uVar4 = 0xc000000d;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 8);
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x8a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x8b,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
    }
    *(undefined4 *)(param_1 + 0x170) = uVar2;
    *(undefined8 *)(param_1 + 0x178) = uVar4;
    *(undefined4 *)(param_1 + 0x180) = uVar1;
    if (*(longlong *)(*(longlong *)(local_res20 + 0x138) + 0x128) == 0) {
      uVar4 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar4 = (**(code **)(*(longlong *)(local_res20 + 0x138) + 0x128))(param_1);
    }
    else {
      uVar4 = 0xc0000120;
    }
  }
  return uVar4;
}




/* Library Function - Single Match
    RxCommonQueryVolumeInformation
   
   Library: Visual Studio 2019 Release */

ulonglong RxCommonQueryVolumeInformation(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_res20;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  iVar1 = *(int *)(lVar3 + 8);
  uVar2 = *(undefined4 *)(lVar3 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    local_res20 = 0;
  }
  else {
    local_res20 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x18);
  }
  if (local_res20 == 0) {
    uVar6 = 0xc000000d;
  }
  else {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x88,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x89,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
    }
    *(undefined4 *)(param_1 + 0x170) = uVar2;
    *(undefined8 *)(param_1 + 0x178) = uVar4;
    *(int *)(param_1 + 0x180) = iVar1;
    if (*(longlong *)(*(longlong *)(local_res20 + 0x138) + 0x120) == 0) {
      uVar6 = 0xc0000002;
    }
    else if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
      uVar5 = (**(code **)(*(longlong *)(local_res20 + 0x138) + 0x120))(param_1);
      uVar6 = (ulonglong)uVar5;
    }
    else {
      uVar6 = 0xc0000120;
    }
    if (*(char *)(param_1 + 0x1b) == '\0') {
      *(ulonglong *)(param_2 + 0x38) = (ulonglong)(uint)(iVar1 - *(int *)(param_1 + 0x180));
    }
    else {
      uVar6 = RxFsdPostRequest(param_1);
      uVar6 = uVar6 & 0xffffffff;
    }
  }
  return uVar6;
}




/* Library Function - Single Match
    __RxWriteReleaseResources
   
   Library: Visual Studio 2019 Release */

void __RxWriteReleaseResources(longlong param_1,longlong param_2,int param_3)

{
  if (*(char *)(param_1 + 0xac) != '\0') {
    if (param_3 == 0) {
      __RxReleaseFcb(param_1,param_2,0xa5,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    else {
      __RxReleaseFcbForThread
                (param_1,param_2,*(undefined8 *)(param_1 + 0x1b0),0xa1,
                 "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    *(undefined1 *)(param_1 + 0xac) = 0;
  }
  if (*(char *)(param_1 + 0xad) != '\0') {
    if (param_3 == 0) {
      RxTrackPagingIoResource(param_2,3,0xb4,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
      *(undefined1 *)(param_1 + 0xad) = 0;
      ExReleaseResourceLite(*(undefined8 *)(param_2 + 0x10));
    }
    else {
      RxTrackPagingIoResource(param_2,3,0xb0,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
      *(undefined1 *)(param_1 + 0xad) = 0;
      ExReleaseResourceForThreadLite
                (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x1b0));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxLowIoWriteShellCompletion
   
   Library: Visual Studio 2019 Release */

int RxLowIoWriteShellCompletion(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  longlong local_res18;
  longlong local_res20;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x30);
  uVar7 = *(uint *)(lVar5 + 0x10) >> 1;
  uVar8 = *(uint *)(param_1 + 400) >> 1;
  bVar9 = *(byte *)(param_1 + 400) & 1;
  if (lVar3 == 0) {
    lVar6 = 0;
    local_res18 = 0;
  }
  else {
    local_res18 = *(longlong *)(lVar3 + 0x20);
    lVar6 = *(longlong *)(lVar3 + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0xb0);
  plVar1 = (longlong *)(lVar5 + 0x38);
  *plVar1 = *(longlong *)(param_1 + 0xb8);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x93,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((iVar2 != 0) && ((uVar7 & 1) != 0)) {
    LOCK();
    _DAT_00020e10 = _DAT_00020e10 + 1;
    UNLOCK();
    _DAT_00021190 = _DAT_fffff78000000014;
    _DAT_00021198 = iVar2;
    _DAT_000211a0 = lVar6;
  }
  if ((*(byte *)(param_1 + 0x19a) & 1) == 0) {
    if ((-1 < iVar2) && (bVar9 == 0)) {
      if ((uVar7 & 1) == 0) {
        *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) | 0x1000;
      }
      if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
        *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) | 0x2000;
      }
      if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1c8) + *plVar1;
        FUN_00033664(lVar6,&local_res20);
        if (local_res20 < lVar5) {
          lVar5 = local_res20;
        }
        *(longlong *)(lVar6 + 0x28) = lVar5;
      }
    }
    if (((uVar8 & 1) == 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
      iVar4 = ExInterlockedAddUlong(*(longlong *)(param_1 + 0x1d8) + 0x100,0xffffffff,&DAT_00020e70)
      ;
      if (iVar4 == 1) {
        KeSetEvent(*(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x108),0,0);
      }
    }
    if (*(char *)(param_1 + 0xad) != '\0') {
      RxTrackPagingIoResource(lVar6,3,0x7be,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
      if (param_1 != 0) {
        *(undefined1 *)(param_1 + 0xad) = 0;
      }
      ExReleaseResourceForThreadLite(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(param_1 + 0x1b0))
      ;
    }
    if ((uVar8 & 1) == 0) {
      if (*(byte *)(param_1 + 0xac) != ((byte)uVar8 & 1)) {
        __RxReleaseFcbForThread
                  (param_1,lVar6,*(undefined8 *)(param_1 + 0x1b0),0x7c2,
                   "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
      }
    }
    else {
      RxResumeBlockedOperations_Serially(param_1,(longlong *)(local_res18 + 0xe0));
    }
    if ((((bVar9 != 0) && (*plVar1 != 0)) &&
        (*(undefined4 *)(local_res18 + 0xb8) = 0, 3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x94,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  return iVar2;
}




/* Library Function - Single Match
    RxLowIoWriteShell
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoWriteShell(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x95,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if (*(char *)(param_3 + 0x97) == '\0') {
    LOCK();
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x1d0);
    *plVar1 = *plVar1 + (ulonglong)*(uint *)(param_1 + 0x1d0);
    UNLOCK();
  }
  uVar2 = RxLowIoSubmit(param_1,param_2,param_3,RxLowIoWriteShellCompletion);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x96,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxCommonWrite
   
   Library: Visual Studio 2019 Release */

uint RxCommonWrite(ulonglong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined2 *puVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  uint uVar25;
  bool bVar26;
  ulonglong local_res8;
  longlong local_res10;
  char local_res18 [8];
  byte local_res20;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar27;
  undefined8 in_stack_fffffffffffffe60;
  short *local_108;
  uint in_stack_ffffffffffffff00;
  byte local_fa;
  byte local_f9;
  uint local_f8;
  char local_f4;
  byte local_f1;
  longlong local_e8;
  longlong local_d8;
  byte local_d0;
  undefined2 *local_c8;
  longlong local_c0;
  longlong local_b8;
  uint local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  lVar24 = *(longlong *)(param_2 + 0xb8);
  lVar2 = *(longlong *)(lVar24 + 0x30);
  lVar22 = *(longlong *)(param_1 + 0x58);
  local_c8 = (undefined2 *)(param_1 + 0x198);
  cVar16 = '\0';
  local_res18[0] = '\0';
  bVar10 = false;
  bVar26 = false;
  bVar8 = false;
  bVar11 = false;
  bVar9 = false;
  local_f4 = '\0';
  bVar12 = false;
  bVar6 = false;
  bVar7 = false;
  local_f1 = 0;
  if (lVar2 == 0) {
    local_108 = (short *)0x0;
    local_b8 = 0;
    sVar17 = -0x1400;
  }
  else {
    local_108 = *(short **)(lVar2 + 0x18);
    local_b8 = *(longlong *)(lVar2 + 0x20);
    sVar17 = *local_108;
  }
  if ((((sVar17 != -0x13fd) && (sVar17 != -0x14e1)) && (sVar17 != -0x1304)) && (sVar17 != -0x1303))
  {
    return in_stack_ffffffffffffff00;
  }
  *(undefined1 *)(local_108 + 0x4a) = 1;
  local_a8 = *(longlong *)(local_108 + 0x2c);
  cVar15 = *(char *)(local_a8 + 0x2d);
  if (cVar15 == '\0') {
LAB_0003162e:
    bVar6 = true;
  }
  else if (cVar15 == '\x01') {
    bVar7 = true;
  }
  else if (cVar15 == '\x04') goto LAB_0003162e;
  uVar25 = *(uint *)(param_1 + 0xa8) >> 0x17;
  uVar18 = *(uint *)(param_1 + 0xa8) >> 1;
  local_f9 = (byte)uVar18 & 1;
  local_res20 = (byte)(*(uint *)(param_2 + 0x10) >> 1) & 1;
  bVar14 = *(byte *)(param_2 + 0x10) & 1;
  local_fa = ~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1;
  local_b0 = *(uint *)(param_1 + 0xa8) >> 9;
  local_d0 = (byte)local_b0 & 1;
  local_b0 = local_b0 & 0xffffff01;
  if ((*(byte *)(lVar24 + 2) & 4) != 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 4;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    in_stack_fffffffffffffe60 = 0;
    uVar27 = (undefined4)((ulonglong)&local_res8 >> 0x20);
    WmlTrace(0x8c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    uVar27 = (undefined4)((ulonglong)(lVar24 + 8) >> 0x20);
    in_stack_fffffffffffffe60 = 0;
    WmlTrace(0x8d,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
    in_stack_fffffffffffffe60 = 0;
    uVar27 = (undefined4)((ulonglong)&local_a8 >> 0x20);
    WmlTrace(0xe7,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  lVar21 = local_res10;
  *(undefined1 *)(local_res8 + 0xac) = 0;
  *(undefined1 *)(local_res8 + 0xad) = 0;
  local_e8 = *(longlong *)(lVar24 + 0x18);
  local_f8 = *(uint *)(lVar24 + 8);
  bVar5 = local_e8 < 0;
  if (((*(uint *)(local_res8 + 0xa8) >> 9 & 1) == 0) &&
     (*(char *)((longlong)local_108 + 0x97) == '\0')) {
    LOCK();
    *(int *)(lVar22 + 0x210) = *(int *)(lVar22 + 0x210) + 1;
    UNLOCK();
    if (local_e8 != *(longlong *)(local_b8 + 0x98)) {
      LOCK();
      *(int *)(lVar22 + 0x218) = *(int *)(lVar22 + 0x218) + 1;
      UNLOCK();
    }
    *(ulonglong *)(local_b8 + 0x98) = (ulonglong)local_f8 + local_e8;
    if (local_res20 == 0) {
      if (bVar14 == 0) {
        LOCK();
        *(longlong *)(lVar22 + 0x1f8) = *(longlong *)(lVar22 + 0x1f8) + (ulonglong)local_f8;
        UNLOCK();
      }
      else {
        LOCK();
        *(longlong *)(lVar22 + 0x1f0) = *(longlong *)(lVar22 + 0x1f0) + (ulonglong)local_f8;
        UNLOCK();
      }
    }
    else {
      LOCK();
      *(longlong *)(lVar22 + 0x1e8) = *(longlong *)(lVar22 + 0x1e8) + (ulonglong)local_f8;
      UNLOCK();
    }
  }
  if ((bVar6) && (local_f8 == 0)) {
    return in_stack_ffffffffffffff00;
  }
  if ((*(longlong *)(local_res10 + 0x70) == 0) && (*(longlong *)(local_res10 + 8) == 0)) {
    return in_stack_ffffffffffffff00;
  }
  if ((0x7fffffffffffffff - local_e8 < (longlong)(ulonglong)local_f8) && (!bVar5)) {
    return in_stack_ffffffffffffff00;
  }
  if (local_b8 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = *(longlong *)(local_b8 + 8);
  }
  lVar24 = local_90;
  local_c0 = local_e8;
  local_a0 = local_e8;
  if (((bVar14 == 0) && ((*(uint *)(local_108 + 0x3a) >> 0x1b & 1) != 0)) &&
     ((*(byte *)(local_90 + 0x30) & 2) == 0)) {
    cVar15 = cVar16;
    if (((uVar18 & 1) != 0) && ((*(uint *)(local_res8 + 0xa8) >> 9 & 1) == 0)) {
      cVar15 = '\x01';
    }
    cVar15 = CcCanIWrite(lVar2,(ulonglong)local_f8,cVar15,
                         *(uint *)(local_res8 + 0xa8) >> 6 & 0xffffff01);
    if (cVar15 == '\0') {
      uVar18 = *(uint *)(local_res8 + 0xa8);
      RxPrePostIrp(local_res8,lVar21);
      *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) | 0x40;
      CcDeferWrite(lVar2,RxAddToWorkque,local_res8,lVar21,CONCAT44(uVar27,local_f8),
                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe60 >> 8),(char)(uVar18 >> 6)) &
                   0xffffffffffffff01);
      return in_stack_ffffffffffffff00;
    }
  }
  puVar13 = local_c8;
  RxInitializeLowIoContext(local_res8,1,local_c8);
  if (local_res20 == 0) {
    if ((uVar25 & 1) != 0) goto LAB_00031f0f;
    if (*(char *)(local_res8 + 0xac) != '\0') {
LAB_00031d67:
      if (!bVar7) {
        iVar19 = ExIsResourceAcquiredSharedLite(*(undefined8 *)(local_108 + 4));
        if (((iVar19 != 0) &&
            (*(longlong *)(local_108 + 0x14) < (longlong)((ulonglong)local_f8 + local_e8))) &&
           ((*(uint *)(local_108 + 0x3a) >> 0x16 & 1) != 0)) {
          __RxReleaseFcb(local_res8,(longlong)local_108,0x24b,
                         "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
          *(undefined1 *)(local_res8 + 0xac) = 0;
          in_stack_ffffffffffffff00 =
               __RxAcquireFcb((longlong)local_108,local_res8,1,0x24e,
                              "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
          if (in_stack_ffffffffffffff00 == 0xc0000055) {
            local_res18[0] = '\x01';
            goto LAB_00033297;
          }
          if (in_stack_ffffffffffffff00 != 0) {
            local_res18[0] = '\0';
            lVar24 = local_res10;
            goto LAB_0003316c;
          }
          *(undefined1 *)(local_res8 + 0xac) = 1;
        }
        if ((*(longlong *)(local_108 + 0x14) < (longlong)((ulonglong)local_f8 + local_e8)) &&
           ((*(uint *)(local_108 + 0x3a) >> 0x16 & 1) != 0)) {
          if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
            WmlTrace(0x8e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
          *(uint *)(local_108 + 0x3a) = *(uint *)(local_108 + 0x3a) & 0xffbfffff;
        }
        else {
          cVar15 = ExIsResourceAcquiredExclusiveLite(*(undefined8 *)(local_108 + 4));
          if (cVar15 != '\0') {
            ExConvertExclusiveToSharedLite(*(undefined8 *)(local_108 + 4));
          }
        }
      }
      *(undefined8 *)(local_c8 + 8) = *(undefined8 *)(local_108 + 4);
      goto LAB_00031f0f;
    }
    if (bVar7) {
      in_stack_ffffffffffffff00 =
           __RxAcquireFcb((longlong)local_108,local_res8,1,0x229,
                          "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    else if (((uVar18 & 1) == 0) &&
            (((bVar14 != 0 || ((*(uint *)(local_108 + 0x3a) >> 0x1b & 1) == 0)) ||
             ((*(byte *)(lVar24 + 0x30) & 2) != 0)))) {
      in_stack_ffffffffffffff00 =
           __RxAcquireFcb((longlong)local_108,local_res8,3,0x224,
                          "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    else {
      in_stack_ffffffffffffff00 =
           __RxAcquireFcb((longlong)local_108,local_res8,2,0x226,
                          "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    if (in_stack_ffffffffffffff00 != 0xc0000055) {
      if (in_stack_ffffffffffffff00 == 0) {
        *(undefined1 *)(local_res8 + 0xac) = 1;
        goto LAB_00031d67;
      }
      local_res18[0] = '\0';
      lVar24 = local_res10;
      goto LAB_0003316c;
    }
    local_res18[0] = '\x01';
  }
  else {
    cVar15 = ExAcquireResourceSharedLite(*(undefined8 *)(local_108 + 8),1);
    if (cVar15 != '\0') {
      if (local_res8 != 0) {
        *(undefined1 *)(local_res8 + 0xad) = 1;
      }
      RxTrackPagingIoResource
                ((longlong)local_108,2,0x20d,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
    }
    *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(local_108 + 8);
LAB_00031f0f:
    if (bVar7) {
      if ((((uVar25 & 1) == 0) && (local_b8 != 0)) &&
         ((*(int *)(local_b8 + 0x90) == 1 ||
          ((*(int *)(local_b8 + 0x90) == 0 && ((*(byte *)(local_b8 + 0x98) & 1) == 0)))))) {
        in_stack_ffffffffffffff00 =
             __RxSynchronizeBlockingOperations
                       (local_res8,(longlong)local_108,(longlong *)(local_b8 + 0xe0),'\x01');
        *(undefined1 *)(local_res8 + 0xac) = 0;
        lVar24 = local_res10;
        if ((int)in_stack_ffffffffffffff00 < 0) {
          bVar11 = false;
          bVar10 = false;
        }
        else if (in_stack_ffffffffffffff00 != 0x103) goto LAB_00031fa9;
      }
      else {
LAB_00031fa9:
        *(uint *)(local_c8 + 0x1c) = local_f8;
        *(longlong *)(local_c8 + 0x18) = local_e8;
        *(uint *)(local_res8 + 400) = *(uint *)(local_res8 + 400) | 1;
        if (((char)local_b0 != '\0') && (*(char *)(local_res8 + 0xac) != '\0')) {
          *(ulonglong *)(local_c8 + 0xc) = local_res8 | 3;
          ExSetResourceOwnerPointer(*(undefined8 *)(local_108 + 4),local_res8 | 3);
          local_f1 = 1;
        }
        lVar24 = local_res10;
        uVar20 = RxLowIoWriteShell(local_res8,local_res10,(longlong)local_108);
        in_stack_ffffffffffffff00 = (uint)uVar20;
      }
    }
    else {
      if ((((bVar14 != 0) || ((*(uint *)(local_108 + 0x3a) >> 0x1b & 1) == 0)) ||
          ((*(byte *)(lVar24 + 0x30) & 2) != 0)) &&
         ((local_res20 == 0 && (*(longlong *)(*(longlong *)(local_108 + 0x5c) + 8) != 0)))) {
        cVar15 = ExIsResourceAcquiredExclusiveLite(*(undefined8 *)(local_108 + 4));
        uVar18 = in_stack_ffffffffffffff00;
        if (cVar15 == '\0') {
          __RxReleaseFcb(local_res8,(longlong)local_108,0x2f1,
                         "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
          *(undefined1 *)(local_res8 + 0xac) = 0;
          in_stack_ffffffffffffff00 =
               __RxAcquireFcb((longlong)local_108,local_res8,1,0x2f4,
                              "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
          if (in_stack_ffffffffffffff00 == 0xc0000055) {
            local_res18[0] = '\x01';
            goto LAB_00033297;
          }
          if (in_stack_ffffffffffffff00 != 0) {
            local_res18[0] = '\0';
            lVar24 = local_res10;
            goto LAB_0003316c;
          }
          *(undefined1 *)(local_res8 + 0xac) = 1;
          uVar18 = in_stack_ffffffffffffff00;
        }
        if (bVar5) {
          FUN_00033664((longlong)local_108,&local_88);
        }
        else {
          local_88 = local_a0;
        }
        ExAcquireResourceExclusiveLite(*(undefined8 *)(local_108 + 8),1);
        if (local_res8 != 0) {
          *(undefined1 *)(local_res8 + 0xad) = 1;
        }
        RxTrackPagingIoResource
                  ((longlong)local_108,1,0x30f,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
        lVar24 = local_res10;
        CcFlushCache(*(longlong *)(local_108 + 0x5c) + 8,&local_88,local_f8,local_res10 + 0x30);
        RxTrackPagingIoResource
                  ((longlong)local_108,3,0x316,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
        if (local_res8 != 0) {
          *(undefined1 *)(local_res8 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(local_108 + 8));
        in_stack_ffffffffffffff00 = *(uint *)(lVar24 + 0x30);
        if ((int)in_stack_ffffffffffffff00 < 0) goto LAB_0003315e;
        ExAcquireResourceExclusiveLite(*(undefined8 *)(local_108 + 8),1);
        if (local_res8 != 0) {
          *(undefined1 *)(local_res8 + 0xad) = 1;
        }
        RxTrackPagingIoResource
                  ((longlong)local_108,1,0x31c,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
        RxTrackPagingIoResource
                  ((longlong)local_108,3,0x31d,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
        if (local_res8 != 0) {
          *(undefined1 *)(local_res8 + 0xad) = 0;
        }
        ExReleaseResourceLite(*(undefined8 *)(local_108 + 8));
        CcPurgeCacheSection(*(longlong *)(local_108 + 0x5c) + 8,&local_88,local_f8,0);
        in_stack_ffffffffffffff00 = uVar18;
      }
      lVar24 = local_res10;
      if ((local_res20 == 0) &&
         (cVar15 = FsRtlCheckLockForWriteAccess(local_108 + 0xe0,local_res10), cVar15 == '\0')) {
        in_stack_ffffffffffffff00 = 0xc0000054;
      }
      else {
        lVar22 = *(longlong *)(local_108 + 0x14);
        local_78 = lVar22;
        FUN_00033664((longlong)local_108,&local_d8);
        if (local_res20 != 0) {
          if (local_d8 <= local_e8) {
            in_stack_ffffffffffffff00 = 0;
            lVar24 = local_res10;
            goto LAB_0003315e;
          }
          if (local_d8 - local_e8 < (longlong)(ulonglong)local_f8) {
            local_f8 = (uint)(local_d8 - local_e8);
          }
        }
        lVar21 = RxGetTopIrpIfRdbssIrp();
        if ((((lVar21 == 2) && (bVar8 = true, (*(byte *)(local_108 + 2) & 0x20) != 0)) &&
            (lVar22 < (longlong)((ulonglong)local_f8 + local_e8))) &&
           ((local_e8 < local_d8 &&
            ((longlong)(lVar22 + 0xfffU & 0xfffffffffffff000) <
             (longlong)((ulonglong)local_f8 + local_e8))))) {
          in_stack_ffffffffffffff00 = 0xc0000054;
          lVar24 = local_res10;
        }
        else {
          if (((((*(byte *)(lVar24 + 0x10) & 0x40) != 0) &&
               (((*(byte *)(local_res8 + 0xa8) & 0x10) != 0 &&
                (uVar20 = RxGetTopIrpIfRdbssIrp(), uVar20 != 0)))) && (0xffff < uVar20)) &&
             ((**(char **)(uVar20 + 0xb8) == '\x04' &&
              (*(longlong *)(*(longlong *)(*(char **)(uVar20 + 0xb8) + 0x30) + 0x18) ==
               *(longlong *)(lVar2 + 0x18))))) {
            bVar9 = true;
            *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) | 4;
          }
          if (((!bVar8) && (!bVar9)) &&
             ((bVar5 || (lVar22 < (longlong)((ulonglong)local_f8 + local_e8))))) {
            bVar26 = local_fa == 0;
            if (bVar26) {
              local_f9 = 1;
              *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) | 2;
              *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) & 0xffffefff;
              local_fa = 1;
            }
            bVar26 = bVar26 && bVar14 != 0;
            __RxWriteReleaseResources(local_res8,(longlong)local_108,0);
            in_stack_ffffffffffffff00 =
                 __RxAcquireFcb((longlong)local_108,local_res8,1,0x3fa,
                                "d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c");
            if (in_stack_ffffffffffffff00 == 0xc0000055) {
              local_res18[0] = '\x01';
              goto LAB_00033297;
            }
            if (in_stack_ffffffffffffff00 != 0) {
              local_res18[0] = '\0';
              lVar24 = local_res10;
              goto LAB_0003316c;
            }
            *(undefined1 *)(local_res8 + 0xac) = 1;
            lVar22 = *(longlong *)(local_108 + 0x14);
            local_78 = lVar22;
            FUN_00033664((longlong)local_108,&local_d8);
            if ((bVar26) &&
               (((*(longlong *)(*(longlong *)(local_108 + 0x5c) + 8) != 0 ||
                 (local_d8 < (longlong)((ulonglong)local_f8 + local_e8))) || (DAT_00020e15 != '\0'))
               )) {
              bVar26 = false;
            }
            if (local_res20 != 0) {
              if (local_d8 <= local_e8) {
                in_stack_ffffffffffffff00 = 0;
                lVar24 = local_res10;
                goto LAB_0003315e;
              }
              if (local_d8 - local_e8 < (longlong)(ulonglong)local_f8) {
                local_f8 = (uint)(local_d8 - local_e8);
              }
            }
          }
          local_98 = local_d8;
          if (bVar5) {
            local_e8 = local_d8;
            local_c0 = local_d8;
            local_a0 = local_d8;
          }
          local_48 = lVar22;
          if ((local_res20 == 0) &&
             (cVar15 = FsRtlCheckLockForWriteAccess(local_108 + 0xe0,lVar24), cVar15 == '\0')) {
            in_stack_ffffffffffffff00 = 0xc0000054;
            lVar24 = local_res10;
          }
          else if (((local_res20 == 0) && ((bVar6 && (-1 < local_e8)))) &&
                  (local_d8 < (longlong)((ulonglong)local_f8 + local_e8))) {
            if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
              WmlTrace(0x8f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
            }
            bVar10 = true;
            *(uint *)(local_c8 + 0x10) = *(uint *)(local_c8 + 0x10) | 2;
            uVar23 = *(undefined8 *)(local_108 + 0x10);
            uVar3 = *(undefined8 *)(local_108 + 0xc);
            uVar4 = *(undefined8 *)(local_108 + 0x14);
            local_d8 = (ulonglong)local_f8 + local_e8;
            local_68 = uVar3;
            local_58 = uVar4;
            local_50 = uVar23;
            if (*(longlong *)(local_108 + 0xc) < local_d8) {
              if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
                WmlTrace(0x90,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
              }
              lVar24 = local_res10;
              if (((bVar14 == 0) && ((*(uint *)(local_108 + 0x3a) >> 0x1b & 1) != 0)) &&
                 ((*(byte *)(local_90 + 0x30) & 2) == 0)) {
                if (*(longlong *)(*(longlong *)(local_108 + 0x9c) + 0x198) == 0) {
                  in_stack_ffffffffffffff00 = 0xc0000002;
                }
                else {
                  if ((*(uint *)(local_res8 + 0xa8) >> 0x13 & 1) == 0) {
                    FUN_0001c430((ulonglong *)(local_res8 + 0xc0),0,0x20);
                    in_stack_ffffffffffffff00 =
                         (**(code **)(*(longlong *)(local_108 + 0x9c) + 0x198))
                                   (local_res8,&local_d8,&local_80);
                  }
                  else {
                    in_stack_ffffffffffffff00 = 0xc0000120;
                  }
LAB_00032979:
                  lVar24 = local_res10;
                  if (-1 < (int)in_stack_ffffffffffffff00) {
                    if (local_80 < local_d8) {
                      local_80 = local_d8;
                    }
                    *(longlong *)(local_108 + 0xc) = local_80;
                    goto LAB_000329c0;
                  }
                }
              }
              else {
                if (*(longlong *)(*(longlong *)(local_108 + 0x9c) + 0x1a0) != 0) {
                  if ((*(uint *)(local_res8 + 0xa8) >> 0x13 & 1) == 0) {
                    FUN_0001c430((ulonglong *)(local_res8 + 0xc0),0,0x20);
                    in_stack_ffffffffffffff00 =
                         (**(code **)(*(longlong *)(local_108 + 0x9c) + 0x1a0))
                                   (local_res8,&local_d8,&local_80);
                  }
                  else {
                    in_stack_ffffffffffffff00 = 0xc0000120;
                  }
                  goto LAB_00032979;
                }
                in_stack_ffffffffffffff00 = 0xc0000002;
              }
            }
            else {
LAB_000329c0:
              if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
                WmlTrace(0xe8,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
              }
              RxSetFileSizeWithLock((longlong)local_108,&local_d8);
              if (*(longlong *)(local_108 + 0xc) < *(longlong *)(local_108 + 0x10)) {
                *(ulonglong *)(local_108 + 0xc) =
                     *(longlong *)(local_108 + 0x10) +
                     (ulonglong)*(uint *)(*(longlong *)(local_108 + 0x2c) + 0x54) &
                     ~((ulonglong)*(uint *)(*(longlong *)(local_108 + 0x2c) + 0x54) - 1);
              }
              lVar24 = local_res10;
              if (((*(longlong *)(lVar2 + 0x28) == 0) ||
                  (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 8) == 0)) ||
                 (CcSetFileSizes(lVar2,local_108 + 0xc), lVar24 = local_res10,
                 in_stack_ffffffffffffff00 == 0)) goto LAB_00032bf6;
              *(undefined8 *)(local_108 + 0x10) = uVar23;
              *(undefined8 *)(local_108 + 0xc) = uVar3;
              *(undefined8 *)(local_108 + 0x14) = uVar4;
              lVar22 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 8);
              if (lVar22 != 0) {
                *(undefined8 *)(lVar22 + 8) = *(undefined8 *)(local_108 + 0x10);
              }
            }
          }
          else {
LAB_00032bf6:
            puVar13 = local_c8;
            if (((!bVar8) && (!bVar9)) &&
               ((bVar5 || (lVar22 < (longlong)((ulonglong)local_f8 + local_e8))))) {
              bVar11 = true;
              *(uint *)(local_c8 + 0x10) = *(uint *)(local_c8 + 0x10) | 4;
            }
            if ((((local_res20 == 0) && (bVar14 == 0)) &&
                ((*(uint *)(local_108 + 0x3a) >> 0x1b & 1) != 0)) &&
               ((*(byte *)(local_90 + 0x30) & 2) == 0)) {
              if (*(longlong *)(lVar2 + 0x30) == 0) {
                if ((*(uint *)(lVar2 + 0x50) >> 0xe & 1) != 0) {
                  in_stack_ffffffffffffff00 = 0xc0000128;
                  lVar24 = local_res10;
                  goto LAB_0003315e;
                }
                if (*(longlong *)(local_108 + 0xc) < *(longlong *)(local_108 + 0x10)) {
                  *(ulonglong *)(local_108 + 0xc) =
                       *(longlong *)(local_108 + 0x10) +
                       (ulonglong)*(uint *)(*(longlong *)(local_108 + 0x2c) + 0x54) &
                       ~((ulonglong)*(uint *)(*(longlong *)(local_108 + 0x2c) + 0x54) - 1);
                }
                CcInitializeCacheMap(lVar2,local_108 + 0xc,0,&DAT_000214b0,local_108);
                CcSetReadAheadGranularity(lVar2,*(undefined4 *)(local_a8 + 0x58));
              }
              lVar24 = local_res10;
              if ((*(byte *)(local_res8 + 0x19) & 2) == 0) {
                lVar22 = RxMapUserBuffer(local_res8,local_res10);
                if (lVar22 == 0) {
                  in_stack_ffffffffffffff00 = 0xc000009a;
                }
                else {
                  cVar16 = CcCopyWrite(lVar2,&local_a0,local_f8,local_f9,lVar22);
                  if (cVar16 == '\0') {
                    if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
                      WmlTrace(0x91,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
                    }
                    local_res18[0] = '\x01';
                    goto LAB_00033297;
                  }
                  *(undefined4 *)(lVar24 + 0x30) = 0;
                  *(ulonglong *)(lVar24 + 0x38) = (ulonglong)local_f8;
                  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
                    WmlTrace(0x92,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
                  }
                  in_stack_ffffffffffffff00 = 0;
                  lVar24 = local_res10;
                }
              }
              else {
                puVar1 = (uint *)(local_res10 + 0x30);
                CcPrepareMdlWrite(lVar2,&local_a0,local_f8,local_res10 + 8,puVar1);
                in_stack_ffffffffffffff00 = *puVar1;
              }
            }
            else {
              if (bVar26) {
                local_fa = 0;
                *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) & 0xfffffffd;
                *(uint *)(local_res8 + 0xa8) = *(uint *)(local_res8 + 0xa8) | 0x1000;
              }
              if (local_fa == 0) {
                lVar22 = *(longlong *)(local_108 + 0x5c);
                if (*(longlong *)(lVar22 + 0x108) == 0) {
                  *(longlong *)(lVar22 + 0x108) = lVar22 + 0x110;
                  KeInitializeEvent(*(undefined8 *)(*(longlong *)(local_108 + 0x5c) + 0x108),0,0);
                }
                iVar19 = ExInterlockedAddUlong
                                   (*(longlong *)(local_108 + 0x5c) + 0x100,1,&DAT_00020e70);
                if (iVar19 == 0) {
                  KeResetEvent(*(undefined8 *)(*(longlong *)(local_108 + 0x5c) + 0x108));
                }
                local_f4 = '\x01';
                *(undefined8 *)(puVar13 + 0x20) = *(undefined8 *)(local_108 + 0x5c);
              }
              *(uint *)(puVar13 + 0x1c) = local_f8;
              *(longlong *)(puVar13 + 0x18) = local_e8;
              if ((char)local_b0 != '\0') {
                *(ulonglong *)(puVar13 + 0xc) = local_res8 | 3;
                if (*(char *)(local_res8 + 0xac) != '\0') {
                  ExSetResourceOwnerPointer(*(undefined8 *)(local_108 + 4));
                }
                if (*(char *)(local_res8 + 0xad) != '\0') {
                  ExSetResourceOwnerPointer
                            (*(undefined8 *)(local_108 + 8),*(undefined8 *)(puVar13 + 0xc));
                }
                local_f1 = 1;
              }
              uVar20 = RxLowIoWriteShell(local_res8,lVar24,(longlong)local_108);
              in_stack_ffffffffffffff00 = (uint)uVar20;
              lVar24 = local_res10;
              if ((local_f4 != '\0') && (in_stack_ffffffffffffff00 == 0x103)) {
                local_f4 = cVar16;
              }
            }
          }
        }
      }
    }
LAB_0003315e:
    if (local_res18[0] == '\0') {
LAB_0003316c:
      if (!bVar7) {
        if ((((local_res20 == 0) && (-1 < (int)in_stack_ffffffffffffff00)) && (local_fa != 0)) &&
           ((*(byte *)(lVar2 + 0x50) & 2) != 0)) {
          *(longlong *)(lVar2 + 0x68) = local_e8 + *(longlong *)(lVar24 + 0x38);
        }
        if ((-1 < (int)in_stack_ffffffffffffff00) && (in_stack_ffffffffffffff00 != 0x103)) {
          if (local_res20 == 0) {
            *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x1000;
          }
          if (bVar10) {
            *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x2000;
          }
          if (bVar11) {
            local_e8 = local_e8 + *(longlong *)(lVar24 + 0x38);
            if (local_d8 < local_e8) {
              local_e8 = local_d8;
            }
            *(longlong *)(local_108 + 0x14) = local_e8;
            if (((bVar14 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 8) != 0)) {
              CcSetFileSizes(lVar2,local_108 + 0xc);
            }
          }
        }
      }
      goto LAB_000334d1;
    }
  }
LAB_00033297:
  if ((bVar10) && (!bVar7)) {
    ExAcquireResourceExclusiveLite(*(undefined8 *)(local_108 + 8),1);
    if (local_res8 != 0) {
      *(undefined1 *)(local_res8 + 0xad) = 1;
    }
    RxTrackPagingIoResource((longlong)local_108,1,0x648,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c")
    ;
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xe9,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxSetFileSizeWithLock((longlong)local_108,&local_98);
    RxTrackPagingIoResource((longlong)local_108,3,0x652,"d:\\w7rtm\\base\\fs\\rdr2\\rdbss\\write.c")
    ;
    if (local_res8 != 0) {
      *(undefined1 *)(local_res8 + 0xad) = 0;
    }
    ExReleaseResourceLite(*(undefined8 *)(local_108 + 8));
    lVar24 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 8);
    if (lVar24 != 0) {
      *(undefined8 *)(lVar24 + 8) = *(undefined8 *)(local_108 + 0x10);
    }
  }
  LOCK();
  *(int *)(local_res8 + 4) = *(int *)(local_res8 + 4) + 1;
  UNLOCK();
  bVar12 = true;
  __RxWriteReleaseResources(local_res8,(longlong)local_108,(uint)local_f1);
  if (*(int *)(local_res8 + 0x278) != 0) {
    DbgPrint("TrackerNBadBeforePost %08lx %08lx\n",local_res8,local_res18);
  }
  uVar23 = RxFsdPostRequest(local_res8);
  in_stack_ffffffffffffff00 = (uint)uVar23;
LAB_000334d1:
  if (local_f4 != '\0') {
    ExInterlockedAddUlong(*(longlong *)(local_108 + 0x5c) + 0x100,0xffffffff,&DAT_00020e70);
    KeSetEvent(*(undefined8 *)(*(longlong *)(local_c8 + 0x20) + 0x108),0,0);
  }
  if ((in_stack_ffffffffffffff00 == 0x103) && (local_res18[0] == '\0')) {
    RxDereferenceAndDeleteRxContext_Real(local_res8);
  }
  else {
    if (local_res18[0] == '\0') {
      __RxWriteReleaseResources(local_res8,(longlong)local_108,(uint)local_f1);
    }
    if (bVar12) {
      RxDereferenceAndDeleteRxContext_Real(local_res8);
    }
    if ((local_res18[0] == '\0') && ((*(byte *)(local_res8 + 400) & 2) != 0)) {
      RxResumeBlockedOperations_Serially(local_res8,(longlong *)(local_b8 + 0xe0));
    }
  }
  if (((in_stack_ffffffffffffff00 != 0x103) && (in_stack_ffffffffffffff00 != 0)) &&
     (local_res20 != 0)) {
    LOCK();
    _DAT_00020e10 = _DAT_00020e10 + 1;
    UNLOCK();
    _DAT_00021190 = _DAT_fffff78000000014;
    _DAT_000211a0 = local_108;
    _DAT_00021198 = in_stack_ffffffffffffff00;
  }
  return in_stack_ffffffffffffff00;
}




void FUN_00033658(void)

{
  return;
}




void FUN_00033664(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return;
}




/* Library Function - Single Match
    RxSetFileSizeWithLock
   
   Library: Visual Studio 2019 Release */

void RxSetFileSizeWithLock(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}




/* Library Function - Single Match
    RxRemoveNameNetFcb
   
   Library: Visual Studio 2019 Release */

void RxRemoveNameNetFcb(longlong param_1)

{
  RxFcbTableRemoveFcb(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 0x138,param_1);
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x10000000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxFinishFcbInitialization
   
   Library: Visual Studio 2019 Release */

void RxFinishFcbInitialization(short *param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = param_2;
  if ((*(uint *)(param_1 + 0x3a) >> 0x12 & 1) == 0) {
    if (param_3 == (undefined8 *)0x0) goto LAB_000338cb;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)*param_3;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)param_3[1];
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)param_3[2];
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)param_3[3];
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)param_3[4];
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)param_3[5];
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)param_3[6];
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)param_3[6];
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_3[7];
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_3[8];
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xeb,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else {
    if (param_2 != -0x1303) goto LAB_000338cb;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[200] = 0;
    param_1[0xc9] = 0;
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
    param_1[0xce] = 0;
    param_1[0xcf] = 0;
    param_1[0xd0] = 0;
    param_1[0xd1] = 0;
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
    param_1[0xd7] = 0;
    param_1[0xd8] = 0;
    param_1[0xd9] = 0;
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) | 0x40000;
LAB_000338cb:
  if ((param_2 == -0x13fd) && (sVar1 != -0x13fd)) {
    RxInitializeLowIoPerFcbInfo((longlong)(param_1 + 0x110));
    FsRtlInitializeFileLock(param_1 + 0xe0,RxLockOperationCompletion,RxUnlockOperation);
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    *(undefined1 *)((longlong)param_1 + 5) = 2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxFreeFcbObject
   
   Library: Visual Studio 2019 Release */

void RxFreeFcbObject(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == 0xeb07) || (uVar1 == 0xeb1c)) {
    ExFreePoolWithTag(param_1,0);
  }
  else if (((uVar1 & 0xff00) == 0xec00) || ((uVar1 & 0xfff0) == 0xeb90)) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (DAT_00020e08 != (code *)0x0) {
      (*DAT_00020e08)(param_1);
    }
    if ((param_1[0x3a] & 4) == 0) {
      ExFreePoolWithTag(*(undefined8 *)(param_1 + 0x5c),0);
    }
    ExFreePoolWithTag(param_1,0);
    LOCK();
    _DAT_00020e8c = _DAT_00020e8c + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar2 + 0x1a8) = *(int *)(lVar2 + 0x1a8) + -1;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    RxUninitializeVNetRootParameters
   
   Library: Visual Studio 2019 Release */

void RxUninitializeVNetRootParameters
               (longlong param_1,longlong param_2,longlong param_3,uint *param_4)

{
  if (param_1 != 0) {
    ExFreePoolWithTag(param_1,0);
  }
  if (param_2 != 0) {
    ExFreePoolWithTag(param_2,0);
  }
  if (param_3 != 0) {
    ExFreePoolWithTag(param_3,0);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = *param_4 & 0xfffffffe;
  }
  return;
}




/* Library Function - Single Match
    RxInitializeVNetRootParameters
   
   Library: Visual Studio 2019 Release */

int RxInitializeVNetRootParameters
              (longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              longlong *param_5,longlong *param_6,uint *param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  puVar4 = param_7;
  plVar3 = param_6;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 8);
  iVar7 = 2;
  lVar10 = *(longlong *)(lVar2 + 0x20);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(lVar2 + 0x30);
  }
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_7 = *param_7 & 0xfffffffe;
  iVar6 = SeQueryInformationToken(lVar10,9,&param_6);
  if (iVar6 < 0) {
    if (iVar6 == -0x3ffffffd) {
      iVar6 = 0;
    }
  }
  else {
    iVar7 = (int)*param_6;
    ExFreePoolWithTag(param_6,0);
  }
  if (((iVar6 < 0) || (iVar7 < 2)) || (cVar5 = SeTokenIsRestricted(lVar10), cVar5 != '\0')) {
    return -0x3fffffde;
  }
  iVar7 = SeQueryAuthenticationIdToken(lVar10,param_2);
  if (((iVar7 == 0) && (iVar7 = SeQuerySessionIdToken(lVar10,param_3), iVar7 == 0)) &&
     (*(longlong *)(param_1 + 0x240) != 0)) {
    puVar8 = (ushort *)
             ExAllocatePoolWithTag
                       (0,(ulonglong)*(ushort *)(param_1 + 0x238) + 0x10,
                        (-(uint)(DAT_00020e68 != 0) & 0xd000000) + 0x63537852);
    if (puVar8 == (ushort *)0x0) {
      iVar7 = -0x3fffff66;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x238);
      *puVar8 = uVar1;
      puVar8[1] = *(ushort *)(param_1 + 0x23a);
      if (uVar1 == 0) {
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
      }
      else {
        *(ushort **)(puVar8 + 4) = puVar8 + 8;
        memcpy(puVar8 + 8,*(void **)(param_1 + 0x240),(ulonglong)uVar1);
      }
      *param_4 = (longlong)puVar8;
    }
  }
  if ((*(longlong *)(param_1 + 0x260) != 0) && (iVar7 == 0)) {
    puVar8 = (ushort *)
             ExAllocatePoolWithTag
                       (0,(ulonglong)*(ushort *)(param_1 + 600) + 0x12,
                        (-(uint)(DAT_00020e68 != 0) & 0xd000000) + 0x63537852);
    if (puVar8 == (ushort *)0x0) {
      iVar7 = -0x3fffff66;
    }
    else {
      *puVar8 = *(ushort *)(param_1 + 600);
      puVar8[1] = *(ushort *)(param_1 + 0x25a);
      *(ushort **)(puVar8 + 4) = puVar8 + 8;
      puVar8[8] = 0;
      if (*puVar8 != 0) {
        memcpy(*(void **)(puVar8 + 4),*(void **)(param_1 + 0x260),(ulonglong)*puVar8);
      }
      *param_5 = (longlong)puVar8;
    }
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    if (iVar7 != 0) goto LAB_00033cef;
    puVar8 = (ushort *)
             ExAllocatePoolWithTag
                       (0,(ulonglong)*(ushort *)(param_1 + 0x248) + 0x10,
                        (-(uint)(DAT_00020e68 != 0) & 0xd000000) + 0x63537852);
    if (puVar8 != (ushort *)0x0) {
      uVar1 = *(ushort *)(param_1 + 0x248);
      *puVar8 = uVar1;
      puVar8[1] = *(ushort *)(param_1 + 0x24a);
      if (uVar1 == 0) {
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
      }
      else {
        *(ushort **)(puVar8 + 4) = puVar8 + 8;
        memcpy(puVar8 + 8,*(void **)(param_1 + 0x250),(ulonglong)uVar1);
      }
      *plVar3 = (longlong)puVar8;
      goto LAB_00033cdc;
    }
    iVar7 = -0x3fffff66;
  }
  if (iVar7 == 0) {
LAB_00033cdc:
    uVar9 = RxIsThisACscAgentOpen(param_1);
    if ((char)uVar9 == '\0') {
      return iVar7;
    }
    *puVar4 = *puVar4 | 1;
    return iVar7;
  }
LAB_00033cef:
  if (*param_4 != 0) {
    ExFreePoolWithTag(*param_4,0);
    *param_4 = 0;
  }
  if (*param_5 != 0) {
    ExFreePoolWithTag(*param_5,0);
    *param_5 = 0;
  }
  if (*plVar3 == 0) {
    return iVar7;
  }
  ExFreePoolWithTag(*plVar3,0);
  *plVar3 = 0;
  return iVar7;
}




/* Library Function - Single Match
    RxInitializeSrvCallParameters
   
   Library: Visual Studio 2019 Release */

undefined8 RxInitializeSrvCallParameters(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  bool bVar6;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  if ((*(char *)(param_1 + 0x18) != '\0') ||
     (bVar6 = *(int *)(param_1 + 0x208) == 0, *(int *)(param_1 + 0x208) == 0)) {
    return 0;
  }
  puVar3 = *(uint **)(param_1 + 0x200);
  do {
    lVar2 = 10;
    puVar4 = puVar3 + 2;
    pcVar5 = "Principal";
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar6 = (char)*puVar4 == *pcVar5;
      puVar4 = (uint *)((longlong)puVar4 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      if (*(short *)((longlong)puVar3 + 6) == 0) {
        return 0;
      }
      puVar1 = (undefined2 *)
               ExAllocatePoolWithTag
                         (0,(ulonglong)*(ushort *)((longlong)puVar3 + 6) + 0x10,
                          (-(uint)(DAT_00020e68 != 0) & 0xd000000) + 0x63537852);
      *(undefined2 **)(param_2 + 0x28) = puVar1;
      if (puVar1 == (undefined2 *)0x0) {
        return 0xc000009a;
      }
      *puVar1 = *(undefined2 *)((longlong)puVar3 + 6);
      *(undefined2 *)(*(longlong *)(param_2 + 0x28) + 2) = *(undefined2 *)((longlong)puVar3 + 6);
      *(longlong *)(*(longlong *)(param_2 + 0x28) + 8) = *(longlong *)(param_2 + 0x28) + 0x10;
      memcpy(*(void **)(*(ushort **)(param_2 + 0x28) + 4),
             (void *)((ulonglong)*(byte *)((longlong)puVar3 + 5) + 9 + (longlong)puVar3),
             (ulonglong)**(ushort **)(param_2 + 0x28));
      return 0;
    }
    if (*puVar3 == 0) {
      return 0;
    }
    puVar3 = (uint *)((longlong)puVar3 + (ulonglong)*puVar3);
    bVar6 = puVar3 == (uint *)0x0;
  } while( true );
}




/* Library Function - Single Match
    RxAllocateObject
   
   Library: Visual Studio 2019 Release */

ulonglong * RxAllocateObject(short param_1,longlong param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong *local_res20;
  
  uVar6 = 0;
  if (param_1 == -0x14f0) {
    uVar7 = 0x63537852;
    uVar8 = 0x208;
    if ((param_2 != 0) && ((*(byte *)(param_2 + 4) & 1) != 0)) {
      iVar5 = *(int *)(param_2 + 8);
      goto LAB_00033eeb;
    }
  }
  else if (param_1 == -0x14ef) {
    uVar7 = 0x724e7852;
    uVar8 = 0x3c0;
    if ((*(byte *)(param_2 + 4) & 2) != 0) {
      iVar5 = *(int *)(param_2 + 0xc);
      goto LAB_00033eeb;
    }
  }
  else {
    if (param_1 != -0x14ee) {
      return (ulonglong *)0x0;
    }
    uVar7 = 0x6e567852;
    uVar8 = 0x120;
    uVar6 = 0;
    if ((*(byte *)(param_2 + 4) & 4) != 0) {
      iVar5 = *(int *)(param_2 + 0x10);
LAB_00033eeb:
      uVar6 = iVar5 + 7U & 0xfffffff8;
    }
  }
  uVar1 = uVar6 + uVar8;
  puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,uVar1 + param_3,uVar7);
  if (puVar3 == (ulonglong *)0x0) {
    return (ulonglong *)0x0;
  }
  FUN_0001c430(puVar3,0,(ulonglong)(uVar1 + param_3));
  sVar2 = (short)param_3;
  *(short *)((longlong)puVar3 + 2) = sVar2 + (short)uVar1;
  *(short *)puVar3 = param_1;
  if (param_1 == -0x14f0) {
    local_res20 = puVar3 + 1;
    puVar4 = puVar3 + 10;
    puVar3[4] = (ulonglong)(puVar3 + 0x10);
  }
  else if (param_1 == -0x14ef) {
    local_res20 = puVar3 + 2;
    puVar4 = puVar3 + 0x1b;
    puVar3[7] = (ulonglong)(puVar3 + 0x21);
  }
  else {
    if (param_1 != -0x14ee) goto LAB_00033fae;
    local_res20 = puVar3 + 2;
    puVar4 = puVar3 + 0xe;
  }
  if (puVar4 != (ulonglong *)0x0) {
    FUN_0001c430(puVar4,0,0x60);
    *(undefined2 *)((longlong)puVar4 + 2) = 0x60;
    *(short *)(puVar4 + 6) = sVar2;
    *(undefined2 *)puVar4 = 0xeb0e;
    *(short *)((longlong)puVar4 + 0x32) = sVar2;
    puVar4[7] = (ulonglong)uVar1 + (longlong)puVar3;
  }
LAB_00033fae:
  if (uVar6 != 0) {
    *local_res20 = (ulonglong)uVar8 + (longlong)puVar3;
  }
  return puVar3;
}




/* Library Function - Single Match
    RxpDereferenceNetFcb
   
   Library: Visual Studio 2019 Release */

int RxpDereferenceNetFcb(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}




/* Library Function - Single Match
    RxpReferenceNetFcb
   
   Library: Visual Studio 2019 Release */

int RxpReferenceNetFcb(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}




/* Library Function - Single Match
    RxReference
   
   Library: Visual Studio 2019 Release */

void RxReference(ushort *param_1)

{
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  LOCK();
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  UNLOCK();
  RxpUndoScavengerFinalizationMarking(param_1);
                    /* WARNING: Could not recover jumptable at 0x0003404b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeReleaseMutex(&DAT_000213c0,0);
  return;
}




/* Library Function - Single Match
    RxFinalizeNetFobx
   
   Library: Visual Studio 2019 Release */

undefined8 RxFinalizeNetFobx(ushort *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ushort *puVar7;
  undefined1 uVar8;
  
  uVar8 = 0;
  puVar7 = param_1;
  if ((*(int *)(param_1 + 2) == 0) || (param_3 != '\0')) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    puVar2 = *(ushort **)(param_1 + 4);
    lVar3 = *(longlong *)(puVar2 + 4);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xa4,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((char)param_1[0x44] == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x28);
      plVar5 = *(longlong **)(param_1 + 0x2c);
      *plVar5 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar5;
      if ((*(uint *)(param_1 + 0x14) >> 0x11 & 1) != 0) {
        ExFreePoolWithTag(*(undefined8 *)(param_1 + 0x1c),0);
      }
      if ((*(longlong *)(lVar3 + 0x138) != 0) &&
         (pcVar6 = *(code **)(*(longlong *)(lVar3 + 0x138) + 0x80), pcVar6 != (code *)0x0)) {
        (*pcVar6)();
      }
      if ((((*(uint *)(param_1 + 0x14) >> 0x18 & 1) == 0) &&
          (RxCloseAssociatedSrvOpen((ulonglong *)0x0,(ulonglong)param_1), 3 < DAT_000204e4)) &&
         ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xa5,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
    if (*(int *)(param_1 + 2) == 0) {
      if (param_1 == *(ushort **)(lVar3 + 0x150)) {
        *(uint *)(lVar3 + 0x74) = *(uint *)(lVar3 + 0x74) & 0xbfffffff;
      }
      else if (param_1 == *(ushort **)(puVar2 + 0x5c)) {
        *(uint *)(puVar2 + 0x18) = *(uint *)(puVar2 + 0x18) & 0xfffdffff;
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      LOCK();
      *(int *)(*(longlong *)(puVar2 + 8) + 0x28) = *(int *)(*(longlong *)(puVar2 + 8) + 0x28) + -1;
      UNLOCK();
      FUN_00036fe8();
      puVar7 = (ushort *)RxDereference(puVar2,2);
      if ((~(byte)((uint)uVar1 >> 0x1a) & 1) != 0) {
        puVar7 = (ushort *)RxFreeFcbObject(param_1);
      }
      uVar8 = 1;
    }
  }
  return CONCAT71((int7)((ulonglong)puVar7 >> 8),uVar8);
}




/* Library Function - Single Match
    RxFinalizeSrvOpen
   
   Library: Visual Studio 2019 Release */

undefined8 RxFinalizeSrvOpen(ushort *param_1,undefined8 param_2,char param_3)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  ushort *puVar8;
  uint7 extraout_var;
  undefined1 uVar9;
  
  uVar9 = 0;
  if ((char)param_2 != '\0') {
    puVar8 = *(ushort **)(param_1 + 0x54);
    while (puVar8 != param_1 + 0x54) {
      puVar1 = puVar8 + -0x28;
      puVar8 = *(ushort **)puVar8;
      param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      RxFinalizeNetFobx(puVar1,param_2,param_3);
    }
  }
  puVar8 = param_1 + 2;
  if ((*(int *)puVar8 == 0) || (param_3 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 4);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      puVar8 = (ushort *)WmlTrace(0xa2,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    if (((char)param_1[0x3c] == '\0') &&
       ((*(int *)(param_1 + 0x3e) != 3 || ((param_1[0x18] & 4) != 0)))) {
      RxPurgeChangeBufferingStateRequestsForSrvOpen((longlong ****)param_1);
      if (((*(byte *)(lVar4 + 0x74) & 0x80) == 0) &&
         (pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x138) + 0x90), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1);
      }
      lVar6 = *(longlong *)(param_1 + 0x34);
      plVar7 = *(longlong **)(param_1 + 0x38);
      *plVar7 = lVar6;
      *(longlong **)(lVar6 + 8) = plVar7;
      puVar8 = param_1 + 0x34;
      *(ushort **)(param_1 + 0x38) = puVar8;
      *(ushort **)puVar8 = puVar8;
      *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
      if (*(longlong *)(param_1 + 8) != 0) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x28);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        FUN_00036fe8();
        RxDereference(*(ushort **)(param_1 + 8),0);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      *(undefined1 *)(param_1 + 0x3c) = 1;
      puVar8 = param_1;
    }
    if (*(int *)(param_1 + 2) == 0) {
      puVar8 = param_1 + 0x34;
      if (*(ushort **)puVar8 != puVar8) {
        lVar6 = *(longlong *)puVar8;
        plVar7 = *(longlong **)(param_1 + 0x38);
        *plVar7 = lVar6;
        *(longlong **)(lVar6 + 8) = plVar7;
        puVar8 = param_1 + 0x34;
        *(ushort **)(param_1 + 0x38) = puVar8;
        *(ushort **)puVar8 = puVar8;
      }
      if ((~(byte)((uint)uVar3 >> 0x10) & 1) == 0) {
        *(uint *)(lVar4 + 0x74) = *(uint *)(lVar4 + 0x74) & 0x7fffffff;
      }
      else {
        RxFreeFcbObject(param_1);
      }
      FUN_00036fe8();
      puVar8 = (ushort *)((ulonglong)extraout_var << 8);
      LOCK();
      *(int *)(lVar4 + 0x70) = *(int *)(lVar4 + 0x70) + -1;
      UNLOCK();
    }
    uVar9 = 1;
  }
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),uVar9);
}




/* Library Function - Single Match
    RxFinalizeNetFcb
   
   Library: Visual Studio 2019 Release */

undefined8 RxFinalizeNetFcb(ushort *param_1,undefined8 param_2,char param_3,int param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort *in_RAX;
  ushort *puVar4;
  undefined1 uVar5;
  
  uVar5 = 0;
  if ((char)param_2 == '\0') {
    if ((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x3c) != 0)) {
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  else {
    puVar4 = *(ushort **)(param_1 + 0x4c);
    while (in_RAX = param_1 + 0x4c, puVar4 != in_RAX) {
      puVar1 = puVar4 + -0x34;
      puVar4 = *(ushort **)puVar4;
      param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      RxFinalizeSrvOpen(puVar1,param_2,param_3);
    }
  }
  if ((param_4 == 1) || (param_3 != '\0')) {
    puVar4 = *(ushort **)(param_1 + 0x58);
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      in_RAX = (ushort *)WmlTrace(0xa0,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((char)param_1[0x90] == '\0') {
      in_RAX = (ushort *)0xec03;
      if (*param_1 == 0xec03) {
        in_RAX = (ushort *)FsRtlUninitializeFileLock(param_1 + 0xe0);
        lVar2 = *(longlong *)(param_1 + 0x124);
        while (lVar2 != 0) {
          puVar3 = *(undefined8 **)(param_1 + 0x124);
          *(undefined8 *)(param_1 + 0x124) = *puVar3;
          in_RAX = (ushort *)ExFreePoolWithTag(puVar3,0);
          lVar2 = *(longlong *)(param_1 + 0x124);
        }
      }
      if (((param_1[0x3a] & 0x80) == 0) && ((*(uint *)(param_1 + 0x3a) >> 0x1c & 1) == 0)) {
        in_RAX = (ushort *)RxFcbTableRemoveFcb(*(longlong *)(puVar4 + 4) + 0x138,(longlong)param_1);
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    if (param_4 == 1) {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        ExFreePoolWithTag(*(undefined8 *)(param_1 + 0x68),0);
      }
      if (*(longlong *)(param_1 + 0x9c) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x9c) + 0x78))(param_1);
      }
      ExDeleteResourceLite(*(undefined8 *)(param_1 + 300));
      ExDeleteResourceLite(*(undefined8 *)(param_1 + 4));
      ExDeleteResourceLite(*(undefined8 *)(param_1 + 8));
      LOCK();
      *(int *)(*(longlong *)(param_1 + 0x2c) + 0x24) =
           *(int *)(*(longlong *)(param_1 + 0x2c) + 0x24) + -1;
      UNLOCK();
      FUN_00036fe8();
      RxDereference(puVar4,0);
      uVar5 = 1;
      in_RAX = (ushort *)RxFreeFcbObject(param_1);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar5);
}




/* Library Function - Single Match
    RxRemoveVirtualNetRootFromNetRoot
   
   Library: Visual Studio 2019 Release */

void RxRemoveVirtualNetRootFromNetRoot(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x2a0);
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
  plVar2 = *(longlong **)(param_2 + 0xf0);
  lVar3 = *(longlong *)(param_2 + 0xe8);
  *plVar2 = lVar3;
  *(longlong **)(lVar3 + 8) = plVar2;
  if (*(longlong *)(param_1 + 0xb8) == param_2) {
    plVar2 = (longlong *)(param_1 + 0xc0);
    if ((longlong *)*plVar2 == plVar2) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0xb8) = *plVar2 + -0xe8;
    }
  }
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)(param_1 + 0xc0)) {
    if ((*(uint *)(param_1 + 0x20) >> 0x13 & 1) == 0) {
      RxRemovePrefixTableEntry(lVar1,param_1 + 0xd8);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80000;
    }
    if (((*(longlong *)(param_1 + 8) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18), lVar1 != 0)) &&
       (pcVar4 = *(code **)(*(longlong *)(lVar1 + 0x168) + 0x1c0), pcVar4 != (code *)0x0)) {
      (*pcVar4)(param_1,0);
    }
  }
  return;
}




/* Library Function - Single Match
    RxCreateNetRoot
   
   Library: Visual Studio 2019 Release */

ulonglong * RxCreateNetRoot(ulonglong param_1,ushort *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  
  uVar3 = *(ushort *)(param_1 + 0x80);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
  uVar7 = (uint)*param_2 + (uint)uVar3;
  if (uVar7 < 0xffff) {
    puVar6 = RxAllocateObject(-0x14ef,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168),uVar7);
    if (puVar6 != (ulonglong *)0x0) {
      memcpy((void *)(puVar6[0x22] + (ulonglong)uVar3),*(void **)(param_2 + 4),(ulonglong)*param_2);
      if (uVar3 != 0) {
        memcpy((void *)puVar6[0x22],*(void **)(param_1 + 0x88),(ulonglong)uVar3);
      }
      if ((*(byte *)(param_1 + 0x38) & 4) == 0) {
        uVar7 = (uint)*(ushort *)(param_1 + 0x54);
      }
      RxPrefixTableInsertName
                (lVar4,(longlong)(puVar6 + 0x1b),puVar6,(int *)((longlong)puVar6 + 4),(short)uVar7,
                 param_4);
      RxInitializeFcbTable((undefined2 *)(puVar6 + 0x27),1);
      puVar1 = puVar6 + 0x18;
      puVar2 = puVar6 + 0x10;
      puVar6[0x19] = (ulonglong)puVar1;
      *puVar1 = (ulonglong)puVar1;
      puVar6[0x11] = (ulonglong)puVar2;
      *puVar2 = (ulonglong)puVar2;
      puVar1 = puVar6 + 0x12;
      puVar6[0x13] = (ulonglong)puVar1;
      *puVar1 = (ulonglong)puVar1;
      RxInitializePurgeSyncronizationContext((longlong)(puVar6 + 0x14));
      *(int *)((longlong)puVar6 + 0xd4) = DAT_00020528;
      DAT_00020528 = DAT_00020528 + 1;
      *(uint *)(puVar6 + 4) = (uint)puVar6[4] | param_3;
      *(undefined4 *)((longlong)puVar6 + 0x54) = 1;
      uVar5 = DAT_00020114;
      puVar6[1] = param_1;
      *(undefined4 *)(puVar6 + 0xb) = uVar5;
      FUN_00019e08();
      RxReference((ushort *)puVar6[1]);
    }
  }
  else {
    puVar6 = (ulonglong *)0x0;
  }
  return puVar6;
}




/* Library Function - Single Match
    RxFinalizeSrvCall
   
   Library: Visual Studio 2019 Release */

bool RxFinalizeSrvCall(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
  if ((*(int *)(param_1 + 4) == 1) || (param_2 != '\0')) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x9a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      RxRemovePrefixTableEntry(lVar2,param_1 + 0x50);
      if (param_2 != '\0') {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x20;
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
      bVar4 = *(int *)(param_1 + 4) == 1;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        lVar2 = IoGetCurrentProcess();
        lVar3 = FUN_000188bc();
        if (lVar2 != lVar3) {
          LOCK();
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          UNLOCK();
          RxDispatchToWorkerThread(*(longlong *)(param_1 + 0x18),1,RxpDestroySrvCall,param_1);
          return bVar4;
        }
        pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168) + 0x1f0);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_1,param_2);
        }
      }
    }
    if (*(int *)(param_1 + 4) == 1) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        ExFreePoolWithTag(*(undefined8 *)(param_1 + 0x30),0);
      }
      FUN_00024008();
      ExFreePoolWithTag(param_1,0);
      bVar4 = true;
    }
  }
  return bVar4;
}




/* Library Function - Single Match
    RxCreateSrvCall
   
   Library: Visual Studio 2019 Release */

ulonglong * RxCreateSrvCall(longlong param_1,ushort *param_2,ushort *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong *puVar5;
  
  uVar3 = *param_2;
  if (param_3 == (ushort *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*param_3;
  }
  puVar5 = RxAllocateObject(-0x14f0,0,uVar4 + uVar3 + 4);
  if (puVar5 != (ulonglong *)0x0) {
    *(int *)((longlong)puVar5 + 0xb4) = DAT_00020528;
    DAT_00020528 = DAT_00020528 + 1;
    puVar5[3] = *(ulonglong *)(param_1 + 0x58);
    RxInitializeBufferingManager((longlong)puVar5);
    puVar1 = puVar5 + 0x1a;
    puVar2 = puVar5 + 0x18;
    puVar5[0x1b] = (ulonglong)puVar1;
    *puVar1 = (ulonglong)puVar1;
    puVar5[0x19] = (ulonglong)puVar2;
    *puVar2 = (ulonglong)puVar2;
    RxInitializePurgeSyncronizationContext((longlong)(puVar5 + 0x1c));
    RxInitializeSrvCallParameters(param_1,(longlong)puVar5);
    memcpy((void *)puVar5[0x11],*(void **)(param_2 + 4),(ulonglong)*param_2);
    *(short *)((longlong)puVar5 + 0x82) = (short)(uVar3 + 4);
    *(ushort *)(puVar5 + 0x10) = *param_2;
    RxPrefixTableInsertName
              (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0),(longlong)(puVar5 + 10),puVar5,
               (int *)((longlong)puVar5 + 4),*param_2,param_4);
  }
  return puVar5;
}




/* Library Function - Single Match
    RxWaitForStableCondition
   
   Library: Visual Studio 2019 Release */

void RxWaitForStableCondition(int *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  
  bVar3 = false;
  puVar4 = local_res8;
  if (param_4 != (undefined4 *)0x0) {
    puVar4 = param_4;
  }
  *puVar4 = 0;
  if (*param_1 < 3) {
    KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
    if (*param_1 < 3) {
      *(uint *)(param_3 + 0xa8) = *(uint *)(param_3 + 0xa8) | 0x1000000;
      plVar2 = *(longlong **)(param_2 + 8);
      plVar1 = (longlong *)(param_3 + 0x160);
      *(longlong **)(param_3 + 0x168) = plVar2;
      *plVar1 = param_2;
      *plVar2 = (longlong)plVar1;
      *(longlong **)(param_2 + 8) = plVar1;
      if ((*(uint *)(param_3 + 0xa8) >> 0xe & 1) == 0) {
        bVar3 = true;
      }
      else {
        *puVar4 = 0x103;
      }
    }
    KeReleaseMutex(&DAT_00021800,0);
    if (bVar3) {
      *(uint *)(param_3 + 0xa8) = *(uint *)(param_3 + 0xa8) | 0x100000;
      KeWaitForSingleObject(param_3 + 0x130,0,0,0,0);
    }
  }
  return;
}




/* Library Function - Single Match
    RxpDereferenceAndFinalizeNetFcb
   
   Library: Visual Studio 2019 Release */

undefined1 RxpDereferenceAndFinalizeNetFcb(ushort *param_1,char *param_2,char param_3,char param_4)

{
  ushort *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ushort *puVar7;
  int iVar8;
  undefined1 uVar9;
  
  uVar9 = 0;
  LOCK();
  puVar7 = param_1 + 0x38;
  iVar8 = *(int *)puVar7;
  *(int *)puVar7 = *(int *)puVar7 + -1;
  UNLOCK();
  iVar8 = iVar8 + -1;
  if ((param_4 == '\0') && (param_3 == '\0')) {
    if (*(int *)(param_1 + 0x40) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      return 0;
    }
    if (1 < iVar8) {
      return 0;
    }
  }
  bVar2 = false;
  uVar4 = 0;
  if ((param_1[0x3a] & 0x80) == 0) {
    pcVar6 = "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c";
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x58) + 8);
    FUN_00019e08();
    RxReference(puVar7);
    cVar3 = ExIsResourceAcquiredExclusiveLite(puVar7 + 0xa8);
    if (cVar3 == '\0') {
      FUN_00019e08();
      LOCK();
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      UNLOCK();
      cVar3 = ExAcquireResourceExclusiveLite(puVar7 + 0xa8,0);
      if (cVar3 == '\0') {
        if (((param_2 != (char *)0x0) && (param_2 != (char *)0xffffffffffffffff)) &&
           (param_2 != (char *)0xfffffffffffffffe)) {
          *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) | 0x400000;
        }
        __RxReleaseFcb((longlong)param_2,(longlong)param_1,0x2c2,
                       "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
        ExAcquireResourceExclusiveLite(puVar7 + 0xa8,1);
        uVar4 = __RxAcquireFcb((longlong)param_1,(longlong)param_2,1,0x2c6,
                               "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
      }
      param_2 = "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c";
      FUN_00036fe8();
      LOCK();
      puVar1 = param_1 + 0x38;
      iVar8 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      iVar8 = iVar8 + -1;
      bVar2 = true;
      goto LAB_00034e8c;
    }
  }
  else {
    puVar7 = (ushort *)0x0;
LAB_00034e8c:
    pcVar6 = param_2;
    if (uVar4 != 0) goto LAB_00034ea7;
  }
  uVar5 = RxFinalizeNetFcb(param_1,CONCAT71((int7)((ulonglong)pcVar6 >> 8),param_3),param_4,iVar8);
  uVar9 = (undefined1)uVar5;
LAB_00034ea7:
  if (bVar2) {
    ExReleaseResourceLite(puVar7 + 0xa8);
  }
  if (puVar7 != (ushort *)0x0) {
    FUN_00036fe8();
    RxDereference(puVar7,0);
  }
  return uVar9;
}




/* Library Function - Single Match
    RxPurgeFcb
   
   Library: Visual Studio 2019 Release */

void RxPurgeFcb(ushort *param_1)

{
  char cVar1;
  
  FUN_00019e08();
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  if (*(int *)(param_1 + 0x40) != 0) {
    RxPurgeFcbInSystemCache((ulonglong)param_1,0,0,1,'\x01');
  }
  FUN_00036fe8();
  cVar1 = RxpDereferenceAndFinalizeNetFcb(param_1,(char *)0x0,'\0','\0');
  if (cVar1 == '\0') {
    __RxReleaseFcb(0,(longlong)param_1,0xdfc,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxAllocateFcbObject
   
   Library: Visual Studio 2019 Release */

ulonglong *
RxAllocateFcbObject(longlong param_1,ushort param_2,int param_3,int param_4,ulonglong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *unaff_RBP;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_68;
  uint local_64;
  ulonglong *local_60;
  ulonglong local_58;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  local_58 = 0;
  uVar2 = 0;
  uVar7 = 0;
  uVar8 = 0;
  puVar6 = (ulonglong *)0x0;
  puVar5 = (ulonglong *)0x0;
  puVar3 = (ulonglong *)0x0;
  local_60 = (ulonglong *)0x0;
  local_64 = 0;
  local_68 = 0;
  if (param_2 == 0xeb07) {
LAB_0003507a:
    uVar8 = 0xf8;
    if ((*(byte *)(lVar1 + 4) & 0x20) != 0) {
      uVar8 = (*(int *)(lVar1 + 0x1c) + 7U & 0xfffffff8) + 0xf8;
    }
  }
  else {
    if ((0xeb1b < param_2) && (param_2 < 0xeb1e)) {
LAB_00035060:
      uVar7 = 0xd8;
      if ((*(byte *)(lVar1 + 4) & 0x10) != 0) {
        uVar7 = (*(int *)(lVar1 + 0x18) + 7U & 0xfffffff8) + 0xd8;
      }
      goto LAB_0003507a;
    }
    local_68 = 0x290;
    if ((*(byte *)(lVar1 + 4) & 8) != 0) {
      local_68 = (*(int *)(lVar1 + 0x14) + 7U & 0xfffffff8) + 0x290;
    }
    if (param_3 == 0) {
      uVar2 = 0x1d8;
    }
    local_64 = (uint)uVar2;
    if (param_2 != 0xecff) goto LAB_00035060;
  }
  if (param_5 == (ulonglong *)0x0) {
    param_5 = (ulonglong *)
              ExAllocatePoolWithTag
                        (param_3,(int)uVar2 + uVar8 + uVar7 + local_68 + param_4,0x63467852);
    if (param_5 == (ulonglong *)0x0) {
      return unaff_RBP;
    }
    uVar2 = (ulonglong)local_64;
  }
  puVar4 = param_5;
  if (param_2 != 0xeb07) {
    if (param_2 == 0xeb1c) {
      puVar3 = (ulonglong *)((ulonglong)uVar7 + (longlong)param_5);
      goto LAB_000352eb;
    }
    if (param_2 == 0xeb1d) goto LAB_000352eb;
    if (param_2 != 0xecff) {
      puVar5 = (ulonglong *)((longlong)param_5 + (ulonglong)local_68);
      puVar3 = (ulonglong *)((ulonglong)uVar7 + (longlong)puVar5);
    }
    puVar4 = puVar3;
    puVar6 = param_5;
    if (param_3 == 0) {
      local_60 = (ulonglong *)((ulonglong)uVar8 + (longlong)puVar3);
      local_58 = uVar2 + (longlong)local_60;
    }
    else {
      local_58 = (ulonglong)(uVar8 + uVar7 + local_68) + (longlong)param_5;
      local_60 = (ulonglong *)ExAllocatePoolWithTag(0,0x1d8,0x664e7852);
      if (local_60 == (ulonglong *)0x0) {
        ExFreePoolWithTag(param_5,0);
        return unaff_RBP;
      }
    }
  }
  puVar3 = puVar4;
  param_5 = puVar5;
  if (puVar6 != (ulonglong *)0x0) {
    FUN_0001c430(puVar6,0,(longlong)(short)local_68);
    *(short *)((longlong)puVar6 + 2) = (short)local_68;
    *(undefined2 *)puVar6 = 0xec00;
    puVar6[0x17] = (ulonglong)local_60;
    FUN_0001c430(local_60,0,0x1d8);
    *(undefined2 *)puVar6[0x17] = 0xebfd;
    *(undefined2 *)(puVar6[0x17] + 2) = 0x1d8;
    puVar6[0x29] = (ulonglong)puVar5;
    puVar6[0x23] = local_58;
    puVar6[0x2a] = (ulonglong)puVar4;
    *(short *)(puVar6 + 0x22) = (short)param_4;
    *(short *)((longlong)puVar6 + 0x112) = (short)param_4;
    if ((*(byte *)(lVar1 + 4) & 8) != 0) {
      puVar6[0xc] = (ulonglong)(puVar6 + 0x52);
    }
    FUN_0001c430(puVar6 + 0x1c,0,0x30);
    *(undefined2 *)(puVar6 + 0x1c) = 0xeb0a;
    *(undefined2 *)((longlong)puVar6 + 0xe2) = 0x30;
    LOCK();
    _DAT_00020e8c = _DAT_00020e8c + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    UNLOCK();
    puVar4 = local_60 + 0x27;
    local_60[0x28] = 0;
    *(undefined4 *)(local_60 + 0x29) = 0;
    *(undefined4 *)puVar4 = 1;
    KeInitializeEvent(local_60 + 0x2a,1,0);
    *(byte *)((longlong)puVar6 + 7) = *(byte *)((longlong)puVar6 + 7) & 0xf;
    *(byte *)((longlong)puVar6 + 4) = *(byte *)((longlong)puVar6 + 4) | 0x40;
    *(byte *)((longlong)puVar6 + 6) = *(byte *)((longlong)puVar6 + 6) | 2;
    *(byte *)((longlong)puVar6 + 7) = *(byte *)((longlong)puVar6 + 7) | 0x10;
    puVar5 = puVar6 + 7;
    puVar6[8] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
    if (puVar4 != (ulonglong *)0x0) {
      puVar6[6] = (ulonglong)puVar4;
    }
    puVar6[9] = 0;
    puVar6[10] = 0;
  }
LAB_000352eb:
  if (param_5 != (ulonglong *)0x0) {
    FUN_0001c430(param_5,0,(longlong)(short)uVar7);
    *(short *)((longlong)param_5 + 2) = (short)uVar7;
    *(undefined2 *)param_5 = 0xeb1c;
    if (param_2 == 0xeb1c) {
      param_5[0x17] = (ulonglong)puVar3;
    }
    else {
      *(uint *)(param_5 + 6) = (uint)param_5[6] | 0x20000;
      param_5[0x17] = 0;
    }
    if ((*(byte *)(lVar1 + 4) & 0x10) != 0) {
      param_5[3] = (ulonglong)(param_5 + 0x1b);
    }
    puVar5 = param_5 + 0xd;
    param_5[0xe] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
  }
  if (puVar3 != (ulonglong *)0x0) {
    FUN_0001c430(puVar3,0,(longlong)(short)uVar8);
    *(short *)((longlong)puVar3 + 2) = (short)uVar8;
    *(undefined2 *)puVar3 = 0xeb07;
    if ((*(byte *)(lVar1 + 4) & 0x20) != 0) {
      puVar3[3] = (ulonglong)(puVar3 + 0x1f);
    }
  }
  return unaff_RBP;
}




/* Library Function - Single Match
    RxCreateVNetRoot
   
   Library: Visual Studio 2019 Release */

ulonglong *
RxCreateVNetRoot(longlong param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined8 param_5
                ,undefined8 *param_6)

{
  ulonglong *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Dst;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  short local_48;
  
  uVar9 = (uint)*param_4 + (uint)param_2[0x84];
  if ((uVar9 < 0xffff) && (uVar9 <= *param_3)) {
    puVar6 = RxAllocateObject(-0x14ee,*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_2 + 4) + 0x18) + 0x168),
                              uVar9);
    if (puVar6 != (ulonglong *)0x0) {
      iVar5 = RxInitializeVNetRootParameters
                        (param_1,(longlong)puVar6 + 0x2c,puVar6 + 10,(longlong *)(puVar6 + 8),
                         (longlong *)(puVar6 + 7),(longlong *)(puVar6 + 9),(uint *)(puVar6 + 4));
      if (iVar5 == 0) {
        _Dst = (void *)puVar6[0x15];
        local_48 = (short)puVar6[0x14];
        memcpy(_Dst,*(void **)(param_3 + 4),puVar6[0x14] & 0xffff);
        uVar8 = param_2[0x84];
        uVar2 = *param_4;
        *(uint *)(puVar6 + 0x1c) = (uint)uVar2 + (uint)uVar8;
        puVar6[0x1b] = (ulonglong)((uint)uVar2 + (uint)uVar8) + (longlong)_Dst;
        local_48 = local_48 - (short)puVar6[0x1c];
        puVar1 = puVar6 + 0x20;
        *(short *)((longlong)puVar6 + 0xd2) = local_48;
        *(short *)(puVar6 + 0x1a) = local_48;
        puVar6[0x21] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar1 = puVar6 + 0x22;
        puVar6[0x23] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        lVar3 = *(longlong *)(param_2 + 4);
        if ((*(byte *)(lVar3 + 0x38) & 8) == 0) {
          if ((*(byte *)(lVar3 + 0x38) & 4) == 0) {
            uVar8 = *(ushort *)(lVar3 + 0x54);
          }
          else {
            uVar8 = param_2[0x6e];
          }
          uVar7 = 1;
          if (1 < *param_3 >> 1) {
            do {
              if (*(short *)(*(longlong *)(param_3 + 4) + uVar7 * 2) != 0x5c) break;
              uVar9 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar9;
            } while (uVar9 < *param_3 >> 1);
          }
          uVar9 = (uint)(ushort)(uVar8 + (short)uVar7 * 2);
        }
        RxPrefixTableInsertName
                  (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0),(longlong)(puVar6 + 0xe),
                   puVar6,(int *)((longlong)puVar6 + 4),(short)uVar9,param_6);
        FUN_00019e08();
        RxReference(param_2);
        puVar6[1] = (ulonglong)param_2;
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
        puVar1 = puVar6 + 0x1d;
        plVar4 = *(longlong **)(param_2 + 100);
        *puVar1 = (ulonglong)(param_2 + 0x60);
        puVar6[0x1e] = (ulonglong)plVar4;
        *plVar4 = (longlong)puVar1;
        *(ulonglong **)(param_2 + 100) = puVar1;
        *(int *)(puVar6 + 0x1f) = DAT_00020528;
        DAT_00020528 = DAT_00020528 + 1;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x61) = 0;
        *(undefined4 *)(puVar6 + 0xd) = 0;
      }
      else {
        RxUninitializeVNetRootParameters(puVar6[8],puVar6[7],puVar6[9],(uint *)(puVar6 + 4));
        ExFreePoolWithTag(puVar6,0);
        puVar6 = (ulonglong *)0x0;
      }
    }
  }
  else {
    puVar6 = (ulonglong *)0x0;
  }
  return puVar6;
}




/* Library Function - Single Match
    RxFinalizeNetRoot
   
   Library: Visual Studio 2019 Release */

undefined1 RxFinalizeNetRoot(longlong param_1,char param_2,char param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  
  uVar6 = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + 0x2a0);
  if ((*(uint *)(param_1 + 0x20) >> 0x12 & 1) == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x40000;
    if (param_2 != '\0') {
      ExAcquireResourceExclusiveLite(param_1 + 0x150);
      uVar7 = 0;
      if (*(short *)(param_1 + 0x142) != 0) {
        do {
          puVar8 = (undefined8 *)(((ulonglong)uVar7 + 0x1c) * 0x10 + param_1);
          puVar5 = (undefined8 *)*puVar8;
          while (puVar5 != puVar8) {
            puVar4 = (ushort *)(puVar5 + -0x1f);
            puVar3 = (undefined8 *)*puVar5;
            pbVar1 = (byte *)((longlong)puVar5 + -0x84);
            puVar5 = puVar3;
            if ((*pbVar1 & 0x80) == 0) {
              __RxAcquireFcb((longlong)puVar4,0,1,0x7d6,
                             "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
              RxPurgeFcb(puVar4);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(param_1 + 0x142));
      }
      ExReleaseResourceLite(param_1 + 0x150);
    }
    if ((*(int *)(param_1 + 4) == 1) || (param_3 != '\0')) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x9b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      if (*(int *)(param_1 + 4) == 1) {
        puVar4 = *(ushort **)(param_1 + 8);
        FUN_0003bf68(param_1 + 0x138);
        if ((*(uint *)(param_1 + 0x20) >> 0x13 & 1) == 0) {
          RxRemovePrefixTableEntry(lVar2,param_1 + 0xd8);
        }
        ExFreePoolWithTag(param_1,0);
        if (puVar4 != (ushort *)0x0) {
          FUN_00036fe8();
          RxDereference(puVar4,2);
        }
        uVar6 = 1;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}




/* Library Function - Single Match
    RxUpdateCondition
   
   Library: Visual Studio 2019 Release */

void RxUpdateCondition(undefined4 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong ****pppplVar1;
  uint uVar2;
  longlong ***ppplVar3;
  longlong ***ppplVar4;
  longlong ***ppplVar5;
  longlong ***local_18;
  longlong ***ppplStack_10;
  
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  *param_2 = param_1;
  if ((undefined8 *)*param_3 == param_3) {
    ppplStack_10 = (longlong ***)&local_18;
    local_18 = (longlong ***)&local_18;
  }
  else {
    local_18 = (longlong ***)*param_3;
    ppplStack_10 = (longlong ***)param_3[1];
    ((longlong ****)local_18)[1] = (longlong ***)&local_18;
    *ppplStack_10 = (longlong **)&local_18;
    param_3[1] = param_3;
    *param_3 = param_3;
  }
  KeReleaseMutex(&DAT_00021800,0);
  while (ppplVar5 = local_18, (longlong ****)local_18 != &local_18) {
    ppplVar3 = (longlong ***)*local_18;
    pppplVar1 = (longlong ****)(local_18 + -0x2c);
    ppplVar4 = (longlong ***)local_18[1];
    *ppplVar4 = (longlong **)ppplVar3;
    ppplVar3[1] = (longlong **)ppplVar4;
    *local_18 = (longlong **)0x0;
    ppplVar5[1] = (longlong **)0x0;
    uVar2 = *(uint *)(ppplVar5 + -0x17);
    if ((uVar2 >> 0xe & 1) == 0) {
      *(uint *)(ppplVar5 + -0x17) = uVar2 & 0xffefffff;
      KeSetEvent(ppplVar5 + -6,0,0);
    }
    else {
      *(uint *)(ppplVar5 + -0x17) = uVar2 & 0xffffbfff;
      RxFsdPostRequest((longlong)pppplVar1);
    }
  }
  return;
}




/* Library Function - Single Match
    RxDereference
   
   Library: Visual Studio 2019 Release */

void RxDereference(ushort *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  ushort *puVar10;
  undefined8 uVar11;
  byte local_38;
  
  bVar9 = false;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  puVar10 = param_1 + 2;
  LOCK();
  iVar2 = *(int *)puVar10;
  *(int *)puVar10 = *(int *)puVar10 + -1;
  UNLOCK();
  if (iVar2 + -1 < 2) {
    if (param_2 == 2) {
      bVar9 = true;
      if ((*param_1 & 0x1000) != 0) {
        RxpUndoScavengerFinalizationMarking(param_1);
      }
    }
    else {
      uVar3 = *param_1;
      if (uVar3 == 0xeb07) {
        if (iVar2 != 1) goto LAB_000359b4;
      }
      else if ((uVar3 < 0xeb10) || (0xeb12 < uVar3)) goto LAB_000359b4;
      RxpMarkInstanceForScavengedFinalization(param_1);
    }
  }
LAB_000359b4:
  uVar11 = 0;
  KeReleaseMutex(&DAT_000213c0,0);
  if (bVar9) {
    uVar3 = *param_1;
    if (uVar3 == 0xeb07) {
      if (*(int *)puVar10 == 0) {
        puVar10 = *(ushort **)(param_1 + 4);
        lVar5 = *(longlong *)(puVar10 + 4);
        local_38 = ~(byte)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x1a) & 1;
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0xa4,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        if ((char)param_1[0x44] == '\0') {
          plVar8 = *(longlong **)(param_1 + 0x2c);
          lVar7 = *(longlong *)(param_1 + 0x28);
          *plVar8 = lVar7;
          *(longlong **)(lVar7 + 8) = plVar8;
          if ((*(uint *)(param_1 + 0x14) >> 0x11 & 1) != 0) {
            ExFreePoolWithTag(*(undefined8 *)(param_1 + 0x1c),0);
          }
          if ((*(longlong *)(lVar5 + 0x138) != 0) &&
             (pcVar6 = *(code **)(*(longlong *)(lVar5 + 0x138) + 0x80), pcVar6 != (code *)0x0)) {
            (*pcVar6)();
          }
          if ((((*(uint *)(param_1 + 0x14) >> 0x18 & 1) == 0) &&
              (RxCloseAssociatedSrvOpen((ulonglong *)0x0,(ulonglong)param_1), 3 < DAT_000204e4)) &&
             ((DAT_000204e0 & 2) != 0)) {
            WmlTrace(0xa5,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
        if (*(int *)(param_1 + 2) == 0) {
          if (param_1 == *(ushort **)(lVar5 + 0x150)) {
            *(uint *)(lVar5 + 0x74) = *(uint *)(lVar5 + 0x74) & 0xbfffffff;
          }
          else if (param_1 == *(ushort **)(puVar10 + 0x5c)) {
            *(uint *)(puVar10 + 0x18) = *(uint *)(puVar10 + 0x18) & 0xfffdffff;
          }
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          LOCK();
          *(int *)(*(longlong *)(puVar10 + 8) + 0x28) =
               *(int *)(*(longlong *)(puVar10 + 8) + 0x28) + -1;
          UNLOCK();
          FUN_00036fe8();
          RxDereference(puVar10,2);
          if (local_38 != 0) {
            RxFreeFcbObject(param_1);
          }
        }
      }
    }
    else if (uVar3 == 0xeb10) {
      RxFinalizeSrvCall((longlong)param_1,'\x01');
    }
    else if (uVar3 == 0xeb11) {
      RxFinalizeNetRoot((longlong)param_1,'\x01','\x01');
    }
    else if (uVar3 == 0xeb12) {
      RxFinalizeVNetRoot((longlong)param_1,CONCAT71((int7)((ulonglong)uVar11 >> 8),1),'\x01');
    }
    else if (((uVar3 == 0xeb1c) && (*(int *)(param_1 + 0x22) == 0)) && (*(int *)puVar10 == 0)) {
      lVar5 = *(longlong *)(param_1 + 4);
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xa2,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      if (((char)param_1[0x3c] == '\0') &&
         ((*(int *)(param_1 + 0x3e) != 3 || ((param_1[0x18] & 4) != 0)))) {
        RxPurgeChangeBufferingStateRequestsForSrvOpen((longlong ****)param_1);
        if (((*(byte *)(lVar5 + 0x74) & 0x80) == 0) &&
           (pcVar6 = *(code **)(*(longlong *)(lVar5 + 0x138) + 0x90), pcVar6 != (code *)0x0)) {
          (*pcVar6)(param_1);
        }
        lVar7 = *(longlong *)(param_1 + 0x34);
        plVar8 = *(longlong **)(param_1 + 0x38);
        *plVar8 = lVar7;
        *(longlong **)(lVar7 + 8) = plVar8;
        puVar10 = param_1 + 0x34;
        *(ushort **)(param_1 + 0x38) = puVar10;
        *(ushort **)puVar10 = puVar10;
        *(int *)(lVar5 + 0xa8) = *(int *)(lVar5 + 0xa8) + 1;
        if (*(longlong *)(param_1 + 8) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x28);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          FUN_00036fe8();
          RxDereference(*(ushort **)(param_1 + 8),0);
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
        }
        *(undefined1 *)(param_1 + 0x3c) = 1;
      }
      if (*(int *)(param_1 + 2) == 0) {
        puVar10 = param_1 + 0x34;
        if (*(ushort **)puVar10 != puVar10) {
          lVar7 = *(longlong *)puVar10;
          plVar8 = *(longlong **)(param_1 + 0x38);
          *plVar8 = lVar7;
          *(longlong **)(lVar7 + 8) = plVar8;
          puVar10 = param_1 + 0x34;
          *(ushort **)(param_1 + 0x38) = puVar10;
          *(ushort **)puVar10 = puVar10;
        }
        if ((~(byte)((uint)uVar4 >> 0x10) & 1) == 0) {
          *(uint *)(lVar5 + 0x74) = *(uint *)(lVar5 + 0x74) & 0x7fffffff;
        }
        else {
          RxFreeFcbObject(param_1);
        }
        FUN_00036fe8();
        LOCK();
        *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + -1;
        UNLOCK();
      }
    }
  }
  return;
}




/* Library Function - Single Match
    RxOrphanSrvOpensForThisFcb
   
   Library: Visual Studio 2019 Release */

void RxOrphanSrvOpensForThisFcb(ushort *param_1,longlong param_2,char param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  bool bVar3;
  char cVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  bVar3 = true;
  __RxAcquireFcb((longlong)param_1,-2,1,0x11ed,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
  FUN_00019e08();
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  puVar1 = param_1 + 0x4c;
  puVar7 = *(ushort **)puVar1;
  if (*(ushort **)puVar1 != puVar1) {
    do {
      puVar6 = *(ushort **)puVar7;
      if ((*(uint *)(puVar7 + -0x1c) >> 10 & 1) == 0) {
        if ((param_3 == '\0') && (*(longlong *)(puVar7 + -0x2c) != param_2)) {
          bVar3 = false;
        }
        else {
          *(uint *)(puVar7 + -0x1c) = *(uint *)(puVar7 + -0x1c) | 0x400;
          KeWaitForSingleObject(&DAT_000213c0,0,0,0,0,uVar9);
          puVar2 = puVar7 + 0x20;
          for (puVar5 = *(ushort **)puVar2; puVar5 != puVar2; puVar5 = *(ushort **)puVar5) {
            if ((char)puVar5[0x1d] == '\0') {
              LOCK();
              *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
              UNLOCK();
              *(undefined1 *)(puVar5 + 0x1d) = 1;
            }
          }
          KeReleaseMutex(&DAT_000213c0);
          if (((puVar7[-0x1c] & 4) == 0) && (*(ushort **)puVar2 != puVar2)) {
            puVar6 = (ushort *)(*(longlong *)puVar2 + -0x50);
            FUN_00019e08();
            RxReference(puVar6);
            RxPurgeChangeBufferingStateRequestsForSrvOpen((longlong ****)(puVar7 + -0x34));
            RxCloseAssociatedSrvOpen((ulonglong *)0x0,(ulonglong)puVar6);
            FUN_00036fe8();
            RxDereference(puVar6,2);
            puVar6 = *(ushort **)puVar1;
          }
        }
      }
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
    if (!bVar3) {
      FUN_00036fe8();
      LOCK();
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      UNLOCK();
      uVar8 = 0x124f;
      goto LAB_00035ffd;
    }
  }
  RxRemoveNameNetFcb((longlong)param_1);
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xf7ffffff | 0x80;
  FUN_00036fe8();
  cVar4 = RxpDereferenceAndFinalizeNetFcb(param_1,(char *)0x0,'\0','\0');
  if (cVar4 != '\0') {
    return;
  }
  uVar8 = 0x1246;
LAB_00035ffd:
  __RxReleaseFcb(0,(longlong)param_1,uVar8,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
  return;
}




void FUN_00036030(ushort *param_1)

{
  RxOrphanSrvOpensForThisFcb(param_1,0,'\x01');
  return;
}




/* Library Function - Single Match
    RxCreateNetFobx
   
   Library: Visual Studio 2019 Release */

void RxCreateNetFobx(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong *extraout_RAX;
  undefined4 uVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong *local_res10;
  
  lVar1 = *(longlong *)(param_2 + 4);
  uVar6 = (byte)~*(byte *)(lVar1 + 0x74) >> 2 & 1;
  if (((*(uint *)(lVar1 + 0x74) >> 0x1e & 1) == 0) && (param_2 == *(ushort **)(lVar1 + 0x148))) {
    local_res10 = *(ulonglong **)(lVar1 + 0x150);
    RxAllocateFcbObject(*(longlong *)(lVar1 + 0x130),0xeb07,uVar6,0,local_res10);
    *(uint *)(lVar1 + 0x74) = *(uint *)(lVar1 + 0x74) | 0x40000000;
  }
  else {
    if ((*(uint *)(param_2 + 0x18) >> 0x11 & 1) != 0) {
      RxAllocateFcbObject(*(longlong *)(lVar1 + 0x130),0xeb07,uVar6,0,(ulonglong *)0x0);
      uVar4 = 0;
      local_res10 = extraout_RAX;
      goto LAB_00036100;
    }
    local_res10 = *(ulonglong **)(param_2 + 0x5c);
    RxAllocateFcbObject(*(longlong *)(lVar1 + 0x130),0xeb07,uVar6,0,local_res10);
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20000;
  }
  uVar4 = 0x4000000;
LAB_00036100:
  if (local_res10 != (ulonglong *)0x0) {
    *(undefined4 *)(local_res10 + 5) = uVar4;
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x30) == 7) {
        if (*(int *)(lVar2 + 0x5c) != 0) {
          local_res10[0x16] = (ulonglong)(uint)(*(int *)(lVar2 + 0x5c) * 10000);
          *(uint *)((longlong)local_res10 + 0xac) =
               *(uint *)(lVar2 + 0x60) / *(uint *)(lVar2 + 0x5c);
          *(undefined4 *)(local_res10 + 0x15) = 0;
        }
      }
      else if ((*(int *)(lVar2 + 0x30) == 0x11) && (*(int *)(lVar2 + 0x58) != 0)) {
        local_res10[0x18] = (ulonglong)(uint)(*(int *)(lVar2 + 0x58) * 10000);
        *(uint *)((longlong)local_res10 + 0xbc) = *(uint *)(lVar2 + 0x5c) / *(uint *)(lVar2 + 0x58);
        *(undefined4 *)(local_res10 + 0x17) = 0;
      }
    }
    if ((*(byte *)(param_1 + 0x21c) & 1) != 0) {
      *(uint *)(local_res10 + 5) = (uint)local_res10[5] | 0x2000000;
    }
    if ((*(uint *)(param_1 + 0x1ac) >> 0xe & 1) != 0) {
      *(uint *)(local_res10 + 5) = (uint)local_res10[5] | 4;
    }
    *(undefined4 *)(local_res10 + 9) = 0;
    local_res10[1] = (ulonglong)param_2;
    *(undefined4 *)((longlong)local_res10 + 4) = 1;
    *(undefined1 *)((longlong)local_res10 + 0x8a) = 0;
    local_res10[0x1e] = *(ulonglong *)(lVar1 + 0x130);
    FUN_00019e08();
    RxReference(param_2);
    LOCK();
    *(int *)(*(longlong *)(param_2 + 8) + 0x28) = *(int *)(*(longlong *)(param_2 + 8) + 0x28) + 1;
    UNLOCK();
    puVar3 = *(undefined8 **)(param_2 + 0x58);
    puVar5 = local_res10 + 10;
    local_res10[0xb] = (ulonglong)puVar3;
    *puVar5 = (ulonglong)(param_2 + 0x54);
    *puVar3 = puVar5;
    *(ulonglong **)(param_2 + 0x58) = puVar5;
    puVar5 = local_res10 + 0xe;
    local_res10[0xf] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
    puVar5 = local_res10 + 0xc;
    local_res10[0xd] = (ulonglong)puVar5;
    *puVar5 = (ulonglong)puVar5;
    local_res10[0x10] = 0;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xa3,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  return;
}




/* Library Function - Single Match
    RxCreateSrvOpen
   
   Library: Visual Studio 2019 Release */

void RxCreateSrvOpen(ushort *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong *extraout_RAX;
  undefined4 uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong *local_res20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb0) + 8);
  uVar5 = (byte)~*(byte *)(param_2 + 0x74) >> 2 & 1;
  local_res20 = *(ulonglong **)(param_2 + 0x148);
  if ((((local_res20 == (ulonglong *)0x0) || (*(int *)(param_2 + 0x74) < 0)) ||
      (((uint)local_res20[6] >> 0x10 & 1) != 0)) ||
     ((ulonglong *)local_res20[0xd] != local_res20 + 0xd)) {
    RxAllocateFcbObject(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x18),0xeb1c,uVar5,0,
                        (ulonglong *)0x0);
    uVar3 = 0;
    local_res20 = extraout_RAX;
  }
  else {
    RxAllocateFcbObject(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x18),0xeb1d,uVar5,0,local_res20);
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) | 0x80000000;
    uVar3 = 0x30000;
  }
  if (local_res20 != (ulonglong *)0x0) {
    *(undefined4 *)(local_res20 + 6) = uVar3;
    local_res20[1] = param_2;
    local_res20[7] = param_2 + 0x110;
    local_res20[2] = (ulonglong)param_1;
    *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_2 + 0x1b8);
    FUN_00019e08();
    RxReference(param_1);
    LOCK();
    *(int *)(*(longlong *)(param_1 + 4) + 0x28) = *(int *)(*(longlong *)(param_1 + 4) + 0x28) + 1;
    UNLOCK();
    *(undefined4 *)((longlong)local_res20 + 4) = 1;
    FUN_00019e08();
    LOCK();
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
    UNLOCK();
    puVar4 = local_res20 + 0xd;
    puVar2 = *(undefined8 **)(param_2 + 0xa0);
    *puVar4 = param_2 + 0x98;
    local_res20[0xe] = (ulonglong)puVar2;
    *puVar2 = puVar4;
    *(ulonglong **)(param_2 + 0xa0) = puVar4;
    *(int *)(param_2 + 0xa8) = *(int *)(param_2 + 0xa8) + 1;
    puVar4 = local_res20 + 0x15;
    local_res20[0x16] = (ulonglong)puVar4;
    *puVar4 = (ulonglong)puVar4;
    puVar4 = local_res20 + 0x13;
    local_res20[0x14] = (ulonglong)puVar4;
    *puVar4 = (ulonglong)puVar4;
    puVar4 = local_res20 + 0x11;
    local_res20[0x12] = (ulonglong)puVar4;
    *puVar4 = (ulonglong)puVar4;
    puVar4 = local_res20 + 0x18;
    local_res20[0x19] = (ulonglong)puVar4;
    *puVar4 = (ulonglong)puVar4;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xa1,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  return;
}




/* Library Function - Single Match
    RxCreateNetFcb
   
   Library: Visual Studio 2019 Release */

longlong RxCreateNetFcb(longlong param_1,longlong param_2,ushort *param_3,ushort *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong extraout_RAX;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  byte bVar8;
  
  lVar3 = *(longlong *)(param_3 + 4);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x18);
  bVar8 = *(byte *)(*(longlong *)(param_2 + 0xb8) + 2) >> 1 & 1;
  if (((*(byte *)(*(longlong *)(param_2 + 0xb8) + 2) & 4) == 0) ||
     ((*(byte *)(lVar3 + 0x20) & 1) != 0)) {
    uVar6 = 0xec00;
  }
  else {
    uVar6 = 0xecff;
  }
  puVar7 = RxAllocateFcbObject(lVar5,uVar6,(uint)(bVar8 == 0),
                               (uint)*(ushort *)(lVar3 + 0x40) + (uint)*param_4,(ulonglong *)0x0);
  if (extraout_RAX != 0) {
    uVar2 = *(undefined1 *)(lVar3 + 0x2d);
    *(longlong *)(extraout_RAX + 0x130) = lVar5;
    *(undefined1 *)(extraout_RAX + 0x97) = uVar2;
    uVar4 = *(undefined8 *)(lVar5 + 0x168);
    *(undefined8 *)(extraout_RAX + 0x140) = 0;
    *(undefined8 *)(extraout_RAX + 0x138) = uVar4;
    *(ushort **)(extraout_RAX + 0xb0) = param_3;
    *(undefined8 *)(extraout_RAX + 0x58) = *(undefined8 *)(param_3 + 4);
    lVar5 = extraout_RAX + 0x98;
    *(longlong *)(extraout_RAX + 0xa0) = lVar5;
    *(longlong *)lVar5 = lVar5;
    *(undefined4 *)(extraout_RAX + 0xa8) = 0;
    *(ulonglong *)(extraout_RAX + 0xf0) =
         (ulonglong)*(ushort *)(lVar3 + 0x40) + (longlong)*(void **)(extraout_RAX + 0x118);
    *(ushort *)(extraout_RAX + 0xe8) = *param_4;
    *(ushort *)(extraout_RAX + 0xea) = *param_4;
    memcpy(*(void **)(extraout_RAX + 0x118),*(void **)(lVar3 + 0x48),
           (ulonglong)*(ushort *)(lVar3 + 0x40));
    memcpy(*(void **)(extraout_RAX + 0xf0),*(void **)(param_4 + 4),(ulonglong)*param_4);
    if ((*(byte *)(param_1 + 0x21c) & 4) != 0) {
      *(uint *)(extraout_RAX + 0x74) = *(uint *)(extraout_RAX + 0x74) | 0x20000000;
    }
    lVar5 = *(longlong *)(extraout_RAX + 0xb8) + 0xf0;
    *(longlong *)(*(longlong *)(extraout_RAX + 0xb8) + 0xf8) = lVar5;
    *(longlong *)lVar5 = lVar5;
    if (bVar8 != 0) {
      *(uint *)(extraout_RAX + 0x74) = *(uint *)(extraout_RAX + 0x74) | 4;
    }
    if ((*(byte *)(param_1 + 0x21c) & 0x10) != 0) {
      *(uint *)(extraout_RAX + 0x74) = *(uint *)(extraout_RAX + 0x74) | 0x20000;
    }
    *(longlong *)(extraout_RAX + 8) = *(longlong *)(extraout_RAX + 0xb8) + 0x20;
    ExInitializeResourceLite();
    *(longlong *)(extraout_RAX + 0x10) = *(longlong *)(extraout_RAX + 0xb8) + 0x88;
    ExInitializeResourceLite();
    *(longlong *)(extraout_RAX + 600) = *(longlong *)(extraout_RAX + 0xb8) + 0x170;
    ExInitializeResourceLite();
    if ((char)puVar7 == '\0') {
      RxFcbTableInsertFcb(lVar3 + 0x138,extraout_RAX);
    }
    else {
      *(uint *)(extraout_RAX + 0x74) = *(uint *)(extraout_RAX + 0x74) | 0x10001000;
      lVar3 = extraout_RAX + 0xf8;
      *(longlong *)(extraout_RAX + 0x100) = lVar3;
      *(longlong *)lVar3 = lVar3;
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x9d,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
    FUN_00019e08();
    RxReference(param_3);
    LOCK();
    piVar1 = (int *)(*(longlong *)(extraout_RAX + 0x58) + 0x24);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(undefined4 *)(extraout_RAX + 0x1b8) = 0;
    FUN_00019e08();
    LOCK();
    *(int *)(extraout_RAX + 0x70) = *(int *)(extraout_RAX + 0x70) + 1;
    UNLOCK();
  }
  return extraout_RAX;
}




/* Library Function - Single Match
    RxOrphanSrvOpens
   
   Library: Visual Studio 2019 Release */

void RxOrphanSrvOpens(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x2d) != '\x05') {
    ExAcquireResourceExclusiveLite(lVar2 + 0x150,1);
    for (uVar4 = 0; uVar4 < *(ushort *)(lVar2 + 0x142); uVar4 = uVar4 + 1) {
      puVar3 = (undefined8 *)(((ulonglong)uVar4 + 0x1c) * 0x10 + lVar2);
      puVar5 = (undefined8 *)*puVar3;
      while (puVar5 != puVar3) {
        puVar1 = (ushort *)(puVar5 + -0x1f);
        puVar5 = (undefined8 *)*puVar5;
        RxOrphanSrvOpensForThisFcb(puVar1,param_1,'\0');
      }
    }
    if (*(longlong *)(lVar2 + 0x1b8) != 0) {
      RxOrphanSrvOpensForThisFcb((ushort *)(*(longlong *)(lVar2 + 0x1b8) + -0xe0),param_1,'\0');
    }
    ExReleaseResourceLite(lVar2 + 0x150);
  }
  return;
}




/* Library Function - Single Match
    RxFinalizeVNetRoot
   
   Library: Visual Studio 2019 Release */

undefined8 RxFinalizeVNetRoot(longlong param_1,undefined8 param_2,char param_3)

{
  ushort *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  puVar1 = *(ushort **)(param_1 + 8);
  uVar5 = 0;
  lVar4 = *(longlong *)(puVar1 + 4);
  lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x2a0);
  if ((*(int *)(param_1 + 4) == 1) || (param_3 != '\0')) {
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      lVar4 = WmlTrace(0x9c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_00019e08();
      RxReference(puVar1);
      RxOrphanSrvOpens(param_1);
      RxRemoveVirtualNetRootFromNetRoot((longlong)puVar1,param_1);
      FUN_00036fe8();
      RxDereference(puVar1,2);
      lVar4 = RxRemovePrefixTableEntry(lVar2,param_1 + 0x70);
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    if (*(int *)(param_1 + 4) == 1) {
      if ((*(longlong *)(*(longlong *)(puVar1 + 4) + 0x18) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(*(longlong *)(*(longlong *)(puVar1 + 4) + 0x18) + 0x168)
                             + 0x1b8), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1,0);
      }
      RxUninitializeVNetRootParameters
                (*(longlong *)(param_1 + 0x40),*(longlong *)(param_1 + 0x38),
                 *(longlong *)(param_1 + 0x48),(uint *)(param_1 + 0x20));
      FUN_00036fe8();
      RxDereference(puVar1,2);
      lVar4 = ExFreePoolWithTag(param_1,0);
      uVar5 = 1;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),uVar5);
}




/* Library Function - Single Match
    RxFinalizeConnection
   
   Library: Visual Studio 2019 Release */

uint RxFinalizeConnection(ushort *param_1,longlong ***param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort uVar11;
  bool bVar12;
  int local_70;
  
  uVar10 = 0;
  local_70 = 0;
  bVar12 = param_3 == 1;
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x18) + 0x2a0);
  uVar8 = RxCancelNotifyChangeDirectoryRequestsForVNetRoot(param_2,bVar12);
  if ((uVar8 == 0) || (param_3 != 0)) {
    uVar8 = 0;
    cVar6 = ExAcquireResourceExclusiveLite(lVar4 + 0x18,1);
    FUN_00019e08();
    RxReference(param_1);
    cVar7 = ExAcquireResourceExclusiveLite(param_1 + 0xa8);
    if (*(char *)((longlong)param_2 + 0x61) == '\0') {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x99,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      for (uVar11 = 0; uVar11 < param_1[0xa1]; uVar11 = uVar11 + 1) {
        puVar5 = *(ushort **)(param_1 + ((ulonglong)uVar11 + 0x1c) * 8);
        while (puVar9 = puVar5, puVar9 != param_1 + ((ulonglong)uVar11 + 0x1c) * 8) {
          puVar5 = *(ushort **)puVar9;
          puVar1 = puVar9 + -0x7c;
          if (*(longlong ****)(puVar9 + -0x24) == param_2) {
            if ((*(int *)(puVar9 + -0x40) == 0) || (bVar12)) {
              uVar8 = __RxAcquireFcb((longlong)puVar1,0,1,0x536,
                                     "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\fcbstruc.c");
              *(uint *)(puVar9 + -0x42) = *(uint *)(puVar9 + -0x42) & 0xffbfffff;
              RxScavengeRelatedFobxs((longlong)puVar1);
              RxPurgeFcb(puVar1);
              uVar10 = uVar8;
            }
            else {
              uVar10 = 0xc0000108;
              uVar8 = 0xc0000108;
              if (*puVar1 != 0xec02) {
                local_70 = local_70 + 1;
              }
            }
          }
        }
      }
      if (*(int *)(param_2 + 5) == 0) {
        *(undefined1 *)((longlong)param_2 + 0x61) = 1;
      }
    }
    iVar2 = *(int *)(param_2 + 5);
    iVar3 = *(int *)(param_2 + 0xd);
    if (bVar12) {
      RxFinalizeVNetRoot((longlong)param_2,0,'\x01');
    }
    if (cVar7 != '\0') {
      ExReleaseResourceLite(param_1 + 0xa8);
    }
    if (((!bVar12) && (uVar8 == 0)) && (uVar10 = uVar8, iVar2 != 0)) {
      uVar8 = 0xc0000107;
      uVar10 = 0xc0000107;
    }
    if ((uVar8 != 0) && (uVar8 = uVar10, local_70 != 0)) {
      uVar8 = 0xc0000107;
    }
    if (((uVar8 == 0) || (param_3 == 0xff)) && (iVar3 != 0)) {
      *(undefined4 *)(param_2 + 0xd) = 0;
      FUN_00036fe8();
      RxDereference((ushort *)param_2,2);
    }
    if (cVar6 != '\0') {
      FUN_00036fe8();
      RxDereference(param_1,2);
      ExReleaseResourceLite(lVar4 + 0x18);
    }
  }
  return uVar8;
}




/* Library Function - Single Match
    RxFinalizeNetTable
   
   Library: Visual Studio 2019 Release */

void RxFinalizeNetTable(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  ushort *puVar6;
  bool bVar7;
  int iVar8;
  undefined7 in_register_00000011;
  undefined *puVar9;
  undefined7 uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  
  lVar5 = *(longlong *)(param_1 + 0x2a0);
  bVar7 = true;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    in_register_00000011 = 0x204;
    WmlTrace(0x97,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  lVar1 = lVar5 + 0x18;
  ExAcquireResourceExclusiveLite(lVar1,CONCAT71(in_register_00000011,1));
  puVar9 = (undefined *)0x0;
  uVar12 = 0xeb12;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  puVar2 = (undefined8 *)(lVar5 + 8);
  do {
    puVar11 = (undefined8 *)*puVar2;
    while (puVar11 != puVar2) {
      puVar6 = (ushort *)puVar11[5];
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        puVar9 = &DAT_000204b0;
        WmlTrace(0x98,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      puVar11 = (undefined8 *)*puVar11;
      if ((puVar6 != (ushort *)0x0) &&
         (RxpUndoScavengerFinalizationMarking(puVar6), *puVar6 == uVar12)) {
        uVar4 = *puVar6;
        uVar10 = (undefined7)((ulonglong)puVar9 >> 8);
        if (uVar4 == 0xeb10) {
          puVar9 = (undefined *)CONCAT71(uVar10,param_2);
          RxFinalizeSrvCall((longlong)puVar6,param_2);
        }
        else if (uVar4 == 0xeb11) {
          puVar9 = (undefined *)CONCAT71(uVar10,1);
          RxFinalizeNetRoot((longlong)puVar6,'\x01',param_2);
        }
        else if (uVar4 == 0xeb12) {
          puVar3 = puVar6 + 0x34;
          LOCK();
          iVar8 = *(int *)puVar3;
          if (iVar8 == 1) {
            puVar3[0] = 0;
            puVar3[1] = 0;
            iVar8 = 1;
          }
          UNLOCK();
          if (iVar8 == 0) {
            puVar9 = (undefined *)CONCAT71(uVar10,1);
            RxFinalizeVNetRoot((longlong)puVar6,puVar9,param_2);
          }
          else {
            FUN_00036fe8();
            puVar9 = (undefined *)0x0;
            RxDereference(puVar6,2);
          }
        }
      }
    }
    if (uVar12 == 0xeb10) {
      bVar7 = false;
    }
    else if (uVar12 == 0xeb11) {
      uVar12 = 0xeb10;
    }
    else if (uVar12 == 0xeb12) {
      uVar12 = 0xeb11;
    }
  } while (bVar7);
  KeReleaseMutex(&DAT_000213c0,0);
  ExReleaseResourceLite(lVar1);
  return;
}




undefined1 FUN_00036fe8(void)

{
  return 1;
}




/* Library Function - Single Match
    RxUninitializeLog
   
   Library: Visual Studio 2019 Release */

void RxUninitializeLog(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((DAT_00020e28 != 0) && (DAT_00020e28 != 3)) {
    DAT_00020e28 = 0;
    plVar4 = DAT_00020e40;
    while( true ) {
      plVar4 = plVar4 + 1;
      lVar3 = *plVar4;
      if (lVar3 == 0) break;
      uVar1 = *(uint *)(lVar3 + 0x2c);
      lVar2 = *(longlong *)(lVar3 + 0x20);
      MmUnlockPages(lVar3);
      IoFreeMdl(lVar3);
      ExFreePoolWithTag((ulonglong)uVar1 + lVar2,0);
    }
    ExFreePoolWithTag(DAT_00020e38,0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000372ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitializeLog
   
   Library: Visual Studio 2019 Release */

undefined4 RxInitializeLog(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uStackX_c;
  int local_res18;
  longlong *local_res20;
  ulonglong uVar10;
  
  iVar6 = 100;
  local_res18 = 100;
  if (DAT_00020e28 == 0) {
    _DAT_00020e20 = 0;
    _DAT_00020e48 = 0;
    puVar2 = (undefined8 *)ExAllocatePoolWithTag(0,0x328,0x7872);
    if (puVar2 == (undefined8 *)0x0) {
      DAT_00020e28 = 3;
      DbgPrint("Couldn\'t initialize log1");
      uVar1 = 0xc000009a;
    }
    else {
      local_res20 = puVar2 + 1;
      DAT_00020e38 = puVar2;
      DAT_00020e40 = puVar2;
      *local_res20 = 0;
      uVar7 = 0;
      puVar5 = (undefined4 *)((ulonglong)uStackX_c << 0x20);
      puVar9 = puVar2;
      for (uVar8 = 0; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (uVar7 < 8) {
          uVar7 = uVar8 * 0x30;
          if (0x40000 < uVar7) {
            uVar7 = 0x40000;
          }
          while ((lVar3 = ExAllocatePoolWithTag(1,uVar7,0x7872), lVar3 == 0 &&
                 (DbgPrint("InitLog: failed alloc at %08lx",uVar7), 0xfff < uVar7))) {
            uVar7 = uVar7 >> 3;
            uVar8 = uVar7 / 0x30;
          }
          if (lVar3 == 0) {
            DAT_00020e28 = 3;
            DbgPrint("Couldn\'t initialize log2");
            ExFreePoolWithTag(puVar2,0);
            return 0xc000009a;
          }
          if (iVar6 == 0) {
            DAT_00020e28 = 3;
            DbgPrint("Couldn\'t initialize log3");
            ExFreePoolWithTag(lVar3,0);
            ExFreePoolWithTag(puVar2,0);
            return 0xc000009a;
          }
          uVar10 = 0;
          lVar4 = IoAllocateMdl(lVar3,uVar7,0,0,0);
          if (lVar4 == 0) {
            DAT_00020e28 = 3;
            DbgPrint("Couldn\'t initialize log4");
LAB_00037359:
            ExFreePoolWithTag(lVar3,0);
            ExFreePoolWithTag(puVar2,0);
            return 0xc000009a;
          }
          MmProbeAndLockPages(lVar4,0,2);
          iVar6 = local_res18 + -1;
          *local_res20 = lVar4;
          local_res20 = local_res20 + 1;
          *local_res20 = 0;
          if ((*(byte *)(lVar4 + 10) & 5) == 0) {
            puVar5 = (undefined4 *)
                     MmMapLockedPagesSpecifyCache(lVar4,0,1,0,uVar10 & 0xffffffff00000000,0);
          }
          else {
            puVar5 = *(undefined4 **)(lVar4 + 0x18);
          }
          local_res18 = iVar6;
          if (puVar5 == (undefined4 *)0x0) {
            DAT_00020e28 = 3;
            DbgPrint("Couldn\'t initialize log5");
            MmUnlockPages(lVar4);
            ExFreePoolWithTag(lVar4,0);
            goto LAB_00037359;
          }
        }
        *puVar9 = puVar5;
        *puVar5 = 0x232323;
        puVar5 = puVar5 + 0xc;
        uVar7 = uVar7 - 0x30;
        puVar9 = puVar9 + 1;
      }
      *puVar9 = 0xfffffffff00df00d;
      DAT_00020e28 = 1;
      _DAT_00020e30 = puVar2 + -1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




/* Library Function - Single Match
    RxResumeBlockedOperations_ALL
   
   Library: Visual Studio 2019 Release */

void RxResumeBlockedOperations_ALL(longlong param_1)

{
  longlong *plVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_18;
  undefined8 **ppuStack_10;
  
  ExAcquireFastMutex(*(undefined8 *)(param_1 + 0x158));
  plVar1 = (longlong *)(param_1 + 0x148);
  if ((longlong *)*plVar1 == plVar1) {
    ppuStack_10 = &local_18;
    local_18 = &local_18;
  }
  else {
    local_18 = (undefined8 **)*plVar1;
    ppuStack_10 = *(undefined8 ***)(param_1 + 0x150);
    ((undefined8 ***)local_18)[1] = &local_18;
    *ppuStack_10 = &local_18;
    *(longlong **)(param_1 + 0x150) = plVar1;
    *plVar1 = (longlong)plVar1;
  }
  ExReleaseFastMutex(*(undefined8 *)(param_1 + 0x158));
  for (pppuVar2 = (undefined8 ***)local_18; pppuVar2 != &local_18;
      pppuVar2 = (undefined8 ***)*pppuVar2) {
    *(uint *)(pppuVar2 + -0x17) = *(uint *)(pppuVar2 + -0x17) & 0xffefffff;
    KeSetEvent(pppuVar2 + -6,0,0);
  }
  return;
}




/* Library Function - Single Match
    RxResumeBlockedOperations_Serially
   
   Library: Visual Studio 2019 Release */

void RxResumeBlockedOperations_Serially(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  ExAcquireFastMutex(&DAT_00021be0);
  if ((*(uint *)(param_1 + 400) & 2) != 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffd;
    lVar1 = *(longlong *)(param_1 + 0x160);
    plVar2 = *(longlong **)(param_1 + 0x168);
    *plVar2 = lVar1;
    *(longlong **)(lVar1 + 8) = plVar2;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (param_2 == (longlong *)*param_2) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)*param_2 + -0x2c;
    }
    if (plVar2 != (longlong *)0x0) {
      if ((*(uint *)(plVar2 + 0x15) >> 0xc & 1) == 0) {
        *(uint *)(plVar2 + 0x15) = *(uint *)(plVar2 + 0x15) & 0xffefffff;
        KeSetEvent(plVar2 + 0x26,0,0);
      }
      else {
        RxFsdPostRequest((longlong)plVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00037535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseFastMutex(&DAT_00021be0);
  return;
}




/* Library Function - Single Match
    RxCancelBlockingOperation
   
   Library: Visual Studio 2019 Release */

void RxCancelBlockingOperation(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  bVar2 = false;
  ExAcquireFastMutex(&DAT_00021be0);
  if (((*(uint *)(param_1 + 400) & 2) != 0) && (*(longlong *)(param_1 + 0x160) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x30);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x20);
    }
    if ((param_1 != *(longlong *)(lVar3 + 0xd0) + -0x160) &&
       (param_1 != *(longlong *)(lVar3 + 0xe0) + -0x160)) {
      *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffd;
      plVar1 = *(longlong **)(param_1 + 0x168);
      lVar3 = *(longlong *)(param_1 + 0x160);
      *plVar1 = lVar3;
      *(longlong **)(lVar3 + 8) = plVar1;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0xc0000120;
      if ((*(uint *)(param_1 + 0xa8) >> 0xc & 1) == 0) {
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xffefffff;
        KeSetEvent(param_1 + 0x130,0,0);
      }
      else {
        bVar2 = true;
      }
    }
  }
  ExReleaseFastMutex(&DAT_00021be0);
  if (bVar2) {
    RxFsdPostRequest(param_1);
  }
  return;
}




/* Library Function - Single Match
    RxRemoveOperationFromBlockingQueue
   
   Library: Visual Studio 2019 Release */

void RxRemoveOperationFromBlockingQueue(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  ExAcquireFastMutex(&DAT_00021be0);
  if ((*(uint *)(param_1 + 400) & 2) != 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffd;
    plVar1 = *(longlong **)(param_1 + 0x168);
    lVar2 = *(longlong *)(param_1 + 0x160);
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000376b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseFastMutex(&DAT_00021be0);
  return;
}




/* Library Function - Single Match
    __RxSynchronizeBlockingOperations
   
   Library: Visual Studio 2019 Release */

undefined4
__RxSynchronizeBlockingOperations(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 local_24;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  bVar5 = false;
  bVar3 = false;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  ExAcquireFastMutex(&DAT_00021be0);
  if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 2;
    puVar4 = (undefined8 *)(param_1 + 0x160);
    plVar2 = (longlong *)param_3[1];
    *puVar4 = param_3;
    *(longlong **)(param_1 + 0x168) = plVar2;
    *plVar2 = (longlong)puVar4;
    param_3[1] = (longlong)puVar4;
    if (param_1 != *param_3 + -0x160) {
      if ((*(uint *)(param_1 + 0xa8) >> 0xc & 1) == 0) {
        bVar3 = true;
        ExReleaseFastMutex(&DAT_00021be0);
        bVar5 = param_4 != '\0';
        if (bVar5) {
          *(undefined1 *)(param_1 + 0xac) = 0;
          __RxReleaseFcb(param_1,param_2,0x33e,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\rxcontx.c");
        }
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x100000;
        KeWaitForSingleObject(param_1 + 0x130,0,0,0,0);
      }
      else {
        *(undefined4 *)(param_1 + 0xb0) = 0x103;
        *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x800000;
        RxPrePostIrp(param_1,lVar1);
        LOCK();
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        UNLOCK();
        bVar3 = false;
      }
    }
    if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
      local_24 = *(undefined4 *)(param_1 + 0xb0);
    }
    else {
      local_24 = 0xc0000120;
    }
  }
  else {
    local_24 = 0xc0000120;
  }
  if (!bVar3) {
    ExReleaseFastMutex(&DAT_00021be0);
  }
  if ((param_4 != '\0') && (!bVar5)) {
    *(undefined1 *)(param_1 + 0xac) = 0;
    __RxReleaseFcb(param_1,param_2,0x37b,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\rxcontx.c");
  }
  return local_24;
}




/* Library Function - Single Match
    RxCompleteRequest
   
   Library: Visual Studio 2019 Release */

ulonglong RxCompleteRequest(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    DbgPrint("LoudCompletion %08lx/%08lx on %wZ\n",param_2,*(undefined8 *)(lVar1 + 0x38));
    if (((uint)param_2 != 0) && (DAT_00020620 != 0)) {
      DbgPrint("FAILURE!!!!! %08lx/%08lx on %wZ\n",param_2 & 0xffffffff,
               *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(param_1 + 0x270));
    }
  }
  RxCompleteRequest_Real(param_1,lVar1,(uint)param_2);
  return param_2 & 0xffffffff;
}




/* Library Function - Single Match
    RxInitializeContext
   
   Library: Visual Studio 2019 Release */

void RxInitializeContext(undefined8 *param_1,longlong param_2,uint param_3,undefined2 *param_4)

{
  int *piVar1;
  ushort *puVar2;
  short *psVar3;
  void *pvVar4;
  char cVar5;
  bool bVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  
  *param_4 = 0xeb08;
  param_4[1] = 0x580;
  *(undefined4 *)(param_4 + 2) = 1;
  LOCK();
  UNLOCK();
  iVar9 = DAT_00020e5c + 1;
  DAT_00020e5c = DAT_00020e5c + 1;
  *(int *)(param_4 + 0x50) = iVar9;
  *(longlong *)(param_4 + 0x2c) = param_2;
  KeInitializeEvent(param_4 + 0x98,1,0);
  *(undefined1 *)(param_4 + 0x49) = 0;
  *(undefined1 *)((longlong)param_4 + 0x93) = 0;
  *(undefined1 *)(param_4 + 0x48) = 0;
  *(undefined1 *)((longlong)param_4 + 0x91) = 0;
  puVar7 = param_4 + 0x40;
  *(undefined2 **)(param_4 + 0x44) = puVar7;
  *(undefined2 **)puVar7 = puVar7;
  *(undefined8 *)(param_4 + 0x4c) = 0;
  puVar7 = param_4 + 0xa4;
  *(undefined2 **)(param_4 + 0xa8) = puVar7;
  *(undefined2 **)puVar7 = puVar7;
  *(undefined8 *)(param_4 + 0x74) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | param_3;
  *(undefined8 **)(param_4 + 0x14) = param_1;
  pvVar4 = SystemReserved1[0xf];
  *(void **)(param_4 + 0x34) = SystemReserved1[0xf];
  *(void **)(param_4 + 0x30) = pvVar4;
  if (param_1 == (undefined8 *)0x0) {
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined1 *)(param_4 + 0xc) = 0x1c;
    *(undefined1 *)((longlong)param_4 + 0x19) = 0;
  }
  else {
    pcVar10 = (char *)param_1[0x17];
    if ((*(longlong *)(pcVar10 + 0x30) != 0) &&
       ((cVar5 = IoIsOperationSynchronous(), cVar5 == '\0' ||
        (((puVar2 = *(ushort **)(*(longlong *)(pcVar10 + 0x30) + 0x18), puVar2 != (ushort *)0x0 &&
          (((*puVar2 & 0xff00) == 0xec00 || ((*puVar2 & 0xfff0) == 0xeb90)))) &&
         (((cVar5 = *pcVar10, cVar5 == '\x03' || ((cVar5 == '\x04' || (cVar5 == '\r')))) &&
          ((*(longlong *)(puVar2 + 0x2c) != 0 &&
           (*(char *)(*(longlong *)(puVar2 + 0x2c) + 0x2d) == '\x01')))))))))) {
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 0x1000;
    }
    if ((*pcVar10 == '\f') && (pcVar10[1] == '\x02')) {
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 0x1000;
    }
    if (*pcVar10 == '\x0e') {
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 0x1000;
    }
    bVar6 = RxIsThisTheTopLevelIrp(param_1);
    if (!bVar6) {
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 0x10;
    }
    lVar8 = RxGetTopDeviceObjectIfRdbssIrp();
    if (lVar8 == param_2) {
      *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 0x20;
    }
    *(char *)(param_4 + 0xc) = *pcVar10;
    *(char *)((longlong)param_4 + 0x19) = pcVar10[1];
    *(char **)(param_4 + 0x18) = pcVar10;
    if (*(longlong *)(pcVar10 + 0x30) != 0) {
      puVar2 = *(ushort **)(*(longlong *)(pcVar10 + 0x30) + 0x18);
      psVar3 = *(short **)(*(longlong *)(pcVar10 + 0x30) + 0x20);
      *(ushort **)(param_4 + 0x1c) = puVar2;
      if ((puVar2 != (ushort *)0x0) &&
         (((*puVar2 & 0xff00) == 0xec00 || ((*puVar2 & 0xfff0) == 0xeb90)))) {
        *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(puVar2 + 0x5c);
      }
      if (((psVar3 == (short *)0x0) || (psVar3 == (short *)0xff444653)) ||
         (psVar3 == (short *)0x11444653)) {
        *(undefined8 *)(param_4 + 0x20) = 0;
      }
      else {
        *(short **)(param_4 + 0x20) = psVar3;
        *(undefined8 *)(param_4 + 0x24) = *(undefined8 *)(psVar3 + 4);
        if (*psVar3 == -0x14f9) {
          LOCK();
          piVar1 = (int *)(psVar3 + 0x24);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          *(int *)(param_4 + 0x52) = iVar9 + 1;
        }
      }
      if (((*(char *)(param_4 + 0xc) == '\f') && (*(char *)((longlong)param_4 + 0x19) == '\x02')) &&
         (psVar3 != (short *)0x0)) {
        if (*psVar3 == -0x14f9) {
          *(undefined8 *)(param_4 + 200) = *(undefined8 *)(puVar2 + 0x58);
        }
        else if (*psVar3 == -0x14ee) {
          *(short **)(param_4 + 200) = psVar3;
        }
      }
      *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(*(longlong *)(pcVar10 + 0x30) + 8);
      if ((*(byte *)(*(longlong *)(pcVar10 + 0x30) + 0x50) & 0x10) != 0) {
        *(uint *)(param_4 + 0x54) = *(uint *)(param_4 + 0x54) | 4;
      }
    }
  }
  if (((*(char *)(param_4 + 0xc) != '\x0e') && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
    lVar8 = -1;
    pcVar10 = (&PTR_s__nowait_CREATE_00020530)[*(byte *)(param_4 + 0xc)] +
              ((ulonglong)(*(uint *)(param_4 + 0x54) >> 1) & 1) * 8;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    WmlTrace(4,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return;
}




/* Library Function - Single Match
    RxReinitializeContext
   
   Library: Visual Studio 2019 Release */

void RxReinitializeContext(undefined2 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  puVar2 = *(undefined8 **)(param_1 + 0x14);
  lVar3 = *(longlong *)(param_1 + 0x2c);
  if ((char)*(ulonglong *)(param_1 + 0xc) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x21f) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0001c430((ulonglong *)(param_1 + 0xc),0,0x568);
  *(uint *)(param_1 + 0x54) = uVar1 & 0x20000201;
  RxInitializeContext(puVar2,lVar3,uVar1 & 0x18000002,param_1);
  return;
}




/* Library Function - Single Match
    RxTableLookupName_ExactLengthMatch
   
   Library: Visual Studio 2019 Release */

undefined8 *
RxTableLookupName_ExactLengthMatch(longlong param_1,ushort *param_2,uint param_3,longlong *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  undefined4 in_register_00000084;
  ulonglong uVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  undefined8 *puVar10;
  undefined8 auStack_78 [4];
  ushort local_58 [4];
  longlong local_50;
  ushort local_48 [4];
  longlong local_40;
  
  uVar7 = CONCAT44(in_register_00000084,param_3);
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  puVar10 = (undefined8 *)
            (((ulonglong)param_3 % (ulonglong)*(uint *)(param_1 + 0x8c) + 9) * 0x10 + param_1);
  puVar6 = (undefined8 *)*puVar10;
  do {
    if (puVar6 == puVar10) {
      return (undefined8 *)0x0;
    }
    if ((*(int *)(puVar6 + -1) == (int)uVar7) && (*(ushort *)(puVar6 + 4) == *param_2)) {
      uVar2 = *(ushort *)((longlong)puVar6 + -0xc);
      uVar9 = (undefined7)(uVar7 >> 8);
      if (uVar2 == 0) {
        uVar8 = CONCAT71(uVar9,uVar1);
        puVar5 = param_2;
        puVar3 = puVar6;
LAB_00037fbe:
        cVar4 = RtlEqualUnicodeString(puVar5,puVar3 + 4,uVar8);
        if ((cVar4 != '\0') && ((*(char *)(param_1 + 0x89) == '\0' || (*param_4 == puVar6[9])))) {
LAB_00037ff1:
          return puVar6 + -2;
        }
      }
      else {
        local_40 = *(longlong *)(param_2 + 4);
        local_50 = puVar6[5];
        local_58[0] = uVar2;
        local_48[0] = uVar2;
        cVar4 = RtlEqualUnicodeString(local_48,local_58,CONCAT71(uVar9,1));
        if (cVar4 != '\0') {
          if ((*param_2 == uVar2) &&
             ((*(char *)(param_1 + 0x89) == '\0' || (*param_4 == puVar6[9])))) goto LAB_00037ff1;
          local_48[0] = *param_2 - uVar2;
          local_40 = local_40 + (ulonglong)uVar2;
          local_50 = local_50 + (ulonglong)uVar2;
          local_58[0] = *(short *)(puVar6 + 4) - uVar2;
          puVar5 = local_48;
          uVar8 = 0;
          puVar3 = auStack_78;
          goto LAB_00037fbe;
        }
      }
      uVar7 = (ulonglong)param_3;
    }
    puVar6 = (undefined8 *)*puVar6;
  } while( true );
}




void FUN_00038018(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0003801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExConvertExclusiveToSharedLite(param_1 + 0x18);
  return;
}




/* Library Function - Single Match
    RxInitializePrefixTable
   
   Library: Visual Studio 2019 Release */

void RxInitializePrefixTable(undefined2 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    param_2 = 0x20;
  }
  *param_1 = 0xeb0d;
  param_1[1] = 0x290;
  puVar1 = param_1 + 4;
  *(undefined2 **)(param_1 + 8) = puVar1;
  *(undefined2 **)puVar1 = puVar1;
  ExInitializeResourceLite(param_1 + 0xc);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x44) = param_3;
  *(uint *)(param_1 + 0x46) = param_2;
  if (param_2 != 0) {
    puVar1 = param_1 + 0x48;
    uVar2 = (ulonglong)param_2;
    do {
      *(undefined2 **)(puVar1 + 4) = puVar1;
      *(undefined2 **)puVar1 = puVar1;
      puVar1 = puVar1 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




/* Library Function - Single Match
    RxRemovePrefixTableEntry
   
   Library: Visual Studio 2019 Release */

void RxRemovePrefixTableEntry(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(short *)(param_2 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x10);
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  plVar1 = *(longlong **)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x20);
  *plVar1 = lVar2;
  *(longlong **)(lVar2 + 8) = plVar1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}




/* Library Function - Single Match
    RxPrefixTableInsertName
   
   Library: Visual Studio 2019 Release */

longlong RxPrefixTableInsertName
                   (longlong param_1,longlong param_2,undefined8 param_3,int *param_4,
                   undefined2 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_2 + 0x48) = param_3;
  *(int **)(param_2 + 0x40) = param_4;
  *(undefined2 *)(param_2 + 4) = param_5;
  LOCK();
  *param_4 = *param_4 + 1;
  UNLOCK();
  uVar4 = RxTableComputeHashValue((ushort *)(param_2 + 0x30));
  *(uint *)(param_2 + 8) = uVar4;
  if (*(short *)(param_2 + 0x30) == 0) {
    *(longlong *)(param_1 + 0x80) = param_2;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x10);
    plVar5 = (longlong *)
             (((ulonglong)uVar4 % (ulonglong)*(uint *)(param_1 + 0x8c) + 9) * 0x10 + param_1);
    lVar2 = *plVar5;
    *(longlong **)(param_2 + 0x18) = plVar5;
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
    *plVar5 = (longlong)plVar1;
  }
  if (param_6 == (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x58) = *param_6;
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *plVar1 = param_1 + 8;
  *(undefined8 **)(param_2 + 0x28) = puVar3;
  *puVar3 = plVar1;
  *(longlong **)(param_1 + 0x10) = plVar1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return param_2;
}




/* Library Function - Single Match
    RxTableLookupName
   
   Library: Visual Studio 2019 Release */

ushort * RxTableLookupName(longlong param_1,ushort *param_2,short *param_3,longlong *param_4)

{
  short sVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong local_res8;
  ushort local_38 [4];
  longlong local_30;
  
  puVar8 = (ushort *)0x0;
  if ((*(char *)(param_1 + 0x89) != '\0') && (param_4 == (longlong *)0x0)) {
    param_4 = &local_res8;
    local_res8 = 0;
  }
  uVar2 = *param_2;
  lVar7 = *(longlong *)(param_2 + 4);
  uVar9 = 0;
  puVar10 = (undefined8 *)0x0;
  local_30 = lVar7;
  do {
    uVar9 = uVar9 + 1;
    if (((uVar2 >> 1 <= uVar9) || (*(short *)(lVar7 + (ulonglong)uVar9 * 2) == 0x5c)) ||
       (*(short *)(lVar7 + (ulonglong)uVar9 * 2) == 0x3a)) {
      local_38[0] = (short)uVar9 * 2;
      uVar5 = RxTableComputeHashValue(local_38);
      puVar6 = RxTableLookupName_ExactLengthMatch(param_1,local_38,uVar5,param_4);
      lVar7 = local_30;
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = (ushort *)puVar6[9];
        puVar8 = puVar3;
        if ((*puVar3 & 0xefff) == 0xeb12) goto LAB_000382c3;
        puVar10 = puVar6;
        if ((*puVar3 & 0xefff) == 0xeb11) {
          puVar8 = *(ushort **)(puVar3 + 0x5c);
          if (puVar8 == (ushort *)0x0) {
            puVar3 = puVar3 + 0x60;
            if (*(ushort **)puVar3 == puVar3) {
              puVar6 = (undefined8 *)0x0;
              puVar8 = (ushort *)0x0;
            }
            else {
              puVar8 = (ushort *)(*(longlong *)puVar3 + -0xe8);
            }
          }
          goto LAB_000382c3;
        }
      }
    }
    puVar6 = puVar10;
    puVar10 = puVar6;
    if (uVar2 >> 1 <= uVar9) {
LAB_000382c3:
      if (puVar6 == (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)param_3 = *(undefined8 *)param_2;
        *(undefined8 *)(param_3 + 4) = uVar4;
      }
      else {
        *(ulonglong *)(param_3 + 4) =
             (ulonglong)*(ushort *)(puVar6 + 6) + *(longlong *)(param_2 + 4);
        uVar2 = *param_2;
        sVar1 = *(short *)(puVar6 + 6);
        *param_3 = uVar2 - sVar1;
        param_3[1] = uVar2 - sVar1;
      }
      return puVar8;
    }
  } while( true );
}




/* Library Function - Single Match
    RxPrefixTableLookupName
   
   Library: Visual Studio 2019 Release */

ushort * RxPrefixTableLookupName(longlong param_1,ushort *param_2,short *param_3,longlong *param_4)

{
  ushort *puVar1;
  
  puVar1 = RxTableLookupName(param_1,param_2,param_3,param_4);
  if (puVar1 != (ushort *)0x0) {
    RxReference(puVar1);
  }
  return puVar1;
}




/* Library Function - Single Match
    RxReleaseFcbFromReadAhead
   
   Library: Visual Studio 2019 Release */

void RxReleaseFcbFromReadAhead(longlong param_1)

{
  RxUnwindTopLevelIrp((longlong *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00038361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseResourceLite(*(undefined8 *)(param_1 + 8));
  return;
}




/* Library Function - Single Match
    RxAcquireFcbForReadAhead
   
   Library: Visual Studio 2019 Release */

ulonglong RxAcquireFcbForReadAhead(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = ExAcquireResourceSharedLite();
  if ((char)uVar2 != '\0') {
    uVar3 = RxTryToBecomeTheTopLevelIrp((ulonglong *)0x0,2,*(ulonglong *)(param_1 + 0x130),'\x01');
    cVar1 = (char)uVar3;
    if (cVar1 == '\0') {
      uVar3 = ExReleaseResourceLite(*(undefined8 *)(param_1 + 8));
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar1);
  }
  return uVar2;
}




/* Library Function - Single Match
    RxReleaseFcbFromLazyWrite
   
   Library: Visual Studio 2019 Release */

void RxReleaseFcbFromLazyWrite(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = RxGetTopIrpIfRdbssIrp();
  if (lVar1 == 2) {
    RxUnwindTopLevelIrp((longlong *)0x0);
  }
  RxTrackPagingIoResource(param_1,3,0x2d2,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
                    /* WARNING: Could not recover jumptable at 0x00038402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExReleaseResourceLite(*(undefined8 *)(param_1 + 0x10));
  return;
}




/* Library Function - Single Match
    RxAcquireFcbForLazyWrite
   
   Library: Visual Studio 2019 Release */

char RxAcquireFcbForLazyWrite(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = ExAcquireResourceSharedLite(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    uVar3 = 2;
    RxTrackPagingIoResource(param_1,2,0x28e,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
    uVar2 = RxTryToBecomeTheTopLevelIrp
                      ((ulonglong *)0x0,uVar3,*(ulonglong *)(param_1 + 0x130),'\x01');
    cVar1 = (char)uVar2;
    if (cVar1 == '\0') {
      RxTrackPagingIoResource(param_1,3,0x2a1,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
      ExReleaseResourceLite(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return cVar1;
}




/* Library Function - Single Match
    RxVerifyOperationIsLegal
   
   Library: Visual Studio 2019 Release */

void RxVerifyOperationIsLegal(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar2 = *(char **)(*(longlong *)(param_1 + 0x28) + 0xb8);
  lVar3 = *(longlong *)(pcVar2 + 0x30);
  if (lVar3 != 0) {
    if (((*(longlong *)(param_1 + 0x40) != 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8), lVar4 != 0)) &&
       (cVar1 = *(char *)(param_1 + 0x18), cVar1 != '\x12')) {
      if ((cVar1 != '\x02') && ((*(byte *)(lVar4 + 0x30) & 0x10) != 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc00000d5;
                    /* WARNING: Subroutine does not return */
        ExRaiseStatus(0xc00000d5);
      }
      if ((cVar1 != '\x12') && ((cVar1 != '\x02' && ((*(byte *)(lVar4 + 0x30) & 0x20) != 0)))) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc0000123;
                    /* WARNING: Subroutine does not return */
        ExRaiseStatus(0xc0000123);
      }
    }
    if ((*(char *)(param_1 + 0x18) == '\0') &&
       ((*(longlong *)(lVar3 + 0x40) != 0 &&
        ((*(byte *)(*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x18) + 0x74) & 1) != 0)))) {
      *(undefined4 *)(param_1 + 0xb0) = 0xc0000056;
                    /* WARNING: Subroutine does not return */
      ExRaiseStatus(0xc0000056);
    }
    if ((((*(uint *)(lVar3 + 0x50) >> 0xe & 1) != 0) &&
        (((((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x10) & 2) == 0 &&
           (cVar1 = *pcVar2, cVar1 != '\x12')) && (cVar1 != '\x02')) &&
         ((cVar1 != '\x06' && (cVar1 != '\x05')))))) &&
       (((cVar1 != '\x03' && (cVar1 != '\x04')) || ((pcVar2[1] & 4U) == 0)))) {
      *(undefined4 *)(param_1 + 0xb0) = 0xc0000128;
                    /* WARNING: Subroutine does not return */
      ExRaiseStatus(0xc0000128);
    }
  }
  return;
}




/* Library Function - Single Match
    __RxAcquireFcb
   
   Library: Visual Studio 2019 Release */

uint __RxAcquireFcb(longlong param_1,longlong param_2,int param_3,undefined2 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  bVar2 = false;
  if ((param_2 == -1) || (param_2 == -2)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  cVar3 = ExIsResourceAcquiredExclusiveLite();
  if ((((cVar3 == '\0') && (iVar4 = ExIsResourceAcquiredSharedLite(), iVar4 == 0)) && (!bVar6)) &&
     ((*(byte *)(param_1 + 0x74) & 0x40) != 0)) {
    KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
    uVar5 = *(uint *)(param_1 + 0x74);
    KeReleaseMutex(&DAT_00021800,0);
    if ((uVar5 >> 6 & 1) != 0) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xa7,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      KeWaitForSingleObject(*(undefined8 *)(param_1 + 0xd0),0,0,0,0);
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xa8,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
    }
  }
  if (bVar6) {
    bVar6 = param_2 == -2;
    bVar1 = false;
  }
  else if (param_2 == 0) {
    bVar6 = true;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    uVar5 = *(uint *)(param_2 + 0xa8);
    bVar6 = (bool)((byte)(uVar5 >> 1) & 1);
    if (((*(char *)(param_2 + 0x18) == '\x04') && ((uVar5 >> 0xc & 1) != 0)) &&
       (((*(byte *)(*(longlong *)(param_2 + 0x28) + 0x10) & 1) != 0 ||
        (((*(uint *)(param_1 + 0x74) >> 0x1b & 1) == 0 ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + 0x30) & 2) != 0)))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((uVar5 >> 0x13 & 1) != 0) {
      return 0xc0000120;
    }
  }
  do {
    uVar5 = 0xc0000055;
    if (param_3 == 1) {
      cVar3 = ExAcquireResourceExclusiveLite(*(undefined8 *)(param_1 + 8),bVar6);
LAB_000387db:
      if (cVar3 != '\0') {
        uVar5 = 0;
        if ((*(int *)(*(longlong *)(param_1 + 0xb8) + 0x100) != 0) &&
           (((!bVar1 || (*(int *)(*(longlong *)(param_1 + 8) + 0x48) != 0)) ||
            (*(int *)(*(longlong *)(param_1 + 8) + 0x4c) != 0)))) {
          KeWaitForSingleObject(*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x108),0,0,0,0);
          __RxReleaseFcb(0,param_1,0x1b8,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
          *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + -1;
          cVar3 = '\0';
          if (bVar2) {
            uVar5 = -(uint)((*(uint *)(param_2 + 0xa8) & 0x80000) != 0) & 0xc0000120;
            cVar3 = '\0';
          }
        }
      }
      if (cVar3 != '\0') break;
    }
    else {
      if (param_3 == 2) {
        cVar3 = ExAcquireResourceSharedLite(*(undefined8 *)(param_1 + 8),bVar6);
        goto LAB_000387db;
      }
      if (param_3 == 3) {
        cVar3 = ExAcquireSharedWaitForExclusive(*(undefined8 *)(param_1 + 8),bVar6);
        goto LAB_000387db;
      }
      if (param_3 == 4) {
        cVar3 = ExAcquireSharedStarveExclusive(*(undefined8 *)(param_1 + 8),bVar6);
        goto LAB_000387db;
      }
      cVar3 = '\0';
    }
  } while (uVar5 == 0);
  if (((cVar3 != '\0') && (bVar2)) && ((*(uint *)(param_2 + 0xa8) >> 0x16 & 1) == 0)) {
    RxVerifyOperationIsLegal(param_2);
  }
  if (uVar5 == 0) {
    RxTrackerUpdateHistory(param_2,param_1,0x61616161,param_4,param_5);
  }
  return uVar5;
}




/* Library Function - Single Match
    RxAcquireExclusiveFcbResourceInMRx
   
   Library: Visual Studio 2019 Release */

void RxAcquireExclusiveFcbResourceInMRx(longlong param_1)

{
  __RxAcquireFcb(param_1,0,1,0x9f,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  return;
}




/* Library Function - Single Match
    RxReleaseFileForNtCreateSection
   
   Library: Visual Studio 2019 Release */

void RxReleaseFileForNtCreateSection(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((((*(byte *)(lVar1 + 0x74) & 8) != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x140) + 0x58), pcVar2 != (code *)0x0)) {
    (*pcVar2)();
  }
  __RxReleaseFcb(0,lVar1,0x3fd,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  return;
}




/* Library Function - Single Match
    RxAcquireFileForNtCreateSection
   
   Library: Visual Studio 2019 Release */

void RxAcquireFileForNtCreateSection(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  __RxAcquireFcb(lVar1,0,1,0x3cd,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\resrcsup.c");
  if ((((*(byte *)(lVar1 + 0x74) & 8) != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
     (pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x140) + 0x58), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1);
  }
  return;
}




/* Library Function - Single Match
    RxpSpinUpWorkerThreads
   
   Library: Visual Studio 2019 Release */

void RxpSpinUpWorkerThreads(short *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  RxSpinUpWorkerThreads(param_1);
  LOCK();
  piVar1 = (int *)(DAT_00021538 + 0x290);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    LOCK();
    lVar3 = *(longlong *)(DAT_00021538 + 0x298);
    *(longlong *)(DAT_00021538 + 0x298) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      KeSetEvent(lVar3,0,0);
    }
  }
  return;
}




/* Library Function - Single Match
    RxTearDownWorkQueueDispatcher
   
   Library: Visual Studio 2019 Release */

void RxTearDownWorkQueueDispatcher(undefined2 *param_1)

{
  RxTearDownWorkQueue(param_1 + 0x80);
  RxTearDownWorkQueue(param_1);
  RxTearDownWorkQueue(param_1 + 0x100);
  return;
}




/* Library Function - Single Match
    RxTearDownDispatcher
   
   Library: Visual Studio 2019 Release */

undefined8 RxTearDownDispatcher(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_00021b70 != 0) {
    DAT_00021b78 = 1;
    KeSetEvent(&DAT_00021b98,0,0);
    KeWaitForSingleObject(&DAT_00021bb0,0,0,0,0);
    if (DAT_00020f30 != 0) {
      cVar1 = PsIsThreadTerminating();
      if (cVar1 == '\0') {
        KeWaitForSingleObject(DAT_00020f30,0,0,0,0);
      }
      ObfDereferenceObject(DAT_00020f30);
    }
    if (0 < DAT_00021b60) {
      do {
        RxTearDownWorkQueueDispatcher((undefined2 *)((longlong)iVar2 * 0x300 + DAT_00021b70));
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00021b60);
    }
  }
  return 0;
}




/* Library Function - Single Match
    RxSpinDownMRxDispatcher
   
   Library: Visual Studio 2019 Release */

undefined8 RxSpinDownMRxDispatcher(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_28 [32];
  
  KeInitializeEvent(local_28,0,0);
  LOCK();
  *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
  UNLOCK();
  *(undefined1 **)(param_1 + 0x298) = local_28;
  LOCK();
  piVar1 = (int *)(param_1 + 0x290);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    LOCK();
    *(undefined8 *)(param_1 + 0x298) = 0;
    UNLOCK();
  }
  else {
    KeWaitForSingleObject(local_28,0,0,0,0);
  }
  return 0;
}




/* Library Function - Single Match
    RxInitializeMRxDispatcher
   
   Library: Visual Studio 2019 Release */

undefined8 RxInitializeMRxDispatcher(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  return 0;
}




/* Library Function - Single Match
    RxInitializeWorkQueue
   
   Library: Visual Studio 2019 Release */

void RxInitializeWorkQueue
               (undefined2 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)((longlong)param_1 + 3) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x16) = param_4;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  KeInitializeQueue(param_1 + 0x5c,param_3);
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




/* Library Function - Single Match
    RxInitializeWorkQueueDispatcher
   
   Library: Visual Studio 2019 Release */

void RxInitializeWorkQueueDispatcher(short *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  uint local_180;
  uint local_17c;
  undefined4 local_148 [70];
  char local_2e;
  ulonglong local_28;
  
  local_28 = DAT_00020100 ^ (ulonglong)auStack_1a8;
  uVar3 = 0;
  iVar5 = 1;
  RxInitializeWorkQueue(param_1 + 0x80,1,2,1);
  iVar1 = MmQuerySystemSize();
  iVar2 = ZwQuerySystemInformation(0,local_188,0x40,0);
  if (iVar2 == 0) {
    uVar3 = (ulonglong)local_180 * (ulonglong)local_17c;
  }
  local_148[0] = 0x11c;
  iVar2 = RtlGetVersion(local_148);
  if (iVar2 != 0) goto LAB_00038d9b;
  if (uVar3 == 0) {
    if (iVar1 != 2) goto LAB_00038d17;
LAB_00038dd0:
    if (local_2e != '\x03') goto LAB_00038d17;
    uVar4 = 10;
    iVar5 = 5;
  }
  else {
    if (511999999 < uVar3) goto LAB_00038dd0;
LAB_00038d17:
    uVar4 = 5;
  }
  RxInitializeWorkQueue(param_1,0,uVar4,iVar5);
  RxInitializeWorkQueue(param_1 + 0x100,2,5,1);
  iVar1 = RxSpinUpWorkerThread(param_1 + 0x100,&LAB_00038c68,param_1 + 0x100);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (iVar5 != 0) {
      do {
        if (iVar1 != 0) goto LAB_00038d9b;
        iVar1 = RxSpinUpWorkerThread(param_1,&LAB_00038c68,param_1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar1 != 0) goto LAB_00038d9b;
    }
    RxSpinUpWorkerThread(param_1 + 0x80,&LAB_00038c68,param_1 + 0x80);
  }
LAB_00038d9b:
  FUN_00015570(local_28 ^ (ulonglong)auStack_1a8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitializeDispatcher
   
   Library: Visual Studio 2019 Release */

int RxInitializeDispatcher(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  
  *(undefined4 *)(DAT_00021538 + 0x290) = 0;
  *(undefined8 *)(DAT_00021538 + 0x298) = 0;
  _DAT_00021418 = 0xffffffffdc3cba00;
  _DAT_00021408 = 0xfffffffffa0a1f00;
  _DAT_00021400 = 0xfffffffffa0a1f00;
  _DAT_00021410 = 0xfffffffffa0a1f00;
  DAT_00021b60 = 1;
  DAT_00021b68 = IoGetCurrentProcess();
  DAT_00021b70 = &DAT_00021840;
  uVar4 = 0;
  do {
    iVar2 = RxInitializeWorkQueueDispatcher((short *)(DAT_00021b70 + uVar4 * 0x300));
    lVar1 = DAT_00021538;
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  *(undefined4 *)(DAT_00021538 + 0x290) = 0;
  *(undefined8 *)(lVar1 + 0x298) = 0;
  KeInitializeEvent(&DAT_00021b98,0,0);
  KeInitializeEvent(&DAT_00021bb0,0,0);
  DAT_00021b78 = 0;
  _DAT_00021b90 = 0;
  DAT_00021b88 = &DAT_00021b80;
  _DAT_00021b80 = &DAT_00021b80;
  iVar2 = PsCreateSystemThread(&local_res8,0x1fffff,0,0,0,RxSpinUpRequestsDispatcher,&DAT_00021b60);
  if (-1 < iVar2) {
    ZwClose(local_res8);
  }
  return iVar2;
}




/* Library Function - Single Match
    RxGetDeviceObjectOfInstance
   
   Library: Visual Studio 2019 Release */

undefined8 RxGetDeviceObjectOfInstance(ushort *param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  uVar1 = *param_1 & 0xefff;
  if (uVar1 == 0xeb07) {
    return *(undefined8 *)(param_1 + 0x78);
  }
  if (uVar1 != 0xeb10) {
    if (uVar1 == 0xeb11) {
      lVar2 = *(longlong *)(param_1 + 4);
    }
    else {
      if (uVar1 != 0xeb12) {
        if (uVar1 != 0xeb1c) {
          return 0;
        }
        return *(undefined8 *)(*(longlong *)(param_1 + 4) + 0x130);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + 8);
    }
    return *(undefined8 *)(lVar2 + 0x18);
  }
  return *(undefined8 *)(param_1 + 0xc);
}




/* Library Function - Single Match
    RxPurgeFobx
   
   Library: Visual Studio 2019 Release */

ulonglong RxPurgeFobx(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 8);
  __RxAcquireFcb(uVar1,0,1,0x198,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
  iVar2 = RxPurgeFcbInSystemCache(uVar1,0,0,0,'\x01');
  uVar3 = __RxReleaseFcb(0,uVar1,0x1a6,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
  if (iVar2 == 0) {
    uVar3 = MmFlushImageSection(*(longlong *)(uVar1 + 0xb8) + 8,1);
    if ((char)uVar3 == '\0') {
      if ((DAT_000204e4 < 4) || ((DAT_000204e0 & 2) == 0)) goto LAB_00039069;
      uVar4 = 0xc6;
    }
    else {
      uVar3 = MmForceSectionClosed(*(longlong *)(uVar1 + 0xb8) + 8,1);
      if ((char)uVar3 != '\0') {
        if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          uVar3 = WmlTrace(200,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((DAT_000204e4 < 4) || ((DAT_000204e0 & 2) == 0)) goto LAB_00039069;
      uVar4 = 199;
    }
  }
  else {
    if ((DAT_000204e4 < 4) || ((DAT_000204e0 & 2) == 0)) goto LAB_00039069;
    uVar4 = 0xc5;
  }
  uVar3 = WmlTrace(uVar4,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
LAB_00039069:
  return uVar3 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    RxPurgeFobxFromCache
   
   Library: Visual Studio 2019 Release */

uint RxPurgeFobxFromCache(ushort *param_1)

{
  ushort *puVar1;
  char cVar2;
  uint uVar3;
  
  puVar1 = *(ushort **)(*(longlong *)(param_1 + 4) + 8);
  uVar3 = __RxAcquireFcb((longlong)puVar1,0,1,0x73,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
  if (uVar3 == 0) {
    FUN_00019e08();
    RxpReferenceNetFcb((longlong)puVar1);
    if (((*(uint *)(param_1 + 0x14) >> 0x18 & 1) == 0) &&
       (*(int *)(*(longlong *)(param_1 + 4) + 0x40) == 0)) {
      uVar3 = RxPurgeFcbInSystemCache((ulonglong)puVar1,0,0,0,'\x01');
    }
    else if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xc4,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    FUN_00036fe8();
    RxDereference(param_1,2);
    FUN_00036fe8();
    cVar2 = RxpDereferenceAndFinalizeNetFcb(puVar1,(char *)0x0,'\0','\0');
    if (cVar2 == '\0') {
      __RxReleaseFcb(0,(longlong)puVar1,0x8f,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
    }
  }
  else {
    FUN_00036fe8();
    RxDereference(param_1,0);
  }
  return uVar3;
}




/* Library Function - Single Match
    RxpUndoScavengerFinalizationMarking
   
   Library: Visual Studio 2019 Release */

void RxpUndoScavengerFinalizationMarking(ushort *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = param_1;
  lVar3 = RxGetDeviceObjectOfInstance(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x538);
  if ((*param_1 & 0x1000) != 0) {
    uVar2 = *param_1 & 0xefff;
    *puVar5 = uVar2;
    if (uVar2 == 0xeb07) {
      *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + -1;
      puVar4 = puVar5 + 0x30;
    }
    else if (uVar2 == 0xeb10) {
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + -1;
      puVar4 = puVar5 + 0x68;
    }
    else if (uVar2 == 0xeb11) {
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + -1;
      puVar4 = puVar5 + 0x48;
    }
    else if (uVar2 == 0xeb12) {
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
      puVar4 = puVar5 + 0x88;
    }
    else {
      if (uVar2 != 0xeb1c) {
        return;
      }
      *(int *)(lVar3 + 0x28) = *(int *)(lVar3 + 0x28) + -1;
      puVar4 = puVar5 + 0x44;
    }
    plVar1 = *(longlong **)(puVar4 + 4);
    lVar3 = *(longlong *)puVar4;
    *plVar1 = lVar3;
    *(longlong **)(lVar3 + 8) = plVar1;
    *(ushort **)(puVar4 + 4) = puVar4;
    *(ushort **)puVar4 = puVar4;
    LOCK();
    *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + -1;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    RxPurgeAllFobxs
   
   Library: Visual Studio 2019 Release */

void RxPurgeAllFobxs(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ushort *puVar4;
  char cVar5;
  uint uVar6;
  ushort *puVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x538) + 0x90);
  while( true ) {
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    plVar1 = (longlong *)*plVar8;
    if (plVar1 == plVar8) {
      puVar7 = (ushort *)0x0;
    }
    else {
      lVar2 = *plVar1;
      plVar3 = (longlong *)plVar1[1];
      puVar7 = (ushort *)(plVar1 + -0xe);
      *plVar3 = lVar2;
      *(longlong **)(lVar2 + 8) = plVar3;
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      FUN_00019e08();
      RxReference(puVar7);
    }
    KeReleaseMutex(&DAT_000213c0);
    if (puVar7 == (ushort *)0x0) break;
    puVar4 = *(ushort **)(*(longlong *)(puVar7 + 4) + 8);
    RxPurgeFobx((longlong)puVar7);
    uVar6 = __RxAcquireFcb((longlong)puVar4,0,1,0x349,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c")
    ;
    if (uVar6 == 0) {
      FUN_00019e08();
      RxpReferenceNetFcb((longlong)puVar4);
      FUN_00036fe8();
      RxDereference(puVar7,2);
      FUN_00036fe8();
      cVar5 = RxpDereferenceAndFinalizeNetFcb(puVar4,(char *)0x0,'\0','\0');
      if (cVar5 == '\0') {
        __RxReleaseFcb(0,(longlong)puVar4,0x34e,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
      }
    }
    else {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xcb,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      FUN_00036fe8();
      RxDereference(puVar7,0);
    }
  }
  return;
}




/* Library Function - Single Match
    RxPurgeRelatedFobxs
   
   Library: Visual Studio 2019 Release */

undefined8 RxPurgeRelatedFobxs(longlong param_1,ushort *param_2,char param_3,short *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  short *psVar6;
  code *pcVar7;
  longlong *plVar8;
  ushort *puVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ushort *puVar15;
  int iVar16;
  ushort *local_res10;
  ushort **ppuVar17;
  ushort *local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  
  lVar2 = *(longlong *)(param_2 + 0x2c);
  local_40 = &local_48;
  lVar3 = *(longlong *)(lVar2 + 0x538);
  local_48 = &local_48;
  iVar16 = 0;
  plVar1 = (longlong *)(param_1 + 0xa0);
  ppuVar17 = (ushort **)0x0;
  local_res10 = param_2;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    puVar4 = *(undefined8 **)(param_1 + 0xa8);
    puVar15 = local_res10 + 0xb0;
    *(longlong **)puVar15 = plVar1;
    *(undefined8 **)(local_res10 + 0xb4) = puVar4;
    *puVar4 = puVar15;
    *(ushort **)(param_1 + 0xa8) = puVar15;
    KeReleaseMutex(&DAT_000213c0,0);
    *(uint *)(local_res10 + 0x54) = *(uint *)(local_res10 + 0x54) | 0x100000;
    KeWaitForSingleObject(local_res10 + 0x98,0,0,0,0);
    ppuVar17 = (ushort **)0x0;
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    ppuVar17 = &local_res10;
    WmlTrace(0xde,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  lVar5 = *(longlong *)(lVar3 + 0x108);
  while (lVar5 == param_1) {
    KeReleaseMutex(&DAT_000213c0,0);
    KeWaitForSingleObject(lVar3 + 0x118,0,0,1,0);
    ppuVar17 = (ushort **)0x0;
    KeWaitForSingleObject(&DAT_000213c0);
    lVar5 = *(longlong *)(lVar3 + 0x108);
  }
  do {
    for (plVar14 = *(longlong **)(lVar3 + 0x90); puVar15 = (ushort *)0x0,
        plVar14 != (longlong *)(lVar3 + 0x90); plVar14 = (longlong *)*plVar14) {
      local_50 = (ushort *)(plVar14 + -0xe);
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        ppuVar17 = &local_50;
        WmlTrace(0xc9,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      if (((((*(longlong *)(local_50 + 4) != 0) &&
            (psVar6 = *(short **)(*(longlong *)(local_50 + 4) + 8), psVar6 != (short *)0x0)) &&
           (*(longlong *)(psVar6 + 0x58) != 0)) &&
          (*(longlong *)(*(longlong *)(psVar6 + 0x58) + 8) == param_1)) &&
         (((param_4 == (short *)0x0 || (*param_4 == -0x13fe)) ||
          ((psVar6 == param_4 ||
           ((pcVar7 = *(code **)(*(longlong *)(lVar2 + 0x168) + 0x98), pcVar7 == (code *)0x0 ||
            (iVar11 = (*pcVar7)(psVar6,param_4,pcVar7,0,ppuVar17), iVar11 != 0)))))))) {
        puVar15 = local_50;
        plVar8 = (longlong *)plVar14[1];
        lVar5 = *plVar14;
        *plVar8 = lVar5;
        *(longlong **)(lVar5 + 8) = plVar8;
        plVar14[1] = (longlong)plVar14;
        *plVar14 = (longlong)plVar14;
        if (local_50 != (ushort *)0x0) {
          FUN_00019e08();
          RxReference(puVar15);
          goto LAB_00039824;
        }
        break;
      }
    }
    plVar14 = (longlong *)*plVar1;
    if (plVar14 == plVar1) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    else {
      lVar5 = *plVar14;
      plVar8 = (longlong *)plVar14[1];
      *plVar8 = lVar5;
      *(longlong **)(lVar5 + 8) = plVar8;
      *(uint *)(plVar14 + -0x17) = *(uint *)(plVar14 + -0x17) & 0xffefffff;
      KeSetEvent(plVar14 + -6,0,0);
    }
LAB_00039824:
    KeReleaseMutex();
    if (puVar15 == (ushort *)0x0) {
      uVar13 = 0xc0000001;
      if (iVar16 != 0) {
        uVar13 = 0;
      }
      return uVar13;
    }
    uVar13 = RxPurgeFobx((longlong)puVar15);
    if ((char)uVar13 != '\0') {
      iVar16 = iVar16 + 1;
    }
    puVar9 = *(ushort **)(*(longlong *)(puVar15 + 4) + 8);
    if ((param_3 == '\0') ||
       (uVar12 = __RxAcquireFcb((longlong)puVar9,0,1,0x2ef,
                                "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c"), uVar12 != 0)) {
      FUN_00036fe8();
      RxDereference(puVar15,0);
    }
    else {
      FUN_00019e08();
      RxpReferenceNetFcb((longlong)puVar9);
      FUN_00036fe8();
      RxDereference(puVar15,2);
      FUN_00036fe8();
      cVar10 = RxpDereferenceAndFinalizeNetFcb(puVar9,(char *)0x0,'\0','\0');
      if (cVar10 == '\0') {
        __RxReleaseFcb(0,(longlong)puVar9,0x2f4,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
      }
    }
    if ((((char)uVar13 == '\0') && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xca,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    ppuVar17 = (ushort **)0x0;
    KeWaitForSingleObject(&DAT_000213c0,0);
  } while( true );
}




/* Library Function - Single Match
    RxInitializePurgeSyncronizationContext
   
   Library: Visual Studio 2019 Release */

void RxInitializePurgeSyncronizationContext(longlong param_1)

{
  *(longlong *)(param_1 + 8) = param_1;
  *(longlong *)param_1 = param_1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}




/* Library Function - Single Match
    RxMarkFobxOnClose
   
   Library: Visual Studio 2019 Release */

void RxMarkFobxOnClose(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + 0x538);
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    if ((*(uint *)(param_1 + 0x28) >> 0x1b & 1) != 0) {
      if (*(char *)(param_1 + 0x8a) == '\0') {
        LOCK();
        piVar2 = (int *)(lVar3 + 0x80);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        *(undefined1 *)(param_1 + 0x8a) = 1;
      }
      LOCK();
      piVar2 = (int *)(lVar4 + 8);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xf7ffffff;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    if ((longlong *)*plVar1 != plVar1) {
      plVar5 = *(longlong **)(param_1 + 0x78);
      lVar3 = *plVar1;
      *plVar5 = lVar3;
      *(longlong **)(lVar3 + 8) = plVar5;
      *(longlong **)(param_1 + 0x78) = plVar1;
      *plVar1 = (longlong)plVar1;
    }
    KeReleaseMutex(&DAT_000213c0,0);
  }
  return;
}




/* Library Function - Single Match
    RxScavengeVNetRoots
   
   Library: Visual Studio 2019 Release */

undefined1 RxScavengeVNetRoots(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort *puVar6;
  undefined1 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x538);
  lVar3 = *(longlong *)(param_1 + 0x2a0);
  uVar7 = 0;
  KeWaitForSingleObject(lVar2 + 0xe8,0,0,0,0);
  do {
    ExAcquireResourceExclusiveLite(lVar3 + 0x18,1);
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    if (*(int *)(lVar2 + 0x20) == 0) {
      puVar6 = (ushort *)0x0;
    }
    else {
      plVar1 = (longlong *)(lVar2 + 0x50);
      lVar4 = *(longlong *)*plVar1;
      puVar6 = (ushort *)((longlong *)*plVar1 + -0x22);
      *plVar1 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar1;
      RxpUndoScavengerFinalizationMarking(puVar6);
    }
    uVar5 = 0;
    KeReleaseMutex(&DAT_000213c0,0);
    if (puVar6 != (ushort *)0x0) {
      RxFinalizeVNetRoot((longlong)puVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),1),'\x01');
      uVar7 = 1;
    }
    ExReleaseResourceLite(lVar3 + 0x18);
  } while (puVar6 != (ushort *)0x0);
  KeSetEvent(lVar2 + 0xe8,0,0);
  return uVar7;
}




/* Library Function - Single Match
    RxScavengeRelatedFobxs
   
   Library: Visual Studio 2019 Release */

bool RxScavengeRelatedFobxs(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong ***ppplVar3;
  longlong ***ppplVar4;
  ushort *puVar5;
  longlong ****pppplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  longlong ***local_18;
  longlong ***local_10;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x538);
  bVar10 = false;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  if (*(int *)(lVar2 + 0x2c) == 0) {
    KeReleaseMutex(&DAT_000213c0,0);
  }
  else {
    puVar9 = (undefined8 *)(lVar2 + 0x80);
    local_18 = (longlong ***)&local_18;
    puVar8 = (undefined8 *)*puVar9;
    local_10 = (longlong ***)&local_18;
    while (puVar8 != puVar9) {
      puVar5 = (ushort *)(puVar8 + -0xc);
      puVar7 = (undefined8 *)*puVar8;
      plVar1 = puVar8 + -0xb;
      puVar8 = puVar7;
      if ((*plVar1 != 0) && (*(longlong *)(*plVar1 + 8) == param_1)) {
        RxpUndoScavengerFinalizationMarking(puVar5);
        pppplVar6 = (longlong ****)(puVar5 + 0x30);
        *(longlong ****)(puVar5 + 0x34) = local_10;
        *pppplVar6 = (longlong ***)&local_18;
        *local_10 = (longlong **)pppplVar6;
        puVar8 = puVar7;
        local_10 = (longlong ***)pppplVar6;
      }
    }
    KeReleaseMutex(&DAT_000213c0,0);
    bVar10 = (longlong ****)local_18 != &local_18;
    if ((longlong ****)local_18 != &local_18) {
      do {
        ppplVar3 = (longlong ***)*local_18;
        ppplVar4 = (longlong ***)local_18[1];
        *ppplVar4 = (longlong **)ppplVar3;
        ppplVar3[1] = (longlong **)ppplVar4;
        RxFinalizeNetFobx((ushort *)(local_18 + -0xc),CONCAT71((int7)((ulonglong)local_18 >> 8),1),
                          '\x01');
      } while ((longlong ****)local_18 != &local_18);
    }
  }
  return bVar10;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxScavengerFinalizeEntries
   
   Library: Visual Studio 2019 Release */

void RxScavengerFinalizeEntries(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  bool bVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  lVar2 = *(longlong *)(param_1 + 0x538);
  puVar10 = (ushort *)0x0;
  do {
    lVar4 = _DAT_fffff78000000320;
    bVar11 = false;
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    if (0 < *(int *)(lVar2 + 8)) {
      plVar3 = *(longlong **)(lVar2 + 0x90);
      puVar9 = puVar10;
      if (plVar3 != (longlong *)(lVar2 + 0x90)) {
        uVar7 = KeQueryTimeIncrement();
        if ((longlong)(100000000 / (ulonglong)uVar7 + plVar3[2]) <= lVar4) {
          lVar4 = *plVar3;
          plVar5 = (longlong *)plVar3[1];
          *plVar5 = lVar4;
          *(longlong **)(lVar4 + 8) = plVar5;
          plVar3[1] = (longlong)plVar3;
          *plVar3 = (longlong)plVar3;
          FUN_00019e08();
          RxReference((ushort *)(plVar3 + -0xe));
          *(void **)(lVar2 + 0x100) = SystemReserved1[0xf];
          *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(plVar3[-0xd] + 8);
          *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(*(longlong *)(plVar3[-0xd] + 8) + 0x58);
          KeResetEvent(lVar2 + 0x118);
          puVar9 = (ushort *)(plVar3 + -0xe);
        }
      }
      if (puVar9 != (ushort *)0x0) {
        KeReleaseMutex(&DAT_000213c0);
        uVar7 = RxPurgeFobxFromCache(puVar9);
        bVar11 = uVar7 == 0;
        KeWaitForSingleObject(&DAT_000213c0);
        *(undefined8 *)(lVar2 + 0x100) = 0;
        *(undefined8 *)(lVar2 + 0x110) = 0;
        *(undefined8 *)(lVar2 + 0x108) = 0;
        KeSetEvent(lVar2 + 0x118);
      }
    }
    if (*(int *)(lVar2 + 0x2c) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x80);
      puVar9 = *(ushort **)(*(longlong *)(lVar4 + -0x58) + 8);
      FUN_00019e08();
      RxpReferenceNetFcb((longlong)puVar9);
      *(void **)(lVar2 + 0x100) = SystemReserved1[0xf];
      *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(*(longlong *)(lVar4 + -0x58) + 8);
      *(undefined8 *)(lVar2 + 0x108) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + -0x58) + 8) + 0x58);
      KeResetEvent(lVar2 + 0x118);
      if (lVar4 != 0x60) {
        KeReleaseMutex(&DAT_000213c0);
        uVar7 = __RxAcquireFcb((longlong)puVar9,0,1,0x66b,
                               "d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
        if (uVar7 == 0) {
          bVar11 = RxScavengeRelatedFobxs((longlong)puVar9);
          FUN_00036fe8();
          cVar6 = RxpDereferenceAndFinalizeNetFcb(puVar9,(char *)0x0,'\0','\0');
          if (cVar6 == '\0') {
            __RxReleaseFcb(0,(longlong)puVar9,0x672,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\scavengr.c");
          }
        }
        else if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0xcd,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        KeWaitForSingleObject(&DAT_000213c0);
        *(undefined8 *)(lVar2 + 0x100) = 0;
        *(undefined8 *)(lVar2 + 0x110) = 0;
        *(undefined8 *)(lVar2 + 0x108) = 0;
        KeSetEvent(lVar2 + 0x118);
      }
    }
    KeReleaseMutex(&DAT_000213c0);
    if (*(int *)(lVar2 + 0x20) != 0) {
      ExAcquireResourceExclusiveLite(lVar1 + 0x18);
      KeWaitForSingleObject(&DAT_000213c0);
      puVar9 = puVar10;
      if (*(int *)(lVar2 + 0x20) != 0) {
        plVar3 = (longlong *)(lVar2 + 0x50);
        lVar4 = *(longlong *)*plVar3;
        puVar9 = (ushort *)((longlong *)*plVar3 + -0x22);
        *plVar3 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar3;
        RxpUndoScavengerFinalizationMarking(puVar9);
      }
      uVar8 = 0;
      KeReleaseMutex(&DAT_000213c0);
      if (puVar9 != (ushort *)0x0) {
        RxFinalizeVNetRoot((longlong)puVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),1),'\x01');
        bVar11 = true;
      }
      ExReleaseResourceLite(lVar1 + 0x18);
    }
    if (*(int *)(lVar2 + 0x1c) != 0) {
      ExAcquireResourceExclusiveLite(lVar1 + 0x18);
      KeWaitForSingleObject(&DAT_000213c0);
      puVar9 = puVar10;
      if (*(int *)(lVar2 + 0x1c) != 0) {
        plVar3 = (longlong *)(lVar2 + 0x40);
        lVar4 = *(longlong *)*plVar3;
        puVar9 = (ushort *)((longlong *)*plVar3 + -0x12);
        *plVar3 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar3;
        RxpUndoScavengerFinalizationMarking(puVar9);
      }
      KeReleaseMutex(&DAT_000213c0);
      if (puVar9 != (ushort *)0x0) {
        RxFinalizeNetRoot((longlong)puVar9,'\x01','\x01');
        bVar11 = true;
      }
      ExReleaseResourceLite(lVar1 + 0x18);
    }
    if (*(int *)(lVar2 + 0x18) != 0) {
      ExAcquireResourceExclusiveLite(lVar1 + 0x18);
      KeWaitForSingleObject(&DAT_000213c0);
      puVar9 = puVar10;
      if (*(int *)(lVar2 + 0x18) != 0) {
        plVar3 = (longlong *)(lVar2 + 0x30);
        lVar4 = *(longlong *)*plVar3;
        puVar9 = (ushort *)((longlong *)*plVar3 + -0x1a);
        *plVar3 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar3;
        RxpUndoScavengerFinalizationMarking(puVar9);
      }
      KeReleaseMutex(&DAT_000213c0);
      if (puVar9 != (ushort *)0x0) {
        RxFinalizeSrvCall((longlong)puVar9,'\x01');
        bVar11 = true;
      }
      ExReleaseResourceLite(lVar1 + 0x18);
    }
  } while (bVar11 != false);
  return;
}




/* Library Function - Single Match
    RxScavengerTimerRoutine
   
   Library: Visual Studio 2019 Release */

void RxScavengerTimerRoutine(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 0x538);
  bVar2 = false;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  KeResetEvent(piVar1 + 0x34);
  if (*piVar1 == 1) {
    *piVar1 = 2;
    KeReleaseMutex();
    RxScavengerFinalizeEntries(param_1);
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    if (*piVar1 == 2) {
      if (piVar1[0xb] + piVar1[10] + piVar1[9] + piVar1[8] + piVar1[7] + piVar1[6] + piVar1[2] == 0)
      {
        *piVar1 = 0;
      }
      else {
        bVar2 = true;
        *piVar1 = 1;
      }
    }
    KeReleaseMutex(&DAT_000213c0,0);
    if (bVar2) {
      RxPostOneShotTimerRequest
                (DAT_00021538,(undefined8 *)(piVar1 + 0x28),RxScavengerTimerRoutine,param_1,
                 *(longlong *)(piVar1 + 4));
    }
  }
  else {
    KeReleaseMutex(&DAT_000213c0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0003a2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeSetEvent(piVar1 + 0x34,0,0);
  return;
}




/* Library Function - Single Match
    RxpMarkInstanceForScavengedFinalization
   
   Library: Visual Studio 2019 Release */

void RxpMarkInstanceForScavengedFinalization(ushort *param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ushort *puVar5;
  ushort *puVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  puVar6 = (ushort *)0x0;
  puVar5 = param_1;
  lVar4 = RxGetDeviceObjectOfInstance(param_1);
  uVar1 = *puVar5;
  piVar2 = *(int **)(lVar4 + 0x538);
  if (*(uint *)(puVar5 + 2) < 2) {
    *param_1 = uVar1 | 0x1000;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xcc,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if (uVar1 == 0xeb07) {
      piVar2[0xb] = piVar2[0xb] + 1;
      piVar7 = piVar2 + 0x20;
      puVar6 = param_1 + 0x30;
    }
    else if (uVar1 == 0xeb10) {
      piVar2[6] = piVar2[6] + 1;
      piVar7 = piVar2 + 0xc;
      puVar6 = param_1 + 0x68;
    }
    else if (uVar1 == 0xeb11) {
      piVar2[7] = piVar2[7] + 1;
      piVar7 = piVar2 + 0x10;
      puVar6 = param_1 + 0x48;
    }
    else if (uVar1 == 0xeb12) {
      piVar2[8] = piVar2[8] + 1;
      piVar7 = piVar2 + 0x14;
      puVar6 = param_1 + 0x88;
    }
    else if (uVar1 == 0xeb1c) {
      piVar2[10] = piVar2[10] + 1;
      piVar7 = piVar2 + 0x1c;
      puVar6 = param_1 + 0x44;
    }
    LOCK();
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    UNLOCK();
    if (piVar7 != (int *)0x0) {
      puVar3 = *(undefined8 **)(piVar7 + 2);
      *(int **)puVar6 = piVar7;
      *(undefined8 **)(puVar6 + 4) = puVar3;
      *puVar3 = puVar6;
      *(ushort **)(piVar7 + 2) = puVar6;
      if (*piVar2 == 0) {
        *piVar2 = 1;
        RxPostOneShotTimerRequest
                  (DAT_00021538,(undefined8 *)(piVar2 + 0x28),RxScavengerTimerRoutine,lVar4,
                   *(longlong *)(piVar2 + 4));
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxMarkFobxOnCleanup
   
   Library: Visual Studio 2019 Release */

void RxMarkFobxOnCleanup(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ushort *puVar9;
  
  uVar7 = _DAT_fffff78000000320;
  if (param_1 != 0) {
    psVar2 = *(short **)(*(longlong *)(param_1 + 8) + 8);
    lVar3 = *(longlong *)(psVar2 + 0x98);
    puVar9 = (ushort *)0x0;
    piVar4 = *(int **)(lVar3 + 0x538);
    KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
    if ((*psVar2 == -0x13fd) &&
       (*(int *)(*(longlong *)(*(longlong *)(psVar2 + 0x58) + 8) + 0x30) == 7)) {
      if ((piVar4[1] <= piVar4[2]) && (piVar5 = *(int **)(piVar4 + 0x24), piVar5 != piVar4 + 0x24))
      {
        puVar9 = (ushort *)(piVar5 + -0x1c);
        if ((*(longlong *)(piVar5 + -0x1a) == 0) ||
           (*(short **)(*(longlong *)(piVar5 + -0x1a) + 8) != psVar2)) {
          FUN_00019e08();
          RxReference(puVar9);
        }
        else {
          *param_2 = 1;
          puVar9 = (ushort *)0x0;
        }
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x8000000;
      *(undefined8 *)(param_1 + 0x80) = uVar7;
      puVar1 = (undefined8 *)(param_1 + 0x70);
      puVar6 = *(undefined8 **)(piVar4 + 0x26);
      *puVar1 = piVar4 + 0x24;
      *(undefined8 **)(param_1 + 0x78) = puVar6;
      *puVar6 = puVar1;
      *(undefined8 **)(piVar4 + 0x26) = puVar1;
      if ((piVar4[2] == 0) && (*piVar4 == 0)) {
        *piVar4 = 1;
        RxPostOneShotTimerRequest
                  (DAT_00021538,(undefined8 *)(piVar4 + 0x28),RxScavengerTimerRoutine,lVar3,
                   *(longlong *)(piVar4 + 4));
      }
    }
    else {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x8000000;
      lVar3 = param_1 + 0x70;
      *(longlong *)(param_1 + 0x78) = lVar3;
      *(longlong *)lVar3 = lVar3;
    }
    piVar4[2] = piVar4[2] + 1;
    KeReleaseMutex(&DAT_000213c0,0);
    if ((puVar9 != (ushort *)0x0) && (uVar8 = RxPurgeFobxFromCache(puVar9), uVar8 != 0)) {
      *param_2 = 1;
    }
  }
  return;
}




/* Library Function - Single Match
    RxTerminateScavenging
   
   Library: Visual Studio 2019 Release */

void RxTerminateScavenging(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  piVar3 = *(int **)(lVar2 + 0x538);
  iVar5 = 0;
  KeWaitForSingleObject(&DAT_000213c0,0,0,0,0);
  iVar1 = *piVar3;
  *piVar3 = 3;
  KeReleaseMutex(&DAT_000213c0,0);
  if (iVar1 == 1) {
    uVar4 = RxCancelTimerRequest(DAT_00021538,0x3a1d4,lVar2);
    iVar5 = (int)uVar4;
  }
  if ((iVar1 == 2) || (iVar5 == -0x3ffffddb)) {
    KeWaitForSingleObject(piVar3 + 0x34,0,0,0,0);
  }
  RxPurgeAllFobxs(*(longlong *)(param_1 + 0x58));
  RxScavengerFinalizeEntries(*(longlong *)(param_1 + 0x58));
  return;
}




/* Library Function - Single Match
    RxTearDownRxTimer
   
   Library: Visual Studio 2019 Release */

void RxTearDownRxTimer(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  KeCancelTimer(&DAT_00021320);
  while ((undefined8 **)DAT_00021300 != &DAT_00021300) {
    puVar1 = (undefined8 *)*DAT_00021300;
    puVar2 = DAT_00021300 + -6;
    DAT_00021300 = puVar1;
    puVar1[1] = &DAT_00021300;
    ExFreePoolWithTag(puVar2,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitializeRxTimer
   
   Library: Visual Studio 2019 Release */

undefined8 RxInitializeRxTimer(void)

{
  DAT_00021318._4_4_ = 0xffffffff;
  _DAT_00021310 = 0;
  DAT_000213a8 = &DAT_000213a0;
  DAT_000213a0 = &DAT_000213a0;
  _DAT_00021308 = &DAT_00021300;
  DAT_00021300 = &DAT_00021300;
  DAT_00021318._0_4_ = 0xfff79b90;
  KeInitializeDpc(&DAT_00021360,&LAB_00019a70,0);
  KeInitializeTimer(&DAT_00021320);
  DAT_000212f8 = 0;
  return 0;
}




/* Library Function - Single Match
    RxRecurrentTimerWorkItemDispatcher
   
   Library: Visual Studio 2019 Release */

void RxRecurrentTimerWorkItemDispatcher(undefined8 *param_1)

{
  (*(code *)param_1[9])(param_1[10]);
  RxPostOneShotTimerRequest
            (param_1[4],param_1,RxRecurrentTimerWorkItemDispatcher,param_1,param_1[8]);
  return;
}




/* Library Function - Single Match
    RxLowIoGetBufferAddress
   
   Library: Visual Studio 2019 Release */

undefined8 RxLowIoGetBufferAddress(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x1d0) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    if ((*(byte *)(lVar1 + 10) & 5) == 0) {
      uVar2 = MmMapLockedPagesSpecifyCache(lVar1,0,1,0,0,0x10);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return uVar2;
}




/* Library Function - Single Match
    RxMapUserBuffer
   
   Library: Visual Studio 2019 Release */

undefined8 RxMapUserBuffer(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
  }
  else if ((*(byte *)(lVar1 + 10) & 5) == 0) {
    uVar2 = MmMapLockedPagesSpecifyCache(lVar1,0,1,0,0,0x10);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}




/* Library Function - Single Match
    RxMapSystemBuffer
   
   Library: Visual Studio 2019 Release */

undefined8 RxMapSystemBuffer(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
  }
  else if ((*(byte *)(lVar1 + 10) & 5) == 0) {
    uVar2 = MmMapLockedPagesSpecifyCache(lVar1,0,1,0,0,0x10);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}




/* Library Function - Single Match
    RxLockUserBuffer
   
   Library: Visual Studio 2019 Release */

void RxLockUserBuffer(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 8) == 0) && (param_4 != 0)) {
    lVar1 = IoAllocateMdl(*(undefined8 *)(param_2 + 0x70),param_4,0,0,param_2);
    if (lVar1 == 0) {
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc000009a;
      }
                    /* WARNING: Subroutine does not return */
      ExRaiseStatus(0xc000009a);
    }
    MmProbeAndLockPages(lVar1,*(undefined1 *)(param_2 + 0x40),param_3);
  }
  return;
}




/* Library Function - Single Match
    RxInitializeLowIoPerFcbInfo
   
   Library: Visual Studio 2019 Release */

void RxInitializeLowIoPerFcbInfo(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x10;
  *(longlong *)(param_1 + 8) = param_1;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(longlong *)lVar1 = lVar1;
  return;
}




/* Library Function - Single Match
    RxLowIoPopulateFsctlInfo
   
   Library: Visual Studio 2019 Release */

undefined8 RxLowIoPopulateFsctlInfo(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = *(uint *)(lVar1 + 0x18);
  *(uint *)(param_1 + 0x1bc) = uVar2;
  uVar2 = uVar2 & 3;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar1 + 8);
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(lVar1 + 1);
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x18);
    uVar4 = uVar3;
  }
  else if (uVar2 != 0) {
    if (uVar2 < 3) {
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x18);
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        uVar4 = uVar3;
      }
      else {
        if ((*(byte *)(lVar1 + 10) & 5) == 0) {
          lVar1 = MmMapLockedPagesSpecifyCache(lVar1,0,1,0,0,0x10);
        }
        else {
          lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        *(longlong *)(param_1 + 0x1d8) = lVar1;
        uVar4 = uVar3;
        if (lVar1 == 0) {
          uVar4 = 0xc000009a;
        }
      }
    }
    else if (uVar2 == 3) {
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x70);
    }
  }
  return uVar4;
}




/* Library Function - Single Match
    RxLowIoSubmit
   
   Library: Visual Studio 2019 Release */

ulonglong RxLowIoSubmit(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  
  lVar4 = *(longlong *)(param_2 + 0xb8);
  uVar3 = *(ushort *)(param_1 + 0x198);
  iVar7 = 0;
  *(undefined8 *)(param_1 + 0x1a0) = param_4;
  bVar13 = ~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1;
  if (((*(uint *)(param_3 + 0x74) >> 0x10 & 1) != 0) &&
     ((*(uint *)(param_1 + 0xa8) >> 0x15 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    iVar6 = RxShadowFastLowIo(param_1,param_2);
    if (iVar6 != -0x3fffffea) {
      return CONCAT44(extraout_var,iVar6);
    }
  }
  if (uVar3 < 2) {
    RxLockUserBuffer(param_1,param_2,(uint)(uVar3 == 0),*(int *)(param_1 + 0x1d0));
    lVar10 = RxMapUserBuffer(param_1,param_2);
    if (lVar10 == 0) {
      iVar7 = -0x3fffff66;
    }
    else {
      *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 8);
    }
    if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
      ExAcquireFastMutexUnsafe(&DAT_000212c0);
      *(undefined **)(param_1 + 0x158) = &DAT_000212c0;
      plVar2 = (longlong *)(param_1 + 0x160);
      lVar10 = param_3 + 0x230;
      if (uVar3 == 0) {
        lVar10 = param_3 + 0x220;
      }
      plVar5 = *(longlong **)(lVar10 + 8);
      *plVar2 = lVar10;
      *(longlong **)(param_1 + 0x168) = plVar5;
      *plVar5 = (longlong)plVar2;
      *(longlong **)(lVar10 + 8) = plVar2;
      ExReleaseFastMutexUnsafe(&DAT_000212c0);
    }
  }
  else {
    iVar7 = 0;
    if (5 < uVar3) {
      if (uVar3 < 8) {
        uVar9 = RxLowIoPopulateFsctlInfo(param_1,param_2);
        iVar7 = (int)uVar9;
        if (iVar7 != 0) goto LAB_0003ac5f;
        if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) == 0)) {
          iVar7 = -0x3ffffff3;
        }
        if ((*(int *)(param_1 + 0x1d0) == 0) || (*(longlong *)(param_1 + 0x1d8) != 0))
        goto LAB_0003ac5f;
      }
      else {
        iVar7 = 0;
        if (uVar3 < 10) goto LAB_0003ac5f;
      }
      iVar7 = -0x3ffffff3;
    }
  }
LAB_0003ac5f:
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x200000;
  if (iVar7 == 0) {
    if (bVar13 == 0) {
      LOCK();
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      UNLOCK();
      if ((*(uint *)(param_1 + 0xa8) >> 9 & 1) == 0) {
        pbVar1 = (byte *)(*(longlong *)(param_2 + 0xb8) + 3);
        *pbVar1 = *pbVar1 | 1;
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x168);
    if (lVar10 == 0) {
      iVar7 = -0x3ffffff3;
    }
    else {
      if (((*(byte *)(param_3 + 0x74) & 8) != 0) && (*(longlong *)(param_3 + 0x138) != 0)) {
        lVar10 = *(longlong *)(param_3 + 0x138);
      }
LAB_0003acb6:
      do {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        if ((*(uint *)(param_3 + 0x74) >> 0x10 & 1) == 0) {
LAB_0003ace0:
          if (*(longlong *)(lVar10 + 0x140 + (ulonglong)*(ushort *)(param_1 + 0x198) * 8) != 0) {
            if ((*(uint *)(param_1 + 0xa8) >> 0x13 & 1) == 0) {
              FUN_0001c430((ulonglong *)(param_1 + 0xc0),0,0x20);
              uVar8 = (**(code **)(lVar10 + 0x140 + (ulonglong)*(ushort *)(param_1 + 0x198) * 8))
                                (param_1);
              uVar12 = (ulonglong)uVar8;
            }
            else {
              uVar12 = 0xc0000120;
            }
            goto LAB_0003ad6a;
          }
          iVar7 = -0x3ffffffe;
LAB_0003acf6:
          if (bVar13 == 0) {
            if (iVar7 == -0x3ffffdd3) goto LAB_0003acb6;
            if ((*(uint *)(param_1 + 0xa8) >> 9 & 1) == 0) {
              pbVar1 = (byte *)(lVar4 + 3);
              *pbVar1 = *pbVar1 & 0xfe;
            }
            LOCK();
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            UNLOCK();
          }
        }
        else {
          uVar11 = RxShadowLowIo(param_1,param_2,param_3);
          uVar12 = uVar11 & 0xffffffff;
          if ((int)uVar11 == -0x3fffffea) goto LAB_0003ace0;
LAB_0003ad6a:
          iVar7 = (int)uVar12;
          if (iVar7 != 0x103) goto LAB_0003acf6;
          if (bVar13 == 0) {
            return uVar12;
          }
          *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x100000;
          KeWaitForSingleObject(param_1 + 0x130,0,0,0,0);
          iVar7 = *(int *)(param_1 + 0xb0);
        }
      } while (iVar7 == -0x3ffffdd3);
    }
  }
  *(int *)(param_1 + 0xb0) = iVar7;
  *(ushort *)(param_1 + 0x19a) = *(ushort *)(param_1 + 0x19a) | 1;
  uVar11 = RxLowIoCompletionTail(param_1);
  return uVar11 & 0xffffffff;
}




/* Library Function - Single Match
    RxInitializeLowIoContext
   
   Library: Visual Studio 2019 Release */

void RxInitializeLowIoContext(longlong param_1,uint param_2,undefined2 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(lVar1 + 0xb8);
  KeInitializeEvent(param_1 + 0x130,0,0);
  pvVar3 = SystemReserved1[0xf];
  *param_3 = (short)param_2;
  *(void **)(param_3 + 0xc) = pvVar3;
  if (param_2 < 2) {
    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar2 + 0x10);
    uVar4 = *(uint *)(lVar1 + 0x10) >> 1 & 1;
  }
  else {
    if (param_2 < 6) {
      return;
    }
    if (7 < param_2) {
      return;
    }
    uVar4 = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined1 *)(param_3 + 0x24) = 0;
  }
  *(uint *)(param_3 + 0x10) = uVar4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxFlushFcbInSystemCache
   
   Library: Visual Studio 2019 Release */

int RxFlushFcbInSystemCache(longlong param_1,char param_2)

{
  int local_18 [4];
  
  CcFlushCache(*(longlong *)(param_1 + 0xb8) + 8,0,0,local_18);
  if ((param_2 != '\0') && (-1 < local_18[0])) {
    ExAcquireResourceExclusiveLite(*(undefined8 *)(param_1 + 0x10),1);
    RxTrackPagingIoResource(param_1,1,0x8cc,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    RxTrackPagingIoResource(param_1,3,0x8cd,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    ExReleaseResourceLite(*(undefined8 *)(param_1 + 0x10));
  }
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & (local_18[0] < 0 | 2)) != 0)) {
    WmlTrace(0x21,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return local_18[0];
}




/* Library Function - Single Match
    RxpLookupSrvOpenForRequestLite
   
   Library: Visual Studio 2019 Release */

ushort * RxpLookupSrvOpenForRequestLite(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  ushort *puVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)(param_1 + 0x1f8);
  puVar3 = (ushort *)0x0;
  plVar4 = (longlong *)*plVar1;
  if (plVar4 != plVar1) {
    do {
      puVar2 = (ushort *)(plVar4 + -0x18);
      if ((plVar4[-0xf] == *(longlong *)(param_2 + 0x20)) &&
         ((*(byte *)(plVar4[-0x17] + 0x74) & 0x80) == 0)) {
        FUN_00019e08();
        RxReference(puVar2);
        if (plVar4 != plVar1) goto LAB_0003b026;
        break;
      }
      plVar4 = (longlong *)*plVar4;
    } while (plVar4 != plVar1);
  }
  puVar2 = puVar3;
  puVar3 = (ushort *)
           (ulonglong)((-(uint)(*(int *)(param_1 + 0x114) != 0) & 0x3ffffede) + 0xc0000225);
LAB_0003b026:
  *(ushort **)(param_2 + 0x18) = puVar2;
  return puVar3;
}




/* Library Function - Single Match
    RxPrepareRequestForReuse
   
   Library: Visual Studio 2019 Release */

void RxPrepareRequestForReuse(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_0003b0c7;
LAB_0003b0b7:
    FUN_00036fe8();
    iVar2 = 0;
  }
  else {
    cVar1 = ExIsResourceAcquiredExclusiveLite
                      (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 8));
    if (cVar1 == '\0') goto LAB_0003b0b7;
    FUN_00036fe8();
    iVar2 = 2;
  }
  RxDereference(*(ushort **)(param_1 + 0x18),iVar2);
LAB_0003b0c7:
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




/* Library Function - Single Match
    RxPrepareRequestForHandling
   
   Library: Visual Studio 2019 Release */

undefined8 RxPrepareRequestForHandling(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  if (*(longlong *)(*(longlong *)(lVar2 + 8) + 0xd0) == 0) {
    lVar3 = ExAllocatePoolWithTag(0,0x18,0x6d427852);
    if (lVar3 == 0) {
      if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
        WmlTrace(0xd,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      uVar4 = 0xc000009a;
      goto LAB_0003b219;
    }
    *(longlong *)(*(longlong *)(lVar2 + 8) + 0xd0) = lVar3;
    KeInitializeEvent(lVar3,0,0);
  }
  else {
    KeResetEvent();
  }
  puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + 0x74);
  *puVar1 = *puVar1 | 0x40;
  *(uint *)(lVar2 + 0x30) = *(uint *)(lVar2 + 0x30) | 0xc0;
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0xc,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
LAB_0003b219:
  KeReleaseMutex(&DAT_00021800,0);
  return uVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxPurgeFcbInSystemCache
   
   Library: Visual Studio 2019 Release */

int RxPurgeFcbInSystemCache
              (ulonglong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
              char param_5)

{
  char cVar1;
  int iVar2;
  
  if (param_5 != '\0') {
    iVar2 = RxFlushFcbInSystemCache(param_1,'\x01');
    if (iVar2 < 0) {
      RxCcLogError(*(undefined8 *)(param_1 + 0x130),(ushort *)(param_1 + 0x110),-0x7ffbffce,iVar2,4,
                   param_1);
    }
  }
  cVar1 = CcPurgeCacheSection(*(longlong *)(param_1 + 0xb8) + 8,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    MmFlushImageSection(*(longlong *)(param_1 + 0xb8) + 8,1);
    __RxReleaseFcb(0,param_1,0x925,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    cVar1 = MmForceSectionClosed(*(longlong *)(param_1 + 0xb8) + 8);
    __RxAcquireFcb(param_1,0,1,0x929,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
    if (cVar1 == '\0') {
      iVar2 = -0x3fffffff;
      goto LAB_0003b345;
    }
  }
  iVar2 = 0;
LAB_0003b345:
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & (iVar2 < 0 | 2)) != 0)) {
    WmlTrace(0x22,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return iVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxChangeBufferingState
   
   Library: Visual Studio 2019 Release */

undefined8 RxChangeBufferingState(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  uint local_res20 [2];
  undefined8 local_38 [2];
  
  uVar2 = *(ulonglong *)(param_1 + 8);
  uVar7 = 0;
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x1c,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  *(uint *)(uVar2 + 0x74) = *(uint *)(uVar2 + 0x74) | 0x2000;
  if (param_3 == '\0') {
    local_res20[0] = *(uint *)(param_1 + 0x5c);
  }
  else {
    pcVar3 = *(code **)(*(longlong *)(uVar2 + 0x138) + 0x138);
    if ((pcVar3 == (code *)0x0) || (iVar6 = (*pcVar3)(param_1,param_2,local_res20), iVar6 != 0)) {
      local_res20[0] = uVar7;
    }
  }
  if ((*(int *)(uVar2 + 0x170) + *(int *)(uVar2 + 0x16c) + *(int *)(uVar2 + 0x168) == 0) &&
     (param_3 == '\0')) {
    local_res20[0] = local_res20[0] | 0xf380000;
  }
  if (*(int *)(uVar2 + 0x84) != 0) {
    local_res20[0] = local_res20[0] & 0xffdfffff;
  }
  if ((*(byte *)(uVar2 + 0x74) & 0x10) != 0) {
    local_res20[0] = 0;
  }
  uVar1 = *(uint *)(uVar2 + 0x74);
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x1d,(undefined8 *)&DAT_000204b0,DAT_000204e8,4);
  }
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
    WmlTrace(0xed,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  if ((local_res20[0] & 0x8000000) < (uVar1 & 0x8000000)) {
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x1e,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xee,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    uVar7 = RxFlushFcbInSystemCache(uVar2,'\x01');
  }
  if (((*(int *)(uVar2 + 0x78) == 0) || ((local_res20[0] & 0x2000000) < (uVar1 & 0x2000000))) ||
     ((local_res20[0] & 1) != 0)) {
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
      WmlTrace(0x1f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((3 < DAT_000204e4) && ((_DAT_000204e0 >> 0xb & 1) != 0)) {
      WmlTrace(0xef,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    if ((int)uVar7 < 0) {
      RxCcLogError(*(undefined8 *)(uVar2 + 0x130),(ushort *)(uVar2 + 0x110),-0x7ffbffce,uVar7,4,
                   uVar2);
    }
    local_38[0] = 0;
    cVar5 = MmCanFileBeTruncated(*(longlong *)(uVar2 + 0xb8) + 8,local_38);
    if (cVar5 != '\0') {
      CcFlushCache(*(longlong *)(uVar2 + 0xb8) + 8,0,0xffffffff,0);
      CcPurgeCacheSection(*(longlong *)(uVar2 + 0xb8) + 8,0,0,0);
    }
  }
  if ((((param_3 != '\0') && ((*(byte *)(param_1 + 0x30) & 0x40) != 0)) &&
      (*(longlong **)(param_1 + 0xa8) != (longlong *)(param_1 + 0xa8))) &&
     (puVar8 = RxCreateRxContext((undefined8 *)0x0,*(longlong *)(*(longlong *)(param_1 + 8) + 0x130)
                                 ,0x10000002), puVar8 != (ulonglong *)0x0)) {
    puVar8[7] = uVar2;
    lVar4 = *(longlong *)(param_1 + 0xa8);
    puVar8[8] = lVar4 - 0x50;
    puVar8[9] = *(ulonglong *)(lVar4 + -0x48);
    if ((*(byte *)(param_1 + 0x30) & 8) == 0) {
      pcVar3 = *(code **)(*(longlong *)(uVar2 + 0x138) + 0x1a8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(puVar8,param_1,param_2);
      }
    }
    else {
      if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
        WmlTrace(0x1f,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
      }
      RxCloseAssociatedSrvOpen(puVar8,puVar8[8]);
    }
    RxDereferenceAndDeleteRxContext_Real((longlong)puVar8);
  }
  *(uint *)(uVar2 + 0x74) = *(uint *)(uVar2 + 0x74) & 0xf007ffff;
  *(uint *)(uVar2 + 0x74) = *(uint *)(uVar2 + 0x74) | local_res20[0] & 0xff80000;
  *(uint *)(uVar2 + 0x74) = *(uint *)(uVar2 + 0x74) & 0xffffdfff;
  *(uint *)(uVar2 + 0x74) = *(uint *)(uVar2 + 0x74) & 0xfffbffff;
  if ((3 < DAT_000204e4) && ((_DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x20,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  return 0;
}




/* Library Function - Single Match
    RxInitiateSrvOpenKeyAssociation
   
   Library: Visual Studio 2019 Release */

void RxInitiateSrvOpenKeyAssociation(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xb0) + 8) + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
  LOCK();
  piVar1 = (int *)(lVar2 + 0x114);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  lVar2 = param_1 + 0xc0;
  *(longlong *)(param_1 + 200) = lVar2;
  *(longlong *)lVar2 = lVar2;
  return;
}




/* Library Function - Single Match
    RxpDiscardChangeBufferingStateRequests
   
   Library: Visual Studio 2019 Release */

void RxpDiscardChangeBufferingStateRequests(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  while (plVar1 != param_1) {
    plVar1 = (longlong *)*param_1;
    lVar2 = *plVar1;
    *param_1 = lVar2;
    *(longlong **)(lVar2 + 8) = param_1;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xe,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    RxPrepareRequestForReuse((longlong)plVar1);
    ExFreePoolWithTag(plVar1,0);
    plVar1 = (longlong *)*param_1;
  }
  return;
}




/* Library Function - Single Match
    RxProcessFcbChangeBufferingStateRequest
   
   Library: Visual Studio 2019 Release */

void RxProcessFcbChangeBufferingStateRequest(longlong param_1)

{
  ushort *puVar1;
  longlong ****pppplVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong ****pppplVar5;
  longlong ***local_18;
  longlong ***local_10;
  
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x18,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  local_10 = (longlong ***)&local_18;
  puVar1 = *(ushort **)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 8) + 8);
  local_18 = (longlong ***)&local_18;
  ExAcquireFastMutex(puVar1 + 0xe0);
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  while (puVar4 != (undefined8 *)(param_1 + 0x98)) {
    pppplVar5 = (longlong ****)(puVar4 + -0xd);
    puVar4 = (undefined8 *)*puVar4;
    RxGatherRequestsForSrvOpen(puVar1,pppplVar5,(longlong *)&local_18);
  }
  ExReleaseFastMutex(puVar1 + 0xe0);
  pppplVar5 = (longlong ****)local_18;
  if ((longlong ****)local_18 != &local_18) {
    do {
      pppplVar2 = (longlong ****)*pppplVar5;
      uVar3 = RxPrepareRequestForHandling((longlong)pppplVar5);
      if ((int)uVar3 == 0) {
        if (((ulonglong)pppplVar5[3][6] & 4) == 0) {
          if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
            WmlTrace(0x19,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
          }
          RxChangeBufferingState((longlong)pppplVar5[3],pppplVar5[5],'\x01');
        }
        else if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0x1a,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
      }
      pppplVar5 = pppplVar2;
    } while (pppplVar2 != &local_18);
    RxpDiscardChangeBufferingStateRequests((longlong *)&local_18);
  }
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0x1b,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffbf;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    KeSetEvent(*(undefined8 *)(param_1 + 0xd0),2);
  }
  KeReleaseMutex(&DAT_00021800,0);
  return;
}




/* Library Function - Single Match
    RxProcessChangeBufferingStateRequestsForSrvOpen
   
   Library: Visual Studio 2019 Release */

void RxProcessChangeBufferingStateRequestsForSrvOpen(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8) + 0x108);
  LOCK();
  iVar4 = *(int *)(param_1 + 0x80);
  if (iVar2 == iVar4) {
    *(int *)(param_1 + 0x80) = iVar2;
    iVar4 = iVar2;
  }
  UNLOCK();
  if ((iVar4 != iVar1) &&
     (uVar5 = __RxAcquireFcb(lVar3,0,1,0x6b5,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c"),
     uVar5 == 0)) {
    RxProcessFcbChangeBufferingStateRequest(lVar3);
    __RxReleaseFcb(0,lVar3,0x6b8,"d:\\w7rtm\\base\\fs\\rdr2\\rxce\\buffring.c");
  }
  return;
}




/* Library Function - Single Match
    RxPurgeChangeBufferingStateRequestsForSrvOpen
   
   Library: Visual Studio 2019 Release */

void RxPurgeChangeBufferingStateRequestsForSrvOpen(longlong ****param_1)

{
  longlong ****pppplVar1;
  ushort *puVar2;
  longlong ***ppplVar3;
  longlong ***ppplVar4;
  undefined8 **local_18;
  undefined8 **local_10;
  
  puVar2 = (ushort *)param_1[1][0x16][1][1];
  local_10 = &local_18;
  local_18 = &local_18;
  ExAcquireFastMutex(puVar2 + 0xe0);
  pppplVar1 = param_1 + 0x18;
  ppplVar3 = *pppplVar1;
  ppplVar4 = param_1[0x19];
  *ppplVar4 = (longlong **)ppplVar3;
  ppplVar3[1] = (longlong **)ppplVar4;
  param_1[0x19] = (longlong ***)pppplVar1;
  *pppplVar1 = (longlong ***)pppplVar1;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x100;
  RxGatherRequestsForSrvOpen(puVar2,param_1,(longlong *)&local_18);
  ExReleaseFastMutex(puVar2 + 0xe0);
  if ((undefined8 ***)local_18 != &local_18) {
    if ((*(uint *)(param_1 + 6) >> 6 & 1) != 0) {
      KeWaitForSingleObject(&DAT_00021800,0,0,0,0);
      *(uint *)((longlong)param_1[1] + 0x74) = *(uint *)((longlong)param_1[1] + 0x74) & 0xffffffbf;
      if (param_1[1][0x1a] != (longlong **)0x0) {
        KeSetEvent(param_1[1][0x1a],2);
      }
      KeReleaseMutex(&DAT_00021800,0);
    }
    RxpDiscardChangeBufferingStateRequests((longlong *)&local_18);
  }
  return;
}




void FUN_0003bf68(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0003bf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExDeleteResourceLite(param_1 + 0x18);
  return;
}




/* Library Function - Single Match
    RxTableComputeHashValue
   
   Library: Visual Studio 2019 Release */

int RxTableComputeHashValue(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int local_28 [8];
  
  lVar2 = *(longlong *)(param_1 + 4);
  local_28[0] = 1;
  uVar5 = (uint)(*param_1 >> 1);
  iVar6 = 0;
  local_28[1] = uVar5 - 1;
  local_28[2] = uVar5 - 2;
  local_28[3] = uVar5 - 3;
  local_28[4] = uVar5 - 4;
  local_28[5] = (int)uVar5 >> 2;
  local_28[6] = (int)(uVar5 * 2) >> 2;
  lVar4 = 0;
  local_28[7] = (int)(uVar5 * 3) >> 2;
  do {
    iVar1 = local_28[lVar4];
    if ((-1 < iVar1) && (iVar1 < (int)uVar5)) {
      uVar3 = RtlUpcaseUnicodeChar(*(undefined2 *)(lVar2 + (longlong)iVar1 * 2));
      iVar6 = (uint)uVar3 + iVar6 * 8;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < 8);
  return iVar6;
}




/* Library Function - Single Match
    RxFcbTableRemoveFcb
   
   Library: Visual Studio 2019 Release */

undefined8 RxFcbTableRemoveFcb(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(short *)(param_2 + 0xe8) == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x100);
    lVar2 = *(longlong *)(param_2 + 0xf8);
    *plVar1 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar1;
  }
  lVar2 = param_2 + 0xf8;
  *(longlong *)(param_2 + 0x100) = lVar2;
  *(longlong *)lVar2 = lVar2;
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return 0;
}




/* Library Function - Single Match
    RxFcbTableInsertFcb
   
   Library: Visual Studio 2019 Release */

undefined8 RxFcbTableInsertFcb(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = RxTableComputeHashValue((ushort *)(param_2 + 0xe8));
  *(uint *)(param_2 + 0xe4) = uVar4;
  plVar2 = (longlong *)
           (param_1 + 0x88 + ((ulonglong)uVar4 % (ulonglong)*(ushort *)(param_1 + 10)) * 0x10);
  FUN_00019e08();
  RxpReferenceNetFcb(param_2);
  if (*(short *)(param_2 + 0xe8) == 0) {
    *(longlong *)(param_1 + 0x80) = param_2 + 0xe0;
  }
  else {
    lVar3 = *plVar2;
    plVar1 = (longlong *)(param_2 + 0xf8);
    *plVar1 = lVar3;
    *(longlong **)(param_2 + 0x100) = plVar2;
    *(longlong **)(lVar3 + 8) = plVar1;
    *plVar2 = (longlong)plVar1;
  }
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return 0;
}




/* Library Function - Single Match
    RxFcbTableLookupFcb
   
   Library: Visual Studio 2019 Release */

longlong * RxFcbTableLookupFcb(longlong param_1,ushort *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  if (*param_2 == 0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
  }
  else {
    uVar3 = RxTableComputeHashValue(param_2);
    plVar1 = (longlong *)
             (param_1 + 0x88 + ((ulonglong)uVar3 % (ulonglong)*(ushort *)(param_1 + 10)) * 0x10);
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != plVar1) {
      do {
        plVar5 = plVar4 + -3;
        LOCK();
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        UNLOCK();
        if ((*(uint *)((longlong)plVar4 + -0x14) == uVar3) && (*(ushort *)(plVar4 + -2) == *param_2)
           ) {
          cVar2 = RtlEqualUnicodeString(param_2,plVar4 + -2,*(undefined1 *)(param_1 + 8));
          if (cVar2 != '\0') break;
        }
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != plVar1);
      if (plVar4 != plVar1) goto LAB_0003c1cc;
    }
    plVar5 = (longlong *)0x0;
  }
LAB_0003c1cc:
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  if (plVar5 == (longlong *)0x0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
  }
  else {
    plVar6 = plVar5 + -0x1c;
    FUN_00019e08();
    RxpReferenceNetFcb((longlong)plVar6);
  }
  return plVar6;
}




/* Library Function - Single Match
    RxInitializeFcbTable
   
   Library: Visual Studio 2019 Release */

void RxInitializeFcbTable(undefined2 *param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  *param_1 = 0xeb09;
  param_1[1] = 0x290;
  ExInitializeResourceLite();
  uVar2 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  puVar1 = param_1 + 0x44;
  param_1[5] = 0x20;
  do {
    *(undefined2 **)(puVar1 + 4) = puVar1;
    *(undefined2 **)puVar1 = puVar1;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (uVar2 < (ushort)param_1[5]);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}




/* Library Function - Single Match
    RxExtractServerName
   
   Library: Visual Studio 2019 Release */

void RxExtractServerName(ushort *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)(param_1 + 4);
  psVar3 = (short *)((ulonglong)*param_1 + (longlong)psVar2);
  *(short **)(param_2 + 4) = psVar2;
  for (; (psVar2 < psVar3 && ((*psVar2 != 0x5c || (psVar2 == *(short **)(param_1 + 4)))));
      psVar2 = psVar2 + 1) {
  }
  sVar1 = (short)psVar2 - param_1[4];
  param_2[1] = sVar1;
  *param_2 = sVar1;
  if (param_3 != (short *)0x0) {
    sVar1 = (short)psVar3 - (short)psVar2;
    *(short **)(param_3 + 4) = psVar2;
    param_3[1] = sVar1;
    *param_3 = sVar1;
  }
  return;
}




/* Library Function - Single Match
    RxConstructNetRoot
   
   Library: Visual Studio 2019 Release */

undefined4
RxConstructNetRoot(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 4;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0);
  uVar5 = 4;
  puVar3 = (ulonglong *)ExAllocatePoolWithTag(0,0x60,0x43537852);
  uVar4 = 0;
  if (puVar3 == (ulonglong *)0x0) {
    return 0xc000009a;
  }
  lVar1 = lVar1 + 0x18;
  ExReleaseResourceLite(lVar1);
  *param_5 = 0;
  FUN_0001c430(puVar3,0,0x60);
  KeInitializeEvent(puVar3 + 2,1);
  *puVar3 = param_1;
  puVar3[1] = param_4;
  puVar3[0xb] = (ulonglong)&LAB_0003c2b0;
  pcVar2 = *(code **)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x168) + 0x1b0);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(puVar3);
  }
  KeWaitForSingleObject(puVar3 + 2,0,0,0,0);
  if (*(int *)((longlong)puVar3 + 0x2c) == 0) {
    if ((int)puVar3[5] == 0) {
      uVar6 = 3;
      uVar5 = 3;
      goto LAB_0003c41f;
    }
    if (*(int *)((longlong)puVar3 + 0x2c) == 0) {
      uVar4 = (undefined4)puVar3[5];
      uVar6 = 3;
      goto LAB_0003c41f;
    }
  }
  uVar4 = *(undefined4 *)((longlong)puVar3 + 0x2c);
LAB_0003c41f:
  ExAcquireResourceExclusiveLite(lVar1,1);
  RxUpdateCondition(uVar6,(undefined4 *)(param_3 + 0x7c),(undefined8 *)(param_3 + 0x80));
  RxUpdateCondition(uVar5,(undefined4 *)(param_4 + 100),(undefined8 *)(param_4 + 0x100));
  *param_5 = 2;
  ExFreePoolWithTag(puVar3,0);
  return uVar4;
}




/* Library Function - Single Match
    RxConstructSrvCall
   
   Library: Visual Studio 2019 Release */

uint RxConstructSrvCall(ulonglong param_1,longlong param_2,ushort *param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong *puVar6;
  byte bVar7;
  
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(uVar2 + 0x2a0);
  bVar7 = ~(byte)(*(uint *)(param_1 + 0xa8) >> 0xc) & 1;
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,0xa8,0x43537852);
  if (puVar6 == (ulonglong *)0x0) {
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[0x58] = 4;
    param_3[0x59] = 0;
    ExReleaseResourceLite(lVar3 + 0x18);
    *param_4 = 0;
    uVar5 = 0xc000009a;
  }
  else {
    FUN_0001c430(puVar6,0,0xa8);
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[0x58] = 1;
    param_3[0x59] = 0;
    ExReleaseResourceLite(lVar3 + 0x18);
    *param_4 = 0;
    if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
      WmlTrace(0xbc,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
    puVar6[0xb] = (ulonglong)puVar6;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    puVar6[0xd] = uVar2;
    FUN_00019e08();
    RxReference(param_3);
    if (bVar7 == 0) {
      RxPrePostIrp(param_1,param_2);
    }
    else {
      KeInitializeEvent(puVar6,1);
    }
    puVar6[6] = (ulonglong)param_3;
    puVar6[5] = param_1;
    *(undefined4 *)(puVar6 + 9) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 1;
    puVar6[7] = (ulonglong)RxCreateSrvCallCallBack;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0xc00000be;
    puVar1 = puVar6 + 3;
    puVar6[4] = (ulonglong)puVar1;
    *puVar1 = (ulonglong)puVar1;
    pcVar4 = *(code **)(*(longlong *)(uVar2 + 0x168) + 0x1d8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_3,puVar6 + 0xb);
    }
    if (bVar7 == 0) {
      uVar5 = 0x103;
    }
    else {
      KeWaitForSingleObject(puVar6,0,0,0,0);
      uVar5 = RxFinishSrvCallConstruction((longlong)puVar6);
      if (uVar5 == 0) {
        *param_4 = 2;
      }
      else {
        ExReleaseResourceLite(lVar3 + 0x18);
        *param_4 = 0;
      }
    }
  }
  return uVar5;
}




/* Library Function - Single Match
    RxFindOrCreateConnections
   
   Library: Visual Studio 2019 Release */

uint RxFindOrCreateConnections
               (ulonglong param_1,longlong param_2,ushort *param_3,undefined1 param_4,char param_5,
               ushort *param_6,ushort *param_7,int *param_8,longlong *param_9)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  short *psVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  ushort *puVar16;
  uint local_98;
  ulonglong *local_80;
  ushort local_68 [8];
  ushort local_58 [8];
  short local_48 [8];
  
  local_80 = (ulonglong *)0x0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0);
  uVar6 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)param_7 = *(undefined8 *)param_3;
  *(undefined8 *)(param_7 + 4) = uVar6;
  *param_6 = 0;
  param_6[1] = 0;
  *(undefined8 *)(param_6 + 4) = *(undefined8 *)(param_3 + 4);
  if (*(short *)(*(longlong *)(param_7 + 4) + 2) == 0x3b) {
    psVar11 = (short *)(*(longlong *)(param_7 + 4) + 4);
    bVar7 = false;
    puVar15 = (ulonglong *)0x0;
    if (4 < *param_7) {
      puVar15 = (ulonglong *)(ulonglong)(*param_7 - 4);
    }
    uVar14 = (uint)puVar15;
    while (uVar14 != 0) {
      if (*psVar11 == 0x5c) {
        bVar7 = true;
        break;
      }
      uVar14 = (int)puVar15 - 2;
      puVar15 = (ulonglong *)(ulonglong)uVar14;
      psVar11 = psVar11 + 1;
    }
    if (!bVar7) {
      return 0xc0000033;
    }
    *(short **)(param_7 + 4) = psVar11;
    uVar9 = (short)psVar11 - param_3[4];
    *param_6 = uVar9;
    param_6[1] = uVar9;
    *param_7 = *param_7 - uVar9;
    param_7[1] = *param_7;
  }
LAB_0003c7fa:
  if (local_80 != (ulonglong *)0x0) {
    sVar2 = (short)*local_80;
    if (sVar2 == -0x14f0) {
      FUN_00036fe8();
      RxDereference((ushort *)local_80,*param_8);
    }
    else if (sVar2 == -0x14ef) {
      FUN_00036fe8();
      RxDereference((ushort *)local_80,*param_8);
    }
    else if (sVar2 == -0x14ee) {
      FUN_00036fe8();
      RxDereference((ushort *)local_80,*param_8);
    }
    else {
      DbgPrint("RxFindOrCreateConnections -- Invalid Container Type\n");
    }
  }
  local_80 = (ulonglong *)RxPrefixTableLookupName(lVar3,param_7,local_48,param_9);
  if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
    WmlTrace(0xb9,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
  }
  do {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x21e) = param_4;
    puVar15 = (ulonglong *)0x0;
    if (local_80 != (ulonglong *)0x0) {
      if ((short)*local_80 == -0x14ee) {
        uVar4 = local_80[1];
        lVar5 = *(longlong *)(uVar4 + 8);
        piVar1 = (int *)(uVar4 + 0x7c);
        iVar10 = *piVar1;
        if (iVar10 == 1) {
          ExReleaseResourceLite(lVar3 + 0x18);
          RxWaitForStableCondition(piVar1,uVar4 + 0x80,param_1,(undefined4 *)0x0);
          ExAcquireResourceExclusiveLite(lVar3 + 0x18,1);
          *param_8 = 2;
          iVar10 = *piVar1;
          if (iVar10 == 3) goto LAB_0003c7fa;
        }
        if (((iVar10 == 3) && (*(int *)(lVar5 + 0xb0) == 3)) &&
           (*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_1 + 0x58))) {
          *(ulonglong **)(param_1 + 0x1f8) = local_80;
          *(ulonglong *)(param_1 + 0x1f0) = uVar4;
          *(longlong *)(param_1 + 0x1e8) = lVar5;
          local_98 = 0xc000023b;
        }
        else {
          local_98 = *(uint *)((longlong)local_80 + 0x54);
          if (local_98 == 0) {
            local_98 = 0xc00000be;
          }
          FUN_00036fe8();
          RxDereference((ushort *)local_80,*param_8);
        }
        goto LAB_0003cfcd;
      }
      puVar12 = local_80 + 0x16;
      if ((int)*puVar12 == 1) {
        ExReleaseResourceLite(lVar3 + 0x18);
        RxWaitForStableCondition
                  ((int *)puVar12,(longlong)(local_80 + 0x18),param_1,(undefined4 *)0x0);
        ExAcquireResourceExclusiveLite(lVar3 + 0x18,1);
        *param_8 = 2;
        if ((int)*puVar12 == 3) goto LAB_0003c7fa;
      }
      puVar15 = local_80;
      if ((int)*puVar12 != 3) {
        local_98 = (uint)local_80[8];
        if (local_98 == 0) {
          local_98 = 0xc00000be;
        }
        FUN_00036fe8();
        RxDereference((ushort *)local_80,*param_8);
        goto LAB_0003cfcd;
      }
    }
    if (((puVar15 != (ulonglong *)0x0) && ((int)puVar15[0x16] == 3)) &&
       (puVar15[3] != *(ulonglong *)(param_1 + 0x58))) {
      FUN_00036fe8();
      RxDereference((ushort *)puVar15,*param_8);
      local_98 = 0xc00000cc;
      goto LAB_0003cfcd;
    }
    if (*param_8 == 1) {
      cVar8 = ExAcquireResourceExclusiveLite(lVar3 + 0x18,0);
      if (cVar8 == '\0') break;
      ExReleaseResourceLite(lVar3 + 0x18);
      *param_8 = 2;
    }
    if (local_80 != (ulonglong *)0x0) {
      (**(code **)(*(longlong *)(puVar15[3] + 0x168) + 0x1d0))(param_7,puVar15,local_58,0);
      puVar12 = RxCreateNetRoot((ulonglong)puVar15,local_58,0,param_9);
      if (puVar12 == (ulonglong *)0x0) {
        local_98 = 0xc000009a;
      }
      else {
        *(undefined1 *)((longlong)puVar12 + 0x2d) = param_4;
        FUN_00036fe8();
        RxDereference((ushort *)puVar15,*param_8);
        puVar13 = RxCreateVNetRoot(param_1,(ushort *)puVar12,param_3,param_6,param_7,param_9);
        if (puVar13 == (ulonglong *)0x0) {
          RxFinalizeNetRoot((longlong)puVar12,'\x01','\x01');
          local_98 = 0xc000009a;
        }
        else {
          FUN_00019e08();
          RxReference((ushort *)puVar13);
          *(undefined4 *)((longlong)puVar12 + 0x7c) = 1;
          *(ulonglong **)(param_1 + 0x1e8) = puVar15;
          *(ulonglong **)(param_1 + 0x1f0) = puVar12;
          *(ulonglong **)(param_1 + 0x1f8) = puVar13;
          local_98 = RxConstructNetRoot(param_1,(longlong)puVar15,(longlong)puVar12,
                                        (ulonglong)puVar13,param_8);
          if (local_98 == 0) {
            if (param_5 == '\0') {
              FUN_00038018(lVar3);
              *param_8 = 1;
            }
          }
          else {
            RxUpdateCondition(4,(undefined4 *)((longlong)puVar13 + 100),puVar13 + 0x20);
            if ((3 < DAT_000204e4) && ((DAT_000204e0 & 2) != 0)) {
              WmlTrace(0xba,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
            }
            FUN_00036fe8();
            RxDereference((ushort *)puVar13,*param_8);
            *(undefined8 *)(param_1 + 0x1f0) = 0;
            *(undefined8 *)(param_1 + 0x1f8) = 0;
          }
        }
      }
      goto LAB_0003cfcd;
    }
    puVar16 = (ushort *)0x0;
    RxExtractServerName(param_7,(short *)local_68,(short *)0x0);
    local_80 = RxCreateSrvCall(param_1,local_68,puVar16,param_9);
    if (local_80 == (ulonglong *)0x0) {
      local_98 = 0xc000009a;
      goto LAB_0003cfcd;
    }
    FUN_00019e08();
    RxReference((ushort *)local_80);
    *(undefined1 *)(param_1 + 0x21e) = param_4;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    local_98 = RxConstructSrvCall(param_1,param_2,(ushort *)local_80,param_8);
    if (local_98 != 0) {
      ExAcquireResourceExclusiveLite(lVar3 + 0x18,1);
      FUN_00036fe8();
      RxDereference((ushort *)local_80,2);
      ExReleaseResourceLite(lVar3 + 0x18);
LAB_0003cfcd:
      if (local_98 == 0) {
        return 0;
      }
      if (local_98 == 0xc000023b) {
        return 0xc000023b;
      }
      if (*param_8 == 0) {
        return local_98;
      }
      ExReleaseResourceLite(lVar3 + 0x18);
      *param_8 = 0;
      return local_98;
    }
  } while( true );
  ExReleaseResourceLite(lVar3 + 0x18);
  ExAcquireResourceExclusiveLite(lVar3 + 0x18,1);
  *param_8 = 2;
  goto LAB_0003c7fa;
}




/* Library Function - Single Match
    RxConstructVirtualNetRoot
   
   Library: Visual Studio 2019 Release */

uint RxConstructVirtualNetRoot
               (ulonglong param_1,longlong param_2,ushort *param_3,undefined1 param_4,char param_5,
               undefined8 *param_6,int *param_7,longlong *param_8)

{
  ushort *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  int iVar4;
  ushort local_38 [8];
  ushort local_28 [8];
  
  iVar4 = 4;
  puVar3 = (ulonglong *)0x0;
  uVar2 = RxFindOrCreateConnections
                    (param_1,param_2,param_3,param_4,param_5,local_28,local_38,param_7,param_8);
  if (uVar2 == 0xc000023b) {
    puVar1 = *(ushort **)(param_1 + 0x1f8);
    puVar3 = RxCreateVNetRoot(param_1,*(ushort **)(puVar1 + 4),param_3,local_28,local_38,param_8);
    if (puVar3 != (ulonglong *)0x0) {
      FUN_00019e08();
      RxReference((ushort *)puVar3);
    }
    FUN_00036fe8();
    RxDereference(puVar1,0);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    if (puVar3 == (ulonglong *)0x0) {
      uVar2 = 0xc000009a;
    }
    else {
      uVar2 = RxConstructNetRoot(param_1,*(longlong *)(puVar3[1] + 8),puVar3[1],(ulonglong)puVar3,
                                 param_7);
      iVar4 = (uVar2 != 0) + 3;
    }
LAB_0003d167:
    if ((puVar3 != (ulonglong *)0x0) && (*(int *)((longlong)puVar3 + 100) < 3)) {
      RxUpdateCondition(iVar4,(int *)((longlong)puVar3 + 100),puVar3 + 0x20);
    }
    if (uVar2 == 0) goto LAB_0003d1d5;
    if (puVar3 != (ulonglong *)0x0) {
      FUN_00036fe8();
      RxDereference((ushort *)puVar3,*param_7);
      puVar3 = (ulonglong *)0x0;
    }
  }
  else if (uVar2 == 0) {
    *param_7 = 2;
    puVar3 = *(ulonglong **)(param_1 + 0x1f8);
    iVar4 = 3;
    goto LAB_0003d167;
  }
  if (*param_7 != 0) {
    ExReleaseResourceLite(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0) + 0x18);
    *param_7 = 0;
  }
LAB_0003d1d5:
  *param_6 = puVar3;
  return uVar2;
}




/* Library Function - Single Match
    RxFindOrConstructVirtualNetRoot
   
   Library: Visual Studio 2019 Release */

uint RxFindOrConstructVirtualNetRoot
               (ulonglong param_1,longlong param_2,ushort *param_3,undefined1 param_4,short *param_5
               )

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint extraout_EAX;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  longlong lVar11;
  uint local_res8 [2];
  longlong local_res10;
  ushort *local_88;
  int local_80 [2];
  longlong local_78;
  uint local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong local_40;
  
  lVar3 = *(longlong *)(param_2 + 0xb8);
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x2a0);
  local_res8[0] = 0;
  pcVar4 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x168) + 0x208);
  local_res10 = param_2;
  local_40 = lVar11;
  if ((pcVar4 == (code *)0x0) || (iVar6 = (*pcVar4)(param_1,&local_78), iVar6 == -0x3ffffffe)) {
    local_78 = 0;
  }
  else if (iVar6 < 0) {
    DbgPrint("MRXSMB: Failed to initialize Connection ID\n");
    local_78 = 0;
  }
  uVar7 = *(uint *)(lVar3 + 0x10);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  lVar3 = lVar11 + 0x18;
  local_70 = uVar7 >> 7 & 0xffffff01;
  uVar7 = 0xc0000016;
  ExAcquireResourceSharedLite(lVar3,1);
  iVar6 = 1;
  do {
    local_80[0] = iVar6;
    puVar8 = RxPrefixTableLookupName(lVar11,param_3,param_5,&local_78);
    if (puVar8 != (ushort *)0x0) {
      if (*puVar8 == 0xeb12) {
        lVar11 = *(longlong *)(puVar8 + 4);
        puVar10 = (ushort *)0x0;
        if (((*(int *)(lVar11 + 0x7c) == 3) || (*(int *)(lVar11 + 0x7c) == 1)) &&
           (*(longlong *)(*(longlong *)(lVar11 + 8) + 0x18) == *(longlong *)(param_1 + 0x58))) {
          local_88 = puVar8;
          uVar7 = RxInitializeVNetRootParameters
                            (param_1,local_50,local_48,&local_60,&local_68,&local_58,local_res8);
          lVar11 = local_res10;
          puVar8 = local_88;
          if (uVar7 == 0) {
            do {
              iVar9 = RxCheckVNetRootCredentials
                                (param_1,lVar11,(longlong)puVar8,local_50,local_60,local_68,local_58
                                 ,local_res8[0]);
              param_1 = CONCAT44((int)(param_1 >> 0x20),iVar9);
              puVar10 = puVar8;
              if (extraout_EAX != 0xc0000016) break;
              puVar10 = (ushort *)(*(longlong *)(puVar8 + 0x74) + -0xe8);
              puVar8 = puVar10;
            } while (puVar10 != local_88);
            if (extraout_EAX == 0) {
              FUN_00019e08();
              RxReference(puVar10);
            }
            else {
              puVar10 = (ushort *)0x0;
            }
            RxUninitializeVNetRootParameters(local_60,local_68,local_58,local_res8);
            uVar7 = extraout_EAX;
          }
        }
        else {
          uVar7 = 0xc00000be;
          local_88 = puVar8;
        }
        FUN_00036fe8();
        RxDereference(local_88,iVar6);
        local_88 = puVar10;
      }
      else {
        FUN_00036fe8();
        RxDereference(puVar8,iVar6);
      }
      if (uVar7 != 0xc0000016) goto LAB_0003d59f;
    }
    if (iVar6 != 1) goto LAB_0003d4d0;
    cVar5 = ExAcquireResourceExclusiveLite(lVar3,0);
    if (cVar5 != '\0') {
      ExReleaseResourceLite(lVar3);
      local_80[0] = 2;
LAB_0003d4d0:
      uVar7 = RxConstructVirtualNetRoot
                        (param_1,local_res10,param_3,param_4,(char)local_70,&local_88,local_80,
                         &local_78);
      iVar6 = local_80[0];
      if (uVar7 == 0) {
        *(ulonglong *)(param_5 + 4) = (ulonglong)local_88[0x50] + *(longlong *)(param_3 + 4);
        uVar2 = *param_3;
        uVar1 = local_88[0x50];
        *param_5 = uVar2 - uVar1;
        param_5[1] = uVar2 - uVar1;
        if ((((local_res8[0] & 1) != 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
          WmlTrace(0xbd,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
        }
        *(uint *)(local_88 + 0x10) = *(uint *)(local_88 + 0x10) | local_res8[0];
        iVar6 = local_80[0];
      }
LAB_0003d59f:
      if (iVar6 != 0) {
        ExReleaseResourceLite(lVar3);
      }
      if (uVar7 == 0) {
        RxWaitForStableCondition
                  ((int *)(local_88 + 0x32),(longlong)(local_88 + 0x80),param_1,(undefined4 *)0x0);
        if (*(int *)(local_88 + 0x32) == 3) {
          *(ushort **)(param_1 + 0x1f8) = local_88;
          *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(local_88 + 4);
          *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(*(longlong *)(local_88 + 4) + 8);
        }
        else {
          FUN_00036fe8();
          RxDereference(local_88,0);
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          uVar7 = 0xc00000be;
        }
      }
      return uVar7;
    }
    ExReleaseResourceLite();
    ExAcquireResourceExclusiveLite(lVar3,1);
    iVar6 = 2;
    lVar11 = local_40;
  } while( true );
}




/* WARNING: Removing unreachable block (ram,0x0003d9de) */
/* WARNING: Removing unreachable block (ram,0x0003d9e9) */
/* WARNING: Removing unreachable block (ram,0x0003da15) */
/* WARNING: Removing unreachable block (ram,0x0003d9f3) */
/* Library Function - Single Match
    FsRtlCopyWrite2
   
   Library: Visual Studio 2019 Release */

char FsRtlCopyWrite2(longlong param_1,uint *param_2,uint param_3,char param_4,undefined4 param_5,
                    undefined8 param_6,undefined4 *param_7,undefined8 param_8,undefined8 param_9)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 in_register_00000084;
  bool bVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar15;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  ulonglong local_68 [2];
  longlong local_58;
  undefined1 local_50 [24];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar11 = (ulonglong)param_3;
  cVar4 = '\0';
  local_88 = '\x01';
  bVar2 = false;
  bVar13 = false;
  if ((*param_2 == 0xffffffff) && (param_2[1] == 0xffffffff)) {
    bVar2 = true;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_58 = lVar1;
  cVar3 = CcCanIWrite(param_1,uVar11,
                      CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),param_4),0);
  if (((cVar3 == '\0') || ((*(byte *)(param_1 + 0x50) & 0x10) != 0)) ||
     (puVar7 = param_2, cVar3 = CcCopyWriteWontFlush(param_1,param_2,param_3), cVar3 == '\0')) {
    return '\0';
  }
  *param_7 = 0;
  *(ulonglong *)(param_7 + 2) = uVar11;
  if (param_3 == 0) {
    return '\x01';
  }
  KeEnterCriticalRegion();
  uVar9 = (undefined7)((ulonglong)puVar7 >> 8);
  if ((param_4 == '\0') || (*(int *)(lVar1 + 0x1c) != 0)) {
    if ((bVar2) || (*(longlong *)(lVar1 + 0x28) < (longlong)(uVar11 + *(longlong *)param_2))) {
      cVar3 = ExAcquireResourceExclusiveLite(*(undefined8 *)(lVar1 + 8));
      if (cVar3 == '\0') {
        KeLeaveCriticalRegion();
        return '\0';
      }
      bVar14 = false;
    }
    else {
      cVar3 = ExAcquireResourceSharedLite(*(undefined8 *)(lVar1 + 8));
      if (cVar3 == '\0') {
        KeLeaveCriticalRegion();
        return '\0';
      }
      bVar14 = true;
    }
    if (bVar2) {
      local_80 = *(longlong *)(lVar1 + 0x20);
    }
    else {
      local_80 = *(longlong *)param_2;
    }
    lVar5 = local_80 + uVar11;
    local_78 = lVar5;
    if (((*(longlong *)(param_1 + 0x30) == 0) || (cVar3 = *(char *)(lVar1 + 5), cVar3 == '\0')) ||
       ((*(longlong *)(lVar1 + 0x28) + 0x2000 <= local_80 ||
        ((*(longlong *)(lVar1 + 0x18) < lVar5 || (lVar5 < 1)))))) {
      ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
      KeLeaveCriticalRegion();
      return '\0';
    }
    if ((bVar14) && (*(longlong *)(lVar1 + 0x28) < lVar5)) {
      ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
      cVar3 = ExAcquireResourceExclusiveLite(*(undefined8 *)(lVar1 + 8),param_4);
      if (cVar3 == '\0') {
        KeLeaveCriticalRegion();
        return '\0';
      }
      if (bVar2) {
        local_80 = *(longlong *)(lVar1 + 0x20);
        lVar5 = local_80 + uVar11;
        local_78 = lVar5;
      }
      if (((*(longlong *)(param_1 + 0x30) == 0) || (cVar3 = *(char *)(lVar1 + 5), cVar3 == '\0')) ||
         (*(longlong *)(lVar1 + 0x18) < lVar5)) {
        ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
        KeLeaveCriticalRegion();
        return '\0';
      }
    }
    if (cVar3 == '\x02') {
      lVar6 = IoGetRelatedDeviceObject(param_1);
      puVar7 = (uint *)(lVar1 + 0x20);
      if (*(longlong *)param_2 != -1) {
        puVar7 = param_2;
      }
      cVar3 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x50) + 8))
                        (param_1,puVar7,param_3,param_4,CONCAT44(uVar15,param_5),0,local_50,lVar6);
      if (cVar3 != '\0') goto LAB_0003dbf1;
      ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
    }
    else {
LAB_0003dbf1:
      puVar7 = *(uint **)(lVar1 + 0x20);
      uVar11 = local_68[0];
      if ((longlong)puVar7 < lVar5) {
        bVar13 = true;
        uVar11 = *(ulonglong *)(lVar1 + 0x28);
        param_2 = puVar7;
        local_68[0] = uVar11;
        if ((*(int *)(lVar1 + 0x24) == local_78._4_4_) || (*(longlong *)(lVar1 + 0x10) == 0)) {
          *(longlong *)(lVar1 + 0x20) = lVar5;
        }
        else {
          ExAcquireResourceExclusiveLite(*(longlong *)(lVar1 + 0x10),1);
          *(longlong *)(lVar1 + 0x20) = lVar5;
          ExReleaseResourceLite(*(undefined8 *)(lVar1 + 0x10));
        }
      }
      IoSetTopLevelIrp(param_9);
      if (*(longlong *)(lVar1 + 0x28) < local_80) {
        local_88 = CcZeroData(param_1,lVar1 + 0x28,&local_80,param_4);
      }
      if (local_88 != '\0') {
        local_88 = CcCopyWrite(param_1,&local_80,param_3,param_4,param_6);
      }
      IoSetTopLevelIrp(0);
      if (local_88 == '\0') {
        if (bVar13) {
          if (*(longlong *)(lVar1 + 0x10) == 0) {
            *(uint **)(lVar1 + 0x20) = param_2;
            *(ulonglong *)(lVar1 + 0x28) = uVar11;
          }
          else {
            ExAcquireResourceExclusiveLite(*(longlong *)(lVar1 + 0x10),1);
            *(uint **)(lVar1 + 0x20) = param_2;
            *(ulonglong *)(lVar1 + 0x28) = uVar11;
            ExReleaseResourceLite(*(undefined8 *)(lVar1 + 0x10));
          }
        }
      }
      else {
        if (*(longlong *)(lVar1 + 0x28) < lVar5) {
          if ((*(int *)(lVar1 + 0x2c) == local_78._4_4_) || (*(longlong *)(lVar1 + 0x10) == 0)) {
            *(longlong *)(lVar1 + 0x28) = lVar5;
          }
          else {
            ExAcquireResourceExclusiveLite(*(longlong *)(lVar1 + 0x10),1);
            *(longlong *)(lVar1 + 0x28) = lVar5;
            ExReleaseResourceLite(*(undefined8 *)(lVar1 + 0x10));
          }
        }
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x1000;
        if (bVar13) {
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8) = lVar5;
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x2000;
        }
        *(ulonglong *)(param_1 + 0x68) = (ulonglong)param_3 + local_80;
      }
LAB_0003ddb2:
      ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
      cVar4 = local_88;
    }
    KeLeaveCriticalRegion();
  }
  else {
    if ((bVar2) || (*(uint *)(lVar1 + 0x28) < param_3 + *param_2)) {
      uVar8 = CONCAT71(uVar9,1);
      ExAcquireResourceExclusiveLite(*(undefined8 *)(lVar1 + 8),uVar8);
      bVar13 = false;
    }
    else {
      uVar8 = CONCAT71(uVar9,1);
      ExAcquireResourceSharedLite(*(undefined8 *)(lVar1 + 8),uVar8);
      bVar13 = true;
    }
    if (bVar2) {
      uVar12 = *(uint *)(lVar1 + 0x20);
      local_78 = CONCAT44(local_78._4_4_,uVar12);
      local_70 = uVar12 + param_3;
      bVar14 = local_70 < uVar12;
    }
    else {
      uVar12 = *param_2;
      local_78 = CONCAT44(local_78._4_4_,uVar12);
      local_70 = uVar12 + param_3;
      if ((local_70 < uVar12) || (param_2[1] != 0)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
    }
    uVar10 = local_70;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      cVar4 = *(char *)(lVar1 + 5);
      uVar9 = (undefined7)((ulonglong)uVar8 >> 8);
      if ((((cVar4 != '\0') && (local_70 <= *(uint *)(lVar1 + 0x18))) &&
          (uVar12 < *(uint *)(lVar1 + 0x28) + 0x2000)) &&
         ((*(int *)(lVar1 + 0x1c) == 0 && (!bVar14)))) {
        if ((bVar13) && (*(uint *)(lVar1 + 0x28) < local_70)) {
          ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
          ExAcquireResourceExclusiveLite(*(undefined8 *)(lVar1 + 8),CONCAT71(uVar9,1));
          if (bVar2) {
            uVar12 = *(uint *)(lVar1 + 0x20);
            local_78 = CONCAT44(local_78._4_4_,uVar12);
            uVar10 = uVar12 + param_3;
            bVar14 = uVar10 < uVar12;
            local_70 = uVar10;
          }
          if (((*(longlong *)(param_1 + 0x30) == 0) || (cVar4 = *(char *)(lVar1 + 5), cVar4 == '\0')
              ) || ((*(uint *)(lVar1 + 0x18) < uVar10 || ((*(int *)(lVar1 + 0x1c) != 0 || (bVar14)))
                    ))) {
            ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
            KeLeaveCriticalRegion();
            return '\0';
          }
        }
        if (cVar4 == '\x02') {
          lVar5 = IoGetRelatedDeviceObject(param_1);
          puVar7 = (uint *)(lVar1 + 0x20);
          if (*(longlong *)param_2 != -1) {
            puVar7 = param_2;
          }
          cVar4 = (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 8) + 0x50) + 8))
                            (param_1,puVar7,param_3,1,CONCAT44(uVar15,param_5),0,local_68,lVar5);
          if (cVar4 == '\0') {
            ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
            KeLeaveCriticalRegion();
            return '\0';
          }
        }
        bVar2 = *(uint *)(lVar1 + 0x20) < uVar10;
        if (bVar2) {
          local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar1 + 0x28));
          *(uint *)(lVar1 + 0x20) = uVar10;
        }
        IoSetTopLevelIrp(param_9);
        if (*(uint *)(lVar1 + 0x28) < uVar12) {
          local_68[0] = (ulonglong)uVar12;
          CcZeroData(param_1,(uint *)(lVar1 + 0x28),local_68,1);
        }
        CcFastCopyWrite(param_1,uVar12,param_3,param_6);
        IoSetTopLevelIrp(0);
        if (*(uint *)(lVar1 + 0x28) < uVar10) {
          *(uint *)(lVar1 + 0x28) = uVar10;
        }
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x1000;
        if (bVar2) {
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8) = uVar10;
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x2000;
        }
        *(uint *)(param_1 + 0x68) = param_3 + uVar12;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        goto LAB_0003ddb2;
      }
    }
    ExReleaseResourceLite(*(undefined8 *)(lVar1 + 8));
    KeLeaveCriticalRegion();
    cVar4 = '\0';
  }
  return cVar4;
}




/* Library Function - Single Match
    FsRtlCopyRead2
   
   Library: Visual Studio 2019 Release */

char FsRtlCopyRead2(longlong param_1,uint *param_2,ulonglong param_3,char param_4,undefined4 param_5
                   ,undefined8 param_6,undefined4 *param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  int iStack_4c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar8 = param_3 & 0xffffffff;
  uVar1 = *param_2;
  cVar5 = '\x01';
  if ((uint)param_3 == 0) {
    *param_7 = 0;
    *(undefined8 *)(param_7 + 2) = 0;
    return '\x01';
  }
  lVar7 = uVar8 + *(longlong *)param_2;
  if (lVar7 < 1) {
    return '\0';
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  KeEnterCriticalRegion();
  if (param_4 == '\0') {
    cVar3 = ExAcquireResourceSharedLite(*(undefined8 *)(lVar2 + 8),0);
    if (cVar3 == '\0') {
      KeLeaveCriticalRegion();
      return '\0';
    }
  }
  else {
    ExAcquireResourceSharedLite(*(undefined8 *)(lVar2 + 8),1);
  }
  if ((*(longlong *)(param_1 + 0x30) == 0) || (*(char *)(lVar2 + 5) == '\0')) {
    ExReleaseResourceLite(*(undefined8 *)(lVar2 + 8));
    KeLeaveCriticalRegion();
    return '\0';
  }
  if (*(char *)(lVar2 + 5) == '\x02') {
    lVar6 = IoGetRelatedDeviceObject(param_1);
    cVar4 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x50) + 8))
                      (param_1,param_2,uVar8,param_4,CONCAT44(uVar9,param_5),1,param_7,lVar6);
    cVar3 = '\0';
    if (cVar4 != '\0') goto LAB_0003df2b;
LAB_0003df4f:
    cVar5 = cVar3;
    ExReleaseResourceLite(*(undefined8 *)(lVar2 + 8));
  }
  else {
LAB_0003df2b:
    lVar6 = *(longlong *)(lVar2 + 0x20);
    if (lVar6 < lVar7) {
      if (lVar6 <= *(longlong *)param_2) {
        *param_7 = 0xc0000011;
        *(undefined8 *)(param_7 + 2) = 0;
        cVar3 = '\x01';
        goto LAB_0003df4f;
      }
      uVar8 = (ulonglong)((int)lVar6 - *param_2);
    }
    IoSetTopLevelIrp(param_9);
    if ((param_4 == '\0') ||
       (iStack_4c = (int)((ulonglong)lVar7 >> 0x20), *(int *)(lVar2 + 0x24) != 0 || iStack_4c != 0))
    {
      cVar5 = CcCopyRead(param_1,param_2,uVar8,param_4,param_6,param_7);
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x80000;
    }
    else {
      CcFastCopyRead(param_1,*param_2,uVar8,
                     (((uint)param_3 & 0xfff) + 0xfff + (uVar1 & 0xfff) >> 0xc) +
                     ((uint)(param_3 >> 0xc) & 0xfffff),param_6,param_7);
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x80000;
    }
    if (cVar5 != '\0') {
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_7 + 2) + *(longlong *)param_2;
    }
    IoSetTopLevelIrp(0);
    ExReleaseResourceLite(*(undefined8 *)(lVar2 + 8));
  }
  KeLeaveCriticalRegion();
  return cVar5;
}




void FUN_0003e8c8(undefined8 param_1,longlong param_2)

{
  ExReleaseResourceLite
            (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x58) + 0x2a0) + 0x18);
  return;
}




void FUN_0003e8f6(undefined8 param_1,longlong param_2)

{
  ExReleaseResourceLite
            (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x58) + 0x2a0) + 0x18);
  return;
}




void FUN_0003e924(undefined8 param_1,longlong param_2)

{
  ExReleaseResourceLite(*(longlong *)(param_2 + 0x80) + 0x18);
  return;
}




void FUN_0003eb53(longlong *param_1,longlong param_2)

{
  RxExceptionFilter(*(longlong *)(param_2 + 0x30),param_1);
  return;
}




void FUN_0003eb74(undefined8 param_1,longlong param_2)

{
  ExReleaseResourceLite(*(undefined8 *)(param_2 + 0x60));
  return;
}




bool FUN_0003eb93(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FsRtlIsNtstatusExpected(*(undefined4 *)*param_1);
  return cVar1 != '\0';
}




void FUN_0003ebc3(void)

{
  return;
}




bool FUN_0003ebd8(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  *(undefined8 **)(param_2 + 0x88) = param_1;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)*param_1;
  cVar1 = FsRtlIsNtstatusExpected();
  return cVar1 != '\0';
}




bool FUN_0003ed58(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FsRtlIsNtstatusExpected(*(undefined4 *)*param_1);
  return cVar1 != '\0';
}




void FUN_0003f027(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    CcUninitializeCacheMap(*(undefined8 *)(param_2 + 0x80),0,0);
  }
  return;
}




void FUN_0003f054(undefined8 param_1,longlong param_2)

{
  ExFreePoolWithTag(*(undefined8 *)(param_2 + 0x70),0);
  return;
}




void FUN_0003f075(void)

{
  return;
}




void FUN_0003f390(void)

{
  return;
}




ulonglong FUN_0003f6c7(byte param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  if (param_1 == 0) {
    uVar1 = *(ulonglong *)(param_2 + 0x68);
    if (((uVar1 != 0) && (3 < DAT_000204e4)) && ((DAT_000204e0 & 2) != 0)) {
      uVar1 = WmlTrace(0xa1,(undefined8 *)&DAT_000204b0,DAT_000204e8,8);
    }
  }
  else if (*(ushort **)(param_2 + 0x68) != (ushort *)0x0) {
    uVar1 = RxFinalizeSrvOpen(*(ushort **)(param_2 + 0x68),
                              CONCAT71((int7)((ulonglong)param_2 >> 8),1),'\x01');
  }
  return uVar1;
}




void FUN_0003f74f(undefined8 param_1,longlong param_2)

{
  ExReleaseResourceLite(*(longlong *)(param_2 + 0x50) + 0x150);
  return;
}




ulonglong FUN_0003f948(byte param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  if (param_1 != 0) {
    uVar1 = ExReleaseResourceLite(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  }
  return uVar1;
}




bool FUN_0003f9e9(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FsRtlIsNtstatusExpected(*(undefined4 *)*param_1);
  return cVar1 != '\0';
}




bool FUN_0003fa19(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FsRtlIsNtstatusExpected(*(undefined4 *)*param_1);
  return cVar1 != '\0';
}




void FUN_0003fa44(void)

{
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00040008(void)

{
  if (((DAT_00020100 == 0) || (DAT_00020100 == 0x2b992ddfa232)) &&
     (DAT_00020100 = (_DAT_fffff78000000320 ^ 0x20100) & 0xffffffffffff, DAT_00020100 == 0)) {
    DAT_00020100 = 0x2b992ddfa232;
  }
  DAT_00020108 = ~DAT_00020100;
  return;
}




void entry(longlong param_1,undefined8 param_2)

{
  FUN_00040008();
  FUN_000125f4(param_1,param_2);
  return;
}




/* Library Function - Single Match
    RxGetRegistryParameters
   
   Library: Visual Studio 2019 Release */

void RxGetRegistryParameters(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined1 local_48 [16];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_18 = 0;
  local_10 = 0;
  local_38[0] = 0x30;
  local_20 = 0x240;
  local_28 = (undefined1 *)param_1;
  iVar1 = ZwOpenKey(&local_res8,&DAT_00020019,local_38);
  if (-1 < iVar1) {
    RtlInitUnicodeString(local_48,u_Parameters_000405e0);
    local_18 = 0;
    local_10 = 0;
    local_30 = local_res8;
    local_28 = local_48;
    local_38[0] = 0x30;
    local_20 = 0x240;
    iVar1 = ZwOpenKey(local_res10,&DAT_00020019,local_38);
    if (-1 < iVar1) {
      ZwClose(local_res10[0]);
    }
    ZwClose(local_res8);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxDriverEntry
   
   Library: Visual Studio 2019 Release */

ulonglong RxDriverEntry(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_20 [24];
  
  FUN_00033658();
  FUN_0001c430((ulonglong *)&DAT_00021440,0,0xf8);
  _DAT_00021440 = 0xeb00;
  _DAT_00021442 = 0xf8;
  DAT_00021448 = param_1;
  FUN_0001c430((ulonglong *)&DAT_00021560,0,0x290);
  _DAT_00021560 = 0xeb9a;
  _DAT_00021562 = 0x290;
  _DAT_00020e70 = 0;
  _DAT_000217f0 = &DAT_00020e70;
  FUN_00019e08();
  DAT_00021538 = &DAT_00020700;
  FUN_0001c430((ulonglong *)&DAT_00020700,0,0x670);
  RxInitializeLog();
  RxGetRegistryParameters(param_2);
  RxReadRegistryParameters();
  RtlInitUnicodeString(local_20);
  DAT_000212a0 = MmGetSystemRoutineAddress(local_20);
  uVar4 = RxInitializeRegistrationStructures();
  iVar3 = (int)uVar4;
  uVar4 = uVar4 & 0xffffffff;
  uVar6 = 2;
  if (-1 < iVar3) {
    uVar6 = 1;
  }
  if ((iVar3 != 0) &&
     ((RxLogEventDirect(DAT_00021538,(ushort *)0x0,0x80000bc4,iVar3,0x132), uVar6 < 2 ||
      (uVar6 == 2)))) {
    RxUninitializeLog();
  }
  if (iVar3 == 0) {
    RxInitializeDispatcher();
    ExInitializeNPagedLookasideList
              (&DAT_00020d80,ExAllocatePoolWithTag_exref,ExFreePool_exref,0,0x580,0x72497852,4);
    _DAT_00021b58 = &DAT_00021b50;
    _DAT_00021b50 = &DAT_00021b50;
    _DAT_00021540 = 0;
    DAT_00021428 = &DAT_00021420;
    DAT_00021420 = &DAT_00021420;
    DAT_00021b48 = &DAT_00021b40;
    DAT_00021b40 = &DAT_00021b40;
    _DAT_00021be0 = 1;
    _DAT_00021be8 = 0;
    _DAT_00021bf0 = 0;
    KeInitializeEvent(&DAT_00021bf8,1,0);
    _DAT_000212c0 = 1;
    _DAT_000212c8 = 0;
    _DAT_000212d0 = 0;
    KeInitializeEvent(&DAT_000212d8,1,0);
    KeInitializeMutex(&DAT_000213c0,1);
    KeInitializeMutex(&DAT_00021800);
    puVar2 = DAT_00021538;
    lVar5 = 0;
    do {
      *(undefined4 *)(puVar2 + lVar5 * 4 + 0x22c) = 0;
      puVar1 = puVar2 + lVar5 * 0x10 + 0x238;
      *(undefined **)(puVar1 + 8) = puVar1;
      *(undefined **)puVar1 = puVar1;
      *(undefined4 *)(puVar2 + lVar5 * 4 + 0x220) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < 3);
    *(undefined8 *)(puVar2 + 0x268) = 0;
    RxInitializeDispatchVectors(param_1);
    ExInitializeResourceLite(&DAT_000214d0);
    _DAT_000215c8 = &DAT_00021440;
    DAT_000214a8 = IoGetCurrentProcess();
    RxInitializeRxTimer();
    uVar4 = 0;
  }
  return uVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    RxInitializeDispatchVectors
   
   Library: Visual Studio 2019 Release */

void RxInitializeDispatchVectors(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  RtlInitUnicodeString(local_18,u_FsRtlTeardownPerStreamContexts_00040600);
  DAT_00020e08 = MmGetSystemRoutineAddress(local_18);
  puVar2 = (undefined8 *)(param_1 + 0x70);
  for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = RxFsdDispatch;
    puVar2 = puVar2 + 1;
  }
  _DAT_00021688 = &PTR_LAB_000202e0;
  *(undefined **)(param_1 + 0x50) = &DAT_000211c0;
  _DAT_000211c8 = RxFastIoCheckIfPossible;
  _DAT_000211c0 = 0xe0;
  _DAT_000211d0 = RxFastIoRead;
  _DAT_000211e0 = 0;
  _DAT_000211d8 = RxFastIoWrite;
  _DAT_000211e8 = 0;
  _DAT_00021210 = RxFastIoDeviceControl;
  _DAT_000211f0 = 0;
  _DAT_00021290 = &LAB_00018538;
  _DAT_000211f8 = 0;
  _DAT_00021298 = &LAB_00018538;
  _DAT_00021200 = 0;
  _DAT_00021218 = RxAcquireFileForNtCreateSection;
  _DAT_00021208 = 0;
  _DAT_00021220 = RxReleaseFileForNtCreateSection;
  _DAT_000211a8 = 0;
  _DAT_000211b8 = &DAT_000211b0;
  DAT_000211b0 = &DAT_000211b0;
  _DAT_000214b0 = RxAcquireFcbForLazyWrite;
  _DAT_000214b8 = RxReleaseFcbFromLazyWrite;
  _DAT_000214c0 = RxAcquireFcbForReadAhead;
  _DAT_000214c8 = RxReleaseFcbFromReadAhead;
  return;
}



