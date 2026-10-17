
/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1000  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1010  9  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1020  7  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1030  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1030  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x1030  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x1040  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1040  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




undefined8 FUN_180001050(void)

{
  return 1;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 FUN_180001070(void)

{
  return 0;
}




undefined8 FUN_180001090(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char cVar9;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar6 = 0;
  pcVar8 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  pcVar4 = DAT_18000cc40;
  if (DAT_18000cc40 == (char *)0x0) {
    DAT_18000cc40 = &DAT_18000cda0;
    pcVar1 = (char *)__std_type_info_name(0x18000c230,&DAT_18000c610);
    pcVar4 = DAT_18000cc40;
    if (DAT_18000cc40 != (char *)0x0) {
      *DAT_18000cc40 = '\0';
      if (*pcVar1 == 'c') {
        lVar2 = 6;
      }
      else {
        if (*pcVar1 != 's') goto LAB_18000116a;
        lVar2 = 7;
      }
      pcVar1 = pcVar1 + lVar2;
      cVar3 = *pcVar1;
      uVar7 = uVar6;
      if (cVar3 != '\0') {
        do {
          uVar5 = (uint)uVar7;
          if (cVar3 == ':') {
            if (0xff < uVar5) goto LAB_18000116a;
            pcVar1 = pcVar1 + 1;
            cVar3 = '.';
          }
          else if (0xff < uVar5) goto LAB_18000116a;
          pcVar1 = pcVar1 + 1;
          uVar6 = (ulonglong)(uVar5 + 1);
          pcVar4[uVar7] = cVar3;
          cVar3 = *pcVar1;
          uVar7 = uVar6;
        } while (cVar3 != '\0');
        if (0xff < uVar5 + 1) goto LAB_18000116a;
      }
      pcVar4[uVar6] = '\0';
    }
  }
LAB_18000116a:
  cVar3 = *pcVar8;
  cVar9 = *pcVar4;
  if (cVar3 == cVar9) {
    do {
      if ((cVar3 == '\0') || (cVar9 == '\0')) break;
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      cVar9 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    } while (cVar3 == cVar9);
  }
  if (cVar3 != *pcVar4) {
    return 0;
  }
  return param_1;
}




undefined8 * FUN_1800011d0(undefined8 *param_1,uint param_2)

{
  *param_1 = CEFIBoot::vftable;
  if (*(int *)(param_1 + 1) == 1) {
    memset((void *)((longlong)param_1 + 0xc),0,0x54);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_180001230(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 1;
    (**(code **)(*param_1 + 0x30))();
    return 4;
  }
  uVar1 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)((longlong)param_1 + 0x1c) = param_2[2];
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x2c) = param_2[4];
  *(undefined8 *)((longlong)param_1 + 0x34) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)((longlong)param_1 + 0x3c) = param_2[6];
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  uVar1 = param_2[9];
  *(undefined8 *)((longlong)param_1 + 0x4c) = param_2[8];
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 1) = 1;
  return 0;
}




undefined8 FUN_180001290(longlong param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    memset((void *)(param_1 + 0xc),0,0x54);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}




ulonglong FUN_1800012c0(longlong *param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  int *_Memory;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ushort local_res8 [4];
  uint local_res20 [2];
  int local_78 [2];
  int *local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  iVar7 = 0;
  iVar6 = 0;
  local_78[0] = 0;
  uVar4 = 0;
  local_res8[0] = 0;
  local_res20[0] = 0;
  if ((int)param_1[1] != 1) {
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    return 3;
  }
  if ((param_2 != (uint *)0x0) && (*param_3 < 4)) {
    return 4;
  }
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1,local_78);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (local_78[0] == 0) {
    return uVar3;
  }
  _Memory = (int *)operator_new(0x58);
  *_Memory = 0;
  _Memory[2] = 0;
  _Memory[3] = 0;
  _Memory[4] = 0;
  _Memory[5] = 0;
  _Memory[6] = 0;
  _Memory[7] = 0;
  _Memory[8] = 0;
  _Memory[9] = 0;
  _Memory[10] = 0;
  _Memory[0xb] = 0;
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0xe] = 0;
  _Memory[0xf] = 0;
  _Memory[0x10] = 0;
  _Memory[0x11] = 0;
  _Memory[0x12] = 0;
  _Memory[0x13] = 0;
  _Memory[0x14] = 0;
  _Memory[0x15] = 0;
  local_68 = param_1[2];
  lStack_60 = param_1[3];
  local_58 = param_1[4];
  lStack_50 = param_1[5];
  local_48 = param_1[6];
  local_70 = _Memory;
  uVar2 = FUN_1800043e0(_Memory,&local_68);
  uVar3 = (ulonglong)uVar2;
  if (uVar2 != 0) goto LAB_180001512;
  uVar2 = FUN_180005120(_Memory,(short *)local_res8);
  uVar1 = local_res8[0];
  uVar3 = (ulonglong)uVar2;
  if (param_2 == (uint *)0x0) {
    if (uVar2 != 0) goto LAB_180001512;
    uVar4 = 0;
    if (local_res8[0] != 0) {
      do {
        uVar2 = FUN_180005320(_Memory,(void *)0x0,local_res20,uVar4);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 != 0) goto LAB_180001512;
        uVar4 = uVar4 + 1;
        iVar6 = iVar7 + local_res20[0] + 4;
        iVar7 = iVar6;
      } while (uVar4 < uVar1);
    }
  }
  else {
    if (uVar2 != 0) goto LAB_180001512;
    puVar5 = param_2;
    iVar6 = iVar7;
    if (local_res8[0] != 0) {
      do {
        uVar2 = FUN_180005320(_Memory,(void *)0x0,local_res20,uVar4);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 != 0) goto LAB_180001512;
        if ((ulonglong)*param_3 + (longlong)param_2 <
            (ulonglong)local_res20[0] + 4 + (longlong)puVar5) goto LAB_1800014ed;
        *puVar5 = local_res20[0];
        uVar2 = FUN_180005320(_Memory,puVar5 + 1,local_res20,uVar4);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 != 0) goto LAB_180001512;
        puVar5 = (uint *)((longlong)(puVar5 + 1) + (ulonglong)local_res20[0]);
        iVar7 = iVar7 + 4 + local_res20[0];
        uVar4 = uVar4 + 1;
        iVar6 = iVar7;
      } while (uVar4 < local_res8[0]);
    }
    if ((uint *)((ulonglong)*param_3 + (longlong)param_2) < puVar5 + 1) {
LAB_1800014ed:
      uVar3 = 7;
      goto LAB_180001512;
    }
    *puVar5 = 0;
  }
  *param_3 = iVar6 + 4;
LAB_180001512:
  FUN_1800045e0(_Memory);
  FUN_1800045e0(_Memory);
  free(_Memory);
  return uVar3;
}




int FUN_180001550(longlong *param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  int *_Memory;
  uint uVar2;
  ulonglong uVar3;
  int local_68 [2];
  int *local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  if ((int)param_1[1] != 1) {
    return 1;
  }
  if ((*(int *)((longlong)param_1 + 0xc) != 3) || ((int)param_1[2] == 0)) {
    return 3;
  }
  local_68[0] = 0;
  iVar1 = 0;
  if ((((param_2 != (uint *)0x0) && (iVar1 = 0, 3 < param_3)) &&
      (iVar1 = (**(code **)(*param_1 + 0x60))(param_1,local_68), iVar1 == 0)) && (local_68[0] != 0))
  {
    _Memory = (int *)operator_new(0x58);
    *_Memory = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    _Memory[10] = 0;
    _Memory[0xb] = 0;
    _Memory[0xc] = 0;
    _Memory[0xd] = 0;
    _Memory[0xe] = 0;
    _Memory[0xf] = 0;
    _Memory[0x10] = 0;
    _Memory[0x11] = 0;
    _Memory[0x12] = 0;
    _Memory[0x13] = 0;
    _Memory[0x14] = 0;
    _Memory[0x15] = 0;
    local_58 = param_1[2];
    lStack_50 = param_1[3];
    local_48 = param_1[4];
    lStack_40 = param_1[5];
    local_38 = param_1[6];
    local_60 = _Memory;
    iVar1 = FUN_1800043e0(_Memory,&local_58);
    if ((iVar1 == 0) && (uVar2 = *param_2, uVar2 != 0)) {
      uVar3 = (ulonglong)param_3 + (longlong)param_2;
      do {
        if (uVar3 < (longlong)param_2 + (ulonglong)uVar2 + 4) {
          iVar1 = 7;
          break;
        }
        iVar1 = FUN_1800055b0(_Memory,(longlong)(param_2 + 1),uVar2,param_4);
        if (iVar1 != 0) break;
        param_2 = (uint *)((longlong)(param_2 + 1) + (ulonglong)uVar2);
        uVar2 = *param_2;
      } while (uVar2 != 0);
    }
    FUN_1800045e0(_Memory);
    FUN_1800045e0(_Memory);
    free(_Memory);
  }
  return iVar1;
}




ulonglong FUN_1800016e0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int *_Memory;
  int local_res8 [2];
  int *local_res10;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_res8[0] = 0;
  if ((int)param_1[1] != 1) {
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) != 4) {
    return 3;
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,local_res8);
  if (((int)uVar2 == 0) && (local_res8[0] != 0)) {
    _Memory = (int *)operator_new(0x58);
    *_Memory = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    _Memory[10] = 0;
    _Memory[0xb] = 0;
    _Memory[0xc] = 0;
    _Memory[0xd] = 0;
    _Memory[0xe] = 0;
    _Memory[0xf] = 0;
    _Memory[0x10] = 0;
    _Memory[0x11] = 0;
    _Memory[0x12] = 0;
    _Memory[0x13] = 0;
    _Memory[0x14] = 0;
    _Memory[0x15] = 0;
    local_38 = param_1[2];
    lStack_30 = param_1[3];
    local_28 = param_1[4];
    lStack_20 = param_1[5];
    local_18 = param_1[6];
    local_res10 = _Memory;
    uVar1 = FUN_1800043e0(_Memory,&local_38);
    if (uVar1 == 0) {
      uVar1 = FUN_180004840(_Memory);
    }
    uVar2 = (ulonglong)uVar1;
    FUN_1800045e0(_Memory);
    FUN_1800045e0(_Memory);
    free(_Memory);
  }
  return uVar2;
}




ulonglong FUN_1800017f0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int *_Memory;
  int local_res8 [2];
  int *local_res10;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_res8[0] = 0;
  if ((int)param_1[1] != 1) {
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) != 4) {
    return 3;
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,local_res8);
  if (((int)uVar2 == 0) && (local_res8[0] != 0)) {
    _Memory = (int *)operator_new(0x58);
    *_Memory = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    _Memory[10] = 0;
    _Memory[0xb] = 0;
    _Memory[0xc] = 0;
    _Memory[0xd] = 0;
    _Memory[0xe] = 0;
    _Memory[0xf] = 0;
    _Memory[0x10] = 0;
    _Memory[0x11] = 0;
    _Memory[0x12] = 0;
    _Memory[0x13] = 0;
    _Memory[0x14] = 0;
    _Memory[0x15] = 0;
    local_38 = param_1[2];
    lStack_30 = param_1[3];
    local_28 = param_1[4];
    lStack_20 = param_1[5];
    local_18 = param_1[6];
    local_res10 = _Memory;
    uVar1 = FUN_1800043e0(_Memory,&local_38);
    if (uVar1 == 0) {
      uVar1 = FUN_180004b40(_Memory,(longlong)(param_1 + 7));
    }
    uVar2 = (ulonglong)uVar1;
    FUN_1800045e0(_Memory);
    FUN_1800045e0(_Memory);
    free(_Memory);
  }
  return uVar2;
}




ulonglong FUN_180001900(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int *_Memory;
  int local_res8 [2];
  int *local_res10;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_res8[0] = 0;
  if ((int)param_1[1] != 1) {
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) != 1) {
    return 3;
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,local_res8);
  if (((int)uVar2 == 0) && (local_res8[0] != 0)) {
    _Memory = (int *)operator_new(0x58);
    *_Memory = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    _Memory[8] = 0;
    _Memory[9] = 0;
    _Memory[10] = 0;
    _Memory[0xb] = 0;
    _Memory[0xc] = 0;
    _Memory[0xd] = 0;
    _Memory[0xe] = 0;
    _Memory[0xf] = 0;
    _Memory[0x10] = 0;
    _Memory[0x11] = 0;
    _Memory[0x12] = 0;
    _Memory[0x13] = 0;
    _Memory[0x14] = 0;
    _Memory[0x15] = 0;
    local_38 = param_1[2];
    lStack_30 = param_1[3];
    local_28 = param_1[4];
    lStack_20 = param_1[5];
    local_18 = param_1[6];
    local_res10 = _Memory;
    uVar1 = FUN_1800043e0(_Memory,&local_38);
    if (uVar1 == 0) {
      uVar1 = FUN_180004e70(_Memory);
    }
    uVar2 = (ulonglong)uVar1;
    FUN_1800045e0(_Memory);
    FUN_1800045e0(_Memory);
    free(_Memory);
  }
  return uVar2;
}




int FUN_180001a10(undefined8 param_1,uint *param_2)

{
  int iVar1;
  int *_Memory;
  
  _Memory = (int *)operator_new(0x58);
  *_Memory = 0;
  _Memory[2] = 0;
  _Memory[3] = 0;
  _Memory[4] = 0;
  _Memory[5] = 0;
  _Memory[6] = 0;
  _Memory[7] = 0;
  _Memory[8] = 0;
  _Memory[9] = 0;
  _Memory[10] = 0;
  _Memory[0xb] = 0;
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0xe] = 0;
  _Memory[0xf] = 0;
  _Memory[0x10] = 0;
  _Memory[0x11] = 0;
  _Memory[0x12] = 0;
  _Memory[0x13] = 0;
  _Memory[0x14] = 0;
  _Memory[0x15] = 0;
  iVar1 = FUN_1800043e0(_Memory,(undefined8 *)0x0);
  if (iVar1 == 0) {
    iVar1 = FUN_180005940(_Memory,param_2);
  }
  FUN_1800045e0(_Memory);
  FUN_1800045e0(_Memory);
  free(_Memory);
  return iVar1;
}




undefined8 FUN_180001ab0(undefined *param_1,undefined8 param_2)

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




void FUN_180001ae0(char *param_1)

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
  
  local_18 = DAT_18000c010 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_180001bd5:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_180001bd5;
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
          FUN_180001ab0(pFVar3,hModule);
        }
      }
      goto LAB_180001bd5;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined4 FUN_180001c00(undefined4 param_1)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  char cVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18000cc58) && (_Init_thread_header(&DAT_18000cc58), DAT_18000cc58 == -1)) {
    DAT_18000cc50 = (undefined8 *)FUN_180001ae0("Error");
    _Init_thread_footer(&DAT_18000cc58);
  }
  if (DAT_18000cc50 != (undefined8 *)0x0) {
    if (DAT_18000cc60 != (longlong *)0x0) goto LAB_180001d4d;
    puVar5 = DAT_18000cc68;
    if (DAT_18000cc68 == (undefined1 *)0x0) {
      DAT_18000cc68 = &DAT_18000cc90;
      pcVar1 = (char *)__std_type_info_name(0x18000c330,&DAT_18000c610);
      puVar5 = DAT_18000cc68;
      uVar4 = 0;
      if (DAT_18000cc68 != (undefined1 *)0x0) {
        *DAT_18000cc68 = 0;
        if (*pcVar1 == 'c') {
          lVar2 = 6;
        }
        else {
          if (*pcVar1 != 's') goto LAB_180001d2f;
          lVar2 = 7;
        }
        pcVar1 = pcVar1 + lVar2;
        cVar6 = *pcVar1;
        if (cVar6 != '\0') {
          do {
            uVar3 = (uint)uVar4;
            if (cVar6 == ':') {
              if (0xff < uVar3) goto LAB_180001d2f;
              puVar5[uVar4] = 0x2e;
              pcVar1 = pcVar1 + 1;
            }
            else {
              if (0xff < uVar3) goto LAB_180001d2f;
              puVar5[uVar4] = cVar6;
            }
            uVar4 = (ulonglong)(uVar3 + 1);
            pcVar1 = pcVar1 + 1;
            cVar6 = *pcVar1;
          } while (cVar6 != '\0');
          if (0xff < uVar3 + 1) goto LAB_180001d2f;
        }
        puVar5[uVar4] = 0;
      }
    }
LAB_180001d2f:
    DAT_18000cc60 = (longlong *)(**(code **)*DAT_18000cc50)(DAT_18000cc50,puVar5);
  }
  if (DAT_18000cc60 == (longlong *)0x0) {
    return param_1;
  }
LAB_180001d4d:
  (**(code **)(*DAT_18000cc60 + 0x28))();
  return param_1;
}




void FUN_180001d60(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




int FUN_180001d80(undefined8 param_1,longlong *param_2)

{
  longlong *_Memory;
  longlong *_Memory_00;
  longlong lVar1;
  longlong *local_res10;
  longlong *local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000cec0) {
    _Init_thread_header(&DAT_18000cec0);
    if (DAT_18000cec0 == -1) {
      _Memory = (longlong *)operator_new(8);
      *_Memory = (longlong)
                 dnc::ConstructFunction<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>::
                 vftable;
      local_res10 = _Memory;
      _Memory_00 = (longlong *)operator_new(0x10);
      *_Memory_00 = (longlong)
                    dnc::
                    FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,0>
                    ::vftable;
      local_res18 = _Memory_00;
      lVar1 = (**(code **)(*_Memory + 0x10))(_Memory);
      _Memory_00[1] = lVar1;
      local_res10 = _Memory_00;
      free(_Memory);
      DAT_18000d008 = FUN_180003430(&local_res10);
      free(_Memory_00);
      _Init_thread_footer(&DAT_18000cec0);
    }
  }
  lVar1 = DAT_18000d008;
  if (param_2 != (longlong *)0x0) {
    *param_2 = DAT_18000d008;
  }
  return (lVar1 != 0) - 1;
}




undefined8 FUN_180001ea0(void)

{
  return DAT_18000d000;
}




char * FUN_180001eb0(void)

{
  return "EFIBoot";
}




undefined8 FUN_180001ec0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  char cVar10;
  char cVar11;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar7 = 0;
  pcVar9 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  lVar8 = 7;
  pcVar6 = DAT_18000cc78;
  if (DAT_18000cc78 == (char *)0x0) {
    DAT_18000cc78 = &DAT_18000d120;
    pcVar1 = (char *)__std_type_info_name(0x18000c4f0,&DAT_18000c610);
    pcVar6 = DAT_18000cc78;
    if (DAT_18000cc78 != (char *)0x0) {
      *DAT_18000cc78 = '\0';
      if (*pcVar1 == 'c') {
        lVar2 = 6;
      }
      else {
        lVar2 = lVar8;
        if (*pcVar1 != 's') goto LAB_180001faa;
      }
      pcVar1 = pcVar1 + lVar2;
      cVar10 = *pcVar1;
      uVar4 = uVar7;
      uVar5 = uVar7;
      if (cVar10 != '\0') {
        do {
          uVar3 = (uint)uVar4;
          if (cVar10 == ':') {
            if (0xff < uVar3) goto LAB_180001faa;
            pcVar1 = pcVar1 + 1;
            cVar10 = '.';
          }
          else if (0xff < uVar3) goto LAB_180001faa;
          pcVar1 = pcVar1 + 1;
          uVar5 = (ulonglong)(uVar3 + 1);
          pcVar6[uVar4] = cVar10;
          cVar10 = *pcVar1;
          uVar4 = uVar5;
        } while (cVar10 != '\0');
        if (0xff < uVar3 + 1) goto LAB_180001faa;
      }
      pcVar6[uVar5] = '\0';
    }
  }
LAB_180001faa:
  cVar10 = *pcVar9;
  cVar11 = *pcVar6;
  pcVar1 = pcVar9;
  if (cVar10 == cVar11) {
    do {
      if ((cVar10 == '\0') || (cVar11 == '\0')) break;
      cVar10 = pcVar1[1];
      cVar11 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar1 + 1;
    } while (cVar10 == cVar11);
  }
  if (cVar10 == *pcVar6) {
    return param_1;
  }
  pcVar6 = DAT_18000cc48;
  if (DAT_18000cc48 == (char *)0x0) {
    DAT_18000cc48 = &DAT_18000cef0;
    pcVar1 = (char *)__std_type_info_name(0x18000c518,&DAT_18000c610);
    pcVar6 = DAT_18000cc48;
    if (DAT_18000cc48 != (char *)0x0) {
      *DAT_18000cc48 = '\0';
      if (*pcVar1 == 'c') {
        lVar8 = 6;
      }
      else if (*pcVar1 != 's') goto LAB_180002092;
      cVar10 = pcVar1[lVar8];
      pcVar1 = pcVar1 + lVar8;
      uVar4 = uVar7;
      if (cVar10 != '\0') {
        do {
          uVar3 = (uint)uVar4;
          if (cVar10 == ':') {
            if (0xff < uVar3) goto LAB_180002092;
            pcVar1 = pcVar1 + 1;
            cVar10 = '.';
          }
          else if (0xff < uVar3) goto LAB_180002092;
          pcVar1 = pcVar1 + 1;
          uVar7 = (ulonglong)(uVar3 + 1);
          pcVar6[uVar4] = cVar10;
          cVar10 = *pcVar1;
          uVar4 = uVar7;
        } while (cVar10 != '\0');
        if (0xff < uVar3 + 1) goto LAB_180002092;
      }
      pcVar6[uVar7] = '\0';
    }
  }
LAB_180002092:
  cVar10 = *pcVar9;
  cVar11 = *pcVar6;
  if (cVar10 == cVar11) {
    do {
      if ((cVar10 == '\0') || (cVar11 == '\0')) break;
      cVar10 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
      cVar11 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar10 == cVar11);
  }
  if (cVar10 != *pcVar6) {
    return 0;
  }
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1800020f0(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 *puVar8;
  int *piVar9;
  
  if (DAT_18000cc80 != (undefined *)0x0) {
    return DAT_18000cc80;
  }
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if ((*piVar9 < DAT_18000cff0) && (_Init_thread_header(&DAT_18000cff0), DAT_18000cff0 == -1)) {
    DAT_18000d010 = (undefined8 *)FUN_180001ae0("Thread");
    _Init_thread_footer(&DAT_18000cff0);
  }
  if (DAT_18000d010 == (undefined8 *)0x0) {
    if ((*piVar9 < DAT_18000cff4) && (_Init_thread_header(&DAT_18000cff4), DAT_18000cff4 == -1)) {
      _DAT_18000cea8 = 0;
      _DAT_18000cea0 = CMomEventObject<class_CModuleImpl<class_CEFIBootModule>_>::vftable;
      DAT_18000ceb0 = 0;
      _DAT_18000ceb8 = 0;
      DAT_18000ceb0 = FUN_180003400();
      _DAT_18000cea0 =
           CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CEFIBootModule>_>_>::
           vftable;
      atexit(FUN_180007280);
      _Init_thread_footer(&DAT_18000cff4);
    }
    DAT_18000cc80 = &DAT_18000cea0;
    return &DAT_18000cea0;
  }
  uVar6 = 0;
  puVar8 = DAT_18000cc70;
  if (DAT_18000cc70 == (undefined1 *)0x0) {
    DAT_18000cc70 = &DAT_18000d020;
    pcVar2 = (char *)__std_type_info_name(0x18000c3a8,&DAT_18000c610);
    puVar8 = DAT_18000cc70;
    if (DAT_18000cc70 != (undefined1 *)0x0) {
      *DAT_18000cc70 = 0;
      if (*pcVar2 == 'c') {
        lVar3 = 6;
      }
      else {
        if (*pcVar2 != 's') goto LAB_1800022c4;
        lVar3 = 7;
      }
      pcVar2 = pcVar2 + lVar3;
      cVar7 = *pcVar2;
      if (cVar7 != '\0') {
        do {
          uVar5 = (uint)uVar6;
          if (cVar7 == ':') {
            if (0xff < uVar5) goto LAB_1800022c4;
            puVar8[uVar6] = 0x2e;
            pcVar2 = pcVar2 + 1;
          }
          else {
            if (0xff < uVar5) goto LAB_1800022c4;
            puVar8[uVar6] = cVar7;
          }
          uVar6 = (ulonglong)(uVar5 + 1);
          pcVar2 = pcVar2 + 1;
          cVar7 = *pcVar2;
        } while (cVar7 != '\0');
        if (0xff < uVar5 + 1) goto LAB_1800022c4;
      }
      puVar8[uVar6] = 0;
    }
  }
LAB_1800022c4:
  plVar4 = (longlong *)(**(code **)*DAT_18000d010)(DAT_18000d010,puVar8);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x28))(plVar4);
    iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4,0xffffffff);
    if (DAT_18000cc80 == (undefined *)0x0) {
      if ((*piVar9 < DAT_18000cff8) && (_Init_thread_header(&DAT_18000cff8), DAT_18000cff8 == -1)) {
        _DAT_18000ced0 = 0;
        _DAT_18000cec8 = CMomEventObject<class_CModuleImpl<class_CEFIBootModule>_>::vftable;
        DAT_18000ced8 = 0;
        _DAT_18000cee0 = 0;
        DAT_18000ced8 = FUN_180003400();
        _DAT_18000cec8 =
             CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CEFIBootModule>_>_>::
             vftable;
        atexit(FUN_180007240);
        _Init_thread_footer(&DAT_18000cff8);
      }
      DAT_18000cc80 = &DAT_18000cec8;
      if (-1 < iVar1) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    }
    (**(code **)(*plVar4 + 0x30))(plVar4);
  }
  return DAT_18000cc80;
}




void FUN_1800023d0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




undefined4 FUN_1800023f0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x60);
}




int FUN_180002400(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  LOCK();
  plVar1 = param_1 + 0xc;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar2 = (int)param_1[0xc];
  if ((int)*plVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  (**(code **)(*param_1 + 0x78))(param_1,1);
  return iVar2;
}




char * FUN_180002430(void)

{
  return "CEFIBoot";
}




void FUN_180002440(longlong *param_1)

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




undefined4 FUN_1800024a0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




int FUN_1800024b0(void *param_1)

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




char * FUN_1800024f0(void)

{
  return "CEFIBootModule";
}




void FUN_180002500(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = *plVar1;
  FUN_180002b70(plVar1,*(longlong **)(lVar2 + 8));
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180002550(longlong param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  void *_Buf2;
  longlong lVar6;
  longlong lVar7;
  ulonglong _Size;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60 [2];
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_18000c010 ^ (ulonglong)auStack_88;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60[0]._0_1_ = 0;
  FUN_1800029d0(local_60,param_2);
  FUN_180002c40((longlong *)(param_1 + 0x10),&local_68,local_60);
  uVar3 = uStack_48;
  lVar7 = *(longlong *)(param_1 + 0x10);
  puVar2 = (undefined1 *)CONCAT71(local_60[0]._1_7_,(undefined1)local_60[0]);
  if (local_68 != lVar7) {
    _Buf2 = (void *)(local_68 + 0x20);
    if (0xf < *(ulonglong *)(local_68 + 0x38)) {
      _Buf2 = *(void **)(local_68 + 0x20);
    }
    uVar1 = *(ulonglong *)(local_68 + 0x30);
    puVar5 = (undefined1 *)local_60;
    if (0xf < uStack_48) {
      puVar5 = puVar2;
    }
    _Size = local_50;
    if (uVar1 < local_50) {
      _Size = uVar1;
    }
    iVar4 = memcmp(puVar5,_Buf2,_Size);
    lVar6 = local_68;
    if (iVar4 == 0) {
      if (uVar1 <= local_50) goto LAB_180002602;
    }
    else if (-1 < iVar4) goto LAB_180002602;
  }
  lVar6 = lVar7;
LAB_180002602:
  if (0xf < uVar3) {
    puVar5 = puVar2;
    if ((0xfff < uVar3 + 1) &&
       (puVar5 = *(undefined1 **)(puVar2 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar2 + (-8 - (longlong)puVar5))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar5);
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar6 == lVar7) {
    *param_3 = 0;
  }
  else {
    *param_3 = (int)(*(longlong *)(lVar6 + 0x48) - *(longlong *)(lVar6 + 0x40) >> 3);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_88);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180002690(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *_Memory;
  longlong *plVar9;
  longlong **_Buf2;
  ulonglong _Size;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStackY_c8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [4];
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_88[3] = 0xfffffffffffffffe;
  local_48 = DAT_18000c010 ^ (ulonglong)auStackY_c8;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68[0]._0_1_ = 0;
  local_98 = param_2;
  FUN_1800029d0(local_68,param_2);
  plVar11 = (longlong *)(param_1 + 0x10);
  FUN_180002c40(plVar11,(longlong *)&local_90,local_68);
  uVar1 = uStack_50;
  uVar3 = local_58;
  plVar9 = (longlong *)*plVar11;
  puVar8 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  if (local_90 != plVar9) {
    plVar9 = local_90 + 4;
    if (0xf < (ulonglong)local_90[7]) {
      plVar9 = (longlong *)local_90[4];
    }
    puVar7 = (undefined1 *)local_68;
    if (0xf < uStack_50) {
      puVar7 = puVar8;
    }
    uVar10 = local_90[6];
    _Size = local_58;
    if (uVar10 < local_58) {
      _Size = uVar10;
    }
    uVar4 = memcmp(puVar7,plVar9,_Size);
    if (uVar4 == 0) {
      if (uVar3 < uVar10) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar10 < uVar3);
      }
    }
    plVar9 = local_90;
    if ((int)uVar4 < 0) {
      plVar9 = (longlong *)*plVar11;
    }
  }
  if (0xf < uVar1) {
    puVar7 = puVar8;
    if ((0xfff < uVar1 + 1) &&
       (puVar7 = *(undefined1 **)(puVar8 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar8 + (-8 - (longlong)puVar7))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar7);
  }
  if (plVar9 == (longlong *)*plVar11) {
    local_58 = 0;
    uStack_50 = 0xf;
    local_68[0]._0_1_ = 0;
    FUN_1800029d0(local_68,local_98);
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    _Buf2 = &local_98;
    FUN_180002c40(plVar11,(longlong *)_Buf2,local_68);
    uVar3 = local_58;
    plVar9 = local_98;
    if (local_98 == (longlong *)*plVar11) {
LAB_180002844:
      local_98 = local_68;
      plVar5 = (longlong *)FUN_180003920(plVar11,_Buf2,&local_98);
      FUN_180003970(plVar11,&local_98,plVar9,plVar5 + 4,plVar5);
      plVar9 = local_98;
    }
    else {
      _Buf2 = (longlong **)(local_98 + 4);
      if (0xf < (ulonglong)local_98[7]) {
        _Buf2 = (longlong **)local_98[4];
      }
      puVar8 = (undefined1 *)local_68;
      if (0xf < uStack_50) {
        puVar8 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
      }
      uVar1 = local_98[6];
      uVar10 = local_58;
      if (uVar1 < local_58) {
        uVar10 = uVar1;
      }
      uVar4 = memcmp(puVar8,_Buf2,uVar10);
      if (uVar4 == 0) {
        if (uVar3 < uVar1) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar1 < uVar3);
        }
      }
      if ((int)uVar4 < 0) goto LAB_180002844;
    }
    plVar5 = plVar9 + 8;
    if (plVar5 != local_88) {
      FUN_180002ed0(plVar5);
      *plVar5 = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
    }
    FUN_180002ed0(local_88);
    if (0xf < uStack_50) {
      pvVar2 = (void *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
      _Memory = pvVar2;
      if ((0xfff < uStack_50 + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    plVar9 = *(longlong **)*plVar11;
  }
  plVar11 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    plVar11 = (longlong *)(**(code **)*param_3)(param_3,&DAT_18000c034);
    local_90 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      (**(code **)(*param_3 + 8))(param_3);
    }
    else {
      (**(code **)(*param_3 + 0x10))();
    }
  }
  plVar5 = (longlong *)plVar9[9];
  if ((longlong *)plVar9[10] == plVar5) {
    FUN_180003470((ulonglong *)(plVar9 + 8),(ulonglong)plVar5,(longlong *)&local_90);
    plVar11 = local_90;
  }
  else {
    *plVar5 = 0;
    if (plVar11 != (longlong *)0x0) {
      lVar6 = (**(code **)*plVar11)(plVar11,&DAT_18000c034);
      *plVar5 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*plVar11 + 0x10))();
        plVar9[9] = plVar9[9] + 8;
        goto LAB_180002992;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    plVar9[9] = plVar9[9] + 8;
  }
LAB_180002992:
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_c8);
  return;
}




longlong * FUN_1800029d0(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong _Size;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_2 + _Size) != '\0');
  uVar1 = param_1[3];
  if (uVar1 < _Size) {
    if (0x7fffffffffffffff < _Size) {
      FUN_180003750();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = _Size | 0xf;
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
      if (pvVar3 == (void *)0x0) goto LAB_180002b21;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = _Size;
    param_1[3] = uVar7;
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180002b21:
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
    param_1[2] = _Size;
    memmove(plVar4,param_2,_Size);
    *(undefined1 *)((longlong)plVar4 + _Size) = 0;
  }
  return param_1;
}




void FUN_180002b30(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180002b70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *_Memory;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_180002b70(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180002ed0(param_2 + 8);
    if (0xf < (ulonglong)param_2[7]) {
      pvVar3 = (void *)param_2[4];
      _Memory = pvVar3;
      if ((0xfff < param_2[7] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    free(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




longlong * FUN_180002c40(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong _Size;
  
  puVar7 = (undefined8 *)*param_1;
  if (*(char *)((longlong)puVar7[1] + 0x19) != '\0') {
    *param_2 = (longlong)puVar7;
    return param_2;
  }
  uVar1 = param_3[3];
  uVar2 = param_3[2];
  puVar6 = (undefined8 *)puVar7[1];
  do {
    puVar5 = param_3;
    if (0xf < uVar1) {
      puVar5 = (undefined8 *)*param_3;
    }
    _Buf1 = puVar6 + 4;
    if (0xf < (ulonglong)puVar6[7]) {
      _Buf1 = (undefined8 *)puVar6[4];
    }
    uVar3 = puVar6[6];
    _Size = uVar3;
    if (uVar2 < uVar3) {
      _Size = uVar2;
    }
    iVar4 = memcmp(_Buf1,puVar5,_Size);
    if (iVar4 == 0) {
      if (uVar2 <= uVar3) goto LAB_180002cb7;
LAB_180002ce8:
      puVar5 = (undefined8 *)puVar6[2];
    }
    else {
      if (iVar4 < 0) goto LAB_180002ce8;
LAB_180002cb7:
      puVar5 = (undefined8 *)*puVar6;
      puVar7 = puVar6;
    }
    puVar6 = puVar5;
    if (*(char *)((longlong)puVar5 + 0x19) != '\0') {
      *param_2 = (longlong)puVar7;
      return param_2;
    }
  } while( true );
}




undefined8 *
FUN_180002d10(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  
  plVar6 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar6) && (param_4 == plVar6)) {
    FUN_180002b70(param_1,(longlong *)plVar6[1]);
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
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          param_3 = plVar2;
          plVar4 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            param_3 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
          while ((param_3 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar5 = (longlong *)param_3[1];
            plVar4 = param_3;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar1 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar1 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar2 = plVar5;
          }
        }
        plVar6 = FUN_180002f70(param_1,plVar6);
        FUN_180002ed0(plVar6 + 8);
        if (0xf < (ulonglong)plVar6[7]) {
          pvVar3 = (void *)plVar6[4];
          _Memory = pvVar3;
          if ((0xfff < plVar6[7] + 1U) &&
             (_Memory = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        plVar6[6] = 0;
        plVar6[7] = 0xf;
        *(undefined1 *)(plVar6 + 4) = 0;
        free(plVar6);
        plVar6 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




void FUN_180002ed0(longlong *param_1)

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




longlong * FUN_180002f70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar7[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar7 = plVar5;
    if (plVar5 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar5[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      plVar6 = (longlong *)param_2[1];
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar5;
      }
      else {
        plVar6[2] = (longlong)plVar5;
      }
    }
    plVar5[1] = param_2[1];
    lVar2 = plVar5[3];
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar4 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar6 = plVar4;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar6 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar4 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar4[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar5 = plVar4;
        }
        *(longlong **)(lVar2 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar6;
            }
            plVar5[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              puVar3 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar5;
              }
              else {
                puVar3[2] = plVar5;
              }
            }
            *plVar5 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                lVar2 = *plVar5;
                *(undefined1 *)(plVar5 + 3) = 0;
                *plVar5 = *(longlong *)(lVar2 + 0x10);
                if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
                  *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar5;
                }
                *(longlong *)(lVar2 + 8) = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong *)(*param_1 + 8) = lVar2;
                }
                else {
                  plVar7 = (longlong *)plVar5[1];
                  if (plVar5 == (longlong *)plVar7[2]) {
                    plVar7[2] = lVar2;
                  }
                  else {
                    *plVar7 = lVar2;
                  }
                }
                *(longlong **)(lVar2 + 0x10) = plVar5;
                plVar5[1] = lVar2;
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              plVar5 = (longlong *)plVar6[2];
              plVar6[2] = *plVar5;
              if (*(char *)(*plVar5 + 0x19) == '\0') {
                *(longlong **)(*plVar5 + 8) = plVar6;
              }
              plVar5[1] = plVar6[1];
              if (plVar6 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
                *plVar5 = (longlong)plVar6;
              }
              else {
                puVar3 = (undefined8 *)plVar6[1];
                if (plVar6 == (longlong *)*puVar3) {
                  *puVar3 = plVar5;
                  *plVar5 = (longlong)plVar6;
                }
                else {
                  puVar3[2] = plVar5;
                  *plVar5 = (longlong)plVar6;
                }
              }
LAB_1800033cf:
              plVar6[1] = (longlong)plVar5;
              break;
            }
LAB_180003273:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar2 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar2 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
            }
            else {
              plVar5 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar5[2]) {
                plVar5[2] = lVar2;
              }
              else {
                *plVar5 = lVar2;
              }
            }
            *(longlong **)(lVar2 + 0x10) = plVar6;
            plVar6[1] = lVar2;
            plVar5 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) != '\x01') || (*(char *)(*plVar5 + 0x18) != '\x01')) {
              if (*(char *)(*plVar5 + 0x18) == '\x01') {
                *(undefined1 *)(plVar5[2] + 0x18) = 1;
                plVar7 = (longlong *)plVar5[2];
                *(undefined1 *)(plVar5 + 3) = 0;
                plVar5[2] = *plVar7;
                if (*(char *)(*plVar7 + 0x19) == '\0') {
                  *(longlong **)(*plVar7 + 8) = plVar5;
                }
                plVar7[1] = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar7;
                }
                else {
                  puVar3 = (undefined8 *)plVar5[1];
                  if (plVar5 == (longlong *)*puVar3) {
                    *puVar3 = plVar7;
                  }
                  else {
                    puVar3[2] = plVar7;
                  }
                }
                *plVar7 = (longlong)plVar5;
                plVar5[1] = (longlong)plVar7;
                plVar5 = (longlong *)*plVar6;
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(*plVar5 + 0x18) = 1;
              plVar5 = (longlong *)*plVar6;
              *plVar6 = plVar5[2];
              if (*(char *)(plVar5[2] + 0x19) == '\0') {
                *(longlong **)(plVar5[2] + 8) = plVar6;
              }
              plVar5[1] = plVar6[1];
              if (plVar6 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
              }
              else {
                puVar3 = (undefined8 *)plVar6[1];
                if (plVar6 == (longlong *)puVar3[2]) {
                  puVar3[2] = plVar5;
                }
                else {
                  *puVar3 = plVar5;
                }
              }
              plVar5[2] = (longlong)plVar6;
              goto LAB_1800033cf;
            }
            goto LAB_180003273;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}




void FUN_180003400(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180003430(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




longlong FUN_180003470(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  uVar1 = *param_1;
  lVar8 = (longlong)(param_2 - uVar1) >> 3;
  lVar3 = (longlong)(param_1[1] - uVar1) >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
    FUN_180003730();
    pcVar2 = (code *)swi(3);
    lVar3 = (*pcVar2)();
    return lVar3;
  }
  uVar6 = (longlong)(param_1[2] - uVar1) >> 3;
  uVar1 = lVar3 + 1;
  uVar4 = uVar1;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar1))
  {
    uVar4 = uVar1;
  }
  uVar6 = uVar4 * 8;
  if (uVar4 < 0x2000000000000000) {
    if (0xfff < uVar6) goto LAB_180003517;
    if (uVar6 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
LAB_180003517:
    uVar7 = uVar6 + 0x27;
    if (uVar7 <= uVar6) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_180003665;
    plVar11 = (longlong *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    plVar11[-1] = (longlong)pvVar5;
  }
  plVar9 = (longlong *)*param_3;
  plVar11[lVar8] = 0;
  if (plVar9 != (longlong *)0x0) {
    lVar3 = (**(code **)*plVar9)(plVar9,&DAT_18000c034);
    plVar11[lVar8] = lVar3;
    if (lVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    else {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  uVar6 = param_1[1];
  uVar7 = *param_1;
  plVar9 = plVar11;
  if (param_2 != uVar6) {
    FUN_180003870(*param_1,param_2,plVar11);
    uVar6 = param_1[1];
    plVar9 = plVar11 + lVar8 + 1;
    uVar7 = param_2;
  }
  FUN_180003870(uVar7,uVar6,plVar9);
  plVar9 = (longlong *)*param_1;
  if (plVar9 != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[1];
    if (plVar9 != plVar10) {
      do {
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar9 + 8))();
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
      plVar9 = (longlong *)*param_1;
    }
    plVar10 = plVar9;
    if ((0xfff < (param_1[2] - (longlong)plVar9 & 0xfffffffffffffff8)) &&
       (plVar10 = (longlong *)plVar9[-1],
       0x1f < (ulonglong)((longlong)plVar9 + (-8 - (longlong)plVar10)))) {
LAB_180003665:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar10);
  }
  *param_1 = (ulonglong)plVar11;
  param_1[1] = (ulonglong)(plVar11 + uVar1);
  param_1[2] = (ulonglong)(plVar11 + uVar4);
  return *param_1 + lVar8 * 8;
}




undefined8 * FUN_180003680(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = dnc::
            FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,0>
            ::vftable;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  puVar1[1] = uVar2;
  return puVar1;
}




void FUN_1800036d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180003720(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return;
}




void FUN_180003730(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180003750(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180003770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = dnc::ConstructFunction<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>::vftable
  ;
  return;
}




bool FUN_180003790(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CEFIBoot>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




undefined8 * FUN_1800037c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(100);
  *(undefined4 *)(puVar1 + 1) = 0;
  memset((void *)((longlong)puVar1 + 0xc),0,0x54);
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *puVar1 = CMomObject<class_CEFIBoot>::vftable;
  return puVar1;
}




undefined8 * FUN_180003810(undefined8 *param_1,uint param_2)

{
  *param_1 = CEFIBoot::vftable;
  if (*(int *)(param_1 + 1) == 1) {
    memset((void *)((longlong)param_1 + 0xc),0,0x54);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_180003870(ulonglong param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  uVar3 = (param_2 - param_1) + 7 >> 3;
  if (param_2 < param_1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    lVar5 = param_1 - (longlong)param_3;
    do {
      plVar1 = *(longlong **)(lVar5 + (longlong)param_3);
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000c034);
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
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return param_3;
}




void FUN_180003920(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180003de0(param_1);
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




undefined8 *
FUN_180003970(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  longlong *plVar7;
  undefined8 *_Buf2;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 in_stack_ffffffffffffffa8;
  ulonglong local_48 [2];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1[1] == 0) {
    FUN_180003e90(param_1,param_2,'\x01',(undefined8 *)*param_1,in_stack_ffffffffffffffa8,param_5);
    return param_2;
  }
  plVar8 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar8) {
    plVar8 = param_3 + 4;
    if (0xf < (ulonglong)param_3[7]) {
      plVar8 = (longlong *)param_3[4];
    }
    puVar6 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar6 = (undefined8 *)*param_4;
    }
    uVar3 = param_3[6];
    uVar9 = param_4[2];
    uVar10 = uVar9;
    if (uVar3 < uVar9) {
      uVar10 = uVar3;
    }
    uVar5 = memcmp(puVar6,plVar8,uVar10);
    if (uVar5 == 0) {
      if (uVar9 < uVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar3 < uVar9);
      }
    }
    if ((int)uVar5 < 0) {
      FUN_180003e90(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffa8,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar8) {
    puVar6 = (undefined8 *)plVar8[2];
    _Buf2 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      _Buf2 = (undefined8 *)*param_4;
    }
    _Buf1 = puVar6 + 4;
    if (0xf < (ulonglong)puVar6[7]) {
      _Buf1 = (undefined8 *)puVar6[4];
    }
    uVar3 = param_4[2];
    uVar9 = puVar6[6];
    uVar10 = uVar9;
    if (uVar3 < uVar9) {
      uVar10 = uVar3;
    }
    uVar5 = memcmp(_Buf1,_Buf2,uVar10);
    if (uVar5 == 0) {
      if (uVar9 < uVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar3 < uVar9);
      }
    }
    if ((int)uVar5 < 0) {
      FUN_180003e90(param_1,param_2,'\0',puVar6,in_stack_ffffffffffffffa8,param_5);
      return param_2;
    }
  }
  else {
    plVar7 = param_3 + 4;
    if (0xf < (ulonglong)param_3[7]) {
      plVar7 = (longlong *)param_3[4];
    }
    puVar6 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar6 = (undefined8 *)*param_4;
    }
    uVar3 = param_3[6];
    uVar9 = param_4[2];
    uVar10 = uVar9;
    if (uVar3 < uVar9) {
      uVar10 = uVar3;
    }
    uVar5 = memcmp(puVar6,plVar7,uVar10);
    if (uVar5 == 0) {
      if (uVar9 < uVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar3 < uVar9);
      }
    }
    if ((int)uVar5 < 0) {
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar7 = (longlong *)*param_3;
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar1 = *(char *)(plVar7[2] + 0x19);
          plVar11 = (longlong *)plVar7[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(plVar11[2] + 0x19);
            plVar7 = plVar11;
            plVar11 = (longlong *)plVar11[2];
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar4 = (longlong *)param_3[1];
          plVar11 = param_3;
          while ((plVar7 = plVar4, cVar1 == '\0' && (plVar11 == (longlong *)*plVar7))) {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar4 = (longlong *)plVar7[1];
            plVar11 = plVar7;
          }
          if (*(char *)((longlong)plVar11 + 0x19) != '\0') {
            plVar7 = plVar11;
          }
        }
      }
      else {
        plVar7 = (longlong *)param_3[2];
      }
      puVar6 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar6 = (undefined8 *)*param_4;
      }
      plVar11 = plVar7 + 4;
      if (0xf < (ulonglong)plVar7[7]) {
        plVar11 = (longlong *)plVar7[4];
      }
      uVar3 = plVar7[6];
      uVar9 = uVar3;
      if ((ulonglong)param_4[2] < uVar3) {
        uVar9 = param_4[2];
      }
      uVar5 = memcmp(plVar11,puVar6,uVar9);
      if (uVar5 == 0) {
        if (uVar3 < (ulonglong)param_4[2]) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)((ulonglong)param_4[2] < uVar3);
        }
      }
      if ((int)uVar5 < 0) {
        if (*(char *)(plVar7[2] + 0x19) != '\0') {
          FUN_180003e90(param_1,param_2,'\0',plVar7,in_stack_ffffffffffffffa8,param_5);
          return param_2;
        }
        FUN_180003e90(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffffa8,param_5);
        return param_2;
      }
      uVar9 = param_4[2];
    }
    puVar6 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar6 = (undefined8 *)*param_4;
    }
    plVar7 = param_3 + 4;
    if (0xf < (ulonglong)param_3[7]) {
      plVar7 = (longlong *)param_3[4];
    }
    uVar3 = param_3[6];
    uVar10 = uVar3;
    if (uVar9 < uVar3) {
      uVar10 = uVar9;
    }
    uVar5 = memcmp(plVar7,puVar6,uVar10);
    if (uVar5 == 0) {
      if (uVar3 < uVar9) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar9 < uVar3);
      }
    }
    if ((int)uVar5 < 0) {
      plVar7 = (longlong *)param_3[2];
      cVar1 = *(char *)((longlong)plVar7 + 0x19);
      if (cVar1 == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        plVar11 = (longlong *)*plVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar7 = plVar11;
          plVar11 = (longlong *)*plVar11;
        }
      }
      else {
        cVar2 = *(char *)(param_3[1] + 0x19);
        plVar4 = (longlong *)param_3[1];
        plVar11 = param_3;
        while ((plVar7 = plVar4, cVar2 == '\0' && (plVar11 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar4 = (longlong *)plVar7[1];
          plVar11 = plVar7;
        }
      }
      if (plVar7 != plVar8) {
        plVar8 = plVar7 + 4;
        if (0xf < (ulonglong)plVar7[7]) {
          plVar8 = (longlong *)plVar7[4];
        }
        puVar6 = param_4;
        if (0xf < (ulonglong)param_4[3]) {
          puVar6 = (undefined8 *)*param_4;
        }
        local_48[0] = plVar7[6];
        uVar3 = param_4[2];
        uVar10 = uVar3;
        if (local_48[0] < uVar3) {
          uVar10 = local_48[0];
        }
        uVar5 = memcmp(puVar6,plVar8,uVar10);
        if (uVar5 == 0) {
          if (uVar3 < local_48[0]) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(local_48[0] < uVar3);
          }
        }
        if (-1 < (int)uVar5) goto LAB_180003d9f;
      }
      if (cVar1 != '\0') {
        FUN_180003e90(param_1,param_2,'\0',param_3,in_stack_ffffffffffffffa8,param_5);
        return param_2;
      }
      FUN_180003e90(param_1,param_2,'\x01',plVar7,in_stack_ffffffffffffffa8,param_5);
      return param_2;
    }
  }
LAB_180003d9f:
  puVar6 = FUN_180004140(param_1,local_48,uVar10,param_4,param_5);
  *param_2 = *puVar6;
  return param_2;
}




void FUN_180003de0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180003e10(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  FUN_180002ed0((longlong *)((longlong)param_2 + 0x40));
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x38)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x20);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x38) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  free(param_2);
  return;
}




undefined8 *
FUN_180003e90(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x2e8ba2e8ba2e8b8 < (ulonglong)param_1[1]) {
    FUN_180003e10(0x2e8ba2e8ba2e8b9,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_180003f19;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_180003f19;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_180003f19:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_180004105;
      }
LAB_180004037:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180004037;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_180004105:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180004140(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *local_res8;
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar8 = (longlong *)*param_1;
  bVar10 = 1;
  plVar12 = plVar8;
  local_res8 = param_1;
  if (*(char *)(plVar8[1] + 0x19) == '\0') {
    uVar2 = param_4[2];
    plVar9 = (longlong *)plVar8[1];
    do {
      plVar12 = plVar9;
      plVar9 = plVar12 + 4;
      if (0xf < (ulonglong)plVar12[7]) {
        plVar9 = (longlong *)plVar12[4];
      }
      puVar7 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar7 = (undefined8 *)*param_4;
      }
      uVar3 = plVar12[6];
      uVar11 = uVar2;
      if (uVar3 < uVar2) {
        uVar11 = uVar3;
      }
      uVar6 = memcmp(puVar7,plVar9,uVar11);
      if (uVar6 == 0) {
        if (uVar2 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar3 < uVar2);
        }
      }
      bVar10 = (byte)(uVar6 >> 0x1f);
      if ((int)uVar6 < 0) {
        plVar9 = (longlong *)*plVar12;
      }
      else {
        plVar9 = (longlong *)plVar12[2];
      }
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
  }
  plVar5 = local_res8;
  plVar9 = plVar12;
  if (bVar10 != 0) {
    if (plVar12 == (longlong *)*plVar8) {
      puVar7 = FUN_180003e90(local_res8,&local_res8,'\x01',plVar12,in_stack_ffffffffffffffb8,param_5
                            );
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
      plVar9 = (longlong *)*plVar12;
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar9[2] + 0x19);
        plVar8 = (longlong *)plVar9[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar8[2] + 0x19);
          plVar9 = plVar8;
          plVar8 = (longlong *)plVar8[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar8 = (longlong *)plVar12[1];
        plVar9 = plVar12;
        while ((plVar4 = plVar8, cVar1 == '\0' && (plVar9 == (longlong *)*plVar4))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar8 = (longlong *)plVar4[1];
          plVar9 = plVar4;
        }
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          plVar9 = plVar4;
        }
      }
    }
    else {
      plVar9 = (longlong *)plVar12[2];
    }
  }
  puVar7 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar7 = (undefined8 *)*param_4;
  }
  plVar8 = plVar9 + 4;
  if (0xf < (ulonglong)plVar9[7]) {
    plVar8 = (longlong *)plVar9[4];
  }
  uVar2 = param_4[2];
  uVar3 = plVar9[6];
  uVar11 = uVar3;
  if (uVar2 < uVar3) {
    uVar11 = uVar2;
  }
  uVar6 = memcmp(plVar8,puVar7,uVar11);
  if (uVar6 == 0) {
    if (uVar3 < uVar2) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(uVar2 < uVar3);
    }
  }
  if ((int)uVar6 < 0) {
    puVar7 = FUN_180003e90(plVar5,&local_res8,bVar10,plVar12,in_stack_ffffffffffffffb8,param_5);
    *param_2 = *puVar7;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FUN_180003e10(plVar8,param_5);
    *param_2 = plVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined * FUN_180004370(void)

{
  return &DAT_18000cd90;
}




int FUN_180004380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180004370();
  iVar1 = __stdio_common_vswprintf(*puVar2,param_1,0x7fffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_1800043e0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  BOOL BVar2;
  int iVar3;
  void *pvVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HANDLE ProcessHandle;
  bool bVar6;
  undefined1 auStackY_188 [32];
  HANDLE local_158;
  _LUID local_150;
  _TOKEN_PRIVILEGES local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = DAT_18000c010 ^ (ulonglong)auStackY_188;
  pvVar4 = operator_new(0x100000);
  *(void **)(param_1 + 2) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    memset(&local_138.dwMajorVersion,0,0x110);
    local_138.dwOSVersionInfoSize = 0x114;
    BVar2 = GetVersionExW(&local_138);
    if (BVar2 == 0) {
      bVar6 = true;
LAB_180004594:
      if (!bVar6) goto LAB_1800045a6;
    }
    else if (local_138.dwMajorVersion < 6) {
      iVar3 = 0;
LAB_1800044c0:
      param_1[10] = iVar3;
      local_148.PrivilegeCount = 0;
      local_148.Privileges[0].Luid.LowPart = 0;
      local_148.Privileges[0].Luid.HighPart = 0;
      local_148.Privileges[0].Attributes = 0;
      local_158 = (HANDLE)0x0;
      local_150.LowPart = 0;
      local_150.HighPart = 0;
      ProcessHandle = GetCurrentProcess();
      BVar2 = OpenProcessToken(ProcessHandle,0x28,&local_158);
      if (BVar2 == 0) {
        bVar6 = true;
      }
      else {
        BVar2 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeSystemEnvironmentPrivilege",&local_150);
        bVar6 = true;
        if (BVar2 != 0) {
          local_148.Privileges[0].Luid.LowPart = local_150.LowPart;
          local_148.Privileges[0].Luid.HighPart = local_150.HighPart;
          local_148.PrivilegeCount = 1;
          local_148.Privileges[0].Attributes = 2;
          BVar2 = AdjustTokenPrivileges(local_158,0,&local_148,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0)
          ;
          bVar6 = BVar2 == 0;
        }
      }
      if (local_158 != (HANDLE)0x0) {
        CloseHandle(local_158);
      }
      if (!bVar6) {
        if (param_2 != (undefined8 *)0x0) {
          uVar1 = param_2[1];
          *(undefined8 *)(param_1 + 0xc) = *param_2;
          *(undefined8 *)(param_1 + 0xe) = uVar1;
          uVar1 = param_2[3];
          *(undefined8 *)(param_1 + 0x10) = param_2[2];
          *(undefined8 *)(param_1 + 0x12) = uVar1;
          *(undefined8 *)(param_1 + 0x14) = param_2[4];
          param_1[0xb] = 1;
        }
        *param_1 = 1;
        bVar6 = false;
        goto LAB_180004594;
      }
    }
    else {
      hModule = LoadLibraryW(L"Kernel32.dll");
      *(HMODULE *)(param_1 + 4) = hModule;
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,"SetFirmwareEnvironmentVariableW");
        *(FARPROC *)(param_1 + 6) = pFVar5;
        if (pFVar5 != (FARPROC)0x0) {
          pFVar5 = GetProcAddress(*(HMODULE *)(param_1 + 4),"GetFirmwareEnvironmentVariableW");
          *(FARPROC *)(param_1 + 8) = pFVar5;
          if (pFVar5 != (FARPROC)0x0) {
            iVar3 = 1;
            goto LAB_1800044c0;
          }
        }
      }
    }
  }
  *param_1 = 1;
  FUN_1800045e0(param_1);
LAB_1800045a6:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_188);
  return;
}




void FUN_1800045e0(int *param_1)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  undefined1 auStackY_68 [32];
  HANDLE local_30;
  _LUID local_28;
  _TOKEN_PRIVILEGES local_20;
  ulonglong local_10;
  
  local_10 = DAT_18000c010 ^ (ulonglong)auStackY_68;
  if (*param_1 != 0) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      free(*(void **)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(HMODULE *)(param_1 + 4) != (HMODULE)0x0) {
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      FreeLibrary(*(HMODULE *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
    }
    param_1[10] = 0;
    local_20.PrivilegeCount = 0;
    local_20.Privileges[0].Luid.LowPart = 0;
    local_20.Privileges[0].Luid.HighPart = 0;
    local_20.Privileges[0].Attributes = 0;
    local_30 = (HANDLE)0x0;
    local_28.LowPart = 0;
    local_28.HighPart = 0;
    ProcessHandle = GetCurrentProcess();
    BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_30);
    if (BVar1 != 0) {
      BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeSystemEnvironmentPrivilege",&local_28);
      if (BVar1 != 0) {
        local_20.Privileges[0].Luid.LowPart = local_28.LowPart;
        local_20.Privileges[0].Luid.HighPart = local_28.HighPart;
        local_20.PrivilegeCount = 1;
        local_20.Privileges[0].Attributes = 0;
        AdjustTokenPrivileges(local_30,0,&local_20,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      }
    }
    if (local_30 != (HANDLE)0x0) {
      CloseHandle(local_30);
    }
    param_1[0xb] = 0;
    *param_1 = 0;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




int FUN_1800046f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = 1;
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  memset(*(void **)(param_1 + 8),0,0x100000);
  iVar5 = (**(code **)(param_1 + 0x20))
                    (param_2,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",*(undefined8 *)(param_1 + 8),
                     0x100000);
  if (iVar5 == 0) {
    iVar7 = 2;
  }
  else {
    psVar6 = (short *)(*(longlong *)(param_1 + 8) + 6);
    sVar1 = *psVar6;
    while (sVar1 != 0) {
      psVar6 = psVar6 + 1;
      sVar1 = *psVar6;
    }
    psVar6 = psVar6 + 1;
    *param_3 = 0;
    bVar4 = false;
    do {
      if ((char)*psVar6 == '\x7f') {
        if (*(char *)((longlong)psVar6 + 1) == -1) {
          iVar8 = iVar7;
        }
      }
      else if (((char)*psVar6 == '\x04') && (*(char *)((longlong)psVar6 + 1) == '\x01')) {
        if (*(int *)(param_1 + 0x30) == 0) {
          if ((*(char *)((longlong)psVar6 + 0x29) == '\x01') && ((char)psVar6[0x14] == '\x01')) {
            bVar2 = bVar3;
            if (*(int *)(psVar6 + 0xc) == *(int *)(param_1 + 0x34)) {
              bVar2 = true;
            }
            bVar3 = bVar2;
            if ((*(longlong *)(psVar6 + 4) == *(longlong *)(param_1 + 0x48)) &&
               (*(longlong *)(psVar6 + 8) == *(longlong *)(param_1 + 0x50))) {
              bVar4 = true;
            }
          }
        }
        else if ((((*(char *)((longlong)psVar6 + 0x29) == '\x02') && ((char)psVar6[0x14] == '\x02'))
                 && (*(longlong *)(psVar6 + 0xc) == *(longlong *)(param_1 + 0x34))) &&
                (*(longlong *)(psVar6 + 0x10) == *(longlong *)(param_1 + 0x3c))) {
          *param_3 = 1;
          break;
        }
      }
      psVar6 = (short *)((longlong)psVar6 + (ulonglong)(ushort)psVar6[1]);
    } while (iVar8 != 0);
  }
  if (((*(int *)(param_1 + 0x30) == 0) && (bVar2)) && (bVar4)) {
    *param_3 = 1;
  }
  return iVar7;
}




void FUN_180004840(int *param_1)

{
  short sVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  int iVar8;
  __uint64 _Var9;
  void *_Dst;
  short *psVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar14;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar13;
  
  local_38 = DAT_18000c010 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  if ((*param_1 != 0) && (param_1[0xb] != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if ((param_1[10] != 0) &&
       ((iVar5 = (**(code **)(param_1 + 8))
                           (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_78,0x40)
        , iVar5 == 0 && (DVar6 = GetLastError(), DVar6 != 1)))) {
      memset(*(void **)(param_1 + 2),0,0x100000);
      uVar11 = 0x100000;
      uVar7 = (**(code **)(param_1 + 8))
                        (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                         *(undefined8 *)(param_1 + 2));
      if (uVar7 != 0) {
        auVar2 = ZEXT816(2) * ZEXT416(uVar7 >> 1 & 0xffff);
        _Var9 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          _Var9 = 0xffffffffffffffff;
        }
        _Dst = operator_new(_Var9);
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 2),(ulonglong)uVar7);
          uVar13 = 0;
          uVar14 = (ushort)(uVar7 >> 1);
          if (uVar14 != 0) {
            do {
              FUN_180004380(&local_90,L"Boot%04X",
                            (ulonglong)*(ushort *)((longlong)_Dst + uVar13 * 2),uVar11);
              iVar5 = FUN_1800046f0((longlong)param_1,&local_90,local_98);
              if (iVar5 != 0) break;
              if (local_98[0] != 0) {
                bVar4 = true;
                bVar3 = false;
                iVar5 = 0;
                memset(*(void **)(param_1 + 2),0,0x100000);
                uVar7 = (**(code **)(param_1 + 8))
                                  (&local_90,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                                   *(undefined8 *)(param_1 + 2),0x100000);
                uVar11 = (ulonglong)uVar7;
                if (uVar7 == 0) break;
                psVar10 = (short *)(*(longlong *)(param_1 + 2) + 6);
                sVar1 = *psVar10;
                while (sVar1 != 0) {
                  psVar10 = psVar10 + 1;
                  sVar1 = *psVar10;
                }
                psVar10 = psVar10 + 1;
                do {
                  if ((char)*psVar10 == '\x7f') {
                    if (*(char *)((longlong)psVar10 + 1) == -1) {
                      bVar4 = false;
                    }
                  }
                  else if ((((char)*psVar10 == '\x04') &&
                           (*(char *)((longlong)psVar10 + 1) == '\x01')) &&
                          (*(char *)((longlong)psVar10 + 0x29) != '\0')) {
                    bVar3 = true;
                    *(int *)(psVar10 + 2) = param_1[0x11];
                  }
                  psVar10 = (short *)((longlong)psVar10 + (ulonglong)(ushort)psVar10[1]);
                } while (bVar4);
                if (bVar3) {
                  if (*(longlong *)(param_1 + 2) == 0) {
                    iVar5 = 4;
                  }
                  else {
                    iVar8 = (**(code **)(param_1 + 6))
                                      (&local_90,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}");
                    if (iVar8 == 0) {
                      iVar5 = 2;
                    }
                  }
                }
                if (iVar5 != 0) break;
              }
              uVar12 = (short)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
            } while (uVar12 < uVar14);
          }
          free(_Dst);
        }
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180004b40(int *param_1,longlong param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  DWORD DVar9;
  uint uVar10;
  int iVar11;
  __uint64 _Var12;
  void *_Dst;
  short *psVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar17;
  
  local_38 = DAT_18000c010 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  if (((*param_1 != 0) && (param_1[0xb] != 0)) && (param_2 != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if (((param_1[10] != 0) &&
        (iVar8 = (**(code **)(param_1 + 8))
                           (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_78,0x40)
        , iVar8 == 0)) && (DVar9 = GetLastError(), DVar9 != 1)) {
      memset(*(void **)(param_1 + 2),0,0x100000);
      uVar14 = 0x100000;
      uVar10 = (**(code **)(param_1 + 8))
                         (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                          *(undefined8 *)(param_1 + 2));
      if (uVar10 != 0) {
        auVar2 = ZEXT816(2) * ZEXT416(uVar10 >> 1 & 0xffff);
        _Var12 = auVar2._0_8_;
        if (auVar2._8_8_ != 0) {
          _Var12 = 0xffffffffffffffff;
        }
        _Dst = operator_new(_Var12);
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 2),(ulonglong)uVar10);
          uVar17 = 0;
          uVar15 = (ushort)(uVar10 >> 1);
          if (uVar15 != 0) {
            do {
              bVar6 = false;
              FUN_180004380(&local_90,L"Boot%04X",
                            (ulonglong)*(ushort *)((longlong)_Dst + uVar17 * 2),uVar14);
              iVar8 = FUN_1800046f0((longlong)param_1,&local_90,local_98);
              if (iVar8 != 0) break;
              if (local_98[0] != 0) {
                bVar7 = true;
                memset(*(void **)(param_1 + 2),0,0x100000);
                uVar10 = (**(code **)(param_1 + 8))
                                   (&local_90,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                                    *(undefined8 *)(param_1 + 2),0x100000);
                uVar14 = (ulonglong)uVar10;
                if (uVar10 == 0) break;
                psVar13 = (short *)(*(longlong *)(param_1 + 2) + 6);
                sVar1 = *psVar13;
                while (sVar1 != 0) {
                  psVar13 = psVar13 + 1;
                  sVar1 = *psVar13;
                }
                psVar13 = psVar13 + 1;
                do {
                  if ((char)*psVar13 == '\x7f') {
                    if (*(char *)((longlong)psVar13 + 1) == -1) {
                      bVar7 = false;
                    }
                  }
                  else if (((char)*psVar13 == '\x04') &&
                          (*(char *)((longlong)psVar13 + 1) == '\x01')) {
                    if (*(char *)((longlong)psVar13 + 0x29) == '\x01') {
                      *(undefined4 *)(psVar13 + 2) = *(undefined4 *)(param_2 + 0x14);
                      *(undefined8 *)(psVar13 + 4) = *(undefined8 *)(param_2 + 0x18);
                      *(undefined8 *)(psVar13 + 8) = *(undefined8 *)(param_2 + 0x20);
                      *(undefined4 *)(psVar13 + 0xc) = *(undefined4 *)(param_2 + 4);
                    }
                    else {
                      if (*(char *)((longlong)psVar13 + 0x29) != '\x02') goto LAB_180004dbe;
                      *(undefined4 *)(psVar13 + 2) = *(undefined4 *)(param_2 + 0x14);
                      *(undefined8 *)(psVar13 + 4) = *(undefined8 *)(param_2 + 0x18);
                      *(undefined8 *)(psVar13 + 8) = *(undefined8 *)(param_2 + 0x20);
                      uVar3 = *(undefined4 *)(param_2 + 8);
                      uVar4 = *(undefined4 *)(param_2 + 0xc);
                      uVar5 = *(undefined4 *)(param_2 + 0x10);
                      *(undefined4 *)(psVar13 + 0xc) = *(undefined4 *)(param_2 + 4);
                      *(undefined4 *)(psVar13 + 0xe) = uVar3;
                      *(undefined4 *)(psVar13 + 0x10) = uVar4;
                      *(undefined4 *)(psVar13 + 0x12) = uVar5;
                    }
                    bVar6 = true;
                  }
LAB_180004dbe:
                  psVar13 = (short *)((longlong)psVar13 + (ulonglong)(ushort)psVar13[1]);
                } while (bVar7);
                iVar8 = 0;
                if (bVar6) {
                  if (*(longlong *)(param_1 + 2) == 0) {
                    iVar8 = 4;
                  }
                  else {
                    iVar11 = (**(code **)(param_1 + 6))
                                       (&local_90,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}");
                    if (iVar11 == 0) {
                      iVar8 = 2;
                    }
                  }
                }
                if (iVar8 != 0) break;
              }
              uVar16 = (short)uVar17 + 1;
              uVar17 = (ulonglong)uVar16;
            } while (uVar16 < uVar15);
          }
          free(_Dst);
        }
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180004e70(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  __uint64 _Var6;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar7;
  short sVar8;
  ushort uVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = DAT_18000c010 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  local_98[0] = 0;
  uVar9 = 0;
  sVar8 = 0;
  local_88 = 0;
  local_80 = 0;
  if ((*param_1 != 0) && (param_1[0xb] != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if ((param_1[10] != 0) &&
       ((iVar3 = (**(code **)(param_1 + 8))
                           (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_78,0x40)
        , iVar3 == 0 && (DVar4 = GetLastError(), DVar4 != 1)))) {
      memset(*(void **)(param_1 + 2),0,0x100000);
      uVar11 = 0x100000;
      uVar5 = (**(code **)(param_1 + 8))
                        (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                         *(undefined8 *)(param_1 + 2));
      if (uVar5 != 0) {
        uVar7 = CONCAT44(0,uVar5 >> 1 & 0xffff);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar7;
        _Var6 = SUB168(ZEXT816(2) * auVar1,0);
        if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
          _Var6 = 0xffffffffffffffff;
        }
        _Dst = operator_new(_Var6);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        _Var6 = SUB168(ZEXT816(2) * auVar2,0);
        if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
          _Var6 = 0xffffffffffffffff;
        }
        _Dst_00 = operator_new(_Var6);
        if ((_Dst != (void *)0x0) && (_Dst_00 != (void *)0x0)) {
          memcpy(_Dst,*(void **)(param_1 + 2),(ulonglong)uVar5);
          memset(_Dst_00,0,(ulonglong)uVar5);
          uVar10 = 0;
          uVar12 = (ushort)(uVar5 >> 1);
          if (uVar12 != 0) {
            do {
              FUN_180004380(&local_90,L"Boot%04X",
                            (ulonglong)*(ushort *)((longlong)_Dst + (ulonglong)uVar10 * 2),uVar11);
              iVar3 = FUN_1800046f0((longlong)param_1,&local_90,local_98);
              if (iVar3 != 0) goto LAB_1800050b6;
              if (local_98[0] == 0) {
                *(undefined2 *)((longlong)_Dst_00 + uVar9 * 2) =
                     *(undefined2 *)((longlong)_Dst + (ulonglong)uVar10 * 2);
                uVar9 = (ulonglong)(ushort)((short)uVar9 + 1);
              }
              else {
                uVar11 = 0;
                iVar3 = (**(code **)(param_1 + 6))
                                  (&local_90,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",0);
                if (iVar3 == 0) goto LAB_1800050b6;
              }
              sVar8 = (short)uVar9;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
          if (sVar8 != 0) {
            (**(code **)(param_1 + 6))
                      (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",_Dst_00);
          }
        }
LAB_1800050b6:
        if (_Dst != (void *)0x0) {
          free(_Dst);
        }
        if (_Dst_00 != (void *)0x0) {
          free(_Dst_00);
        }
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180005120(int *param_1,short *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  __uint64 _Var5;
  void *_Dst;
  ushort uVar6;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_18000c010 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  if ((*param_1 != 0) && (param_1[0xb] != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if ((param_1[10] != 0) &&
       ((iVar2 = (**(code **)(param_1 + 8))
                           (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_78,0x40)
        , iVar2 == 0 && (DVar3 = GetLastError(), DVar3 != 1)))) {
      memset(*(void **)(param_1 + 2),0,0x100000);
      uVar10 = 0x100000;
      uVar4 = (**(code **)(param_1 + 8))
                        (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                         *(undefined8 *)(param_1 + 2));
      if (uVar4 != 0) {
        auVar1 = ZEXT816(2) * ZEXT416(uVar4 >> 1 & 0xffff);
        _Var5 = auVar1._0_8_;
        if (auVar1._8_8_ != 0) {
          _Var5 = 0xffffffffffffffff;
        }
        _Dst = operator_new(_Var5);
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 2),(ulonglong)uVar4);
          sVar8 = 0;
          sVar9 = 0;
          uVar7 = 0;
          uVar11 = (ushort)(uVar4 >> 1);
          if (uVar11 != 0) {
            do {
              FUN_180004380(&local_90,L"Boot%04X",(ulonglong)*(ushort *)((longlong)_Dst + uVar7 * 2)
                            ,uVar10);
              iVar2 = FUN_1800046f0((longlong)param_1,&local_90,local_98);
              if (iVar2 != 0) goto LAB_1800052d8;
              sVar9 = sVar8;
              if (local_98[0] != 0) {
                sVar9 = sVar8 + 1;
              }
              uVar6 = (short)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
              sVar8 = sVar9;
            } while (uVar6 < uVar11);
          }
          *param_2 = sVar9;
LAB_1800052d8:
          free(_Dst);
        }
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180005320(int *param_1,void *param_2,uint *param_3,short param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  __uint64 _Var5;
  void *_Dst;
  ushort uVar6;
  short sVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000c010 ^ (ulonglong)auStack_d8;
  sVar7 = 0;
  local_a8 = 0;
  local_b8[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = param_2;
  if ((*param_1 != 0) && (param_1[0xb] != 0)) {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (((param_1[10] != 0) &&
        ((iVar2 = (**(code **)(param_1 + 8))
                            (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_88,0x40
                            ), iVar2 == 0 && (DVar3 = GetLastError(), DVar3 != 1)))) &&
       ((param_2 == (void *)0x0 || (*param_3 != 0)))) {
      memset(*(void **)(param_1 + 2),0,0x100000);
      uVar8 = 0x100000;
      uVar4 = (**(code **)(param_1 + 8))
                        (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                         *(undefined8 *)(param_1 + 2));
      if (uVar4 != 0) {
        auVar1 = ZEXT816(2) * ZEXT416(uVar4 >> 1 & 0xffff);
        _Var5 = auVar1._0_8_;
        if (auVar1._8_8_ != 0) {
          _Var5 = 0xffffffffffffffff;
        }
        _Dst = operator_new(_Var5);
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 2),(ulonglong)uVar4);
          uVar6 = 0;
          uVar9 = (ushort)(uVar4 >> 1);
          if (uVar9 != 0) {
            do {
              FUN_180004380(&local_a8,L"Boot%04X",
                            (ulonglong)*(ushort *)((longlong)_Dst + (ulonglong)uVar6 * 2),uVar8);
              iVar2 = FUN_1800046f0((longlong)param_1,&local_a8,local_b8);
              if (iVar2 != 0) break;
              if (local_b8[0] != 0) {
                if (sVar7 == param_4) {
                  memset(*(void **)(param_1 + 2),0,0x100000);
                  uVar4 = (**(code **)(param_1 + 8))
                                    (&local_a8,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                                     *(undefined8 *)(param_1 + 2),0x100000);
                  if (uVar4 == 0) break;
                  if (local_b0 != (void *)0x0) {
                    if (*param_3 < uVar4) break;
                    memcpy(local_b0,*(void **)(param_1 + 2),(ulonglong)uVar4);
                  }
                  *param_3 = uVar4;
                  break;
                }
                sVar7 = sVar7 + 1;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          free(_Dst);
        }
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_d8);
  return;
}




void FUN_1800055b0(int *param_1,longlong param_2,int param_3,int param_4)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  DWORD DVar8;
  uint uVar9;
  short *psVar10;
  __uint64 _Var11;
  void *_Dst;
  ushort *_Dst_00;
  longlong lVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_18000c010 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if ((*param_1 != 0) && (param_1[0xb] != 0)) {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if ((param_1[10] != 0) &&
       ((iVar7 = (**(code **)(param_1 + 8))
                           (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_88),
        iVar7 == 0 && (DVar8 = GetLastError(), DVar8 != 1)))) {
      bVar4 = true;
      bVar6 = false;
      bVar5 = false;
      if ((param_2 == 0) || (param_3 == 0)) {
        bVar6 = true;
      }
      else {
        psVar10 = (short *)(param_2 + 6);
        sVar1 = *(short *)(param_2 + 6);
        while (sVar1 != 0) {
          psVar10 = psVar10 + 1;
          sVar1 = *psVar10;
        }
        psVar10 = psVar10 + 1;
        do {
          if ((char)*psVar10 == '\x7f') {
            if (*(char *)((longlong)psVar10 + 1) == -1) {
              bVar4 = false;
            }
          }
          else if (((((char)*psVar10 == '\x04') && (*(char *)((longlong)psVar10 + 1) == '\x01')) &&
                   (*(char *)((longlong)psVar10 + 0x29) == '\x02')) &&
                  ((char)psVar10[0x14] == '\x02')) {
            *(int *)(psVar10 + 2) = param_1[0x11];
            *(undefined8 *)(psVar10 + 4) = *(undefined8 *)(param_1 + 0x12);
            *(undefined8 *)(psVar10 + 8) = *(undefined8 *)(param_1 + 0x14);
            uVar16 = *(undefined8 *)(param_1 + 0xf);
            *(undefined8 *)(psVar10 + 0xc) = *(undefined8 *)(param_1 + 0xd);
            *(undefined8 *)(psVar10 + 0x10) = uVar16;
            bVar5 = true;
          }
          psVar10 = (short *)((longlong)psVar10 + (ulonglong)(ushort)psVar10[1]);
        } while (bVar4);
        if (!bVar5) goto LAB_180005910;
      }
      if (!bVar6) {
        memset(*(void **)(param_1 + 2),0,0x100000);
        uVar16 = 0x100000;
        uVar9 = (**(code **)(param_1 + 8))
                          (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                           *(undefined8 *)(param_1 + 2));
        if (uVar9 != 0) {
          uVar15 = CONCAT44(0,uVar9 >> 1 & 0xffff);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar15;
          _Var11 = SUB168(ZEXT816(2) * auVar2,0);
          if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
            _Var11 = 0xffffffffffffffff;
          }
          _Dst = operator_new(_Var11);
          if (_Dst != (void *)0x0) {
            memset(_Dst,0,uVar15 * 2);
            lVar12 = 0;
            uVar13 = (ushort)(uVar9 >> 1);
            uVar14 = 0;
            if (uVar13 != 0) {
              do {
                if (*(ushort *)(lVar12 + *(longlong *)(param_1 + 2)) < uVar13) {
                  *(undefined2 *)
                   ((longlong)_Dst + (ulonglong)*(ushort *)(lVar12 + *(longlong *)(param_1 + 2)) * 2
                   ) = 1;
                }
                lVar12 = lVar12 + 2;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (uVar13 != 0) {
              do {
                if (*(short *)((longlong)_Dst + (ulonglong)uVar14 * 2) != 1) break;
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar13);
            }
            free(_Dst);
            FUN_180004380(&local_a8,L"Boot%04X",(ulonglong)uVar14,uVar16);
            bVar4 = false;
            if ((param_2 == 0) || (param_3 == 0)) {
              bVar4 = true;
            }
            else {
              iVar7 = (**(code **)(param_1 + 6))
                                (&local_a8,L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",param_2,param_3
                                );
              if (iVar7 == 0) goto LAB_180005910;
            }
            if (!bVar4) {
              memset(*(void **)(param_1 + 2),0,0x100000);
              uVar9 = (**(code **)(param_1 + 8))
                                (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                                 *(undefined8 *)(param_1 + 2),0x100000);
              if (uVar9 != 0) {
                uVar15 = (ulonglong)(uVar9 >> 1) & 0xffff;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar15 + 1;
                _Var11 = SUB168(ZEXT816(2) * auVar3,0);
                if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
                  _Var11 = 0xffffffffffffffff;
                }
                _Dst_00 = (ushort *)operator_new(_Var11);
                if (_Dst_00 != (ushort *)0x0) {
                  if (param_4 == 0) {
                    memcpy(_Dst_00,*(void **)(param_1 + 2),(ulonglong)uVar9);
                    _Dst_00[uVar15] = uVar14;
                  }
                  else {
                    *_Dst_00 = uVar14;
                    memcpy(_Dst_00 + 1,*(void **)(param_1 + 2),(ulonglong)uVar9);
                  }
                  if ((uVar9 + 2 == 0) ||
                     (iVar7 = (**(code **)(param_1 + 6))
                                        (L"BootOrder",L"{8BE4DF61-93CA-11d2-AA0D-00E098032B8C}",
                                         _Dst_00,uVar9 + 2), iVar7 != 0)) {
                    free(_Dst_00);
                  }
                  else {
                    free(_Dst_00);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_180005910:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180005940(int *param_1,uint *param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18000c010 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (*param_1 == 0) {
    __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
    return;
  }
  if (param_1[10] == 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 8))
                      (&DAT_180008890,L"{00000000-0000-0000-0000-000000000000}",&local_58,0x40);
    if (iVar1 != 0) {
      __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
      return;
    }
    DVar2 = GetLastError();
    *param_2 = (uint)(DVar2 != 1);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000c010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180005a34(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180005a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180005a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000c610);
  return;
}




void FUN_180005a78(void)

{
  __std_type_info_destroy_list(&DAT_18000c610);
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
    FUN_180006978();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180006958();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180005ac8(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000c620,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180005c1a;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000c650 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000c650 != (HANDLE)0x0) goto LAB_180005bb8;
  }
  else {
    DAT_18000c650 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000c648);
    bVar7 = 0x40 - ((byte)DAT_18000c010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000c658 = DAT_18000c010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000c660 = DAT_18000c010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180005bb8:
    uVar6 = FUN_180006264(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180005c28);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180005c1a:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180005c28(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  if (DAT_18000c650 != (HANDLE)0x0) {
    CloseHandle(DAT_18000c650);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000c000 = DAT_18000c000 + 1;
  *param_1 = DAT_18000c000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000c000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180005d34:
                    /* WARNING: Could not recover jumptable at 0x000180005d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000c000;
      goto LAB_180005d34;
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
  
  if (DAT_18000c650 != (HANDLE)0x0) {
    SetEvent(DAT_18000c650);
                    /* WARNING: Could not recover jumptable at 0x000180005d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000c650);
    return;
  }
  bVar1 = (byte)DAT_18000c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000c010 ^ _DAT_18000c660) >> bVar1 |
            (DAT_18000c010 ^ _DAT_18000c660) << 0x40 - bVar1))(&DAT_18000c648);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000c650 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
    WaitForSingleObjectEx(DAT_18000c650,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180005e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000c620);
    return;
  }
  bVar1 = (byte)DAT_18000c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000c010 ^ _DAT_18000c658) >> bVar1 |
            (DAT_18000c010 ^ _DAT_18000c658) << 0x40 - bVar1))
            (&DAT_18000c648,&DAT_18000c620,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000180005e3d. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180005e6e;
  capture_previous_context((PCONTEXT)&DAT_18000c710);
  _DAT_18000c680 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000c7a8 = puVar3 + 0x40;
  _DAT_18000c790 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000c670 = 0xc0000409;
  _DAT_18000c674 = 1;
  _DAT_18000c688 = 1;
  DAT_18000c690 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000c010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000c008;
  *(undefined8 *)(puVar3 + -8) = 0x180005f10;
  DAT_18000c808 = _DAT_18000c680;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800083a8);
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
  *(undefined8 *)(puVar3 + -8) = 0x180005f56;
  capture_current_context((PCONTEXT)&DAT_18000c710);
  _DAT_18000c680 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000c7a8 = puVar3 + 0x30;
  _DAT_18000c670 = 0xc0000409;
  _DAT_18000c674 = 1;
  _DAT_18000c688 = 1;
  DAT_18000c690 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180005fc2;
  DAT_18000c808 = _DAT_18000c680;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800083a8);
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
LAB_1800060da:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000cbe8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000cbe8;
        pvVar1 = DAT_18000cbe8;
      }
      DAT_18000cbe8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800060da;
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
    uVar3 = FUN_180001050();
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
  
  uVar1 = FUN_180006264(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180006e6c();
  if (cVar1 != '\0') {
    cVar1 = FUN_180006e6c();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180006e6c();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180006e6c();
  FUN_180006e6c();
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
    _execute_onexit_table(&DAT_18000cbf8);
    return;
  }
  uVar2 = FUN_180001070();
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
  FUN_180006e6c();
  FUN_180006e6c();
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
    DAT_18000cbf0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180006e6c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180006e6c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180006e6c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180006264(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000cbf1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000c010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000c010;
      _DAT_18000cbf8 = in_RAX;
      uRam000000018000cc00 = in_RAX;
      _DAT_18000cc08 = in_RAX;
      _DAT_18000cc10 = in_RAX;
      uRam000000018000cc18 = in_RAX;
      _DAT_18000cc20 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000cbf8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000cc10), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000cbf1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x0001800063ca) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_1800063b3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800063b3:
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
    DAT_18000cbe8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000cbf0 == '\0') || (param_2 == '\0')) {
    FUN_180006e6c();
    FUN_180006e6c();
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
  
  bVar2 = (byte)DAT_18000c010 & 0x3f;
  if (((DAT_18000c010 ^ _DAT_18000cbf8) >> bVar2 | (DAT_18000c010 ^ _DAT_18000cbf8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000cbf8,_Func);
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
    if (DAT_18000cc28 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000cc28 = DAT_18000cc28 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000cbe0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180005a78();
      FID_conflict__RTC_Initialize();
      DAT_18000cbe0 = 0;
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
    if (DAT_18000cbe0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000cbe0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180005a68();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180008258,&DAT_180008268);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180008248,&DAT_180008250);
        DAT_18000cbe0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180006d58();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000cc28 = DAT_18000cc28 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180006750) */
/* WARNING: Removing unreachable block (ram,0x0001800066df) */
/* WARNING: Removing unreachable block (ram,0x000180006793) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000cc28 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180001050();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001050();
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




undefined8 * FUN_180006808(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180006848(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180006868(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800068a8(undefined8 *param_1)

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




undefined8 * FUN_180006914(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180006958(void)

{
  undefined8 local_28 [5];
  
  FUN_180006848(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000a638);
}




void FUN_180006978(void)

{
  undefined8 local_28 [5];
  
  FUN_1800068a8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000a6c0);
}




char * FUN_180006998(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800069ac(void)

{
  _DAT_18000cc2c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800069e7;
  FUN_1800069ac();
  *(undefined8 *)(puVar4 + -8) = 0x1800069f8;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180006a02;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180006a1c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180006a5d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180006a8f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180006ab1;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180006ad2;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180006add;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180006aed;
    FUN_1800069ac();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180006bce) */
/* WARNING: Removing unreachable block (ram,0x000180006b4c) */
/* WARNING: Removing unreachable block (ram,0x000180006b27) */
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
  
  DAT_18000c01c = 2;
  _DAT_18000c018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000c020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000cc34 = DAT_18000cc34 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000cc34 = DAT_18000cc34 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000c018 = 2;
    DAT_18000c01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000c01c = 0xe;
      _DAT_18000c018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000c018 = 5;
        DAT_18000c01c = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000c030 != 0;
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
  
  if (DAT_18000c010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000c010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000c010 == 0x2b992ddfa232) {
      DAT_18000c010 = 0x2b992ddfa233;
    }
  }
  DAT_18000c008 = ~DAT_18000c010;
  return;
}




undefined * FUN_180006d34(void)

{
  return &DAT_18000cc38;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180004370();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180006d34();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180006d58(void)

{
  return &DAT_18000d220;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800099a0; puVar1 < &DAT_1800099a0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_1800099b0; puVar1 < &DAT_1800099b0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180006e6c(void)

{
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

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180006fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined8 Catch_All_180006fb0(void)

{
  return 0x180001acc;
}




void Unwind_180006fd0(void)

{
  _Init_thread_abort(&DAT_18000cc58);
  return;
}




void Unwind_180006fe0(void)

{
  _Init_thread_abort(&DAT_18000cec0);
  return;
}




void Unwind_180006fec(undefined8 param_1,longlong param_2)

{
  FUN_1800023d0((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_180006ff8(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180007015(undefined8 param_1,longlong param_2)

{
  FUN_1800023d0((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_180007030(void)

{
  _Init_thread_abort(&DAT_18000cff0);
  return;
}




void Unwind_18000703c(void)

{
  _Init_thread_abort(&DAT_18000cff4);
  return;
}




void Unwind_180007048(undefined8 param_1,longlong param_2)

{
  FUN_180001d60((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180007054(void)

{
  _Init_thread_abort(&DAT_18000cff8);
  return;
}




void Unwind_180007060(undefined8 param_1,longlong param_2)

{
  FUN_180002440((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_18000706c(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180002ed0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180007078(undefined8 param_1,longlong param_2)

{
  FUN_180002b30((longlong *)(param_2 + 0x38));
  return;
}




undefined * Catch_180007090(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,1);
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  FUN_1800020f0();
  lVar2 = __RTtypeid(*(undefined8 *)(param_2 + 0x48));
  __std_type_info_name(lVar2 + 8,&DAT_18000c610);
  FUN_180001c00(0xfffffff6);
  return &DAT_18000345e;
}




undefined * Catch_All_1800070f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,1);
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  FUN_1800020f0();
  FUN_180001c00(0xfffffff5);
  return &DAT_18000345e;
}




void Unwind_180007140(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Catch_All_180007160(undefined8 param_1,longlong param_2)

{
  FUN_180003e10(param_1,*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_180007190(undefined8 param_1,longlong param_2)

{
  FUN_180003e10(param_1,*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_1800071cb(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800071e2(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800071fe(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180007240(void)

{
  undefined8 local_res8 [4];
  
  FUN_180002d10((longlong *)&DAT_18000ced8,local_res8,(longlong *)*DAT_18000ced8,DAT_18000ced8);
  free(DAT_18000ced8);
  return;
}




void FUN_180007280(void)

{
  undefined8 local_res8 [4];
  
  FUN_180002d10((longlong *)&DAT_18000ceb0,local_res8,(longlong *)*DAT_18000ceb0,DAT_18000ceb0);
  free(DAT_18000ceb0);
  return;
}



